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
// UnityEngine.ParticleSystem/EmissionModule
struct EmissionModule_t2748003162;
struct EmissionModule_t2748003162_marshaled_pinvoke;
struct EmissionModule_t2748003162_marshaled_com;

#include "codegen/il2cpp-codegen.h"
#include "UnityEngine_UnityEngine_ParticleSystem_EmissionMod2748003162.h"
#include "UnityEngine_UnityEngine_ParticleSystem3394631041.h"
#include "UnityEngine_UnityEngine_ParticleSystem_MinMaxCurve122563058.h"

// System.Void UnityEngine.ParticleSystem/EmissionModule::.ctor(UnityEngine.ParticleSystem)
extern "C"  void EmissionModule__ctor_m1076689768 (EmissionModule_t2748003162 * __this, ParticleSystem_t3394631041 * ___particleSystem0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.ParticleSystem/EmissionModule::set_enabled(System.Boolean)
extern "C"  void EmissionModule_set_enabled_m4266189783 (EmissionModule_t2748003162 * __this, bool ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean UnityEngine.ParticleSystem/EmissionModule::get_enabled()
extern "C"  bool EmissionModule_get_enabled_m854800010 (EmissionModule_t2748003162 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.ParticleSystem/EmissionModule::set_rateOverTime(UnityEngine.ParticleSystem/MinMaxCurve)
extern "C"  void EmissionModule_set_rateOverTime_m2031054960 (EmissionModule_t2748003162 * __this, MinMaxCurve_t122563058  ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Single UnityEngine.ParticleSystem/EmissionModule::get_rateOverTimeMultiplier()
extern "C"  float EmissionModule_get_rateOverTimeMultiplier_m3456639405 (EmissionModule_t2748003162 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.ParticleSystem/EmissionModule::SetEnabled(UnityEngine.ParticleSystem,System.Boolean)
extern "C"  void EmissionModule_SetEnabled_m1102718738 (Il2CppObject * __this /* static, unused */, ParticleSystem_t3394631041 * ___system0, bool ___value1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean UnityEngine.ParticleSystem/EmissionModule::GetEnabled(UnityEngine.ParticleSystem)
extern "C"  bool EmissionModule_GetEnabled_m2195741125 (Il2CppObject * __this /* static, unused */, ParticleSystem_t3394631041 * ___system0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.ParticleSystem/EmissionModule::SetRateOverTime(UnityEngine.ParticleSystem,UnityEngine.ParticleSystem/MinMaxCurve&)
extern "C"  void EmissionModule_SetRateOverTime_m1613592011 (Il2CppObject * __this /* static, unused */, ParticleSystem_t3394631041 * ___system0, MinMaxCurve_t122563058 * ___curve1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Single UnityEngine.ParticleSystem/EmissionModule::GetRateOverTimeMultiplier(UnityEngine.ParticleSystem)
extern "C"  float EmissionModule_GetRateOverTimeMultiplier_m2414796504 (Il2CppObject * __this /* static, unused */, ParticleSystem_t3394631041 * ___system0, const MethodInfo* method) IL2CPP_METHOD_ATTR;

// Methods for marshaling
struct EmissionModule_t2748003162;
struct EmissionModule_t2748003162_marshaled_pinvoke;

extern "C" void EmissionModule_t2748003162_marshal_pinvoke(const EmissionModule_t2748003162& unmarshaled, EmissionModule_t2748003162_marshaled_pinvoke& marshaled);
extern "C" void EmissionModule_t2748003162_marshal_pinvoke_back(const EmissionModule_t2748003162_marshaled_pinvoke& marshaled, EmissionModule_t2748003162& unmarshaled);
extern "C" void EmissionModule_t2748003162_marshal_pinvoke_cleanup(EmissionModule_t2748003162_marshaled_pinvoke& marshaled);

// Methods for marshaling
struct EmissionModule_t2748003162;
struct EmissionModule_t2748003162_marshaled_com;

extern "C" void EmissionModule_t2748003162_marshal_com(const EmissionModule_t2748003162& unmarshaled, EmissionModule_t2748003162_marshaled_com& marshaled);
extern "C" void EmissionModule_t2748003162_marshal_com_back(const EmissionModule_t2748003162_marshaled_com& marshaled, EmissionModule_t2748003162& unmarshaled);
extern "C" void EmissionModule_t2748003162_marshal_com_cleanup(EmissionModule_t2748003162_marshaled_com& marshaled);
