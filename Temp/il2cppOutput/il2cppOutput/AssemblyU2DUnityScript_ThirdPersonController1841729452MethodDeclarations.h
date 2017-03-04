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

// ThirdPersonController
struct ThirdPersonController_t1841729452;
// UnityEngine.ControllerColliderHit
struct ControllerColliderHit_t4070855101;

#include "codegen/il2cpp-codegen.h"
#include "UnityEngine_UnityEngine_ControllerColliderHit4070855101.h"
#include "UnityEngine_UnityEngine_Vector32243707580.h"

// System.Void ThirdPersonController::.ctor()
extern "C"  void ThirdPersonController__ctor_m3734179912 (ThirdPersonController_t1841729452 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void ThirdPersonController::Awake()
extern "C"  void ThirdPersonController_Awake_m1851122549 (ThirdPersonController_t1841729452 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void ThirdPersonController::UpdateSmoothedMovementDirection()
extern "C"  void ThirdPersonController_UpdateSmoothedMovementDirection_m1607820556 (ThirdPersonController_t1841729452 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void ThirdPersonController::ApplyJumping()
extern "C"  void ThirdPersonController_ApplyJumping_m2303093686 (ThirdPersonController_t1841729452 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void ThirdPersonController::ApplyGravity()
extern "C"  void ThirdPersonController_ApplyGravity_m3630102144 (ThirdPersonController_t1841729452 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Single ThirdPersonController::CalculateJumpVerticalSpeed(System.Single)
extern "C"  float ThirdPersonController_CalculateJumpVerticalSpeed_m266022954 (ThirdPersonController_t1841729452 * __this, float ___targetJumpHeight0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void ThirdPersonController::DidJump()
extern "C"  void ThirdPersonController_DidJump_m2182722107 (ThirdPersonController_t1841729452 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void ThirdPersonController::Update()
extern "C"  void ThirdPersonController_Update_m3514131137 (ThirdPersonController_t1841729452 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void ThirdPersonController::OnControllerColliderHit(UnityEngine.ControllerColliderHit)
extern "C"  void ThirdPersonController_OnControllerColliderHit_m3958616428 (ThirdPersonController_t1841729452 * __this, ControllerColliderHit_t4070855101 * ___hit0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Single ThirdPersonController::GetSpeed()
extern "C"  float ThirdPersonController_GetSpeed_m472727607 (ThirdPersonController_t1841729452 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean ThirdPersonController::IsJumping()
extern "C"  bool ThirdPersonController_IsJumping_m228886352 (ThirdPersonController_t1841729452 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean ThirdPersonController::IsGrounded()
extern "C"  bool ThirdPersonController_IsGrounded_m1308405076 (ThirdPersonController_t1841729452 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Vector3 ThirdPersonController::GetDirection()
extern "C"  Vector3_t2243707580  ThirdPersonController_GetDirection_m137009309 (ThirdPersonController_t1841729452 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean ThirdPersonController::IsMovingBackwards()
extern "C"  bool ThirdPersonController_IsMovingBackwards_m414282108 (ThirdPersonController_t1841729452 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Single ThirdPersonController::GetLockCameraTimer()
extern "C"  float ThirdPersonController_GetLockCameraTimer_m3631191617 (ThirdPersonController_t1841729452 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean ThirdPersonController::IsMoving()
extern "C"  bool ThirdPersonController_IsMoving_m2115366220 (ThirdPersonController_t1841729452 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean ThirdPersonController::HasJumpReachedApex()
extern "C"  bool ThirdPersonController_HasJumpReachedApex_m3256184752 (ThirdPersonController_t1841729452 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean ThirdPersonController::IsGroundedWithTimeout()
extern "C"  bool ThirdPersonController_IsGroundedWithTimeout_m2975589771 (ThirdPersonController_t1841729452 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void ThirdPersonController::Reset()
extern "C"  void ThirdPersonController_Reset_m1776449033 (ThirdPersonController_t1841729452 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void ThirdPersonController::Main()
extern "C"  void ThirdPersonController_Main_m3522903707 (ThirdPersonController_t1841729452 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
