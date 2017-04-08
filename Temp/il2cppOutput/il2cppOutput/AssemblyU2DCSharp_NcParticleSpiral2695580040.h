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

#include "AssemblyU2DCSharp_NcEffectBehaviour813403937.h"
#include "AssemblyU2DCSharp_NcParticleSpiral_SpiralSettings359063377.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// NcParticleSpiral
struct  NcParticleSpiral_t2695580040  : public NcEffectBehaviour_t813403937
{
public:
	// System.Single NcParticleSpiral::m_fDelayTime
	float ___m_fDelayTime_9;
	// System.Single NcParticleSpiral::m_fStartTime
	float ___m_fStartTime_10;
	// UnityEngine.GameObject NcParticleSpiral::m_ParticlePrefab
	GameObject_t1756533147 * ___m_ParticlePrefab_11;
	// System.Int32 NcParticleSpiral::m_nNumberOfArms
	int32_t ___m_nNumberOfArms_12;
	// System.Int32 NcParticleSpiral::m_nParticlesPerArm
	int32_t ___m_nParticlesPerArm_13;
	// System.Single NcParticleSpiral::m_fParticleSeparation
	float ___m_fParticleSeparation_14;
	// System.Single NcParticleSpiral::m_fTurnDistance
	float ___m_fTurnDistance_15;
	// System.Single NcParticleSpiral::m_fVerticalTurnDistance
	float ___m_fVerticalTurnDistance_16;
	// System.Single NcParticleSpiral::m_fOriginOffset
	float ___m_fOriginOffset_17;
	// System.Single NcParticleSpiral::m_fTurnSpeed
	float ___m_fTurnSpeed_18;
	// System.Single NcParticleSpiral::m_fFadeValue
	float ___m_fFadeValue_19;
	// System.Single NcParticleSpiral::m_fSizeValue
	float ___m_fSizeValue_20;
	// System.Int32 NcParticleSpiral::m_nNumberOfSpawns
	int32_t ___m_nNumberOfSpawns_21;
	// System.Single NcParticleSpiral::m_fSpawnRate
	float ___m_fSpawnRate_22;
	// System.Single NcParticleSpiral::timeOfLastSpawn
	float ___timeOfLastSpawn_41;
	// System.Int32 NcParticleSpiral::spawnCount
	int32_t ___spawnCount_42;
	// System.Int32 NcParticleSpiral::totParticles
	int32_t ___totParticles_43;
	// NcParticleSpiral/SpiralSettings NcParticleSpiral::defaultSettings
	SpiralSettings_t359063377  ___defaultSettings_44;

public:
	inline static int32_t get_offset_of_m_fDelayTime_9() { return static_cast<int32_t>(offsetof(NcParticleSpiral_t2695580040, ___m_fDelayTime_9)); }
	inline float get_m_fDelayTime_9() const { return ___m_fDelayTime_9; }
	inline float* get_address_of_m_fDelayTime_9() { return &___m_fDelayTime_9; }
	inline void set_m_fDelayTime_9(float value)
	{
		___m_fDelayTime_9 = value;
	}

	inline static int32_t get_offset_of_m_fStartTime_10() { return static_cast<int32_t>(offsetof(NcParticleSpiral_t2695580040, ___m_fStartTime_10)); }
	inline float get_m_fStartTime_10() const { return ___m_fStartTime_10; }
	inline float* get_address_of_m_fStartTime_10() { return &___m_fStartTime_10; }
	inline void set_m_fStartTime_10(float value)
	{
		___m_fStartTime_10 = value;
	}

	inline static int32_t get_offset_of_m_ParticlePrefab_11() { return static_cast<int32_t>(offsetof(NcParticleSpiral_t2695580040, ___m_ParticlePrefab_11)); }
	inline GameObject_t1756533147 * get_m_ParticlePrefab_11() const { return ___m_ParticlePrefab_11; }
	inline GameObject_t1756533147 ** get_address_of_m_ParticlePrefab_11() { return &___m_ParticlePrefab_11; }
	inline void set_m_ParticlePrefab_11(GameObject_t1756533147 * value)
	{
		___m_ParticlePrefab_11 = value;
		Il2CppCodeGenWriteBarrier(&___m_ParticlePrefab_11, value);
	}

