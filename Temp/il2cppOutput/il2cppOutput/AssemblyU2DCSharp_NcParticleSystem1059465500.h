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
// UnityEngine.ParticleEmitter
struct ParticleEmitter_t4099167268;
// UnityEngine.ParticleAnimator
struct ParticleAnimator_t922362133;
// UnityEngine.ParticleRenderer
struct ParticleRenderer_t1780124863;
// UnityEngine.ParticleSystem/Particle[]
struct ParticleU5BU5D_t574222242;

#include "AssemblyU2DCSharp_NcEffectBehaviour813403937.h"
#include "UnityEngine_UnityEngine_Vector32243707580.h"
#include "AssemblyU2DCSharp_NcParticleSystem_ParticleDestruc1572451539.h"
#include "UnityEngine_UnityEngine_LayerMask3188175821.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// NcParticleSystem
struct  NcParticleSystem_t1059465500  : public NcEffectBehaviour_t813403937
{
public:
	// System.Boolean NcParticleSystem::m_bDisabledEmit
	bool ___m_bDisabledEmit_9;
	// System.Single NcParticleSystem::m_fStartDelayTime
	float ___m_fStartDelayTime_10;
	// System.Boolean NcParticleSystem::m_bBurst
	bool ___m_bBurst_11;
	// System.Single NcParticleSystem::m_fBurstRepeatTime
	float ___m_fBurstRepeatTime_12;
	// System.Int32 NcParticleSystem::m_nBurstRepeatCount
	int32_t ___m_nBurstRepeatCount_13;
	// System.Int32 NcParticleSystem::m_fBurstEmissionCount
	int32_t ___m_fBurstEmissionCount_14;
	// System.Single NcParticleSystem::m_fEmitTime
	float ___m_fEmitTime_15;
	// System.Single NcParticleSystem::m_fSleepTime
	float ___m_fSleepTime_16;
	// System.Boolean NcParticleSystem::m_bScaleWithTransform
	bool ___m_bScaleWithTransform_17;
	// System.Boolean NcParticleSystem::m_bWorldSpace
	bool ___m_bWorldSpace_18;
	// System.Single NcParticleSystem::m_fStartSizeRate
	float ___m_fStartSizeRate_19;
	// System.Single NcParticleSystem::m_fStartLifeTimeRate
	float ___m_fStartLifeTimeRate_20;
	// System.Single NcParticleSystem::m_fStartEmissionRate
	float ___m_fStartEmissionRate_21;
	// System.Single NcParticleSystem::m_fStartSpeedRate
	float ___m_fStartSpeedRate_22;
	// System.Single NcParticleSystem::m_fRenderLengthRate
	float ___m_fRenderLengthRate_23;
	// System.Single NcParticleSystem::m_fLegacyMinMeshNormalVelocity
	float ___m_fLegacyMinMeshNormalVelocity_24;
	// System.Single NcParticleSystem::m_fLegacyMaxMeshNormalVelocity
	float ___m_fLegacyMaxMeshNormalVelocity_25;
	// System.Single NcParticleSystem::m_fShurikenSpeedRate
	float ___m_fShurikenSpeedRate_26;
	// System.Boolean NcParticleSystem::m_bStart
	bool ___m_bStart_27;
	// UnityEngine.Vector3 NcParticleSystem::m_OldPos
	Vector3_t2243707580  ___m_OldPos_28;
	// System.Boolean NcParticleSystem::m_bLegacyRuntimeScale
	bool ___m_bLegacyRuntimeScale_29;
	// NcParticleSystem/ParticleDestruct NcParticleSystem::m_ParticleDestruct
	int32_t ___m_ParticleDestruct_30;
	// UnityEngine.LayerMask NcParticleSystem::m_CollisionLayer
	LayerMask_t3188175821  ___m_CollisionLayer_31;
	// System.Single NcParticleSystem::m_fCollisionRadius
	float ___m_fCollisionRadius_32;
	// System.Single NcParticleSystem::m_fDestructPosY
	float ___m_fDestructPosY_33;
	// UnityEngine.GameObject NcParticleSystem::m_AttachPrefab
	GameObject_t1756533147 * ___m_AttachPrefab_34;
	// System.Single NcParticleSystem::m_fPrefabScale
	float ___m_fPrefabScale_35;
	// System.Single NcParticleSystem::m_fPrefabSpeed
	float ___m_fPrefabSpeed_36;
	// System.Single NcParticleSystem::m_fPrefabLifeTime
	float ___m_fPrefabLifeTime_37;
	// System.Boolean NcParticleSystem::m_bSleep
	bool ___m_bSleep_38;
	// System.Single NcParticleSystem::m_fStartTime
	float ___m_fStartTime_39;
	// System.Single NcParticleSystem::m_fDurationStartTime
	float ___m_fDurationStartTime_40;
	// System.Single NcParticleSystem::m_fEmitStartTime
	float ___m_fEmitStartTime_41;
	// System.Int32 NcParticleSystem::m_nCreateCount
	int32_t ___m_nCreateCount_42;
	// System.Boolean NcParticleSystem::m_bScalePreRender
	bool ___m_bScalePreRender_43;
	// System.Boolean NcParticleSystem::m_bMeshParticleEmitter
	bool ___m_bMeshParticleEmitter_44;
	// UnityEngine.ParticleSystem NcParticleSystem::m_ps
	ParticleSystem_t3394631041 * ___m_ps_45;
	// UnityEngine.ParticleEmitter NcParticleSystem::m_pe
	ParticleEmitter_t4099167268 * ___m_pe_46;
	// UnityEngine.ParticleAnimator NcParticleSystem::m_pa
	ParticleAnimator_t922362133 * ___m_pa_47;
	// UnityEngine.ParticleRenderer NcParticleSystem::m_pr
	ParticleRenderer_t1780124863 * ___m_pr_48;
	// UnityEngine.ParticleSystem/Particle[] NcParticleSystem::m_BufPsParts
	ParticleU5BU5D_t574222242* ___m_BufPsParts_49;
	// UnityEngine.ParticleSystem/Particle[] NcParticleSystem::m_BufColliderOriParts
	ParticleU5BU5D_t574222242* ___m_BufColliderOriParts_50;
	// UnityEngine.ParticleSystem/Particle[] NcParticleSystem::m_BufColliderConParts
	ParticleU5BU5D_t574222242* ___m_BufColliderConParts_51;

public:
	inline static int32_t get_offset_of_m_bDisabledEmit_9() { return static_cast<int32_t>(offsetof(NcParticleSystem_t1059465500, ___m_bDisabledEmit_9)); }
	inline bool get_m_bDisabledEmit_9() const { return ___m_bDisabledEmit_9; }
	inline bool* get_address_of_m_bDisabledEmit_9() { return &___m_bDisabledEmit_9; }
	inline void set_m_bDisabledEmit_9(bool value)
	{
		___m_bDisabledEmit_9 = value;
	}

