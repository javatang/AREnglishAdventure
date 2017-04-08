#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>
#include <assert.h>
#include <exception>

// LitJson.Lexer
struct Lexer_t186508296;
// System.String
struct String_t;
// System.IO.TextReader
struct TextReader_t1561828458;
// LitJson.FsmContext
struct FsmContext_t1296252303;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_IO_TextReader1561828458.h"
#include "LitJson_LitJson_FsmContext1296252303.h"

// System.Boolean LitJson.Lexer::get_EndOfInput()
extern "C"  bool Lexer_get_EndOfInput_m2672825410 (Lexer_t186508296 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 LitJson.Lexer::get_Token()
extern "C"  int32_t Lexer_get_Token_m2161052783 (Lexer_t186508296 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String LitJson.Lexer::get_StringValue()
extern "C"  String_t* Lexer_get_StringValue_m1631395785 (Lexer_t186508296 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void LitJson.Lexer::.cctor()
extern "C"  void Lexer__cctor_m2645270746 (Il2CppObject * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void LitJson.Lexer::.ctor(System.IO.TextReader)
extern "C"  void Lexer__ctor_m1588285932 (Lexer_t186508296 * __this, TextReader_t1561828458 * ___reader0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 LitJson.Lexer::HexValue(System.Int32)
extern "C"  int32_t Lexer_HexValue_m3100854760 (Il2CppObject * __this /* static, unused */, int32_t ___digit0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void LitJson.Lexer::PopulateFsmTables()
extern "C"  void Lexer_PopulateFsmTables_m297501242 (Il2CppObject * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Char LitJson.Lexer::ProcessEscChar(System.Int32)
extern "C"  Il2CppChar Lexer_ProcessEscChar_m2950456790 (Il2CppObject * __this /* static, unused */, int32_t ___esc_char0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean LitJson.Lexer::State1(LitJson.FsmContext)
extern "C"  bool Lexer_State1_m1582909377 (Il2CppObject * __this /* static, unused */, FsmContext_t1296252303 * ___ctx0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean LitJson.Lexer::State2(LitJson.FsmContext)
extern "C"  bool Lexer_State2_m1322186332 (Il2CppObject * __this /* static, unused */, FsmContext_t1296252303 * ___ctx0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean LitJson.Lexer::State3(LitJson.FsmContext)
extern "C"  bool Lexer_State3_m998050935 (Il2CppObject * __this /* static, unused */, FsmContext_t1296252303 * ___ctx0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean LitJson.Lexer::State4(LitJson.FsmContext)
extern "C"  bool Lexer_State4_m2904192018 (Il2CppObject * __this /* static, unused */, FsmContext_t1296252303 * ___ctx0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean LitJson.Lexer::State5(LitJson.FsmContext)
extern "C"  bool Lexer_State5_m2580056621 (Il2CppObject * __this /* static, unused */, FsmContext_t1296252303 * ___ctx0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean LitJson.Lexer::State6(LitJson.FsmContext)
extern "C"  bool Lexer_State6_m2319333576 (Il2CppObject * __this /* static, unused */, FsmContext_t1296252303 * ___ctx0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean LitJson.Lexer::State7(LitJson.FsmContext)
extern "C"  bool Lexer_State7_m1995198179 (Il2CppObject * __this /* static, unused */, FsmContext_t1296252303 * ___ctx0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean LitJson.Lexer::State8(LitJson.FsmContext)
extern "C"  bool Lexer_State8_m1011136126 (Il2CppObject * __this /* static, unused */, FsmContext_t1296252303 * ___ctx0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean LitJson.Lexer::State9(LitJson.FsmContext)
extern "C"  bool Lexer_State9_m687000729 (Il2CppObject * __this /* static, unused */, FsmContext_t1296252303 * ___ctx0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean LitJson.Lexer::State10(LitJson.FsmContext)
extern "C"  bool Lexer_State10_m4036614613 (Il2CppObject * __this /* static, unused */, FsmContext_t1296252303 * ___ctx0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean LitJson.Lexer::State11(LitJson.FsmContext)
extern "C"  bool Lexer_State11_m2030179926 (Il2CppObject * __this /* static, unused */, FsmContext_t1296252303 * ___ctx0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean LitJson.Lexer::State12(LitJson.FsmContext)
extern "C"  bool Lexer_State12_m1886146387 (Il2CppObject * __this /* static, unused */, FsmContext_t1296252303 * ___ctx0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean LitJson.Lexer::State13(LitJson.FsmContext)
extern "C"  bool Lexer_State13_m4174678996 (Il2CppObject * __this /* static, unused */, FsmContext_t1296252303 * ___ctx0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean LitJson.Lexer::State14(LitJson.FsmContext)
extern "C"  bool Lexer_State14_m2907515353 (Il2CppObject * __this /* static, unused */, FsmContext_t1296252303 * ___ctx0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean LitJson.Lexer::State15(LitJson.FsmContext)
extern "C"  bool Lexer_State15_m901080666 (Il2CppObject * __this /* static, unused */, FsmContext_t1296252303 * ___ctx0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean LitJson.Lexer::State16(LitJson.FsmContext)
extern "C"  bool Lexer_State16_m757047127 (Il2CppObject * __this /* static, unused */, FsmContext_t1296252303 * ___ctx0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean LitJson.Lexer::State17(LitJson.FsmContext)
extern "C"  bool Lexer_State17_m3045579736 (Il2CppObject * __this /* static, unused */, FsmContext_t1296252303 * ___ctx0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean LitJson.Lexer::State18(LitJson.FsmContext)
extern "C"  bool Lexer_State18_m936524237 (Il2CppObject * __this /* static, unused */, FsmContext_t1296252303 * ___ctx0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean LitJson.Lexer::State19(LitJson.FsmContext)
extern "C"  bool Lexer_State19_m3225056846 (Il2CppObject * __this /* static, unused */, FsmContext_t1296252303 * ___ctx0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean LitJson.Lexer::State20(LitJson.FsmContext)
extern "C"  bool Lexer_State20_m494691110 (Il2CppObject * __this /* static, unused */, FsmContext_t1296252303 * ___ctx0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean LitJson.Lexer::State21(LitJson.FsmContext)
extern "C"  bool Lexer_State21_m2783223719 (Il2CppObject * __this /* static, unused */, FsmContext_t1296252303 * ___ctx0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean LitJson.Lexer::State22(LitJson.FsmContext)
extern "C"  bool Lexer_State22_m2639190180 (Il2CppObject * __this /* static, unused */, FsmContext_t1296252303 * ___ctx0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean LitJson.Lexer::State23(LitJson.FsmContext)
extern "C"  bool Lexer_State23_m632755493 (Il2CppObject * __this /* static, unused */, FsmContext_t1296252303 * ___ctx0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean LitJson.Lexer::State24(LitJson.FsmContext)
extern "C"  bool Lexer_State24_m3660559146 (Il2CppObject * __this /* static, unused */, FsmContext_t1296252303 * ___ctx0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean LitJson.Lexer::State25(LitJson.FsmContext)
extern "C"  bool Lexer_State25_m1654124459 (Il2CppObject * __this /* static, unused */, FsmContext_t1296252303 * ___ctx0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean LitJson.Lexer::State26(LitJson.FsmContext)
extern "C"  bool Lexer_State26_m1510090920 (Il2CppObject * __this /* static, unused */, FsmContext_t1296252303 * ___ctx0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean LitJson.Lexer::State27(LitJson.FsmContext)
extern "C"  bool Lexer_State27_m3798623529 (Il2CppObject * __this /* static, unused */, FsmContext_t1296252303 * ___ctx0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean LitJson.Lexer::State28(LitJson.FsmContext)
extern "C"  bool Lexer_State28_m1689568030 (Il2CppObject * __this /* static, unused */, FsmContext_t1296252303 * ___ctx0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean LitJson.Lexer::GetChar()
extern "C"  bool Lexer_GetChar_m383434317 (Lexer_t186508296 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 LitJson.Lexer::NextChar()
extern "C"  int32_t Lexer_NextChar_m148078362 (Lexer_t186508296 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean LitJson.Lexer::NextToken()
extern "C"  bool Lexer_NextToken_m124338959 (Lexer_t186508296 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void LitJson.Lexer::UngetChar()
extern "C"  void Lexer_UngetChar_m1104515374 (Lexer_t186508296 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
