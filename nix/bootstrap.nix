{ debug ? false, stdenv, lib, cmake, gmp, buildLeanPackage }:
rec {
  inherit stdenv;
  buildCMake = args: stdenv.mkDerivation ({
    nativeBuildInputs = [ cmake ];
    buildInputs = [ gmp ];
    # https://github.com/NixOS/nixpkgs/issues/60919
    hardeningDisable = [ "all" ];
    cmakeFlags = [ "-DSTAGE=1" "-DPREV_STAGE=./faux-prev-stage" ] ++ lib.optional (args.debug or debug) [ "-DCMAKE_BUILD_TYPE=Debug" ];
    dontStrip = (args.debug or debug);

    postConfigure = ''
      patchShebangs bin
    '';
    installPhase = ''
      mkdir $out
      mv bin/ lib/ include/ $out/
    '';
  } // args // {
    src = args.realSrc or (lib.sourceByRegex args.src [ "[a-z].*" "CMakeLists\.txt" ]);
  });
  leanc = buildCMake {
    name = "leanc";
    src = ../src;
    dontBuild = true;
  };
  leancpp = buildCMake {
    name = "leancpp";
    src = ../src;
    preConfigure = ''
      echo "target_sources(leancpp PRIVATE shell/lean.cpp)" >> CMakeLists.txt
    '';
    buildFlags = [ "leancpp" ];
  };
  stage0 = buildCMake {
    name = "lean-stage0";
    src = ../stage0/src;
    debug = false;
    cmakeFlags = [ "-DSTAGE=0" ];
    preConfigure = ''
      ln -s ${../stage0/stdlib} ../stdlib
    '';
  };
  stage = { stage, prevStage, self }:
    let
      desc = "stage${toString stage}";
      build = buildLeanPackage.override { lean = prevStage; lean-final = self; };
    in (all: all // all.lean) rec {
      inherit leancpp;
      Init = build { name = "Init"; src = ../src; srcDir = "/src"; deps = {}; };
      Std  = build { name = "Std";  src = ../src; srcDir = "/src"; deps = { inherit Init; }; };
      Lean = build { name = "Lean"; src = ../src; srcDir = "/src"; deps = { inherit Init Std; }; };
      inherit (Lean) emacs-dev emacs-package;
      mods = Init.mods // Std.mods // Lean.mods;
      lean = stdenv.mkDerivation {
        name = "lean-${desc}";
        buildCommand = ''
          mkdir -p $out/bin $out/lib/lean
          ln -sf ${leancpp}/lib/lean/* ${Init.staticLib}/* ${Init.modRoot}/* ${Lean.staticLib}/* ${Lean.modRoot}/* ${Std.staticLib}/* ${Std.modRoot}/* $out/lib/lean
          ${leancpp}/bin/leanc -x none -rdynamic -L${gmp}/lib -L$out/lib/lean ${leancpp}/lib/lean/* -o $out/bin/lean
          ln -s ${leancpp}/bin/{leanc,lean-gdb.py} $out/bin/
          ln -s ${leancpp}/include $out/include
        '';
      };
      test = buildCMake {
        name = "lean-test-${desc}";
        realSrc = lib.sourceByRegex ../. [ "src.*" "tests.*" ];
        preConfigure = ''
          cd src
        '';
        postConfigure = ''
          patchShebangs ../../tests
          rm -r bin lib include
          ln -sf ${lean}/* .
        '';
        buildPhase = ''
          ctest --output-on-failure -E 'leancomptest_(doc_example|foreign)' -j$NIX_BUILD_CORES
        '';
        installPhase = ''
          touch $out
        '';
      };
    };
  stage1 = stage { stage = 1; prevStage = stage0; self = stage1; };
  stage2 = stage { stage = 2; prevStage = stage1; self = stage2; };
  stage3 = stage { stage = 3; prevStage = stage2; self = stage3; };
}