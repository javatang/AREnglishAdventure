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

// NsSharedManager
struct NsSharedManager_t634208341;
// UnityEngine.GameObject
struct GameObject_t1756533147;
// UnityEngine.AudioSource
struct AudioSource_t1135106623;
// UnityEngine.AudioClip
struct AudioClip_t1932558630;
// System.Collections.Generic.List`1<UnityEngine.AudioSource>
struct List_1_t504227755;

#include "codegen/il2cpp-codegen.h"
#include "UnityEngine_UnityEngine_GameObject1756533147.h"
#include "UnityEngine_UnityEngine_Vector32243707580.h"
#include "UnityEngine_UnityEngine_AudioClip1932558630.h"

// System.Void NsSharedManager::.ctor()
extern "C"  void NsSharedManager__ctor_m3870615040 (NsSharedManager_t634208341 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// NsSharedManager NsSharedManager::get_inst()
extern "C"  NsSharedManager_t634208341 * NsSharedManager_get_inst_m4075114581 (Il2CppObject * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.GameObject NsSharedManager::GetSharedParticleGameObject(UnityEngine.GameObject)
extern "C"  GameObject_t1756533147 * NsSharedManager_GetSharedParticleGameObject_m3717713771 (NsSharedManager_t634208341 * __this, GameObject_t1756533147 * ___originalParticlePrefab0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void NsSharedManager::EmitSharedParticleSystem(UnityEngine.GameObject,System.Int32,UnityEngine.Vector3)
extern "C"  void NsSharedManager_EmitSharedParticleSystem_m832302185 (NsSharedManager_t634208341 * __this, GameObject_t1756533147 * ___originalParticlePrefab0, int32_t ___nEmitCount1, Vector3_t2243707580  ___worldPos2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.AudioSource NsSharedManager::GetSharedAudioSource(UnityEngine.AudioClip,System.Int32,System.Boolean,System.Single,System.Single)
extern "C"  AudioSource_t1135106623 * NsSharedManager_GetSharedAudioSource_m3047794978 (NsSharedManager_t634208341 * __this, AudioClip_t1932558630 * ___audioClip0, int32_t ___nPriority1, bool ___bLoop2, float ___fVolume3, float ___fPitch4, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.AudioSource NsSharedManager::AddAudioSource(System.Collections.Generic.List`1<UnityEngine.AudioSource>,UnityEngine.AudioClip,System.Int32,System.Boolean,System.Single,System.Single)
extern "C"  AudioSource_t1135106623 * NsSharedManager_AddAudioSource_m113240666 (NsSharedManager_t634208341 * __this, List_1_t504227755 * ___sourceList0, AudioClip_t1932558630 * ___audioClip1, int32_t ___nPriority2, bool ___bLoop3, float ___fVolume4, float ___fPitch5, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void NsSharedManager::PlaySharedAudioSource(System.Boolean,UnityEngine.AudioClip,System.Int32,System.Boolean,System.Single,System.Single)
extern "C"  void NsSharedManager_PlaySharedAudioSource_m2547688774 (NsSharedManager_t634208341 * __this, bool ___bUniquePlay0, AudioClip_t1932558630 * ___audioClip1, int32_t ___nPriority2, bool ___bLoop3, float ___fVolume4, float ___fPitch5, const MethodInfo* method) IL2CPP_METHOD_ATTR;
