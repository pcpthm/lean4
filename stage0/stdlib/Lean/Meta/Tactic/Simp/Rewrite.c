// Lean compiler output
// Module: Lean.Meta.Tactic.Simp.Rewrite
// Imports: Init Lean.Meta.SynthInstance Lean.Meta.Tactic.Simp.Types
#include <lean/lean.h>
#if defined(__clang__)
#pragma clang diagnostic ignored "-Wunused-parameter"
#pragma clang diagnostic ignored "-Wunused-label"
#elif defined(__GNUC__) && !defined(__CLANG__)
#pragma GCC diagnostic ignored "-Wunused-parameter"
#pragma GCC diagnostic ignored "-Wunused-label"
#pragma GCC diagnostic ignored "-Wunused-but-set-variable"
#endif
#ifdef __cplusplus
extern "C" {
#endif
lean_object* l_Lean_Meta_mkPropExt(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
size_t l_USize_add(size_t, size_t);
lean_object* l___private_Lean_Meta_Basic_0__Lean_Meta_withNewMCtxDepthImp___rarg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Meta_Simp_rewrite_finalizeProof_match__1(lean_object*);
lean_object* l_Lean_stringToMessageData(lean_object*);
lean_object* l_ReaderT_bind___at_Lean_Meta_Simp_rewrite_tryLemma_x3f___spec__1___at_Lean_Meta_Simp_rewrite_tryLemma_x3f___spec__2___lambda__1(uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
extern lean_object* l_Array_forInUnsafe_loop___at___private_Lean_Meta_LevelDefEq_0__Lean_Meta_processPostponedStep___spec__4___closed__1;
lean_object* l_Lean_Meta_Simp_synthesizeArgs_match__3(lean_object*);
lean_object* l_Lean_Meta_Simp_synthesizeArgs___lambda__1(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Array_forInUnsafe_loop___at_Lean_Meta_Simp_rewrite___spec__3___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Meta_Simp_rewriteUsingDecide_x3f(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Meta_Simp_rewriteCtorEq_x3f_match__1(lean_object*);
lean_object* l_Lean_Meta_Simp_rewrite_finalizeProof(uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* lean_name_mk_string(lean_object*, lean_object*);
extern lean_object* l___private_Lean_MonadEnv_0__Lean_supportedRecursors___closed__5;
lean_object* lean_array_uget(lean_object*, size_t);
lean_object* l_Lean_Meta_Simp_tryRewriteUsingDecide(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_ReaderT_bind___at_Lean_Meta_Simp_rewrite_tryLemma_x3f___spec__1___at_Lean_Meta_Simp_rewrite_tryLemma_x3f___spec__2___lambda__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Meta_Simp_synthesizeArgs_match__2(lean_object*);
lean_object* lean_array_fswap(lean_object*, lean_object*, lean_object*);
extern lean_object* l_Lean_Meta_SynthInstance_getInstances___lambda__1___closed__7;
lean_object* l_Lean_Meta_Simp_rewrite_match__2(lean_object*);
uint8_t l_Lean_checkTraceOption(lean_object*, lean_object*);
lean_object* lean_st_ref_get(lean_object*, lean_object*);
lean_object* l_Lean_Meta_SimpLemma_getName(lean_object*);
lean_object* l_Lean_Meta_Simp_rewrite_getLHS(uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_ReaderT_bind___at_Lean_Meta_Simp_rewrite_tryLemma_x3f___spec__1___at_Lean_Meta_Simp_rewrite_tryLemma_x3f___spec__2___lambda__1___closed__1;
extern lean_object* l_myMacro____x40_Init_Notation___hyg_6045____closed__4;
lean_object* l_Lean_Meta_Simp_rewrite_match__1(lean_object*);
uint8_t lean_name_eq(lean_object*, lean_object*);
lean_object* l_Lean_Expr_constructorApp_x3f(lean_object*, lean_object*);
lean_object* l_Lean_Meta_Simp_synthesizeArgs___lambda__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Expr_appFn_x21(lean_object*);
lean_object* l_Array_toSubarray___rarg(lean_object*, lean_object*, lean_object*);
lean_object* lean_array_push(lean_object*, lean_object*);
lean_object* lean_array_get_size(lean_object*);
lean_object* l_ReaderT_bind___at_Lean_Meta_Simp_rewrite_tryLemma_x3f___spec__1___at_Lean_Meta_Simp_rewrite_tryLemma_x3f___spec__2___closed__2;
lean_object* l_Array_forInUnsafe_loop___at_Lean_Meta_Simp_synthesizeArgs___spec__3___closed__5;
lean_object* l_ReaderT_bind___at_Lean_Meta_Simp_rewrite_tryLemma_x3f___spec__1___at_Lean_Meta_Simp_rewrite_tryLemma_x3f___spec__2___closed__1;
lean_object* l_Array_forInUnsafe_loop___at_Lean_Meta_Simp_synthesizeArgs___spec__3___closed__6;
lean_object* l_Lean_Meta_Simp_rewrite_finalizeProof___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Expr_appArg_x21(lean_object*);
uint8_t lean_expr_lt(lean_object*, lean_object*);
lean_object* l_Lean_Meta_Simp_postDefault(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_ReaderT_bind___at_Lean_Meta_Simp_rewrite_tryLemma_x3f___spec__1(lean_object*, lean_object*);
uint8_t l_USize_decLt(size_t, size_t);
lean_object* lean_nat_add(lean_object*, lean_object*);
lean_object* l_Lean_Meta_mkDecide(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Meta_Simp_rewriteUsingDecide_x3f___closed__7;
lean_object* l_Lean_Meta_mkEqRefl(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Meta_Simp_rewriteCtorEq_x3f___closed__2;
lean_object* l_Lean_mkAppN(lean_object*, lean_object*);
lean_object* l_Lean_Meta_Simp_rewriteCtorEq_x3f___lambda__1(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Meta_Simp_rewrite_finalizeProof_match__1___rarg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Array_forInUnsafe_loop___at_Lean_Meta_Simp_synthesizeArgs___spec__3___closed__11;
extern lean_object* l_Lean_Meta_withNewMCtxDepth___at_Lean_Meta_synthInstance_x3f___spec__4___at_Lean_Meta_synthInstance_x3f___spec__5___lambda__1___closed__8;
lean_object* l_Lean_Meta_Simp_rewritePre(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Meta_Simp_rewrite_getLHS_match__1(lean_object*);
extern lean_object* l_Lean_instQuoteBool___closed__5;
lean_object* l_Lean_Meta_Simp_rewriteUsingDecide_x3f___closed__8;
lean_object* l_Lean_Meta_Simp_rewrite_tryLemma_x3f_match__1(lean_object*);
lean_object* l_Lean_Meta_Simp_rewrite(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* lean_array_fget(lean_object*, lean_object*);
lean_object* l_Lean_Meta_Simp_rewriteCtorEq_x3f_match__2___rarg(lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Meta_Simp_rewrite_getLHS_match__1___rarg(uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Meta_mkEqFalse(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
uint8_t lean_nat_dec_eq(lean_object*, lean_object*);
lean_object* l_Lean_Meta_withNewMCtxDepth___at_Lean_Meta_Simp_rewrite_tryLemma_x3f___spec__3(lean_object*);
lean_object* l_ReaderT_bind___at_Lean_Meta_Simp_rewrite_tryLemma_x3f___spec__1___at_Lean_Meta_Simp_rewrite_tryLemma_x3f___spec__2___lambda__2___closed__3;
lean_object* l___private_Lean_Meta_Basic_0__Lean_Meta_forallMetaTelescopeReducingAux(lean_object*, uint8_t, lean_object*, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* lean_st_ref_take(lean_object*, lean_object*);
lean_object* lean_nat_sub(lean_object*, lean_object*);
lean_object* l_ReaderT_bind___at_Lean_Meta_Simp_rewrite_tryLemma_x3f___spec__1___at_Lean_Meta_Simp_rewrite_tryLemma_x3f___spec__2___lambda__2(uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Meta_Simp_synthesizeArgs___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Meta_Simp_rewriteUsingDecide_x3f___closed__4;
lean_object* l_Lean_Meta_Simp_synthesizeArgs___closed__1;
extern lean_object* l_Lean_Meta_initFn____x40_Lean_Meta_Basic___hyg_557____closed__2;
lean_object* l_Lean_Meta_mkLambdaFVars(lean_object*, lean_object*, uint8_t, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Meta_Simp_synthesizeArgs_match__1(lean_object*);
lean_object* l_Lean_addTrace___at_Lean_Meta_Simp_synthesizeArgs___spec__1(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Meta_Simp_rewrite___closed__4;
lean_object* l_Lean_Meta_Simp_rewrite___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
extern lean_object* l_Lean_instQuoteBool___closed__3;
lean_object* l_Lean_Meta_Simp_rewriteUsingDecide_x3f___closed__3;
lean_object* l_ReaderT_bind___at_Lean_Meta_Simp_rewrite_tryLemma_x3f___spec__1___at_Lean_Meta_Simp_rewrite_tryLemma_x3f___spec__2___lambda__3(lean_object*, lean_object*, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_ReaderT_bind___at_Lean_Meta_Simp_rewrite_tryLemma_x3f___spec__1___at_Lean_Meta_Simp_rewrite_tryLemma_x3f___spec__2(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Array_forInUnsafe_loop___at_Lean_Meta_Simp_synthesizeArgs___spec__3___closed__10;
lean_object* l_Array_forInUnsafe_loop___at_Lean_Meta_Simp_synthesizeArgs___spec__3___closed__7;
extern lean_object* l_Lean_Parser_Tactic_rewrite___closed__1;
lean_object* l_Lean_Meta_Simp_synthesizeArgs_match__3___rarg(lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Meta_Simp_rewriteUsingDecide_x3f___closed__5;
lean_object* l_Lean_Meta_Simp_synthesizeArgs_match__4(lean_object*);
uint8_t l_Lean_Expr_isAppOfArity(lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Meta_Simp_rewrite_getRHS___closed__3;
lean_object* l_Lean_Meta_Simp_synthesizeArgs_match__4___rarg(lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Meta_mkEqTrue(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Meta_Simp_rewriteUsingDecide_x3f___closed__6;
extern lean_object* l_Lean_KernelException_toMessageData___closed__15;
uint8_t l_Array_isEmpty___rarg(lean_object*);
lean_object* l_Lean_Meta_Simp_rewriteCtorEq_x3f___closed__3;
uint8_t l_Lean_Expr_isConstOf(lean_object*, lean_object*);
lean_object* l_Lean_Meta_Simp_rewrite___closed__3;
lean_object* l_Lean_Meta_Simp_synthesizeArgs_match__1___rarg(lean_object*, lean_object*, lean_object*);
uint8_t l_Lean_BinderInfo_isInstImplicit(uint8_t);
lean_object* l_Array_forInUnsafe_loop___at_Lean_Meta_Simp_synthesizeArgs___spec__3(lean_object*, lean_object*, lean_object*, lean_object*, size_t, size_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Meta_whnf(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Meta_Simp_rewrite___lambda__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
size_t lean_usize_of_nat(lean_object*);
extern lean_object* l_Lean_Syntax_mkAntiquotNode___closed__9;
lean_object* l_Lean_Meta_Simp_rewrite_getRHS___closed__2;
extern lean_object* l_Lean_instToExprBool___lambda__1___closed__1;
lean_object* l_Lean_Meta_Simp_rewriteCtorEq_x3f_match__1___rarg(lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Meta_Simp_rewrite___closed__1;
lean_object* l_Lean_Meta_Simp_rewrite___closed__2;
lean_object* l_Lean_Meta_Simp_rewrite_getRHS___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Meta_Simp_rewrite_finalizeProof_match__1___rarg(uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Meta_Simp_rewrite_getRHS___closed__1;
lean_object* l_Lean_Meta_Simp_rewrite___lambda__1(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
extern lean_object* l_Lean_instToExprBool___lambda__1___closed__2;
lean_object* l_Lean_Meta_Simp_rewritePre___closed__1;
lean_object* l_Array_insertionSort_swapLoop___at_Lean_Meta_Simp_rewrite___spec__2(lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Meta_Simp_rewriteCtorEq_x3f___closed__1;
lean_object* l_Lean_Meta_Simp_rewriteCtorEq_x3f(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Meta_Simp_rewriteUsingDecide_x3f___closed__2;
lean_object* l_Std_PersistentArray_push___rarg(lean_object*, lean_object*);
lean_object* l_Lean_Meta_Simp_rewritePost(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Meta_trySynthInstance(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Meta_hasAssignableMVar(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Array_forInUnsafe_loop___at_Lean_Meta_Simp_synthesizeArgs___spec__3___closed__12;
lean_object* l_Lean_Meta_Simp_rewrite_getRHS___closed__4;
lean_object* l_Lean_Meta_Simp_rewriteUsingDecide_x3f___closed__1;
uint8_t l_Lean_Expr_isMVar(lean_object*);
lean_object* l_Lean_Meta_withNewMCtxDepth___at_Lean_Meta_Simp_rewrite_tryLemma_x3f___spec__3___rarg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_ReaderT_bind___at_Lean_Meta_Simp_rewrite_tryLemma_x3f___spec__1___at_Lean_Meta_Simp_rewrite_tryLemma_x3f___spec__2___lambda__3___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Meta_withNewMCtxDepth___at_Lean_Meta_Simp_rewrite_tryLemma_x3f___spec__3___at_Lean_Meta_Simp_rewrite_tryLemma_x3f___spec__4(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
uint8_t l_Lean_Expr_hasMVar(lean_object*);
lean_object* l_Lean_Meta_Simp_rewrite_match__1___rarg(lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Meta_Simp_rewrite_tryLemma_x3f_match__1___rarg(lean_object*, lean_object*);
lean_object* l_Lean_Meta_Simp_preDefault(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
extern lean_object* l_Lean_Parser_Tactic_simp___closed__1;
lean_object* l_Lean_Meta_Simp_rewriteCtorEq_x3f_match__2(lean_object*);
lean_object* l_Lean_Meta_Simp_rewrite_getLHS_match__1___rarg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Meta_mkEqFalse_x27(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* lean_st_ref_set(lean_object*, lean_object*, lean_object*);
lean_object* l___private_Lean_Util_Trace_0__Lean_checkTraceOptionM___at_Lean_Meta_Simp_synthesizeArgs___spec__2(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_ReaderT_bind___at_Lean_Meta_Simp_rewrite_tryLemma_x3f___spec__1___at_Lean_Meta_Simp_rewrite_tryLemma_x3f___spec__2___closed__3;
lean_object* l_Lean_addMessageContextFull___at_Lean_Meta_instAddMessageContextMetaM___spec__1(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Meta_inferType(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_ReaderT_bind___at_Lean_Meta_Simp_rewrite_tryLemma_x3f___spec__1___at_Lean_Meta_Simp_rewrite_tryLemma_x3f___spec__2___lambda__2___closed__4;
lean_object* l_Lean_Meta_Simp_rewritePost___closed__1;
lean_object* l_Lean_Meta_isExprDefEq(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_addTrace___at_Lean_Meta_Simp_synthesizeArgs___spec__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Array_forInUnsafe_loop___at_Lean_Meta_Simp_synthesizeArgs___spec__3___closed__3;
lean_object* l_Lean_Meta_mkNoConfusion(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Meta_instantiateMVars(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Array_forInUnsafe_loop___at_Lean_Meta_Simp_rewrite___spec__3(lean_object*, lean_object*, lean_object*, lean_object*, size_t, size_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Meta_Simp_tryRewriteCtorEq(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Meta_DiscrTree_getMatch___rarg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Array_insertionSort_traverse___at_Lean_Meta_Simp_rewrite___spec__1(lean_object*, lean_object*, lean_object*);
lean_object* l_Array_forInUnsafe_loop___at_Lean_Meta_Simp_synthesizeArgs___spec__3___closed__9;
lean_object* l_Lean_Meta_Simp_tryRewriteCtorEq_match__1___rarg(lean_object*, lean_object*, lean_object*);
extern lean_object* l_Lean_Parser_Tactic_changeWith___closed__3;
lean_object* l_Lean_Meta_SimpLemma_getValue(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Meta_Simp_rewrite_tryLemma_x3f(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
extern lean_object* l_Lean_mkOptionalNode___closed__2;
lean_object* l_Lean_Meta_Simp_rewrite_getRHS(uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
extern lean_object* l_Lean_Parser_Tactic_intro___closed__1;
lean_object* l_Array_forInUnsafe_loop___at_Lean_Meta_Simp_synthesizeArgs___spec__3___closed__8;
lean_object* l_ReaderT_bind___at_Lean_Meta_Simp_rewrite_tryLemma_x3f___spec__1___at_Lean_Meta_Simp_rewrite_tryLemma_x3f___spec__2___lambda__2___closed__2;
lean_object* l_Lean_Meta_Simp_tryRewriteCtorEq_match__1(lean_object*);
lean_object* l_Lean_Meta_Simp_synthesizeArgs_match__2___rarg(lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Meta_mkEq(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Meta_isProp(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_indentExpr(lean_object*);
uint8_t l_Lean_Expr_hasFVar(lean_object*);
lean_object* l_Array_forInUnsafe_loop___at_Lean_Meta_Simp_synthesizeArgs___spec__3___closed__4;
lean_object* l_Lean_Meta_Simp_synthesizeArgs(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_mkConst(lean_object*, lean_object*);
lean_object* l_ReaderT_bind___at_Lean_Meta_Simp_rewrite_tryLemma_x3f___spec__1___rarg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
extern lean_object* l_Array_findSomeM_x3f___rarg___closed__1;
lean_object* l_Array_forInUnsafe_loop___at_Lean_Meta_Simp_synthesizeArgs___spec__3___closed__1;
lean_object* l_ReaderT_bind___at_Lean_Meta_Simp_rewrite_tryLemma_x3f___spec__1___at_Lean_Meta_Simp_rewrite_tryLemma_x3f___spec__2___lambda__2___closed__1;
lean_object* l_Array_forInUnsafe_loop___at_Lean_Meta_Simp_synthesizeArgs___spec__3___closed__2;
lean_object* l_Lean_Meta_withLocalDecl___at___private_Lean_Meta_Tactic_Simp_SimpLemmas_0__Lean_Meta_isPerm___spec__1___rarg(lean_object*, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_ReaderT_bind___at_Lean_Meta_Simp_rewrite_tryLemma_x3f___spec__1___at_Lean_Meta_Simp_rewrite_tryLemma_x3f___spec__2___lambda__2___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Meta_Simp_rewrite_match__2___rarg(lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Meta_Simp_rewrite_getLHS___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l___private_Lean_Util_Trace_0__Lean_checkTraceOptionM___at_Lean_Meta_Simp_synthesizeArgs___spec__2___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
uint8_t lean_nat_dec_lt(lean_object*, lean_object*);
lean_object* l_Std_fmt___at_Lean_Meta_instToMessageDataSimpLemma___spec__1(lean_object*);
lean_object* l_Array_forInUnsafe_loop___at_Lean_Meta_Simp_synthesizeArgs___spec__3___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Meta_Simp_synthesizeArgs_match__1___rarg(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
if (lean_obj_tag(x_1) == 1)
{
lean_object* x_4; lean_object* x_5; 
lean_dec(x_3);
x_4 = lean_ctor_get(x_1, 0);
lean_inc(x_4);
lean_dec(x_1);
x_5 = lean_apply_1(x_2, x_4);
return x_5;
}
else
{
lean_object* x_6; 
lean_dec(x_2);
x_6 = lean_apply_1(x_3, x_1);
return x_6;
}
}
}
lean_object* l_Lean_Meta_Simp_synthesizeArgs_match__1(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = lean_alloc_closure((void*)(l_Lean_Meta_Simp_synthesizeArgs_match__1___rarg), 3, 0);
return x_2;
}
}
lean_object* l_Lean_Meta_Simp_synthesizeArgs_match__2___rarg(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
if (lean_obj_tag(x_1) == 0)
{
lean_object* x_4; lean_object* x_5; 
lean_dec(x_2);
x_4 = lean_box(0);
x_5 = lean_apply_1(x_3, x_4);
return x_5;
}
else
{
lean_object* x_6; lean_object* x_7; 
lean_dec(x_3);
x_6 = lean_ctor_get(x_1, 0);
lean_inc(x_6);
lean_dec(x_1);
x_7 = lean_apply_1(x_2, x_6);
return x_7;
}
}
}
lean_object* l_Lean_Meta_Simp_synthesizeArgs_match__2(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = lean_alloc_closure((void*)(l_Lean_Meta_Simp_synthesizeArgs_match__2___rarg), 3, 0);
return x_2;
}
}
lean_object* l_Lean_Meta_Simp_synthesizeArgs_match__3___rarg(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
if (lean_obj_tag(x_1) == 0)
{
lean_object* x_4; lean_object* x_5; 
lean_dec(x_3);
x_4 = lean_box(0);
x_5 = lean_apply_1(x_2, x_4);
return x_5;
}
else
{
lean_object* x_6; lean_object* x_7; lean_object* x_8; lean_object* x_9; 
lean_dec(x_2);
x_6 = lean_ctor_get(x_1, 0);
lean_inc(x_6);
lean_dec(x_1);
x_7 = lean_ctor_get(x_6, 0);
lean_inc(x_7);
x_8 = lean_ctor_get(x_6, 1);
lean_inc(x_8);
lean_dec(x_6);
x_9 = lean_apply_2(x_3, x_7, x_8);
return x_9;
}
}
}
lean_object* l_Lean_Meta_Simp_synthesizeArgs_match__3(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = lean_alloc_closure((void*)(l_Lean_Meta_Simp_synthesizeArgs_match__3___rarg), 3, 0);
return x_2;
}
}
lean_object* l_Lean_Meta_Simp_synthesizeArgs_match__4___rarg(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
if (lean_obj_tag(x_1) == 0)
{
lean_object* x_4; lean_object* x_5; 
lean_dec(x_3);
x_4 = lean_box(0);
x_5 = lean_apply_1(x_2, x_4);
return x_5;
}
else
{
lean_object* x_6; lean_object* x_7; 
lean_dec(x_2);
x_6 = lean_ctor_get(x_1, 0);
lean_inc(x_6);
lean_dec(x_1);
x_7 = lean_apply_1(x_3, x_6);
return x_7;
}
}
}
lean_object* l_Lean_Meta_Simp_synthesizeArgs_match__4(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = lean_alloc_closure((void*)(l_Lean_Meta_Simp_synthesizeArgs_match__4___rarg), 3, 0);
return x_2;
}
}
lean_object* l_Lean_addTrace___at_Lean_Meta_Simp_synthesizeArgs___spec__1(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9) {
_start:
{
lean_object* x_10; lean_object* x_11; lean_object* x_12; lean_object* x_13; lean_object* x_14; lean_object* x_15; lean_object* x_16; lean_object* x_17; uint8_t x_18; 
x_10 = lean_ctor_get(x_7, 3);
x_11 = l_Lean_addMessageContextFull___at_Lean_Meta_instAddMessageContextMetaM___spec__1(x_2, x_5, x_6, x_7, x_8, x_9);
x_12 = lean_ctor_get(x_11, 0);
lean_inc(x_12);
x_13 = lean_ctor_get(x_11, 1);
lean_inc(x_13);
lean_dec(x_11);
x_14 = lean_st_ref_take(x_8, x_13);
x_15 = lean_ctor_get(x_14, 0);
lean_inc(x_15);
x_16 = lean_ctor_get(x_15, 3);
lean_inc(x_16);
x_17 = lean_ctor_get(x_14, 1);
lean_inc(x_17);
lean_dec(x_14);
x_18 = !lean_is_exclusive(x_15);
if (x_18 == 0)
{
lean_object* x_19; uint8_t x_20; 
x_19 = lean_ctor_get(x_15, 3);
lean_dec(x_19);
x_20 = !lean_is_exclusive(x_16);
if (x_20 == 0)
{
lean_object* x_21; lean_object* x_22; lean_object* x_23; lean_object* x_24; lean_object* x_25; uint8_t x_26; 
x_21 = lean_ctor_get(x_16, 0);
x_22 = lean_alloc_ctor(11, 2, 0);
lean_ctor_set(x_22, 0, x_1);
lean_ctor_set(x_22, 1, x_12);
lean_inc(x_10);
x_23 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_23, 0, x_10);
lean_ctor_set(x_23, 1, x_22);
x_24 = l_Std_PersistentArray_push___rarg(x_21, x_23);
lean_ctor_set(x_16, 0, x_24);
x_25 = lean_st_ref_set(x_8, x_15, x_17);
x_26 = !lean_is_exclusive(x_25);
if (x_26 == 0)
{
lean_object* x_27; lean_object* x_28; 
x_27 = lean_ctor_get(x_25, 0);
lean_dec(x_27);
x_28 = lean_box(0);
lean_ctor_set(x_25, 0, x_28);
return x_25;
}
else
{
lean_object* x_29; lean_object* x_30; lean_object* x_31; 
x_29 = lean_ctor_get(x_25, 1);
lean_inc(x_29);
lean_dec(x_25);
x_30 = lean_box(0);
x_31 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_31, 0, x_30);
lean_ctor_set(x_31, 1, x_29);
return x_31;
}
}
else
{
uint8_t x_32; lean_object* x_33; lean_object* x_34; lean_object* x_35; lean_object* x_36; lean_object* x_37; lean_object* x_38; lean_object* x_39; lean_object* x_40; lean_object* x_41; lean_object* x_42; 
x_32 = lean_ctor_get_uint8(x_16, sizeof(void*)*1);
x_33 = lean_ctor_get(x_16, 0);
lean_inc(x_33);
lean_dec(x_16);
x_34 = lean_alloc_ctor(11, 2, 0);
lean_ctor_set(x_34, 0, x_1);
lean_ctor_set(x_34, 1, x_12);
lean_inc(x_10);
x_35 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_35, 0, x_10);
lean_ctor_set(x_35, 1, x_34);
x_36 = l_Std_PersistentArray_push___rarg(x_33, x_35);
x_37 = lean_alloc_ctor(0, 1, 1);
lean_ctor_set(x_37, 0, x_36);
lean_ctor_set_uint8(x_37, sizeof(void*)*1, x_32);
lean_ctor_set(x_15, 3, x_37);
x_38 = lean_st_ref_set(x_8, x_15, x_17);
x_39 = lean_ctor_get(x_38, 1);
lean_inc(x_39);
if (lean_is_exclusive(x_38)) {
 lean_ctor_release(x_38, 0);
 lean_ctor_release(x_38, 1);
 x_40 = x_38;
} else {
 lean_dec_ref(x_38);
 x_40 = lean_box(0);
}
x_41 = lean_box(0);
if (lean_is_scalar(x_40)) {
 x_42 = lean_alloc_ctor(0, 2, 0);
} else {
 x_42 = x_40;
}
lean_ctor_set(x_42, 0, x_41);
lean_ctor_set(x_42, 1, x_39);
return x_42;
}
}
else
{
lean_object* x_43; lean_object* x_44; lean_object* x_45; uint8_t x_46; lean_object* x_47; lean_object* x_48; lean_object* x_49; lean_object* x_50; lean_object* x_51; lean_object* x_52; lean_object* x_53; lean_object* x_54; lean_object* x_55; lean_object* x_56; lean_object* x_57; lean_object* x_58; 
x_43 = lean_ctor_get(x_15, 0);
x_44 = lean_ctor_get(x_15, 1);
x_45 = lean_ctor_get(x_15, 2);
lean_inc(x_45);
lean_inc(x_44);
lean_inc(x_43);
lean_dec(x_15);
x_46 = lean_ctor_get_uint8(x_16, sizeof(void*)*1);
x_47 = lean_ctor_get(x_16, 0);
lean_inc(x_47);
if (lean_is_exclusive(x_16)) {
 lean_ctor_release(x_16, 0);
 x_48 = x_16;
} else {
 lean_dec_ref(x_16);
 x_48 = lean_box(0);
}
x_49 = lean_alloc_ctor(11, 2, 0);
lean_ctor_set(x_49, 0, x_1);
lean_ctor_set(x_49, 1, x_12);
lean_inc(x_10);
x_50 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_50, 0, x_10);
lean_ctor_set(x_50, 1, x_49);
x_51 = l_Std_PersistentArray_push___rarg(x_47, x_50);
if (lean_is_scalar(x_48)) {
 x_52 = lean_alloc_ctor(0, 1, 1);
} else {
 x_52 = x_48;
}
lean_ctor_set(x_52, 0, x_51);
lean_ctor_set_uint8(x_52, sizeof(void*)*1, x_46);
x_53 = lean_alloc_ctor(0, 4, 0);
lean_ctor_set(x_53, 0, x_43);
lean_ctor_set(x_53, 1, x_44);
lean_ctor_set(x_53, 2, x_45);
lean_ctor_set(x_53, 3, x_52);
x_54 = lean_st_ref_set(x_8, x_53, x_17);
x_55 = lean_ctor_get(x_54, 1);
lean_inc(x_55);
if (lean_is_exclusive(x_54)) {
 lean_ctor_release(x_54, 0);
 lean_ctor_release(x_54, 1);
 x_56 = x_54;
} else {
 lean_dec_ref(x_54);
 x_56 = lean_box(0);
}
x_57 = lean_box(0);
if (lean_is_scalar(x_56)) {
 x_58 = lean_alloc_ctor(0, 2, 0);
} else {
 x_58 = x_56;
}
lean_ctor_set(x_58, 0, x_57);
lean_ctor_set(x_58, 1, x_55);
return x_58;
}
}
}
lean_object* l___private_Lean_Util_Trace_0__Lean_checkTraceOptionM___at_Lean_Meta_Simp_synthesizeArgs___spec__2(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8) {
_start:
{
lean_object* x_9; uint8_t x_10; lean_object* x_11; lean_object* x_12; 
x_9 = lean_ctor_get(x_6, 0);
x_10 = l_Lean_checkTraceOption(x_9, x_1);
x_11 = lean_box(x_10);
x_12 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_12, 0, x_11);
lean_ctor_set(x_12, 1, x_8);
return x_12;
}
}
static lean_object* _init_l_Array_forInUnsafe_loop___at_Lean_Meta_Simp_synthesizeArgs___spec__3___closed__1() {
_start:
{
lean_object* x_1; lean_object* x_2; lean_object* x_3; 
x_1 = l_Lean_Meta_initFn____x40_Lean_Meta_Basic___hyg_557____closed__2;
x_2 = l_Lean_Parser_Tactic_intro___closed__1;
x_3 = lean_name_mk_string(x_1, x_2);
return x_3;
}
}
static lean_object* _init_l_Array_forInUnsafe_loop___at_Lean_Meta_Simp_synthesizeArgs___spec__3___closed__2() {
_start:
{
lean_object* x_1; lean_object* x_2; lean_object* x_3; 
x_1 = l_Array_forInUnsafe_loop___at_Lean_Meta_Simp_synthesizeArgs___spec__3___closed__1;
x_2 = l_Lean_Parser_Tactic_simp___closed__1;
x_3 = lean_name_mk_string(x_1, x_2);
return x_3;
}
}
static lean_object* _init_l_Array_forInUnsafe_loop___at_Lean_Meta_Simp_synthesizeArgs___spec__3___closed__3() {
_start:
{
lean_object* x_1; 
x_1 = lean_mk_string("discharge");
return x_1;
}
}
static lean_object* _init_l_Array_forInUnsafe_loop___at_Lean_Meta_Simp_synthesizeArgs___spec__3___closed__4() {
_start:
{
lean_object* x_1; lean_object* x_2; lean_object* x_3; 
x_1 = l_Array_forInUnsafe_loop___at_Lean_Meta_Simp_synthesizeArgs___spec__3___closed__2;
x_2 = l_Array_forInUnsafe_loop___at_Lean_Meta_Simp_synthesizeArgs___spec__3___closed__3;
x_3 = lean_name_mk_string(x_1, x_2);
return x_3;
}
}
static lean_object* _init_l_Array_forInUnsafe_loop___at_Lean_Meta_Simp_synthesizeArgs___spec__3___closed__5() {
_start:
{
lean_object* x_1; 
x_1 = lean_mk_string(", failed to discharge hypotheses");
return x_1;
}
}
static lean_object* _init_l_Array_forInUnsafe_loop___at_Lean_Meta_Simp_synthesizeArgs___spec__3___closed__6() {
_start:
{
lean_object* x_1; lean_object* x_2; 
x_1 = l_Array_forInUnsafe_loop___at_Lean_Meta_Simp_synthesizeArgs___spec__3___closed__5;
x_2 = l_Lean_stringToMessageData(x_1);
return x_2;
}
}
static lean_object* _init_l_Array_forInUnsafe_loop___at_Lean_Meta_Simp_synthesizeArgs___spec__3___closed__7() {
_start:
{
lean_object* x_1; 
x_1 = lean_mk_string(", failed to assign proof");
return x_1;
}
}
static lean_object* _init_l_Array_forInUnsafe_loop___at_Lean_Meta_Simp_synthesizeArgs___spec__3___closed__8() {
_start:
{
lean_object* x_1; lean_object* x_2; 
x_1 = l_Array_forInUnsafe_loop___at_Lean_Meta_Simp_synthesizeArgs___spec__3___closed__7;
x_2 = l_Lean_stringToMessageData(x_1);
return x_2;
}
}
static lean_object* _init_l_Array_forInUnsafe_loop___at_Lean_Meta_Simp_synthesizeArgs___spec__3___closed__9() {
_start:
{
lean_object* x_1; 
x_1 = lean_mk_string(", failed to synthesize instance");
return x_1;
}
}
static lean_object* _init_l_Array_forInUnsafe_loop___at_Lean_Meta_Simp_synthesizeArgs___spec__3___closed__10() {
_start:
{
lean_object* x_1; lean_object* x_2; 
x_1 = l_Array_forInUnsafe_loop___at_Lean_Meta_Simp_synthesizeArgs___spec__3___closed__9;
x_2 = l_Lean_stringToMessageData(x_1);
return x_2;
}
}
static lean_object* _init_l_Array_forInUnsafe_loop___at_Lean_Meta_Simp_synthesizeArgs___spec__3___closed__11() {
_start:
{
lean_object* x_1; 
x_1 = lean_mk_string(", failed to assign instance");
return x_1;
}
}
static lean_object* _init_l_Array_forInUnsafe_loop___at_Lean_Meta_Simp_synthesizeArgs___spec__3___closed__12() {
_start:
{
lean_object* x_1; lean_object* x_2; 
x_1 = l_Array_forInUnsafe_loop___at_Lean_Meta_Simp_synthesizeArgs___spec__3___closed__11;
x_2 = l_Lean_stringToMessageData(x_1);
return x_2;
}
}
lean_object* l_Array_forInUnsafe_loop___at_Lean_Meta_Simp_synthesizeArgs___spec__3(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, size_t x_5, size_t x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9, lean_object* x_10, lean_object* x_11, lean_object* x_12, lean_object* x_13, lean_object* x_14) {
_start:
{
lean_object* x_15; uint8_t x_33; 
x_33 = x_6 < x_5;
if (x_33 == 0)
{
lean_object* x_34; 
lean_dec(x_13);
lean_dec(x_12);
lean_dec(x_11);
lean_dec(x_10);
lean_dec(x_9);
lean_dec(x_8);
lean_dec(x_3);
lean_dec(x_2);
lean_dec(x_1);
x_34 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_34, 0, x_7);
lean_ctor_set(x_34, 1, x_14);
return x_34;
}
else
{
lean_object* x_35; lean_object* x_36; lean_object* x_37; lean_object* x_38; lean_object* x_39; lean_object* x_40; uint8_t x_41; 
x_35 = lean_array_uget(x_4, x_6);
x_36 = lean_ctor_get(x_7, 1);
lean_inc(x_36);
if (lean_is_exclusive(x_7)) {
 lean_ctor_release(x_7, 0);
 lean_ctor_release(x_7, 1);
 x_37 = x_7;
} else {
 lean_dec_ref(x_7);
 x_37 = lean_box(0);
}
x_38 = lean_ctor_get(x_36, 0);
lean_inc(x_38);
x_39 = lean_ctor_get(x_36, 1);
lean_inc(x_39);
x_40 = lean_ctor_get(x_36, 2);
lean_inc(x_40);
x_41 = lean_nat_dec_lt(x_39, x_40);
if (x_41 == 0)
{
lean_object* x_42; lean_object* x_43; lean_object* x_44; 
lean_dec(x_40);
lean_dec(x_39);
lean_dec(x_38);
lean_dec(x_35);
lean_inc(x_3);
if (lean_is_scalar(x_37)) {
 x_42 = lean_alloc_ctor(0, 2, 0);
} else {
 x_42 = x_37;
}
lean_ctor_set(x_42, 0, x_3);
lean_ctor_set(x_42, 1, x_36);
x_43 = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(x_43, 0, x_42);
x_44 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_44, 0, x_43);
lean_ctor_set(x_44, 1, x_14);
x_15 = x_44;
goto block_32;
}
else
{
uint8_t x_45; 
x_45 = !lean_is_exclusive(x_36);
if (x_45 == 0)
{
lean_object* x_46; lean_object* x_47; lean_object* x_48; lean_object* x_49; uint8_t x_50; lean_object* x_51; lean_object* x_52; lean_object* x_53; 
x_46 = lean_ctor_get(x_36, 2);
lean_dec(x_46);
x_47 = lean_ctor_get(x_36, 1);
lean_dec(x_47);
x_48 = lean_ctor_get(x_36, 0);
lean_dec(x_48);
x_49 = lean_array_fget(x_38, x_39);
x_50 = lean_unbox(x_49);
lean_dec(x_49);
x_51 = lean_unsigned_to_nat(1u);
x_52 = lean_nat_add(x_39, x_51);
lean_dec(x_39);
lean_ctor_set(x_36, 1, x_52);
lean_inc(x_13);
lean_inc(x_12);
lean_inc(x_11);
lean_inc(x_10);
lean_inc(x_35);
x_53 = l_Lean_Meta_inferType(x_35, x_10, x_11, x_12, x_13, x_14);
if (lean_obj_tag(x_53) == 0)
{
lean_object* x_54; lean_object* x_55; lean_object* x_56; uint8_t x_57; lean_object* x_58; uint8_t x_168; 
x_54 = lean_ctor_get(x_53, 0);
lean_inc(x_54);
x_55 = lean_ctor_get(x_53, 1);
lean_inc(x_55);
if (lean_is_exclusive(x_53)) {
 lean_ctor_release(x_53, 0);
 lean_ctor_release(x_53, 1);
 x_56 = x_53;
} else {
 lean_dec_ref(x_53);
 x_56 = lean_box(0);
}
x_168 = l_Lean_BinderInfo_isInstImplicit(x_50);
if (x_168 == 0)
{
lean_object* x_169; 
lean_inc(x_13);
lean_inc(x_12);
lean_inc(x_11);
lean_inc(x_10);
lean_inc(x_35);
x_169 = l_Lean_Meta_instantiateMVars(x_35, x_10, x_11, x_12, x_13, x_55);
if (lean_obj_tag(x_169) == 0)
{
lean_object* x_170; lean_object* x_171; lean_object* x_172; 
x_170 = lean_ctor_get(x_169, 0);
lean_inc(x_170);
x_171 = lean_ctor_get(x_169, 1);
lean_inc(x_171);
lean_dec(x_169);
lean_inc(x_13);
lean_inc(x_12);
lean_inc(x_11);
lean_inc(x_10);
lean_inc(x_54);
x_172 = l_Lean_Meta_isProp(x_54, x_10, x_11, x_12, x_13, x_171);
if (lean_obj_tag(x_172) == 0)
{
lean_object* x_173; uint8_t x_174; 
x_173 = lean_ctor_get(x_172, 0);
lean_inc(x_173);
x_174 = lean_unbox(x_173);
if (x_174 == 0)
{
lean_object* x_175; uint8_t x_176; 
lean_dec(x_170);
x_175 = lean_ctor_get(x_172, 1);
lean_inc(x_175);
lean_dec(x_172);
x_176 = lean_unbox(x_173);
lean_dec(x_173);
x_57 = x_176;
x_58 = x_175;
goto block_167;
}
else
{
lean_object* x_177; uint8_t x_178; 
lean_dec(x_173);
x_177 = lean_ctor_get(x_172, 1);
lean_inc(x_177);
lean_dec(x_172);
x_178 = l_Lean_Expr_isMVar(x_170);
lean_dec(x_170);
x_57 = x_178;
x_58 = x_177;
goto block_167;
}
}
else
{
uint8_t x_179; 
lean_dec(x_170);
lean_dec(x_56);
lean_dec(x_54);
lean_dec(x_36);
lean_dec(x_37);
lean_dec(x_35);
x_179 = !lean_is_exclusive(x_172);
if (x_179 == 0)
{
x_15 = x_172;
goto block_32;
}
else
{
lean_object* x_180; lean_object* x_181; lean_object* x_182; 
x_180 = lean_ctor_get(x_172, 0);
x_181 = lean_ctor_get(x_172, 1);
lean_inc(x_181);
lean_inc(x_180);
lean_dec(x_172);
x_182 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_182, 0, x_180);
lean_ctor_set(x_182, 1, x_181);
x_15 = x_182;
goto block_32;
}
}
}
else
{
uint8_t x_183; 
lean_dec(x_56);
lean_dec(x_54);
lean_dec(x_36);
lean_dec(x_37);
lean_dec(x_35);
x_183 = !lean_is_exclusive(x_169);
if (x_183 == 0)
{
x_15 = x_169;
goto block_32;
}
else
{
lean_object* x_184; lean_object* x_185; lean_object* x_186; 
x_184 = lean_ctor_get(x_169, 0);
x_185 = lean_ctor_get(x_169, 1);
lean_inc(x_185);
lean_inc(x_184);
lean_dec(x_169);
x_186 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_186, 0, x_184);
lean_ctor_set(x_186, 1, x_185);
x_15 = x_186;
goto block_32;
}
}
}
else
{
lean_object* x_187; lean_object* x_188; 
lean_dec(x_56);
lean_dec(x_37);
x_187 = lean_box(0);
lean_inc(x_13);
lean_inc(x_12);
lean_inc(x_11);
lean_inc(x_10);
lean_inc(x_54);
x_188 = l_Lean_Meta_trySynthInstance(x_54, x_187, x_10, x_11, x_12, x_13, x_55);
if (lean_obj_tag(x_188) == 0)
{
lean_object* x_189; 
x_189 = lean_ctor_get(x_188, 0);
lean_inc(x_189);
switch (lean_obj_tag(x_189)) {
case 0:
{
lean_object* x_190; lean_object* x_191; uint8_t x_192; lean_object* x_193; lean_object* x_219; lean_object* x_220; lean_object* x_221; uint8_t x_222; 
lean_dec(x_35);
x_190 = lean_ctor_get(x_188, 1);
lean_inc(x_190);
if (lean_is_exclusive(x_188)) {
 lean_ctor_release(x_188, 0);
 lean_ctor_release(x_188, 1);
 x_191 = x_188;
} else {
 lean_dec_ref(x_188);
 x_191 = lean_box(0);
}
x_219 = lean_st_ref_get(x_13, x_190);
x_220 = lean_ctor_get(x_219, 0);
lean_inc(x_220);
x_221 = lean_ctor_get(x_220, 3);
lean_inc(x_221);
lean_dec(x_220);
x_222 = lean_ctor_get_uint8(x_221, sizeof(void*)*1);
lean_dec(x_221);
if (x_222 == 0)
{
lean_object* x_223; uint8_t x_224; 
x_223 = lean_ctor_get(x_219, 1);
lean_inc(x_223);
lean_dec(x_219);
x_224 = 0;
x_192 = x_224;
x_193 = x_223;
goto block_218;
}
else
{
lean_object* x_225; lean_object* x_226; lean_object* x_227; lean_object* x_228; lean_object* x_229; uint8_t x_230; 
x_225 = lean_ctor_get(x_219, 1);
lean_inc(x_225);
lean_dec(x_219);
x_226 = l_Array_forInUnsafe_loop___at_Lean_Meta_Simp_synthesizeArgs___spec__3___closed__4;
x_227 = l___private_Lean_Util_Trace_0__Lean_checkTraceOptionM___at_Lean_Meta_Simp_synthesizeArgs___spec__2(x_226, x_8, x_9, x_10, x_11, x_12, x_13, x_225);
x_228 = lean_ctor_get(x_227, 0);
lean_inc(x_228);
x_229 = lean_ctor_get(x_227, 1);
lean_inc(x_229);
lean_dec(x_227);
x_230 = lean_unbox(x_228);
lean_dec(x_228);
x_192 = x_230;
x_193 = x_229;
goto block_218;
}
block_218:
{
if (x_192 == 0)
{
lean_object* x_194; lean_object* x_195; lean_object* x_196; lean_object* x_197; 
lean_dec(x_54);
x_194 = l_Array_forInUnsafe_loop___at___private_Lean_Meta_LevelDefEq_0__Lean_Meta_processPostponedStep___spec__4___closed__1;
x_195 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_195, 0, x_194);
lean_ctor_set(x_195, 1, x_36);
x_196 = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(x_196, 0, x_195);
if (lean_is_scalar(x_191)) {
 x_197 = lean_alloc_ctor(0, 2, 0);
} else {
 x_197 = x_191;
}
lean_ctor_set(x_197, 0, x_196);
lean_ctor_set(x_197, 1, x_193);
x_15 = x_197;
goto block_32;
}
else
{
lean_object* x_198; lean_object* x_199; lean_object* x_200; lean_object* x_201; lean_object* x_202; lean_object* x_203; lean_object* x_204; lean_object* x_205; lean_object* x_206; lean_object* x_207; uint8_t x_208; 
lean_dec(x_191);
lean_inc(x_1);
x_198 = lean_alloc_ctor(4, 1, 0);
lean_ctor_set(x_198, 0, x_1);
x_199 = l_Lean_KernelException_toMessageData___closed__15;
x_200 = lean_alloc_ctor(10, 2, 0);
lean_ctor_set(x_200, 0, x_199);
lean_ctor_set(x_200, 1, x_198);
x_201 = l_Array_forInUnsafe_loop___at_Lean_Meta_Simp_synthesizeArgs___spec__3___closed__10;
x_202 = lean_alloc_ctor(10, 2, 0);
lean_ctor_set(x_202, 0, x_200);
lean_ctor_set(x_202, 1, x_201);
x_203 = l_Lean_indentExpr(x_54);
x_204 = lean_alloc_ctor(10, 2, 0);
lean_ctor_set(x_204, 0, x_202);
lean_ctor_set(x_204, 1, x_203);
x_205 = lean_alloc_ctor(10, 2, 0);
lean_ctor_set(x_205, 0, x_204);
lean_ctor_set(x_205, 1, x_199);
x_206 = l_Array_forInUnsafe_loop___at_Lean_Meta_Simp_synthesizeArgs___spec__3___closed__4;
x_207 = l_Lean_addTrace___at_Lean_Meta_Simp_synthesizeArgs___spec__1(x_206, x_205, x_8, x_9, x_10, x_11, x_12, x_13, x_193);
x_208 = !lean_is_exclusive(x_207);
if (x_208 == 0)
{
lean_object* x_209; lean_object* x_210; lean_object* x_211; lean_object* x_212; 
x_209 = lean_ctor_get(x_207, 0);
lean_dec(x_209);
x_210 = l_Array_forInUnsafe_loop___at___private_Lean_Meta_LevelDefEq_0__Lean_Meta_processPostponedStep___spec__4___closed__1;
x_211 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_211, 0, x_210);
lean_ctor_set(x_211, 1, x_36);
x_212 = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(x_212, 0, x_211);
lean_ctor_set(x_207, 0, x_212);
x_15 = x_207;
goto block_32;
}
else
{
lean_object* x_213; lean_object* x_214; lean_object* x_215; lean_object* x_216; lean_object* x_217; 
x_213 = lean_ctor_get(x_207, 1);
lean_inc(x_213);
lean_dec(x_207);
x_214 = l_Array_forInUnsafe_loop___at___private_Lean_Meta_LevelDefEq_0__Lean_Meta_processPostponedStep___spec__4___closed__1;
x_215 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_215, 0, x_214);
lean_ctor_set(x_215, 1, x_36);
x_216 = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(x_216, 0, x_215);
x_217 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_217, 0, x_216);
lean_ctor_set(x_217, 1, x_213);
x_15 = x_217;
goto block_32;
}
}
}
}
case 1:
{
lean_object* x_231; lean_object* x_232; lean_object* x_233; 
x_231 = lean_ctor_get(x_188, 1);
lean_inc(x_231);
lean_dec(x_188);
x_232 = lean_ctor_get(x_189, 0);
lean_inc(x_232);
lean_dec(x_189);
lean_inc(x_13);
lean_inc(x_12);
lean_inc(x_11);
lean_inc(x_10);
x_233 = l_Lean_Meta_isExprDefEq(x_35, x_232, x_10, x_11, x_12, x_13, x_231);
if (lean_obj_tag(x_233) == 0)
{
lean_object* x_234; uint8_t x_235; 
x_234 = lean_ctor_get(x_233, 0);
lean_inc(x_234);
x_235 = lean_unbox(x_234);
lean_dec(x_234);
if (x_235 == 0)
{
lean_object* x_236; lean_object* x_237; uint8_t x_238; lean_object* x_239; lean_object* x_265; lean_object* x_266; lean_object* x_267; uint8_t x_268; 
x_236 = lean_ctor_get(x_233, 1);
lean_inc(x_236);
if (lean_is_exclusive(x_233)) {
 lean_ctor_release(x_233, 0);
 lean_ctor_release(x_233, 1);
 x_237 = x_233;
} else {
 lean_dec_ref(x_233);
 x_237 = lean_box(0);
}
x_265 = lean_st_ref_get(x_13, x_236);
x_266 = lean_ctor_get(x_265, 0);
lean_inc(x_266);
x_267 = lean_ctor_get(x_266, 3);
lean_inc(x_267);
lean_dec(x_266);
x_268 = lean_ctor_get_uint8(x_267, sizeof(void*)*1);
lean_dec(x_267);
if (x_268 == 0)
{
lean_object* x_269; uint8_t x_270; 
x_269 = lean_ctor_get(x_265, 1);
lean_inc(x_269);
lean_dec(x_265);
x_270 = 0;
x_238 = x_270;
x_239 = x_269;
goto block_264;
}
else
{
lean_object* x_271; lean_object* x_272; lean_object* x_273; lean_object* x_274; lean_object* x_275; uint8_t x_276; 
x_271 = lean_ctor_get(x_265, 1);
lean_inc(x_271);
lean_dec(x_265);
x_272 = l_Array_forInUnsafe_loop___at_Lean_Meta_Simp_synthesizeArgs___spec__3___closed__4;
x_273 = l___private_Lean_Util_Trace_0__Lean_checkTraceOptionM___at_Lean_Meta_Simp_synthesizeArgs___spec__2(x_272, x_8, x_9, x_10, x_11, x_12, x_13, x_271);
x_274 = lean_ctor_get(x_273, 0);
lean_inc(x_274);
x_275 = lean_ctor_get(x_273, 1);
lean_inc(x_275);
lean_dec(x_273);
x_276 = lean_unbox(x_274);
lean_dec(x_274);
x_238 = x_276;
x_239 = x_275;
goto block_264;
}
block_264:
{
if (x_238 == 0)
{
lean_object* x_240; lean_object* x_241; lean_object* x_242; lean_object* x_243; 
lean_dec(x_54);
x_240 = l_Array_forInUnsafe_loop___at___private_Lean_Meta_LevelDefEq_0__Lean_Meta_processPostponedStep___spec__4___closed__1;
x_241 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_241, 0, x_240);
lean_ctor_set(x_241, 1, x_36);
x_242 = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(x_242, 0, x_241);
if (lean_is_scalar(x_237)) {
 x_243 = lean_alloc_ctor(0, 2, 0);
} else {
 x_243 = x_237;
}
lean_ctor_set(x_243, 0, x_242);
lean_ctor_set(x_243, 1, x_239);
x_15 = x_243;
goto block_32;
}
else
{
lean_object* x_244; lean_object* x_245; lean_object* x_246; lean_object* x_247; lean_object* x_248; lean_object* x_249; lean_object* x_250; lean_object* x_251; lean_object* x_252; lean_object* x_253; uint8_t x_254; 
lean_dec(x_237);
lean_inc(x_1);
x_244 = lean_alloc_ctor(4, 1, 0);
lean_ctor_set(x_244, 0, x_1);
x_245 = l_Lean_KernelException_toMessageData___closed__15;
x_246 = lean_alloc_ctor(10, 2, 0);
lean_ctor_set(x_246, 0, x_245);
lean_ctor_set(x_246, 1, x_244);
x_247 = l_Array_forInUnsafe_loop___at_Lean_Meta_Simp_synthesizeArgs___spec__3___closed__12;
x_248 = lean_alloc_ctor(10, 2, 0);
lean_ctor_set(x_248, 0, x_246);
lean_ctor_set(x_248, 1, x_247);
x_249 = l_Lean_indentExpr(x_54);
x_250 = lean_alloc_ctor(10, 2, 0);
lean_ctor_set(x_250, 0, x_248);
lean_ctor_set(x_250, 1, x_249);
x_251 = lean_alloc_ctor(10, 2, 0);
lean_ctor_set(x_251, 0, x_250);
lean_ctor_set(x_251, 1, x_245);
x_252 = l_Array_forInUnsafe_loop___at_Lean_Meta_Simp_synthesizeArgs___spec__3___closed__4;
x_253 = l_Lean_addTrace___at_Lean_Meta_Simp_synthesizeArgs___spec__1(x_252, x_251, x_8, x_9, x_10, x_11, x_12, x_13, x_239);
x_254 = !lean_is_exclusive(x_253);
if (x_254 == 0)
{
lean_object* x_255; lean_object* x_256; lean_object* x_257; lean_object* x_258; 
x_255 = lean_ctor_get(x_253, 0);
lean_dec(x_255);
x_256 = l_Array_forInUnsafe_loop___at___private_Lean_Meta_LevelDefEq_0__Lean_Meta_processPostponedStep___spec__4___closed__1;
x_257 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_257, 0, x_256);
lean_ctor_set(x_257, 1, x_36);
x_258 = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(x_258, 0, x_257);
lean_ctor_set(x_253, 0, x_258);
x_15 = x_253;
goto block_32;
}
else
{
lean_object* x_259; lean_object* x_260; lean_object* x_261; lean_object* x_262; lean_object* x_263; 
x_259 = lean_ctor_get(x_253, 1);
lean_inc(x_259);
lean_dec(x_253);
x_260 = l_Array_forInUnsafe_loop___at___private_Lean_Meta_LevelDefEq_0__Lean_Meta_processPostponedStep___spec__4___closed__1;
x_261 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_261, 0, x_260);
lean_ctor_set(x_261, 1, x_36);
x_262 = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(x_262, 0, x_261);
x_263 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_263, 0, x_262);
lean_ctor_set(x_263, 1, x_259);
x_15 = x_263;
goto block_32;
}
}
}
}
else
{
uint8_t x_277; 
lean_dec(x_54);
x_277 = !lean_is_exclusive(x_233);
if (x_277 == 0)
{
lean_object* x_278; lean_object* x_279; lean_object* x_280; 
x_278 = lean_ctor_get(x_233, 0);
lean_dec(x_278);
lean_inc(x_3);
x_279 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_279, 0, x_3);
lean_ctor_set(x_279, 1, x_36);
x_280 = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(x_280, 0, x_279);
lean_ctor_set(x_233, 0, x_280);
x_15 = x_233;
goto block_32;
}
else
{
lean_object* x_281; lean_object* x_282; lean_object* x_283; lean_object* x_284; 
x_281 = lean_ctor_get(x_233, 1);
lean_inc(x_281);
lean_dec(x_233);
lean_inc(x_3);
x_282 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_282, 0, x_3);
lean_ctor_set(x_282, 1, x_36);
x_283 = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(x_283, 0, x_282);
x_284 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_284, 0, x_283);
lean_ctor_set(x_284, 1, x_281);
x_15 = x_284;
goto block_32;
}
}
}
else
{
uint8_t x_285; 
lean_dec(x_54);
lean_dec(x_36);
x_285 = !lean_is_exclusive(x_233);
if (x_285 == 0)
{
x_15 = x_233;
goto block_32;
}
else
{
lean_object* x_286; lean_object* x_287; lean_object* x_288; 
x_286 = lean_ctor_get(x_233, 0);
x_287 = lean_ctor_get(x_233, 1);
lean_inc(x_287);
lean_inc(x_286);
lean_dec(x_233);
x_288 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_288, 0, x_286);
lean_ctor_set(x_288, 1, x_287);
x_15 = x_288;
goto block_32;
}
}
}
default: 
{
lean_object* x_289; lean_object* x_290; uint8_t x_291; lean_object* x_292; lean_object* x_318; lean_object* x_319; lean_object* x_320; uint8_t x_321; 
lean_dec(x_35);
x_289 = lean_ctor_get(x_188, 1);
lean_inc(x_289);
if (lean_is_exclusive(x_188)) {
 lean_ctor_release(x_188, 0);
 lean_ctor_release(x_188, 1);
 x_290 = x_188;
} else {
 lean_dec_ref(x_188);
 x_290 = lean_box(0);
}
x_318 = lean_st_ref_get(x_13, x_289);
x_319 = lean_ctor_get(x_318, 0);
lean_inc(x_319);
x_320 = lean_ctor_get(x_319, 3);
lean_inc(x_320);
lean_dec(x_319);
x_321 = lean_ctor_get_uint8(x_320, sizeof(void*)*1);
lean_dec(x_320);
if (x_321 == 0)
{
lean_object* x_322; uint8_t x_323; 
x_322 = lean_ctor_get(x_318, 1);
lean_inc(x_322);
lean_dec(x_318);
x_323 = 0;
x_291 = x_323;
x_292 = x_322;
goto block_317;
}
else
{
lean_object* x_324; lean_object* x_325; lean_object* x_326; lean_object* x_327; lean_object* x_328; uint8_t x_329; 
x_324 = lean_ctor_get(x_318, 1);
lean_inc(x_324);
lean_dec(x_318);
x_325 = l_Array_forInUnsafe_loop___at_Lean_Meta_Simp_synthesizeArgs___spec__3___closed__4;
x_326 = l___private_Lean_Util_Trace_0__Lean_checkTraceOptionM___at_Lean_Meta_Simp_synthesizeArgs___spec__2(x_325, x_8, x_9, x_10, x_11, x_12, x_13, x_324);
x_327 = lean_ctor_get(x_326, 0);
lean_inc(x_327);
x_328 = lean_ctor_get(x_326, 1);
lean_inc(x_328);
lean_dec(x_326);
x_329 = lean_unbox(x_327);
lean_dec(x_327);
x_291 = x_329;
x_292 = x_328;
goto block_317;
}
block_317:
{
if (x_291 == 0)
{
lean_object* x_293; lean_object* x_294; lean_object* x_295; lean_object* x_296; 
lean_dec(x_54);
x_293 = l_Array_forInUnsafe_loop___at___private_Lean_Meta_LevelDefEq_0__Lean_Meta_processPostponedStep___spec__4___closed__1;
x_294 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_294, 0, x_293);
lean_ctor_set(x_294, 1, x_36);
x_295 = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(x_295, 0, x_294);
if (lean_is_scalar(x_290)) {
 x_296 = lean_alloc_ctor(0, 2, 0);
} else {
 x_296 = x_290;
}
lean_ctor_set(x_296, 0, x_295);
lean_ctor_set(x_296, 1, x_292);
x_15 = x_296;
goto block_32;
}
else
{
lean_object* x_297; lean_object* x_298; lean_object* x_299; lean_object* x_300; lean_object* x_301; lean_object* x_302; lean_object* x_303; lean_object* x_304; lean_object* x_305; lean_object* x_306; uint8_t x_307; 
lean_dec(x_290);
lean_inc(x_1);
x_297 = lean_alloc_ctor(4, 1, 0);
lean_ctor_set(x_297, 0, x_1);
x_298 = l_Lean_KernelException_toMessageData___closed__15;
x_299 = lean_alloc_ctor(10, 2, 0);
lean_ctor_set(x_299, 0, x_298);
lean_ctor_set(x_299, 1, x_297);
x_300 = l_Array_forInUnsafe_loop___at_Lean_Meta_Simp_synthesizeArgs___spec__3___closed__10;
x_301 = lean_alloc_ctor(10, 2, 0);
lean_ctor_set(x_301, 0, x_299);
lean_ctor_set(x_301, 1, x_300);
x_302 = l_Lean_indentExpr(x_54);
x_303 = lean_alloc_ctor(10, 2, 0);
lean_ctor_set(x_303, 0, x_301);
lean_ctor_set(x_303, 1, x_302);
x_304 = lean_alloc_ctor(10, 2, 0);
lean_ctor_set(x_304, 0, x_303);
lean_ctor_set(x_304, 1, x_298);
x_305 = l_Array_forInUnsafe_loop___at_Lean_Meta_Simp_synthesizeArgs___spec__3___closed__4;
x_306 = l_Lean_addTrace___at_Lean_Meta_Simp_synthesizeArgs___spec__1(x_305, x_304, x_8, x_9, x_10, x_11, x_12, x_13, x_292);
x_307 = !lean_is_exclusive(x_306);
if (x_307 == 0)
{
lean_object* x_308; lean_object* x_309; lean_object* x_310; lean_object* x_311; 
x_308 = lean_ctor_get(x_306, 0);
lean_dec(x_308);
x_309 = l_Array_forInUnsafe_loop___at___private_Lean_Meta_LevelDefEq_0__Lean_Meta_processPostponedStep___spec__4___closed__1;
x_310 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_310, 0, x_309);
lean_ctor_set(x_310, 1, x_36);
x_311 = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(x_311, 0, x_310);
lean_ctor_set(x_306, 0, x_311);
x_15 = x_306;
goto block_32;
}
else
{
lean_object* x_312; lean_object* x_313; lean_object* x_314; lean_object* x_315; lean_object* x_316; 
x_312 = lean_ctor_get(x_306, 1);
lean_inc(x_312);
lean_dec(x_306);
x_313 = l_Array_forInUnsafe_loop___at___private_Lean_Meta_LevelDefEq_0__Lean_Meta_processPostponedStep___spec__4___closed__1;
x_314 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_314, 0, x_313);
lean_ctor_set(x_314, 1, x_36);
x_315 = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(x_315, 0, x_314);
x_316 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_316, 0, x_315);
lean_ctor_set(x_316, 1, x_312);
x_15 = x_316;
goto block_32;
}
}
}
}
}
}
else
{
uint8_t x_330; 
lean_dec(x_54);
lean_dec(x_36);
lean_dec(x_35);
x_330 = !lean_is_exclusive(x_188);
if (x_330 == 0)
{
x_15 = x_188;
goto block_32;
}
else
{
lean_object* x_331; lean_object* x_332; lean_object* x_333; 
x_331 = lean_ctor_get(x_188, 0);
x_332 = lean_ctor_get(x_188, 1);
lean_inc(x_332);
lean_inc(x_331);
lean_dec(x_188);
x_333 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_333, 0, x_331);
lean_ctor_set(x_333, 1, x_332);
x_15 = x_333;
goto block_32;
}
}
}
block_167:
{
if (x_57 == 0)
{
lean_object* x_59; lean_object* x_60; lean_object* x_61; 
lean_dec(x_54);
lean_dec(x_35);
lean_inc(x_3);
if (lean_is_scalar(x_37)) {
 x_59 = lean_alloc_ctor(0, 2, 0);
} else {
 x_59 = x_37;
}
lean_ctor_set(x_59, 0, x_3);
lean_ctor_set(x_59, 1, x_36);
x_60 = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(x_60, 0, x_59);
if (lean_is_scalar(x_56)) {
 x_61 = lean_alloc_ctor(0, 2, 0);
} else {
 x_61 = x_56;
}
lean_ctor_set(x_61, 0, x_60);
lean_ctor_set(x_61, 1, x_58);
x_15 = x_61;
goto block_32;
}
else
{
lean_object* x_62; 
lean_dec(x_56);
lean_inc(x_2);
lean_inc(x_13);
lean_inc(x_12);
lean_inc(x_11);
lean_inc(x_10);
lean_inc(x_9);
lean_inc(x_8);
lean_inc(x_54);
x_62 = lean_apply_8(x_2, x_54, x_8, x_9, x_10, x_11, x_12, x_13, x_58);
if (lean_obj_tag(x_62) == 0)
{
lean_object* x_63; 
x_63 = lean_ctor_get(x_62, 0);
lean_inc(x_63);
if (lean_obj_tag(x_63) == 0)
{
lean_object* x_64; lean_object* x_65; uint8_t x_66; lean_object* x_67; lean_object* x_93; lean_object* x_94; lean_object* x_95; uint8_t x_96; 
lean_dec(x_35);
x_64 = lean_ctor_get(x_62, 1);
lean_inc(x_64);
if (lean_is_exclusive(x_62)) {
 lean_ctor_release(x_62, 0);
 lean_ctor_release(x_62, 1);
 x_65 = x_62;
} else {
 lean_dec_ref(x_62);
 x_65 = lean_box(0);
}
x_93 = lean_st_ref_get(x_13, x_64);
x_94 = lean_ctor_get(x_93, 0);
lean_inc(x_94);
x_95 = lean_ctor_get(x_94, 3);
lean_inc(x_95);
lean_dec(x_94);
x_96 = lean_ctor_get_uint8(x_95, sizeof(void*)*1);
lean_dec(x_95);
if (x_96 == 0)
{
lean_object* x_97; uint8_t x_98; 
x_97 = lean_ctor_get(x_93, 1);
lean_inc(x_97);
lean_dec(x_93);
x_98 = 0;
x_66 = x_98;
x_67 = x_97;
goto block_92;
}
else
{
lean_object* x_99; lean_object* x_100; lean_object* x_101; lean_object* x_102; lean_object* x_103; uint8_t x_104; 
x_99 = lean_ctor_get(x_93, 1);
lean_inc(x_99);
lean_dec(x_93);
x_100 = l_Array_forInUnsafe_loop___at_Lean_Meta_Simp_synthesizeArgs___spec__3___closed__4;
x_101 = l___private_Lean_Util_Trace_0__Lean_checkTraceOptionM___at_Lean_Meta_Simp_synthesizeArgs___spec__2(x_100, x_8, x_9, x_10, x_11, x_12, x_13, x_99);
x_102 = lean_ctor_get(x_101, 0);
lean_inc(x_102);
x_103 = lean_ctor_get(x_101, 1);
lean_inc(x_103);
lean_dec(x_101);
x_104 = lean_unbox(x_102);
lean_dec(x_102);
x_66 = x_104;
x_67 = x_103;
goto block_92;
}
block_92:
{
if (x_66 == 0)
{
lean_object* x_68; lean_object* x_69; lean_object* x_70; lean_object* x_71; 
lean_dec(x_54);
x_68 = l_Array_forInUnsafe_loop___at___private_Lean_Meta_LevelDefEq_0__Lean_Meta_processPostponedStep___spec__4___closed__1;
if (lean_is_scalar(x_37)) {
 x_69 = lean_alloc_ctor(0, 2, 0);
} else {
 x_69 = x_37;
}
lean_ctor_set(x_69, 0, x_68);
lean_ctor_set(x_69, 1, x_36);
x_70 = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(x_70, 0, x_69);
if (lean_is_scalar(x_65)) {
 x_71 = lean_alloc_ctor(0, 2, 0);
} else {
 x_71 = x_65;
}
lean_ctor_set(x_71, 0, x_70);
lean_ctor_set(x_71, 1, x_67);
x_15 = x_71;
goto block_32;
}
else
{
lean_object* x_72; lean_object* x_73; lean_object* x_74; lean_object* x_75; lean_object* x_76; lean_object* x_77; lean_object* x_78; lean_object* x_79; lean_object* x_80; lean_object* x_81; uint8_t x_82; 
lean_dec(x_65);
lean_inc(x_1);
x_72 = lean_alloc_ctor(4, 1, 0);
lean_ctor_set(x_72, 0, x_1);
x_73 = l_Lean_KernelException_toMessageData___closed__15;
x_74 = lean_alloc_ctor(10, 2, 0);
lean_ctor_set(x_74, 0, x_73);
lean_ctor_set(x_74, 1, x_72);
x_75 = l_Array_forInUnsafe_loop___at_Lean_Meta_Simp_synthesizeArgs___spec__3___closed__6;
x_76 = lean_alloc_ctor(10, 2, 0);
lean_ctor_set(x_76, 0, x_74);
lean_ctor_set(x_76, 1, x_75);
x_77 = l_Lean_indentExpr(x_54);
x_78 = lean_alloc_ctor(10, 2, 0);
lean_ctor_set(x_78, 0, x_76);
lean_ctor_set(x_78, 1, x_77);
x_79 = lean_alloc_ctor(10, 2, 0);
lean_ctor_set(x_79, 0, x_78);
lean_ctor_set(x_79, 1, x_73);
x_80 = l_Array_forInUnsafe_loop___at_Lean_Meta_Simp_synthesizeArgs___spec__3___closed__4;
x_81 = l_Lean_addTrace___at_Lean_Meta_Simp_synthesizeArgs___spec__1(x_80, x_79, x_8, x_9, x_10, x_11, x_12, x_13, x_67);
x_82 = !lean_is_exclusive(x_81);
if (x_82 == 0)
{
lean_object* x_83; lean_object* x_84; lean_object* x_85; lean_object* x_86; 
x_83 = lean_ctor_get(x_81, 0);
lean_dec(x_83);
x_84 = l_Array_forInUnsafe_loop___at___private_Lean_Meta_LevelDefEq_0__Lean_Meta_processPostponedStep___spec__4___closed__1;
if (lean_is_scalar(x_37)) {
 x_85 = lean_alloc_ctor(0, 2, 0);
} else {
 x_85 = x_37;
}
lean_ctor_set(x_85, 0, x_84);
lean_ctor_set(x_85, 1, x_36);
x_86 = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(x_86, 0, x_85);
lean_ctor_set(x_81, 0, x_86);
x_15 = x_81;
goto block_32;
}
else
{
lean_object* x_87; lean_object* x_88; lean_object* x_89; lean_object* x_90; lean_object* x_91; 
x_87 = lean_ctor_get(x_81, 1);
lean_inc(x_87);
lean_dec(x_81);
x_88 = l_Array_forInUnsafe_loop___at___private_Lean_Meta_LevelDefEq_0__Lean_Meta_processPostponedStep___spec__4___closed__1;
if (lean_is_scalar(x_37)) {
 x_89 = lean_alloc_ctor(0, 2, 0);
} else {
 x_89 = x_37;
}
lean_ctor_set(x_89, 0, x_88);
lean_ctor_set(x_89, 1, x_36);
x_90 = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(x_90, 0, x_89);
x_91 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_91, 0, x_90);
lean_ctor_set(x_91, 1, x_87);
x_15 = x_91;
goto block_32;
}
}
}
}
else
{
lean_object* x_105; lean_object* x_106; lean_object* x_107; 
x_105 = lean_ctor_get(x_62, 1);
lean_inc(x_105);
lean_dec(x_62);
x_106 = lean_ctor_get(x_63, 0);
lean_inc(x_106);
lean_dec(x_63);
lean_inc(x_13);
lean_inc(x_12);
lean_inc(x_11);
lean_inc(x_10);
x_107 = l_Lean_Meta_isExprDefEq(x_35, x_106, x_10, x_11, x_12, x_13, x_105);
if (lean_obj_tag(x_107) == 0)
{
lean_object* x_108; uint8_t x_109; 
x_108 = lean_ctor_get(x_107, 0);
lean_inc(x_108);
x_109 = lean_unbox(x_108);
lean_dec(x_108);
if (x_109 == 0)
{
lean_object* x_110; lean_object* x_111; uint8_t x_112; lean_object* x_113; lean_object* x_139; lean_object* x_140; lean_object* x_141; uint8_t x_142; 
x_110 = lean_ctor_get(x_107, 1);
lean_inc(x_110);
if (lean_is_exclusive(x_107)) {
 lean_ctor_release(x_107, 0);
 lean_ctor_release(x_107, 1);
 x_111 = x_107;
} else {
 lean_dec_ref(x_107);
 x_111 = lean_box(0);
}
x_139 = lean_st_ref_get(x_13, x_110);
x_140 = lean_ctor_get(x_139, 0);
lean_inc(x_140);
x_141 = lean_ctor_get(x_140, 3);
lean_inc(x_141);
lean_dec(x_140);
x_142 = lean_ctor_get_uint8(x_141, sizeof(void*)*1);
lean_dec(x_141);
if (x_142 == 0)
{
lean_object* x_143; uint8_t x_144; 
x_143 = lean_ctor_get(x_139, 1);
lean_inc(x_143);
lean_dec(x_139);
x_144 = 0;
x_112 = x_144;
x_113 = x_143;
goto block_138;
}
else
{
lean_object* x_145; lean_object* x_146; lean_object* x_147; lean_object* x_148; lean_object* x_149; uint8_t x_150; 
x_145 = lean_ctor_get(x_139, 1);
lean_inc(x_145);
lean_dec(x_139);
x_146 = l_Array_forInUnsafe_loop___at_Lean_Meta_Simp_synthesizeArgs___spec__3___closed__4;
x_147 = l___private_Lean_Util_Trace_0__Lean_checkTraceOptionM___at_Lean_Meta_Simp_synthesizeArgs___spec__2(x_146, x_8, x_9, x_10, x_11, x_12, x_13, x_145);
x_148 = lean_ctor_get(x_147, 0);
lean_inc(x_148);
x_149 = lean_ctor_get(x_147, 1);
lean_inc(x_149);
lean_dec(x_147);
x_150 = lean_unbox(x_148);
lean_dec(x_148);
x_112 = x_150;
x_113 = x_149;
goto block_138;
}
block_138:
{
if (x_112 == 0)
{
lean_object* x_114; lean_object* x_115; lean_object* x_116; lean_object* x_117; 
lean_dec(x_54);
x_114 = l_Array_forInUnsafe_loop___at___private_Lean_Meta_LevelDefEq_0__Lean_Meta_processPostponedStep___spec__4___closed__1;
if (lean_is_scalar(x_37)) {
 x_115 = lean_alloc_ctor(0, 2, 0);
} else {
 x_115 = x_37;
}
lean_ctor_set(x_115, 0, x_114);
lean_ctor_set(x_115, 1, x_36);
x_116 = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(x_116, 0, x_115);
if (lean_is_scalar(x_111)) {
 x_117 = lean_alloc_ctor(0, 2, 0);
} else {
 x_117 = x_111;
}
lean_ctor_set(x_117, 0, x_116);
lean_ctor_set(x_117, 1, x_113);
x_15 = x_117;
goto block_32;
}
else
{
lean_object* x_118; lean_object* x_119; lean_object* x_120; lean_object* x_121; lean_object* x_122; lean_object* x_123; lean_object* x_124; lean_object* x_125; lean_object* x_126; lean_object* x_127; uint8_t x_128; 
lean_dec(x_111);
lean_inc(x_1);
x_118 = lean_alloc_ctor(4, 1, 0);
lean_ctor_set(x_118, 0, x_1);
x_119 = l_Lean_KernelException_toMessageData___closed__15;
x_120 = lean_alloc_ctor(10, 2, 0);
lean_ctor_set(x_120, 0, x_119);
lean_ctor_set(x_120, 1, x_118);
x_121 = l_Array_forInUnsafe_loop___at_Lean_Meta_Simp_synthesizeArgs___spec__3___closed__8;
x_122 = lean_alloc_ctor(10, 2, 0);
lean_ctor_set(x_122, 0, x_120);
lean_ctor_set(x_122, 1, x_121);
x_123 = l_Lean_indentExpr(x_54);
x_124 = lean_alloc_ctor(10, 2, 0);
lean_ctor_set(x_124, 0, x_122);
lean_ctor_set(x_124, 1, x_123);
x_125 = lean_alloc_ctor(10, 2, 0);
lean_ctor_set(x_125, 0, x_124);
lean_ctor_set(x_125, 1, x_119);
x_126 = l_Array_forInUnsafe_loop___at_Lean_Meta_Simp_synthesizeArgs___spec__3___closed__4;
x_127 = l_Lean_addTrace___at_Lean_Meta_Simp_synthesizeArgs___spec__1(x_126, x_125, x_8, x_9, x_10, x_11, x_12, x_13, x_113);
x_128 = !lean_is_exclusive(x_127);
if (x_128 == 0)
{
lean_object* x_129; lean_object* x_130; lean_object* x_131; lean_object* x_132; 
x_129 = lean_ctor_get(x_127, 0);
lean_dec(x_129);
x_130 = l_Array_forInUnsafe_loop___at___private_Lean_Meta_LevelDefEq_0__Lean_Meta_processPostponedStep___spec__4___closed__1;
if (lean_is_scalar(x_37)) {
 x_131 = lean_alloc_ctor(0, 2, 0);
} else {
 x_131 = x_37;
}
lean_ctor_set(x_131, 0, x_130);
lean_ctor_set(x_131, 1, x_36);
x_132 = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(x_132, 0, x_131);
lean_ctor_set(x_127, 0, x_132);
x_15 = x_127;
goto block_32;
}
else
{
lean_object* x_133; lean_object* x_134; lean_object* x_135; lean_object* x_136; lean_object* x_137; 
x_133 = lean_ctor_get(x_127, 1);
lean_inc(x_133);
lean_dec(x_127);
x_134 = l_Array_forInUnsafe_loop___at___private_Lean_Meta_LevelDefEq_0__Lean_Meta_processPostponedStep___spec__4___closed__1;
if (lean_is_scalar(x_37)) {
 x_135 = lean_alloc_ctor(0, 2, 0);
} else {
 x_135 = x_37;
}
lean_ctor_set(x_135, 0, x_134);
lean_ctor_set(x_135, 1, x_36);
x_136 = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(x_136, 0, x_135);
x_137 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_137, 0, x_136);
lean_ctor_set(x_137, 1, x_133);
x_15 = x_137;
goto block_32;
}
}
}
}
else
{
uint8_t x_151; 
lean_dec(x_54);
x_151 = !lean_is_exclusive(x_107);
if (x_151 == 0)
{
lean_object* x_152; lean_object* x_153; lean_object* x_154; 
x_152 = lean_ctor_get(x_107, 0);
lean_dec(x_152);
lean_inc(x_3);
if (lean_is_scalar(x_37)) {
 x_153 = lean_alloc_ctor(0, 2, 0);
} else {
 x_153 = x_37;
}
lean_ctor_set(x_153, 0, x_3);
lean_ctor_set(x_153, 1, x_36);
x_154 = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(x_154, 0, x_153);
lean_ctor_set(x_107, 0, x_154);
x_15 = x_107;
goto block_32;
}
else
{
lean_object* x_155; lean_object* x_156; lean_object* x_157; lean_object* x_158; 
x_155 = lean_ctor_get(x_107, 1);
lean_inc(x_155);
lean_dec(x_107);
lean_inc(x_3);
if (lean_is_scalar(x_37)) {
 x_156 = lean_alloc_ctor(0, 2, 0);
} else {
 x_156 = x_37;
}
lean_ctor_set(x_156, 0, x_3);
lean_ctor_set(x_156, 1, x_36);
x_157 = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(x_157, 0, x_156);
x_158 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_158, 0, x_157);
lean_ctor_set(x_158, 1, x_155);
x_15 = x_158;
goto block_32;
}
}
}
else
{
uint8_t x_159; 
lean_dec(x_54);
lean_dec(x_36);
lean_dec(x_37);
x_159 = !lean_is_exclusive(x_107);
if (x_159 == 0)
{
x_15 = x_107;
goto block_32;
}
else
{
lean_object* x_160; lean_object* x_161; lean_object* x_162; 
x_160 = lean_ctor_get(x_107, 0);
x_161 = lean_ctor_get(x_107, 1);
lean_inc(x_161);
lean_inc(x_160);
lean_dec(x_107);
x_162 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_162, 0, x_160);
lean_ctor_set(x_162, 1, x_161);
x_15 = x_162;
goto block_32;
}
}
}
}
else
{
uint8_t x_163; 
lean_dec(x_54);
lean_dec(x_36);
lean_dec(x_37);
lean_dec(x_35);
x_163 = !lean_is_exclusive(x_62);
if (x_163 == 0)
{
x_15 = x_62;
goto block_32;
}
else
{
lean_object* x_164; lean_object* x_165; lean_object* x_166; 
x_164 = lean_ctor_get(x_62, 0);
x_165 = lean_ctor_get(x_62, 1);
lean_inc(x_165);
lean_inc(x_164);
lean_dec(x_62);
x_166 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_166, 0, x_164);
lean_ctor_set(x_166, 1, x_165);
x_15 = x_166;
goto block_32;
}
}
}
}
}
else
{
uint8_t x_334; 
lean_dec(x_36);
lean_dec(x_37);
lean_dec(x_35);
x_334 = !lean_is_exclusive(x_53);
if (x_334 == 0)
{
x_15 = x_53;
goto block_32;
}
else
{
lean_object* x_335; lean_object* x_336; lean_object* x_337; 
x_335 = lean_ctor_get(x_53, 0);
x_336 = lean_ctor_get(x_53, 1);
lean_inc(x_336);
lean_inc(x_335);
lean_dec(x_53);
x_337 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_337, 0, x_335);
lean_ctor_set(x_337, 1, x_336);
x_15 = x_337;
goto block_32;
}
}
}
else
{
lean_object* x_338; uint8_t x_339; lean_object* x_340; lean_object* x_341; lean_object* x_342; lean_object* x_343; 
lean_dec(x_36);
x_338 = lean_array_fget(x_38, x_39);
x_339 = lean_unbox(x_338);
lean_dec(x_338);
x_340 = lean_unsigned_to_nat(1u);
x_341 = lean_nat_add(x_39, x_340);
lean_dec(x_39);
x_342 = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(x_342, 0, x_38);
lean_ctor_set(x_342, 1, x_341);
lean_ctor_set(x_342, 2, x_40);
lean_inc(x_13);
lean_inc(x_12);
lean_inc(x_11);
lean_inc(x_10);
lean_inc(x_35);
x_343 = l_Lean_Meta_inferType(x_35, x_10, x_11, x_12, x_13, x_14);
if (lean_obj_tag(x_343) == 0)
{
lean_object* x_344; lean_object* x_345; lean_object* x_346; uint8_t x_347; lean_object* x_348; uint8_t x_447; 
x_344 = lean_ctor_get(x_343, 0);
lean_inc(x_344);
x_345 = lean_ctor_get(x_343, 1);
lean_inc(x_345);
if (lean_is_exclusive(x_343)) {
 lean_ctor_release(x_343, 0);
 lean_ctor_release(x_343, 1);
 x_346 = x_343;
} else {
 lean_dec_ref(x_343);
 x_346 = lean_box(0);
}
x_447 = l_Lean_BinderInfo_isInstImplicit(x_339);
if (x_447 == 0)
{
lean_object* x_448; 
lean_inc(x_13);
lean_inc(x_12);
lean_inc(x_11);
lean_inc(x_10);
lean_inc(x_35);
x_448 = l_Lean_Meta_instantiateMVars(x_35, x_10, x_11, x_12, x_13, x_345);
if (lean_obj_tag(x_448) == 0)
{
lean_object* x_449; lean_object* x_450; lean_object* x_451; 
x_449 = lean_ctor_get(x_448, 0);
lean_inc(x_449);
x_450 = lean_ctor_get(x_448, 1);
lean_inc(x_450);
lean_dec(x_448);
lean_inc(x_13);
lean_inc(x_12);
lean_inc(x_11);
lean_inc(x_10);
lean_inc(x_344);
x_451 = l_Lean_Meta_isProp(x_344, x_10, x_11, x_12, x_13, x_450);
if (lean_obj_tag(x_451) == 0)
{
lean_object* x_452; uint8_t x_453; 
x_452 = lean_ctor_get(x_451, 0);
lean_inc(x_452);
x_453 = lean_unbox(x_452);
if (x_453 == 0)
{
lean_object* x_454; uint8_t x_455; 
lean_dec(x_449);
x_454 = lean_ctor_get(x_451, 1);
lean_inc(x_454);
lean_dec(x_451);
x_455 = lean_unbox(x_452);
lean_dec(x_452);
x_347 = x_455;
x_348 = x_454;
goto block_446;
}
else
{
lean_object* x_456; uint8_t x_457; 
lean_dec(x_452);
x_456 = lean_ctor_get(x_451, 1);
lean_inc(x_456);
lean_dec(x_451);
x_457 = l_Lean_Expr_isMVar(x_449);
lean_dec(x_449);
x_347 = x_457;
x_348 = x_456;
goto block_446;
}
}
else
{
lean_object* x_458; lean_object* x_459; lean_object* x_460; lean_object* x_461; 
lean_dec(x_449);
lean_dec(x_346);
lean_dec(x_344);
lean_dec(x_342);
lean_dec(x_37);
lean_dec(x_35);
x_458 = lean_ctor_get(x_451, 0);
lean_inc(x_458);
x_459 = lean_ctor_get(x_451, 1);
lean_inc(x_459);
if (lean_is_exclusive(x_451)) {
 lean_ctor_release(x_451, 0);
 lean_ctor_release(x_451, 1);
 x_460 = x_451;
} else {
 lean_dec_ref(x_451);
 x_460 = lean_box(0);
}
if (lean_is_scalar(x_460)) {
 x_461 = lean_alloc_ctor(1, 2, 0);
} else {
 x_461 = x_460;
}
lean_ctor_set(x_461, 0, x_458);
lean_ctor_set(x_461, 1, x_459);
x_15 = x_461;
goto block_32;
}
}
else
{
lean_object* x_462; lean_object* x_463; lean_object* x_464; lean_object* x_465; 
lean_dec(x_346);
lean_dec(x_344);
lean_dec(x_342);
lean_dec(x_37);
lean_dec(x_35);
x_462 = lean_ctor_get(x_448, 0);
lean_inc(x_462);
x_463 = lean_ctor_get(x_448, 1);
lean_inc(x_463);
if (lean_is_exclusive(x_448)) {
 lean_ctor_release(x_448, 0);
 lean_ctor_release(x_448, 1);
 x_464 = x_448;
} else {
 lean_dec_ref(x_448);
 x_464 = lean_box(0);
}
if (lean_is_scalar(x_464)) {
 x_465 = lean_alloc_ctor(1, 2, 0);
} else {
 x_465 = x_464;
}
lean_ctor_set(x_465, 0, x_462);
lean_ctor_set(x_465, 1, x_463);
x_15 = x_465;
goto block_32;
}
}
else
{
lean_object* x_466; lean_object* x_467; 
lean_dec(x_346);
lean_dec(x_37);
x_466 = lean_box(0);
lean_inc(x_13);
lean_inc(x_12);
lean_inc(x_11);
lean_inc(x_10);
lean_inc(x_344);
x_467 = l_Lean_Meta_trySynthInstance(x_344, x_466, x_10, x_11, x_12, x_13, x_345);
if (lean_obj_tag(x_467) == 0)
{
lean_object* x_468; 
x_468 = lean_ctor_get(x_467, 0);
lean_inc(x_468);
switch (lean_obj_tag(x_468)) {
case 0:
{
lean_object* x_469; lean_object* x_470; uint8_t x_471; lean_object* x_472; lean_object* x_494; lean_object* x_495; lean_object* x_496; uint8_t x_497; 
lean_dec(x_35);
x_469 = lean_ctor_get(x_467, 1);
lean_inc(x_469);
if (lean_is_exclusive(x_467)) {
 lean_ctor_release(x_467, 0);
 lean_ctor_release(x_467, 1);
 x_470 = x_467;
} else {
 lean_dec_ref(x_467);
 x_470 = lean_box(0);
}
x_494 = lean_st_ref_get(x_13, x_469);
x_495 = lean_ctor_get(x_494, 0);
lean_inc(x_495);
x_496 = lean_ctor_get(x_495, 3);
lean_inc(x_496);
lean_dec(x_495);
x_497 = lean_ctor_get_uint8(x_496, sizeof(void*)*1);
lean_dec(x_496);
if (x_497 == 0)
{
lean_object* x_498; uint8_t x_499; 
x_498 = lean_ctor_get(x_494, 1);
lean_inc(x_498);
lean_dec(x_494);
x_499 = 0;
x_471 = x_499;
x_472 = x_498;
goto block_493;
}
else
{
lean_object* x_500; lean_object* x_501; lean_object* x_502; lean_object* x_503; lean_object* x_504; uint8_t x_505; 
x_500 = lean_ctor_get(x_494, 1);
lean_inc(x_500);
lean_dec(x_494);
x_501 = l_Array_forInUnsafe_loop___at_Lean_Meta_Simp_synthesizeArgs___spec__3___closed__4;
x_502 = l___private_Lean_Util_Trace_0__Lean_checkTraceOptionM___at_Lean_Meta_Simp_synthesizeArgs___spec__2(x_501, x_8, x_9, x_10, x_11, x_12, x_13, x_500);
x_503 = lean_ctor_get(x_502, 0);
lean_inc(x_503);
x_504 = lean_ctor_get(x_502, 1);
lean_inc(x_504);
lean_dec(x_502);
x_505 = lean_unbox(x_503);
lean_dec(x_503);
x_471 = x_505;
x_472 = x_504;
goto block_493;
}
block_493:
{
if (x_471 == 0)
{
lean_object* x_473; lean_object* x_474; lean_object* x_475; lean_object* x_476; 
lean_dec(x_344);
x_473 = l_Array_forInUnsafe_loop___at___private_Lean_Meta_LevelDefEq_0__Lean_Meta_processPostponedStep___spec__4___closed__1;
x_474 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_474, 0, x_473);
lean_ctor_set(x_474, 1, x_342);
x_475 = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(x_475, 0, x_474);
if (lean_is_scalar(x_470)) {
 x_476 = lean_alloc_ctor(0, 2, 0);
} else {
 x_476 = x_470;
}
lean_ctor_set(x_476, 0, x_475);
lean_ctor_set(x_476, 1, x_472);
x_15 = x_476;
goto block_32;
}
else
{
lean_object* x_477; lean_object* x_478; lean_object* x_479; lean_object* x_480; lean_object* x_481; lean_object* x_482; lean_object* x_483; lean_object* x_484; lean_object* x_485; lean_object* x_486; lean_object* x_487; lean_object* x_488; lean_object* x_489; lean_object* x_490; lean_object* x_491; lean_object* x_492; 
lean_dec(x_470);
lean_inc(x_1);
x_477 = lean_alloc_ctor(4, 1, 0);
lean_ctor_set(x_477, 0, x_1);
x_478 = l_Lean_KernelException_toMessageData___closed__15;
x_479 = lean_alloc_ctor(10, 2, 0);
lean_ctor_set(x_479, 0, x_478);
lean_ctor_set(x_479, 1, x_477);
x_480 = l_Array_forInUnsafe_loop___at_Lean_Meta_Simp_synthesizeArgs___spec__3___closed__10;
x_481 = lean_alloc_ctor(10, 2, 0);
lean_ctor_set(x_481, 0, x_479);
lean_ctor_set(x_481, 1, x_480);
x_482 = l_Lean_indentExpr(x_344);
x_483 = lean_alloc_ctor(10, 2, 0);
lean_ctor_set(x_483, 0, x_481);
lean_ctor_set(x_483, 1, x_482);
x_484 = lean_alloc_ctor(10, 2, 0);
lean_ctor_set(x_484, 0, x_483);
lean_ctor_set(x_484, 1, x_478);
x_485 = l_Array_forInUnsafe_loop___at_Lean_Meta_Simp_synthesizeArgs___spec__3___closed__4;
x_486 = l_Lean_addTrace___at_Lean_Meta_Simp_synthesizeArgs___spec__1(x_485, x_484, x_8, x_9, x_10, x_11, x_12, x_13, x_472);
x_487 = lean_ctor_get(x_486, 1);
lean_inc(x_487);
if (lean_is_exclusive(x_486)) {
 lean_ctor_release(x_486, 0);
 lean_ctor_release(x_486, 1);
 x_488 = x_486;
} else {
 lean_dec_ref(x_486);
 x_488 = lean_box(0);
}
x_489 = l_Array_forInUnsafe_loop___at___private_Lean_Meta_LevelDefEq_0__Lean_Meta_processPostponedStep___spec__4___closed__1;
x_490 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_490, 0, x_489);
lean_ctor_set(x_490, 1, x_342);
x_491 = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(x_491, 0, x_490);
if (lean_is_scalar(x_488)) {
 x_492 = lean_alloc_ctor(0, 2, 0);
} else {
 x_492 = x_488;
}
lean_ctor_set(x_492, 0, x_491);
lean_ctor_set(x_492, 1, x_487);
x_15 = x_492;
goto block_32;
}
}
}
case 1:
{
lean_object* x_506; lean_object* x_507; lean_object* x_508; 
x_506 = lean_ctor_get(x_467, 1);
lean_inc(x_506);
lean_dec(x_467);
x_507 = lean_ctor_get(x_468, 0);
lean_inc(x_507);
lean_dec(x_468);
lean_inc(x_13);
lean_inc(x_12);
lean_inc(x_11);
lean_inc(x_10);
x_508 = l_Lean_Meta_isExprDefEq(x_35, x_507, x_10, x_11, x_12, x_13, x_506);
if (lean_obj_tag(x_508) == 0)
{
lean_object* x_509; uint8_t x_510; 
x_509 = lean_ctor_get(x_508, 0);
lean_inc(x_509);
x_510 = lean_unbox(x_509);
lean_dec(x_509);
if (x_510 == 0)
{
lean_object* x_511; lean_object* x_512; uint8_t x_513; lean_object* x_514; lean_object* x_536; lean_object* x_537; lean_object* x_538; uint8_t x_539; 
x_511 = lean_ctor_get(x_508, 1);
lean_inc(x_511);
if (lean_is_exclusive(x_508)) {
 lean_ctor_release(x_508, 0);
 lean_ctor_release(x_508, 1);
 x_512 = x_508;
} else {
 lean_dec_ref(x_508);
 x_512 = lean_box(0);
}
x_536 = lean_st_ref_get(x_13, x_511);
x_537 = lean_ctor_get(x_536, 0);
lean_inc(x_537);
x_538 = lean_ctor_get(x_537, 3);
lean_inc(x_538);
lean_dec(x_537);
x_539 = lean_ctor_get_uint8(x_538, sizeof(void*)*1);
lean_dec(x_538);
if (x_539 == 0)
{
lean_object* x_540; uint8_t x_541; 
x_540 = lean_ctor_get(x_536, 1);
lean_inc(x_540);
lean_dec(x_536);
x_541 = 0;
x_513 = x_541;
x_514 = x_540;
goto block_535;
}
else
{
lean_object* x_542; lean_object* x_543; lean_object* x_544; lean_object* x_545; lean_object* x_546; uint8_t x_547; 
x_542 = lean_ctor_get(x_536, 1);
lean_inc(x_542);
lean_dec(x_536);
x_543 = l_Array_forInUnsafe_loop___at_Lean_Meta_Simp_synthesizeArgs___spec__3___closed__4;
x_544 = l___private_Lean_Util_Trace_0__Lean_checkTraceOptionM___at_Lean_Meta_Simp_synthesizeArgs___spec__2(x_543, x_8, x_9, x_10, x_11, x_12, x_13, x_542);
x_545 = lean_ctor_get(x_544, 0);
lean_inc(x_545);
x_546 = lean_ctor_get(x_544, 1);
lean_inc(x_546);
lean_dec(x_544);
x_547 = lean_unbox(x_545);
lean_dec(x_545);
x_513 = x_547;
x_514 = x_546;
goto block_535;
}
block_535:
{
if (x_513 == 0)
{
lean_object* x_515; lean_object* x_516; lean_object* x_517; lean_object* x_518; 
lean_dec(x_344);
x_515 = l_Array_forInUnsafe_loop___at___private_Lean_Meta_LevelDefEq_0__Lean_Meta_processPostponedStep___spec__4___closed__1;
x_516 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_516, 0, x_515);
lean_ctor_set(x_516, 1, x_342);
x_517 = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(x_517, 0, x_516);
if (lean_is_scalar(x_512)) {
 x_518 = lean_alloc_ctor(0, 2, 0);
} else {
 x_518 = x_512;
}
lean_ctor_set(x_518, 0, x_517);
lean_ctor_set(x_518, 1, x_514);
x_15 = x_518;
goto block_32;
}
else
{
lean_object* x_519; lean_object* x_520; lean_object* x_521; lean_object* x_522; lean_object* x_523; lean_object* x_524; lean_object* x_525; lean_object* x_526; lean_object* x_527; lean_object* x_528; lean_object* x_529; lean_object* x_530; lean_object* x_531; lean_object* x_532; lean_object* x_533; lean_object* x_534; 
lean_dec(x_512);
lean_inc(x_1);
x_519 = lean_alloc_ctor(4, 1, 0);
lean_ctor_set(x_519, 0, x_1);
x_520 = l_Lean_KernelException_toMessageData___closed__15;
x_521 = lean_alloc_ctor(10, 2, 0);
lean_ctor_set(x_521, 0, x_520);
lean_ctor_set(x_521, 1, x_519);
x_522 = l_Array_forInUnsafe_loop___at_Lean_Meta_Simp_synthesizeArgs___spec__3___closed__12;
x_523 = lean_alloc_ctor(10, 2, 0);
lean_ctor_set(x_523, 0, x_521);
lean_ctor_set(x_523, 1, x_522);
x_524 = l_Lean_indentExpr(x_344);
x_525 = lean_alloc_ctor(10, 2, 0);
lean_ctor_set(x_525, 0, x_523);
lean_ctor_set(x_525, 1, x_524);
x_526 = lean_alloc_ctor(10, 2, 0);
lean_ctor_set(x_526, 0, x_525);
lean_ctor_set(x_526, 1, x_520);
x_527 = l_Array_forInUnsafe_loop___at_Lean_Meta_Simp_synthesizeArgs___spec__3___closed__4;
x_528 = l_Lean_addTrace___at_Lean_Meta_Simp_synthesizeArgs___spec__1(x_527, x_526, x_8, x_9, x_10, x_11, x_12, x_13, x_514);
x_529 = lean_ctor_get(x_528, 1);
lean_inc(x_529);
if (lean_is_exclusive(x_528)) {
 lean_ctor_release(x_528, 0);
 lean_ctor_release(x_528, 1);
 x_530 = x_528;
} else {
 lean_dec_ref(x_528);
 x_530 = lean_box(0);
}
x_531 = l_Array_forInUnsafe_loop___at___private_Lean_Meta_LevelDefEq_0__Lean_Meta_processPostponedStep___spec__4___closed__1;
x_532 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_532, 0, x_531);
lean_ctor_set(x_532, 1, x_342);
x_533 = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(x_533, 0, x_532);
if (lean_is_scalar(x_530)) {
 x_534 = lean_alloc_ctor(0, 2, 0);
} else {
 x_534 = x_530;
}
lean_ctor_set(x_534, 0, x_533);
lean_ctor_set(x_534, 1, x_529);
x_15 = x_534;
goto block_32;
}
}
}
else
{
lean_object* x_548; lean_object* x_549; lean_object* x_550; lean_object* x_551; lean_object* x_552; 
lean_dec(x_344);
x_548 = lean_ctor_get(x_508, 1);
lean_inc(x_548);
if (lean_is_exclusive(x_508)) {
 lean_ctor_release(x_508, 0);
 lean_ctor_release(x_508, 1);
 x_549 = x_508;
} else {
 lean_dec_ref(x_508);
 x_549 = lean_box(0);
}
lean_inc(x_3);
x_550 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_550, 0, x_3);
lean_ctor_set(x_550, 1, x_342);
x_551 = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(x_551, 0, x_550);
if (lean_is_scalar(x_549)) {
 x_552 = lean_alloc_ctor(0, 2, 0);
} else {
 x_552 = x_549;
}
lean_ctor_set(x_552, 0, x_551);
lean_ctor_set(x_552, 1, x_548);
x_15 = x_552;
goto block_32;
}
}
else
{
lean_object* x_553; lean_object* x_554; lean_object* x_555; lean_object* x_556; 
lean_dec(x_344);
lean_dec(x_342);
x_553 = lean_ctor_get(x_508, 0);
lean_inc(x_553);
x_554 = lean_ctor_get(x_508, 1);
lean_inc(x_554);
if (lean_is_exclusive(x_508)) {
 lean_ctor_release(x_508, 0);
 lean_ctor_release(x_508, 1);
 x_555 = x_508;
} else {
 lean_dec_ref(x_508);
 x_555 = lean_box(0);
}
if (lean_is_scalar(x_555)) {
 x_556 = lean_alloc_ctor(1, 2, 0);
} else {
 x_556 = x_555;
}
lean_ctor_set(x_556, 0, x_553);
lean_ctor_set(x_556, 1, x_554);
x_15 = x_556;
goto block_32;
}
}
default: 
{
lean_object* x_557; lean_object* x_558; uint8_t x_559; lean_object* x_560; lean_object* x_582; lean_object* x_583; lean_object* x_584; uint8_t x_585; 
lean_dec(x_35);
x_557 = lean_ctor_get(x_467, 1);
lean_inc(x_557);
if (lean_is_exclusive(x_467)) {
 lean_ctor_release(x_467, 0);
 lean_ctor_release(x_467, 1);
 x_558 = x_467;
} else {
 lean_dec_ref(x_467);
 x_558 = lean_box(0);
}
x_582 = lean_st_ref_get(x_13, x_557);
x_583 = lean_ctor_get(x_582, 0);
lean_inc(x_583);
x_584 = lean_ctor_get(x_583, 3);
lean_inc(x_584);
lean_dec(x_583);
x_585 = lean_ctor_get_uint8(x_584, sizeof(void*)*1);
lean_dec(x_584);
if (x_585 == 0)
{
lean_object* x_586; uint8_t x_587; 
x_586 = lean_ctor_get(x_582, 1);
lean_inc(x_586);
lean_dec(x_582);
x_587 = 0;
x_559 = x_587;
x_560 = x_586;
goto block_581;
}
else
{
lean_object* x_588; lean_object* x_589; lean_object* x_590; lean_object* x_591; lean_object* x_592; uint8_t x_593; 
x_588 = lean_ctor_get(x_582, 1);
lean_inc(x_588);
lean_dec(x_582);
x_589 = l_Array_forInUnsafe_loop___at_Lean_Meta_Simp_synthesizeArgs___spec__3___closed__4;
x_590 = l___private_Lean_Util_Trace_0__Lean_checkTraceOptionM___at_Lean_Meta_Simp_synthesizeArgs___spec__2(x_589, x_8, x_9, x_10, x_11, x_12, x_13, x_588);
x_591 = lean_ctor_get(x_590, 0);
lean_inc(x_591);
x_592 = lean_ctor_get(x_590, 1);
lean_inc(x_592);
lean_dec(x_590);
x_593 = lean_unbox(x_591);
lean_dec(x_591);
x_559 = x_593;
x_560 = x_592;
goto block_581;
}
block_581:
{
if (x_559 == 0)
{
lean_object* x_561; lean_object* x_562; lean_object* x_563; lean_object* x_564; 
lean_dec(x_344);
x_561 = l_Array_forInUnsafe_loop___at___private_Lean_Meta_LevelDefEq_0__Lean_Meta_processPostponedStep___spec__4___closed__1;
x_562 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_562, 0, x_561);
lean_ctor_set(x_562, 1, x_342);
x_563 = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(x_563, 0, x_562);
if (lean_is_scalar(x_558)) {
 x_564 = lean_alloc_ctor(0, 2, 0);
} else {
 x_564 = x_558;
}
lean_ctor_set(x_564, 0, x_563);
lean_ctor_set(x_564, 1, x_560);
x_15 = x_564;
goto block_32;
}
else
{
lean_object* x_565; lean_object* x_566; lean_object* x_567; lean_object* x_568; lean_object* x_569; lean_object* x_570; lean_object* x_571; lean_object* x_572; lean_object* x_573; lean_object* x_574; lean_object* x_575; lean_object* x_576; lean_object* x_577; lean_object* x_578; lean_object* x_579; lean_object* x_580; 
lean_dec(x_558);
lean_inc(x_1);
x_565 = lean_alloc_ctor(4, 1, 0);
lean_ctor_set(x_565, 0, x_1);
x_566 = l_Lean_KernelException_toMessageData___closed__15;
x_567 = lean_alloc_ctor(10, 2, 0);
lean_ctor_set(x_567, 0, x_566);
lean_ctor_set(x_567, 1, x_565);
x_568 = l_Array_forInUnsafe_loop___at_Lean_Meta_Simp_synthesizeArgs___spec__3___closed__10;
x_569 = lean_alloc_ctor(10, 2, 0);
lean_ctor_set(x_569, 0, x_567);
lean_ctor_set(x_569, 1, x_568);
x_570 = l_Lean_indentExpr(x_344);
x_571 = lean_alloc_ctor(10, 2, 0);
lean_ctor_set(x_571, 0, x_569);
lean_ctor_set(x_571, 1, x_570);
x_572 = lean_alloc_ctor(10, 2, 0);
lean_ctor_set(x_572, 0, x_571);
lean_ctor_set(x_572, 1, x_566);
x_573 = l_Array_forInUnsafe_loop___at_Lean_Meta_Simp_synthesizeArgs___spec__3___closed__4;
x_574 = l_Lean_addTrace___at_Lean_Meta_Simp_synthesizeArgs___spec__1(x_573, x_572, x_8, x_9, x_10, x_11, x_12, x_13, x_560);
x_575 = lean_ctor_get(x_574, 1);
lean_inc(x_575);
if (lean_is_exclusive(x_574)) {
 lean_ctor_release(x_574, 0);
 lean_ctor_release(x_574, 1);
 x_576 = x_574;
} else {
 lean_dec_ref(x_574);
 x_576 = lean_box(0);
}
x_577 = l_Array_forInUnsafe_loop___at___private_Lean_Meta_LevelDefEq_0__Lean_Meta_processPostponedStep___spec__4___closed__1;
x_578 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_578, 0, x_577);
lean_ctor_set(x_578, 1, x_342);
x_579 = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(x_579, 0, x_578);
if (lean_is_scalar(x_576)) {
 x_580 = lean_alloc_ctor(0, 2, 0);
} else {
 x_580 = x_576;
}
lean_ctor_set(x_580, 0, x_579);
lean_ctor_set(x_580, 1, x_575);
x_15 = x_580;
goto block_32;
}
}
}
}
}
else
{
lean_object* x_594; lean_object* x_595; lean_object* x_596; lean_object* x_597; 
lean_dec(x_344);
lean_dec(x_342);
lean_dec(x_35);
x_594 = lean_ctor_get(x_467, 0);
lean_inc(x_594);
x_595 = lean_ctor_get(x_467, 1);
lean_inc(x_595);
if (lean_is_exclusive(x_467)) {
 lean_ctor_release(x_467, 0);
 lean_ctor_release(x_467, 1);
 x_596 = x_467;
} else {
 lean_dec_ref(x_467);
 x_596 = lean_box(0);
}
if (lean_is_scalar(x_596)) {
 x_597 = lean_alloc_ctor(1, 2, 0);
} else {
 x_597 = x_596;
}
lean_ctor_set(x_597, 0, x_594);
lean_ctor_set(x_597, 1, x_595);
x_15 = x_597;
goto block_32;
}
}
block_446:
{
if (x_347 == 0)
{
lean_object* x_349; lean_object* x_350; lean_object* x_351; 
lean_dec(x_344);
lean_dec(x_35);
lean_inc(x_3);
if (lean_is_scalar(x_37)) {
 x_349 = lean_alloc_ctor(0, 2, 0);
} else {
 x_349 = x_37;
}
lean_ctor_set(x_349, 0, x_3);
lean_ctor_set(x_349, 1, x_342);
x_350 = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(x_350, 0, x_349);
if (lean_is_scalar(x_346)) {
 x_351 = lean_alloc_ctor(0, 2, 0);
} else {
 x_351 = x_346;
}
lean_ctor_set(x_351, 0, x_350);
lean_ctor_set(x_351, 1, x_348);
x_15 = x_351;
goto block_32;
}
else
{
lean_object* x_352; 
lean_dec(x_346);
lean_inc(x_2);
lean_inc(x_13);
lean_inc(x_12);
lean_inc(x_11);
lean_inc(x_10);
lean_inc(x_9);
lean_inc(x_8);
lean_inc(x_344);
x_352 = lean_apply_8(x_2, x_344, x_8, x_9, x_10, x_11, x_12, x_13, x_348);
if (lean_obj_tag(x_352) == 0)
{
lean_object* x_353; 
x_353 = lean_ctor_get(x_352, 0);
lean_inc(x_353);
if (lean_obj_tag(x_353) == 0)
{
lean_object* x_354; lean_object* x_355; uint8_t x_356; lean_object* x_357; lean_object* x_379; lean_object* x_380; lean_object* x_381; uint8_t x_382; 
lean_dec(x_35);
x_354 = lean_ctor_get(x_352, 1);
lean_inc(x_354);
if (lean_is_exclusive(x_352)) {
 lean_ctor_release(x_352, 0);
 lean_ctor_release(x_352, 1);
 x_355 = x_352;
} else {
 lean_dec_ref(x_352);
 x_355 = lean_box(0);
}
x_379 = lean_st_ref_get(x_13, x_354);
x_380 = lean_ctor_get(x_379, 0);
lean_inc(x_380);
x_381 = lean_ctor_get(x_380, 3);
lean_inc(x_381);
lean_dec(x_380);
x_382 = lean_ctor_get_uint8(x_381, sizeof(void*)*1);
lean_dec(x_381);
if (x_382 == 0)
{
lean_object* x_383; uint8_t x_384; 
x_383 = lean_ctor_get(x_379, 1);
lean_inc(x_383);
lean_dec(x_379);
x_384 = 0;
x_356 = x_384;
x_357 = x_383;
goto block_378;
}
else
{
lean_object* x_385; lean_object* x_386; lean_object* x_387; lean_object* x_388; lean_object* x_389; uint8_t x_390; 
x_385 = lean_ctor_get(x_379, 1);
lean_inc(x_385);
lean_dec(x_379);
x_386 = l_Array_forInUnsafe_loop___at_Lean_Meta_Simp_synthesizeArgs___spec__3___closed__4;
x_387 = l___private_Lean_Util_Trace_0__Lean_checkTraceOptionM___at_Lean_Meta_Simp_synthesizeArgs___spec__2(x_386, x_8, x_9, x_10, x_11, x_12, x_13, x_385);
x_388 = lean_ctor_get(x_387, 0);
lean_inc(x_388);
x_389 = lean_ctor_get(x_387, 1);
lean_inc(x_389);
lean_dec(x_387);
x_390 = lean_unbox(x_388);
lean_dec(x_388);
x_356 = x_390;
x_357 = x_389;
goto block_378;
}
block_378:
{
if (x_356 == 0)
{
lean_object* x_358; lean_object* x_359; lean_object* x_360; lean_object* x_361; 
lean_dec(x_344);
x_358 = l_Array_forInUnsafe_loop___at___private_Lean_Meta_LevelDefEq_0__Lean_Meta_processPostponedStep___spec__4___closed__1;
if (lean_is_scalar(x_37)) {
 x_359 = lean_alloc_ctor(0, 2, 0);
} else {
 x_359 = x_37;
}
lean_ctor_set(x_359, 0, x_358);
lean_ctor_set(x_359, 1, x_342);
x_360 = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(x_360, 0, x_359);
if (lean_is_scalar(x_355)) {
 x_361 = lean_alloc_ctor(0, 2, 0);
} else {
 x_361 = x_355;
}
lean_ctor_set(x_361, 0, x_360);
lean_ctor_set(x_361, 1, x_357);
x_15 = x_361;
goto block_32;
}
else
{
lean_object* x_362; lean_object* x_363; lean_object* x_364; lean_object* x_365; lean_object* x_366; lean_object* x_367; lean_object* x_368; lean_object* x_369; lean_object* x_370; lean_object* x_371; lean_object* x_372; lean_object* x_373; lean_object* x_374; lean_object* x_375; lean_object* x_376; lean_object* x_377; 
lean_dec(x_355);
lean_inc(x_1);
x_362 = lean_alloc_ctor(4, 1, 0);
lean_ctor_set(x_362, 0, x_1);
x_363 = l_Lean_KernelException_toMessageData___closed__15;
x_364 = lean_alloc_ctor(10, 2, 0);
lean_ctor_set(x_364, 0, x_363);
lean_ctor_set(x_364, 1, x_362);
x_365 = l_Array_forInUnsafe_loop___at_Lean_Meta_Simp_synthesizeArgs___spec__3___closed__6;
x_366 = lean_alloc_ctor(10, 2, 0);
lean_ctor_set(x_366, 0, x_364);
lean_ctor_set(x_366, 1, x_365);
x_367 = l_Lean_indentExpr(x_344);
x_368 = lean_alloc_ctor(10, 2, 0);
lean_ctor_set(x_368, 0, x_366);
lean_ctor_set(x_368, 1, x_367);
x_369 = lean_alloc_ctor(10, 2, 0);
lean_ctor_set(x_369, 0, x_368);
lean_ctor_set(x_369, 1, x_363);
x_370 = l_Array_forInUnsafe_loop___at_Lean_Meta_Simp_synthesizeArgs___spec__3___closed__4;
x_371 = l_Lean_addTrace___at_Lean_Meta_Simp_synthesizeArgs___spec__1(x_370, x_369, x_8, x_9, x_10, x_11, x_12, x_13, x_357);
x_372 = lean_ctor_get(x_371, 1);
lean_inc(x_372);
if (lean_is_exclusive(x_371)) {
 lean_ctor_release(x_371, 0);
 lean_ctor_release(x_371, 1);
 x_373 = x_371;
} else {
 lean_dec_ref(x_371);
 x_373 = lean_box(0);
}
x_374 = l_Array_forInUnsafe_loop___at___private_Lean_Meta_LevelDefEq_0__Lean_Meta_processPostponedStep___spec__4___closed__1;
if (lean_is_scalar(x_37)) {
 x_375 = lean_alloc_ctor(0, 2, 0);
} else {
 x_375 = x_37;
}
lean_ctor_set(x_375, 0, x_374);
lean_ctor_set(x_375, 1, x_342);
x_376 = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(x_376, 0, x_375);
if (lean_is_scalar(x_373)) {
 x_377 = lean_alloc_ctor(0, 2, 0);
} else {
 x_377 = x_373;
}
lean_ctor_set(x_377, 0, x_376);
lean_ctor_set(x_377, 1, x_372);
x_15 = x_377;
goto block_32;
}
}
}
else
{
lean_object* x_391; lean_object* x_392; lean_object* x_393; 
x_391 = lean_ctor_get(x_352, 1);
lean_inc(x_391);
lean_dec(x_352);
x_392 = lean_ctor_get(x_353, 0);
lean_inc(x_392);
lean_dec(x_353);
lean_inc(x_13);
lean_inc(x_12);
lean_inc(x_11);
lean_inc(x_10);
x_393 = l_Lean_Meta_isExprDefEq(x_35, x_392, x_10, x_11, x_12, x_13, x_391);
if (lean_obj_tag(x_393) == 0)
{
lean_object* x_394; uint8_t x_395; 
x_394 = lean_ctor_get(x_393, 0);
lean_inc(x_394);
x_395 = lean_unbox(x_394);
lean_dec(x_394);
if (x_395 == 0)
{
lean_object* x_396; lean_object* x_397; uint8_t x_398; lean_object* x_399; lean_object* x_421; lean_object* x_422; lean_object* x_423; uint8_t x_424; 
x_396 = lean_ctor_get(x_393, 1);
lean_inc(x_396);
if (lean_is_exclusive(x_393)) {
 lean_ctor_release(x_393, 0);
 lean_ctor_release(x_393, 1);
 x_397 = x_393;
} else {
 lean_dec_ref(x_393);
 x_397 = lean_box(0);
}
x_421 = lean_st_ref_get(x_13, x_396);
x_422 = lean_ctor_get(x_421, 0);
lean_inc(x_422);
x_423 = lean_ctor_get(x_422, 3);
lean_inc(x_423);
lean_dec(x_422);
x_424 = lean_ctor_get_uint8(x_423, sizeof(void*)*1);
lean_dec(x_423);
if (x_424 == 0)
{
lean_object* x_425; uint8_t x_426; 
x_425 = lean_ctor_get(x_421, 1);
lean_inc(x_425);
lean_dec(x_421);
x_426 = 0;
x_398 = x_426;
x_399 = x_425;
goto block_420;
}
else
{
lean_object* x_427; lean_object* x_428; lean_object* x_429; lean_object* x_430; lean_object* x_431; uint8_t x_432; 
x_427 = lean_ctor_get(x_421, 1);
lean_inc(x_427);
lean_dec(x_421);
x_428 = l_Array_forInUnsafe_loop___at_Lean_Meta_Simp_synthesizeArgs___spec__3___closed__4;
x_429 = l___private_Lean_Util_Trace_0__Lean_checkTraceOptionM___at_Lean_Meta_Simp_synthesizeArgs___spec__2(x_428, x_8, x_9, x_10, x_11, x_12, x_13, x_427);
x_430 = lean_ctor_get(x_429, 0);
lean_inc(x_430);
x_431 = lean_ctor_get(x_429, 1);
lean_inc(x_431);
lean_dec(x_429);
x_432 = lean_unbox(x_430);
lean_dec(x_430);
x_398 = x_432;
x_399 = x_431;
goto block_420;
}
block_420:
{
if (x_398 == 0)
{
lean_object* x_400; lean_object* x_401; lean_object* x_402; lean_object* x_403; 
lean_dec(x_344);
x_400 = l_Array_forInUnsafe_loop___at___private_Lean_Meta_LevelDefEq_0__Lean_Meta_processPostponedStep___spec__4___closed__1;
if (lean_is_scalar(x_37)) {
 x_401 = lean_alloc_ctor(0, 2, 0);
} else {
 x_401 = x_37;
}
lean_ctor_set(x_401, 0, x_400);
lean_ctor_set(x_401, 1, x_342);
x_402 = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(x_402, 0, x_401);
if (lean_is_scalar(x_397)) {
 x_403 = lean_alloc_ctor(0, 2, 0);
} else {
 x_403 = x_397;
}
lean_ctor_set(x_403, 0, x_402);
lean_ctor_set(x_403, 1, x_399);
x_15 = x_403;
goto block_32;
}
else
{
lean_object* x_404; lean_object* x_405; lean_object* x_406; lean_object* x_407; lean_object* x_408; lean_object* x_409; lean_object* x_410; lean_object* x_411; lean_object* x_412; lean_object* x_413; lean_object* x_414; lean_object* x_415; lean_object* x_416; lean_object* x_417; lean_object* x_418; lean_object* x_419; 
lean_dec(x_397);
lean_inc(x_1);
x_404 = lean_alloc_ctor(4, 1, 0);
lean_ctor_set(x_404, 0, x_1);
x_405 = l_Lean_KernelException_toMessageData___closed__15;
x_406 = lean_alloc_ctor(10, 2, 0);
lean_ctor_set(x_406, 0, x_405);
lean_ctor_set(x_406, 1, x_404);
x_407 = l_Array_forInUnsafe_loop___at_Lean_Meta_Simp_synthesizeArgs___spec__3___closed__8;
x_408 = lean_alloc_ctor(10, 2, 0);
lean_ctor_set(x_408, 0, x_406);
lean_ctor_set(x_408, 1, x_407);
x_409 = l_Lean_indentExpr(x_344);
x_410 = lean_alloc_ctor(10, 2, 0);
lean_ctor_set(x_410, 0, x_408);
lean_ctor_set(x_410, 1, x_409);
x_411 = lean_alloc_ctor(10, 2, 0);
lean_ctor_set(x_411, 0, x_410);
lean_ctor_set(x_411, 1, x_405);
x_412 = l_Array_forInUnsafe_loop___at_Lean_Meta_Simp_synthesizeArgs___spec__3___closed__4;
x_413 = l_Lean_addTrace___at_Lean_Meta_Simp_synthesizeArgs___spec__1(x_412, x_411, x_8, x_9, x_10, x_11, x_12, x_13, x_399);
x_414 = lean_ctor_get(x_413, 1);
lean_inc(x_414);
if (lean_is_exclusive(x_413)) {
 lean_ctor_release(x_413, 0);
 lean_ctor_release(x_413, 1);
 x_415 = x_413;
} else {
 lean_dec_ref(x_413);
 x_415 = lean_box(0);
}
x_416 = l_Array_forInUnsafe_loop___at___private_Lean_Meta_LevelDefEq_0__Lean_Meta_processPostponedStep___spec__4___closed__1;
if (lean_is_scalar(x_37)) {
 x_417 = lean_alloc_ctor(0, 2, 0);
} else {
 x_417 = x_37;
}
lean_ctor_set(x_417, 0, x_416);
lean_ctor_set(x_417, 1, x_342);
x_418 = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(x_418, 0, x_417);
if (lean_is_scalar(x_415)) {
 x_419 = lean_alloc_ctor(0, 2, 0);
} else {
 x_419 = x_415;
}
lean_ctor_set(x_419, 0, x_418);
lean_ctor_set(x_419, 1, x_414);
x_15 = x_419;
goto block_32;
}
}
}
else
{
lean_object* x_433; lean_object* x_434; lean_object* x_435; lean_object* x_436; lean_object* x_437; 
lean_dec(x_344);
x_433 = lean_ctor_get(x_393, 1);
lean_inc(x_433);
if (lean_is_exclusive(x_393)) {
 lean_ctor_release(x_393, 0);
 lean_ctor_release(x_393, 1);
 x_434 = x_393;
} else {
 lean_dec_ref(x_393);
 x_434 = lean_box(0);
}
lean_inc(x_3);
if (lean_is_scalar(x_37)) {
 x_435 = lean_alloc_ctor(0, 2, 0);
} else {
 x_435 = x_37;
}
lean_ctor_set(x_435, 0, x_3);
lean_ctor_set(x_435, 1, x_342);
x_436 = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(x_436, 0, x_435);
if (lean_is_scalar(x_434)) {
 x_437 = lean_alloc_ctor(0, 2, 0);
} else {
 x_437 = x_434;
}
lean_ctor_set(x_437, 0, x_436);
lean_ctor_set(x_437, 1, x_433);
x_15 = x_437;
goto block_32;
}
}
else
{
lean_object* x_438; lean_object* x_439; lean_object* x_440; lean_object* x_441; 
lean_dec(x_344);
lean_dec(x_342);
lean_dec(x_37);
x_438 = lean_ctor_get(x_393, 0);
lean_inc(x_438);
x_439 = lean_ctor_get(x_393, 1);
lean_inc(x_439);
if (lean_is_exclusive(x_393)) {
 lean_ctor_release(x_393, 0);
 lean_ctor_release(x_393, 1);
 x_440 = x_393;
} else {
 lean_dec_ref(x_393);
 x_440 = lean_box(0);
}
if (lean_is_scalar(x_440)) {
 x_441 = lean_alloc_ctor(1, 2, 0);
} else {
 x_441 = x_440;
}
lean_ctor_set(x_441, 0, x_438);
lean_ctor_set(x_441, 1, x_439);
x_15 = x_441;
goto block_32;
}
}
}
else
{
lean_object* x_442; lean_object* x_443; lean_object* x_444; lean_object* x_445; 
lean_dec(x_344);
lean_dec(x_342);
lean_dec(x_37);
lean_dec(x_35);
x_442 = lean_ctor_get(x_352, 0);
lean_inc(x_442);
x_443 = lean_ctor_get(x_352, 1);
lean_inc(x_443);
if (lean_is_exclusive(x_352)) {
 lean_ctor_release(x_352, 0);
 lean_ctor_release(x_352, 1);
 x_444 = x_352;
} else {
 lean_dec_ref(x_352);
 x_444 = lean_box(0);
}
if (lean_is_scalar(x_444)) {
 x_445 = lean_alloc_ctor(1, 2, 0);
} else {
 x_445 = x_444;
}
lean_ctor_set(x_445, 0, x_442);
lean_ctor_set(x_445, 1, x_443);
x_15 = x_445;
goto block_32;
}
}
}
}
else
{
lean_object* x_598; lean_object* x_599; lean_object* x_600; lean_object* x_601; 
lean_dec(x_342);
lean_dec(x_37);
lean_dec(x_35);
x_598 = lean_ctor_get(x_343, 0);
lean_inc(x_598);
x_599 = lean_ctor_get(x_343, 1);
lean_inc(x_599);
if (lean_is_exclusive(x_343)) {
 lean_ctor_release(x_343, 0);
 lean_ctor_release(x_343, 1);
 x_600 = x_343;
} else {
 lean_dec_ref(x_343);
 x_600 = lean_box(0);
}
if (lean_is_scalar(x_600)) {
 x_601 = lean_alloc_ctor(1, 2, 0);
} else {
 x_601 = x_600;
}
lean_ctor_set(x_601, 0, x_598);
lean_ctor_set(x_601, 1, x_599);
x_15 = x_601;
goto block_32;
}
}
}
}
block_32:
{
if (lean_obj_tag(x_15) == 0)
{
lean_object* x_16; 
x_16 = lean_ctor_get(x_15, 0);
lean_inc(x_16);
if (lean_obj_tag(x_16) == 0)
{
uint8_t x_17; 
lean_dec(x_13);
lean_dec(x_12);
lean_dec(x_11);
lean_dec(x_10);
lean_dec(x_9);
lean_dec(x_8);
lean_dec(x_3);
lean_dec(x_2);
lean_dec(x_1);
x_17 = !lean_is_exclusive(x_15);
if (x_17 == 0)
{
lean_object* x_18; lean_object* x_19; 
x_18 = lean_ctor_get(x_15, 0);
lean_dec(x_18);
x_19 = lean_ctor_get(x_16, 0);
lean_inc(x_19);
lean_dec(x_16);
lean_ctor_set(x_15, 0, x_19);
return x_15;
}
else
{
lean_object* x_20; lean_object* x_21; lean_object* x_22; 
x_20 = lean_ctor_get(x_15, 1);
lean_inc(x_20);
lean_dec(x_15);
x_21 = lean_ctor_get(x_16, 0);
lean_inc(x_21);
lean_dec(x_16);
x_22 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_22, 0, x_21);
lean_ctor_set(x_22, 1, x_20);
return x_22;
}
}
else
{
lean_object* x_23; lean_object* x_24; size_t x_25; size_t x_26; 
x_23 = lean_ctor_get(x_15, 1);
lean_inc(x_23);
lean_dec(x_15);
x_24 = lean_ctor_get(x_16, 0);
lean_inc(x_24);
lean_dec(x_16);
x_25 = 1;
x_26 = x_6 + x_25;
x_6 = x_26;
x_7 = x_24;
x_14 = x_23;
goto _start;
}
}
else
{
uint8_t x_28; 
lean_dec(x_13);
lean_dec(x_12);
lean_dec(x_11);
lean_dec(x_10);
lean_dec(x_9);
lean_dec(x_8);
lean_dec(x_3);
lean_dec(x_2);
lean_dec(x_1);
x_28 = !lean_is_exclusive(x_15);
if (x_28 == 0)
{
return x_15;
}
else
{
lean_object* x_29; lean_object* x_30; lean_object* x_31; 
x_29 = lean_ctor_get(x_15, 0);
x_30 = lean_ctor_get(x_15, 1);
lean_inc(x_30);
lean_inc(x_29);
lean_dec(x_15);
x_31 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_31, 0, x_29);
lean_ctor_set(x_31, 1, x_30);
return x_31;
}
}
}
}
}
lean_object* l_Lean_Meta_Simp_synthesizeArgs___lambda__1(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8) {
_start:
{
uint8_t x_9; lean_object* x_10; lean_object* x_11; 
x_9 = 1;
x_10 = lean_box(x_9);
x_11 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_11, 0, x_10);
lean_ctor_set(x_11, 1, x_8);
return x_11;
}
}
static lean_object* _init_l_Lean_Meta_Simp_synthesizeArgs___closed__1() {
_start:
{
lean_object* x_1; 
x_1 = lean_alloc_closure((void*)(l_Lean_Meta_Simp_synthesizeArgs___lambda__1___boxed), 8, 0);
return x_1;
}
}
lean_object* l_Lean_Meta_Simp_synthesizeArgs(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9, lean_object* x_10, lean_object* x_11) {
_start:
{
lean_object* x_12; lean_object* x_13; lean_object* x_14; lean_object* x_15; lean_object* x_16; lean_object* x_17; size_t x_18; size_t x_19; lean_object* x_20; 
x_12 = lean_array_get_size(x_3);
x_13 = lean_unsigned_to_nat(0u);
x_14 = l_Array_toSubarray___rarg(x_3, x_13, x_12);
x_15 = lean_box(0);
x_16 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_16, 0, x_15);
lean_ctor_set(x_16, 1, x_14);
x_17 = lean_array_get_size(x_2);
x_18 = lean_usize_of_nat(x_17);
lean_dec(x_17);
x_19 = 0;
lean_inc(x_10);
lean_inc(x_9);
lean_inc(x_8);
lean_inc(x_7);
lean_inc(x_6);
lean_inc(x_5);
x_20 = l_Array_forInUnsafe_loop___at_Lean_Meta_Simp_synthesizeArgs___spec__3(x_1, x_4, x_15, x_2, x_18, x_19, x_16, x_5, x_6, x_7, x_8, x_9, x_10, x_11);
if (lean_obj_tag(x_20) == 0)
{
lean_object* x_21; lean_object* x_22; 
x_21 = lean_ctor_get(x_20, 0);
lean_inc(x_21);
x_22 = lean_ctor_get(x_21, 0);
lean_inc(x_22);
lean_dec(x_21);
if (lean_obj_tag(x_22) == 0)
{
lean_object* x_23; lean_object* x_24; lean_object* x_25; lean_object* x_26; 
x_23 = lean_ctor_get(x_20, 1);
lean_inc(x_23);
lean_dec(x_20);
x_24 = l_Lean_Meta_Simp_synthesizeArgs___closed__1;
x_25 = lean_box(0);
x_26 = lean_apply_8(x_24, x_25, x_5, x_6, x_7, x_8, x_9, x_10, x_23);
return x_26;
}
else
{
uint8_t x_27; 
lean_dec(x_10);
lean_dec(x_9);
lean_dec(x_8);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_5);
x_27 = !lean_is_exclusive(x_20);
if (x_27 == 0)
{
lean_object* x_28; lean_object* x_29; 
x_28 = lean_ctor_get(x_20, 0);
lean_dec(x_28);
x_29 = lean_ctor_get(x_22, 0);
lean_inc(x_29);
lean_dec(x_22);
lean_ctor_set(x_20, 0, x_29);
return x_20;
}
else
{
lean_object* x_30; lean_object* x_31; lean_object* x_32; 
x_30 = lean_ctor_get(x_20, 1);
lean_inc(x_30);
lean_dec(x_20);
x_31 = lean_ctor_get(x_22, 0);
lean_inc(x_31);
lean_dec(x_22);
x_32 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_32, 0, x_31);
lean_ctor_set(x_32, 1, x_30);
return x_32;
}
}
}
else
{
uint8_t x_33; 
lean_dec(x_10);
lean_dec(x_9);
lean_dec(x_8);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_5);
x_33 = !lean_is_exclusive(x_20);
if (x_33 == 0)
{
return x_20;
}
else
{
lean_object* x_34; lean_object* x_35; lean_object* x_36; 
x_34 = lean_ctor_get(x_20, 0);
x_35 = lean_ctor_get(x_20, 1);
lean_inc(x_35);
lean_inc(x_34);
lean_dec(x_20);
x_36 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_36, 0, x_34);
lean_ctor_set(x_36, 1, x_35);
return x_36;
}
}
}
}
lean_object* l_Lean_addTrace___at_Lean_Meta_Simp_synthesizeArgs___spec__1___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9) {
_start:
{
lean_object* x_10; 
x_10 = l_Lean_addTrace___at_Lean_Meta_Simp_synthesizeArgs___spec__1(x_1, x_2, x_3, x_4, x_5, x_6, x_7, x_8, x_9);
lean_dec(x_8);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
return x_10;
}
}
lean_object* l___private_Lean_Util_Trace_0__Lean_checkTraceOptionM___at_Lean_Meta_Simp_synthesizeArgs___spec__2___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8) {
_start:
{
lean_object* x_9; 
x_9 = l___private_Lean_Util_Trace_0__Lean_checkTraceOptionM___at_Lean_Meta_Simp_synthesizeArgs___spec__2(x_1, x_2, x_3, x_4, x_5, x_6, x_7, x_8);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
lean_dec(x_2);
return x_9;
}
}
lean_object* l_Array_forInUnsafe_loop___at_Lean_Meta_Simp_synthesizeArgs___spec__3___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9, lean_object* x_10, lean_object* x_11, lean_object* x_12, lean_object* x_13, lean_object* x_14) {
_start:
{
size_t x_15; size_t x_16; lean_object* x_17; 
x_15 = lean_unbox_usize(x_5);
lean_dec(x_5);
x_16 = lean_unbox_usize(x_6);
lean_dec(x_6);
x_17 = l_Array_forInUnsafe_loop___at_Lean_Meta_Simp_synthesizeArgs___spec__3(x_1, x_2, x_3, x_4, x_15, x_16, x_7, x_8, x_9, x_10, x_11, x_12, x_13, x_14);
lean_dec(x_4);
return x_17;
}
}
lean_object* l_Lean_Meta_Simp_synthesizeArgs___lambda__1___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8) {
_start:
{
lean_object* x_9; 
x_9 = l_Lean_Meta_Simp_synthesizeArgs___lambda__1(x_1, x_2, x_3, x_4, x_5, x_6, x_7, x_8);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
lean_dec(x_2);
lean_dec(x_1);
return x_9;
}
}
lean_object* l_Lean_Meta_Simp_synthesizeArgs___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9, lean_object* x_10, lean_object* x_11) {
_start:
{
lean_object* x_12; 
x_12 = l_Lean_Meta_Simp_synthesizeArgs(x_1, x_2, x_3, x_4, x_5, x_6, x_7, x_8, x_9, x_10, x_11);
lean_dec(x_2);
return x_12;
}
}
lean_object* l_Lean_Meta_Simp_rewrite_getLHS_match__1___rarg(uint8_t x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6) {
_start:
{
switch (x_1) {
case 0:
{
lean_object* x_7; lean_object* x_8; 
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_3);
lean_dec(x_2);
x_7 = lean_box(0);
x_8 = lean_apply_1(x_4, x_7);
return x_8;
}
case 1:
{
lean_object* x_9; lean_object* x_10; 
lean_dec(x_6);
lean_dec(x_4);
lean_dec(x_3);
lean_dec(x_2);
x_9 = lean_box(0);
x_10 = lean_apply_1(x_5, x_9);
return x_10;
}
case 2:
{
lean_object* x_11; lean_object* x_12; 
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
lean_dec(x_2);
x_11 = lean_box(0);
x_12 = lean_apply_1(x_6, x_11);
return x_12;
}
case 3:
{
lean_object* x_13; lean_object* x_14; 
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
x_13 = lean_box(0);
x_14 = lean_apply_1(x_2, x_13);
return x_14;
}
default: 
{
lean_object* x_15; lean_object* x_16; 
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_2);
x_15 = lean_box(0);
x_16 = lean_apply_1(x_3, x_15);
return x_16;
}
}
}
}
lean_object* l_Lean_Meta_Simp_rewrite_getLHS_match__1(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = lean_alloc_closure((void*)(l_Lean_Meta_Simp_rewrite_getLHS_match__1___rarg___boxed), 6, 0);
return x_2;
}
}
lean_object* l_Lean_Meta_Simp_rewrite_getLHS_match__1___rarg___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6) {
_start:
{
uint8_t x_7; lean_object* x_8; 
x_7 = lean_unbox(x_1);
lean_dec(x_1);
x_8 = l_Lean_Meta_Simp_rewrite_getLHS_match__1___rarg(x_7, x_2, x_3, x_4, x_5, x_6);
return x_8;
}
}
lean_object* l_Lean_Meta_Simp_rewrite_finalizeProof_match__1___rarg(uint8_t x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6) {
_start:
{
switch (x_1) {
case 0:
{
lean_object* x_7; lean_object* x_8; 
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
x_7 = lean_box(0);
x_8 = lean_apply_1(x_2, x_7);
return x_8;
}
case 1:
{
lean_object* x_9; lean_object* x_10; 
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_2);
x_9 = lean_box(0);
x_10 = lean_apply_1(x_3, x_9);
return x_10;
}
case 2:
{
lean_object* x_11; lean_object* x_12; 
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
lean_dec(x_2);
x_11 = lean_box(0);
x_12 = lean_apply_1(x_6, x_11);
return x_12;
}
case 3:
{
lean_object* x_13; lean_object* x_14; 
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_3);
lean_dec(x_2);
x_13 = lean_box(0);
x_14 = lean_apply_1(x_4, x_13);
return x_14;
}
default: 
{
lean_object* x_15; lean_object* x_16; 
lean_dec(x_6);
lean_dec(x_4);
lean_dec(x_3);
lean_dec(x_2);
x_15 = lean_box(0);
x_16 = lean_apply_1(x_5, x_15);
return x_16;
}
}
}
}
lean_object* l_Lean_Meta_Simp_rewrite_finalizeProof_match__1(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = lean_alloc_closure((void*)(l_Lean_Meta_Simp_rewrite_finalizeProof_match__1___rarg___boxed), 6, 0);
return x_2;
}
}
lean_object* l_Lean_Meta_Simp_rewrite_finalizeProof_match__1___rarg___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6) {
_start:
{
uint8_t x_7; lean_object* x_8; 
x_7 = lean_unbox(x_1);
lean_dec(x_1);
x_8 = l_Lean_Meta_Simp_rewrite_finalizeProof_match__1___rarg(x_7, x_2, x_3, x_4, x_5, x_6);
return x_8;
}
}
lean_object* l_Lean_Meta_Simp_rewrite_tryLemma_x3f_match__1___rarg(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; lean_object* x_4; lean_object* x_5; lean_object* x_6; lean_object* x_7; 
x_3 = lean_ctor_get(x_1, 1);
lean_inc(x_3);
x_4 = lean_ctor_get(x_1, 0);
lean_inc(x_4);
lean_dec(x_1);
x_5 = lean_ctor_get(x_3, 0);
lean_inc(x_5);
x_6 = lean_ctor_get(x_3, 1);
lean_inc(x_6);
lean_dec(x_3);
x_7 = lean_apply_3(x_2, x_4, x_5, x_6);
return x_7;
}
}
lean_object* l_Lean_Meta_Simp_rewrite_tryLemma_x3f_match__1(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = lean_alloc_closure((void*)(l_Lean_Meta_Simp_rewrite_tryLemma_x3f_match__1___rarg), 2, 0);
return x_2;
}
}
lean_object* l_Lean_Meta_Simp_rewrite_match__1___rarg(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
if (lean_obj_tag(x_1) == 0)
{
lean_object* x_4; 
lean_dec(x_2);
x_4 = lean_apply_1(x_3, x_1);
return x_4;
}
else
{
lean_object* x_5; lean_object* x_6; 
lean_dec(x_3);
x_5 = lean_ctor_get(x_1, 0);
lean_inc(x_5);
lean_dec(x_1);
x_6 = lean_apply_1(x_2, x_5);
return x_6;
}
}
}
lean_object* l_Lean_Meta_Simp_rewrite_match__1(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = lean_alloc_closure((void*)(l_Lean_Meta_Simp_rewrite_match__1___rarg), 3, 0);
return x_2;
}
}
lean_object* l_Lean_Meta_Simp_rewrite_match__2___rarg(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
if (lean_obj_tag(x_1) == 0)
{
lean_object* x_4; lean_object* x_5; 
lean_dec(x_3);
x_4 = lean_box(0);
x_5 = lean_apply_1(x_2, x_4);
return x_5;
}
else
{
lean_object* x_6; lean_object* x_7; 
lean_dec(x_2);
x_6 = lean_ctor_get(x_1, 0);
lean_inc(x_6);
lean_dec(x_1);
x_7 = lean_apply_1(x_3, x_6);
return x_7;
}
}
}
lean_object* l_Lean_Meta_Simp_rewrite_match__2(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = lean_alloc_closure((void*)(l_Lean_Meta_Simp_rewrite_match__2___rarg), 3, 0);
return x_2;
}
}
lean_object* l_Lean_Meta_Simp_rewrite_getLHS(uint8_t x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7) {
_start:
{
lean_object* x_8; 
x_8 = lean_box(x_1);
switch (lean_obj_tag(x_8)) {
case 2:
{
lean_object* x_9; lean_object* x_10; lean_object* x_11; lean_object* x_12; 
x_9 = l_Lean_Expr_appFn_x21(x_2);
x_10 = l_Lean_Expr_appArg_x21(x_9);
lean_dec(x_9);
x_11 = l_Lean_Expr_appArg_x21(x_2);
lean_dec(x_2);
x_12 = l_Lean_Meta_mkEq(x_10, x_11, x_3, x_4, x_5, x_6, x_7);
return x_12;
}
case 3:
{
lean_object* x_13; 
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
x_13 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_13, 0, x_2);
lean_ctor_set(x_13, 1, x_7);
return x_13;
}
case 4:
{
lean_object* x_14; lean_object* x_15; 
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
x_14 = l_Lean_Expr_appArg_x21(x_2);
lean_dec(x_2);
x_15 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_15, 0, x_14);
lean_ctor_set(x_15, 1, x_7);
return x_15;
}
default: 
{
lean_object* x_16; lean_object* x_17; lean_object* x_18; 
lean_dec(x_8);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
x_16 = l_Lean_Expr_appFn_x21(x_2);
lean_dec(x_2);
x_17 = l_Lean_Expr_appArg_x21(x_16);
lean_dec(x_16);
x_18 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_18, 0, x_17);
lean_ctor_set(x_18, 1, x_7);
return x_18;
}
}
}
}
lean_object* l_Lean_Meta_Simp_rewrite_getLHS___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7) {
_start:
{
uint8_t x_8; lean_object* x_9; 
x_8 = lean_unbox(x_1);
lean_dec(x_1);
x_9 = l_Lean_Meta_Simp_rewrite_getLHS(x_8, x_2, x_3, x_4, x_5, x_6, x_7);
return x_9;
}
}
static lean_object* _init_l_Lean_Meta_Simp_rewrite_getRHS___closed__1() {
_start:
{
lean_object* x_1; lean_object* x_2; lean_object* x_3; 
x_1 = lean_box(0);
x_2 = l___private_Lean_MonadEnv_0__Lean_supportedRecursors___closed__5;
x_3 = l_Lean_mkConst(x_2, x_1);
return x_3;
}
}
static lean_object* _init_l_Lean_Meta_Simp_rewrite_getRHS___closed__2() {
_start:
{
lean_object* x_1; 
x_1 = lean_mk_string("True");
return x_1;
}
}
static lean_object* _init_l_Lean_Meta_Simp_rewrite_getRHS___closed__3() {
_start:
{
lean_object* x_1; lean_object* x_2; lean_object* x_3; 
x_1 = lean_box(0);
x_2 = l_Lean_Meta_Simp_rewrite_getRHS___closed__2;
x_3 = lean_name_mk_string(x_1, x_2);
return x_3;
}
}
static lean_object* _init_l_Lean_Meta_Simp_rewrite_getRHS___closed__4() {
_start:
{
lean_object* x_1; lean_object* x_2; lean_object* x_3; 
x_1 = lean_box(0);
x_2 = l_Lean_Meta_Simp_rewrite_getRHS___closed__3;
x_3 = l_Lean_mkConst(x_2, x_1);
return x_3;
}
}
lean_object* l_Lean_Meta_Simp_rewrite_getRHS(uint8_t x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7) {
_start:
{
lean_object* x_8; 
x_8 = lean_box(x_1);
switch (lean_obj_tag(x_8)) {
case 2:
{
lean_object* x_9; lean_object* x_10; 
x_9 = l_Lean_Meta_Simp_rewrite_getRHS___closed__1;
x_10 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_10, 0, x_9);
lean_ctor_set(x_10, 1, x_7);
return x_10;
}
case 3:
{
lean_object* x_11; lean_object* x_12; 
x_11 = l_Lean_Meta_Simp_rewrite_getRHS___closed__4;
x_12 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_12, 0, x_11);
lean_ctor_set(x_12, 1, x_7);
return x_12;
}
case 4:
{
lean_object* x_13; lean_object* x_14; 
x_13 = l_Lean_Meta_Simp_rewrite_getRHS___closed__1;
x_14 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_14, 0, x_13);
lean_ctor_set(x_14, 1, x_7);
return x_14;
}
default: 
{
lean_object* x_15; lean_object* x_16; 
lean_dec(x_8);
x_15 = l_Lean_Expr_appArg_x21(x_2);
x_16 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_16, 0, x_15);
lean_ctor_set(x_16, 1, x_7);
return x_16;
}
}
}
}
lean_object* l_Lean_Meta_Simp_rewrite_getRHS___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7) {
_start:
{
uint8_t x_8; lean_object* x_9; 
x_8 = lean_unbox(x_1);
lean_dec(x_1);
x_9 = l_Lean_Meta_Simp_rewrite_getRHS(x_8, x_2, x_3, x_4, x_5, x_6, x_7);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
lean_dec(x_2);
return x_9;
}
}
lean_object* l_Lean_Meta_Simp_rewrite_finalizeProof(uint8_t x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7) {
_start:
{
lean_object* x_8; 
x_8 = lean_box(x_1);
switch (lean_obj_tag(x_8)) {
case 0:
{
lean_object* x_9; 
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
x_9 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_9, 0, x_2);
lean_ctor_set(x_9, 1, x_7);
return x_9;
}
case 1:
{
lean_object* x_10; 
x_10 = l_Lean_Meta_mkPropExt(x_2, x_3, x_4, x_5, x_6, x_7);
return x_10;
}
case 3:
{
lean_object* x_11; 
x_11 = l_Lean_Meta_mkEqTrue(x_2, x_3, x_4, x_5, x_6, x_7);
return x_11;
}
default: 
{
lean_object* x_12; 
lean_dec(x_8);
x_12 = l_Lean_Meta_mkEqFalse(x_2, x_3, x_4, x_5, x_6, x_7);
return x_12;
}
}
}
}
lean_object* l_Lean_Meta_Simp_rewrite_finalizeProof___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7) {
_start:
{
uint8_t x_8; lean_object* x_9; 
x_8 = lean_unbox(x_1);
lean_dec(x_1);
x_9 = l_Lean_Meta_Simp_rewrite_finalizeProof(x_8, x_2, x_3, x_4, x_5, x_6, x_7);
return x_9;
}
}
lean_object* l_ReaderT_bind___at_Lean_Meta_Simp_rewrite_tryLemma_x3f___spec__1___rarg(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9) {
_start:
{
lean_object* x_10; 
lean_inc(x_8);
lean_inc(x_7);
lean_inc(x_6);
lean_inc(x_5);
lean_inc(x_4);
lean_inc(x_3);
x_10 = lean_apply_7(x_1, x_3, x_4, x_5, x_6, x_7, x_8, x_9);
if (lean_obj_tag(x_10) == 0)
{
lean_object* x_11; lean_object* x_12; lean_object* x_13; 
x_11 = lean_ctor_get(x_10, 0);
lean_inc(x_11);
x_12 = lean_ctor_get(x_10, 1);
lean_inc(x_12);
lean_dec(x_10);
x_13 = lean_apply_8(x_2, x_11, x_3, x_4, x_5, x_6, x_7, x_8, x_12);
return x_13;
}
else
{
uint8_t x_14; 
lean_dec(x_8);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
lean_dec(x_2);
x_14 = !lean_is_exclusive(x_10);
if (x_14 == 0)
{
return x_10;
}
else
{
lean_object* x_15; lean_object* x_16; lean_object* x_17; 
x_15 = lean_ctor_get(x_10, 0);
x_16 = lean_ctor_get(x_10, 1);
lean_inc(x_16);
lean_inc(x_15);
lean_dec(x_10);
x_17 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_17, 0, x_15);
lean_ctor_set(x_17, 1, x_16);
return x_17;
}
}
}
}
lean_object* l_ReaderT_bind___at_Lean_Meta_Simp_rewrite_tryLemma_x3f___spec__1(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; 
x_3 = lean_alloc_closure((void*)(l_ReaderT_bind___at_Lean_Meta_Simp_rewrite_tryLemma_x3f___spec__1___rarg), 9, 0);
return x_3;
}
}
static lean_object* _init_l_ReaderT_bind___at_Lean_Meta_Simp_rewrite_tryLemma_x3f___spec__1___at_Lean_Meta_Simp_rewrite_tryLemma_x3f___spec__2___lambda__1___closed__1() {
_start:
{
lean_object* x_1; lean_object* x_2; lean_object* x_3; 
x_1 = l_Array_forInUnsafe_loop___at_Lean_Meta_Simp_synthesizeArgs___spec__3___closed__2;
x_2 = l_Lean_Parser_Tactic_rewrite___closed__1;
x_3 = lean_name_mk_string(x_1, x_2);
return x_3;
}
}
lean_object* l_ReaderT_bind___at_Lean_Meta_Simp_rewrite_tryLemma_x3f___spec__1___at_Lean_Meta_Simp_rewrite_tryLemma_x3f___spec__2___lambda__1(uint8_t x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9, lean_object* x_10, lean_object* x_11, lean_object* x_12, lean_object* x_13) {
_start:
{
lean_object* x_14; 
lean_inc(x_12);
lean_inc(x_11);
lean_inc(x_10);
lean_inc(x_9);
x_14 = l_Lean_Meta_Simp_rewrite_finalizeProof(x_1, x_2, x_9, x_10, x_11, x_12, x_13);
if (lean_obj_tag(x_14) == 0)
{
lean_object* x_15; lean_object* x_16; lean_object* x_17; uint8_t x_18; lean_object* x_19; lean_object* x_50; lean_object* x_51; lean_object* x_52; uint8_t x_53; 
x_15 = lean_ctor_get(x_14, 0);
lean_inc(x_15);
x_16 = lean_ctor_get(x_14, 1);
lean_inc(x_16);
if (lean_is_exclusive(x_14)) {
 lean_ctor_release(x_14, 0);
 lean_ctor_release(x_14, 1);
 x_17 = x_14;
} else {
 lean_dec_ref(x_14);
 x_17 = lean_box(0);
}
x_50 = lean_st_ref_get(x_12, x_16);
x_51 = lean_ctor_get(x_50, 0);
lean_inc(x_51);
x_52 = lean_ctor_get(x_51, 3);
lean_inc(x_52);
lean_dec(x_51);
x_53 = lean_ctor_get_uint8(x_52, sizeof(void*)*1);
lean_dec(x_52);
if (x_53 == 0)
{
lean_object* x_54; uint8_t x_55; 
x_54 = lean_ctor_get(x_50, 1);
lean_inc(x_54);
lean_dec(x_50);
x_55 = 0;
x_18 = x_55;
x_19 = x_54;
goto block_49;
}
else
{
lean_object* x_56; lean_object* x_57; lean_object* x_58; lean_object* x_59; lean_object* x_60; uint8_t x_61; 
x_56 = lean_ctor_get(x_50, 1);
lean_inc(x_56);
lean_dec(x_50);
x_57 = l_ReaderT_bind___at_Lean_Meta_Simp_rewrite_tryLemma_x3f___spec__1___at_Lean_Meta_Simp_rewrite_tryLemma_x3f___spec__2___lambda__1___closed__1;
x_58 = l___private_Lean_Util_Trace_0__Lean_checkTraceOptionM___at_Lean_Meta_Simp_synthesizeArgs___spec__2(x_57, x_7, x_8, x_9, x_10, x_11, x_12, x_56);
x_59 = lean_ctor_get(x_58, 0);
lean_inc(x_59);
x_60 = lean_ctor_get(x_58, 1);
lean_inc(x_60);
lean_dec(x_58);
x_61 = lean_unbox(x_59);
lean_dec(x_59);
x_18 = x_61;
x_19 = x_60;
goto block_49;
}
block_49:
{
if (x_18 == 0)
{
lean_object* x_20; lean_object* x_21; lean_object* x_22; lean_object* x_23; 
lean_dec(x_12);
lean_dec(x_11);
lean_dec(x_10);
lean_dec(x_9);
lean_dec(x_5);
lean_dec(x_4);
x_20 = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(x_20, 0, x_15);
x_21 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_21, 0, x_3);
lean_ctor_set(x_21, 1, x_20);
x_22 = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(x_22, 0, x_21);
if (lean_is_scalar(x_17)) {
 x_23 = lean_alloc_ctor(0, 2, 0);
} else {
 x_23 = x_17;
}
lean_ctor_set(x_23, 0, x_22);
lean_ctor_set(x_23, 1, x_19);
return x_23;
}
else
{
lean_object* x_24; lean_object* x_25; lean_object* x_26; lean_object* x_27; lean_object* x_28; lean_object* x_29; lean_object* x_30; lean_object* x_31; lean_object* x_32; lean_object* x_33; lean_object* x_34; lean_object* x_35; lean_object* x_36; lean_object* x_37; lean_object* x_38; uint8_t x_39; 
lean_dec(x_17);
x_24 = l_Std_fmt___at_Lean_Meta_instToMessageDataSimpLemma___spec__1(x_4);
x_25 = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(x_25, 0, x_24);
x_26 = l_Lean_KernelException_toMessageData___closed__15;
x_27 = lean_alloc_ctor(10, 2, 0);
lean_ctor_set(x_27, 0, x_26);
lean_ctor_set(x_27, 1, x_25);
x_28 = l_Lean_Meta_SynthInstance_getInstances___lambda__1___closed__7;
x_29 = lean_alloc_ctor(10, 2, 0);
lean_ctor_set(x_29, 0, x_27);
lean_ctor_set(x_29, 1, x_28);
x_30 = lean_alloc_ctor(2, 1, 0);
lean_ctor_set(x_30, 0, x_5);
x_31 = lean_alloc_ctor(10, 2, 0);
lean_ctor_set(x_31, 0, x_29);
lean_ctor_set(x_31, 1, x_30);
x_32 = l_Lean_Meta_withNewMCtxDepth___at_Lean_Meta_synthInstance_x3f___spec__4___at_Lean_Meta_synthInstance_x3f___spec__5___lambda__1___closed__8;
x_33 = lean_alloc_ctor(10, 2, 0);
lean_ctor_set(x_33, 0, x_31);
lean_ctor_set(x_33, 1, x_32);
lean_inc(x_3);
x_34 = lean_alloc_ctor(2, 1, 0);
lean_ctor_set(x_34, 0, x_3);
x_35 = lean_alloc_ctor(10, 2, 0);
lean_ctor_set(x_35, 0, x_33);
lean_ctor_set(x_35, 1, x_34);
x_36 = lean_alloc_ctor(10, 2, 0);
lean_ctor_set(x_36, 0, x_35);
lean_ctor_set(x_36, 1, x_26);
x_37 = l_ReaderT_bind___at_Lean_Meta_Simp_rewrite_tryLemma_x3f___spec__1___at_Lean_Meta_Simp_rewrite_tryLemma_x3f___spec__2___lambda__1___closed__1;
x_38 = l_Lean_addTrace___at_Lean_Meta_Simp_synthesizeArgs___spec__1(x_37, x_36, x_7, x_8, x_9, x_10, x_11, x_12, x_19);
lean_dec(x_12);
lean_dec(x_11);
lean_dec(x_10);
lean_dec(x_9);
x_39 = !lean_is_exclusive(x_38);
if (x_39 == 0)
{
lean_object* x_40; lean_object* x_41; lean_object* x_42; lean_object* x_43; 
x_40 = lean_ctor_get(x_38, 0);
lean_dec(x_40);
x_41 = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(x_41, 0, x_15);
x_42 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_42, 0, x_3);
lean_ctor_set(x_42, 1, x_41);
x_43 = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(x_43, 0, x_42);
lean_ctor_set(x_38, 0, x_43);
return x_38;
}
else
{
lean_object* x_44; lean_object* x_45; lean_object* x_46; lean_object* x_47; lean_object* x_48; 
x_44 = lean_ctor_get(x_38, 1);
lean_inc(x_44);
lean_dec(x_38);
x_45 = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(x_45, 0, x_15);
x_46 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_46, 0, x_3);
lean_ctor_set(x_46, 1, x_45);
x_47 = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(x_47, 0, x_46);
x_48 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_48, 0, x_47);
lean_ctor_set(x_48, 1, x_44);
return x_48;
}
}
}
}
else
{
uint8_t x_62; 
lean_dec(x_12);
lean_dec(x_11);
lean_dec(x_10);
lean_dec(x_9);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
x_62 = !lean_is_exclusive(x_14);
if (x_62 == 0)
{
return x_14;
}
else
{
lean_object* x_63; lean_object* x_64; lean_object* x_65; 
x_63 = lean_ctor_get(x_14, 0);
x_64 = lean_ctor_get(x_14, 1);
lean_inc(x_64);
lean_inc(x_63);
lean_dec(x_14);
x_65 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_65, 0, x_63);
lean_ctor_set(x_65, 1, x_64);
return x_65;
}
}
}
}
static lean_object* _init_l_ReaderT_bind___at_Lean_Meta_Simp_rewrite_tryLemma_x3f___spec__1___at_Lean_Meta_Simp_rewrite_tryLemma_x3f___spec__2___lambda__2___closed__1() {
_start:
{
lean_object* x_1; 
x_1 = lean_mk_string("unify");
return x_1;
}
}
static lean_object* _init_l_ReaderT_bind___at_Lean_Meta_Simp_rewrite_tryLemma_x3f___spec__1___at_Lean_Meta_Simp_rewrite_tryLemma_x3f___spec__2___lambda__2___closed__2() {
_start:
{
lean_object* x_1; lean_object* x_2; lean_object* x_3; 
x_1 = l_Array_forInUnsafe_loop___at_Lean_Meta_Simp_synthesizeArgs___spec__3___closed__2;
x_2 = l_ReaderT_bind___at_Lean_Meta_Simp_rewrite_tryLemma_x3f___spec__1___at_Lean_Meta_Simp_rewrite_tryLemma_x3f___spec__2___lambda__2___closed__1;
x_3 = lean_name_mk_string(x_1, x_2);
return x_3;
}
}
static lean_object* _init_l_ReaderT_bind___at_Lean_Meta_Simp_rewrite_tryLemma_x3f___spec__1___at_Lean_Meta_Simp_rewrite_tryLemma_x3f___spec__2___lambda__2___closed__3() {
_start:
{
lean_object* x_1; 
x_1 = lean_mk_string(", perm rejected ");
return x_1;
}
}
static lean_object* _init_l_ReaderT_bind___at_Lean_Meta_Simp_rewrite_tryLemma_x3f___spec__1___at_Lean_Meta_Simp_rewrite_tryLemma_x3f___spec__2___lambda__2___closed__4() {
_start:
{
lean_object* x_1; lean_object* x_2; 
x_1 = l_ReaderT_bind___at_Lean_Meta_Simp_rewrite_tryLemma_x3f___spec__1___at_Lean_Meta_Simp_rewrite_tryLemma_x3f___spec__2___lambda__2___closed__3;
x_2 = l_Lean_stringToMessageData(x_1);
return x_2;
}
}
lean_object* l_ReaderT_bind___at_Lean_Meta_Simp_rewrite_tryLemma_x3f___spec__1___at_Lean_Meta_Simp_rewrite_tryLemma_x3f___spec__2___lambda__2(uint8_t x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9, lean_object* x_10, lean_object* x_11, lean_object* x_12, lean_object* x_13, lean_object* x_14) {
_start:
{
lean_object* x_15; lean_object* x_16; lean_object* x_17; lean_object* x_18; 
x_15 = l_Lean_Meta_Simp_rewrite_getRHS(x_1, x_2, x_10, x_11, x_12, x_13, x_14);
x_16 = lean_ctor_get(x_15, 0);
lean_inc(x_16);
x_17 = lean_ctor_get(x_15, 1);
lean_inc(x_17);
lean_dec(x_15);
lean_inc(x_13);
lean_inc(x_12);
lean_inc(x_11);
lean_inc(x_10);
x_18 = l_Lean_Meta_instantiateMVars(x_16, x_10, x_11, x_12, x_13, x_17);
if (lean_obj_tag(x_18) == 0)
{
uint8_t x_19; 
x_19 = lean_ctor_get_uint8(x_4, sizeof(void*)*4 + 1);
if (x_19 == 0)
{
lean_object* x_20; lean_object* x_21; lean_object* x_22; lean_object* x_23; 
lean_dec(x_6);
x_20 = lean_ctor_get(x_18, 0);
lean_inc(x_20);
x_21 = lean_ctor_get(x_18, 1);
lean_inc(x_21);
lean_dec(x_18);
x_22 = lean_box(0);
x_23 = l_ReaderT_bind___at_Lean_Meta_Simp_rewrite_tryLemma_x3f___spec__1___at_Lean_Meta_Simp_rewrite_tryLemma_x3f___spec__2___lambda__1(x_1, x_3, x_20, x_4, x_5, x_22, x_8, x_9, x_10, x_11, x_12, x_13, x_21);
return x_23;
}
else
{
lean_object* x_24; lean_object* x_25; lean_object* x_26; uint8_t x_27; 
x_24 = lean_ctor_get(x_18, 0);
lean_inc(x_24);
x_25 = lean_ctor_get(x_18, 1);
lean_inc(x_25);
if (lean_is_exclusive(x_18)) {
 lean_ctor_release(x_18, 0);
 lean_ctor_release(x_18, 1);
 x_26 = x_18;
} else {
 lean_dec_ref(x_18);
 x_26 = lean_box(0);
}
x_27 = lean_expr_lt(x_24, x_5);
if (x_27 == 0)
{
uint8_t x_28; lean_object* x_29; lean_object* x_51; lean_object* x_52; lean_object* x_53; uint8_t x_54; 
lean_dec(x_3);
x_51 = lean_st_ref_get(x_13, x_25);
x_52 = lean_ctor_get(x_51, 0);
lean_inc(x_52);
x_53 = lean_ctor_get(x_52, 3);
lean_inc(x_53);
lean_dec(x_52);
x_54 = lean_ctor_get_uint8(x_53, sizeof(void*)*1);
lean_dec(x_53);
if (x_54 == 0)
{
lean_object* x_55; uint8_t x_56; 
x_55 = lean_ctor_get(x_51, 1);
lean_inc(x_55);
lean_dec(x_51);
x_56 = 0;
x_28 = x_56;
x_29 = x_55;
goto block_50;
}
else
{
lean_object* x_57; lean_object* x_58; lean_object* x_59; lean_object* x_60; lean_object* x_61; uint8_t x_62; 
x_57 = lean_ctor_get(x_51, 1);
lean_inc(x_57);
lean_dec(x_51);
x_58 = l_ReaderT_bind___at_Lean_Meta_Simp_rewrite_tryLemma_x3f___spec__1___at_Lean_Meta_Simp_rewrite_tryLemma_x3f___spec__2___lambda__2___closed__2;
x_59 = l___private_Lean_Util_Trace_0__Lean_checkTraceOptionM___at_Lean_Meta_Simp_synthesizeArgs___spec__2(x_58, x_8, x_9, x_10, x_11, x_12, x_13, x_57);
x_60 = lean_ctor_get(x_59, 0);
lean_inc(x_60);
x_61 = lean_ctor_get(x_59, 1);
lean_inc(x_61);
lean_dec(x_59);
x_62 = lean_unbox(x_60);
lean_dec(x_60);
x_28 = x_62;
x_29 = x_61;
goto block_50;
}
block_50:
{
if (x_28 == 0)
{
lean_object* x_30; 
lean_dec(x_24);
lean_dec(x_13);
lean_dec(x_12);
lean_dec(x_11);
lean_dec(x_10);
lean_dec(x_5);
lean_dec(x_4);
if (lean_is_scalar(x_26)) {
 x_30 = lean_alloc_ctor(0, 2, 0);
} else {
 x_30 = x_26;
}
lean_ctor_set(x_30, 0, x_6);
lean_ctor_set(x_30, 1, x_29);
return x_30;
}
else
{
lean_object* x_31; lean_object* x_32; lean_object* x_33; lean_object* x_34; lean_object* x_35; lean_object* x_36; lean_object* x_37; lean_object* x_38; lean_object* x_39; lean_object* x_40; lean_object* x_41; lean_object* x_42; lean_object* x_43; lean_object* x_44; lean_object* x_45; uint8_t x_46; 
lean_dec(x_26);
x_31 = l_Std_fmt___at_Lean_Meta_instToMessageDataSimpLemma___spec__1(x_4);
x_32 = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(x_32, 0, x_31);
x_33 = l_Lean_KernelException_toMessageData___closed__15;
x_34 = lean_alloc_ctor(10, 2, 0);
lean_ctor_set(x_34, 0, x_33);
lean_ctor_set(x_34, 1, x_32);
x_35 = l_ReaderT_bind___at_Lean_Meta_Simp_rewrite_tryLemma_x3f___spec__1___at_Lean_Meta_Simp_rewrite_tryLemma_x3f___spec__2___lambda__2___closed__4;
x_36 = lean_alloc_ctor(10, 2, 0);
lean_ctor_set(x_36, 0, x_34);
lean_ctor_set(x_36, 1, x_35);
x_37 = lean_alloc_ctor(2, 1, 0);
lean_ctor_set(x_37, 0, x_5);
x_38 = lean_alloc_ctor(10, 2, 0);
lean_ctor_set(x_38, 0, x_36);
lean_ctor_set(x_38, 1, x_37);
x_39 = l_Lean_Meta_withNewMCtxDepth___at_Lean_Meta_synthInstance_x3f___spec__4___at_Lean_Meta_synthInstance_x3f___spec__5___lambda__1___closed__8;
x_40 = lean_alloc_ctor(10, 2, 0);
lean_ctor_set(x_40, 0, x_38);
lean_ctor_set(x_40, 1, x_39);
x_41 = lean_alloc_ctor(2, 1, 0);
lean_ctor_set(x_41, 0, x_24);
x_42 = lean_alloc_ctor(10, 2, 0);
lean_ctor_set(x_42, 0, x_40);
lean_ctor_set(x_42, 1, x_41);
x_43 = lean_alloc_ctor(10, 2, 0);
lean_ctor_set(x_43, 0, x_42);
lean_ctor_set(x_43, 1, x_33);
x_44 = l_ReaderT_bind___at_Lean_Meta_Simp_rewrite_tryLemma_x3f___spec__1___at_Lean_Meta_Simp_rewrite_tryLemma_x3f___spec__2___lambda__2___closed__2;
x_45 = l_Lean_addTrace___at_Lean_Meta_Simp_synthesizeArgs___spec__1(x_44, x_43, x_8, x_9, x_10, x_11, x_12, x_13, x_29);
lean_dec(x_13);
lean_dec(x_12);
lean_dec(x_11);
lean_dec(x_10);
x_46 = !lean_is_exclusive(x_45);
if (x_46 == 0)
{
lean_object* x_47; 
x_47 = lean_ctor_get(x_45, 0);
lean_dec(x_47);
lean_ctor_set(x_45, 0, x_6);
return x_45;
}
else
{
lean_object* x_48; lean_object* x_49; 
x_48 = lean_ctor_get(x_45, 1);
lean_inc(x_48);
lean_dec(x_45);
x_49 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_49, 0, x_6);
lean_ctor_set(x_49, 1, x_48);
return x_49;
}
}
}
}
else
{
lean_object* x_63; lean_object* x_64; 
lean_dec(x_26);
lean_dec(x_6);
x_63 = lean_box(0);
x_64 = l_ReaderT_bind___at_Lean_Meta_Simp_rewrite_tryLemma_x3f___spec__1___at_Lean_Meta_Simp_rewrite_tryLemma_x3f___spec__2___lambda__1(x_1, x_3, x_24, x_4, x_5, x_63, x_8, x_9, x_10, x_11, x_12, x_13, x_25);
return x_64;
}
}
}
else
{
uint8_t x_65; 
lean_dec(x_13);
lean_dec(x_12);
lean_dec(x_11);
lean_dec(x_10);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
x_65 = !lean_is_exclusive(x_18);
if (x_65 == 0)
{
return x_18;
}
else
{
lean_object* x_66; lean_object* x_67; lean_object* x_68; 
x_66 = lean_ctor_get(x_18, 0);
x_67 = lean_ctor_get(x_18, 1);
lean_inc(x_67);
lean_inc(x_66);
lean_dec(x_18);
x_68 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_68, 0, x_66);
lean_ctor_set(x_68, 1, x_67);
return x_68;
}
}
}
}
lean_object* l_ReaderT_bind___at_Lean_Meta_Simp_rewrite_tryLemma_x3f___spec__1___at_Lean_Meta_Simp_rewrite_tryLemma_x3f___spec__2___lambda__3(lean_object* x_1, lean_object* x_2, uint8_t x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9, lean_object* x_10, lean_object* x_11, lean_object* x_12, lean_object* x_13, lean_object* x_14, lean_object* x_15) {
_start:
{
lean_object* x_16; lean_object* x_17; 
x_16 = l_Lean_mkAppN(x_1, x_2);
lean_inc(x_14);
lean_inc(x_13);
lean_inc(x_12);
lean_inc(x_11);
x_17 = l_Lean_Meta_instantiateMVars(x_16, x_11, x_12, x_13, x_14, x_15);
if (lean_obj_tag(x_17) == 0)
{
lean_object* x_18; lean_object* x_19; lean_object* x_20; lean_object* x_21; uint8_t x_22; 
x_18 = lean_ctor_get(x_17, 0);
lean_inc(x_18);
x_19 = lean_ctor_get(x_17, 1);
lean_inc(x_19);
lean_dec(x_17);
x_20 = l_Lean_Meta_hasAssignableMVar(x_18, x_11, x_12, x_13, x_14, x_19);
x_21 = lean_ctor_get(x_20, 0);
lean_inc(x_21);
x_22 = lean_unbox(x_21);
lean_dec(x_21);
if (x_22 == 0)
{
lean_object* x_23; lean_object* x_24; lean_object* x_25; 
x_23 = lean_ctor_get(x_20, 1);
lean_inc(x_23);
lean_dec(x_20);
x_24 = lean_box(0);
x_25 = l_ReaderT_bind___at_Lean_Meta_Simp_rewrite_tryLemma_x3f___spec__1___at_Lean_Meta_Simp_rewrite_tryLemma_x3f___spec__2___lambda__2(x_3, x_4, x_18, x_5, x_6, x_7, x_24, x_9, x_10, x_11, x_12, x_13, x_14, x_23);
return x_25;
}
else
{
uint8_t x_26; 
lean_dec(x_18);
lean_dec(x_14);
lean_dec(x_13);
lean_dec(x_12);
lean_dec(x_11);
lean_dec(x_6);
lean_dec(x_5);
x_26 = !lean_is_exclusive(x_20);
if (x_26 == 0)
{
lean_object* x_27; 
x_27 = lean_ctor_get(x_20, 0);
lean_dec(x_27);
lean_ctor_set(x_20, 0, x_7);
return x_20;
}
else
{
lean_object* x_28; lean_object* x_29; 
x_28 = lean_ctor_get(x_20, 1);
lean_inc(x_28);
lean_dec(x_20);
x_29 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_29, 0, x_7);
lean_ctor_set(x_29, 1, x_28);
return x_29;
}
}
}
else
{
uint8_t x_30; 
lean_dec(x_14);
lean_dec(x_13);
lean_dec(x_12);
lean_dec(x_11);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_5);
x_30 = !lean_is_exclusive(x_17);
if (x_30 == 0)
{
return x_17;
}
else
{
lean_object* x_31; lean_object* x_32; lean_object* x_33; 
x_31 = lean_ctor_get(x_17, 0);
x_32 = lean_ctor_get(x_17, 1);
lean_inc(x_32);
lean_inc(x_31);
lean_dec(x_17);
x_33 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_33, 0, x_31);
lean_ctor_set(x_33, 1, x_32);
return x_33;
}
}
}
}
static lean_object* _init_l_ReaderT_bind___at_Lean_Meta_Simp_rewrite_tryLemma_x3f___spec__1___at_Lean_Meta_Simp_rewrite_tryLemma_x3f___spec__2___closed__1() {
_start:
{
lean_object* x_1; 
x_1 = lean_mk_string(", failed to unify ");
return x_1;
}
}
static lean_object* _init_l_ReaderT_bind___at_Lean_Meta_Simp_rewrite_tryLemma_x3f___spec__1___at_Lean_Meta_Simp_rewrite_tryLemma_x3f___spec__2___closed__2() {
_start:
{
lean_object* x_1; lean_object* x_2; 
x_1 = l_ReaderT_bind___at_Lean_Meta_Simp_rewrite_tryLemma_x3f___spec__1___at_Lean_Meta_Simp_rewrite_tryLemma_x3f___spec__2___closed__1;
x_2 = l_Lean_stringToMessageData(x_1);
return x_2;
}
}
static lean_object* _init_l_ReaderT_bind___at_Lean_Meta_Simp_rewrite_tryLemma_x3f___spec__1___at_Lean_Meta_Simp_rewrite_tryLemma_x3f___spec__2___closed__3() {
_start:
{
lean_object* x_1; lean_object* x_2; 
x_1 = l_Lean_Parser_Tactic_changeWith___closed__3;
x_2 = l_Lean_stringToMessageData(x_1);
return x_2;
}
}
lean_object* l_ReaderT_bind___at_Lean_Meta_Simp_rewrite_tryLemma_x3f___spec__1___at_Lean_Meta_Simp_rewrite_tryLemma_x3f___spec__2(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9, lean_object* x_10) {
_start:
{
lean_object* x_11; 
lean_inc(x_3);
x_11 = l_Lean_Meta_SimpLemma_getValue(x_3, x_6, x_7, x_8, x_9, x_10);
if (lean_obj_tag(x_11) == 0)
{
lean_object* x_12; lean_object* x_13; lean_object* x_14; 
x_12 = lean_ctor_get(x_11, 0);
lean_inc(x_12);
x_13 = lean_ctor_get(x_11, 1);
lean_inc(x_13);
lean_dec(x_11);
lean_inc(x_9);
lean_inc(x_8);
lean_inc(x_7);
lean_inc(x_6);
lean_inc(x_12);
x_14 = l_Lean_Meta_inferType(x_12, x_6, x_7, x_8, x_9, x_13);
if (lean_obj_tag(x_14) == 0)
{
lean_object* x_15; lean_object* x_16; lean_object* x_17; uint8_t x_18; uint8_t x_19; lean_object* x_20; 
x_15 = lean_ctor_get(x_14, 0);
lean_inc(x_15);
x_16 = lean_ctor_get(x_14, 1);
lean_inc(x_16);
lean_dec(x_14);
x_17 = lean_box(0);
x_18 = 1;
x_19 = 0;
lean_inc(x_9);
lean_inc(x_8);
lean_inc(x_7);
lean_inc(x_6);
x_20 = l___private_Lean_Meta_Basic_0__Lean_Meta_forallMetaTelescopeReducingAux(x_15, x_18, x_17, x_19, x_6, x_7, x_8, x_9, x_16);
if (lean_obj_tag(x_20) == 0)
{
lean_object* x_21; lean_object* x_22; lean_object* x_23; lean_object* x_24; lean_object* x_25; lean_object* x_26; lean_object* x_27; 
x_21 = lean_ctor_get(x_20, 0);
lean_inc(x_21);
x_22 = lean_ctor_get(x_21, 1);
lean_inc(x_22);
x_23 = lean_ctor_get(x_20, 1);
lean_inc(x_23);
lean_dec(x_20);
x_24 = lean_ctor_get(x_21, 0);
lean_inc(x_24);
lean_dec(x_21);
x_25 = lean_ctor_get(x_22, 0);
lean_inc(x_25);
x_26 = lean_ctor_get(x_22, 1);
lean_inc(x_26);
lean_dec(x_22);
lean_inc(x_9);
lean_inc(x_8);
lean_inc(x_7);
lean_inc(x_6);
x_27 = l_Lean_Meta_instantiateMVars(x_26, x_6, x_7, x_8, x_9, x_23);
if (lean_obj_tag(x_27) == 0)
{
lean_object* x_28; lean_object* x_29; uint8_t x_30; lean_object* x_31; 
x_28 = lean_ctor_get(x_27, 0);
lean_inc(x_28);
x_29 = lean_ctor_get(x_27, 1);
lean_inc(x_29);
lean_dec(x_27);
x_30 = lean_ctor_get_uint8(x_3, sizeof(void*)*4 + 2);
lean_inc(x_9);
lean_inc(x_8);
lean_inc(x_7);
lean_inc(x_6);
lean_inc(x_28);
x_31 = l_Lean_Meta_Simp_rewrite_getLHS(x_30, x_28, x_6, x_7, x_8, x_9, x_29);
if (lean_obj_tag(x_31) == 0)
{
lean_object* x_32; lean_object* x_33; lean_object* x_34; 
x_32 = lean_ctor_get(x_31, 0);
lean_inc(x_32);
x_33 = lean_ctor_get(x_31, 1);
lean_inc(x_33);
lean_dec(x_31);
lean_inc(x_9);
lean_inc(x_8);
lean_inc(x_7);
lean_inc(x_6);
lean_inc(x_1);
lean_inc(x_32);
x_34 = l_Lean_Meta_isExprDefEq(x_32, x_1, x_6, x_7, x_8, x_9, x_33);
if (lean_obj_tag(x_34) == 0)
{
lean_object* x_35; uint8_t x_36; 
x_35 = lean_ctor_get(x_34, 0);
lean_inc(x_35);
x_36 = lean_unbox(x_35);
lean_dec(x_35);
if (x_36 == 0)
{
lean_object* x_37; lean_object* x_38; uint8_t x_39; lean_object* x_40; lean_object* x_62; lean_object* x_63; lean_object* x_64; uint8_t x_65; 
lean_dec(x_28);
lean_dec(x_25);
lean_dec(x_24);
lean_dec(x_12);
lean_dec(x_2);
x_37 = lean_ctor_get(x_34, 1);
lean_inc(x_37);
if (lean_is_exclusive(x_34)) {
 lean_ctor_release(x_34, 0);
 lean_ctor_release(x_34, 1);
 x_38 = x_34;
} else {
 lean_dec_ref(x_34);
 x_38 = lean_box(0);
}
x_62 = lean_st_ref_get(x_9, x_37);
x_63 = lean_ctor_get(x_62, 0);
lean_inc(x_63);
x_64 = lean_ctor_get(x_63, 3);
lean_inc(x_64);
lean_dec(x_63);
x_65 = lean_ctor_get_uint8(x_64, sizeof(void*)*1);
lean_dec(x_64);
if (x_65 == 0)
{
lean_object* x_66; uint8_t x_67; 
x_66 = lean_ctor_get(x_62, 1);
lean_inc(x_66);
lean_dec(x_62);
x_67 = 0;
x_39 = x_67;
x_40 = x_66;
goto block_61;
}
else
{
lean_object* x_68; lean_object* x_69; lean_object* x_70; lean_object* x_71; lean_object* x_72; uint8_t x_73; 
x_68 = lean_ctor_get(x_62, 1);
lean_inc(x_68);
lean_dec(x_62);
x_69 = l_ReaderT_bind___at_Lean_Meta_Simp_rewrite_tryLemma_x3f___spec__1___at_Lean_Meta_Simp_rewrite_tryLemma_x3f___spec__2___lambda__2___closed__2;
x_70 = l___private_Lean_Util_Trace_0__Lean_checkTraceOptionM___at_Lean_Meta_Simp_synthesizeArgs___spec__2(x_69, x_4, x_5, x_6, x_7, x_8, x_9, x_68);
x_71 = lean_ctor_get(x_70, 0);
lean_inc(x_71);
x_72 = lean_ctor_get(x_70, 1);
lean_inc(x_72);
lean_dec(x_70);
x_73 = lean_unbox(x_71);
lean_dec(x_71);
x_39 = x_73;
x_40 = x_72;
goto block_61;
}
block_61:
{
if (x_39 == 0)
{
lean_object* x_41; 
lean_dec(x_32);
lean_dec(x_9);
lean_dec(x_8);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
lean_dec(x_1);
if (lean_is_scalar(x_38)) {
 x_41 = lean_alloc_ctor(0, 2, 0);
} else {
 x_41 = x_38;
}
lean_ctor_set(x_41, 0, x_17);
lean_ctor_set(x_41, 1, x_40);
return x_41;
}
else
{
lean_object* x_42; lean_object* x_43; lean_object* x_44; lean_object* x_45; lean_object* x_46; lean_object* x_47; lean_object* x_48; lean_object* x_49; lean_object* x_50; lean_object* x_51; lean_object* x_52; lean_object* x_53; lean_object* x_54; lean_object* x_55; lean_object* x_56; uint8_t x_57; 
lean_dec(x_38);
x_42 = l_Std_fmt___at_Lean_Meta_instToMessageDataSimpLemma___spec__1(x_3);
x_43 = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(x_43, 0, x_42);
x_44 = l_Lean_KernelException_toMessageData___closed__15;
x_45 = lean_alloc_ctor(10, 2, 0);
lean_ctor_set(x_45, 0, x_44);
lean_ctor_set(x_45, 1, x_43);
x_46 = l_ReaderT_bind___at_Lean_Meta_Simp_rewrite_tryLemma_x3f___spec__1___at_Lean_Meta_Simp_rewrite_tryLemma_x3f___spec__2___closed__2;
x_47 = lean_alloc_ctor(10, 2, 0);
lean_ctor_set(x_47, 0, x_45);
lean_ctor_set(x_47, 1, x_46);
x_48 = lean_alloc_ctor(2, 1, 0);
lean_ctor_set(x_48, 0, x_32);
x_49 = lean_alloc_ctor(10, 2, 0);
lean_ctor_set(x_49, 0, x_47);
lean_ctor_set(x_49, 1, x_48);
x_50 = l_ReaderT_bind___at_Lean_Meta_Simp_rewrite_tryLemma_x3f___spec__1___at_Lean_Meta_Simp_rewrite_tryLemma_x3f___spec__2___closed__3;
x_51 = lean_alloc_ctor(10, 2, 0);
lean_ctor_set(x_51, 0, x_49);
lean_ctor_set(x_51, 1, x_50);
x_52 = lean_alloc_ctor(2, 1, 0);
lean_ctor_set(x_52, 0, x_1);
x_53 = lean_alloc_ctor(10, 2, 0);
lean_ctor_set(x_53, 0, x_51);
lean_ctor_set(x_53, 1, x_52);
x_54 = lean_alloc_ctor(10, 2, 0);
lean_ctor_set(x_54, 0, x_53);
lean_ctor_set(x_54, 1, x_44);
x_55 = l_ReaderT_bind___at_Lean_Meta_Simp_rewrite_tryLemma_x3f___spec__1___at_Lean_Meta_Simp_rewrite_tryLemma_x3f___spec__2___lambda__2___closed__2;
x_56 = l_Lean_addTrace___at_Lean_Meta_Simp_synthesizeArgs___spec__1(x_55, x_54, x_4, x_5, x_6, x_7, x_8, x_9, x_40);
lean_dec(x_9);
lean_dec(x_8);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
x_57 = !lean_is_exclusive(x_56);
if (x_57 == 0)
{
lean_object* x_58; 
x_58 = lean_ctor_get(x_56, 0);
lean_dec(x_58);
lean_ctor_set(x_56, 0, x_17);
return x_56;
}
else
{
lean_object* x_59; lean_object* x_60; 
x_59 = lean_ctor_get(x_56, 1);
lean_inc(x_59);
lean_dec(x_56);
x_60 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_60, 0, x_17);
lean_ctor_set(x_60, 1, x_59);
return x_60;
}
}
}
}
else
{
lean_object* x_74; lean_object* x_75; lean_object* x_76; 
lean_dec(x_32);
x_74 = lean_ctor_get(x_34, 1);
lean_inc(x_74);
lean_dec(x_34);
x_75 = l_Lean_Meta_SimpLemma_getName(x_3);
lean_inc(x_9);
lean_inc(x_8);
lean_inc(x_7);
lean_inc(x_6);
lean_inc(x_5);
lean_inc(x_4);
x_76 = l_Lean_Meta_Simp_synthesizeArgs(x_75, x_24, x_25, x_2, x_4, x_5, x_6, x_7, x_8, x_9, x_74);
if (lean_obj_tag(x_76) == 0)
{
lean_object* x_77; uint8_t x_78; 
x_77 = lean_ctor_get(x_76, 0);
lean_inc(x_77);
x_78 = lean_unbox(x_77);
lean_dec(x_77);
if (x_78 == 0)
{
uint8_t x_79; 
lean_dec(x_28);
lean_dec(x_24);
lean_dec(x_12);
lean_dec(x_9);
lean_dec(x_8);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
lean_dec(x_1);
x_79 = !lean_is_exclusive(x_76);
if (x_79 == 0)
{
lean_object* x_80; 
x_80 = lean_ctor_get(x_76, 0);
lean_dec(x_80);
lean_ctor_set(x_76, 0, x_17);
return x_76;
}
else
{
lean_object* x_81; lean_object* x_82; 
x_81 = lean_ctor_get(x_76, 1);
lean_inc(x_81);
lean_dec(x_76);
x_82 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_82, 0, x_17);
lean_ctor_set(x_82, 1, x_81);
return x_82;
}
}
else
{
lean_object* x_83; lean_object* x_84; lean_object* x_85; 
x_83 = lean_ctor_get(x_76, 1);
lean_inc(x_83);
lean_dec(x_76);
x_84 = lean_box(0);
x_85 = l_ReaderT_bind___at_Lean_Meta_Simp_rewrite_tryLemma_x3f___spec__1___at_Lean_Meta_Simp_rewrite_tryLemma_x3f___spec__2___lambda__3(x_12, x_24, x_30, x_28, x_3, x_1, x_17, x_84, x_4, x_5, x_6, x_7, x_8, x_9, x_83);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_28);
lean_dec(x_24);
return x_85;
}
}
else
{
uint8_t x_86; 
lean_dec(x_28);
lean_dec(x_24);
lean_dec(x_12);
lean_dec(x_9);
lean_dec(x_8);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
lean_dec(x_1);
x_86 = !lean_is_exclusive(x_76);
if (x_86 == 0)
{
return x_76;
}
else
{
lean_object* x_87; lean_object* x_88; lean_object* x_89; 
x_87 = lean_ctor_get(x_76, 0);
x_88 = lean_ctor_get(x_76, 1);
lean_inc(x_88);
lean_inc(x_87);
lean_dec(x_76);
x_89 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_89, 0, x_87);
lean_ctor_set(x_89, 1, x_88);
return x_89;
}
}
}
}
else
{
uint8_t x_90; 
lean_dec(x_32);
lean_dec(x_28);
lean_dec(x_25);
lean_dec(x_24);
lean_dec(x_12);
lean_dec(x_9);
lean_dec(x_8);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
lean_dec(x_2);
lean_dec(x_1);
x_90 = !lean_is_exclusive(x_34);
if (x_90 == 0)
{
return x_34;
}
else
{
lean_object* x_91; lean_object* x_92; lean_object* x_93; 
x_91 = lean_ctor_get(x_34, 0);
x_92 = lean_ctor_get(x_34, 1);
lean_inc(x_92);
lean_inc(x_91);
lean_dec(x_34);
x_93 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_93, 0, x_91);
lean_ctor_set(x_93, 1, x_92);
return x_93;
}
}
}
else
{
uint8_t x_94; 
lean_dec(x_28);
lean_dec(x_25);
lean_dec(x_24);
lean_dec(x_12);
lean_dec(x_9);
lean_dec(x_8);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
lean_dec(x_2);
lean_dec(x_1);
x_94 = !lean_is_exclusive(x_31);
if (x_94 == 0)
{
return x_31;
}
else
{
lean_object* x_95; lean_object* x_96; lean_object* x_97; 
x_95 = lean_ctor_get(x_31, 0);
x_96 = lean_ctor_get(x_31, 1);
lean_inc(x_96);
lean_inc(x_95);
lean_dec(x_31);
x_97 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_97, 0, x_95);
lean_ctor_set(x_97, 1, x_96);
return x_97;
}
}
}
else
{
uint8_t x_98; 
lean_dec(x_25);
lean_dec(x_24);
lean_dec(x_12);
lean_dec(x_9);
lean_dec(x_8);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
lean_dec(x_2);
lean_dec(x_1);
x_98 = !lean_is_exclusive(x_27);
if (x_98 == 0)
{
return x_27;
}
else
{
lean_object* x_99; lean_object* x_100; lean_object* x_101; 
x_99 = lean_ctor_get(x_27, 0);
x_100 = lean_ctor_get(x_27, 1);
lean_inc(x_100);
lean_inc(x_99);
lean_dec(x_27);
x_101 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_101, 0, x_99);
lean_ctor_set(x_101, 1, x_100);
return x_101;
}
}
}
else
{
uint8_t x_102; 
lean_dec(x_12);
lean_dec(x_9);
lean_dec(x_8);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
lean_dec(x_2);
lean_dec(x_1);
x_102 = !lean_is_exclusive(x_20);
if (x_102 == 0)
{
return x_20;
}
else
{
lean_object* x_103; lean_object* x_104; lean_object* x_105; 
x_103 = lean_ctor_get(x_20, 0);
x_104 = lean_ctor_get(x_20, 1);
lean_inc(x_104);
lean_inc(x_103);
lean_dec(x_20);
x_105 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_105, 0, x_103);
lean_ctor_set(x_105, 1, x_104);
return x_105;
}
}
}
else
{
uint8_t x_106; 
lean_dec(x_12);
lean_dec(x_9);
lean_dec(x_8);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
lean_dec(x_2);
lean_dec(x_1);
x_106 = !lean_is_exclusive(x_14);
if (x_106 == 0)
{
return x_14;
}
else
{
lean_object* x_107; lean_object* x_108; lean_object* x_109; 
x_107 = lean_ctor_get(x_14, 0);
x_108 = lean_ctor_get(x_14, 1);
lean_inc(x_108);
lean_inc(x_107);
lean_dec(x_14);
x_109 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_109, 0, x_107);
lean_ctor_set(x_109, 1, x_108);
return x_109;
}
}
}
else
{
uint8_t x_110; 
lean_dec(x_9);
lean_dec(x_8);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
lean_dec(x_2);
lean_dec(x_1);
x_110 = !lean_is_exclusive(x_11);
if (x_110 == 0)
{
return x_11;
}
else
{
lean_object* x_111; lean_object* x_112; lean_object* x_113; 
x_111 = lean_ctor_get(x_11, 0);
x_112 = lean_ctor_get(x_11, 1);
lean_inc(x_112);
lean_inc(x_111);
lean_dec(x_11);
x_113 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_113, 0, x_111);
lean_ctor_set(x_113, 1, x_112);
return x_113;
}
}
}
}
lean_object* l_Lean_Meta_withNewMCtxDepth___at_Lean_Meta_Simp_rewrite_tryLemma_x3f___spec__3___rarg(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8) {
_start:
{
lean_object* x_9; lean_object* x_10; 
x_9 = lean_apply_2(x_1, x_2, x_3);
x_10 = l___private_Lean_Meta_Basic_0__Lean_Meta_withNewMCtxDepthImp___rarg(x_9, x_4, x_5, x_6, x_7, x_8);
if (lean_obj_tag(x_10) == 0)
{
uint8_t x_11; 
x_11 = !lean_is_exclusive(x_10);
if (x_11 == 0)
{
return x_10;
}
else
{
lean_object* x_12; lean_object* x_13; lean_object* x_14; 
x_12 = lean_ctor_get(x_10, 0);
x_13 = lean_ctor_get(x_10, 1);
lean_inc(x_13);
lean_inc(x_12);
lean_dec(x_10);
x_14 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_14, 0, x_12);
lean_ctor_set(x_14, 1, x_13);
return x_14;
}
}
else
{
uint8_t x_15; 
x_15 = !lean_is_exclusive(x_10);
if (x_15 == 0)
{
return x_10;
}
else
{
lean_object* x_16; lean_object* x_17; lean_object* x_18; 
x_16 = lean_ctor_get(x_10, 0);
x_17 = lean_ctor_get(x_10, 1);
lean_inc(x_17);
lean_inc(x_16);
lean_dec(x_10);
x_18 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_18, 0, x_16);
lean_ctor_set(x_18, 1, x_17);
return x_18;
}
}
}
}
lean_object* l_Lean_Meta_withNewMCtxDepth___at_Lean_Meta_Simp_rewrite_tryLemma_x3f___spec__3(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = lean_alloc_closure((void*)(l_Lean_Meta_withNewMCtxDepth___at_Lean_Meta_Simp_rewrite_tryLemma_x3f___spec__3___rarg), 8, 0);
return x_2;
}
}
lean_object* l_Lean_Meta_withNewMCtxDepth___at_Lean_Meta_Simp_rewrite_tryLemma_x3f___spec__3___at_Lean_Meta_Simp_rewrite_tryLemma_x3f___spec__4(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9, lean_object* x_10) {
_start:
{
lean_object* x_11; lean_object* x_12; 
x_11 = lean_alloc_closure((void*)(l_ReaderT_bind___at_Lean_Meta_Simp_rewrite_tryLemma_x3f___spec__1___at_Lean_Meta_Simp_rewrite_tryLemma_x3f___spec__2), 10, 5);
lean_closure_set(x_11, 0, x_1);
lean_closure_set(x_11, 1, x_2);
lean_closure_set(x_11, 2, x_3);
lean_closure_set(x_11, 3, x_4);
lean_closure_set(x_11, 4, x_5);
x_12 = l___private_Lean_Meta_Basic_0__Lean_Meta_withNewMCtxDepthImp___rarg(x_11, x_6, x_7, x_8, x_9, x_10);
if (lean_obj_tag(x_12) == 0)
{
uint8_t x_13; 
x_13 = !lean_is_exclusive(x_12);
if (x_13 == 0)
{
return x_12;
}
else
{
lean_object* x_14; lean_object* x_15; lean_object* x_16; 
x_14 = lean_ctor_get(x_12, 0);
x_15 = lean_ctor_get(x_12, 1);
lean_inc(x_15);
lean_inc(x_14);
lean_dec(x_12);
x_16 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_16, 0, x_14);
lean_ctor_set(x_16, 1, x_15);
return x_16;
}
}
else
{
uint8_t x_17; 
x_17 = !lean_is_exclusive(x_12);
if (x_17 == 0)
{
return x_12;
}
else
{
lean_object* x_18; lean_object* x_19; lean_object* x_20; 
x_18 = lean_ctor_get(x_12, 0);
x_19 = lean_ctor_get(x_12, 1);
lean_inc(x_19);
lean_inc(x_18);
lean_dec(x_12);
x_20 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_20, 0, x_18);
lean_ctor_set(x_20, 1, x_19);
return x_20;
}
}
}
}
lean_object* l_Lean_Meta_Simp_rewrite_tryLemma_x3f(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9, lean_object* x_10) {
_start:
{
lean_object* x_11; 
x_11 = l_Lean_Meta_withNewMCtxDepth___at_Lean_Meta_Simp_rewrite_tryLemma_x3f___spec__3___at_Lean_Meta_Simp_rewrite_tryLemma_x3f___spec__4(x_1, x_2, x_3, x_4, x_5, x_6, x_7, x_8, x_9, x_10);
return x_11;
}
}
lean_object* l_ReaderT_bind___at_Lean_Meta_Simp_rewrite_tryLemma_x3f___spec__1___at_Lean_Meta_Simp_rewrite_tryLemma_x3f___spec__2___lambda__1___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9, lean_object* x_10, lean_object* x_11, lean_object* x_12, lean_object* x_13) {
_start:
{
uint8_t x_14; lean_object* x_15; 
x_14 = lean_unbox(x_1);
lean_dec(x_1);
x_15 = l_ReaderT_bind___at_Lean_Meta_Simp_rewrite_tryLemma_x3f___spec__1___at_Lean_Meta_Simp_rewrite_tryLemma_x3f___spec__2___lambda__1(x_14, x_2, x_3, x_4, x_5, x_6, x_7, x_8, x_9, x_10, x_11, x_12, x_13);
lean_dec(x_8);
lean_dec(x_7);
lean_dec(x_6);
return x_15;
}
}
lean_object* l_ReaderT_bind___at_Lean_Meta_Simp_rewrite_tryLemma_x3f___spec__1___at_Lean_Meta_Simp_rewrite_tryLemma_x3f___spec__2___lambda__2___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9, lean_object* x_10, lean_object* x_11, lean_object* x_12, lean_object* x_13, lean_object* x_14) {
_start:
{
uint8_t x_15; lean_object* x_16; 
x_15 = lean_unbox(x_1);
lean_dec(x_1);
x_16 = l_ReaderT_bind___at_Lean_Meta_Simp_rewrite_tryLemma_x3f___spec__1___at_Lean_Meta_Simp_rewrite_tryLemma_x3f___spec__2___lambda__2(x_15, x_2, x_3, x_4, x_5, x_6, x_7, x_8, x_9, x_10, x_11, x_12, x_13, x_14);
lean_dec(x_9);
lean_dec(x_8);
lean_dec(x_7);
lean_dec(x_2);
return x_16;
}
}
lean_object* l_ReaderT_bind___at_Lean_Meta_Simp_rewrite_tryLemma_x3f___spec__1___at_Lean_Meta_Simp_rewrite_tryLemma_x3f___spec__2___lambda__3___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9, lean_object* x_10, lean_object* x_11, lean_object* x_12, lean_object* x_13, lean_object* x_14, lean_object* x_15) {
_start:
{
uint8_t x_16; lean_object* x_17; 
x_16 = lean_unbox(x_3);
lean_dec(x_3);
x_17 = l_ReaderT_bind___at_Lean_Meta_Simp_rewrite_tryLemma_x3f___spec__1___at_Lean_Meta_Simp_rewrite_tryLemma_x3f___spec__2___lambda__3(x_1, x_2, x_16, x_4, x_5, x_6, x_7, x_8, x_9, x_10, x_11, x_12, x_13, x_14, x_15);
lean_dec(x_10);
lean_dec(x_9);
lean_dec(x_8);
lean_dec(x_4);
lean_dec(x_2);
return x_17;
}
}
lean_object* l_Array_insertionSort_swapLoop___at_Lean_Meta_Simp_rewrite___spec__2(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
lean_object* x_4; uint8_t x_5; 
x_4 = lean_unsigned_to_nat(0u);
x_5 = lean_nat_dec_eq(x_2, x_4);
if (x_5 == 0)
{
lean_object* x_6; lean_object* x_7; lean_object* x_8; lean_object* x_9; lean_object* x_10; lean_object* x_11; uint8_t x_12; 
x_6 = lean_unsigned_to_nat(1u);
x_7 = lean_nat_sub(x_2, x_6);
x_8 = lean_array_fget(x_1, x_2);
x_9 = lean_array_fget(x_1, x_7);
x_10 = lean_ctor_get(x_8, 2);
lean_inc(x_10);
lean_dec(x_8);
x_11 = lean_ctor_get(x_9, 2);
lean_inc(x_11);
lean_dec(x_9);
x_12 = lean_nat_dec_lt(x_10, x_11);
lean_dec(x_11);
lean_dec(x_10);
if (x_12 == 0)
{
lean_dec(x_7);
lean_dec(x_2);
return x_1;
}
else
{
lean_object* x_13; 
x_13 = lean_array_fswap(x_1, x_2, x_7);
lean_dec(x_2);
x_1 = x_13;
x_2 = x_7;
x_3 = lean_box(0);
goto _start;
}
}
else
{
lean_dec(x_2);
return x_1;
}
}
}
lean_object* l_Array_insertionSort_traverse___at_Lean_Meta_Simp_rewrite___spec__1(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
lean_object* x_4; uint8_t x_5; 
x_4 = lean_unsigned_to_nat(0u);
x_5 = lean_nat_dec_eq(x_3, x_4);
if (x_5 == 0)
{
lean_object* x_6; lean_object* x_7; lean_object* x_8; uint8_t x_9; 
x_6 = lean_unsigned_to_nat(1u);
x_7 = lean_nat_sub(x_3, x_6);
lean_dec(x_3);
x_8 = lean_array_get_size(x_1);
x_9 = lean_nat_dec_lt(x_2, x_8);
lean_dec(x_8);
if (x_9 == 0)
{
lean_dec(x_7);
lean_dec(x_2);
return x_1;
}
else
{
lean_object* x_10; lean_object* x_11; 
lean_inc(x_2);
x_10 = l_Array_insertionSort_swapLoop___at_Lean_Meta_Simp_rewrite___spec__2(x_1, x_2, lean_box(0));
x_11 = lean_nat_add(x_2, x_6);
lean_dec(x_2);
x_1 = x_10;
x_2 = x_11;
x_3 = x_7;
goto _start;
}
}
else
{
lean_dec(x_3);
lean_dec(x_2);
return x_1;
}
}
}
lean_object* l_Array_forInUnsafe_loop___at_Lean_Meta_Simp_rewrite___spec__3(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, size_t x_5, size_t x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9, lean_object* x_10, lean_object* x_11, lean_object* x_12, lean_object* x_13, lean_object* x_14) {
_start:
{
uint8_t x_15; 
x_15 = x_6 < x_5;
if (x_15 == 0)
{
lean_object* x_16; 
lean_dec(x_13);
lean_dec(x_12);
lean_dec(x_11);
lean_dec(x_10);
lean_dec(x_9);
lean_dec(x_8);
lean_dec(x_3);
lean_dec(x_2);
lean_dec(x_1);
x_16 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_16, 0, x_7);
lean_ctor_set(x_16, 1, x_14);
return x_16;
}
else
{
lean_object* x_17; lean_object* x_18; 
lean_dec(x_7);
x_17 = lean_array_uget(x_4, x_6);
lean_inc(x_13);
lean_inc(x_12);
lean_inc(x_11);
lean_inc(x_10);
lean_inc(x_9);
lean_inc(x_8);
lean_inc(x_2);
lean_inc(x_1);
x_18 = l_Lean_Meta_withNewMCtxDepth___at_Lean_Meta_Simp_rewrite_tryLemma_x3f___spec__3___at_Lean_Meta_Simp_rewrite_tryLemma_x3f___spec__4(x_1, x_2, x_17, x_8, x_9, x_10, x_11, x_12, x_13, x_14);
if (lean_obj_tag(x_18) == 0)
{
lean_object* x_19; 
x_19 = lean_ctor_get(x_18, 0);
lean_inc(x_19);
if (lean_obj_tag(x_19) == 0)
{
lean_object* x_20; size_t x_21; size_t x_22; 
x_20 = lean_ctor_get(x_18, 1);
lean_inc(x_20);
lean_dec(x_18);
x_21 = 1;
x_22 = x_6 + x_21;
lean_inc(x_3);
{
size_t _tmp_5 = x_22;
lean_object* _tmp_6 = x_3;
lean_object* _tmp_13 = x_20;
x_6 = _tmp_5;
x_7 = _tmp_6;
x_14 = _tmp_13;
}
goto _start;
}
else
{
uint8_t x_24; 
lean_dec(x_13);
lean_dec(x_12);
lean_dec(x_11);
lean_dec(x_10);
lean_dec(x_9);
lean_dec(x_8);
lean_dec(x_3);
lean_dec(x_2);
lean_dec(x_1);
x_24 = !lean_is_exclusive(x_18);
if (x_24 == 0)
{
lean_object* x_25; uint8_t x_26; 
x_25 = lean_ctor_get(x_18, 0);
lean_dec(x_25);
x_26 = !lean_is_exclusive(x_19);
if (x_26 == 0)
{
lean_object* x_27; lean_object* x_28; 
x_27 = lean_box(0);
x_28 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_28, 0, x_19);
lean_ctor_set(x_28, 1, x_27);
lean_ctor_set(x_18, 0, x_28);
return x_18;
}
else
{
lean_object* x_29; lean_object* x_30; lean_object* x_31; lean_object* x_32; 
x_29 = lean_ctor_get(x_19, 0);
lean_inc(x_29);
lean_dec(x_19);
x_30 = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(x_30, 0, x_29);
x_31 = lean_box(0);
x_32 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_32, 0, x_30);
lean_ctor_set(x_32, 1, x_31);
lean_ctor_set(x_18, 0, x_32);
return x_18;
}
}
else
{
lean_object* x_33; lean_object* x_34; lean_object* x_35; lean_object* x_36; lean_object* x_37; lean_object* x_38; lean_object* x_39; 
x_33 = lean_ctor_get(x_18, 1);
lean_inc(x_33);
lean_dec(x_18);
x_34 = lean_ctor_get(x_19, 0);
lean_inc(x_34);
if (lean_is_exclusive(x_19)) {
 lean_ctor_release(x_19, 0);
 x_35 = x_19;
} else {
 lean_dec_ref(x_19);
 x_35 = lean_box(0);
}
if (lean_is_scalar(x_35)) {
 x_36 = lean_alloc_ctor(1, 1, 0);
} else {
 x_36 = x_35;
}
lean_ctor_set(x_36, 0, x_34);
x_37 = lean_box(0);
x_38 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_38, 0, x_36);
lean_ctor_set(x_38, 1, x_37);
x_39 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_39, 0, x_38);
lean_ctor_set(x_39, 1, x_33);
return x_39;
}
}
}
else
{
uint8_t x_40; 
lean_dec(x_13);
lean_dec(x_12);
lean_dec(x_11);
lean_dec(x_10);
lean_dec(x_9);
lean_dec(x_8);
lean_dec(x_3);
lean_dec(x_2);
lean_dec(x_1);
x_40 = !lean_is_exclusive(x_18);
if (x_40 == 0)
{
return x_18;
}
else
{
lean_object* x_41; lean_object* x_42; lean_object* x_43; 
x_41 = lean_ctor_get(x_18, 0);
x_42 = lean_ctor_get(x_18, 1);
lean_inc(x_42);
lean_inc(x_41);
lean_dec(x_18);
x_43 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_43, 0, x_41);
lean_ctor_set(x_43, 1, x_42);
return x_43;
}
}
}
}
}
lean_object* l_Lean_Meta_Simp_rewrite___lambda__1(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9, lean_object* x_10) {
_start:
{
lean_object* x_11; lean_object* x_12; 
x_11 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_11, 0, x_1);
lean_ctor_set(x_11, 1, x_2);
x_12 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_12, 0, x_11);
lean_ctor_set(x_12, 1, x_10);
return x_12;
}
}
static lean_object* _init_l_Lean_Meta_Simp_rewrite___closed__1() {
_start:
{
lean_object* x_1; 
x_1 = lean_mk_string("no lemmas found for ");
return x_1;
}
}
static lean_object* _init_l_Lean_Meta_Simp_rewrite___closed__2() {
_start:
{
lean_object* x_1; lean_object* x_2; 
x_1 = l_Lean_Meta_Simp_rewrite___closed__1;
x_2 = l_Lean_stringToMessageData(x_1);
return x_2;
}
}
static lean_object* _init_l_Lean_Meta_Simp_rewrite___closed__3() {
_start:
{
lean_object* x_1; 
x_1 = lean_mk_string("-rewriting ");
return x_1;
}
}
static lean_object* _init_l_Lean_Meta_Simp_rewrite___closed__4() {
_start:
{
lean_object* x_1; lean_object* x_2; 
x_1 = l_Lean_Meta_Simp_rewrite___closed__3;
x_2 = l_Lean_stringToMessageData(x_1);
return x_2;
}
}
lean_object* l_Lean_Meta_Simp_rewrite(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9, lean_object* x_10, lean_object* x_11) {
_start:
{
lean_object* x_12; 
lean_inc(x_10);
lean_inc(x_9);
lean_inc(x_8);
lean_inc(x_7);
lean_inc(x_1);
x_12 = l_Lean_Meta_DiscrTree_getMatch___rarg(x_2, x_1, x_7, x_8, x_9, x_10, x_11);
if (lean_obj_tag(x_12) == 0)
{
lean_object* x_13; lean_object* x_14; lean_object* x_15; uint8_t x_16; 
x_13 = lean_ctor_get(x_12, 0);
lean_inc(x_13);
x_14 = lean_ctor_get(x_12, 1);
lean_inc(x_14);
if (lean_is_exclusive(x_12)) {
 lean_ctor_release(x_12, 0);
 lean_ctor_release(x_12, 1);
 x_15 = x_12;
} else {
 lean_dec_ref(x_12);
 x_15 = lean_box(0);
}
x_16 = l_Array_isEmpty___rarg(x_13);
if (x_16 == 0)
{
lean_object* x_17; lean_object* x_18; lean_object* x_19; lean_object* x_20; lean_object* x_21; size_t x_22; size_t x_23; lean_object* x_24; lean_object* x_25; 
lean_dec(x_15);
x_17 = lean_array_get_size(x_13);
x_18 = lean_unsigned_to_nat(0u);
x_19 = l_Array_insertionSort_traverse___at_Lean_Meta_Simp_rewrite___spec__1(x_13, x_18, x_17);
x_20 = lean_box(0);
x_21 = lean_array_get_size(x_19);
x_22 = lean_usize_of_nat(x_21);
lean_dec(x_21);
x_23 = 0;
x_24 = l_Array_findSomeM_x3f___rarg___closed__1;
lean_inc(x_10);
lean_inc(x_9);
lean_inc(x_8);
lean_inc(x_7);
lean_inc(x_6);
lean_inc(x_5);
lean_inc(x_1);
x_25 = l_Array_forInUnsafe_loop___at_Lean_Meta_Simp_rewrite___spec__3(x_1, x_3, x_24, x_19, x_22, x_23, x_24, x_5, x_6, x_7, x_8, x_9, x_10, x_14);
lean_dec(x_19);
if (lean_obj_tag(x_25) == 0)
{
lean_object* x_26; lean_object* x_27; 
x_26 = lean_ctor_get(x_25, 0);
lean_inc(x_26);
x_27 = lean_ctor_get(x_26, 0);
lean_inc(x_27);
lean_dec(x_26);
if (lean_obj_tag(x_27) == 0)
{
lean_object* x_28; lean_object* x_29; lean_object* x_30; 
x_28 = lean_ctor_get(x_25, 1);
lean_inc(x_28);
lean_dec(x_25);
x_29 = lean_box(0);
x_30 = l_Lean_Meta_Simp_rewrite___lambda__1(x_1, x_20, x_29, x_5, x_6, x_7, x_8, x_9, x_10, x_28);
lean_dec(x_10);
lean_dec(x_9);
lean_dec(x_8);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_5);
return x_30;
}
else
{
uint8_t x_31; 
lean_dec(x_10);
lean_dec(x_9);
lean_dec(x_8);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_1);
x_31 = !lean_is_exclusive(x_25);
if (x_31 == 0)
{
lean_object* x_32; lean_object* x_33; 
x_32 = lean_ctor_get(x_25, 0);
lean_dec(x_32);
x_33 = lean_ctor_get(x_27, 0);
lean_inc(x_33);
lean_dec(x_27);
lean_ctor_set(x_25, 0, x_33);
return x_25;
}
else
{
lean_object* x_34; lean_object* x_35; lean_object* x_36; 
x_34 = lean_ctor_get(x_25, 1);
lean_inc(x_34);
lean_dec(x_25);
x_35 = lean_ctor_get(x_27, 0);
lean_inc(x_35);
lean_dec(x_27);
x_36 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_36, 0, x_35);
lean_ctor_set(x_36, 1, x_34);
return x_36;
}
}
}
else
{
uint8_t x_37; 
lean_dec(x_10);
lean_dec(x_9);
lean_dec(x_8);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_1);
x_37 = !lean_is_exclusive(x_25);
if (x_37 == 0)
{
return x_25;
}
else
{
lean_object* x_38; lean_object* x_39; lean_object* x_40; 
x_38 = lean_ctor_get(x_25, 0);
x_39 = lean_ctor_get(x_25, 1);
lean_inc(x_39);
lean_inc(x_38);
lean_dec(x_25);
x_40 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_40, 0, x_38);
lean_ctor_set(x_40, 1, x_39);
return x_40;
}
}
}
else
{
uint8_t x_41; lean_object* x_42; lean_object* x_66; lean_object* x_67; lean_object* x_68; uint8_t x_69; 
lean_dec(x_13);
lean_dec(x_3);
x_66 = lean_st_ref_get(x_10, x_14);
x_67 = lean_ctor_get(x_66, 0);
lean_inc(x_67);
x_68 = lean_ctor_get(x_67, 3);
lean_inc(x_68);
lean_dec(x_67);
x_69 = lean_ctor_get_uint8(x_68, sizeof(void*)*1);
lean_dec(x_68);
if (x_69 == 0)
{
lean_object* x_70; uint8_t x_71; 
x_70 = lean_ctor_get(x_66, 1);
lean_inc(x_70);
lean_dec(x_66);
x_71 = 0;
x_41 = x_71;
x_42 = x_70;
goto block_65;
}
else
{
lean_object* x_72; lean_object* x_73; lean_object* x_74; lean_object* x_75; lean_object* x_76; uint8_t x_77; 
x_72 = lean_ctor_get(x_66, 1);
lean_inc(x_72);
lean_dec(x_66);
x_73 = l_Array_forInUnsafe_loop___at_Lean_Meta_Simp_synthesizeArgs___spec__3___closed__2;
x_74 = l___private_Lean_Util_Trace_0__Lean_checkTraceOptionM___at_Lean_Meta_Simp_synthesizeArgs___spec__2(x_73, x_5, x_6, x_7, x_8, x_9, x_10, x_72);
x_75 = lean_ctor_get(x_74, 0);
lean_inc(x_75);
x_76 = lean_ctor_get(x_74, 1);
lean_inc(x_76);
lean_dec(x_74);
x_77 = lean_unbox(x_75);
lean_dec(x_75);
x_41 = x_77;
x_42 = x_76;
goto block_65;
}
block_65:
{
if (x_41 == 0)
{
lean_object* x_43; lean_object* x_44; lean_object* x_45; 
lean_dec(x_10);
lean_dec(x_9);
lean_dec(x_8);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_5);
x_43 = lean_box(0);
x_44 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_44, 0, x_1);
lean_ctor_set(x_44, 1, x_43);
if (lean_is_scalar(x_15)) {
 x_45 = lean_alloc_ctor(0, 2, 0);
} else {
 x_45 = x_15;
}
lean_ctor_set(x_45, 0, x_44);
lean_ctor_set(x_45, 1, x_42);
return x_45;
}
else
{
lean_object* x_46; lean_object* x_47; lean_object* x_48; lean_object* x_49; lean_object* x_50; lean_object* x_51; lean_object* x_52; lean_object* x_53; lean_object* x_54; lean_object* x_55; lean_object* x_56; uint8_t x_57; 
lean_dec(x_15);
x_46 = l_Lean_stringToMessageData(x_4);
x_47 = l_Lean_Meta_Simp_rewrite___closed__2;
x_48 = lean_alloc_ctor(10, 2, 0);
lean_ctor_set(x_48, 0, x_47);
lean_ctor_set(x_48, 1, x_46);
x_49 = l_Lean_Meta_Simp_rewrite___closed__4;
x_50 = lean_alloc_ctor(10, 2, 0);
lean_ctor_set(x_50, 0, x_48);
lean_ctor_set(x_50, 1, x_49);
lean_inc(x_1);
x_51 = lean_alloc_ctor(2, 1, 0);
lean_ctor_set(x_51, 0, x_1);
x_52 = lean_alloc_ctor(10, 2, 0);
lean_ctor_set(x_52, 0, x_50);
lean_ctor_set(x_52, 1, x_51);
x_53 = l_Lean_KernelException_toMessageData___closed__15;
x_54 = lean_alloc_ctor(10, 2, 0);
lean_ctor_set(x_54, 0, x_52);
lean_ctor_set(x_54, 1, x_53);
x_55 = l_Array_forInUnsafe_loop___at_Lean_Meta_Simp_synthesizeArgs___spec__3___closed__2;
x_56 = l_Lean_addTrace___at_Lean_Meta_Simp_synthesizeArgs___spec__1(x_55, x_54, x_5, x_6, x_7, x_8, x_9, x_10, x_42);
lean_dec(x_10);
lean_dec(x_9);
lean_dec(x_8);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_5);
x_57 = !lean_is_exclusive(x_56);
if (x_57 == 0)
{
lean_object* x_58; lean_object* x_59; lean_object* x_60; 
x_58 = lean_ctor_get(x_56, 0);
lean_dec(x_58);
x_59 = lean_box(0);
x_60 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_60, 0, x_1);
lean_ctor_set(x_60, 1, x_59);
lean_ctor_set(x_56, 0, x_60);
return x_56;
}
else
{
lean_object* x_61; lean_object* x_62; lean_object* x_63; lean_object* x_64; 
x_61 = lean_ctor_get(x_56, 1);
lean_inc(x_61);
lean_dec(x_56);
x_62 = lean_box(0);
x_63 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_63, 0, x_1);
lean_ctor_set(x_63, 1, x_62);
x_64 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_64, 0, x_63);
lean_ctor_set(x_64, 1, x_61);
return x_64;
}
}
}
}
}
else
{
uint8_t x_78; 
lean_dec(x_10);
lean_dec(x_9);
lean_dec(x_8);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_3);
lean_dec(x_1);
x_78 = !lean_is_exclusive(x_12);
if (x_78 == 0)
{
return x_12;
}
else
{
lean_object* x_79; lean_object* x_80; lean_object* x_81; 
x_79 = lean_ctor_get(x_12, 0);
x_80 = lean_ctor_get(x_12, 1);
lean_inc(x_80);
lean_inc(x_79);
lean_dec(x_12);
x_81 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_81, 0, x_79);
lean_ctor_set(x_81, 1, x_80);
return x_81;
}
}
}
}
lean_object* l_Array_forInUnsafe_loop___at_Lean_Meta_Simp_rewrite___spec__3___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9, lean_object* x_10, lean_object* x_11, lean_object* x_12, lean_object* x_13, lean_object* x_14) {
_start:
{
size_t x_15; size_t x_16; lean_object* x_17; 
x_15 = lean_unbox_usize(x_5);
lean_dec(x_5);
x_16 = lean_unbox_usize(x_6);
lean_dec(x_6);
x_17 = l_Array_forInUnsafe_loop___at_Lean_Meta_Simp_rewrite___spec__3(x_1, x_2, x_3, x_4, x_15, x_16, x_7, x_8, x_9, x_10, x_11, x_12, x_13, x_14);
lean_dec(x_4);
return x_17;
}
}
lean_object* l_Lean_Meta_Simp_rewrite___lambda__1___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9, lean_object* x_10) {
_start:
{
lean_object* x_11; 
x_11 = l_Lean_Meta_Simp_rewrite___lambda__1(x_1, x_2, x_3, x_4, x_5, x_6, x_7, x_8, x_9, x_10);
lean_dec(x_9);
lean_dec(x_8);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
return x_11;
}
}
lean_object* l_Lean_Meta_Simp_rewrite___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9, lean_object* x_10, lean_object* x_11) {
_start:
{
lean_object* x_12; 
x_12 = l_Lean_Meta_Simp_rewrite(x_1, x_2, x_3, x_4, x_5, x_6, x_7, x_8, x_9, x_10, x_11);
lean_dec(x_4);
return x_12;
}
}
lean_object* l_Lean_Meta_Simp_rewriteCtorEq_x3f_match__1___rarg(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4) {
_start:
{
if (lean_obj_tag(x_1) == 0)
{
lean_object* x_5; 
lean_dec(x_3);
x_5 = lean_apply_2(x_4, x_1, x_2);
return x_5;
}
else
{
lean_object* x_6; 
x_6 = lean_ctor_get(x_1, 0);
lean_inc(x_6);
if (lean_obj_tag(x_2) == 0)
{
lean_object* x_7; 
lean_dec(x_6);
lean_dec(x_3);
x_7 = lean_apply_2(x_4, x_1, x_2);
return x_7;
}
else
{
lean_object* x_8; lean_object* x_9; lean_object* x_10; lean_object* x_11; lean_object* x_12; lean_object* x_13; 
lean_dec(x_4);
lean_dec(x_1);
x_8 = lean_ctor_get(x_2, 0);
lean_inc(x_8);
lean_dec(x_2);
x_9 = lean_ctor_get(x_6, 0);
lean_inc(x_9);
x_10 = lean_ctor_get(x_6, 1);
lean_inc(x_10);
lean_dec(x_6);
x_11 = lean_ctor_get(x_8, 0);
lean_inc(x_11);
x_12 = lean_ctor_get(x_8, 1);
lean_inc(x_12);
lean_dec(x_8);
x_13 = lean_apply_4(x_3, x_9, x_10, x_11, x_12);
return x_13;
}
}
}
}
lean_object* l_Lean_Meta_Simp_rewriteCtorEq_x3f_match__1(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = lean_alloc_closure((void*)(l_Lean_Meta_Simp_rewriteCtorEq_x3f_match__1___rarg), 4, 0);
return x_2;
}
}
lean_object* l_Lean_Meta_Simp_rewriteCtorEq_x3f_match__2___rarg(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
if (lean_obj_tag(x_1) == 0)
{
lean_object* x_4; lean_object* x_5; 
lean_dec(x_3);
x_4 = lean_box(0);
x_5 = lean_apply_1(x_2, x_4);
return x_5;
}
else
{
lean_object* x_6; lean_object* x_7; lean_object* x_8; lean_object* x_9; lean_object* x_10; lean_object* x_11; 
lean_dec(x_2);
x_6 = lean_ctor_get(x_1, 0);
lean_inc(x_6);
lean_dec(x_1);
x_7 = lean_ctor_get(x_6, 1);
lean_inc(x_7);
x_8 = lean_ctor_get(x_6, 0);
lean_inc(x_8);
lean_dec(x_6);
x_9 = lean_ctor_get(x_7, 0);
lean_inc(x_9);
x_10 = lean_ctor_get(x_7, 1);
lean_inc(x_10);
lean_dec(x_7);
x_11 = lean_apply_3(x_3, x_8, x_9, x_10);
return x_11;
}
}
}
lean_object* l_Lean_Meta_Simp_rewriteCtorEq_x3f_match__2(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = lean_alloc_closure((void*)(l_Lean_Meta_Simp_rewriteCtorEq_x3f_match__2___rarg), 3, 0);
return x_2;
}
}
lean_object* l_Lean_Meta_Simp_rewriteCtorEq_x3f___lambda__1(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6) {
_start:
{
lean_object* x_7; lean_object* x_8; 
x_7 = l_Lean_Meta_Simp_rewrite_getRHS___closed__1;
lean_inc(x_5);
lean_inc(x_4);
lean_inc(x_3);
lean_inc(x_2);
lean_inc(x_1);
x_8 = l_Lean_Meta_mkNoConfusion(x_7, x_1, x_2, x_3, x_4, x_5, x_6);
if (lean_obj_tag(x_8) == 0)
{
lean_object* x_9; lean_object* x_10; lean_object* x_11; lean_object* x_12; uint8_t x_13; uint8_t x_14; lean_object* x_15; 
x_9 = lean_ctor_get(x_8, 0);
lean_inc(x_9);
x_10 = lean_ctor_get(x_8, 1);
lean_inc(x_10);
lean_dec(x_8);
x_11 = l_Lean_mkOptionalNode___closed__2;
x_12 = lean_array_push(x_11, x_1);
x_13 = 0;
x_14 = 1;
lean_inc(x_2);
x_15 = l_Lean_Meta_mkLambdaFVars(x_12, x_9, x_13, x_14, x_2, x_3, x_4, x_5, x_10);
if (lean_obj_tag(x_15) == 0)
{
lean_object* x_16; lean_object* x_17; lean_object* x_18; 
x_16 = lean_ctor_get(x_15, 0);
lean_inc(x_16);
x_17 = lean_ctor_get(x_15, 1);
lean_inc(x_17);
lean_dec(x_15);
x_18 = l_Lean_Meta_mkEqFalse_x27(x_16, x_2, x_3, x_4, x_5, x_17);
if (lean_obj_tag(x_18) == 0)
{
uint8_t x_19; 
x_19 = !lean_is_exclusive(x_18);
if (x_19 == 0)
{
lean_object* x_20; lean_object* x_21; lean_object* x_22; lean_object* x_23; 
x_20 = lean_ctor_get(x_18, 0);
x_21 = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(x_21, 0, x_20);
x_22 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_22, 0, x_7);
lean_ctor_set(x_22, 1, x_21);
x_23 = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(x_23, 0, x_22);
lean_ctor_set(x_18, 0, x_23);
return x_18;
}
else
{
lean_object* x_24; lean_object* x_25; lean_object* x_26; lean_object* x_27; lean_object* x_28; lean_object* x_29; 
x_24 = lean_ctor_get(x_18, 0);
x_25 = lean_ctor_get(x_18, 1);
lean_inc(x_25);
lean_inc(x_24);
lean_dec(x_18);
x_26 = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(x_26, 0, x_24);
x_27 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_27, 0, x_7);
lean_ctor_set(x_27, 1, x_26);
x_28 = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(x_28, 0, x_27);
x_29 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_29, 0, x_28);
lean_ctor_set(x_29, 1, x_25);
return x_29;
}
}
else
{
uint8_t x_30; 
x_30 = !lean_is_exclusive(x_18);
if (x_30 == 0)
{
return x_18;
}
else
{
lean_object* x_31; lean_object* x_32; lean_object* x_33; 
x_31 = lean_ctor_get(x_18, 0);
x_32 = lean_ctor_get(x_18, 1);
lean_inc(x_32);
lean_inc(x_31);
lean_dec(x_18);
x_33 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_33, 0, x_31);
lean_ctor_set(x_33, 1, x_32);
return x_33;
}
}
}
else
{
uint8_t x_34; 
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
lean_dec(x_2);
x_34 = !lean_is_exclusive(x_15);
if (x_34 == 0)
{
return x_15;
}
else
{
lean_object* x_35; lean_object* x_36; lean_object* x_37; 
x_35 = lean_ctor_get(x_15, 0);
x_36 = lean_ctor_get(x_15, 1);
lean_inc(x_36);
lean_inc(x_35);
lean_dec(x_15);
x_37 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_37, 0, x_35);
lean_ctor_set(x_37, 1, x_36);
return x_37;
}
}
}
else
{
uint8_t x_38; 
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
lean_dec(x_2);
lean_dec(x_1);
x_38 = !lean_is_exclusive(x_8);
if (x_38 == 0)
{
return x_8;
}
else
{
lean_object* x_39; lean_object* x_40; lean_object* x_41; 
x_39 = lean_ctor_get(x_8, 0);
x_40 = lean_ctor_get(x_8, 1);
lean_inc(x_40);
lean_inc(x_39);
lean_dec(x_8);
x_41 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_41, 0, x_39);
lean_ctor_set(x_41, 1, x_40);
return x_41;
}
}
}
}
static lean_object* _init_l_Lean_Meta_Simp_rewriteCtorEq_x3f___closed__1() {
_start:
{
lean_object* x_1; 
x_1 = lean_mk_string("h");
return x_1;
}
}
static lean_object* _init_l_Lean_Meta_Simp_rewriteCtorEq_x3f___closed__2() {
_start:
{
lean_object* x_1; lean_object* x_2; lean_object* x_3; 
x_1 = lean_box(0);
x_2 = l_Lean_Meta_Simp_rewriteCtorEq_x3f___closed__1;
x_3 = lean_name_mk_string(x_1, x_2);
return x_3;
}
}
static lean_object* _init_l_Lean_Meta_Simp_rewriteCtorEq_x3f___closed__3() {
_start:
{
lean_object* x_1; 
x_1 = lean_alloc_closure((void*)(l_Lean_Meta_Simp_rewriteCtorEq_x3f___lambda__1), 6, 0);
return x_1;
}
}
lean_object* l_Lean_Meta_Simp_rewriteCtorEq_x3f(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6) {
_start:
{
lean_object* x_7; lean_object* x_8; uint8_t x_9; 
x_7 = l_myMacro____x40_Init_Notation___hyg_6045____closed__4;
x_8 = lean_unsigned_to_nat(3u);
x_9 = l_Lean_Expr_isAppOfArity(x_1, x_7, x_8);
if (x_9 == 0)
{
lean_object* x_10; lean_object* x_11; 
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
lean_dec(x_2);
lean_dec(x_1);
x_10 = lean_box(0);
x_11 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_11, 0, x_10);
lean_ctor_set(x_11, 1, x_6);
return x_11;
}
else
{
lean_object* x_12; lean_object* x_13; lean_object* x_14; uint8_t x_15; 
x_12 = l_Lean_Expr_appFn_x21(x_1);
x_13 = l_Lean_Expr_appArg_x21(x_12);
lean_dec(x_12);
x_14 = l_Lean_Expr_appArg_x21(x_1);
x_15 = !lean_is_exclusive(x_2);
if (x_15 == 0)
{
lean_object* x_16; uint8_t x_17; 
x_16 = lean_ctor_get(x_2, 0);
x_17 = !lean_is_exclusive(x_16);
if (x_17 == 0)
{
uint8_t x_18; lean_object* x_19; 
x_18 = 3;
lean_ctor_set_uint8(x_16, 5, x_18);
lean_inc(x_5);
lean_inc(x_4);
lean_inc(x_3);
lean_inc(x_2);
x_19 = l_Lean_Meta_whnf(x_13, x_2, x_3, x_4, x_5, x_6);
if (lean_obj_tag(x_19) == 0)
{
lean_object* x_20; lean_object* x_21; lean_object* x_22; 
x_20 = lean_ctor_get(x_19, 0);
lean_inc(x_20);
x_21 = lean_ctor_get(x_19, 1);
lean_inc(x_21);
lean_dec(x_19);
lean_inc(x_5);
lean_inc(x_4);
lean_inc(x_3);
lean_inc(x_2);
x_22 = l_Lean_Meta_whnf(x_14, x_2, x_3, x_4, x_5, x_21);
if (lean_obj_tag(x_22) == 0)
{
lean_object* x_23; lean_object* x_24; lean_object* x_25; uint8_t x_26; 
x_23 = lean_ctor_get(x_22, 0);
lean_inc(x_23);
x_24 = lean_ctor_get(x_22, 1);
lean_inc(x_24);
lean_dec(x_22);
x_25 = lean_st_ref_get(x_5, x_24);
x_26 = !lean_is_exclusive(x_25);
if (x_26 == 0)
{
lean_object* x_27; lean_object* x_28; lean_object* x_29; lean_object* x_30; 
x_27 = lean_ctor_get(x_25, 0);
x_28 = lean_ctor_get(x_25, 1);
x_29 = lean_ctor_get(x_27, 0);
lean_inc(x_29);
lean_dec(x_27);
lean_inc(x_29);
x_30 = l_Lean_Expr_constructorApp_x3f(x_29, x_20);
if (lean_obj_tag(x_30) == 0)
{
lean_object* x_31; 
lean_dec(x_29);
lean_dec(x_23);
lean_dec(x_2);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
lean_dec(x_1);
x_31 = lean_box(0);
lean_ctor_set(x_25, 0, x_31);
return x_25;
}
else
{
lean_object* x_32; lean_object* x_33; 
x_32 = lean_ctor_get(x_30, 0);
lean_inc(x_32);
lean_dec(x_30);
x_33 = l_Lean_Expr_constructorApp_x3f(x_29, x_23);
if (lean_obj_tag(x_33) == 0)
{
lean_object* x_34; 
lean_dec(x_32);
lean_dec(x_2);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
lean_dec(x_1);
x_34 = lean_box(0);
lean_ctor_set(x_25, 0, x_34);
return x_25;
}
else
{
lean_object* x_35; lean_object* x_36; lean_object* x_37; lean_object* x_38; lean_object* x_39; lean_object* x_40; lean_object* x_41; uint8_t x_42; 
x_35 = lean_ctor_get(x_33, 0);
lean_inc(x_35);
lean_dec(x_33);
x_36 = lean_ctor_get(x_32, 0);
lean_inc(x_36);
lean_dec(x_32);
x_37 = lean_ctor_get(x_35, 0);
lean_inc(x_37);
lean_dec(x_35);
x_38 = lean_ctor_get(x_36, 0);
lean_inc(x_38);
lean_dec(x_36);
x_39 = lean_ctor_get(x_38, 0);
lean_inc(x_39);
lean_dec(x_38);
x_40 = lean_ctor_get(x_37, 0);
lean_inc(x_40);
lean_dec(x_37);
x_41 = lean_ctor_get(x_40, 0);
lean_inc(x_41);
lean_dec(x_40);
x_42 = lean_name_eq(x_39, x_41);
lean_dec(x_41);
lean_dec(x_39);
if (x_42 == 0)
{
lean_object* x_43; uint8_t x_44; lean_object* x_45; lean_object* x_46; 
lean_free_object(x_25);
x_43 = l_Lean_Meta_Simp_rewriteCtorEq_x3f___closed__2;
x_44 = 0;
x_45 = l_Lean_Meta_Simp_rewriteCtorEq_x3f___closed__3;
x_46 = l_Lean_Meta_withLocalDecl___at___private_Lean_Meta_Tactic_Simp_SimpLemmas_0__Lean_Meta_isPerm___spec__1___rarg(x_43, x_44, x_1, x_45, x_2, x_3, x_4, x_5, x_28);
if (lean_obj_tag(x_46) == 0)
{
uint8_t x_47; 
x_47 = !lean_is_exclusive(x_46);
if (x_47 == 0)
{
return x_46;
}
else
{
lean_object* x_48; lean_object* x_49; lean_object* x_50; 
x_48 = lean_ctor_get(x_46, 0);
x_49 = lean_ctor_get(x_46, 1);
lean_inc(x_49);
lean_inc(x_48);
lean_dec(x_46);
x_50 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_50, 0, x_48);
lean_ctor_set(x_50, 1, x_49);
return x_50;
}
}
else
{
uint8_t x_51; 
x_51 = !lean_is_exclusive(x_46);
if (x_51 == 0)
{
return x_46;
}
else
{
lean_object* x_52; lean_object* x_53; lean_object* x_54; 
x_52 = lean_ctor_get(x_46, 0);
x_53 = lean_ctor_get(x_46, 1);
lean_inc(x_53);
lean_inc(x_52);
lean_dec(x_46);
x_54 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_54, 0, x_52);
lean_ctor_set(x_54, 1, x_53);
return x_54;
}
}
}
else
{
lean_object* x_55; 
lean_dec(x_2);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
lean_dec(x_1);
x_55 = lean_box(0);
lean_ctor_set(x_25, 0, x_55);
return x_25;
}
}
}
}
else
{
lean_object* x_56; lean_object* x_57; lean_object* x_58; lean_object* x_59; 
x_56 = lean_ctor_get(x_25, 0);
x_57 = lean_ctor_get(x_25, 1);
lean_inc(x_57);
lean_inc(x_56);
lean_dec(x_25);
x_58 = lean_ctor_get(x_56, 0);
lean_inc(x_58);
lean_dec(x_56);
lean_inc(x_58);
x_59 = l_Lean_Expr_constructorApp_x3f(x_58, x_20);
if (lean_obj_tag(x_59) == 0)
{
lean_object* x_60; lean_object* x_61; 
lean_dec(x_58);
lean_dec(x_23);
lean_dec(x_2);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
lean_dec(x_1);
x_60 = lean_box(0);
x_61 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_61, 0, x_60);
lean_ctor_set(x_61, 1, x_57);
return x_61;
}
else
{
lean_object* x_62; lean_object* x_63; 
x_62 = lean_ctor_get(x_59, 0);
lean_inc(x_62);
lean_dec(x_59);
x_63 = l_Lean_Expr_constructorApp_x3f(x_58, x_23);
if (lean_obj_tag(x_63) == 0)
{
lean_object* x_64; lean_object* x_65; 
lean_dec(x_62);
lean_dec(x_2);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
lean_dec(x_1);
x_64 = lean_box(0);
x_65 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_65, 0, x_64);
lean_ctor_set(x_65, 1, x_57);
return x_65;
}
else
{
lean_object* x_66; lean_object* x_67; lean_object* x_68; lean_object* x_69; lean_object* x_70; lean_object* x_71; lean_object* x_72; uint8_t x_73; 
x_66 = lean_ctor_get(x_63, 0);
lean_inc(x_66);
lean_dec(x_63);
x_67 = lean_ctor_get(x_62, 0);
lean_inc(x_67);
lean_dec(x_62);
x_68 = lean_ctor_get(x_66, 0);
lean_inc(x_68);
lean_dec(x_66);
x_69 = lean_ctor_get(x_67, 0);
lean_inc(x_69);
lean_dec(x_67);
x_70 = lean_ctor_get(x_69, 0);
lean_inc(x_70);
lean_dec(x_69);
x_71 = lean_ctor_get(x_68, 0);
lean_inc(x_71);
lean_dec(x_68);
x_72 = lean_ctor_get(x_71, 0);
lean_inc(x_72);
lean_dec(x_71);
x_73 = lean_name_eq(x_70, x_72);
lean_dec(x_72);
lean_dec(x_70);
if (x_73 == 0)
{
lean_object* x_74; uint8_t x_75; lean_object* x_76; lean_object* x_77; 
x_74 = l_Lean_Meta_Simp_rewriteCtorEq_x3f___closed__2;
x_75 = 0;
x_76 = l_Lean_Meta_Simp_rewriteCtorEq_x3f___closed__3;
x_77 = l_Lean_Meta_withLocalDecl___at___private_Lean_Meta_Tactic_Simp_SimpLemmas_0__Lean_Meta_isPerm___spec__1___rarg(x_74, x_75, x_1, x_76, x_2, x_3, x_4, x_5, x_57);
if (lean_obj_tag(x_77) == 0)
{
lean_object* x_78; lean_object* x_79; lean_object* x_80; lean_object* x_81; 
x_78 = lean_ctor_get(x_77, 0);
lean_inc(x_78);
x_79 = lean_ctor_get(x_77, 1);
lean_inc(x_79);
if (lean_is_exclusive(x_77)) {
 lean_ctor_release(x_77, 0);
 lean_ctor_release(x_77, 1);
 x_80 = x_77;
} else {
 lean_dec_ref(x_77);
 x_80 = lean_box(0);
}
if (lean_is_scalar(x_80)) {
 x_81 = lean_alloc_ctor(0, 2, 0);
} else {
 x_81 = x_80;
}
lean_ctor_set(x_81, 0, x_78);
lean_ctor_set(x_81, 1, x_79);
return x_81;
}
else
{
lean_object* x_82; lean_object* x_83; lean_object* x_84; lean_object* x_85; 
x_82 = lean_ctor_get(x_77, 0);
lean_inc(x_82);
x_83 = lean_ctor_get(x_77, 1);
lean_inc(x_83);
if (lean_is_exclusive(x_77)) {
 lean_ctor_release(x_77, 0);
 lean_ctor_release(x_77, 1);
 x_84 = x_77;
} else {
 lean_dec_ref(x_77);
 x_84 = lean_box(0);
}
if (lean_is_scalar(x_84)) {
 x_85 = lean_alloc_ctor(1, 2, 0);
} else {
 x_85 = x_84;
}
lean_ctor_set(x_85, 0, x_82);
lean_ctor_set(x_85, 1, x_83);
return x_85;
}
}
else
{
lean_object* x_86; lean_object* x_87; 
lean_dec(x_2);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
lean_dec(x_1);
x_86 = lean_box(0);
x_87 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_87, 0, x_86);
lean_ctor_set(x_87, 1, x_57);
return x_87;
}
}
}
}
}
else
{
uint8_t x_88; 
lean_dec(x_20);
lean_dec(x_2);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
lean_dec(x_1);
x_88 = !lean_is_exclusive(x_22);
if (x_88 == 0)
{
return x_22;
}
else
{
lean_object* x_89; lean_object* x_90; lean_object* x_91; 
x_89 = lean_ctor_get(x_22, 0);
x_90 = lean_ctor_get(x_22, 1);
lean_inc(x_90);
lean_inc(x_89);
lean_dec(x_22);
x_91 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_91, 0, x_89);
lean_ctor_set(x_91, 1, x_90);
return x_91;
}
}
}
else
{
uint8_t x_92; 
lean_dec(x_2);
lean_dec(x_14);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
lean_dec(x_1);
x_92 = !lean_is_exclusive(x_19);
if (x_92 == 0)
{
return x_19;
}
else
{
lean_object* x_93; lean_object* x_94; lean_object* x_95; 
x_93 = lean_ctor_get(x_19, 0);
x_94 = lean_ctor_get(x_19, 1);
lean_inc(x_94);
lean_inc(x_93);
lean_dec(x_19);
x_95 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_95, 0, x_93);
lean_ctor_set(x_95, 1, x_94);
return x_95;
}
}
}
else
{
uint8_t x_96; uint8_t x_97; uint8_t x_98; uint8_t x_99; uint8_t x_100; uint8_t x_101; uint8_t x_102; uint8_t x_103; uint8_t x_104; lean_object* x_105; lean_object* x_106; 
x_96 = lean_ctor_get_uint8(x_16, 0);
x_97 = lean_ctor_get_uint8(x_16, 1);
x_98 = lean_ctor_get_uint8(x_16, 2);
x_99 = lean_ctor_get_uint8(x_16, 3);
x_100 = lean_ctor_get_uint8(x_16, 4);
x_101 = lean_ctor_get_uint8(x_16, 6);
x_102 = lean_ctor_get_uint8(x_16, 7);
x_103 = lean_ctor_get_uint8(x_16, 8);
lean_dec(x_16);
x_104 = 3;
x_105 = lean_alloc_ctor(0, 0, 9);
lean_ctor_set_uint8(x_105, 0, x_96);
lean_ctor_set_uint8(x_105, 1, x_97);
lean_ctor_set_uint8(x_105, 2, x_98);
lean_ctor_set_uint8(x_105, 3, x_99);
lean_ctor_set_uint8(x_105, 4, x_100);
lean_ctor_set_uint8(x_105, 5, x_104);
lean_ctor_set_uint8(x_105, 6, x_101);
lean_ctor_set_uint8(x_105, 7, x_102);
lean_ctor_set_uint8(x_105, 8, x_103);
lean_ctor_set(x_2, 0, x_105);
lean_inc(x_5);
lean_inc(x_4);
lean_inc(x_3);
lean_inc(x_2);
x_106 = l_Lean_Meta_whnf(x_13, x_2, x_3, x_4, x_5, x_6);
if (lean_obj_tag(x_106) == 0)
{
lean_object* x_107; lean_object* x_108; lean_object* x_109; 
x_107 = lean_ctor_get(x_106, 0);
lean_inc(x_107);
x_108 = lean_ctor_get(x_106, 1);
lean_inc(x_108);
lean_dec(x_106);
lean_inc(x_5);
lean_inc(x_4);
lean_inc(x_3);
lean_inc(x_2);
x_109 = l_Lean_Meta_whnf(x_14, x_2, x_3, x_4, x_5, x_108);
if (lean_obj_tag(x_109) == 0)
{
lean_object* x_110; lean_object* x_111; lean_object* x_112; lean_object* x_113; lean_object* x_114; lean_object* x_115; lean_object* x_116; lean_object* x_117; 
x_110 = lean_ctor_get(x_109, 0);
lean_inc(x_110);
x_111 = lean_ctor_get(x_109, 1);
lean_inc(x_111);
lean_dec(x_109);
x_112 = lean_st_ref_get(x_5, x_111);
x_113 = lean_ctor_get(x_112, 0);
lean_inc(x_113);
x_114 = lean_ctor_get(x_112, 1);
lean_inc(x_114);
if (lean_is_exclusive(x_112)) {
 lean_ctor_release(x_112, 0);
 lean_ctor_release(x_112, 1);
 x_115 = x_112;
} else {
 lean_dec_ref(x_112);
 x_115 = lean_box(0);
}
x_116 = lean_ctor_get(x_113, 0);
lean_inc(x_116);
lean_dec(x_113);
lean_inc(x_116);
x_117 = l_Lean_Expr_constructorApp_x3f(x_116, x_107);
if (lean_obj_tag(x_117) == 0)
{
lean_object* x_118; lean_object* x_119; 
lean_dec(x_116);
lean_dec(x_110);
lean_dec(x_2);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
lean_dec(x_1);
x_118 = lean_box(0);
if (lean_is_scalar(x_115)) {
 x_119 = lean_alloc_ctor(0, 2, 0);
} else {
 x_119 = x_115;
}
lean_ctor_set(x_119, 0, x_118);
lean_ctor_set(x_119, 1, x_114);
return x_119;
}
else
{
lean_object* x_120; lean_object* x_121; 
x_120 = lean_ctor_get(x_117, 0);
lean_inc(x_120);
lean_dec(x_117);
x_121 = l_Lean_Expr_constructorApp_x3f(x_116, x_110);
if (lean_obj_tag(x_121) == 0)
{
lean_object* x_122; lean_object* x_123; 
lean_dec(x_120);
lean_dec(x_2);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
lean_dec(x_1);
x_122 = lean_box(0);
if (lean_is_scalar(x_115)) {
 x_123 = lean_alloc_ctor(0, 2, 0);
} else {
 x_123 = x_115;
}
lean_ctor_set(x_123, 0, x_122);
lean_ctor_set(x_123, 1, x_114);
return x_123;
}
else
{
lean_object* x_124; lean_object* x_125; lean_object* x_126; lean_object* x_127; lean_object* x_128; lean_object* x_129; lean_object* x_130; uint8_t x_131; 
x_124 = lean_ctor_get(x_121, 0);
lean_inc(x_124);
lean_dec(x_121);
x_125 = lean_ctor_get(x_120, 0);
lean_inc(x_125);
lean_dec(x_120);
x_126 = lean_ctor_get(x_124, 0);
lean_inc(x_126);
lean_dec(x_124);
x_127 = lean_ctor_get(x_125, 0);
lean_inc(x_127);
lean_dec(x_125);
x_128 = lean_ctor_get(x_127, 0);
lean_inc(x_128);
lean_dec(x_127);
x_129 = lean_ctor_get(x_126, 0);
lean_inc(x_129);
lean_dec(x_126);
x_130 = lean_ctor_get(x_129, 0);
lean_inc(x_130);
lean_dec(x_129);
x_131 = lean_name_eq(x_128, x_130);
lean_dec(x_130);
lean_dec(x_128);
if (x_131 == 0)
{
lean_object* x_132; uint8_t x_133; lean_object* x_134; lean_object* x_135; 
lean_dec(x_115);
x_132 = l_Lean_Meta_Simp_rewriteCtorEq_x3f___closed__2;
x_133 = 0;
x_134 = l_Lean_Meta_Simp_rewriteCtorEq_x3f___closed__3;
x_135 = l_Lean_Meta_withLocalDecl___at___private_Lean_Meta_Tactic_Simp_SimpLemmas_0__Lean_Meta_isPerm___spec__1___rarg(x_132, x_133, x_1, x_134, x_2, x_3, x_4, x_5, x_114);
if (lean_obj_tag(x_135) == 0)
{
lean_object* x_136; lean_object* x_137; lean_object* x_138; lean_object* x_139; 
x_136 = lean_ctor_get(x_135, 0);
lean_inc(x_136);
x_137 = lean_ctor_get(x_135, 1);
lean_inc(x_137);
if (lean_is_exclusive(x_135)) {
 lean_ctor_release(x_135, 0);
 lean_ctor_release(x_135, 1);
 x_138 = x_135;
} else {
 lean_dec_ref(x_135);
 x_138 = lean_box(0);
}
if (lean_is_scalar(x_138)) {
 x_139 = lean_alloc_ctor(0, 2, 0);
} else {
 x_139 = x_138;
}
lean_ctor_set(x_139, 0, x_136);
lean_ctor_set(x_139, 1, x_137);
return x_139;
}
else
{
lean_object* x_140; lean_object* x_141; lean_object* x_142; lean_object* x_143; 
x_140 = lean_ctor_get(x_135, 0);
lean_inc(x_140);
x_141 = lean_ctor_get(x_135, 1);
lean_inc(x_141);
if (lean_is_exclusive(x_135)) {
 lean_ctor_release(x_135, 0);
 lean_ctor_release(x_135, 1);
 x_142 = x_135;
} else {
 lean_dec_ref(x_135);
 x_142 = lean_box(0);
}
if (lean_is_scalar(x_142)) {
 x_143 = lean_alloc_ctor(1, 2, 0);
} else {
 x_143 = x_142;
}
lean_ctor_set(x_143, 0, x_140);
lean_ctor_set(x_143, 1, x_141);
return x_143;
}
}
else
{
lean_object* x_144; lean_object* x_145; 
lean_dec(x_2);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
lean_dec(x_1);
x_144 = lean_box(0);
if (lean_is_scalar(x_115)) {
 x_145 = lean_alloc_ctor(0, 2, 0);
} else {
 x_145 = x_115;
}
lean_ctor_set(x_145, 0, x_144);
lean_ctor_set(x_145, 1, x_114);
return x_145;
}
}
}
}
else
{
lean_object* x_146; lean_object* x_147; lean_object* x_148; lean_object* x_149; 
lean_dec(x_107);
lean_dec(x_2);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
lean_dec(x_1);
x_146 = lean_ctor_get(x_109, 0);
lean_inc(x_146);
x_147 = lean_ctor_get(x_109, 1);
lean_inc(x_147);
if (lean_is_exclusive(x_109)) {
 lean_ctor_release(x_109, 0);
 lean_ctor_release(x_109, 1);
 x_148 = x_109;
} else {
 lean_dec_ref(x_109);
 x_148 = lean_box(0);
}
if (lean_is_scalar(x_148)) {
 x_149 = lean_alloc_ctor(1, 2, 0);
} else {
 x_149 = x_148;
}
lean_ctor_set(x_149, 0, x_146);
lean_ctor_set(x_149, 1, x_147);
return x_149;
}
}
else
{
lean_object* x_150; lean_object* x_151; lean_object* x_152; lean_object* x_153; 
lean_dec(x_2);
lean_dec(x_14);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
lean_dec(x_1);
x_150 = lean_ctor_get(x_106, 0);
lean_inc(x_150);
x_151 = lean_ctor_get(x_106, 1);
lean_inc(x_151);
if (lean_is_exclusive(x_106)) {
 lean_ctor_release(x_106, 0);
 lean_ctor_release(x_106, 1);
 x_152 = x_106;
} else {
 lean_dec_ref(x_106);
 x_152 = lean_box(0);
}
if (lean_is_scalar(x_152)) {
 x_153 = lean_alloc_ctor(1, 2, 0);
} else {
 x_153 = x_152;
}
lean_ctor_set(x_153, 0, x_150);
lean_ctor_set(x_153, 1, x_151);
return x_153;
}
}
}
else
{
lean_object* x_154; lean_object* x_155; lean_object* x_156; uint8_t x_157; uint8_t x_158; uint8_t x_159; uint8_t x_160; uint8_t x_161; uint8_t x_162; uint8_t x_163; uint8_t x_164; lean_object* x_165; uint8_t x_166; lean_object* x_167; lean_object* x_168; lean_object* x_169; 
x_154 = lean_ctor_get(x_2, 0);
x_155 = lean_ctor_get(x_2, 1);
x_156 = lean_ctor_get(x_2, 2);
lean_inc(x_156);
lean_inc(x_155);
lean_inc(x_154);
lean_dec(x_2);
x_157 = lean_ctor_get_uint8(x_154, 0);
x_158 = lean_ctor_get_uint8(x_154, 1);
x_159 = lean_ctor_get_uint8(x_154, 2);
x_160 = lean_ctor_get_uint8(x_154, 3);
x_161 = lean_ctor_get_uint8(x_154, 4);
x_162 = lean_ctor_get_uint8(x_154, 6);
x_163 = lean_ctor_get_uint8(x_154, 7);
x_164 = lean_ctor_get_uint8(x_154, 8);
if (lean_is_exclusive(x_154)) {
 x_165 = x_154;
} else {
 lean_dec_ref(x_154);
 x_165 = lean_box(0);
}
x_166 = 3;
if (lean_is_scalar(x_165)) {
 x_167 = lean_alloc_ctor(0, 0, 9);
} else {
 x_167 = x_165;
}
lean_ctor_set_uint8(x_167, 0, x_157);
lean_ctor_set_uint8(x_167, 1, x_158);
lean_ctor_set_uint8(x_167, 2, x_159);
lean_ctor_set_uint8(x_167, 3, x_160);
lean_ctor_set_uint8(x_167, 4, x_161);
lean_ctor_set_uint8(x_167, 5, x_166);
lean_ctor_set_uint8(x_167, 6, x_162);
lean_ctor_set_uint8(x_167, 7, x_163);
lean_ctor_set_uint8(x_167, 8, x_164);
x_168 = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(x_168, 0, x_167);
lean_ctor_set(x_168, 1, x_155);
lean_ctor_set(x_168, 2, x_156);
lean_inc(x_5);
lean_inc(x_4);
lean_inc(x_3);
lean_inc(x_168);
x_169 = l_Lean_Meta_whnf(x_13, x_168, x_3, x_4, x_5, x_6);
if (lean_obj_tag(x_169) == 0)
{
lean_object* x_170; lean_object* x_171; lean_object* x_172; 
x_170 = lean_ctor_get(x_169, 0);
lean_inc(x_170);
x_171 = lean_ctor_get(x_169, 1);
lean_inc(x_171);
lean_dec(x_169);
lean_inc(x_5);
lean_inc(x_4);
lean_inc(x_3);
lean_inc(x_168);
x_172 = l_Lean_Meta_whnf(x_14, x_168, x_3, x_4, x_5, x_171);
if (lean_obj_tag(x_172) == 0)
{
lean_object* x_173; lean_object* x_174; lean_object* x_175; lean_object* x_176; lean_object* x_177; lean_object* x_178; lean_object* x_179; lean_object* x_180; 
x_173 = lean_ctor_get(x_172, 0);
lean_inc(x_173);
x_174 = lean_ctor_get(x_172, 1);
lean_inc(x_174);
lean_dec(x_172);
x_175 = lean_st_ref_get(x_5, x_174);
x_176 = lean_ctor_get(x_175, 0);
lean_inc(x_176);
x_177 = lean_ctor_get(x_175, 1);
lean_inc(x_177);
if (lean_is_exclusive(x_175)) {
 lean_ctor_release(x_175, 0);
 lean_ctor_release(x_175, 1);
 x_178 = x_175;
} else {
 lean_dec_ref(x_175);
 x_178 = lean_box(0);
}
x_179 = lean_ctor_get(x_176, 0);
lean_inc(x_179);
lean_dec(x_176);
lean_inc(x_179);
x_180 = l_Lean_Expr_constructorApp_x3f(x_179, x_170);
if (lean_obj_tag(x_180) == 0)
{
lean_object* x_181; lean_object* x_182; 
lean_dec(x_179);
lean_dec(x_173);
lean_dec(x_168);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
lean_dec(x_1);
x_181 = lean_box(0);
if (lean_is_scalar(x_178)) {
 x_182 = lean_alloc_ctor(0, 2, 0);
} else {
 x_182 = x_178;
}
lean_ctor_set(x_182, 0, x_181);
lean_ctor_set(x_182, 1, x_177);
return x_182;
}
else
{
lean_object* x_183; lean_object* x_184; 
x_183 = lean_ctor_get(x_180, 0);
lean_inc(x_183);
lean_dec(x_180);
x_184 = l_Lean_Expr_constructorApp_x3f(x_179, x_173);
if (lean_obj_tag(x_184) == 0)
{
lean_object* x_185; lean_object* x_186; 
lean_dec(x_183);
lean_dec(x_168);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
lean_dec(x_1);
x_185 = lean_box(0);
if (lean_is_scalar(x_178)) {
 x_186 = lean_alloc_ctor(0, 2, 0);
} else {
 x_186 = x_178;
}
lean_ctor_set(x_186, 0, x_185);
lean_ctor_set(x_186, 1, x_177);
return x_186;
}
else
{
lean_object* x_187; lean_object* x_188; lean_object* x_189; lean_object* x_190; lean_object* x_191; lean_object* x_192; lean_object* x_193; uint8_t x_194; 
x_187 = lean_ctor_get(x_184, 0);
lean_inc(x_187);
lean_dec(x_184);
x_188 = lean_ctor_get(x_183, 0);
lean_inc(x_188);
lean_dec(x_183);
x_189 = lean_ctor_get(x_187, 0);
lean_inc(x_189);
lean_dec(x_187);
x_190 = lean_ctor_get(x_188, 0);
lean_inc(x_190);
lean_dec(x_188);
x_191 = lean_ctor_get(x_190, 0);
lean_inc(x_191);
lean_dec(x_190);
x_192 = lean_ctor_get(x_189, 0);
lean_inc(x_192);
lean_dec(x_189);
x_193 = lean_ctor_get(x_192, 0);
lean_inc(x_193);
lean_dec(x_192);
x_194 = lean_name_eq(x_191, x_193);
lean_dec(x_193);
lean_dec(x_191);
if (x_194 == 0)
{
lean_object* x_195; uint8_t x_196; lean_object* x_197; lean_object* x_198; 
lean_dec(x_178);
x_195 = l_Lean_Meta_Simp_rewriteCtorEq_x3f___closed__2;
x_196 = 0;
x_197 = l_Lean_Meta_Simp_rewriteCtorEq_x3f___closed__3;
x_198 = l_Lean_Meta_withLocalDecl___at___private_Lean_Meta_Tactic_Simp_SimpLemmas_0__Lean_Meta_isPerm___spec__1___rarg(x_195, x_196, x_1, x_197, x_168, x_3, x_4, x_5, x_177);
if (lean_obj_tag(x_198) == 0)
{
lean_object* x_199; lean_object* x_200; lean_object* x_201; lean_object* x_202; 
x_199 = lean_ctor_get(x_198, 0);
lean_inc(x_199);
x_200 = lean_ctor_get(x_198, 1);
lean_inc(x_200);
if (lean_is_exclusive(x_198)) {
 lean_ctor_release(x_198, 0);
 lean_ctor_release(x_198, 1);
 x_201 = x_198;
} else {
 lean_dec_ref(x_198);
 x_201 = lean_box(0);
}
if (lean_is_scalar(x_201)) {
 x_202 = lean_alloc_ctor(0, 2, 0);
} else {
 x_202 = x_201;
}
lean_ctor_set(x_202, 0, x_199);
lean_ctor_set(x_202, 1, x_200);
return x_202;
}
else
{
lean_object* x_203; lean_object* x_204; lean_object* x_205; lean_object* x_206; 
x_203 = lean_ctor_get(x_198, 0);
lean_inc(x_203);
x_204 = lean_ctor_get(x_198, 1);
lean_inc(x_204);
if (lean_is_exclusive(x_198)) {
 lean_ctor_release(x_198, 0);
 lean_ctor_release(x_198, 1);
 x_205 = x_198;
} else {
 lean_dec_ref(x_198);
 x_205 = lean_box(0);
}
if (lean_is_scalar(x_205)) {
 x_206 = lean_alloc_ctor(1, 2, 0);
} else {
 x_206 = x_205;
}
lean_ctor_set(x_206, 0, x_203);
lean_ctor_set(x_206, 1, x_204);
return x_206;
}
}
else
{
lean_object* x_207; lean_object* x_208; 
lean_dec(x_168);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
lean_dec(x_1);
x_207 = lean_box(0);
if (lean_is_scalar(x_178)) {
 x_208 = lean_alloc_ctor(0, 2, 0);
} else {
 x_208 = x_178;
}
lean_ctor_set(x_208, 0, x_207);
lean_ctor_set(x_208, 1, x_177);
return x_208;
}
}
}
}
else
{
lean_object* x_209; lean_object* x_210; lean_object* x_211; lean_object* x_212; 
lean_dec(x_170);
lean_dec(x_168);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
lean_dec(x_1);
x_209 = lean_ctor_get(x_172, 0);
lean_inc(x_209);
x_210 = lean_ctor_get(x_172, 1);
lean_inc(x_210);
if (lean_is_exclusive(x_172)) {
 lean_ctor_release(x_172, 0);
 lean_ctor_release(x_172, 1);
 x_211 = x_172;
} else {
 lean_dec_ref(x_172);
 x_211 = lean_box(0);
}
if (lean_is_scalar(x_211)) {
 x_212 = lean_alloc_ctor(1, 2, 0);
} else {
 x_212 = x_211;
}
lean_ctor_set(x_212, 0, x_209);
lean_ctor_set(x_212, 1, x_210);
return x_212;
}
}
else
{
lean_object* x_213; lean_object* x_214; lean_object* x_215; lean_object* x_216; 
lean_dec(x_168);
lean_dec(x_14);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
lean_dec(x_1);
x_213 = lean_ctor_get(x_169, 0);
lean_inc(x_213);
x_214 = lean_ctor_get(x_169, 1);
lean_inc(x_214);
if (lean_is_exclusive(x_169)) {
 lean_ctor_release(x_169, 0);
 lean_ctor_release(x_169, 1);
 x_215 = x_169;
} else {
 lean_dec_ref(x_169);
 x_215 = lean_box(0);
}
if (lean_is_scalar(x_215)) {
 x_216 = lean_alloc_ctor(1, 2, 0);
} else {
 x_216 = x_215;
}
lean_ctor_set(x_216, 0, x_213);
lean_ctor_set(x_216, 1, x_214);
return x_216;
}
}
}
}
}
lean_object* l_Lean_Meta_Simp_tryRewriteCtorEq_match__1___rarg(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
if (lean_obj_tag(x_1) == 0)
{
lean_object* x_4; lean_object* x_5; 
lean_dec(x_2);
x_4 = lean_box(0);
x_5 = lean_apply_1(x_3, x_4);
return x_5;
}
else
{
lean_object* x_6; lean_object* x_7; 
lean_dec(x_3);
x_6 = lean_ctor_get(x_1, 0);
lean_inc(x_6);
lean_dec(x_1);
x_7 = lean_apply_1(x_2, x_6);
return x_7;
}
}
}
lean_object* l_Lean_Meta_Simp_tryRewriteCtorEq_match__1(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = lean_alloc_closure((void*)(l_Lean_Meta_Simp_tryRewriteCtorEq_match__1___rarg), 3, 0);
return x_2;
}
}
lean_object* l_Lean_Meta_Simp_tryRewriteCtorEq(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9) {
_start:
{
lean_object* x_10; 
lean_inc(x_8);
lean_inc(x_7);
lean_inc(x_6);
lean_inc(x_5);
x_10 = l_Lean_Meta_Simp_rewriteCtorEq_x3f(x_1, x_5, x_6, x_7, x_8, x_9);
if (lean_obj_tag(x_10) == 0)
{
lean_object* x_11; 
x_11 = lean_ctor_get(x_10, 0);
lean_inc(x_11);
if (lean_obj_tag(x_11) == 0)
{
lean_object* x_12; lean_object* x_13; 
x_12 = lean_ctor_get(x_10, 1);
lean_inc(x_12);
lean_dec(x_10);
x_13 = lean_apply_7(x_2, x_3, x_4, x_5, x_6, x_7, x_8, x_12);
return x_13;
}
else
{
uint8_t x_14; 
lean_dec(x_8);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
lean_dec(x_2);
x_14 = !lean_is_exclusive(x_10);
if (x_14 == 0)
{
lean_object* x_15; lean_object* x_16; lean_object* x_17; 
x_15 = lean_ctor_get(x_10, 0);
lean_dec(x_15);
x_16 = lean_ctor_get(x_11, 0);
lean_inc(x_16);
lean_dec(x_11);
x_17 = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(x_17, 0, x_16);
lean_ctor_set(x_10, 0, x_17);
return x_10;
}
else
{
lean_object* x_18; lean_object* x_19; lean_object* x_20; lean_object* x_21; 
x_18 = lean_ctor_get(x_10, 1);
lean_inc(x_18);
lean_dec(x_10);
x_19 = lean_ctor_get(x_11, 0);
lean_inc(x_19);
lean_dec(x_11);
x_20 = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(x_20, 0, x_19);
x_21 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_21, 0, x_20);
lean_ctor_set(x_21, 1, x_18);
return x_21;
}
}
}
else
{
uint8_t x_22; 
lean_dec(x_8);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
lean_dec(x_2);
x_22 = !lean_is_exclusive(x_10);
if (x_22 == 0)
{
return x_10;
}
else
{
lean_object* x_23; lean_object* x_24; lean_object* x_25; 
x_23 = lean_ctor_get(x_10, 0);
x_24 = lean_ctor_get(x_10, 1);
lean_inc(x_24);
lean_inc(x_23);
lean_dec(x_10);
x_25 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_25, 0, x_23);
lean_ctor_set(x_25, 1, x_24);
return x_25;
}
}
}
}
static lean_object* _init_l_Lean_Meta_Simp_rewriteUsingDecide_x3f___closed__1() {
_start:
{
lean_object* x_1; lean_object* x_2; lean_object* x_3; 
x_1 = lean_box(0);
x_2 = l___private_Lean_MonadEnv_0__Lean_supportedRecursors___closed__5;
x_3 = l_Lean_mkConst(x_2, x_1);
return x_3;
}
}
static lean_object* _init_l_Lean_Meta_Simp_rewriteUsingDecide_x3f___closed__2() {
_start:
{
lean_object* x_1; 
x_1 = lean_mk_string("eqFalseOfDecide");
return x_1;
}
}
static lean_object* _init_l_Lean_Meta_Simp_rewriteUsingDecide_x3f___closed__3() {
_start:
{
lean_object* x_1; lean_object* x_2; lean_object* x_3; 
x_1 = lean_box(0);
x_2 = l_Lean_Meta_Simp_rewriteUsingDecide_x3f___closed__2;
x_3 = lean_name_mk_string(x_1, x_2);
return x_3;
}
}
static lean_object* _init_l_Lean_Meta_Simp_rewriteUsingDecide_x3f___closed__4() {
_start:
{
lean_object* x_1; lean_object* x_2; lean_object* x_3; 
x_1 = lean_box(0);
x_2 = l_Lean_Meta_Simp_rewriteUsingDecide_x3f___closed__3;
x_3 = l_Lean_mkConst(x_2, x_1);
return x_3;
}
}
static lean_object* _init_l_Lean_Meta_Simp_rewriteUsingDecide_x3f___closed__5() {
_start:
{
lean_object* x_1; lean_object* x_2; lean_object* x_3; 
x_1 = lean_box(0);
x_2 = l_Lean_Meta_Simp_rewrite_getRHS___closed__3;
x_3 = l_Lean_mkConst(x_2, x_1);
return x_3;
}
}
static lean_object* _init_l_Lean_Meta_Simp_rewriteUsingDecide_x3f___closed__6() {
_start:
{
lean_object* x_1; 
x_1 = lean_mk_string("eqTrueOfDecide");
return x_1;
}
}
static lean_object* _init_l_Lean_Meta_Simp_rewriteUsingDecide_x3f___closed__7() {
_start:
{
lean_object* x_1; lean_object* x_2; lean_object* x_3; 
x_1 = lean_box(0);
x_2 = l_Lean_Meta_Simp_rewriteUsingDecide_x3f___closed__6;
x_3 = lean_name_mk_string(x_1, x_2);
return x_3;
}
}
static lean_object* _init_l_Lean_Meta_Simp_rewriteUsingDecide_x3f___closed__8() {
_start:
{
lean_object* x_1; lean_object* x_2; lean_object* x_3; 
x_1 = lean_box(0);
x_2 = l_Lean_Meta_Simp_rewriteUsingDecide_x3f___closed__7;
x_3 = l_Lean_mkConst(x_2, x_1);
return x_3;
}
}
lean_object* l_Lean_Meta_Simp_rewriteUsingDecide_x3f(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6) {
_start:
{
uint8_t x_7; 
x_7 = l_Lean_Expr_hasFVar(x_1);
if (x_7 == 0)
{
uint8_t x_8; 
x_8 = l_Lean_Expr_hasMVar(x_1);
if (x_8 == 0)
{
uint8_t x_9; 
x_9 = !lean_is_exclusive(x_2);
if (x_9 == 0)
{
lean_object* x_10; uint8_t x_11; 
x_10 = lean_ctor_get(x_2, 0);
x_11 = !lean_is_exclusive(x_10);
if (x_11 == 0)
{
lean_object* x_12; lean_object* x_13; uint8_t x_14; uint8_t x_15; uint8_t x_16; uint8_t x_17; uint8_t x_18; uint8_t x_19; uint8_t x_20; uint8_t x_21; uint8_t x_22; lean_object* x_23; 
x_12 = lean_ctor_get(x_2, 1);
x_13 = lean_ctor_get(x_2, 2);
x_14 = lean_ctor_get_uint8(x_10, 0);
x_15 = lean_ctor_get_uint8(x_10, 1);
x_16 = lean_ctor_get_uint8(x_10, 2);
x_17 = lean_ctor_get_uint8(x_10, 3);
x_18 = lean_ctor_get_uint8(x_10, 4);
x_19 = lean_ctor_get_uint8(x_10, 6);
x_20 = lean_ctor_get_uint8(x_10, 7);
x_21 = lean_ctor_get_uint8(x_10, 8);
x_22 = 3;
lean_ctor_set_uint8(x_10, 5, x_22);
lean_inc(x_13);
lean_inc(x_12);
lean_inc(x_5);
lean_inc(x_4);
lean_inc(x_3);
lean_inc(x_2);
lean_inc(x_1);
x_23 = l_Lean_Meta_mkDecide(x_1, x_2, x_3, x_4, x_5, x_6);
if (lean_obj_tag(x_23) == 0)
{
lean_object* x_24; lean_object* x_25; uint8_t x_26; lean_object* x_27; lean_object* x_28; lean_object* x_29; 
x_24 = lean_ctor_get(x_23, 0);
lean_inc(x_24);
x_25 = lean_ctor_get(x_23, 1);
lean_inc(x_25);
lean_dec(x_23);
x_26 = 1;
x_27 = lean_alloc_ctor(0, 0, 9);
lean_ctor_set_uint8(x_27, 0, x_14);
lean_ctor_set_uint8(x_27, 1, x_15);
lean_ctor_set_uint8(x_27, 2, x_16);
lean_ctor_set_uint8(x_27, 3, x_17);
lean_ctor_set_uint8(x_27, 4, x_18);
lean_ctor_set_uint8(x_27, 5, x_26);
lean_ctor_set_uint8(x_27, 6, x_19);
lean_ctor_set_uint8(x_27, 7, x_20);
lean_ctor_set_uint8(x_27, 8, x_21);
x_28 = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(x_28, 0, x_27);
lean_ctor_set(x_28, 1, x_12);
lean_ctor_set(x_28, 2, x_13);
lean_inc(x_5);
lean_inc(x_4);
lean_inc(x_3);
lean_inc(x_24);
x_29 = l_Lean_Meta_whnf(x_24, x_28, x_3, x_4, x_5, x_25);
if (lean_obj_tag(x_29) == 0)
{
uint8_t x_30; 
x_30 = !lean_is_exclusive(x_29);
if (x_30 == 0)
{
lean_object* x_31; lean_object* x_32; lean_object* x_33; uint8_t x_34; 
x_31 = lean_ctor_get(x_29, 0);
x_32 = lean_ctor_get(x_29, 1);
x_33 = l_Lean_instQuoteBool___closed__5;
x_34 = l_Lean_Expr_isConstOf(x_31, x_33);
if (x_34 == 0)
{
lean_object* x_35; uint8_t x_36; 
x_35 = l_Lean_instQuoteBool___closed__3;
x_36 = l_Lean_Expr_isConstOf(x_31, x_35);
lean_dec(x_31);
if (x_36 == 0)
{
lean_object* x_37; 
lean_dec(x_24);
lean_dec(x_2);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
lean_dec(x_1);
x_37 = lean_box(0);
lean_ctor_set(x_29, 0, x_37);
return x_29;
}
else
{
lean_object* x_38; 
lean_free_object(x_29);
lean_inc(x_5);
lean_inc(x_4);
lean_inc(x_3);
lean_inc(x_2);
lean_inc(x_24);
x_38 = l_Lean_Meta_mkEqRefl(x_24, x_2, x_3, x_4, x_5, x_32);
if (lean_obj_tag(x_38) == 0)
{
lean_object* x_39; lean_object* x_40; lean_object* x_41; 
x_39 = lean_ctor_get(x_38, 1);
lean_inc(x_39);
lean_dec(x_38);
x_40 = l_Lean_instToExprBool___lambda__1___closed__1;
x_41 = l_Lean_Meta_mkEqRefl(x_40, x_2, x_3, x_4, x_5, x_39);
if (lean_obj_tag(x_41) == 0)
{
uint8_t x_42; 
x_42 = !lean_is_exclusive(x_41);
if (x_42 == 0)
{
lean_object* x_43; lean_object* x_44; lean_object* x_45; lean_object* x_46; lean_object* x_47; lean_object* x_48; lean_object* x_49; lean_object* x_50; lean_object* x_51; lean_object* x_52; lean_object* x_53; lean_object* x_54; 
x_43 = lean_ctor_get(x_41, 0);
x_44 = l_Lean_Expr_appArg_x21(x_24);
lean_dec(x_24);
x_45 = l_Lean_Syntax_mkAntiquotNode___closed__9;
x_46 = lean_array_push(x_45, x_1);
x_47 = lean_array_push(x_46, x_44);
x_48 = lean_array_push(x_47, x_43);
x_49 = l_Lean_Meta_Simp_rewriteUsingDecide_x3f___closed__4;
x_50 = l_Lean_mkAppN(x_49, x_48);
lean_dec(x_48);
x_51 = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(x_51, 0, x_50);
x_52 = l_Lean_Meta_Simp_rewriteUsingDecide_x3f___closed__1;
x_53 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_53, 0, x_52);
lean_ctor_set(x_53, 1, x_51);
x_54 = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(x_54, 0, x_53);
lean_ctor_set(x_41, 0, x_54);
return x_41;
}
else
{
lean_object* x_55; lean_object* x_56; lean_object* x_57; lean_object* x_58; lean_object* x_59; lean_object* x_60; lean_object* x_61; lean_object* x_62; lean_object* x_63; lean_object* x_64; lean_object* x_65; lean_object* x_66; lean_object* x_67; lean_object* x_68; 
x_55 = lean_ctor_get(x_41, 0);
x_56 = lean_ctor_get(x_41, 1);
lean_inc(x_56);
lean_inc(x_55);
lean_dec(x_41);
x_57 = l_Lean_Expr_appArg_x21(x_24);
lean_dec(x_24);
x_58 = l_Lean_Syntax_mkAntiquotNode___closed__9;
x_59 = lean_array_push(x_58, x_1);
x_60 = lean_array_push(x_59, x_57);
x_61 = lean_array_push(x_60, x_55);
x_62 = l_Lean_Meta_Simp_rewriteUsingDecide_x3f___closed__4;
x_63 = l_Lean_mkAppN(x_62, x_61);
lean_dec(x_61);
x_64 = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(x_64, 0, x_63);
x_65 = l_Lean_Meta_Simp_rewriteUsingDecide_x3f___closed__1;
x_66 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_66, 0, x_65);
lean_ctor_set(x_66, 1, x_64);
x_67 = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(x_67, 0, x_66);
x_68 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_68, 0, x_67);
lean_ctor_set(x_68, 1, x_56);
return x_68;
}
}
else
{
uint8_t x_69; 
lean_dec(x_24);
lean_dec(x_1);
x_69 = !lean_is_exclusive(x_41);
if (x_69 == 0)
{
lean_object* x_70; lean_object* x_71; 
x_70 = lean_ctor_get(x_41, 0);
lean_dec(x_70);
x_71 = lean_box(0);
lean_ctor_set_tag(x_41, 0);
lean_ctor_set(x_41, 0, x_71);
return x_41;
}
else
{
lean_object* x_72; lean_object* x_73; lean_object* x_74; 
x_72 = lean_ctor_get(x_41, 1);
lean_inc(x_72);
lean_dec(x_41);
x_73 = lean_box(0);
x_74 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_74, 0, x_73);
lean_ctor_set(x_74, 1, x_72);
return x_74;
}
}
}
else
{
uint8_t x_75; 
lean_dec(x_24);
lean_dec(x_2);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
lean_dec(x_1);
x_75 = !lean_is_exclusive(x_38);
if (x_75 == 0)
{
lean_object* x_76; lean_object* x_77; 
x_76 = lean_ctor_get(x_38, 0);
lean_dec(x_76);
x_77 = lean_box(0);
lean_ctor_set_tag(x_38, 0);
lean_ctor_set(x_38, 0, x_77);
return x_38;
}
else
{
lean_object* x_78; lean_object* x_79; lean_object* x_80; 
x_78 = lean_ctor_get(x_38, 1);
lean_inc(x_78);
lean_dec(x_38);
x_79 = lean_box(0);
x_80 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_80, 0, x_79);
lean_ctor_set(x_80, 1, x_78);
return x_80;
}
}
}
}
else
{
lean_object* x_81; lean_object* x_82; 
lean_free_object(x_29);
lean_dec(x_31);
x_81 = l_Lean_instToExprBool___lambda__1___closed__2;
x_82 = l_Lean_Meta_mkEqRefl(x_81, x_2, x_3, x_4, x_5, x_32);
if (lean_obj_tag(x_82) == 0)
{
uint8_t x_83; 
x_83 = !lean_is_exclusive(x_82);
if (x_83 == 0)
{
lean_object* x_84; lean_object* x_85; lean_object* x_86; lean_object* x_87; lean_object* x_88; lean_object* x_89; lean_object* x_90; lean_object* x_91; lean_object* x_92; lean_object* x_93; lean_object* x_94; lean_object* x_95; 
x_84 = lean_ctor_get(x_82, 0);
x_85 = l_Lean_Expr_appArg_x21(x_24);
lean_dec(x_24);
x_86 = l_Lean_Syntax_mkAntiquotNode___closed__9;
x_87 = lean_array_push(x_86, x_1);
x_88 = lean_array_push(x_87, x_85);
x_89 = lean_array_push(x_88, x_84);
x_90 = l_Lean_Meta_Simp_rewriteUsingDecide_x3f___closed__8;
x_91 = l_Lean_mkAppN(x_90, x_89);
lean_dec(x_89);
x_92 = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(x_92, 0, x_91);
x_93 = l_Lean_Meta_Simp_rewriteUsingDecide_x3f___closed__5;
x_94 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_94, 0, x_93);
lean_ctor_set(x_94, 1, x_92);
x_95 = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(x_95, 0, x_94);
lean_ctor_set(x_82, 0, x_95);
return x_82;
}
else
{
lean_object* x_96; lean_object* x_97; lean_object* x_98; lean_object* x_99; lean_object* x_100; lean_object* x_101; lean_object* x_102; lean_object* x_103; lean_object* x_104; lean_object* x_105; lean_object* x_106; lean_object* x_107; lean_object* x_108; lean_object* x_109; 
x_96 = lean_ctor_get(x_82, 0);
x_97 = lean_ctor_get(x_82, 1);
lean_inc(x_97);
lean_inc(x_96);
lean_dec(x_82);
x_98 = l_Lean_Expr_appArg_x21(x_24);
lean_dec(x_24);
x_99 = l_Lean_Syntax_mkAntiquotNode___closed__9;
x_100 = lean_array_push(x_99, x_1);
x_101 = lean_array_push(x_100, x_98);
x_102 = lean_array_push(x_101, x_96);
x_103 = l_Lean_Meta_Simp_rewriteUsingDecide_x3f___closed__8;
x_104 = l_Lean_mkAppN(x_103, x_102);
lean_dec(x_102);
x_105 = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(x_105, 0, x_104);
x_106 = l_Lean_Meta_Simp_rewriteUsingDecide_x3f___closed__5;
x_107 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_107, 0, x_106);
lean_ctor_set(x_107, 1, x_105);
x_108 = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(x_108, 0, x_107);
x_109 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_109, 0, x_108);
lean_ctor_set(x_109, 1, x_97);
return x_109;
}
}
else
{
uint8_t x_110; 
lean_dec(x_24);
lean_dec(x_1);
x_110 = !lean_is_exclusive(x_82);
if (x_110 == 0)
{
lean_object* x_111; lean_object* x_112; 
x_111 = lean_ctor_get(x_82, 0);
lean_dec(x_111);
x_112 = lean_box(0);
lean_ctor_set_tag(x_82, 0);
lean_ctor_set(x_82, 0, x_112);
return x_82;
}
else
{
lean_object* x_113; lean_object* x_114; lean_object* x_115; 
x_113 = lean_ctor_get(x_82, 1);
lean_inc(x_113);
lean_dec(x_82);
x_114 = lean_box(0);
x_115 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_115, 0, x_114);
lean_ctor_set(x_115, 1, x_113);
return x_115;
}
}
}
}
else
{
lean_object* x_116; lean_object* x_117; lean_object* x_118; uint8_t x_119; 
x_116 = lean_ctor_get(x_29, 0);
x_117 = lean_ctor_get(x_29, 1);
lean_inc(x_117);
lean_inc(x_116);
lean_dec(x_29);
x_118 = l_Lean_instQuoteBool___closed__5;
x_119 = l_Lean_Expr_isConstOf(x_116, x_118);
if (x_119 == 0)
{
lean_object* x_120; uint8_t x_121; 
x_120 = l_Lean_instQuoteBool___closed__3;
x_121 = l_Lean_Expr_isConstOf(x_116, x_120);
lean_dec(x_116);
if (x_121 == 0)
{
lean_object* x_122; lean_object* x_123; 
lean_dec(x_24);
lean_dec(x_2);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
lean_dec(x_1);
x_122 = lean_box(0);
x_123 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_123, 0, x_122);
lean_ctor_set(x_123, 1, x_117);
return x_123;
}
else
{
lean_object* x_124; 
lean_inc(x_5);
lean_inc(x_4);
lean_inc(x_3);
lean_inc(x_2);
lean_inc(x_24);
x_124 = l_Lean_Meta_mkEqRefl(x_24, x_2, x_3, x_4, x_5, x_117);
if (lean_obj_tag(x_124) == 0)
{
lean_object* x_125; lean_object* x_126; lean_object* x_127; 
x_125 = lean_ctor_get(x_124, 1);
lean_inc(x_125);
lean_dec(x_124);
x_126 = l_Lean_instToExprBool___lambda__1___closed__1;
x_127 = l_Lean_Meta_mkEqRefl(x_126, x_2, x_3, x_4, x_5, x_125);
if (lean_obj_tag(x_127) == 0)
{
lean_object* x_128; lean_object* x_129; lean_object* x_130; lean_object* x_131; lean_object* x_132; lean_object* x_133; lean_object* x_134; lean_object* x_135; lean_object* x_136; lean_object* x_137; lean_object* x_138; lean_object* x_139; lean_object* x_140; lean_object* x_141; lean_object* x_142; 
x_128 = lean_ctor_get(x_127, 0);
lean_inc(x_128);
x_129 = lean_ctor_get(x_127, 1);
lean_inc(x_129);
if (lean_is_exclusive(x_127)) {
 lean_ctor_release(x_127, 0);
 lean_ctor_release(x_127, 1);
 x_130 = x_127;
} else {
 lean_dec_ref(x_127);
 x_130 = lean_box(0);
}
x_131 = l_Lean_Expr_appArg_x21(x_24);
lean_dec(x_24);
x_132 = l_Lean_Syntax_mkAntiquotNode___closed__9;
x_133 = lean_array_push(x_132, x_1);
x_134 = lean_array_push(x_133, x_131);
x_135 = lean_array_push(x_134, x_128);
x_136 = l_Lean_Meta_Simp_rewriteUsingDecide_x3f___closed__4;
x_137 = l_Lean_mkAppN(x_136, x_135);
lean_dec(x_135);
x_138 = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(x_138, 0, x_137);
x_139 = l_Lean_Meta_Simp_rewriteUsingDecide_x3f___closed__1;
x_140 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_140, 0, x_139);
lean_ctor_set(x_140, 1, x_138);
x_141 = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(x_141, 0, x_140);
if (lean_is_scalar(x_130)) {
 x_142 = lean_alloc_ctor(0, 2, 0);
} else {
 x_142 = x_130;
}
lean_ctor_set(x_142, 0, x_141);
lean_ctor_set(x_142, 1, x_129);
return x_142;
}
else
{
lean_object* x_143; lean_object* x_144; lean_object* x_145; lean_object* x_146; 
lean_dec(x_24);
lean_dec(x_1);
x_143 = lean_ctor_get(x_127, 1);
lean_inc(x_143);
if (lean_is_exclusive(x_127)) {
 lean_ctor_release(x_127, 0);
 lean_ctor_release(x_127, 1);
 x_144 = x_127;
} else {
 lean_dec_ref(x_127);
 x_144 = lean_box(0);
}
x_145 = lean_box(0);
if (lean_is_scalar(x_144)) {
 x_146 = lean_alloc_ctor(0, 2, 0);
} else {
 x_146 = x_144;
 lean_ctor_set_tag(x_146, 0);
}
lean_ctor_set(x_146, 0, x_145);
lean_ctor_set(x_146, 1, x_143);
return x_146;
}
}
else
{
lean_object* x_147; lean_object* x_148; lean_object* x_149; lean_object* x_150; 
lean_dec(x_24);
lean_dec(x_2);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
lean_dec(x_1);
x_147 = lean_ctor_get(x_124, 1);
lean_inc(x_147);
if (lean_is_exclusive(x_124)) {
 lean_ctor_release(x_124, 0);
 lean_ctor_release(x_124, 1);
 x_148 = x_124;
} else {
 lean_dec_ref(x_124);
 x_148 = lean_box(0);
}
x_149 = lean_box(0);
if (lean_is_scalar(x_148)) {
 x_150 = lean_alloc_ctor(0, 2, 0);
} else {
 x_150 = x_148;
 lean_ctor_set_tag(x_150, 0);
}
lean_ctor_set(x_150, 0, x_149);
lean_ctor_set(x_150, 1, x_147);
return x_150;
}
}
}
else
{
lean_object* x_151; lean_object* x_152; 
lean_dec(x_116);
x_151 = l_Lean_instToExprBool___lambda__1___closed__2;
x_152 = l_Lean_Meta_mkEqRefl(x_151, x_2, x_3, x_4, x_5, x_117);
if (lean_obj_tag(x_152) == 0)
{
lean_object* x_153; lean_object* x_154; lean_object* x_155; lean_object* x_156; lean_object* x_157; lean_object* x_158; lean_object* x_159; lean_object* x_160; lean_object* x_161; lean_object* x_162; lean_object* x_163; lean_object* x_164; lean_object* x_165; lean_object* x_166; lean_object* x_167; 
x_153 = lean_ctor_get(x_152, 0);
lean_inc(x_153);
x_154 = lean_ctor_get(x_152, 1);
lean_inc(x_154);
if (lean_is_exclusive(x_152)) {
 lean_ctor_release(x_152, 0);
 lean_ctor_release(x_152, 1);
 x_155 = x_152;
} else {
 lean_dec_ref(x_152);
 x_155 = lean_box(0);
}
x_156 = l_Lean_Expr_appArg_x21(x_24);
lean_dec(x_24);
x_157 = l_Lean_Syntax_mkAntiquotNode___closed__9;
x_158 = lean_array_push(x_157, x_1);
x_159 = lean_array_push(x_158, x_156);
x_160 = lean_array_push(x_159, x_153);
x_161 = l_Lean_Meta_Simp_rewriteUsingDecide_x3f___closed__8;
x_162 = l_Lean_mkAppN(x_161, x_160);
lean_dec(x_160);
x_163 = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(x_163, 0, x_162);
x_164 = l_Lean_Meta_Simp_rewriteUsingDecide_x3f___closed__5;
x_165 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_165, 0, x_164);
lean_ctor_set(x_165, 1, x_163);
x_166 = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(x_166, 0, x_165);
if (lean_is_scalar(x_155)) {
 x_167 = lean_alloc_ctor(0, 2, 0);
} else {
 x_167 = x_155;
}
lean_ctor_set(x_167, 0, x_166);
lean_ctor_set(x_167, 1, x_154);
return x_167;
}
else
{
lean_object* x_168; lean_object* x_169; lean_object* x_170; lean_object* x_171; 
lean_dec(x_24);
lean_dec(x_1);
x_168 = lean_ctor_get(x_152, 1);
lean_inc(x_168);
if (lean_is_exclusive(x_152)) {
 lean_ctor_release(x_152, 0);
 lean_ctor_release(x_152, 1);
 x_169 = x_152;
} else {
 lean_dec_ref(x_152);
 x_169 = lean_box(0);
}
x_170 = lean_box(0);
if (lean_is_scalar(x_169)) {
 x_171 = lean_alloc_ctor(0, 2, 0);
} else {
 x_171 = x_169;
 lean_ctor_set_tag(x_171, 0);
}
lean_ctor_set(x_171, 0, x_170);
lean_ctor_set(x_171, 1, x_168);
return x_171;
}
}
}
}
else
{
uint8_t x_172; 
lean_dec(x_24);
lean_dec(x_2);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
lean_dec(x_1);
x_172 = !lean_is_exclusive(x_29);
if (x_172 == 0)
{
lean_object* x_173; lean_object* x_174; 
x_173 = lean_ctor_get(x_29, 0);
lean_dec(x_173);
x_174 = lean_box(0);
lean_ctor_set_tag(x_29, 0);
lean_ctor_set(x_29, 0, x_174);
return x_29;
}
else
{
lean_object* x_175; lean_object* x_176; lean_object* x_177; 
x_175 = lean_ctor_get(x_29, 1);
lean_inc(x_175);
lean_dec(x_29);
x_176 = lean_box(0);
x_177 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_177, 0, x_176);
lean_ctor_set(x_177, 1, x_175);
return x_177;
}
}
}
else
{
uint8_t x_178; 
lean_dec(x_2);
lean_dec(x_13);
lean_dec(x_12);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
lean_dec(x_1);
x_178 = !lean_is_exclusive(x_23);
if (x_178 == 0)
{
lean_object* x_179; lean_object* x_180; 
x_179 = lean_ctor_get(x_23, 0);
lean_dec(x_179);
x_180 = lean_box(0);
lean_ctor_set_tag(x_23, 0);
lean_ctor_set(x_23, 0, x_180);
return x_23;
}
else
{
lean_object* x_181; lean_object* x_182; lean_object* x_183; 
x_181 = lean_ctor_get(x_23, 1);
lean_inc(x_181);
lean_dec(x_23);
x_182 = lean_box(0);
x_183 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_183, 0, x_182);
lean_ctor_set(x_183, 1, x_181);
return x_183;
}
}
}
else
{
lean_object* x_184; lean_object* x_185; uint8_t x_186; uint8_t x_187; uint8_t x_188; uint8_t x_189; uint8_t x_190; uint8_t x_191; uint8_t x_192; uint8_t x_193; uint8_t x_194; lean_object* x_195; lean_object* x_196; 
x_184 = lean_ctor_get(x_2, 1);
x_185 = lean_ctor_get(x_2, 2);
x_186 = lean_ctor_get_uint8(x_10, 0);
x_187 = lean_ctor_get_uint8(x_10, 1);
x_188 = lean_ctor_get_uint8(x_10, 2);
x_189 = lean_ctor_get_uint8(x_10, 3);
x_190 = lean_ctor_get_uint8(x_10, 4);
x_191 = lean_ctor_get_uint8(x_10, 6);
x_192 = lean_ctor_get_uint8(x_10, 7);
x_193 = lean_ctor_get_uint8(x_10, 8);
lean_dec(x_10);
x_194 = 3;
x_195 = lean_alloc_ctor(0, 0, 9);
lean_ctor_set_uint8(x_195, 0, x_186);
lean_ctor_set_uint8(x_195, 1, x_187);
lean_ctor_set_uint8(x_195, 2, x_188);
lean_ctor_set_uint8(x_195, 3, x_189);
lean_ctor_set_uint8(x_195, 4, x_190);
lean_ctor_set_uint8(x_195, 5, x_194);
lean_ctor_set_uint8(x_195, 6, x_191);
lean_ctor_set_uint8(x_195, 7, x_192);
lean_ctor_set_uint8(x_195, 8, x_193);
lean_inc(x_185);
lean_inc(x_184);
lean_ctor_set(x_2, 0, x_195);
lean_inc(x_5);
lean_inc(x_4);
lean_inc(x_3);
lean_inc(x_2);
lean_inc(x_1);
x_196 = l_Lean_Meta_mkDecide(x_1, x_2, x_3, x_4, x_5, x_6);
if (lean_obj_tag(x_196) == 0)
{
lean_object* x_197; lean_object* x_198; uint8_t x_199; lean_object* x_200; lean_object* x_201; lean_object* x_202; 
x_197 = lean_ctor_get(x_196, 0);
lean_inc(x_197);
x_198 = lean_ctor_get(x_196, 1);
lean_inc(x_198);
lean_dec(x_196);
x_199 = 1;
x_200 = lean_alloc_ctor(0, 0, 9);
lean_ctor_set_uint8(x_200, 0, x_186);
lean_ctor_set_uint8(x_200, 1, x_187);
lean_ctor_set_uint8(x_200, 2, x_188);
lean_ctor_set_uint8(x_200, 3, x_189);
lean_ctor_set_uint8(x_200, 4, x_190);
lean_ctor_set_uint8(x_200, 5, x_199);
lean_ctor_set_uint8(x_200, 6, x_191);
lean_ctor_set_uint8(x_200, 7, x_192);
lean_ctor_set_uint8(x_200, 8, x_193);
x_201 = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(x_201, 0, x_200);
lean_ctor_set(x_201, 1, x_184);
lean_ctor_set(x_201, 2, x_185);
lean_inc(x_5);
lean_inc(x_4);
lean_inc(x_3);
lean_inc(x_197);
x_202 = l_Lean_Meta_whnf(x_197, x_201, x_3, x_4, x_5, x_198);
if (lean_obj_tag(x_202) == 0)
{
lean_object* x_203; lean_object* x_204; lean_object* x_205; lean_object* x_206; uint8_t x_207; 
x_203 = lean_ctor_get(x_202, 0);
lean_inc(x_203);
x_204 = lean_ctor_get(x_202, 1);
lean_inc(x_204);
if (lean_is_exclusive(x_202)) {
 lean_ctor_release(x_202, 0);
 lean_ctor_release(x_202, 1);
 x_205 = x_202;
} else {
 lean_dec_ref(x_202);
 x_205 = lean_box(0);
}
x_206 = l_Lean_instQuoteBool___closed__5;
x_207 = l_Lean_Expr_isConstOf(x_203, x_206);
if (x_207 == 0)
{
lean_object* x_208; uint8_t x_209; 
x_208 = l_Lean_instQuoteBool___closed__3;
x_209 = l_Lean_Expr_isConstOf(x_203, x_208);
lean_dec(x_203);
if (x_209 == 0)
{
lean_object* x_210; lean_object* x_211; 
lean_dec(x_197);
lean_dec(x_2);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
lean_dec(x_1);
x_210 = lean_box(0);
if (lean_is_scalar(x_205)) {
 x_211 = lean_alloc_ctor(0, 2, 0);
} else {
 x_211 = x_205;
}
lean_ctor_set(x_211, 0, x_210);
lean_ctor_set(x_211, 1, x_204);
return x_211;
}
else
{
lean_object* x_212; 
lean_dec(x_205);
lean_inc(x_5);
lean_inc(x_4);
lean_inc(x_3);
lean_inc(x_2);
lean_inc(x_197);
x_212 = l_Lean_Meta_mkEqRefl(x_197, x_2, x_3, x_4, x_5, x_204);
if (lean_obj_tag(x_212) == 0)
{
lean_object* x_213; lean_object* x_214; lean_object* x_215; 
x_213 = lean_ctor_get(x_212, 1);
lean_inc(x_213);
lean_dec(x_212);
x_214 = l_Lean_instToExprBool___lambda__1___closed__1;
x_215 = l_Lean_Meta_mkEqRefl(x_214, x_2, x_3, x_4, x_5, x_213);
if (lean_obj_tag(x_215) == 0)
{
lean_object* x_216; lean_object* x_217; lean_object* x_218; lean_object* x_219; lean_object* x_220; lean_object* x_221; lean_object* x_222; lean_object* x_223; lean_object* x_224; lean_object* x_225; lean_object* x_226; lean_object* x_227; lean_object* x_228; lean_object* x_229; lean_object* x_230; 
x_216 = lean_ctor_get(x_215, 0);
lean_inc(x_216);
x_217 = lean_ctor_get(x_215, 1);
lean_inc(x_217);
if (lean_is_exclusive(x_215)) {
 lean_ctor_release(x_215, 0);
 lean_ctor_release(x_215, 1);
 x_218 = x_215;
} else {
 lean_dec_ref(x_215);
 x_218 = lean_box(0);
}
x_219 = l_Lean_Expr_appArg_x21(x_197);
lean_dec(x_197);
x_220 = l_Lean_Syntax_mkAntiquotNode___closed__9;
x_221 = lean_array_push(x_220, x_1);
x_222 = lean_array_push(x_221, x_219);
x_223 = lean_array_push(x_222, x_216);
x_224 = l_Lean_Meta_Simp_rewriteUsingDecide_x3f___closed__4;
x_225 = l_Lean_mkAppN(x_224, x_223);
lean_dec(x_223);
x_226 = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(x_226, 0, x_225);
x_227 = l_Lean_Meta_Simp_rewriteUsingDecide_x3f___closed__1;
x_228 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_228, 0, x_227);
lean_ctor_set(x_228, 1, x_226);
x_229 = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(x_229, 0, x_228);
if (lean_is_scalar(x_218)) {
 x_230 = lean_alloc_ctor(0, 2, 0);
} else {
 x_230 = x_218;
}
lean_ctor_set(x_230, 0, x_229);
lean_ctor_set(x_230, 1, x_217);
return x_230;
}
else
{
lean_object* x_231; lean_object* x_232; lean_object* x_233; lean_object* x_234; 
lean_dec(x_197);
lean_dec(x_1);
x_231 = lean_ctor_get(x_215, 1);
lean_inc(x_231);
if (lean_is_exclusive(x_215)) {
 lean_ctor_release(x_215, 0);
 lean_ctor_release(x_215, 1);
 x_232 = x_215;
} else {
 lean_dec_ref(x_215);
 x_232 = lean_box(0);
}
x_233 = lean_box(0);
if (lean_is_scalar(x_232)) {
 x_234 = lean_alloc_ctor(0, 2, 0);
} else {
 x_234 = x_232;
 lean_ctor_set_tag(x_234, 0);
}
lean_ctor_set(x_234, 0, x_233);
lean_ctor_set(x_234, 1, x_231);
return x_234;
}
}
else
{
lean_object* x_235; lean_object* x_236; lean_object* x_237; lean_object* x_238; 
lean_dec(x_197);
lean_dec(x_2);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
lean_dec(x_1);
x_235 = lean_ctor_get(x_212, 1);
lean_inc(x_235);
if (lean_is_exclusive(x_212)) {
 lean_ctor_release(x_212, 0);
 lean_ctor_release(x_212, 1);
 x_236 = x_212;
} else {
 lean_dec_ref(x_212);
 x_236 = lean_box(0);
}
x_237 = lean_box(0);
if (lean_is_scalar(x_236)) {
 x_238 = lean_alloc_ctor(0, 2, 0);
} else {
 x_238 = x_236;
 lean_ctor_set_tag(x_238, 0);
}
lean_ctor_set(x_238, 0, x_237);
lean_ctor_set(x_238, 1, x_235);
return x_238;
}
}
}
else
{
lean_object* x_239; lean_object* x_240; 
lean_dec(x_205);
lean_dec(x_203);
x_239 = l_Lean_instToExprBool___lambda__1___closed__2;
x_240 = l_Lean_Meta_mkEqRefl(x_239, x_2, x_3, x_4, x_5, x_204);
if (lean_obj_tag(x_240) == 0)
{
lean_object* x_241; lean_object* x_242; lean_object* x_243; lean_object* x_244; lean_object* x_245; lean_object* x_246; lean_object* x_247; lean_object* x_248; lean_object* x_249; lean_object* x_250; lean_object* x_251; lean_object* x_252; lean_object* x_253; lean_object* x_254; lean_object* x_255; 
x_241 = lean_ctor_get(x_240, 0);
lean_inc(x_241);
x_242 = lean_ctor_get(x_240, 1);
lean_inc(x_242);
if (lean_is_exclusive(x_240)) {
 lean_ctor_release(x_240, 0);
 lean_ctor_release(x_240, 1);
 x_243 = x_240;
} else {
 lean_dec_ref(x_240);
 x_243 = lean_box(0);
}
x_244 = l_Lean_Expr_appArg_x21(x_197);
lean_dec(x_197);
x_245 = l_Lean_Syntax_mkAntiquotNode___closed__9;
x_246 = lean_array_push(x_245, x_1);
x_247 = lean_array_push(x_246, x_244);
x_248 = lean_array_push(x_247, x_241);
x_249 = l_Lean_Meta_Simp_rewriteUsingDecide_x3f___closed__8;
x_250 = l_Lean_mkAppN(x_249, x_248);
lean_dec(x_248);
x_251 = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(x_251, 0, x_250);
x_252 = l_Lean_Meta_Simp_rewriteUsingDecide_x3f___closed__5;
x_253 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_253, 0, x_252);
lean_ctor_set(x_253, 1, x_251);
x_254 = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(x_254, 0, x_253);
if (lean_is_scalar(x_243)) {
 x_255 = lean_alloc_ctor(0, 2, 0);
} else {
 x_255 = x_243;
}
lean_ctor_set(x_255, 0, x_254);
lean_ctor_set(x_255, 1, x_242);
return x_255;
}
else
{
lean_object* x_256; lean_object* x_257; lean_object* x_258; lean_object* x_259; 
lean_dec(x_197);
lean_dec(x_1);
x_256 = lean_ctor_get(x_240, 1);
lean_inc(x_256);
if (lean_is_exclusive(x_240)) {
 lean_ctor_release(x_240, 0);
 lean_ctor_release(x_240, 1);
 x_257 = x_240;
} else {
 lean_dec_ref(x_240);
 x_257 = lean_box(0);
}
x_258 = lean_box(0);
if (lean_is_scalar(x_257)) {
 x_259 = lean_alloc_ctor(0, 2, 0);
} else {
 x_259 = x_257;
 lean_ctor_set_tag(x_259, 0);
}
lean_ctor_set(x_259, 0, x_258);
lean_ctor_set(x_259, 1, x_256);
return x_259;
}
}
}
else
{
lean_object* x_260; lean_object* x_261; lean_object* x_262; lean_object* x_263; 
lean_dec(x_197);
lean_dec(x_2);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
lean_dec(x_1);
x_260 = lean_ctor_get(x_202, 1);
lean_inc(x_260);
if (lean_is_exclusive(x_202)) {
 lean_ctor_release(x_202, 0);
 lean_ctor_release(x_202, 1);
 x_261 = x_202;
} else {
 lean_dec_ref(x_202);
 x_261 = lean_box(0);
}
x_262 = lean_box(0);
if (lean_is_scalar(x_261)) {
 x_263 = lean_alloc_ctor(0, 2, 0);
} else {
 x_263 = x_261;
 lean_ctor_set_tag(x_263, 0);
}
lean_ctor_set(x_263, 0, x_262);
lean_ctor_set(x_263, 1, x_260);
return x_263;
}
}
else
{
lean_object* x_264; lean_object* x_265; lean_object* x_266; lean_object* x_267; 
lean_dec(x_2);
lean_dec(x_185);
lean_dec(x_184);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
lean_dec(x_1);
x_264 = lean_ctor_get(x_196, 1);
lean_inc(x_264);
if (lean_is_exclusive(x_196)) {
 lean_ctor_release(x_196, 0);
 lean_ctor_release(x_196, 1);
 x_265 = x_196;
} else {
 lean_dec_ref(x_196);
 x_265 = lean_box(0);
}
x_266 = lean_box(0);
if (lean_is_scalar(x_265)) {
 x_267 = lean_alloc_ctor(0, 2, 0);
} else {
 x_267 = x_265;
 lean_ctor_set_tag(x_267, 0);
}
lean_ctor_set(x_267, 0, x_266);
lean_ctor_set(x_267, 1, x_264);
return x_267;
}
}
}
else
{
lean_object* x_268; lean_object* x_269; lean_object* x_270; uint8_t x_271; uint8_t x_272; uint8_t x_273; uint8_t x_274; uint8_t x_275; uint8_t x_276; uint8_t x_277; uint8_t x_278; lean_object* x_279; uint8_t x_280; lean_object* x_281; lean_object* x_282; lean_object* x_283; 
x_268 = lean_ctor_get(x_2, 0);
x_269 = lean_ctor_get(x_2, 1);
x_270 = lean_ctor_get(x_2, 2);
lean_inc(x_270);
lean_inc(x_269);
lean_inc(x_268);
lean_dec(x_2);
x_271 = lean_ctor_get_uint8(x_268, 0);
x_272 = lean_ctor_get_uint8(x_268, 1);
x_273 = lean_ctor_get_uint8(x_268, 2);
x_274 = lean_ctor_get_uint8(x_268, 3);
x_275 = lean_ctor_get_uint8(x_268, 4);
x_276 = lean_ctor_get_uint8(x_268, 6);
x_277 = lean_ctor_get_uint8(x_268, 7);
x_278 = lean_ctor_get_uint8(x_268, 8);
if (lean_is_exclusive(x_268)) {
 x_279 = x_268;
} else {
 lean_dec_ref(x_268);
 x_279 = lean_box(0);
}
x_280 = 3;
if (lean_is_scalar(x_279)) {
 x_281 = lean_alloc_ctor(0, 0, 9);
} else {
 x_281 = x_279;
}
lean_ctor_set_uint8(x_281, 0, x_271);
lean_ctor_set_uint8(x_281, 1, x_272);
lean_ctor_set_uint8(x_281, 2, x_273);
lean_ctor_set_uint8(x_281, 3, x_274);
lean_ctor_set_uint8(x_281, 4, x_275);
lean_ctor_set_uint8(x_281, 5, x_280);
lean_ctor_set_uint8(x_281, 6, x_276);
lean_ctor_set_uint8(x_281, 7, x_277);
lean_ctor_set_uint8(x_281, 8, x_278);
lean_inc(x_270);
lean_inc(x_269);
x_282 = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(x_282, 0, x_281);
lean_ctor_set(x_282, 1, x_269);
lean_ctor_set(x_282, 2, x_270);
lean_inc(x_5);
lean_inc(x_4);
lean_inc(x_3);
lean_inc(x_282);
lean_inc(x_1);
x_283 = l_Lean_Meta_mkDecide(x_1, x_282, x_3, x_4, x_5, x_6);
if (lean_obj_tag(x_283) == 0)
{
lean_object* x_284; lean_object* x_285; uint8_t x_286; lean_object* x_287; lean_object* x_288; lean_object* x_289; 
x_284 = lean_ctor_get(x_283, 0);
lean_inc(x_284);
x_285 = lean_ctor_get(x_283, 1);
lean_inc(x_285);
lean_dec(x_283);
x_286 = 1;
x_287 = lean_alloc_ctor(0, 0, 9);
lean_ctor_set_uint8(x_287, 0, x_271);
lean_ctor_set_uint8(x_287, 1, x_272);
lean_ctor_set_uint8(x_287, 2, x_273);
lean_ctor_set_uint8(x_287, 3, x_274);
lean_ctor_set_uint8(x_287, 4, x_275);
lean_ctor_set_uint8(x_287, 5, x_286);
lean_ctor_set_uint8(x_287, 6, x_276);
lean_ctor_set_uint8(x_287, 7, x_277);
lean_ctor_set_uint8(x_287, 8, x_278);
x_288 = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(x_288, 0, x_287);
lean_ctor_set(x_288, 1, x_269);
lean_ctor_set(x_288, 2, x_270);
lean_inc(x_5);
lean_inc(x_4);
lean_inc(x_3);
lean_inc(x_284);
x_289 = l_Lean_Meta_whnf(x_284, x_288, x_3, x_4, x_5, x_285);
if (lean_obj_tag(x_289) == 0)
{
lean_object* x_290; lean_object* x_291; lean_object* x_292; lean_object* x_293; uint8_t x_294; 
x_290 = lean_ctor_get(x_289, 0);
lean_inc(x_290);
x_291 = lean_ctor_get(x_289, 1);
lean_inc(x_291);
if (lean_is_exclusive(x_289)) {
 lean_ctor_release(x_289, 0);
 lean_ctor_release(x_289, 1);
 x_292 = x_289;
} else {
 lean_dec_ref(x_289);
 x_292 = lean_box(0);
}
x_293 = l_Lean_instQuoteBool___closed__5;
x_294 = l_Lean_Expr_isConstOf(x_290, x_293);
if (x_294 == 0)
{
lean_object* x_295; uint8_t x_296; 
x_295 = l_Lean_instQuoteBool___closed__3;
x_296 = l_Lean_Expr_isConstOf(x_290, x_295);
lean_dec(x_290);
if (x_296 == 0)
{
lean_object* x_297; lean_object* x_298; 
lean_dec(x_284);
lean_dec(x_282);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
lean_dec(x_1);
x_297 = lean_box(0);
if (lean_is_scalar(x_292)) {
 x_298 = lean_alloc_ctor(0, 2, 0);
} else {
 x_298 = x_292;
}
lean_ctor_set(x_298, 0, x_297);
lean_ctor_set(x_298, 1, x_291);
return x_298;
}
else
{
lean_object* x_299; 
lean_dec(x_292);
lean_inc(x_5);
lean_inc(x_4);
lean_inc(x_3);
lean_inc(x_282);
lean_inc(x_284);
x_299 = l_Lean_Meta_mkEqRefl(x_284, x_282, x_3, x_4, x_5, x_291);
if (lean_obj_tag(x_299) == 0)
{
lean_object* x_300; lean_object* x_301; lean_object* x_302; 
x_300 = lean_ctor_get(x_299, 1);
lean_inc(x_300);
lean_dec(x_299);
x_301 = l_Lean_instToExprBool___lambda__1___closed__1;
x_302 = l_Lean_Meta_mkEqRefl(x_301, x_282, x_3, x_4, x_5, x_300);
if (lean_obj_tag(x_302) == 0)
{
lean_object* x_303; lean_object* x_304; lean_object* x_305; lean_object* x_306; lean_object* x_307; lean_object* x_308; lean_object* x_309; lean_object* x_310; lean_object* x_311; lean_object* x_312; lean_object* x_313; lean_object* x_314; lean_object* x_315; lean_object* x_316; lean_object* x_317; 
x_303 = lean_ctor_get(x_302, 0);
lean_inc(x_303);
x_304 = lean_ctor_get(x_302, 1);
lean_inc(x_304);
if (lean_is_exclusive(x_302)) {
 lean_ctor_release(x_302, 0);
 lean_ctor_release(x_302, 1);
 x_305 = x_302;
} else {
 lean_dec_ref(x_302);
 x_305 = lean_box(0);
}
x_306 = l_Lean_Expr_appArg_x21(x_284);
lean_dec(x_284);
x_307 = l_Lean_Syntax_mkAntiquotNode___closed__9;
x_308 = lean_array_push(x_307, x_1);
x_309 = lean_array_push(x_308, x_306);
x_310 = lean_array_push(x_309, x_303);
x_311 = l_Lean_Meta_Simp_rewriteUsingDecide_x3f___closed__4;
x_312 = l_Lean_mkAppN(x_311, x_310);
lean_dec(x_310);
x_313 = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(x_313, 0, x_312);
x_314 = l_Lean_Meta_Simp_rewriteUsingDecide_x3f___closed__1;
x_315 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_315, 0, x_314);
lean_ctor_set(x_315, 1, x_313);
x_316 = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(x_316, 0, x_315);
if (lean_is_scalar(x_305)) {
 x_317 = lean_alloc_ctor(0, 2, 0);
} else {
 x_317 = x_305;
}
lean_ctor_set(x_317, 0, x_316);
lean_ctor_set(x_317, 1, x_304);
return x_317;
}
else
{
lean_object* x_318; lean_object* x_319; lean_object* x_320; lean_object* x_321; 
lean_dec(x_284);
lean_dec(x_1);
x_318 = lean_ctor_get(x_302, 1);
lean_inc(x_318);
if (lean_is_exclusive(x_302)) {
 lean_ctor_release(x_302, 0);
 lean_ctor_release(x_302, 1);
 x_319 = x_302;
} else {
 lean_dec_ref(x_302);
 x_319 = lean_box(0);
}
x_320 = lean_box(0);
if (lean_is_scalar(x_319)) {
 x_321 = lean_alloc_ctor(0, 2, 0);
} else {
 x_321 = x_319;
 lean_ctor_set_tag(x_321, 0);
}
lean_ctor_set(x_321, 0, x_320);
lean_ctor_set(x_321, 1, x_318);
return x_321;
}
}
else
{
lean_object* x_322; lean_object* x_323; lean_object* x_324; lean_object* x_325; 
lean_dec(x_284);
lean_dec(x_282);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
lean_dec(x_1);
x_322 = lean_ctor_get(x_299, 1);
lean_inc(x_322);
if (lean_is_exclusive(x_299)) {
 lean_ctor_release(x_299, 0);
 lean_ctor_release(x_299, 1);
 x_323 = x_299;
} else {
 lean_dec_ref(x_299);
 x_323 = lean_box(0);
}
x_324 = lean_box(0);
if (lean_is_scalar(x_323)) {
 x_325 = lean_alloc_ctor(0, 2, 0);
} else {
 x_325 = x_323;
 lean_ctor_set_tag(x_325, 0);
}
lean_ctor_set(x_325, 0, x_324);
lean_ctor_set(x_325, 1, x_322);
return x_325;
}
}
}
else
{
lean_object* x_326; lean_object* x_327; 
lean_dec(x_292);
lean_dec(x_290);
x_326 = l_Lean_instToExprBool___lambda__1___closed__2;
x_327 = l_Lean_Meta_mkEqRefl(x_326, x_282, x_3, x_4, x_5, x_291);
if (lean_obj_tag(x_327) == 0)
{
lean_object* x_328; lean_object* x_329; lean_object* x_330; lean_object* x_331; lean_object* x_332; lean_object* x_333; lean_object* x_334; lean_object* x_335; lean_object* x_336; lean_object* x_337; lean_object* x_338; lean_object* x_339; lean_object* x_340; lean_object* x_341; lean_object* x_342; 
x_328 = lean_ctor_get(x_327, 0);
lean_inc(x_328);
x_329 = lean_ctor_get(x_327, 1);
lean_inc(x_329);
if (lean_is_exclusive(x_327)) {
 lean_ctor_release(x_327, 0);
 lean_ctor_release(x_327, 1);
 x_330 = x_327;
} else {
 lean_dec_ref(x_327);
 x_330 = lean_box(0);
}
x_331 = l_Lean_Expr_appArg_x21(x_284);
lean_dec(x_284);
x_332 = l_Lean_Syntax_mkAntiquotNode___closed__9;
x_333 = lean_array_push(x_332, x_1);
x_334 = lean_array_push(x_333, x_331);
x_335 = lean_array_push(x_334, x_328);
x_336 = l_Lean_Meta_Simp_rewriteUsingDecide_x3f___closed__8;
x_337 = l_Lean_mkAppN(x_336, x_335);
lean_dec(x_335);
x_338 = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(x_338, 0, x_337);
x_339 = l_Lean_Meta_Simp_rewriteUsingDecide_x3f___closed__5;
x_340 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_340, 0, x_339);
lean_ctor_set(x_340, 1, x_338);
x_341 = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(x_341, 0, x_340);
if (lean_is_scalar(x_330)) {
 x_342 = lean_alloc_ctor(0, 2, 0);
} else {
 x_342 = x_330;
}
lean_ctor_set(x_342, 0, x_341);
lean_ctor_set(x_342, 1, x_329);
return x_342;
}
else
{
lean_object* x_343; lean_object* x_344; lean_object* x_345; lean_object* x_346; 
lean_dec(x_284);
lean_dec(x_1);
x_343 = lean_ctor_get(x_327, 1);
lean_inc(x_343);
if (lean_is_exclusive(x_327)) {
 lean_ctor_release(x_327, 0);
 lean_ctor_release(x_327, 1);
 x_344 = x_327;
} else {
 lean_dec_ref(x_327);
 x_344 = lean_box(0);
}
x_345 = lean_box(0);
if (lean_is_scalar(x_344)) {
 x_346 = lean_alloc_ctor(0, 2, 0);
} else {
 x_346 = x_344;
 lean_ctor_set_tag(x_346, 0);
}
lean_ctor_set(x_346, 0, x_345);
lean_ctor_set(x_346, 1, x_343);
return x_346;
}
}
}
else
{
lean_object* x_347; lean_object* x_348; lean_object* x_349; lean_object* x_350; 
lean_dec(x_284);
lean_dec(x_282);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
lean_dec(x_1);
x_347 = lean_ctor_get(x_289, 1);
lean_inc(x_347);
if (lean_is_exclusive(x_289)) {
 lean_ctor_release(x_289, 0);
 lean_ctor_release(x_289, 1);
 x_348 = x_289;
} else {
 lean_dec_ref(x_289);
 x_348 = lean_box(0);
}
x_349 = lean_box(0);
if (lean_is_scalar(x_348)) {
 x_350 = lean_alloc_ctor(0, 2, 0);
} else {
 x_350 = x_348;
 lean_ctor_set_tag(x_350, 0);
}
lean_ctor_set(x_350, 0, x_349);
lean_ctor_set(x_350, 1, x_347);
return x_350;
}
}
else
{
lean_object* x_351; lean_object* x_352; lean_object* x_353; lean_object* x_354; 
lean_dec(x_282);
lean_dec(x_270);
lean_dec(x_269);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
lean_dec(x_1);
x_351 = lean_ctor_get(x_283, 1);
lean_inc(x_351);
if (lean_is_exclusive(x_283)) {
 lean_ctor_release(x_283, 0);
 lean_ctor_release(x_283, 1);
 x_352 = x_283;
} else {
 lean_dec_ref(x_283);
 x_352 = lean_box(0);
}
x_353 = lean_box(0);
if (lean_is_scalar(x_352)) {
 x_354 = lean_alloc_ctor(0, 2, 0);
} else {
 x_354 = x_352;
 lean_ctor_set_tag(x_354, 0);
}
lean_ctor_set(x_354, 0, x_353);
lean_ctor_set(x_354, 1, x_351);
return x_354;
}
}
}
else
{
lean_object* x_355; lean_object* x_356; 
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
lean_dec(x_2);
lean_dec(x_1);
x_355 = lean_box(0);
x_356 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_356, 0, x_355);
lean_ctor_set(x_356, 1, x_6);
return x_356;
}
}
else
{
lean_object* x_357; lean_object* x_358; 
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
lean_dec(x_2);
lean_dec(x_1);
x_357 = lean_box(0);
x_358 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_358, 0, x_357);
lean_ctor_set(x_358, 1, x_6);
return x_358;
}
}
}
lean_object* l_Lean_Meta_Simp_tryRewriteUsingDecide(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9) {
_start:
{
lean_object* x_10; uint8_t x_11; 
x_10 = lean_ctor_get(x_3, 0);
lean_inc(x_10);
x_11 = lean_ctor_get_uint8(x_10, sizeof(void*)*1 + 9);
lean_dec(x_10);
if (x_11 == 0)
{
lean_object* x_12; 
lean_dec(x_1);
x_12 = lean_apply_7(x_2, x_3, x_4, x_5, x_6, x_7, x_8, x_9);
return x_12;
}
else
{
lean_object* x_13; lean_object* x_14; 
lean_inc(x_8);
lean_inc(x_7);
lean_inc(x_6);
lean_inc(x_5);
x_13 = l_Lean_Meta_Simp_rewriteUsingDecide_x3f(x_1, x_5, x_6, x_7, x_8, x_9);
x_14 = lean_ctor_get(x_13, 0);
lean_inc(x_14);
if (lean_obj_tag(x_14) == 0)
{
lean_object* x_15; lean_object* x_16; 
x_15 = lean_ctor_get(x_13, 1);
lean_inc(x_15);
lean_dec(x_13);
x_16 = lean_apply_7(x_2, x_3, x_4, x_5, x_6, x_7, x_8, x_15);
return x_16;
}
else
{
uint8_t x_17; 
lean_dec(x_8);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
lean_dec(x_2);
x_17 = !lean_is_exclusive(x_13);
if (x_17 == 0)
{
lean_object* x_18; lean_object* x_19; lean_object* x_20; 
x_18 = lean_ctor_get(x_13, 0);
lean_dec(x_18);
x_19 = lean_ctor_get(x_14, 0);
lean_inc(x_19);
lean_dec(x_14);
x_20 = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(x_20, 0, x_19);
lean_ctor_set(x_13, 0, x_20);
return x_13;
}
else
{
lean_object* x_21; lean_object* x_22; lean_object* x_23; lean_object* x_24; 
x_21 = lean_ctor_get(x_13, 1);
lean_inc(x_21);
lean_dec(x_13);
x_22 = lean_ctor_get(x_14, 0);
lean_inc(x_22);
lean_dec(x_14);
x_23 = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(x_23, 0, x_22);
x_24 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_24, 0, x_23);
lean_ctor_set(x_24, 1, x_21);
return x_24;
}
}
}
}
}
static lean_object* _init_l_Lean_Meta_Simp_rewritePre___closed__1() {
_start:
{
lean_object* x_1; 
x_1 = lean_mk_string("pre");
return x_1;
}
}
lean_object* l_Lean_Meta_Simp_rewritePre(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9) {
_start:
{
lean_object* x_10; lean_object* x_11; lean_object* x_12; lean_object* x_13; 
x_10 = lean_ctor_get(x_3, 1);
lean_inc(x_10);
x_11 = lean_ctor_get(x_10, 0);
lean_inc(x_11);
lean_dec(x_10);
x_12 = l_Lean_Meta_Simp_rewritePre___closed__1;
x_13 = l_Lean_Meta_Simp_rewrite(x_1, x_11, x_2, x_12, x_3, x_4, x_5, x_6, x_7, x_8, x_9);
if (lean_obj_tag(x_13) == 0)
{
uint8_t x_14; 
x_14 = !lean_is_exclusive(x_13);
if (x_14 == 0)
{
lean_object* x_15; lean_object* x_16; 
x_15 = lean_ctor_get(x_13, 0);
x_16 = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(x_16, 0, x_15);
lean_ctor_set(x_13, 0, x_16);
return x_13;
}
else
{
lean_object* x_17; lean_object* x_18; lean_object* x_19; lean_object* x_20; 
x_17 = lean_ctor_get(x_13, 0);
x_18 = lean_ctor_get(x_13, 1);
lean_inc(x_18);
lean_inc(x_17);
lean_dec(x_13);
x_19 = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(x_19, 0, x_17);
x_20 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_20, 0, x_19);
lean_ctor_set(x_20, 1, x_18);
return x_20;
}
}
else
{
uint8_t x_21; 
x_21 = !lean_is_exclusive(x_13);
if (x_21 == 0)
{
return x_13;
}
else
{
lean_object* x_22; lean_object* x_23; lean_object* x_24; 
x_22 = lean_ctor_get(x_13, 0);
x_23 = lean_ctor_get(x_13, 1);
lean_inc(x_23);
lean_inc(x_22);
lean_dec(x_13);
x_24 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_24, 0, x_22);
lean_ctor_set(x_24, 1, x_23);
return x_24;
}
}
}
}
static lean_object* _init_l_Lean_Meta_Simp_rewritePost___closed__1() {
_start:
{
lean_object* x_1; 
x_1 = lean_mk_string("post");
return x_1;
}
}
lean_object* l_Lean_Meta_Simp_rewritePost(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9) {
_start:
{
lean_object* x_10; lean_object* x_11; lean_object* x_12; lean_object* x_13; 
x_10 = lean_ctor_get(x_3, 1);
lean_inc(x_10);
x_11 = lean_ctor_get(x_10, 1);
lean_inc(x_11);
lean_dec(x_10);
x_12 = l_Lean_Meta_Simp_rewritePost___closed__1;
x_13 = l_Lean_Meta_Simp_rewrite(x_1, x_11, x_2, x_12, x_3, x_4, x_5, x_6, x_7, x_8, x_9);
if (lean_obj_tag(x_13) == 0)
{
uint8_t x_14; 
x_14 = !lean_is_exclusive(x_13);
if (x_14 == 0)
{
lean_object* x_15; lean_object* x_16; 
x_15 = lean_ctor_get(x_13, 0);
x_16 = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(x_16, 0, x_15);
lean_ctor_set(x_13, 0, x_16);
return x_13;
}
else
{
lean_object* x_17; lean_object* x_18; lean_object* x_19; lean_object* x_20; 
x_17 = lean_ctor_get(x_13, 0);
x_18 = lean_ctor_get(x_13, 1);
lean_inc(x_18);
lean_inc(x_17);
lean_dec(x_13);
x_19 = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(x_19, 0, x_17);
x_20 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_20, 0, x_19);
lean_ctor_set(x_20, 1, x_18);
return x_20;
}
}
else
{
uint8_t x_21; 
x_21 = !lean_is_exclusive(x_13);
if (x_21 == 0)
{
return x_13;
}
else
{
lean_object* x_22; lean_object* x_23; lean_object* x_24; 
x_22 = lean_ctor_get(x_13, 0);
x_23 = lean_ctor_get(x_13, 1);
lean_inc(x_23);
lean_inc(x_22);
lean_dec(x_13);
x_24 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_24, 0, x_22);
lean_ctor_set(x_24, 1, x_23);
return x_24;
}
}
}
}
lean_object* l_Lean_Meta_Simp_preDefault(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9) {
_start:
{
lean_object* x_10; 
lean_inc(x_8);
lean_inc(x_7);
lean_inc(x_6);
lean_inc(x_5);
lean_inc(x_1);
x_10 = l_Lean_Meta_Simp_rewriteCtorEq_x3f(x_1, x_5, x_6, x_7, x_8, x_9);
if (lean_obj_tag(x_10) == 0)
{
lean_object* x_11; 
x_11 = lean_ctor_get(x_10, 0);
lean_inc(x_11);
if (lean_obj_tag(x_11) == 0)
{
lean_object* x_12; lean_object* x_13; 
x_12 = lean_ctor_get(x_10, 1);
lean_inc(x_12);
lean_dec(x_10);
x_13 = l_Lean_Meta_Simp_rewritePre(x_1, x_2, x_3, x_4, x_5, x_6, x_7, x_8, x_12);
return x_13;
}
else
{
uint8_t x_14; 
lean_dec(x_8);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
lean_dec(x_2);
lean_dec(x_1);
x_14 = !lean_is_exclusive(x_10);
if (x_14 == 0)
{
lean_object* x_15; lean_object* x_16; lean_object* x_17; 
x_15 = lean_ctor_get(x_10, 0);
lean_dec(x_15);
x_16 = lean_ctor_get(x_11, 0);
lean_inc(x_16);
lean_dec(x_11);
x_17 = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(x_17, 0, x_16);
lean_ctor_set(x_10, 0, x_17);
return x_10;
}
else
{
lean_object* x_18; lean_object* x_19; lean_object* x_20; lean_object* x_21; 
x_18 = lean_ctor_get(x_10, 1);
lean_inc(x_18);
lean_dec(x_10);
x_19 = lean_ctor_get(x_11, 0);
lean_inc(x_19);
lean_dec(x_11);
x_20 = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(x_20, 0, x_19);
x_21 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_21, 0, x_20);
lean_ctor_set(x_21, 1, x_18);
return x_21;
}
}
}
else
{
uint8_t x_22; 
lean_dec(x_8);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
lean_dec(x_2);
lean_dec(x_1);
x_22 = !lean_is_exclusive(x_10);
if (x_22 == 0)
{
return x_10;
}
else
{
lean_object* x_23; lean_object* x_24; lean_object* x_25; 
x_23 = lean_ctor_get(x_10, 0);
x_24 = lean_ctor_get(x_10, 1);
lean_inc(x_24);
lean_inc(x_23);
lean_dec(x_10);
x_25 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_25, 0, x_23);
lean_ctor_set(x_25, 1, x_24);
return x_25;
}
}
}
}
lean_object* l_Lean_Meta_Simp_postDefault(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9) {
_start:
{
lean_object* x_10; 
lean_inc(x_8);
lean_inc(x_7);
lean_inc(x_6);
lean_inc(x_5);
lean_inc(x_1);
x_10 = l_Lean_Meta_Simp_rewriteCtorEq_x3f(x_1, x_5, x_6, x_7, x_8, x_9);
if (lean_obj_tag(x_10) == 0)
{
lean_object* x_11; 
x_11 = lean_ctor_get(x_10, 0);
lean_inc(x_11);
if (lean_obj_tag(x_11) == 0)
{
lean_object* x_12; uint8_t x_13; 
x_12 = lean_ctor_get(x_3, 0);
lean_inc(x_12);
x_13 = lean_ctor_get_uint8(x_12, sizeof(void*)*1 + 9);
lean_dec(x_12);
if (x_13 == 0)
{
lean_object* x_14; lean_object* x_15; 
x_14 = lean_ctor_get(x_10, 1);
lean_inc(x_14);
lean_dec(x_10);
x_15 = l_Lean_Meta_Simp_rewritePost(x_1, x_2, x_3, x_4, x_5, x_6, x_7, x_8, x_14);
return x_15;
}
else
{
lean_object* x_16; lean_object* x_17; lean_object* x_18; 
x_16 = lean_ctor_get(x_10, 1);
lean_inc(x_16);
lean_dec(x_10);
lean_inc(x_8);
lean_inc(x_7);
lean_inc(x_6);
lean_inc(x_5);
lean_inc(x_1);
x_17 = l_Lean_Meta_Simp_rewriteUsingDecide_x3f(x_1, x_5, x_6, x_7, x_8, x_16);
x_18 = lean_ctor_get(x_17, 0);
lean_inc(x_18);
if (lean_obj_tag(x_18) == 0)
{
lean_object* x_19; lean_object* x_20; 
x_19 = lean_ctor_get(x_17, 1);
lean_inc(x_19);
lean_dec(x_17);
x_20 = l_Lean_Meta_Simp_rewritePost(x_1, x_2, x_3, x_4, x_5, x_6, x_7, x_8, x_19);
return x_20;
}
else
{
uint8_t x_21; 
lean_dec(x_8);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
lean_dec(x_2);
lean_dec(x_1);
x_21 = !lean_is_exclusive(x_17);
if (x_21 == 0)
{
lean_object* x_22; lean_object* x_23; lean_object* x_24; 
x_22 = lean_ctor_get(x_17, 0);
lean_dec(x_22);
x_23 = lean_ctor_get(x_18, 0);
lean_inc(x_23);
lean_dec(x_18);
x_24 = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(x_24, 0, x_23);
lean_ctor_set(x_17, 0, x_24);
return x_17;
}
else
{
lean_object* x_25; lean_object* x_26; lean_object* x_27; lean_object* x_28; 
x_25 = lean_ctor_get(x_17, 1);
lean_inc(x_25);
lean_dec(x_17);
x_26 = lean_ctor_get(x_18, 0);
lean_inc(x_26);
lean_dec(x_18);
x_27 = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(x_27, 0, x_26);
x_28 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_28, 0, x_27);
lean_ctor_set(x_28, 1, x_25);
return x_28;
}
}
}
}
else
{
uint8_t x_29; 
lean_dec(x_8);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
lean_dec(x_2);
lean_dec(x_1);
x_29 = !lean_is_exclusive(x_10);
if (x_29 == 0)
{
lean_object* x_30; lean_object* x_31; lean_object* x_32; 
x_30 = lean_ctor_get(x_10, 0);
lean_dec(x_30);
x_31 = lean_ctor_get(x_11, 0);
lean_inc(x_31);
lean_dec(x_11);
x_32 = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(x_32, 0, x_31);
lean_ctor_set(x_10, 0, x_32);
return x_10;
}
else
{
lean_object* x_33; lean_object* x_34; lean_object* x_35; lean_object* x_36; 
x_33 = lean_ctor_get(x_10, 1);
lean_inc(x_33);
lean_dec(x_10);
x_34 = lean_ctor_get(x_11, 0);
lean_inc(x_34);
lean_dec(x_11);
x_35 = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(x_35, 0, x_34);
x_36 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_36, 0, x_35);
lean_ctor_set(x_36, 1, x_33);
return x_36;
}
}
}
else
{
uint8_t x_37; 
lean_dec(x_8);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
lean_dec(x_2);
lean_dec(x_1);
x_37 = !lean_is_exclusive(x_10);
if (x_37 == 0)
{
return x_10;
}
else
{
lean_object* x_38; lean_object* x_39; lean_object* x_40; 
x_38 = lean_ctor_get(x_10, 0);
x_39 = lean_ctor_get(x_10, 1);
lean_inc(x_39);
lean_inc(x_38);
lean_dec(x_10);
x_40 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_40, 0, x_38);
lean_ctor_set(x_40, 1, x_39);
return x_40;
}
}
}
}
lean_object* initialize_Init(lean_object*);
lean_object* initialize_Lean_Meta_SynthInstance(lean_object*);
lean_object* initialize_Lean_Meta_Tactic_Simp_Types(lean_object*);
static bool _G_initialized = false;
lean_object* initialize_Lean_Meta_Tactic_Simp_Rewrite(lean_object* w) {
lean_object * res;
if (_G_initialized) return lean_io_result_mk_ok(lean_box(0));
_G_initialized = true;
res = initialize_Init(lean_io_mk_world());
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Lean_Meta_SynthInstance(lean_io_mk_world());
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Lean_Meta_Tactic_Simp_Types(lean_io_mk_world());
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
l_Array_forInUnsafe_loop___at_Lean_Meta_Simp_synthesizeArgs___spec__3___closed__1 = _init_l_Array_forInUnsafe_loop___at_Lean_Meta_Simp_synthesizeArgs___spec__3___closed__1();
lean_mark_persistent(l_Array_forInUnsafe_loop___at_Lean_Meta_Simp_synthesizeArgs___spec__3___closed__1);
l_Array_forInUnsafe_loop___at_Lean_Meta_Simp_synthesizeArgs___spec__3___closed__2 = _init_l_Array_forInUnsafe_loop___at_Lean_Meta_Simp_synthesizeArgs___spec__3___closed__2();
lean_mark_persistent(l_Array_forInUnsafe_loop___at_Lean_Meta_Simp_synthesizeArgs___spec__3___closed__2);
l_Array_forInUnsafe_loop___at_Lean_Meta_Simp_synthesizeArgs___spec__3___closed__3 = _init_l_Array_forInUnsafe_loop___at_Lean_Meta_Simp_synthesizeArgs___spec__3___closed__3();
lean_mark_persistent(l_Array_forInUnsafe_loop___at_Lean_Meta_Simp_synthesizeArgs___spec__3___closed__3);
l_Array_forInUnsafe_loop___at_Lean_Meta_Simp_synthesizeArgs___spec__3___closed__4 = _init_l_Array_forInUnsafe_loop___at_Lean_Meta_Simp_synthesizeArgs___spec__3___closed__4();
lean_mark_persistent(l_Array_forInUnsafe_loop___at_Lean_Meta_Simp_synthesizeArgs___spec__3___closed__4);
l_Array_forInUnsafe_loop___at_Lean_Meta_Simp_synthesizeArgs___spec__3___closed__5 = _init_l_Array_forInUnsafe_loop___at_Lean_Meta_Simp_synthesizeArgs___spec__3___closed__5();
lean_mark_persistent(l_Array_forInUnsafe_loop___at_Lean_Meta_Simp_synthesizeArgs___spec__3___closed__5);
l_Array_forInUnsafe_loop___at_Lean_Meta_Simp_synthesizeArgs___spec__3___closed__6 = _init_l_Array_forInUnsafe_loop___at_Lean_Meta_Simp_synthesizeArgs___spec__3___closed__6();
lean_mark_persistent(l_Array_forInUnsafe_loop___at_Lean_Meta_Simp_synthesizeArgs___spec__3___closed__6);
l_Array_forInUnsafe_loop___at_Lean_Meta_Simp_synthesizeArgs___spec__3___closed__7 = _init_l_Array_forInUnsafe_loop___at_Lean_Meta_Simp_synthesizeArgs___spec__3___closed__7();
lean_mark_persistent(l_Array_forInUnsafe_loop___at_Lean_Meta_Simp_synthesizeArgs___spec__3___closed__7);
l_Array_forInUnsafe_loop___at_Lean_Meta_Simp_synthesizeArgs___spec__3___closed__8 = _init_l_Array_forInUnsafe_loop___at_Lean_Meta_Simp_synthesizeArgs___spec__3___closed__8();
lean_mark_persistent(l_Array_forInUnsafe_loop___at_Lean_Meta_Simp_synthesizeArgs___spec__3___closed__8);
l_Array_forInUnsafe_loop___at_Lean_Meta_Simp_synthesizeArgs___spec__3___closed__9 = _init_l_Array_forInUnsafe_loop___at_Lean_Meta_Simp_synthesizeArgs___spec__3___closed__9();
lean_mark_persistent(l_Array_forInUnsafe_loop___at_Lean_Meta_Simp_synthesizeArgs___spec__3___closed__9);
l_Array_forInUnsafe_loop___at_Lean_Meta_Simp_synthesizeArgs___spec__3___closed__10 = _init_l_Array_forInUnsafe_loop___at_Lean_Meta_Simp_synthesizeArgs___spec__3___closed__10();
lean_mark_persistent(l_Array_forInUnsafe_loop___at_Lean_Meta_Simp_synthesizeArgs___spec__3___closed__10);
l_Array_forInUnsafe_loop___at_Lean_Meta_Simp_synthesizeArgs___spec__3___closed__11 = _init_l_Array_forInUnsafe_loop___at_Lean_Meta_Simp_synthesizeArgs___spec__3___closed__11();
lean_mark_persistent(l_Array_forInUnsafe_loop___at_Lean_Meta_Simp_synthesizeArgs___spec__3___closed__11);
l_Array_forInUnsafe_loop___at_Lean_Meta_Simp_synthesizeArgs___spec__3___closed__12 = _init_l_Array_forInUnsafe_loop___at_Lean_Meta_Simp_synthesizeArgs___spec__3___closed__12();
lean_mark_persistent(l_Array_forInUnsafe_loop___at_Lean_Meta_Simp_synthesizeArgs___spec__3___closed__12);
l_Lean_Meta_Simp_synthesizeArgs___closed__1 = _init_l_Lean_Meta_Simp_synthesizeArgs___closed__1();
lean_mark_persistent(l_Lean_Meta_Simp_synthesizeArgs___closed__1);
l_Lean_Meta_Simp_rewrite_getRHS___closed__1 = _init_l_Lean_Meta_Simp_rewrite_getRHS___closed__1();
lean_mark_persistent(l_Lean_Meta_Simp_rewrite_getRHS___closed__1);
l_Lean_Meta_Simp_rewrite_getRHS___closed__2 = _init_l_Lean_Meta_Simp_rewrite_getRHS___closed__2();
lean_mark_persistent(l_Lean_Meta_Simp_rewrite_getRHS___closed__2);
l_Lean_Meta_Simp_rewrite_getRHS___closed__3 = _init_l_Lean_Meta_Simp_rewrite_getRHS___closed__3();
lean_mark_persistent(l_Lean_Meta_Simp_rewrite_getRHS___closed__3);
l_Lean_Meta_Simp_rewrite_getRHS___closed__4 = _init_l_Lean_Meta_Simp_rewrite_getRHS___closed__4();
lean_mark_persistent(l_Lean_Meta_Simp_rewrite_getRHS___closed__4);
l_ReaderT_bind___at_Lean_Meta_Simp_rewrite_tryLemma_x3f___spec__1___at_Lean_Meta_Simp_rewrite_tryLemma_x3f___spec__2___lambda__1___closed__1 = _init_l_ReaderT_bind___at_Lean_Meta_Simp_rewrite_tryLemma_x3f___spec__1___at_Lean_Meta_Simp_rewrite_tryLemma_x3f___spec__2___lambda__1___closed__1();
lean_mark_persistent(l_ReaderT_bind___at_Lean_Meta_Simp_rewrite_tryLemma_x3f___spec__1___at_Lean_Meta_Simp_rewrite_tryLemma_x3f___spec__2___lambda__1___closed__1);
l_ReaderT_bind___at_Lean_Meta_Simp_rewrite_tryLemma_x3f___spec__1___at_Lean_Meta_Simp_rewrite_tryLemma_x3f___spec__2___lambda__2___closed__1 = _init_l_ReaderT_bind___at_Lean_Meta_Simp_rewrite_tryLemma_x3f___spec__1___at_Lean_Meta_Simp_rewrite_tryLemma_x3f___spec__2___lambda__2___closed__1();
lean_mark_persistent(l_ReaderT_bind___at_Lean_Meta_Simp_rewrite_tryLemma_x3f___spec__1___at_Lean_Meta_Simp_rewrite_tryLemma_x3f___spec__2___lambda__2___closed__1);
l_ReaderT_bind___at_Lean_Meta_Simp_rewrite_tryLemma_x3f___spec__1___at_Lean_Meta_Simp_rewrite_tryLemma_x3f___spec__2___lambda__2___closed__2 = _init_l_ReaderT_bind___at_Lean_Meta_Simp_rewrite_tryLemma_x3f___spec__1___at_Lean_Meta_Simp_rewrite_tryLemma_x3f___spec__2___lambda__2___closed__2();
lean_mark_persistent(l_ReaderT_bind___at_Lean_Meta_Simp_rewrite_tryLemma_x3f___spec__1___at_Lean_Meta_Simp_rewrite_tryLemma_x3f___spec__2___lambda__2___closed__2);
l_ReaderT_bind___at_Lean_Meta_Simp_rewrite_tryLemma_x3f___spec__1___at_Lean_Meta_Simp_rewrite_tryLemma_x3f___spec__2___lambda__2___closed__3 = _init_l_ReaderT_bind___at_Lean_Meta_Simp_rewrite_tryLemma_x3f___spec__1___at_Lean_Meta_Simp_rewrite_tryLemma_x3f___spec__2___lambda__2___closed__3();
lean_mark_persistent(l_ReaderT_bind___at_Lean_Meta_Simp_rewrite_tryLemma_x3f___spec__1___at_Lean_Meta_Simp_rewrite_tryLemma_x3f___spec__2___lambda__2___closed__3);
l_ReaderT_bind___at_Lean_Meta_Simp_rewrite_tryLemma_x3f___spec__1___at_Lean_Meta_Simp_rewrite_tryLemma_x3f___spec__2___lambda__2___closed__4 = _init_l_ReaderT_bind___at_Lean_Meta_Simp_rewrite_tryLemma_x3f___spec__1___at_Lean_Meta_Simp_rewrite_tryLemma_x3f___spec__2___lambda__2___closed__4();
lean_mark_persistent(l_ReaderT_bind___at_Lean_Meta_Simp_rewrite_tryLemma_x3f___spec__1___at_Lean_Meta_Simp_rewrite_tryLemma_x3f___spec__2___lambda__2___closed__4);
l_ReaderT_bind___at_Lean_Meta_Simp_rewrite_tryLemma_x3f___spec__1___at_Lean_Meta_Simp_rewrite_tryLemma_x3f___spec__2___closed__1 = _init_l_ReaderT_bind___at_Lean_Meta_Simp_rewrite_tryLemma_x3f___spec__1___at_Lean_Meta_Simp_rewrite_tryLemma_x3f___spec__2___closed__1();
lean_mark_persistent(l_ReaderT_bind___at_Lean_Meta_Simp_rewrite_tryLemma_x3f___spec__1___at_Lean_Meta_Simp_rewrite_tryLemma_x3f___spec__2___closed__1);
l_ReaderT_bind___at_Lean_Meta_Simp_rewrite_tryLemma_x3f___spec__1___at_Lean_Meta_Simp_rewrite_tryLemma_x3f___spec__2___closed__2 = _init_l_ReaderT_bind___at_Lean_Meta_Simp_rewrite_tryLemma_x3f___spec__1___at_Lean_Meta_Simp_rewrite_tryLemma_x3f___spec__2___closed__2();
lean_mark_persistent(l_ReaderT_bind___at_Lean_Meta_Simp_rewrite_tryLemma_x3f___spec__1___at_Lean_Meta_Simp_rewrite_tryLemma_x3f___spec__2___closed__2);
l_ReaderT_bind___at_Lean_Meta_Simp_rewrite_tryLemma_x3f___spec__1___at_Lean_Meta_Simp_rewrite_tryLemma_x3f___spec__2___closed__3 = _init_l_ReaderT_bind___at_Lean_Meta_Simp_rewrite_tryLemma_x3f___spec__1___at_Lean_Meta_Simp_rewrite_tryLemma_x3f___spec__2___closed__3();
lean_mark_persistent(l_ReaderT_bind___at_Lean_Meta_Simp_rewrite_tryLemma_x3f___spec__1___at_Lean_Meta_Simp_rewrite_tryLemma_x3f___spec__2___closed__3);
l_Lean_Meta_Simp_rewrite___closed__1 = _init_l_Lean_Meta_Simp_rewrite___closed__1();
lean_mark_persistent(l_Lean_Meta_Simp_rewrite___closed__1);
l_Lean_Meta_Simp_rewrite___closed__2 = _init_l_Lean_Meta_Simp_rewrite___closed__2();
lean_mark_persistent(l_Lean_Meta_Simp_rewrite___closed__2);
l_Lean_Meta_Simp_rewrite___closed__3 = _init_l_Lean_Meta_Simp_rewrite___closed__3();
lean_mark_persistent(l_Lean_Meta_Simp_rewrite___closed__3);
l_Lean_Meta_Simp_rewrite___closed__4 = _init_l_Lean_Meta_Simp_rewrite___closed__4();
lean_mark_persistent(l_Lean_Meta_Simp_rewrite___closed__4);
l_Lean_Meta_Simp_rewriteCtorEq_x3f___closed__1 = _init_l_Lean_Meta_Simp_rewriteCtorEq_x3f___closed__1();
lean_mark_persistent(l_Lean_Meta_Simp_rewriteCtorEq_x3f___closed__1);
l_Lean_Meta_Simp_rewriteCtorEq_x3f___closed__2 = _init_l_Lean_Meta_Simp_rewriteCtorEq_x3f___closed__2();
lean_mark_persistent(l_Lean_Meta_Simp_rewriteCtorEq_x3f___closed__2);
l_Lean_Meta_Simp_rewriteCtorEq_x3f___closed__3 = _init_l_Lean_Meta_Simp_rewriteCtorEq_x3f___closed__3();
lean_mark_persistent(l_Lean_Meta_Simp_rewriteCtorEq_x3f___closed__3);
l_Lean_Meta_Simp_rewriteUsingDecide_x3f___closed__1 = _init_l_Lean_Meta_Simp_rewriteUsingDecide_x3f___closed__1();
lean_mark_persistent(l_Lean_Meta_Simp_rewriteUsingDecide_x3f___closed__1);
l_Lean_Meta_Simp_rewriteUsingDecide_x3f___closed__2 = _init_l_Lean_Meta_Simp_rewriteUsingDecide_x3f___closed__2();
lean_mark_persistent(l_Lean_Meta_Simp_rewriteUsingDecide_x3f___closed__2);
l_Lean_Meta_Simp_rewriteUsingDecide_x3f___closed__3 = _init_l_Lean_Meta_Simp_rewriteUsingDecide_x3f___closed__3();
lean_mark_persistent(l_Lean_Meta_Simp_rewriteUsingDecide_x3f___closed__3);
l_Lean_Meta_Simp_rewriteUsingDecide_x3f___closed__4 = _init_l_Lean_Meta_Simp_rewriteUsingDecide_x3f___closed__4();
lean_mark_persistent(l_Lean_Meta_Simp_rewriteUsingDecide_x3f___closed__4);
l_Lean_Meta_Simp_rewriteUsingDecide_x3f___closed__5 = _init_l_Lean_Meta_Simp_rewriteUsingDecide_x3f___closed__5();
lean_mark_persistent(l_Lean_Meta_Simp_rewriteUsingDecide_x3f___closed__5);
l_Lean_Meta_Simp_rewriteUsingDecide_x3f___closed__6 = _init_l_Lean_Meta_Simp_rewriteUsingDecide_x3f___closed__6();
lean_mark_persistent(l_Lean_Meta_Simp_rewriteUsingDecide_x3f___closed__6);
l_Lean_Meta_Simp_rewriteUsingDecide_x3f___closed__7 = _init_l_Lean_Meta_Simp_rewriteUsingDecide_x3f___closed__7();
lean_mark_persistent(l_Lean_Meta_Simp_rewriteUsingDecide_x3f___closed__7);
l_Lean_Meta_Simp_rewriteUsingDecide_x3f___closed__8 = _init_l_Lean_Meta_Simp_rewriteUsingDecide_x3f___closed__8();
lean_mark_persistent(l_Lean_Meta_Simp_rewriteUsingDecide_x3f___closed__8);
l_Lean_Meta_Simp_rewritePre___closed__1 = _init_l_Lean_Meta_Simp_rewritePre___closed__1();
lean_mark_persistent(l_Lean_Meta_Simp_rewritePre___closed__1);
l_Lean_Meta_Simp_rewritePost___closed__1 = _init_l_Lean_Meta_Simp_rewritePost___closed__1();
lean_mark_persistent(l_Lean_Meta_Simp_rewritePost___closed__1);
return lean_io_result_mk_ok(lean_box(0));
}
#ifdef __cplusplus
}
#endif
