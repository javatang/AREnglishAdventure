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

// NcSpriteAnimation
struct NcSpriteAnimation_t3095587620;
// UnityEngine.Component
struct Component_t3819376471;
// System.String
struct String_t;

#include "codegen/il2cpp-codegen.h"
#include "UnityEngine_UnityEngine_Component3819376471.h"
#include "mscorlib_System_String2029220233.h"
#include "UnityEngine_UnityEngine_Rect3681755626.h"

// System.Void NcSpriteAnimation::.ctor()
extern "C"  void NcSpriteAnimation__ctor_m3121780485 (NcSpriteAnimation_t3095587620 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 NcSpriteAnimation::GetAnimationState()
extern "C"  int32_t NcSpriteAnimation_GetAnimationState_m1333819866 (NcSpriteAnimation_t3095587620 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Single NcSpriteAnimation::GetDurationTime()
extern "C"  float NcSpriteAnimation_GetDurationTime_m721412192 (NcSpriteAnimation_t3095587620 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 NcSpriteAnimation::GetShowIndex()
extern "C"  int32_t NcSpriteAnimation_GetShowIndex_m386234114 (NcSpriteAnimation_t3095587620 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void NcSpriteAnimation::SetBreakLoop()
extern "C"  void NcSpriteAnimation_SetBreakLoop_m940117686 (NcSpriteAnimation_t3095587620 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean NcSpriteAnimation::IsInPartLoop()
extern "C"  bool NcSpriteAnimation_IsInPartLoop_m3419682323 (NcSpriteAnimation_t3095587620 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void NcSpriteAnimation::ResetAnimation()
extern "C"  void NcSpriteAnimation_ResetAnimation_m3176465872 (NcSpriteAnimation_t3095587620 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void NcSpriteAnimation::SetSelectFrame(System.Int32)
extern "C"  void NcSpriteAnimation_SetSelectFrame_m2802714643 (NcSpriteAnimation_t3095587620 * __this, int32_t ___nSelFrame0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean NcSpriteAnimation::IsEmptyFrame()
extern "C"  bool NcSpriteAnimation_IsEmptyFrame_m1531779019 (NcSpriteAnimation_t3095587620 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 NcSpriteAnimation::GetMaxFrameCount()
extern "C"  int32_t NcSpriteAnimation_GetMaxFrameCount_m2526711243 (NcSpriteAnimation_t3095587620 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 NcSpriteAnimation::GetValidFrameCount()
extern "C"  int32_t NcSpriteAnimation_GetValidFrameCount_m1265954137 (NcSpriteAnimation_t3095587620 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void NcSpriteAnimation::SetCallBackChangeFrame(UnityEngine.Component,System.String)
extern "C"  void NcSpriteAnimation_SetCallBackChangeFrame_m34357159 (NcSpriteAnimation_t3095587620 * __this, Component_t3819376471 * ___changeFrameComponent0, String_t* ___changeFrameFunction1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void NcSpriteAnimation::Awake()
extern "C"  void NcSpriteAnimation_Awake_m2175290676 (NcSpriteAnimation_t3095587620 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void NcSpriteAnimation::ResetLocalValue()
extern "C"  void NcSpriteAnimation_ResetLocalValue_m2503731728 (NcSpriteAnimation_t3095587620 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void NcSpriteAnimation::Start()
extern "C"  void NcSpriteAnimation_Start_m4007645077 (NcSpriteAnimation_t3095587620 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void NcSpriteAnimation::Update()
extern "C"  void NcSpriteAnimation_Update_m238625554 (NcSpriteAnimation_t3095587620 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void NcSpriteAnimation::SetSpriteFactoryIndex(System.Int32,System.Boolean)
extern "C"  void NcSpriteAnimation_SetSpriteFactoryIndex_m3903769752 (NcSpriteAnimation_t3095587620 * __this, int32_t ___nSpriteFactoryIndex0, bool ___bRunImmediate1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void NcSpriteAnimation::SetShowRate(System.Single)
extern "C"  void NcSpriteAnimation_SetShowRate_m4249469643 (NcSpriteAnimation_t3095587620 * __this, float ___fShowRate0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean NcSpriteAnimation::UpdateFactoryInfo(System.Int32)
extern "C"  bool NcSpriteAnimation_UpdateFactoryInfo_m2310579427 (NcSpriteAnimation_t3095587620 * __this, int32_t ___nSpriteFactoryIndex0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 NcSpriteAnimation::GetPartLoopFrameIndex(System.Int32)
extern "C"  int32_t NcSpriteAnimation_GetPartLoopFrameIndex_m3577296052 (NcSpriteAnimation_t3095587620 * __this, int32_t ___nSeqIndex0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 NcSpriteAnimation::GetPartLoopCount(System.Int32)
extern "C"  int32_t NcSpriteAnimation_GetPartLoopCount_m1957715758 (NcSpriteAnimation_t3095587620 * __this, int32_t ___nSeqIndex0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 NcSpriteAnimation::CalcPartLoopInfo(System.Int32,System.Int32&)
extern "C"  int32_t NcSpriteAnimation_CalcPartLoopInfo_m2975301769 (NcSpriteAnimation_t3095587620 * __this, int32_t ___nSeqIndex0, int32_t* ___nLoopCount1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void NcSpriteAnimation::UpdateEndAnimation()
extern "C"  void NcSpriteAnimation_UpdateEndAnimation_m4029610085 (NcSpriteAnimation_t3095587620 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void NcSpriteAnimation::SetIndex(System.Int32)
extern "C"  void NcSpriteAnimation_SetIndex_m41628938 (NcSpriteAnimation_t3095587620 * __this, int32_t ___nSeqIndex0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void NcSpriteAnimation::UpdateSpriteTexture(System.Int32,System.Boolean)
extern "C"  void NcSpriteAnimation_UpdateSpriteTexture_m3468037384 (NcSpriteAnimation_t3095587620 * __this, int32_t ___nSelIndex0, bool ___bShowEffect1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void NcSpriteAnimation::UpdateFactoryTexture(System.Int32,System.Boolean)
extern "C"  void NcSpriteAnimation_UpdateFactoryTexture_m829104313 (NcSpriteAnimation_t3095587620 * __this, int32_t ___nSelIndex0, bool ___bShowEffect1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean NcSpriteAnimation::UpdateFactoryMaterial()
extern "C"  bool NcSpriteAnimation_UpdateFactoryMaterial_m3342491231 (NcSpriteAnimation_t3095587620 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void NcSpriteAnimation::CreateBuiltInPlane(System.Int32)
extern "C"  void NcSpriteAnimation_CreateBuiltInPlane_m1917301115 (NcSpriteAnimation_t3095587620 * __this, int32_t ___nSelIndex0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void NcSpriteAnimation::UpdateBuiltInPlane(System.Int32)
extern "C"  void NcSpriteAnimation_UpdateBuiltInPlane_m1585794252 (NcSpriteAnimation_t3095587620 * __this, int32_t ___nSelIndex0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean NcSpriteAnimation::UpdateMeshUVsByTileTexture(UnityEngine.Rect)
extern "C"  bool NcSpriteAnimation_UpdateMeshUVsByTileTexture_m7076206 (NcSpriteAnimation_t3095587620 * __this, Rect_t3681755626  ___uv0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void NcSpriteAnimation::OnUpdateEffectSpeed(System.Single,System.Boolean)
extern "C"  void NcSpriteAnimation_OnUpdateEffectSpeed_m1565436227 (NcSpriteAnimation_t3095587620 * __this, float ___fSpeedRate0, bool ___bRuntime1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void NcSpriteAnimation::OnResetReplayStage(System.Boolean)
extern "C"  void NcSpriteAnimation_OnResetReplayStage_m4091471009 (NcSpriteAnimation_t3095587620 * __this, bool ___bClearOldParticle0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
