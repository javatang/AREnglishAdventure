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

// FxmTestSimulate
struct FxmTestSimulate_t3728900157;
// UnityEngine.Component
struct Component_t3819376471;

#include "codegen/il2cpp-codegen.h"
#include "UnityEngine_UnityEngine_Component3819376471.h"
#include "AssemblyU2DCSharp_FxmTestControls_AXIS10529083.h"
#include "UnityEngine_UnityEngine_Vector32243707580.h"

// System.Void FxmTestSimulate::.ctor()
extern "C"  void FxmTestSimulate__ctor_m4203353378 (FxmTestSimulate_t3728900157 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void FxmTestSimulate::Init(UnityEngine.Component,System.Int32)
extern "C"  void FxmTestSimulate_Init_m1325084359 (FxmTestSimulate_t3728900157 * __this, Component_t3819376471 * ___fxmEffectControls0, int32_t ___nMultiShotCount1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void FxmTestSimulate::SimulateMove(FxmTestControls/AXIS,System.Single,System.Single,System.Boolean)
extern "C"  void FxmTestSimulate_SimulateMove_m22866693 (FxmTestSimulate_t3728900157 * __this, int32_t ___nTransAxis0, float ___fHalfDist1, float ___fSpeed2, bool ___bRotFront3, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void FxmTestSimulate::SimulateArc(System.Single,System.Single,System.Boolean)
extern "C"  void FxmTestSimulate_SimulateArc_m2212809201 (FxmTestSimulate_t3728900157 * __this, float ___fHalfDist0, float ___fSpeed1, bool ___bRotFront2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void FxmTestSimulate::SimulateFall(System.Single,System.Single,System.Boolean)
extern "C"  void FxmTestSimulate_SimulateFall_m371859190 (FxmTestSimulate_t3728900157 * __this, float ___fHeight0, float ___fSpeed1, bool ___bRotFront2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void FxmTestSimulate::SimulateRaise(System.Single,System.Single,System.Boolean)
extern "C"  void FxmTestSimulate_SimulateRaise_m2373245045 (FxmTestSimulate_t3728900157 * __this, float ___fHeight0, float ___fSpeed1, bool ___bRotFront2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void FxmTestSimulate::SimulateCircle(System.Single,System.Single,System.Boolean)
extern "C"  void FxmTestSimulate_SimulateCircle_m4071848631 (FxmTestSimulate_t3728900157 * __this, float ___fRadius0, float ___fSpeed1, bool ___bRotFront2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void FxmTestSimulate::SimulateTornado(System.Single,System.Single,System.Single,System.Boolean)
extern "C"  void FxmTestSimulate_SimulateTornado_m3504005469 (FxmTestSimulate_t3728900157 * __this, float ___fRadius0, float ___fHeight1, float ___fSpeed2, bool ___bRotFront3, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void FxmTestSimulate::SimulateScale(FxmTestControls/AXIS,System.Single,System.Single,System.Single,System.Boolean)
extern "C"  void FxmTestSimulate_SimulateScale_m2025687341 (FxmTestSimulate_t3728900157 * __this, int32_t ___nTransAxis0, float ___fHalfDist1, float ___fStartPosition2, float ___fSpeed3, bool ___bRotFront4, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void FxmTestSimulate::Stop()
extern "C"  void FxmTestSimulate_Stop_m4182337464 (FxmTestSimulate_t3728900157 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void FxmTestSimulate::SimulateStart(UnityEngine.Vector3,System.Single,System.Boolean)
extern "C"  void FxmTestSimulate_SimulateStart_m2826155241 (FxmTestSimulate_t3728900157 * __this, Vector3_t2243707580  ___startPos0, float ___fSpeed1, bool ___bRotFront2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Vector3 FxmTestSimulate::GetArcPos(System.Single)
extern "C"  Vector3_t2243707580  FxmTestSimulate_GetArcPos_m925876013 (FxmTestSimulate_t3728900157 * __this, float ___fTimeRate0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void FxmTestSimulate::Awake()
extern "C"  void FxmTestSimulate_Awake_m791410089 (FxmTestSimulate_t3728900157 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void FxmTestSimulate::Start()
extern "C"  void FxmTestSimulate_Start_m646091074 (FxmTestSimulate_t3728900157 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void FxmTestSimulate::Update()
extern "C"  void FxmTestSimulate_Update_m1765431461 (FxmTestSimulate_t3728900157 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void FxmTestSimulate::FixedUpdate()
extern "C"  void FxmTestSimulate_FixedUpdate_m2179072667 (FxmTestSimulate_t3728900157 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void FxmTestSimulate::LateUpdate()
extern "C"  void FxmTestSimulate_LateUpdate_m3171804969 (FxmTestSimulate_t3728900157 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void FxmTestSimulate::OnMoveEnd()
extern "C"  void FxmTestSimulate_OnMoveEnd_m521988711 (FxmTestSimulate_t3728900157 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void FxmTestSimulate::.cctor()
extern "C"  void FxmTestSimulate__cctor_m3557596679 (Il2CppObject * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
