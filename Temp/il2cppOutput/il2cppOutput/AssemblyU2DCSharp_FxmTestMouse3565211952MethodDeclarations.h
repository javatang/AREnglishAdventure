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

// FxmTestMouse
struct FxmTestMouse_t3565211952;
// UnityEngine.Transform
struct Transform_t3275118058;

#include "codegen/il2cpp-codegen.h"
#include "UnityEngine_UnityEngine_Transform3275118058.h"

// System.Void FxmTestMouse::.ctor()
extern "C"  void FxmTestMouse__ctor_m779587511 (FxmTestMouse_t3565211952 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void FxmTestMouse::ChangeAngle(System.Single)
extern "C"  void FxmTestMouse_ChangeAngle_m3799854829 (FxmTestMouse_t3565211952 * __this, float ___angle0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void FxmTestMouse::SetHandControl(System.Boolean)
extern "C"  void FxmTestMouse_SetHandControl_m1902569340 (FxmTestMouse_t3565211952 * __this, bool ___bEnable0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void FxmTestMouse::SetDistance(System.Single)
extern "C"  void FxmTestMouse_SetDistance_m614264499 (FxmTestMouse_t3565211952 * __this, float ___fDistance0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void FxmTestMouse::OnEnable()
extern "C"  void FxmTestMouse_OnEnable_m2557367451 (FxmTestMouse_t3565211952 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void FxmTestMouse::Start()
extern "C"  void FxmTestMouse_Start_m378987547 (FxmTestMouse_t3565211952 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean FxmTestMouse::IsGUIMousePosition()
extern "C"  bool FxmTestMouse_IsGUIMousePosition_m3850972164 (FxmTestMouse_t3565211952 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void FxmTestMouse::Update()
extern "C"  void FxmTestMouse_Update_m2292562350 (FxmTestMouse_t3565211952 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void FxmTestMouse::UpdateCamera(System.Boolean)
extern "C"  void FxmTestMouse_UpdateCamera_m1681110684 (FxmTestMouse_t3565211952 * __this, bool ___bOnlyZoom0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Single FxmTestMouse::ClampAngle(System.Single,System.Single,System.Single)
extern "C"  float FxmTestMouse_ClampAngle_m2250170576 (Il2CppObject * __this /* static, unused */, float ___angle0, float ___min1, float ___max2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void FxmTestMouse::UpdatePosition(UnityEngine.Transform)
extern "C"  void FxmTestMouse_UpdatePosition_m3256649426 (FxmTestMouse_t3565211952 * __this, Transform_t3275118058 * ___camera0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