	inline static int32_t get_offset_of_m_fStartDelayTime_10() { return static_cast<int32_t>(offsetof(NcParticleSystem_t1059465500, ___m_fStartDelayTime_10)); }
	inline float get_m_fStartDelayTime_10() const { return ___m_fStartDelayTime_10; }
	inline float* get_address_of_m_fStartDelayTime_10() { return &___m_fStartDelayTime_10; }
	inline void set_m_fStartDelayTime_10(float value)
	{
		___m_fStartDelayTime_10 = value;
	}

	inline static int32_t get_offset_of_m_bBurst_11() { return static_cast<int32_t>(offsetof(NcParticleSystem_t1059465500, ___m_bBurst_11)); }
	inline bool get_m_bBurst_11() const { return ___m_bBurst_11; }
	inline bool* get_address_of_m_bBurst_11() { return &___m_bBurst_11; }
	inline void set_m_bBurst_11(bool value)
	{
		___m_bBurst_11 = value;
	}

	inline static int32_t get_offset_of_m_fBurstRepeatTime_12() { return static_cast<int32_t>(offsetof(NcParticleSystem_t1059465500, ___m_fBurstRepeatTime_12)); }
	inline float get_m_fBurstRepeatTime_12() const { return ___m_fBurstRepeatTime_12; }
	inline float* get_address_of_m_fBurstRepeatTime_12() { return &___m_fBurstRepeatTime_12; }
	inline void set_m_fBurstRepeatTime_12(float value)
	{
		___m_fBurstRepeatTime_12 = value;
	}

