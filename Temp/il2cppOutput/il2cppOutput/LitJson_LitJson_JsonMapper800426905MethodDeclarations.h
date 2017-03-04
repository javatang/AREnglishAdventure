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

// System.Type
struct Type_t;
// System.Reflection.MethodInfo
struct MethodInfo_t;
// System.Object
struct Il2CppObject;
// LitJson.JsonReader
struct JsonReader_t1077921503;
// LitJson.IJsonWrapper
struct IJsonWrapper_t3045908096;
// LitJson.WrapperFactory
struct WrapperFactory_t2219329745;
// System.Collections.Generic.IDictionary`2<System.Type,System.Collections.Generic.IDictionary`2<System.Type,LitJson.ImporterFunc>>
struct IDictionary_2_t2850733530;
// LitJson.ImporterFunc
struct ImporterFunc_t2977850894;
// LitJson.JsonWriter
struct JsonWriter_t1927598499;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_Type1303803226.h"
#include "LitJson_LitJson_JsonReader1077921503.h"
#include "LitJson_LitJson_WrapperFactory2219329745.h"
#include "LitJson_LitJson_ImporterFunc2977850894.h"
#include "mscorlib_System_Object2689449295.h"
#include "LitJson_LitJson_JsonWriter1927598499.h"

// System.Void LitJson.JsonMapper::.cctor()
extern "C"  void JsonMapper__cctor_m1681450885 (Il2CppObject * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void LitJson.JsonMapper::AddArrayMetadata(System.Type)
extern "C"  void JsonMapper_AddArrayMetadata_m2235664128 (Il2CppObject * __this /* static, unused */, Type_t * ___type0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void LitJson.JsonMapper::AddObjectMetadata(System.Type)
extern "C"  void JsonMapper_AddObjectMetadata_m928394654 (Il2CppObject * __this /* static, unused */, Type_t * ___type0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Reflection.MethodInfo LitJson.JsonMapper::GetConvOp(System.Type,System.Type)
extern "C"  MethodInfo_t * JsonMapper_GetConvOp_m1672558747 (Il2CppObject * __this /* static, unused */, Type_t * ___t10, Type_t * ___t21, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Object LitJson.JsonMapper::ReadValue(System.Type,LitJson.JsonReader)
extern "C"  Il2CppObject * JsonMapper_ReadValue_m1290250935 (Il2CppObject * __this /* static, unused */, Type_t * ___inst_type0, JsonReader_t1077921503 * ___reader1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// LitJson.IJsonWrapper LitJson.JsonMapper::ReadValue(LitJson.WrapperFactory,LitJson.JsonReader)
extern "C"  Il2CppObject * JsonMapper_ReadValue_m3299138535 (Il2CppObject * __this /* static, unused */, WrapperFactory_t2219329745 * ___factory0, JsonReader_t1077921503 * ___reader1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void LitJson.JsonMapper::ReadSkip(LitJson.JsonReader)
extern "C"  void JsonMapper_ReadSkip_m2254424047 (Il2CppObject * __this /* static, unused */, JsonReader_t1077921503 * ___reader0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void LitJson.JsonMapper::RegisterBaseExporters()
extern "C"  void JsonMapper_RegisterBaseExporters_m1297683202 (Il2CppObject * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void LitJson.JsonMapper::RegisterBaseImporters()
extern "C"  void JsonMapper_RegisterBaseImporters_m1670182263 (Il2CppObject * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void LitJson.JsonMapper::RegisterImporter(System.Collections.Generic.IDictionary`2<System.Type,System.Collections.Generic.IDictionary`2<System.Type,LitJson.ImporterFunc>>,System.Type,System.Type,LitJson.ImporterFunc)
extern "C"  void JsonMapper_RegisterImporter_m1697509061 (Il2CppObject * __this /* static, unused */, Il2CppObject* ___table0, Type_t * ___json_type1, Type_t * ___value_type2, ImporterFunc_t2977850894 * ___importer3, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// LitJson.IJsonWrapper LitJson.JsonMapper::ToWrapper(LitJson.WrapperFactory,LitJson.JsonReader)
extern "C"  Il2CppObject * JsonMapper_ToWrapper_m636241360 (Il2CppObject * __this /* static, unused */, WrapperFactory_t2219329745 * ___factory0, JsonReader_t1077921503 * ___reader1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// LitJson.IJsonWrapper LitJson.JsonMapper::<ReadSkip>m__0()
extern "C"  Il2CppObject * JsonMapper_U3CReadSkipU3Em__0_m2892674022 (Il2CppObject * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void LitJson.JsonMapper::<RegisterBaseExporters>m__1(System.Object,LitJson.JsonWriter)
extern "C"  void JsonMapper_U3CRegisterBaseExportersU3Em__1_m3524287420 (Il2CppObject * __this /* static, unused */, Il2CppObject * ___obj0, JsonWriter_t1927598499 * ___writer1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void LitJson.JsonMapper::<RegisterBaseExporters>m__2(System.Object,LitJson.JsonWriter)
extern "C"  void JsonMapper_U3CRegisterBaseExportersU3Em__2_m3524078105 (Il2CppObject * __this /* static, unused */, Il2CppObject * ___obj0, JsonWriter_t1927598499 * ___writer1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void LitJson.JsonMapper::<RegisterBaseExporters>m__3(System.Object,LitJson.JsonWriter)
extern "C"  void JsonMapper_U3CRegisterBaseExportersU3Em__3_m439803514 (Il2CppObject * __this /* static, unused */, Il2CppObject * ___obj0, JsonWriter_t1927598499 * ___writer1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void LitJson.JsonMapper::<RegisterBaseExporters>m__4(System.Object,LitJson.JsonWriter)
extern "C"  void JsonMapper_U3CRegisterBaseExportersU3Em__4_m2965425631 (Il2CppObject * __this /* static, unused */, Il2CppObject * ___obj0, JsonWriter_t1927598499 * ___writer1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void LitJson.JsonMapper::<RegisterBaseExporters>m__5(System.Object,LitJson.JsonWriter)
extern "C"  void JsonMapper_U3CRegisterBaseExportersU3Em__5_m163806528 (Il2CppObject * __this /* static, unused */, Il2CppObject * ___obj0, JsonWriter_t1927598499 * ___writer1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void LitJson.JsonMapper::<RegisterBaseExporters>m__6(System.Object,LitJson.JsonWriter)
extern "C"  void JsonMapper_U3CRegisterBaseExportersU3Em__6_m163597213 (Il2CppObject * __this /* static, unused */, Il2CppObject * ___obj0, JsonWriter_t1927598499 * ___writer1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void LitJson.JsonMapper::<RegisterBaseExporters>m__7(System.Object,LitJson.JsonWriter)
extern "C"  void JsonMapper_U3CRegisterBaseExportersU3Em__7_m1374289918 (Il2CppObject * __this /* static, unused */, Il2CppObject * ___obj0, JsonWriter_t1927598499 * ___writer1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void LitJson.JsonMapper::<RegisterBaseExporters>m__8(System.Object,LitJson.JsonWriter)
extern "C"  void JsonMapper_U3CRegisterBaseExportersU3Em__8_m657041763 (Il2CppObject * __this /* static, unused */, Il2CppObject * ___obj0, JsonWriter_t1927598499 * ___writer1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void LitJson.JsonMapper::<RegisterBaseExporters>m__9(System.Object,LitJson.JsonWriter)
extern "C"  void JsonMapper_U3CRegisterBaseExportersU3Em__9_m2150389956 (Il2CppObject * __this /* static, unused */, Il2CppObject * ___obj0, JsonWriter_t1927598499 * ___writer1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Object LitJson.JsonMapper::<RegisterBaseImporters>m__A(System.Object)
extern "C"  Il2CppObject * JsonMapper_U3CRegisterBaseImportersU3Em__A_m1016987298 (Il2CppObject * __this /* static, unused */, Il2CppObject * ___input0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Object LitJson.JsonMapper::<RegisterBaseImporters>m__B(System.Object)
extern "C"  Il2CppObject * JsonMapper_U3CRegisterBaseImportersU3Em__B_m3368522629 (Il2CppObject * __this /* static, unused */, Il2CppObject * ___input0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Object LitJson.JsonMapper::<RegisterBaseImporters>m__C(System.Object)
extern "C"  Il2CppObject * JsonMapper_U3CRegisterBaseImportersU3Em__C_m1987786596 (Il2CppObject * __this /* static, unused */, Il2CppObject * ___input0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Object LitJson.JsonMapper::<RegisterBaseImporters>m__D(System.Object)
extern "C"  Il2CppObject * JsonMapper_U3CRegisterBaseImportersU3Em__D_m3731843391 (Il2CppObject * __this /* static, unused */, Il2CppObject * ___input0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Object LitJson.JsonMapper::<RegisterBaseImporters>m__E(System.Object)
extern "C"  Il2CppObject * JsonMapper_U3CRegisterBaseImportersU3Em__E_m2351107358 (Il2CppObject * __this /* static, unused */, Il2CppObject * ___input0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Object LitJson.JsonMapper::<RegisterBaseImporters>m__F(System.Object)
extern "C"  Il2CppObject * JsonMapper_U3CRegisterBaseImportersU3Em__F_m407675393 (Il2CppObject * __this /* static, unused */, Il2CppObject * ___input0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Object LitJson.JsonMapper::<RegisterBaseImporters>m__10(System.Object)
extern "C"  Il2CppObject * JsonMapper_U3CRegisterBaseImportersU3Em__10_m1594220280 (Il2CppObject * __this /* static, unused */, Il2CppObject * ___input0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Object LitJson.JsonMapper::<RegisterBaseImporters>m__11(System.Object)
extern "C"  Il2CppObject * JsonMapper_U3CRegisterBaseImportersU3Em__11_m946832243 (Il2CppObject * __this /* static, unused */, Il2CppObject * ___input0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Object LitJson.JsonMapper::<RegisterBaseImporters>m__12(System.Object)
extern "C"  Il2CppObject * JsonMapper_U3CRegisterBaseImportersU3Em__12_m3676311426 (Il2CppObject * __this /* static, unused */, Il2CppObject * ___input0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Object LitJson.JsonMapper::<RegisterBaseImporters>m__13(System.Object)
extern "C"  Il2CppObject * JsonMapper_U3CRegisterBaseImportersU3Em__13_m2391197693 (Il2CppObject * __this /* static, unused */, Il2CppObject * ___input0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Object LitJson.JsonMapper::<RegisterBaseImporters>m__14(System.Object)
extern "C"  Il2CppObject * JsonMapper_U3CRegisterBaseImportersU3Em__14_m3121206284 (Il2CppObject * __this /* static, unused */, Il2CppObject * ___input0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Object LitJson.JsonMapper::<RegisterBaseImporters>m__15(System.Object)
extern "C"  Il2CppObject * JsonMapper_U3CRegisterBaseImportersU3Em__15_m2473818247 (Il2CppObject * __this /* static, unused */, Il2CppObject * ___input0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
