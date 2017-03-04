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

// LitJson.JsonWriter
struct JsonWriter_t1927598499;
// System.Char[]
struct CharU5BU5D_t1328083999;
// System.String
struct String_t;

#include "codegen/il2cpp-codegen.h"
#include "LitJson_LitJson_Condition1980525237.h"
#include "mscorlib_System_String2029220233.h"
#include "mscorlib_System_Decimal724701077.h"

// System.Void LitJson.JsonWriter::.cctor()
extern "C"  void JsonWriter__cctor_m3901932977 (Il2CppObject * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void LitJson.JsonWriter::.ctor()
extern "C"  void JsonWriter__ctor_m4154854942 (JsonWriter_t1927598499 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void LitJson.JsonWriter::DoValidation(LitJson.Condition)
extern "C"  void JsonWriter_DoValidation_m3360017484 (JsonWriter_t1927598499 * __this, int32_t ___cond0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void LitJson.JsonWriter::Init()
extern "C"  void JsonWriter_Init_m274348782 (JsonWriter_t1927598499 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void LitJson.JsonWriter::IntToHex(System.Int32,System.Char[])
extern "C"  void JsonWriter_IntToHex_m2054395447 (Il2CppObject * __this /* static, unused */, int32_t ___n0, CharU5BU5D_t1328083999* ___hex1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void LitJson.JsonWriter::Put(System.String)
extern "C"  void JsonWriter_Put_m2213626913 (JsonWriter_t1927598499 * __this, String_t* ___str0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void LitJson.JsonWriter::PutNewline()
extern "C"  void JsonWriter_PutNewline_m6316545 (JsonWriter_t1927598499 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void LitJson.JsonWriter::PutNewline(System.Boolean)
extern "C"  void JsonWriter_PutNewline_m1787073318 (JsonWriter_t1927598499 * __this, bool ___add_comma0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void LitJson.JsonWriter::PutString(System.String)
extern "C"  void JsonWriter_PutString_m823784236 (JsonWriter_t1927598499 * __this, String_t* ___str0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String LitJson.JsonWriter::ToString()
extern "C"  String_t* JsonWriter_ToString_m1930714585 (JsonWriter_t1927598499 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void LitJson.JsonWriter::Write(System.Decimal)
extern "C"  void JsonWriter_Write_m4294015511 (JsonWriter_t1927598499 * __this, Decimal_t724701077  ___number0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void LitJson.JsonWriter::Write(System.Int32)
extern "C"  void JsonWriter_Write_m3470678580 (JsonWriter_t1927598499 * __this, int32_t ___number0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void LitJson.JsonWriter::Write(System.String)
extern "C"  void JsonWriter_Write_m3697573277 (JsonWriter_t1927598499 * __this, String_t* ___str0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void LitJson.JsonWriter::Write(System.UInt64)
extern "C"  void JsonWriter_Write_m2203930976 (JsonWriter_t1927598499 * __this, uint64_t ___number0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