	inline static int32_t get_offset_of_m_nBurstRepeatCount_13() { return static_cast<int32_t>(offsetof(NcParticleSystem_t1059465500, ___m_nBurstRepeatCount_13)); }
	inline int32_t get_m_nBurstRepeatCount_13() const { return ___m_nBurstRepeatCount_13; }
	inline int32_t* get_address_of_m_nBurstRepeatCount_13() { return &___m_nBurstRepeatCount_13; }
	inline void set_m_nBurstRepeatCount_13(int32_t value)
	{
		___m_nBurstRepeatCount_13 = value;
	}

	inline static int32_t get_offset_of_m_fBurstEmissionCount_14() { return static_cast<int32_t>(offsetof(NcParticleSystem_t1059465500, ___m_fBurstEmissionCount_14)); }
	inline int32_t get_m_fBurstEmissionCount_14() const { return ___m_fBurstEmissionCount_14; }
	inline int32_t* get_address_of_m_fBurstEmissionCount_14() { return &___m_fBurstEmissionCount_14; }
	inline void set_m_fBurstEmissionCount_14(int32_t value)
	{
		___m_fBurstEmissionCount_14 = value;
	}

	inline static int32_t get_offset_of_m_fEmitTime_15() { return static_cast<int32_t>(offsetof(NcParticleSystem_t1059465500, ___m_fEmitTime_15)); }
	inline float get_m_fEmitTime_15() const { return ___m_fEmitTime_15; }
	inline float* get_address_of_m_fEmitTime_15() { return &___m_fEmitTime_15; }
	inline void set_m_fEmitTime_15(float value)
	{
		___m_fEmitTime_15 = value;
	}

	inline static int32_t get_offset_of_m_fSleepTime_16() { return static_cast<int32_t>(offsetof(NcParticleSystem_t1059465500, ___m_fSleepTime_16)); }
	inline float get_m_fSleepTime_16() const { return ___m_fSleepTime_16; }
	inline float* get_address_of_m_fSleepTime_16() { return &___m_fSleepTime_16; }
	inline void set_m_fSleepTime_16(float value)
	{
		___m_fSleepTime_16 = value;
	}

	inline static int32_t get_offset_of_m_bScaleWithTransform_17() { return static_cast<int32_t>(offsetof(NcParticleSystem_t1059465500, ___m_bScaleWithTransform_17)); }
	inline bool get_m_bScaleWithTransform_17() const { return ___m_bScaleWithTransform_17; }
	inline bool* get_address_of_m_bScaleWithTransform_17() { return &___m_bScaleWithTransform_17; }
	inline void set_m_bScaleWithTransform_17(bool value)
	{
		___m_bScaleWithTransform_17 = value;
	}

	inline static int32_t get_offset_of_m_bWorldSpace_18() { return static_cast<int32_t>(offsetof(NcParticleSystem_t1059465500, ___m_bWorldSpace_18)); }
	inline bool get_m_bWorldSpace_18() const { return ___m_bWorldSpace_18; }
	inline bool* get_address_of_m_bWorldSpace_18() { return &___m_bWorldSpace_18; }
	inline void set_m_bWorldSpace_18(bool value)
	{
		___m_bWorldSpace_18 = value;
	}

	inline static int32_t get_offset_of_m_fStartSizeRate_19() { return static_cast<int32_t>(offsetof(NcParticleSystem_t1059465500, ___m_fStartSizeRate_19)); }
	inline float get_m_fStartSizeRate_19() const { return ___m_fStartSizeRate_19; }
	inline float* get_address_of_m_fStartSizeRate_19() { return &___m_fStartSizeRate_19; }
	inline void set_m_fStartSizeRate_19(float value)
	{
		___m_fStartSizeRate_19 = value;
	}

	inline static int32_t get_offset_of_m_fStartLifeTimeRate_20() { return static_cast<int32_t>(offsetof(NcParticleSystem_t1059465500, ___m_fStartLifeTimeRate_20)); }
	inline float get_m_fStartLifeTimeRate_20() const { return ___m_fStartLifeTimeRate_20; }
	inline float* get_address_of_m_fStartLifeTimeRate_20() { return &___m_fStartLifeTimeRate_20; }
	inline void set_m_fStartLifeTimeRate_20(float value)
	{
		___m_fStartLifeTimeRate_20 = value;
	}

	inline static int32_t get_offset_of_m_fStartEmissionRate_21() { return static_cast<int32_t>(offsetof(NcParticleSystem_t1059465500, ___m_fStartEmissionRate_21)); }
	inline float get_m_fStartEmissionRate_21() const { return ___m_fStartEmissionRate_21; }
	inline float* get_address_of_m_fStartEmissionRate_21() { return &___m_fStartEmissionRate_21; }
	inline void set_m_fStartEmissionRate_21(float value)
	{
		___m_fStartEmissionRate_21 = value;
	}

