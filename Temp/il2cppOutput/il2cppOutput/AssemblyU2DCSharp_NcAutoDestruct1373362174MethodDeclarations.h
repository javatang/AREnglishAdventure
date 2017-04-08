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

// NcAutoDestruct
struct NcAutoDestruct_t1373362174;
// UnityEngine.GameObject
struct GameObject_t1756533147;

#include "codegen/il2cpp-codegen.h"
#include "UnityEngine_UnityEngine_GameObject1756533147.h"

// System.Void NcAutoDestruct::.ctor()
extern "C"  void NcAutoDestruct__ctor_m2836335435 (NcAutoDestruct_t1373362174 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// NcAutoDestruct NcAutoDestruct::CreateAutoDestruct(UnityEngine.GameObject,System.Single,System.Single,System.Boolean,System.Boolean)
extern "C"  NcAutoDestruct_t1373362174 * NcAutoDestruct_CreateAutoDestruct_m1107226213 (Il2CppObject * __this /* static, unused */, GameObject_t1756533147 * ___baseGameObject0, float ___fLifeTime1, float ___fDestroyTime2, bool ___bSmoothHide3, bool ___bMeshFilterOnlySmoothHide4, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void NcAutoDestruct::Awake()
extern "C"  void NcAutoDestruct_Awake_m952941438 (NcAutoDestruct_t1373362174 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void NcAutoDestruct::Start()
extern "C"  void NcAutoDestruct_Start_m1763326815 (NcAutoDestruct_t1373362174 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void NcAutoDestruct::Update()
extern "C"  void NcAutoDestruct_Update_m106555916 (NcAutoDestruct_t1373362174 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void NcAutoDestruct::FixedUpdate()
extern "C"  void NcAutoDestruct_FixedUpdate_m1784140502 (NcAutoDestruct_t1373362174 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void NcAutoDestruct::StartDestroy()
extern "C"  void NcAutoDestruct_StartDestroy_m1121844933 (NcAutoDestruct_t1373362174 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void NcAutoDestruct::OnUpdateEffectSpeed(System.Single,System.Boolean)
extern "C"  void NcAutoDestruct_OnUpdateEffectSpeed_m1777358469 (NcAutoDestruct_t1373362174 * __this, float ___fSpeedRate0, bool ___bRuntime1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void NcAutoDestruct::OnSetReplayState()
extern "C"  void NcAutoDestruct_OnSetReplayState_m3884946580 (NcAutoDestruct_t1373362174 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void NcAutoDestruct::OnResetReplayStage(System.Boolean)
extern "C"  void NcAutoDestruct_OnResetReplayStage_m3159709923 (NcAutoDestruct_t1373362174 * __this, bool ___bClearOldParticle0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void NcAutoDestruct::AutoDestruct()
extern "C"  void NcAutoDestruct_AutoDestruct_m990585340 (NcAutoDestruct_t1373362174 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
