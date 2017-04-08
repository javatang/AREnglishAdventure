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

// NcParticleSpiral
struct NcParticleSpiral_t2695580040;

#include "codegen/il2cpp-codegen.h"
#include "AssemblyU2DCSharp_NcParticleSpiral_SpiralSettings359063377.h"

// System.Void NcParticleSpiral::.ctor()
extern "C"  void NcParticleSpiral__ctor_m2807665911 (NcParticleSpiral_t2695580040 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 NcParticleSpiral::GetAnimationState()
extern "C"  int32_t NcParticleSpiral_GetAnimationState_m640914582 (NcParticleSpiral_t2695580040 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void NcParticleSpiral::RandomizeEditor()
extern "C"  void NcParticleSpiral_RandomizeEditor_m481143987 (NcParticleSpiral_t2695580040 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void NcParticleSpiral::Start()
extern "C"  void NcParticleSpiral_Start_m198194291 (NcParticleSpiral_t2695580040 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void NcParticleSpiral::SpawnEffect()
extern "C"  void NcParticleSpiral_SpawnEffect_m1883195379 (NcParticleSpiral_t2695580040 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void NcParticleSpiral::Update()
extern "C"  void NcParticleSpiral_Update_m2261515878 (NcParticleSpiral_t2695580040 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void NcParticleSpiral::LateUpdate()
extern "C"  void NcParticleSpiral_LateUpdate_m2103383218 (NcParticleSpiral_t2695580040 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// NcParticleSpiral/SpiralSettings NcParticleSpiral::getSettings()
extern "C"  SpiralSettings_t359063377  NcParticleSpiral_getSettings_m3353391952 (NcParticleSpiral_t2695580040 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// NcParticleSpiral/SpiralSettings NcParticleSpiral::resetEffect(System.Boolean,NcParticleSpiral/SpiralSettings)
extern "C"  SpiralSettings_t359063377  NcParticleSpiral_resetEffect_m3656926189 (NcParticleSpiral_t2695580040 * __this, bool ___killCurrent0, SpiralSettings_t359063377  ___settings1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// NcParticleSpiral/SpiralSettings NcParticleSpiral::resetEffectToDefaults(System.Boolean)
extern "C"  SpiralSettings_t359063377  NcParticleSpiral_resetEffectToDefaults_m1663126337 (NcParticleSpiral_t2695580040 * __this, bool ___killCurrent0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// NcParticleSpiral/SpiralSettings NcParticleSpiral::randomizeEffect(System.Boolean)
extern "C"  SpiralSettings_t359063377  NcParticleSpiral_randomizeEffect_m331484390 (NcParticleSpiral_t2695580040 * __this, bool ___killCurrent0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void NcParticleSpiral::killCurrentEffects()
extern "C"  void NcParticleSpiral_killCurrentEffects_m2733510566 (NcParticleSpiral_t2695580040 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void NcParticleSpiral::OnUpdateEffectSpeed(System.Single,System.Boolean)
extern "C"  void NcParticleSpiral_OnUpdateEffectSpeed_m58731565 (NcParticleSpiral_t2695580040 * __this, float ___fSpeedRate0, bool ___bRuntime1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