	inline static int32_t get_offset_of_m_fStartSpeedRate_22() { return static_cast<int32_t>(offsetof(NcParticleSystem_t1059465500, ___m_fStartSpeedRate_22)); }
	inline float get_m_fStartSpeedRate_22() const { return ___m_fStartSpeedRate_22; }
	inline float* get_address_of_m_fStartSpeedRate_22() { return &___m_fStartSpeedRate_22; }
	inline void set_m_fStartSpeedRate_22(float value)
	{
		___m_fStartSpeedRate_22 = value;
	}

	inline static int32_t get_offset_of_m_fRenderLengthRate_23() { return static_cast<int32_t>(offsetof(NcParticleSystem_t1059465500, ___m_fRenderLengthRate_23)); }
	inline float get_m_fRenderLengthRate_23() const { return ___m_fRenderLengthRate_23; }
	inline float* get_address_of_m_fRenderLengthRate_23() { return &___m_fRenderLengthRate_23; }
	inline void set_m_fRenderLengthRate_23(float value)
	{
		___m_fRenderLengthRate_23 = value;
	}

	inline static int32_t get_offset_of_m_fLegacyMinMeshNormalVelocity_24() { return static_cast<int32_t>(offsetof(NcParticleSystem_t1059465500, ___m_fLegacyMinMeshNormalVelocity_24)); }
	inline float get_m_fLegacyMinMeshNormalVelocity_24() const { return ___m_fLegacyMinMeshNormalVelocity_24; }
	inline float* get_address_of_m_fLegacyMinMeshNormalVelocity_24() { return &___m_fLegacyMinMeshNormalVelocity_24; }
	inline void set_m_fLegacyMinMeshNormalVelocity_24(float value)
	{
		___m_fLegacyMinMeshNormalVelocity_24 = value;
	}

	inline static int32_t get_offset_of_m_fLegacyMaxMeshNormalVelocity_25() { return static_cast<int32_t>(offsetof(NcParticleSystem_t1059465500, ___m_fLegacyMaxMeshNormalVelocity_25)); }
	inline float get_m_fLegacyMaxMeshNormalVelocity_25() const { return ___m_fLegacyMaxMeshNormalVelocity_25; }
	inline float* get_address_of_m_fLegacyMaxMeshNormalVelocity_25() { return &___m_fLegacyMaxMeshNormalVelocity_25; }
	inline void set_m_fLegacyMaxMeshNormalVelocity_25(float value)
	{
		___m_fLegacyMaxMeshNormalVelocity_25 = value;
	}

	inline static int32_t get_offset_of_m_fShurikenSpeedRate_26() { return static_cast<int32_t>(offsetof(NcParticleSystem_t1059465500, ___m_fShurikenSpeedRate_26)); }
	inline float get_m_fShurikenSpeedRate_26() const { return ___m_fShurikenSpeedRate_26; }
	inline float* get_address_of_m_fShurikenSpeedRate_26() { return &___m_fShurikenSpeedRate_26; }
	inline void set_m_fShurikenSpeedRate_26(float value)
	{
		___m_fShurikenSpeedRate_26 = value;
	}

	inline static int32_t get_offset_of_m_bStart_27() { return static_cast<int32_t>(offsetof(NcParticleSystem_t1059465500, ___m_bStart_27)); }
	inline bool get_m_bStart_27() const { return ___m_bStart_27; }
	inline bool* get_address_of_m_bStart_27() { return &___m_bStart_27; }
	inline void set_m_bStart_27(bool value)
	{
		___m_bStart_27 = value;
	}

	inline static int32_t get_offset_of_m_OldPos_28() { return static_cast<int32_t>(offsetof(NcParticleSystem_t1059465500, ___m_OldPos_28)); }
	inline Vector3_t2243707580  get_m_OldPos_28() const { return ___m_OldPos_28; }
	inline Vector3_t2243707580 * get_address_of_m_OldPos_28() { return &___m_OldPos_28; }
	inline void set_m_OldPos_28(Vector3_t2243707580  value)
	{
		___m_OldPos_28 = value;
	}

