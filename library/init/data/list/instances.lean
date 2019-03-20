/-
Copyright (c) 2016 Microsoft Corporation. All rights reserved.
Released under Apache 2.0 license as described in the file LICENSE.
Author: Leonardo de Moura
-/
prelude
import init.data.List.basic
import init.control.Alternative init.control.Monad
open List

universes u v

instance : Monad List :=
{ pure := @List.ret, map := @List.map, bind := @List.bind }

instance : Alternative List :=
{ failure := @List.nil,
  orelse  := @List.append,
  ..List.Monad }
