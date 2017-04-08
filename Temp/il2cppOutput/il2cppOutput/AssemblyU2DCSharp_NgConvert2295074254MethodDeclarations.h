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

// NgConvert
struct NgConvert_t2295074254;
// System.String
struct String_t;
// System.String[]
struct StringU5BU5D_t1642385972;
// System.Int32[]
struct Int32U5BU5D_t3030399641;
// UnityEngine.GameObject[]
struct GameObjectU5BU5D_t3057952154;
// UnityEngine.GUIContent[]
struct GUIContentU5BU5D_t1194435593;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_String2029220233.h"

// System.Void NgConvert::.ctor()
extern "C"  void NgConvert__ctor_m2165573169 (NgConvert_t2295074254 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String NgConvert::GetTabSpace(System.Int32)
extern "C"  String_t* NgConvert_GetTabSpace_m362254394 (Il2CppObject * __this /* static, unused */, int32_t ___nTab0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String[] NgConvert::GetIntStrings(System.Int32,System.Int32)
extern "C"  StringU5BU5D_t1642385972* NgConvert_GetIntStrings_m2294194769 (Il2CppObject * __this /* static, unused */, int32_t ___start0, int32_t ___count1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32[] NgConvert::GetIntegers(System.Int32,System.Int32)
extern "C"  Int32U5BU5D_t3030399641* NgConvert_GetIntegers_m657190592 (Il2CppObject * __this /* static, unused */, int32_t ___start0, int32_t ___count1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String[] NgConvert::ResizeArray(System.String[],System.Int32)
extern "C"  StringU5BU5D_t1642385972* NgConvert_ResizeArray_m1546334508 (Il2CppObject * __this /* static, unused */, StringU5BU5D_t1642385972* ___src0, int32_t ___nResize1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.GameObject[] NgConvert::ResizeArray(UnityEngine.GameObject[],System.Int32)
extern "C"  GameObjectU5BU5D_t3057952154* NgConvert_ResizeArray_m2523004194 (Il2CppObject * __this /* static, unused */, GameObjectU5BU5D_t3057952154* ___src0, int32_t ___nResize1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.GUIContent[] NgConvert::ResizeArray(UnityEngine.GUIContent[],System.Int32)
extern "C"  GUIContentU5BU5D_t1194435593* NgConvert_ResizeArray_m4121280930 (Il2CppObject * __this /* static, unused */, GUIContentU5BU5D_t1194435593* ___src0, int32_t ___nResize1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.GUIContent[] NgConvert::StringsToContents(System.String[])
extern "C"  GUIContentU5BU5D_t1194435593* NgConvert_StringsToContents_m268972036 (Il2CppObject * __this /* static, unused */, StringU5BU5D_t1642385972* ___strings0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String[] NgConvert::ContentsToStrings(UnityEngine.GUIContent[])
extern "C"  StringU5BU5D_t1642385972* NgConvert_ContentsToStrings_m1973955750 (Il2CppObject * __this /* static, unused */, GUIContentU5BU5D_t1194435593* ___contents0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.UInt32 NgConvert::ToUint(System.String,System.UInt32)
extern "C"  uint32_t NgConvert_ToUint_m2145062413 (Il2CppObject * __this /* static, unused */, String_t* ___value0, uint32_t ___nDefaultValue1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 NgConvert::ToInt(System.String,System.Int32)
extern "C"  int32_t NgConvert_ToInt_m962817276 (Il2CppObject * __this /* static, unused */, String_t* ___value0, int32_t ___nDefaultValue1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Single NgConvert::ToFloat(System.String,System.Single)
extern "C"  float NgConvert_ToFloat_m989217031 (Il2CppObject * __this /* static, unused */, String_t* ___value0, float ___fDefaultValue1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String NgConvert::GetVaildFloatString(System.String,System.Single&)
extern "C"  String_t* NgConvert_GetVaildFloatString_m3422969676 (Il2CppObject * __this /* static, unused */, String_t* ___strInput0, float* ___fCompleteValue1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
