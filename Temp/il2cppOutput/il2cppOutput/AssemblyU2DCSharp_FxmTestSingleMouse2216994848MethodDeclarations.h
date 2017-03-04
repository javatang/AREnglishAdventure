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

// FxmTestSingleMouse
struct FxmTestSingleMouse_t2216994848;
// UnityEngine.Transform
struct Transform_t3275118058;

#include "codegen/il2cpp-codegen.h"
#include "UnityEngine_UnityEngine_Transform3275118058.h"
#include "UnityEngine_UnityEngine_Vector32243707580.h"

// System.Void FxmTestSingleMouse::.ctor()
extern "C"  void FxmTestSingleMouse__ctor_m2966031549 (FxmTestSingleMouse_t2216994848 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void FxmTestSingleMouse::ChangeAngle(System.Single)
extern "C"  void FxmTestSingleMouse_ChangeAngle_m3128625975 (FxmTestSingleMouse_t2216994848 * __this, float ___angle0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void FxmTestSingleMouse::SetHandControl(System.Boolean)
extern "C"  void FxmTestSingleMouse_SetHandControl_m2707632976 (FxmTestSingleMouse_t2216994848 * __this, bool ___bEnable0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void FxmTestSingleMouse::SetDistance(System.Single)
extern "C"  void FxmTestSingleMouse_SetDistance_m2274977433 (FxmTestSingleMouse_t2216994848 * __this, float ___fDistance0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void FxmTestSingleMouse::OnEnable()
extern "C"  void FxmTestSingleMouse_OnEnable_m1325301261 (FxmTestSingleMouse_t2216994848 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void FxmTestSingleMouse::Start()
extern "C"  void FxmTestSingleMouse_Start_m3085460205 (FxmTestSingleMouse_t2216994848 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean FxmTestSingleMouse::IsGUIMousePosition()
extern "C"  bool FxmTestSingleMouse_IsGUIMousePosition_m1005176304 (FxmTestSingleMouse_t2216994848 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void FxmTestSingleMouse::Update()
extern "C"  void FxmTestSingleMouse_Update_m356134862 (FxmTestSingleMouse_t2216994848 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void FxmTestSingleMouse::UpdateCamera(System.Boolean)
extern "C"  void FxmTestSingleMouse_UpdateCamera_m194622184 (FxmTestSingleMouse_t2216994848 * __this, bool ___bOnlyZoom0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Single FxmTestSingleMouse::ClampAngle(System.Single,System.Single,System.Single)
extern "C"  float FxmTestSingleMouse_ClampAngle_m1005548180 (Il2CppObject * __this /* static, unused */, float ___angle0, float ___min1, float ___max2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void FxmTestSingleMouse::UpdatePosition(UnityEngine.Transform)
extern "C"  void FxmTestSingleMouse_UpdatePosition_m3450381318 (FxmTestSingleMouse_t2216994848 * __this, Transform_t3275118058 * ___camera0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Single FxmTestSingleMouse::GetWorldPerScreenPixel(UnityEngine.Vector3)
extern "C"  float FxmTestSingleMouse_GetWorldPerScreenPixel_m1044625041 (FxmTestSingleMouse_t2216994848 * __this, Vector3_t2243707580  ___worldPoint0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