	inline static int32_t get_offset_of_m_nNumberOfArms_12() { return static_cast<int32_t>(offsetof(NcParticleSpiral_t2695580040, ___m_nNumberOfArms_12)); }
	inline int32_t get_m_nNumberOfArms_12() const { return ___m_nNumberOfArms_12; }
	inline int32_t* get_address_of_m_nNumberOfArms_12() { return &___m_nNumberOfArms_12; }
	inline void set_m_nNumberOfArms_12(int32_t value)
	{
		___m_nNumberOfArms_12 = value;
	}

	inline static int32_t get_offset_of_m_nParticlesPerArm_13() { return static_cast<int32_t>(offsetof(NcParticleSpiral_t2695580040, ___m_nParticlesPerArm_13)); }
	inline int32_t get_m_nParticlesPerArm_13() const { return ___m_nParticlesPerArm_13; }
	inline int32_t* get_address_of_m_nParticlesPerArm_13() { return &___m_nParticlesPerArm_13; }
	inline void set_m_nParticlesPerArm_13(int32_t value)
	{
		___m_nParticlesPerArm_13 = value;
	}

	inline static int32_t get_offset_of_m_fParticleSeparation_14() { return static_cast<int32_t>(offsetof(NcParticleSpiral_t2695580040, ___m_fParticleSeparation_14)); }
	inline float get_m_fParticleSeparation_14() const { return ___m_fParticleSeparation_14; }
	inline float* get_address_of_m_fParticleSeparation_14() { return &___m_fParticleSeparation_14; }
	inline void set_m_fParticleSeparation_14(float value)
	{
		___m_fParticleSeparation_14 = value;
	}

	inline static int32_t get_offset_of_m_fTurnDistance_15() { return static_cast<int32_t>(offsetof(NcParticleSpiral_t2695580040, ___m_fTurnDistance_15)); }
	inline float get_m_fTurnDistance_15() const { return ___m_fTurnDistance_15; }
	inline float* get_address_of_m_fTurnDistance_15() { return &___m_fTurnDistance_15; }
	inline void set_m_fTurnDistance_15(float value)
	{
		___m_fTurnDistance_15 = value;
	}

	inline static int32_t get_offset_of_m_fVerticalTurnDistance_16() { return static_cast<int32_t>(offsetof(NcParticleSpiral_t2695580040, ___m_fVerticalTurnDistance_16)); }
	inline float get_m_fVerticalTurnDistance_16() const { return ___m_fVerticalTurnDistance_16; }
	inline float* get_address_of_m_fVerticalTurnDistance_16() { return &___m_fVerticalTurnDistance_16; }
	inline void set_m_fVerticalTurnDistance_16(float value)
	{
		___m_fVerticalTurnDistance_16 = value;
	}

	inline static int32_t get_offset_of_m_fOriginOffset_17() { return static_cast<int32_t>(offsetof(NcParticleSpiral_t2695580040, ___m_fOriginOffset_17)); }
	inline float get_m_fOriginOffset_17() const { return ___m_fOriginOffset_17; }
	inline float* get_address_of_m_fOriginOffset_17() { return &___m_fOriginOffset_17; }
	inline void set_m_fOriginOffset_17(float value)
	{
		___m_fOriginOffset_17 = value;
	}

	inline static int32_t get_offset_of_m_fTurnSpeed_18() { return static_cast<int32_t>(offsetof(NcParticleSpiral_t2695580040, ___m_fTurnSpeed_18)); }
	inline float get_m_fTurnSpeed_18() const { return ___m_fTurnSpeed_18; }
	inline float* get_address_of_m_fTurnSpeed_18() { return &___m_fTurnSpeed_18; }
	inline void set_m_fTurnSpeed_18(float value)
	{
		___m_fTurnSpeed_18 = value;
	}

