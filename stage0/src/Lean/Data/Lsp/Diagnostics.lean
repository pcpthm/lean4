/-
Copyright (c) 2020 Marc Huisinga. All rights reserved.
Released under Apache 2.0 license as described in the file LICENSE.

Authors: Marc Huisinga, Wojciech Nawrocki
-/
import Lean.Data.Json
import Lean.Data.Lsp.Basic
import Lean.Data.Lsp.Utf16

import Lean.Message

/-! Definitions and functionality for emitting diagnostic information
such as errors, warnings and #command outputs from the LSP server. -/

namespace Lean
namespace Lsp

open Json

inductive DiagnosticSeverity where
  | error | warning | information | hint
  deriving Inhabited, BEq

instance : FromJson DiagnosticSeverity := ⟨fun j =>
  match j.getNat? with
  | some 1 => DiagnosticSeverity.error
  | some 2 => DiagnosticSeverity.warning
  | some 3 => DiagnosticSeverity.information
  | some 4 => DiagnosticSeverity.hint
  | _      => none⟩

instance : ToJson DiagnosticSeverity := ⟨fun
  | DiagnosticSeverity.error       => 1
  | DiagnosticSeverity.warning     => 2
  | DiagnosticSeverity.information => 3
  | DiagnosticSeverity.hint        => 4⟩

inductive DiagnosticCode where
  | int (i : Int)
  | string (s : String)
  deriving Inhabited, BEq

instance : FromJson DiagnosticCode := ⟨fun
  | num (i : Int) => DiagnosticCode.int i
  | str s         => DiagnosticCode.string s
  | _             => none⟩

instance : ToJson DiagnosticCode := ⟨fun
  | DiagnosticCode.int i    => i
  | DiagnosticCode.string s => s⟩

inductive DiagnosticTag where
  | unnecessary
  | deprecated
  deriving Inhabited, BEq

instance : FromJson DiagnosticTag := ⟨fun j =>
  match j.getNat? with
  | some 1 => DiagnosticTag.unnecessary
  | some 2 => DiagnosticTag.deprecated
  | _      => none⟩

instance : ToJson DiagnosticTag := ⟨fun
  | DiagnosticTag.unnecessary => (1 : Nat)
  | DiagnosticTag.deprecated  => (2 : Nat)⟩

structure DiagnosticRelatedInformation where
  location : Location
  message : String
  deriving Inhabited, BEq, ToJson, FromJson

structure Diagnostic where
  range : Range
  severity? : Option DiagnosticSeverity := none
  code? : Option DiagnosticCode := none
  source? : Option String := none
  message : String
  tags? : Option (Array DiagnosticTag) := none
  relatedInformation? : Option (Array DiagnosticRelatedInformation) := none
  deriving Inhabited, BEq, ToJson, FromJson

structure PublishDiagnosticsParams where
  uri : DocumentUri
  version? : Option Int := none
  diagnostics: Array Diagnostic
  deriving Inhabited, BEq, ToJson, FromJson

/-- Transform a Lean Message concerning the given text into an LSP Diagnostic. -/
def msgToDiagnostic (text : FileMap) (m : Message) : IO Diagnostic := do
  let low : Lsp.Position := text.leanPosToLspPos m.pos
  let high : Lsp.Position := match m.endPos with
    | some endPos => text.leanPosToLspPos endPos
    | none        => low
  let range : Range := ⟨low, high⟩
  let severity := match m.severity with
    | MessageSeverity.information => DiagnosticSeverity.information
    | MessageSeverity.warning     => DiagnosticSeverity.warning
    | MessageSeverity.error       => DiagnosticSeverity.error
  let source := "Lean 4 server"
  let message ← m.data.toString
  pure {
    range := range,
    severity? := severity,
    source? := source,
    message := message
  }

end Lsp
end Lean
