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

// ThirdPersonCamera
struct ThirdPersonCamera_t2751132817;
// UnityEngine.Transform
struct Transform_t3275118058;

#include "codegen/il2cpp-codegen.h"
#include "UnityEngine_UnityEngine_Transform3275118058.h"
#include "UnityEngine_UnityEngine_Vector32243707580.h"

// System.Void ThirdPersonCamera::.ctor()
extern "C"  void ThirdPersonCamera__ctor_m2338492013 (ThirdPersonCamera_t2751132817 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void ThirdPersonCamera::Awake()
extern "C"  void ThirdPersonCamera_Awake_m2969377770 (ThirdPersonCamera_t2751132817 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void ThirdPersonCamera::DebugDrawStuff()
extern "C"  void ThirdPersonCamera_DebugDrawStuff_m2634059124 (ThirdPersonCamera_t2751132817 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Single ThirdPersonCamera::AngleDistance(System.Single,System.Single)
extern "C"  float ThirdPersonCamera_AngleDistance_m1831836461 (ThirdPersonCamera_t2751132817 * __this, float ___a0, float ___b1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void ThirdPersonCamera::Apply(UnityEngine.Transform,UnityEngine.Vector3)
extern "C"  void ThirdPersonCamera_Apply_m3614534807 (ThirdPersonCamera_t2751132817 * __this, Transform_t3275118058 * ___dummyTarget0, Vector3_t2243707580  ___dummyCenter1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void ThirdPersonCamera::LateUpdate()
extern "C"  void ThirdPersonCamera_LateUpdate_m3321567768 (ThirdPersonCamera_t2751132817 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void ThirdPersonCamera::Cut(UnityEngine.Transform,UnityEngine.Vector3)
extern "C"  void ThirdPersonCamera_Cut_m1311324977 (ThirdPersonCamera_t2751132817 * __this, Transform_t3275118058 * ___dummyTarget0, Vector3_t2243707580  ___dummyCenter1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void ThirdPersonCamera::SetUpRotation(UnityEngine.Vector3,UnityEngine.Vector3)
extern "C"  void ThirdPersonCamera_SetUpRotation_m1930509600 (ThirdPersonCamera_t2751132817 * __this, Vector3_t2243707580  ___centerPos0, Vector3_t2243707580  ___headPos1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Vector3 ThirdPersonCamera::GetCenterOffset()
extern "C"  Vector3_t2243707580  ThirdPersonCamera_GetCenterOffset_m1611501039 (ThirdPersonCamera_t2751132817 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void ThirdPersonCamera::Main()
extern "C"  void ThirdPersonCamera_Main_m2234253284 (ThirdPersonCamera_t2751132817 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