	inline static int32_t get_offset_of_m_bLegacyRuntimeScale_29() { return static_cast<int32_t>(offsetof(NcParticleSystem_t1059465500, ___m_bLegacyRuntimeScale_29)); }
	inline bool get_m_bLegacyRuntimeScale_29() const { return ___m_bLegacyRuntimeScale_29; }
	inline bool* get_address_of_m_bLegacyRuntimeScale_29() { return &___m_bLegacyRuntimeScale_29; }
	inline void set_m_bLegacyRuntimeScale_29(bool value)
	{
		___m_bLegacyRuntimeScale_29 = value;
	}

	inline static int32_t get_offset_of_m_ParticleDestruct_30() { return static_cast<int32_t>(offsetof(NcParticleSystem_t1059465500, ___m_ParticleDestruct_30)); }
	inline int32_t get_m_ParticleDestruct_30() const { return ___m_ParticleDestruct_30; }
	inline int32_t* get_address_of_m_ParticleDestruct_30() { return &___m_ParticleDestruct_30; }
	inline void set_m_ParticleDestruct_30(int32_t value)
	{
		___m_ParticleDestruct_30 = value;
	}

	inline static int32_t get_offset_of_m_CollisionLayer_31() { return static_cast<int32_t>(offsetof(NcParticleSystem_t1059465500, ___m_CollisionLayer_31)); }
	inline LayerMask_t3188175821  get_m_CollisionLayer_31() const { return ___m_CollisionLayer_31; }
	inline LayerMask_t3188175821 * get_address_of_m_CollisionLayer_31() { return &___m_CollisionLayer_31; }
	inline void set_m_CollisionLayer_31(LayerMask_t3188175821  value)
	{
		___m_CollisionLayer_31 = value;
	}

	inline static int32_t get_offset_of_m_fCollisionRadius_32() { return static_cast<int32_t>(offsetof(NcParticleSystem_t1059465500, ___m_fCollisionRadius_32)); }
	inline float get_m_fCollisionRadius_32() const { return ___m_fCollisionRadius_32; }
	inline float* get_address_of_m_fCollisionRadius_32() { return &___m_fCollisionRadius_32; }
	inline void set_m_fCollisionRadius_32(float value)
	{
		___m_fCollisionRadius_32 = value;
	}

	inline static int32_t get_offset_of_m_fDestructPosY_33() { return static_cast<int32_t>(offsetof(NcParticleSystem_t1059465500, ___m_fDestructPosY_33)); }
	inline float get_m_fDestructPosY_33() const { return ___m_fDestructPosY_33; }
	inline float* get_address_of_m_fDestructPosY_33() { return &___m_fDestructPosY_33; }
	inline void set_m_fDestructPosY_33(float value)
	{
		___m_fDestructPosY_33 = value;
	}

	inline static int32_t get_offset_of_m_AttachPrefab_34() { return static_cast<int32_t>(offsetof(NcParticleSystem_t1059465500, ___m_AttachPrefab_34)); }
	inline GameObject_t1756533147 * get_m_AttachPrefab_34() const { return ___m_AttachPrefab_34; }
	inline GameObject_t1756533147 ** get_address_of_m_AttachPrefab_34() { return &___m_AttachPrefab_34; }
	inline void set_m_AttachPrefab_34(GameObject_t1756533147 * value)
	{
		___m_AttachPrefab_34 = value;
		Il2CppCodeGenWriteBarrier(&___m_AttachPrefab_34, value);
	}

	inline static int32_t get_offset_of_m_fPrefabScale_35() { return static_cast<int32_t>(offsetof(NcParticleSystem_t1059465500, ___m_fPrefabScale_35)); }
	inline float get_m_fPrefabScale_35() const { return ___m_fPrefabScale_35; }
	inline float* get_address_of_m_fPrefabScale_35() { return &___m_fPrefabScale_35; }
	inline void set_m_fPrefabScale_35(float value)
	{
		___m_fPrefabScale_35 = value;
	}

	inline static int32_t get_offset_of_m_fPrefabSpeed_36() { return static_cast<int32_t>(offsetof(NcParticleSystem_t1059465500, ___m_fPrefabSpeed_36)); }
	inline float get_m_fPrefabSpeed_36() const { return ___m_fPrefabSpeed_36; }
	inline float* get_address_of_m_fPrefabSpeed_36() { return &___m_fPrefabSpeed_36; }
	inline void set_m_fPrefabSpeed_36(float value)
	{
		___m_fPrefabSpeed_36 = value;
	}

