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

// NcSafeTool
struct NcSafeTool_t3438679220;
// UnityEngine.Object
struct Object_t1021602117;

#include "codegen/il2cpp-codegen.h"
#include "UnityEngine_UnityEngine_Object1021602117.h"
#include "UnityEngine_UnityEngine_Vector32243707580.h"
#include "UnityEngine_UnityEngine_Quaternion4030073918.h"

// System.Void NcSafeTool::.ctor()
extern "C"  void NcSafeTool__ctor_m2977874167 (NcSafeTool_t3438679220 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void NcSafeTool::Instance()
extern "C"  void NcSafeTool_Instance_m271945700 (Il2CppObject * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean NcSafeTool::IsSafe()
extern "C"  bool NcSafeTool_IsSafe_m3921440332 (Il2CppObject * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Object NcSafeTool::SafeInstantiate(UnityEngine.Object)
extern "C"  Object_t1021602117 * NcSafeTool_SafeInstantiate_m488557079 (Il2CppObject * __this /* static, unused */, Object_t1021602117 * ___original0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Object NcSafeTool::SafeInstantiate(UnityEngine.Object,UnityEngine.Vector3,UnityEngine.Quaternion)
extern "C"  Object_t1021602117 * NcSafeTool_SafeInstantiate_m1127816797 (Il2CppObject * __this /* static, unused */, Object_t1021602117 * ___original0, Vector3_t2243707580  ___position1, Quaternion_t4030073918  ___rotation2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void NcSafeTool::LoadLevel(System.Int32)
extern "C"  void NcSafeTool_LoadLevel_m3364272532 (Il2CppObject * __this /* static, unused */, int32_t ___nLoadLevel0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void NcSafeTool::OnApplicationQuit()
extern "C"  void NcSafeTool_OnApplicationQuit_m239807525 (NcSafeTool_t3438679220 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void NcSafeTool::.cctor()
extern "C"  void NcSafeTool__cctor_m3905046374 (Il2CppObject * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
