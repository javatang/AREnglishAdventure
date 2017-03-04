#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// UnityEngine.GameObject
struct GameObject_t1756533147;
// UnityEngine.ParticleSystem
struct ParticleSystem_t3394631041;

#include "AssemblyU2DCSharp_NcEffectBehaviour813403937.h"
#include "AssemblyU2DCSharp_NcParticleEmit_AttachType414696366.h"
#include "UnityEngine_UnityEngine_Vector32243707580.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// NcParticleEmit
struct  NcParticleEmit_t1623528070  : public NcEffectBehaviour_t813403937
{
public:
	// NcParticleEmit/AttachType NcParticleEmit::m_AttachType
	int32_t ___m_AttachType_9;
	// System.Single NcParticleEmit::m_fDelayTime
	float ___m_fDelayTime_10;
	// System.Single NcParticleEmit::m_fRepeatTime
	float ___m_fRepeatTime_11;
	// System.Int32 NcParticleEmit::m_nRepeatCount
	int32_t ___m_nRepeatCount_12;
	// UnityEngine.GameObject NcParticleEmit::m_ParticlePrefab
	GameObject_t1756533147 * ___m_ParticlePrefab_13;
	// System.Int32 NcParticleEmit::m_EmitCount
	int32_t ___m_EmitCount_14;
	// UnityEngine.Vector3 NcParticleEmit::m_AddStartPos
	Vector3_t2243707580  ___m_AddStartPos_15;
	// UnityEngine.Vector3 NcParticleEmit::m_RandomRange
	Vector3_t2243707580  ___m_RandomRange_16;
	// System.Single NcParticleEmit::m_fStartTime
	float ___m_fStartTime_17;
	// System.Int32 NcParticleEmit::m_nCreateCount
	int32_t ___m_nCreateCount_18;
	// System.Boolean NcParticleEmit::m_bStartAttach
	bool ___m_bStartAttach_19;
	// UnityEngine.GameObject NcParticleEmit::m_CreateGameObject
	GameObject_t1756533147 * ___m_CreateGameObject_20;
	// System.Boolean NcParticleEmit::m_bEnabled
	bool ___m_bEnabled_21;
	// UnityEngine.ParticleSystem NcParticleEmit::m_ps
	ParticleSystem_t3394631041 * ___m_ps_22;

public:
	inline static int32_t get_offset_of_m_AttachType_9() { return static_cast<int32_t>(offsetof(NcParticleEmit_t1623528070, ___m_AttachType_9)); }
	inline int32_t get_m_AttachType_9() const { return ___m_AttachType_9; }
	inline int32_t* get_address_of_m_AttachType_9() { return &___m_AttachType_9; }
	inline void set_m_AttachType_9(int32_t value)
	{
		___m_AttachType_9 = value;
	}

	inline static int32_t get_offset_of_m_fDelayTime_10() { return static_cast<int32_t>(offsetof(NcParticleEmit_t1623528070, ___m_fDelayTime_10)); }
	inline float get_m_fDelayTime_10() const { return ___m_fDelayTime_10; }
	inline float* get_address_of_m_fDelayTime_10() { return &___m_fDelayTime_10; }
	inline void set_m_fDelayTime_10(float value)
	{
		___m_fDelayTime_10 = value;
	}

	inline static int32_t get_offset_of_m_fRepeatTime_11() { return static_cast<int32_t>(offsetof(NcParticleEmit_t1623528070, ___m_fRepeatTime_11)); }
	inline float get_m_fRepeatTime_11() const { return ___m_fRepeatTime_11; }
	inline float* get_address_of_m_fRepeatTime_11() { return &___m_fRepeatTime_11; }
	inline void set_m_fRepeatTime_11(float value)
	{
		___m_fRepeatTime_11 = value;
	}

	inline static int32_t get_offset_of_m_nRepeatCount_12() { return static_cast<int32_t>(offsetof(NcParticleEmit_t1623528070, ___m_nRepeatCount_12)); }
	inline int32_t get_m_nRepeatCount_12() const { return ___m_nRepeatCount_12; }
	inline int32_t* get_address_of_m_nRepeatCount_12() { return &___m_nRepeatCount_12; }
	inline void set_m_nRepeatCount_12(int32_t value)
	{
		___m_nRepeatCount_12 = value;
	}

	inline static int32_t get_offset_of_m_ParticlePrefab_13() { return static_cast<int32_t>(offsetof(NcParticleEmit_t1623528070, ___m_ParticlePrefab_13)); }
	inline GameObject_t1756533147 * get_m_ParticlePrefab_13() const { return ___m_ParticlePrefab_13; }
	inline GameObject_t1756533147 ** get_address_of_m_ParticlePrefab_13() { return &___m_ParticlePrefab_13; }
	inline void set_m_ParticlePrefab_13(GameObject_t1756533147 * value)
	{
		___m_ParticlePrefab_13 = value;
		Il2CppCodeGenWriteBarrier(&___m_ParticlePrefab_13, value);
	}

