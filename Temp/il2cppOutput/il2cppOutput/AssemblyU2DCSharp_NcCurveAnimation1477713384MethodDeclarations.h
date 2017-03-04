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

// NcCurveAnimation
struct NcCurveAnimation_t1477713384;
// UnityEngine.MeshFilter
struct MeshFilter_t3026937449;
// NcCurveAnimation/NcInfoCurve
struct NcInfoCurve_t575754313;
// System.String
struct String_t;
// UnityEngine.Material
struct Material_t193706927;

#include "codegen/il2cpp-codegen.h"
#include "UnityEngine_UnityEngine_MeshFilter3026937449.h"
#include "UnityEngine_UnityEngine_Color2020392075.h"
#include "AssemblyU2DCSharp_NcCurveAnimation_NcInfoCurve575754313.h"
#include "AssemblyU2DCSharp_NcCurveAnimation1477713384.h"
#include "mscorlib_System_String2029220233.h"
#include "UnityEngine_UnityEngine_Material193706927.h"

// System.Void NcCurveAnimation::.ctor()
extern "C"  void NcCurveAnimation__ctor_m3414359127 (NcCurveAnimation_t1477713384 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 NcCurveAnimation::GetAnimationState()
extern "C"  int32_t NcCurveAnimation_GetAnimationState_m2226222742 (NcCurveAnimation_t1477713384 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void NcCurveAnimation::ResetPosition()
extern "C"  void NcCurveAnimation_ResetPosition_m3527032871 (NcCurveAnimation_t1477713384 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void NcCurveAnimation::ResetAnimation()
extern "C"  void NcCurveAnimation_ResetAnimation_m3785455212 (NcCurveAnimation_t1477713384 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void NcCurveAnimation::AdjustfElapsedTime(System.Single)
extern "C"  void NcCurveAnimation_AdjustfElapsedTime_m2662454200 (NcCurveAnimation_t1477713384 * __this, float ___fAddStartTime0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Single NcCurveAnimation::GetRepeatedRate()
extern "C"  float NcCurveAnimation_GetRepeatedRate_m2989273723 (NcCurveAnimation_t1477713384 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void NcCurveAnimation::Awake()
extern "C"  void NcCurveAnimation_Awake_m4043655172 (NcCurveAnimation_t1477713384 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void NcCurveAnimation::Start()
extern "C"  void NcCurveAnimation_Start_m1844621011 (NcCurveAnimation_t1477713384 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void NcCurveAnimation::LateUpdate()
extern "C"  void NcCurveAnimation_LateUpdate_m463148882 (NcCurveAnimation_t1477713384 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void NcCurveAnimation::InitAnimation()
extern "C"  void NcCurveAnimation_InitAnimation_m3922252047 (NcCurveAnimation_t1477713384 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void NcCurveAnimation::UpdateAnimation(System.Single)
extern "C"  void NcCurveAnimation_UpdateAnimation_m562455465 (NcCurveAnimation_t1477713384 * __this, float ___fElapsedRate0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void NcCurveAnimation::ChangeMeshColor(UnityEngine.MeshFilter,UnityEngine.Color)
extern "C"  void NcCurveAnimation_ChangeMeshColor_m921435401 (NcCurveAnimation_t1477713384 * __this, MeshFilter_t3026937449 * ___mFilter0, Color_t2020392075  ___tarColor1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void NcCurveAnimation::SetChildMaterialColor(NcCurveAnimation/NcInfoCurve,System.Single,System.Int32)
extern "C"  void NcCurveAnimation_SetChildMaterialColor_m4237972532 (NcCurveAnimation_t1477713384 * __this, NcInfoCurve_t575754313 * ___curveInfo0, float ___fValue1, int32_t ___arrayIndex2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Single NcCurveAnimation::GetChildNextColorValue(NcCurveAnimation/NcInfoCurve,System.Int32,System.Single,System.Int32)
extern "C"  float NcCurveAnimation_GetChildNextColorValue_m4101449862 (NcCurveAnimation_t1477713384 * __this, NcInfoCurve_t575754313 * ___curveInfo0, int32_t ___nIndex1, float ___fValue2, int32_t ___arrayIndex3, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Single NcCurveAnimation::GetNextValue(NcCurveAnimation/NcInfoCurve,System.Int32,System.Single)
extern "C"  float NcCurveAnimation_GetNextValue_m8421696 (NcCurveAnimation_t1477713384 * __this, NcInfoCurve_t575754313 * ___curveInfo0, int32_t ___nIndex1, float ___fValue2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Single NcCurveAnimation::GetNextScale(NcCurveAnimation/NcInfoCurve,System.Int32,System.Single)
extern "C"  float NcCurveAnimation_GetNextScale_m1844569119 (NcCurveAnimation_t1477713384 * __this, NcInfoCurve_t575754313 * ___curveInfo0, int32_t ___nIndex1, float ___fValue2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Single NcCurveAnimation::GetElapsedRate()
extern "C"  float NcCurveAnimation_GetElapsedRate_m798700199 (NcCurveAnimation_t1477713384 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void NcCurveAnimation::CopyTo(NcCurveAnimation,System.Boolean)
extern "C"  void NcCurveAnimation_CopyTo_m3517736086 (NcCurveAnimation_t1477713384 * __this, NcCurveAnimation_t1477713384 * ___target0, bool ___bCurveOnly1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void NcCurveAnimation::AppendTo(NcCurveAnimation,System.Boolean)
extern "C"  void NcCurveAnimation_AppendTo_m3475226137 (NcCurveAnimation_t1477713384 * __this, NcCurveAnimation_t1477713384 * ___target0, bool ___bCurveOnly1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// NcCurveAnimation/NcInfoCurve NcCurveAnimation::GetCurveInfo(System.Int32)
extern "C"  NcInfoCurve_t575754313 * NcCurveAnimation_GetCurveInfo_m3440466169 (NcCurveAnimation_t1477713384 * __this, int32_t ___nIndex0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// NcCurveAnimation/NcInfoCurve NcCurveAnimation::GetCurveInfo(System.String)
extern "C"  NcInfoCurve_t575754313 * NcCurveAnimation_GetCurveInfo_m3770544958 (NcCurveAnimation_t1477713384 * __this, String_t* ___curveName0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// NcCurveAnimation/NcInfoCurve NcCurveAnimation::SetCurveInfo(System.Int32,NcCurveAnimation/NcInfoCurve)
extern "C"  NcInfoCurve_t575754313 * NcCurveAnimation_SetCurveInfo_m2083982134 (NcCurveAnimation_t1477713384 * __this, int32_t ___nIndex0, NcInfoCurve_t575754313 * ___newInfo1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 NcCurveAnimation::AddCurveInfo()
extern "C"  int32_t NcCurveAnimation_AddCurveInfo_m2312490573 (NcCurveAnimation_t1477713384 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 NcCurveAnimation::AddCurveInfo(NcCurveAnimation/NcInfoCurve)
extern "C"  int32_t NcCurveAnimation_AddCurveInfo_m3226669772 (NcCurveAnimation_t1477713384 * __this, NcInfoCurve_t575754313 * ___addCurveInfo0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void NcCurveAnimation::DeleteCurveInfo(System.Int32)
extern "C"  void NcCurveAnimation_DeleteCurveInfo_m2527134316 (NcCurveAnimation_t1477713384 * __this, int32_t ___nIndex0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void NcCurveAnimation::ClearAllCurveInfo()
extern "C"  void NcCurveAnimation_ClearAllCurveInfo_m1875943196 (NcCurveAnimation_t1477713384 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 NcCurveAnimation::GetCurveInfoCount()
extern "C"  int32_t NcCurveAnimation_GetCurveInfoCount_m828526869 (NcCurveAnimation_t1477713384 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void NcCurveAnimation::SortCurveInfo()
extern "C"  void NcCurveAnimation_SortCurveInfo_m3997627564 (NcCurveAnimation_t1477713384 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean NcCurveAnimation::CheckInvalidOption()
extern "C"  bool NcCurveAnimation_CheckInvalidOption_m2679689255 (NcCurveAnimation_t1477713384 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean NcCurveAnimation::CheckInvalidOption(System.Int32)
extern "C"  bool NcCurveAnimation_CheckInvalidOption_m4098102890 (NcCurveAnimation_t1477713384 * __this, int32_t ___nSrcIndex0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void NcCurveAnimation::OnUpdateEffectSpeed(System.Single,System.Boolean)
extern "C"  void NcCurveAnimation_OnUpdateEffectSpeed_m2050377389 (NcCurveAnimation_t1477713384 * __this, float ___fSpeedRate0, bool ___bRuntime1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void NcCurveAnimation::OnSetReplayState()
extern "C"  void NcCurveAnimation_OnSetReplayState_m488629582 (NcCurveAnimation_t1477713384 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void NcCurveAnimation::OnResetReplayStage(System.Boolean)
extern "C"  void NcCurveAnimation_OnResetReplayStage_m4076210959 (NcCurveAnimation_t1477713384 * __this, bool ___bClearOldParticle0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String NcCurveAnimation::Ng_GetMaterialColorName(UnityEngine.Material)
extern "C"  String_t* NcCurveAnimation_Ng_GetMaterialColorName_m1870361547 (Il2CppObject * __this /* static, unused */, Material_t193706927 * ___mat0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