	inline static int32_t get_offset_of_m_fFadeValue_19() { return static_cast<int32_t>(offsetof(NcParticleSpiral_t2695580040, ___m_fFadeValue_19)); }
	inline float get_m_fFadeValue_19() const { return ___m_fFadeValue_19; }
	inline float* get_address_of_m_fFadeValue_19() { return &___m_fFadeValue_19; }
	inline void set_m_fFadeValue_19(float value)
	{
		___m_fFadeValue_19 = value;
	}

	inline static int32_t get_offset_of_m_fSizeValue_20() { return static_cast<int32_t>(offsetof(NcParticleSpiral_t2695580040, ___m_fSizeValue_20)); }
	inline float get_m_fSizeValue_20() const { return ___m_fSizeValue_20; }
	inline float* get_address_of_m_fSizeValue_20() { return &___m_fSizeValue_20; }
	inline void set_m_fSizeValue_20(float value)
	{
		___m_fSizeValue_20 = value;
	}

	inline static int32_t get_offset_of_m_nNumberOfSpawns_21() { return static_cast<int32_t>(offsetof(NcParticleSpiral_t2695580040, ___m_nNumberOfSpawns_21)); }
	inline int32_t get_m_nNumberOfSpawns_21() const { return ___m_nNumberOfSpawns_21; }
	inline int32_t* get_address_of_m_nNumberOfSpawns_21() { return &___m_nNumberOfSpawns_21; }
	inline void set_m_nNumberOfSpawns_21(int32_t value)
	{
		___m_nNumberOfSpawns_21 = value;
	}

	inline static int32_t get_offset_of_m_fSpawnRate_22() { return static_cast<int32_t>(offsetof(NcParticleSpiral_t2695580040, ___m_fSpawnRate_22)); }
	inline float get_m_fSpawnRate_22() const { return ___m_fSpawnRate_22; }
	inline float* get_address_of_m_fSpawnRate_22() { return &___m_fSpawnRate_22; }
	inline void set_m_fSpawnRate_22(float value)
	{
		___m_fSpawnRate_22 = value;
	}

	inline static int32_t get_offset_of_timeOfLastSpawn_41() { return static_cast<int32_t>(offsetof(NcParticleSpiral_t2695580040, ___timeOfLastSpawn_41)); }
	inline float get_timeOfLastSpawn_41() const { return ___timeOfLastSpawn_41; }
	inline float* get_address_of_timeOfLastSpawn_41() { return &___timeOfLastSpawn_41; }
	inline void set_timeOfLastSpawn_41(float value)
	{
		___timeOfLastSpawn_41 = value;
	}

	inline static int32_t get_offset_of_spawnCount_42() { return static_cast<int32_t>(offsetof(NcParticleSpiral_t2695580040, ___spawnCount_42)); }
	inline int32_t get_spawnCount_42() const { return ___spawnCount_42; }
	inline int32_t* get_address_of_spawnCount_42() { return &___spawnCount_42; }
	inline void set_spawnCount_42(int32_t value)
	{
		___spawnCount_42 = value;
	}

	inline static int32_t get_offset_of_totParticles_43() { return static_cast<int32_t>(offsetof(NcParticleSpiral_t2695580040, ___totParticles_43)); }
	inline int32_t get_totParticles_43() const { return ___totParticles_43; }
	inline int32_t* get_address_of_totParticles_43() { return &___totParticles_43; }
	inline void set_totParticles_43(int32_t value)
	{
		___totParticles_43 = value;
	}

	inline static int32_t get_offset_of_defaultSettings_44() { return static_cast<int32_t>(offsetof(NcParticleSpiral_t2695580040, ___defaultSettings_44)); }
	inline SpiralSettings_t359063377  get_defaultSettings_44() const { return ___defaultSettings_44; }
	inline SpiralSettings_t359063377 * get_address_of_defaultSettings_44() { return &___defaultSettings_44; }
	inline void set_defaultSettings_44(SpiralSettings_t359063377  value)
	{
		___defaultSettings_44 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