	inline static int32_t get_offset_of_m_EmitCount_14() { return static_cast<int32_t>(offsetof(NcParticleEmit_t1623528070, ___m_EmitCount_14)); }
	inline int32_t get_m_EmitCount_14() const { return ___m_EmitCount_14; }
	inline int32_t* get_address_of_m_EmitCount_14() { return &___m_EmitCount_14; }
	inline void set_m_EmitCount_14(int32_t value)
	{
		___m_EmitCount_14 = value;
	}

	inline static int32_t get_offset_of_m_AddStartPos_15() { return static_cast<int32_t>(offsetof(NcParticleEmit_t1623528070, ___m_AddStartPos_15)); }
	inline Vector3_t2243707580  get_m_AddStartPos_15() const { return ___m_AddStartPos_15; }
	inline Vector3_t2243707580 * get_address_of_m_AddStartPos_15() { return &___m_AddStartPos_15; }
	inline void set_m_AddStartPos_15(Vector3_t2243707580  value)
	{
		___m_AddStartPos_15 = value;
	}

	inline static int32_t get_offset_of_m_RandomRange_16() { return static_cast<int32_t>(offsetof(NcParticleEmit_t1623528070, ___m_RandomRange_16)); }
	inline Vector3_t2243707580  get_m_RandomRange_16() const { return ___m_RandomRange_16; }
	inline Vector3_t2243707580 * get_address_of_m_RandomRange_16() { return &___m_RandomRange_16; }
	inline void set_m_RandomRange_16(Vector3_t2243707580  value)
	{
		___m_RandomRange_16 = value;
	}

	inline static int32_t get_offset_of_m_fStartTime_17() { return static_cast<int32_t>(offsetof(NcParticleEmit_t1623528070, ___m_fStartTime_17)); }
	inline float get_m_fStartTime_17() const { return ___m_fStartTime_17; }
	inline float* get_address_of_m_fStartTime_17() { return &___m_fStartTime_17; }
	inline void set_m_fStartTime_17(float value)
	{
		___m_fStartTime_17 = value;
	}

	inline static int32_t get_offset_of_m_nCreateCount_18() { return static_cast<int32_t>(offsetof(NcParticleEmit_t1623528070, ___m_nCreateCount_18)); }
	inline int32_t get_m_nCreateCount_18() const { return ___m_nCreateCount_18; }
	inline int32_t* get_address_of_m_nCreateCount_18() { return &___m_nCreateCount_18; }
	inline void set_m_nCreateCount_18(int32_t value)
	{
		___m_nCreateCount_18 = value;
	}

	inline static int32_t get_offset_of_m_bStartAttach_19() { return static_cast<int32_t>(offsetof(NcParticleEmit_t1623528070, ___m_bStartAttach_19)); }
	inline bool get_m_bStartAttach_19() const { return ___m_bStartAttach_19; }
	inline bool* get_address_of_m_bStartAttach_19() { return &___m_bStartAttach_19; }
	inline void set_m_bStartAttach_19(bool value)
	{
		___m_bStartAttach_19 = value;
	}

	inline static int32_t get_offset_of_m_CreateGameObject_20() { return static_cast<int32_t>(offsetof(NcParticleEmit_t1623528070, ___m_CreateGameObject_20)); }
	inline GameObject_t1756533147 * get_m_CreateGameObject_20() const { return ___m_CreateGameObject_20; }
	inline GameObject_t1756533147 ** get_address_of_m_CreateGameObject_20() { return &___m_CreateGameObject_20; }
	inline void set_m_CreateGameObject_20(GameObject_t1756533147 * value)
	{
		___m_CreateGameObject_20 = value;
		Il2CppCodeGenWriteBarrier(&___m_CreateGameObject_20, value);
	}

	inline static int32_t get_offset_of_m_bEnabled_21() { return static_cast<int32_t>(offsetof(NcParticleEmit_t1623528070, ___m_bEnabled_21)); }
	inline bool get_m_bEnabled_21() const { return ___m_bEnabled_21; }
	inline bool* get_address_of_m_bEnabled_21() { return &___m_bEnabled_21; }
	inline void set_m_bEnabled_21(bool value)
	{
		___m_bEnabled_21 = value;
	}

	inline static int32_t get_offset_of_m_ps_22() { return static_cast<int32_t>(offsetof(NcParticleEmit_t1623528070, ___m_ps_22)); }
	inline ParticleSystem_t3394631041 * get_m_ps_22() const { return ___m_ps_22; }
	inline ParticleSystem_t3394631041 ** get_address_of_m_ps_22() { return &___m_ps_22; }
	inline void set_m_ps_22(ParticleSystem_t3394631041 * value)
	{
		___m_ps_22 = value;
		Il2CppCodeGenWriteBarrier(&___m_ps_22, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
