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

// UnityEngine.ParticleSystem
struct ParticleSystem_t3394631041;
// UnityEngine.ParticleSystem/Particle[]
struct ParticleU5BU5D_t574222242;
// UnityEngine.ParticleSystem/IteratorDelegate
struct IteratorDelegate_t2419492168;
// UnityEngine.Transform
struct Transform_t3275118058;

#include "codegen/il2cpp-codegen.h"
#include "UnityEngine_UnityEngine_ParticleSystem_EmissionMod2748003162.h"
#include "UnityEngine_UnityEngine_ParticleSystem3394631041.h"
#include "UnityEngine_UnityEngine_ParticleSystem_IteratorDel2419492168.h"
#include "UnityEngine_UnityEngine_Transform3275118058.h"

// System.Int32 UnityEngine.ParticleSystem::get_particleCount()
extern "C"  int32_t ParticleSystem_get_particleCount_m3737254194 (ParticleSystem_t3394631041 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean UnityEngine.ParticleSystem::get_enableEmission()
extern "C"  bool ParticleSystem_get_enableEmission_m3389363989 (ParticleSystem_t3394631041 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.ParticleSystem::set_enableEmission(System.Boolean)
extern "C"  void ParticleSystem_set_enableEmission_m1222323446 (ParticleSystem_t3394631041 * __this, bool ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Single UnityEngine.ParticleSystem::get_emissionRate()
extern "C"  float ParticleSystem_get_emissionRate_m1144353272 (ParticleSystem_t3394631041 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.ParticleSystem::set_emissionRate(System.Single)
extern "C"  void ParticleSystem_set_emissionRate_m2482228887 (ParticleSystem_t3394631041 * __this, float ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Single UnityEngine.ParticleSystem::get_startSpeed()
extern "C"  float ParticleSystem_get_startSpeed_m1416474346 (ParticleSystem_t3394631041 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.ParticleSystem::set_startSpeed(System.Single)
extern "C"  void ParticleSystem_set_startSpeed_m4170689111 (ParticleSystem_t3394631041 * __this, float ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Single UnityEngine.ParticleSystem::get_startSize()
extern "C"  float ParticleSystem_get_startSize_m3327114244 (ParticleSystem_t3394631041 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.ParticleSystem::set_startSize(System.Single)
extern "C"  void ParticleSystem_set_startSize_m657274193 (ParticleSystem_t3394631041 * __this, float ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Single UnityEngine.ParticleSystem::get_startLifetime()
extern "C"  float ParticleSystem_get_startLifetime_m70433814 (ParticleSystem_t3394631041 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.ParticleSystem::set_startLifetime(System.Single)
extern "C"  void ParticleSystem_set_startLifetime_m1743610511 (ParticleSystem_t3394631041 * __this, float ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.ParticleSystem/EmissionModule UnityEngine.ParticleSystem::get_emission()
extern "C"  EmissionModule_t2748003162  ParticleSystem_get_emission_m3968992617 (ParticleSystem_t3394631041 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.ParticleSystem::SetParticles(UnityEngine.ParticleSystem/Particle[],System.Int32)
extern "C"  void ParticleSystem_SetParticles_m3035584975 (ParticleSystem_t3394631041 * __this, ParticleU5BU5D_t574222242* ___particles0, int32_t ___size1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 UnityEngine.ParticleSystem::GetParticles(UnityEngine.ParticleSystem/Particle[])
extern "C"  int32_t ParticleSystem_GetParticles_m1903763264 (ParticleSystem_t3394631041 * __this, ParticleU5BU5D_t574222242* ___particles0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean UnityEngine.ParticleSystem::Internal_Clear(UnityEngine.ParticleSystem)
extern "C"  bool ParticleSystem_Internal_Clear_m661664011 (Il2CppObject * __this /* static, unused */, ParticleSystem_t3394631041 * ___self0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean UnityEngine.ParticleSystem::Internal_IsAlive(UnityEngine.ParticleSystem)
extern "C"  bool ParticleSystem_Internal_IsAlive_m1667610959 (Il2CppObject * __this /* static, unused */, ParticleSystem_t3394631041 * ___self0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.ParticleSystem::Clear(System.Boolean)
extern "C"  void ParticleSystem_Clear_m4048064080 (ParticleSystem_t3394631041 * __this, bool ___withChildren0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean UnityEngine.ParticleSystem::IsAlive()
extern "C"  bool ParticleSystem_IsAlive_m2418268213 (ParticleSystem_t3394631041 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean UnityEngine.ParticleSystem::IsAlive(System.Boolean)
extern "C"  bool ParticleSystem_IsAlive_m2793794644 (ParticleSystem_t3394631041 * __this, bool ___withChildren0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.ParticleSystem::Emit(System.Int32)
extern "C"  void ParticleSystem_Emit_m649892508 (ParticleSystem_t3394631041 * __this, int32_t ___count0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.ParticleSystem::INTERNAL_CALL_Emit(UnityEngine.ParticleSystem,System.Int32)
extern "C"  void ParticleSystem_INTERNAL_CALL_Emit_m3734159159 (Il2CppObject * __this /* static, unused */, ParticleSystem_t3394631041 * ___self0, int32_t ___count1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean UnityEngine.ParticleSystem::IterateParticleSystems(System.Boolean,UnityEngine.ParticleSystem/IteratorDelegate)
extern "C"  bool ParticleSystem_IterateParticleSystems_m1240416587 (ParticleSystem_t3394631041 * __this, bool ___recurse0, IteratorDelegate_t2419492168 * ___func1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean UnityEngine.ParticleSystem::IterateParticleSystemsRecursive(UnityEngine.Transform,UnityEngine.ParticleSystem/IteratorDelegate)
extern "C"  bool ParticleSystem_IterateParticleSystemsRecursive_m3260878897 (Il2CppObject * __this /* static, unused */, Transform_t3275118058 * ___transform0, IteratorDelegate_t2419492168 * ___func1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean UnityEngine.ParticleSystem::<Clear>m__2(UnityEngine.ParticleSystem)
extern "C"  bool ParticleSystem_U3CClearU3Em__2_m1781329972 (Il2CppObject * __this /* static, unused */, ParticleSystem_t3394631041 * ___ps0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean UnityEngine.ParticleSystem::<IsAlive>m__3(UnityEngine.ParticleSystem)
extern "C"  bool ParticleSystem_U3CIsAliveU3Em__3_m4195117235 (Il2CppObject * __this /* static, unused */, ParticleSystem_t3394631041 * ___ps0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
