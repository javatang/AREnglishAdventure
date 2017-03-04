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

// FxmTestControls
struct FxmTestControls_t64800591;
// System.String
struct String_t;
// UnityEngine.GUIContent[]
struct GUIContentU5BU5D_t1194435593;
// UnityEngine.Transform
struct Transform_t3275118058;

#include "codegen/il2cpp-codegen.h"
#include "AssemblyU2DCSharp_FxmTestControls_AXIS10529083.h"
#include "UnityEngine_UnityEngine_Rect3681755626.h"
#include "mscorlib_System_String2029220233.h"
#include "UnityEngine_UnityEngine_Transform3275118058.h"

// System.Void FxmTestControls::.ctor()
extern "C"  void FxmTestControls__ctor_m1984690982 (FxmTestControls_t64800591 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Single FxmTestControls::GetTimeScale()
extern "C"  float FxmTestControls_GetTimeScale_m4292905139 (FxmTestControls_t64800591 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean FxmTestControls::IsRepeat()
extern "C"  bool FxmTestControls_IsRepeat_m3217369979 (FxmTestControls_t64800591 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean FxmTestControls::IsAutoRepeat()
extern "C"  bool FxmTestControls_IsAutoRepeat_m3144880278 (FxmTestControls_t64800591 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Single FxmTestControls::GetRepeatTime()
extern "C"  float FxmTestControls_GetRepeatTime_m541256750 (FxmTestControls_t64800591 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void FxmTestControls::SetStartTime()
extern "C"  void FxmTestControls_SetStartTime_m1813184761 (FxmTestControls_t64800591 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void FxmTestControls::LoadPrefs()
extern "C"  void FxmTestControls_LoadPrefs_m3545917060 (FxmTestControls_t64800591 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void FxmTestControls::SavePrefs()
extern "C"  void FxmTestControls_SavePrefs_m3407056121 (FxmTestControls_t64800591 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void FxmTestControls::SetDefaultSetting()
extern "C"  void FxmTestControls_SetDefaultSetting_m3976622745 (FxmTestControls_t64800591 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void FxmTestControls::AutoSetting(System.Int32,System.Int32,FxmTestControls/AXIS,System.Single,System.Int32,System.Int32,System.Single,System.Single)
extern "C"  void FxmTestControls_AutoSetting_m3150234699 (FxmTestControls_t64800591 * __this, int32_t ___nPlayIndex0, int32_t ___nTransIndex1, int32_t ___nTransAxis2, float ___fDistPerTime3, int32_t ___nRotateIndex4, int32_t ___nMultiShotCount5, float ___fTransRate6, float ___fStartAdjustRate7, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void FxmTestControls::Awake()
extern "C"  void FxmTestControls_Awake_m2068232111 (FxmTestControls_t64800591 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void FxmTestControls::OnEnable()
extern "C"  void FxmTestControls_OnEnable_m3757308266 (FxmTestControls_t64800591 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void FxmTestControls::Start()
extern "C"  void FxmTestControls_Start_m2937073578 (FxmTestControls_t64800591 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void FxmTestControls::Update()
extern "C"  void FxmTestControls_Update_m3978686483 (FxmTestControls_t64800591 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean FxmTestControls::IsAliveAnimation()
extern "C"  bool FxmTestControls_IsAliveAnimation_m2096054313 (FxmTestControls_t64800591 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void FxmTestControls::OnGUIControl()
extern "C"  void FxmTestControls_OnGUIControl_m1885710735 (FxmTestControls_t64800591 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Rect FxmTestControls::GetActionToolbarRect()
extern "C"  Rect_t3681755626  FxmTestControls_GetActionToolbarRect_m1993982307 (FxmTestControls_t64800591 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String FxmTestControls::NgTooltipTooltip(System.String)
extern "C"  String_t* FxmTestControls_NgTooltipTooltip_m1741215652 (FxmTestControls_t64800591 * __this, String_t* ___str0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.GUIContent[] FxmTestControls::GetHcEffectControls_Play(System.Single,System.Single,System.Single,System.Single,System.Single,System.Single,System.Single,System.Single)
extern "C"  GUIContentU5BU5D_t1194435593* FxmTestControls_GetHcEffectControls_Play_m555797371 (Il2CppObject * __this /* static, unused */, float ___fAutoRet0, float ___timeScale1, float ___timeOneShot12, float ___timeRepeat13, float ___timeRepeat24, float ___timeRepeat35, float ___timeRepeat46, float ___timeRepeat57, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.GUIContent[] FxmTestControls::GetHcEffectControls_Trans(FxmTestControls/AXIS)
extern "C"  GUIContentU5BU5D_t1194435593* FxmTestControls_GetHcEffectControls_Trans_m1239737756 (Il2CppObject * __this /* static, unused */, int32_t ___nTransAxis0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.GUIContent[] FxmTestControls::GetHcEffectControls_Rotate()
extern "C"  GUIContentU5BU5D_t1194435593* FxmTestControls_GetHcEffectControls_Rotate_m2161786958 (Il2CppObject * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void FxmTestControls::winActionToolbar(System.Int32)
extern "C"  void FxmTestControls_winActionToolbar_m2497818978 (FxmTestControls_t64800591 * __this, int32_t ___id0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void FxmTestControls::invokeStopTimer()
extern "C"  void FxmTestControls_invokeStopTimer_m3056341661 (FxmTestControls_t64800591 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void FxmTestControls::RunActionControl()
extern "C"  void FxmTestControls_RunActionControl_m3848535688 (FxmTestControls_t64800591 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void FxmTestControls::RunActionControl(System.Int32,System.Int32)
extern "C"  void FxmTestControls_RunActionControl_m1438164628 (FxmTestControls_t64800591 * __this, int32_t ___nPlayIndex0, int32_t ___nTransIndex1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void FxmTestControls::OnActionTransEnd()
extern "C"  void FxmTestControls_OnActionTransEnd_m2164923384 (FxmTestControls_t64800591 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void FxmTestControls::RotateFront(UnityEngine.Transform)
extern "C"  void FxmTestControls_RotateFront_m3354270237 (FxmTestControls_t64800591 * __this, Transform_t3275118058 * ___target0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void FxmTestControls::DelayCreateInstanceEffect(System.Boolean)
extern "C"  void FxmTestControls_DelayCreateInstanceEffect_m3713117930 (FxmTestControls_t64800591 * __this, bool ___bEndMove0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void FxmTestControls::NextInstanceEffect()
extern "C"  void FxmTestControls_NextInstanceEffect_m1704239031 (FxmTestControls_t64800591 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void FxmTestControls::CreateInstanceEffect()
extern "C"  void FxmTestControls_CreateInstanceEffect_m1255527186 (FxmTestControls_t64800591 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void FxmTestControls::SetTimeScale(System.Single)
extern "C"  void FxmTestControls_SetTimeScale_m3327403794 (FxmTestControls_t64800591 * __this, float ___timeScale0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void FxmTestControls::ResumeTimeScale()
extern "C"  void FxmTestControls_ResumeTimeScale_m2055688622 (FxmTestControls_t64800591 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