	inline static int32_t get_offset_of_m_fPrefabLifeTime_37() { return static_cast<int32_t>(offsetof(NcParticleSystem_t1059465500, ___m_fPrefabLifeTime_37)); }
	inline float get_m_fPrefabLifeTime_37() const { return ___m_fPrefabLifeTime_37; }
	inline float* get_address_of_m_fPrefabLifeTime_37() { return &___m_fPrefabLifeTime_37; }
	inline void set_m_fPrefabLifeTime_37(float value)
	{
		___m_fPrefabLifeTime_37 = value;
	}

	inline static int32_t get_offset_of_m_bSleep_38() { return static_cast<int32_t>(offsetof(NcParticleSystem_t1059465500, ___m_bSleep_38)); }
	inline bool get_m_bSleep_38() const { return ___m_bSleep_38; }
	inline bool* get_address_of_m_bSleep_38() { return &___m_bSleep_38; }
	inline void set_m_bSleep_38(bool value)
	{
		___m_bSleep_38 = value;
	}

	inline static int32_t get_offset_of_m_fStartTime_39() { return static_cast<int32_t>(offsetof(NcParticleSystem_t1059465500, ___m_fStartTime_39)); }
	inline float get_m_fStartTime_39() const { return ___m_fStartTime_39; }
	inline float* get_address_of_m_fStartTime_39() { return &___m_fStartTime_39; }
	inline void set_m_fStartTime_39(float value)
	{
		___m_fStartTime_39 = value;
	}

	inline static int32_t get_offset_of_m_fDurationStartTime_40() { return static_cast<int32_t>(offsetof(NcParticleSystem_t1059465500, ___m_fDurationStartTime_40)); }
	inline float get_m_fDurationStartTime_40() const { return ___m_fDurationStartTime_40; }
	inline float* get_address_of_m_fDurationStartTime_40() { return &___m_fDurationStartTime_40; }
	inline void set_m_fDurationStartTime_40(float value)
	{
		___m_fDurationStartTime_40 = value;
	}

	inline static int32_t get_offset_of_m_fEmitStartTime_41() { return static_cast<int32_t>(offsetof(NcParticleSystem_t1059465500, ___m_fEmitStartTime_41)); }
	inline float get_m_fEmitStartTime_41() const { return ___m_fEmitStartTime_41; }
	inline float* get_address_of_m_fEmitStartTime_41() { return &___m_fEmitStartTime_41; }
	inline void set_m_fEmitStartTime_41(float value)
	{
		___m_fEmitStartTime_41 = value;
	}

	inline static int32_t get_offset_of_m_nCreateCount_42() { return static_cast<int32_t>(offsetof(NcParticleSystem_t1059465500, ___m_nCreateCount_42)); }
	inline int32_t get_m_nCreateCount_42() const { return ___m_nCreateCount_42; }
	inline int32_t* get_address_of_m_nCreateCount_42() { return &___m_nCreateCount_42; }
	inline void set_m_nCreateCount_42(int32_t value)
	{
		___m_nCreateCount_42 = value;
	}

	inline static int32_t get_offset_of_m_bScalePreRender_43() { return static_cast<int32_t>(offsetof(NcParticleSystem_t1059465500, ___m_bScalePreRender_43)); }
	inline bool get_m_bScalePreRender_43() const { return ___m_bScalePreRender_43; }
	inline bool* get_address_of_m_bScalePreRender_43() { return &___m_bScalePreRender_43; }
	inline void set_m_bScalePreRender_43(bool value)
	{
		___m_bScalePreRender_43 = value;
	}

	inline static int32_t get_offset_of_m_bMeshParticleEmitter_44() { return static_cast<int32_t>(offsetof(NcParticleSystem_t1059465500, ___m_bMeshParticleEmitter_44)); }
	inline bool get_m_bMeshParticleEmitter_44() const { return ___m_bMeshParticleEmitter_44; }
	inline bool* get_address_of_m_bMeshParticleEmitter_44() { return &___m_bMeshParticleEmitter_44; }
	inline void set_m_bMeshParticleEmitter_44(bool value)
	{
		___m_bMeshParticleEmitter_44 = value;
	}

