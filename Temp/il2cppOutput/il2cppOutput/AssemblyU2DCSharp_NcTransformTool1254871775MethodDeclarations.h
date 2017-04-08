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

// NcTransformTool
struct NcTransformTool_t1254871775;
// UnityEngine.Transform
struct Transform_t3275118058;

#include "codegen/il2cpp-codegen.h"
#include "UnityEngine_UnityEngine_Transform3275118058.h"
#include "UnityEngine_UnityEngine_Vector32243707580.h"
#include "UnityEngine_UnityEngine_Quaternion4030073918.h"
#include "AssemblyU2DCSharp_NcTransformTool1254871775.h"

// System.Void NcTransformTool::.ctor()
extern "C"  void NcTransformTool__ctor_m1865928926 (NcTransformTool_t1254871775 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void NcTransformTool::.ctor(UnityEngine.Transform)
extern "C"  void NcTransformTool__ctor_m1151636025 (NcTransformTool_t1254871775 * __this, Transform_t3275118058 * ___val0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Vector3 NcTransformTool::GetZeroVector()
extern "C"  Vector3_t2243707580  NcTransformTool_GetZeroVector_m2292662553 (Il2CppObject * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Vector3 NcTransformTool::GetUnitVector()
extern "C"  Vector3_t2243707580  NcTransformTool_GetUnitVector_m2050790621 (Il2CppObject * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Quaternion NcTransformTool::GetIdenQuaternion()
extern "C"  Quaternion_t4030073918  NcTransformTool_GetIdenQuaternion_m276703434 (Il2CppObject * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void NcTransformTool::InitLocalTransform(UnityEngine.Transform)
extern "C"  void NcTransformTool_InitLocalTransform_m1098856224 (Il2CppObject * __this /* static, unused */, Transform_t3275118058 * ___dst0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void NcTransformTool::InitWorldTransform(UnityEngine.Transform)
extern "C"  void NcTransformTool_InitWorldTransform_m2590823617 (Il2CppObject * __this /* static, unused */, Transform_t3275118058 * ___dst0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void NcTransformTool::InitWorldScale(UnityEngine.Transform)
extern "C"  void NcTransformTool_InitWorldScale_m2084960461 (Il2CppObject * __this /* static, unused */, Transform_t3275118058 * ___dst0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void NcTransformTool::CopyLocalTransform(UnityEngine.Transform,UnityEngine.Transform)
extern "C"  void NcTransformTool_CopyLocalTransform_m2191279738 (Il2CppObject * __this /* static, unused */, Transform_t3275118058 * ___src0, Transform_t3275118058 * ___dst1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void NcTransformTool::CopyLossyToLocalScale(UnityEngine.Vector3,UnityEngine.Transform)
extern "C"  void NcTransformTool_CopyLossyToLocalScale_m2119517897 (Il2CppObject * __this /* static, unused */, Vector3_t2243707580  ___srcLossyScale0, Transform_t3275118058 * ___dst1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void NcTransformTool::CopyToLocalTransform(UnityEngine.Transform)
extern "C"  void NcTransformTool_CopyToLocalTransform_m1721610406 (NcTransformTool_t1254871775 * __this, Transform_t3275118058 * ___dst0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void NcTransformTool::CopyToTransform(UnityEngine.Transform)
extern "C"  void NcTransformTool_CopyToTransform_m1547139615 (NcTransformTool_t1254871775 * __this, Transform_t3275118058 * ___dst0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void NcTransformTool::AddLocalTransform(UnityEngine.Transform)
extern "C"  void NcTransformTool_AddLocalTransform_m1000073285 (NcTransformTool_t1254871775 * __this, Transform_t3275118058 * ___val0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void NcTransformTool::SetLocalTransform(UnityEngine.Transform)
extern "C"  void NcTransformTool_SetLocalTransform_m3732029744 (NcTransformTool_t1254871775 * __this, Transform_t3275118058 * ___val0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean NcTransformTool::IsLocalEquals(UnityEngine.Transform)
extern "C"  bool NcTransformTool_IsLocalEquals_m1589764005 (NcTransformTool_t1254871775 * __this, Transform_t3275118058 * ___val0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void NcTransformTool::AddTransform(UnityEngine.Transform)
extern "C"  void NcTransformTool_AddTransform_m282914138 (NcTransformTool_t1254871775 * __this, Transform_t3275118058 * ___val0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void NcTransformTool::SetTransform(UnityEngine.Transform)
extern "C"  void NcTransformTool_SetTransform_m1821853859 (NcTransformTool_t1254871775 * __this, Transform_t3275118058 * ___val0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean NcTransformTool::IsEquals(UnityEngine.Transform)
extern "C"  bool NcTransformTool_IsEquals_m1867459528 (NcTransformTool_t1254871775 * __this, Transform_t3275118058 * ___val0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void NcTransformTool::SetTransform(NcTransformTool)
extern "C"  void NcTransformTool_SetTransform_m2692390349 (NcTransformTool_t1254871775 * __this, NcTransformTool_t1254871775 * ___val0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Single NcTransformTool::GetTransformScaleMeanValue(UnityEngine.Transform)
extern "C"  float NcTransformTool_GetTransformScaleMeanValue_m1845388741 (Il2CppObject * __this /* static, unused */, Transform_t3275118058 * ___srcTrans0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Vector3 NcTransformTool::GetTransformScaleMeanVector(UnityEngine.Transform)
extern "C"  Vector3_t2243707580  NcTransformTool_GetTransformScaleMeanVector_m3712272743 (Il2CppObject * __this /* static, unused */, Transform_t3275118058 * ___srcTrans0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
