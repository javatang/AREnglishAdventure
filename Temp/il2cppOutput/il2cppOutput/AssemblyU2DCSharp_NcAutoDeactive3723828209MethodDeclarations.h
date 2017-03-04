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

// NcAutoDeactive
struct NcAutoDeactive_t3723828209;
// UnityEngine.GameObject
struct GameObject_t1756533147;

#include "codegen/il2cpp-codegen.h"
#include "UnityEngine_UnityEngine_GameObject1756533147.h"

// System.Void NcAutoDeactive::.ctor()
extern "C"  void NcAutoDeactive__ctor_m1190665196 (NcAutoDeactive_t3723828209 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// NcAutoDeactive NcAutoDeactive::CreateAutoDestruct(UnityEngine.GameObject,System.Single,System.Single,System.Boolean,System.Boolean)
extern "C"  NcAutoDeactive_t3723828209 * NcAutoDeactive_CreateAutoDestruct_m3827063237 (Il2CppObject * __this /* static, unused */, GameObject_t1756533147 * ___baseGameObject0, float ___fLifeTime1, float ___fDestroyTime2, bool ___bSmoothHide3, bool ___bMeshFilterOnlySmoothHide4, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void NcAutoDeactive::Awake()
extern "C"  void NcAutoDeactive_Awake_m558991105 (NcAutoDeactive_t3723828209 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void NcAutoDeactive::OnEnable()
extern "C"  void NcAutoDeactive_OnEnable_m4157234908 (NcAutoDeactive_t3723828209 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void NcAutoDeactive::Start()
extern "C"  void NcAutoDeactive_Start_m1304444252 (NcAutoDeactive_t3723828209 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void NcAutoDeactive::Update()
extern "C"  void NcAutoDeactive_Update_m310571325 (NcAutoDeactive_t3723828209 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void NcAutoDeactive::FixedUpdate()
extern "C"  void NcAutoDeactive_FixedUpdate_m279429399 (NcAutoDeactive_t3723828209 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void NcAutoDeactive::StartDeactive()
extern "C"  void NcAutoDeactive_StartDeactive_m4208852721 (NcAutoDeactive_t3723828209 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void NcAutoDeactive::OnUpdateEffectSpeed(System.Single,System.Boolean)
extern "C"  void NcAutoDeactive_OnUpdateEffectSpeed_m4265897700 (NcAutoDeactive_t3723828209 * __this, float ___fSpeedRate0, bool ___bRuntime1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void NcAutoDeactive::OnSetReplayState()
extern "C"  void NcAutoDeactive_OnSetReplayState_m1703837603 (NcAutoDeactive_t3723828209 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void NcAutoDeactive::OnResetReplayStage(System.Boolean)
extern "C"  void NcAutoDeactive_OnResetReplayStage_m2026485600 (NcAutoDeactive_t3723828209 * __this, bool ___bClearOldParticle0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void NcAutoDeactive::AutoDeactive()
extern "C"  void NcAutoDeactive_AutoDeactive_m2520293148 (NcAutoDeactive_t3723828209 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