	inline static int32_t get_offset_of_m_ps_45() { return static_cast<int32_t>(offsetof(NcParticleSystem_t1059465500, ___m_ps_45)); }
	inline ParticleSystem_t3394631041 * get_m_ps_45() const { return ___m_ps_45; }
	inline ParticleSystem_t3394631041 ** get_address_of_m_ps_45() { return &___m_ps_45; }
	inline void set_m_ps_45(ParticleSystem_t3394631041 * value)
	{
		___m_ps_45 = value;
		Il2CppCodeGenWriteBarrier(&___m_ps_45, value);
	}

	inline static int32_t get_offset_of_m_pe_46() { return static_cast<int32_t>(offsetof(NcParticleSystem_t1059465500, ___m_pe_46)); }
	inline ParticleEmitter_t4099167268 * get_m_pe_46() const { return ___m_pe_46; }
	inline ParticleEmitter_t4099167268 ** get_address_of_m_pe_46() { return &___m_pe_46; }
	inline void set_m_pe_46(ParticleEmitter_t4099167268 * value)
	{
		___m_pe_46 = value;
		Il2CppCodeGenWriteBarrier(&___m_pe_46, value);
	}

	inline static int32_t get_offset_of_m_pa_47() { return static_cast<int32_t>(offsetof(NcParticleSystem_t1059465500, ___m_pa_47)); }
	inline ParticleAnimator_t922362133 * get_m_pa_47() const { return ___m_pa_47; }
	inline ParticleAnimator_t922362133 ** get_address_of_m_pa_47() { return &___m_pa_47; }
	inline void set_m_pa_47(ParticleAnimator_t922362133 * value)
	{
		___m_pa_47 = value;
		Il2CppCodeGenWriteBarrier(&___m_pa_47, value);
	}

	inline static int32_t get_offset_of_m_pr_48() { return static_cast<int32_t>(offsetof(NcParticleSystem_t1059465500, ___m_pr_48)); }
	inline ParticleRenderer_t1780124863 * get_m_pr_48() const { return ___m_pr_48; }
	inline ParticleRenderer_t1780124863 ** get_address_of_m_pr_48() { return &___m_pr_48; }
	inline void set_m_pr_48(ParticleRenderer_t1780124863 * value)
	{
		___m_pr_48 = value;
		Il2CppCodeGenWriteBarrier(&___m_pr_48, value);
	}

	inline static int32_t get_offset_of_m_BufPsParts_49() { return static_cast<int32_t>(offsetof(NcParticleSystem_t1059465500, ___m_BufPsParts_49)); }
	inline ParticleU5BU5D_t574222242* get_m_BufPsParts_49() const { return ___m_BufPsParts_49; }
	inline ParticleU5BU5D_t574222242** get_address_of_m_BufPsParts_49() { return &___m_BufPsParts_49; }
	inline void set_m_BufPsParts_49(ParticleU5BU5D_t574222242* value)
	{
		___m_BufPsParts_49 = value;
		Il2CppCodeGenWriteBarrier(&___m_BufPsParts_49, value);
	}

	inline static int32_t get_offset_of_m_BufColliderOriParts_50() { return static_cast<int32_t>(offsetof(NcParticleSystem_t1059465500, ___m_BufColliderOriParts_50)); }
	inline ParticleU5BU5D_t574222242* get_m_BufColliderOriParts_50() const { return ___m_BufColliderOriParts_50; }
	inline ParticleU5BU5D_t574222242** get_address_of_m_BufColliderOriParts_50() { return &___m_BufColliderOriParts_50; }
	inline void set_m_BufColliderOriParts_50(ParticleU5BU5D_t574222242* value)
	{
		___m_BufColliderOriParts_50 = value;
		Il2CppCodeGenWriteBarrier(&___m_BufColliderOriParts_50, value);
	}

	inline static int32_t get_offset_of_m_BufColliderConParts_51() { return static_cast<int32_t>(offsetof(NcParticleSystem_t1059465500, ___m_BufColliderConParts_51)); }
	inline ParticleU5BU5D_t574222242* get_m_BufColliderConParts_51() const { return ___m_BufColliderConParts_51; }
	inline ParticleU5BU5D_t574222242** get_address_of_m_BufColliderConParts_51() { return &___m_BufColliderConParts_51; }
	inline void set_m_BufColliderConParts_51(ParticleU5BU5D_t574222242* value)
	{
		___m_BufColliderConParts_51 = value;
		Il2CppCodeGenWriteBarrier(&___m_BufColliderConParts_51, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
