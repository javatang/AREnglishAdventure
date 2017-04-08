#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// NcCurveAnimation
struct NcCurveAnimation_t1477713384;

#include "AssemblyU2DCSharp_NcEffectBehaviour813403937.h"
#include "AssemblyU2DCSharp_NcAutoDestruct_CollisionType1922015531.h"
#include "UnityEngine_UnityEngine_LayerMask3188175821.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// NcAutoDestruct
struct  NcAutoDestruct_t1373362174  : public NcEffectBehaviour_t813403937
{
public:
	// System.Single NcAutoDestruct::m_fLifeTime
	float ___m_fLifeTime_9;
	// System.Single NcAutoDestruct::m_fSmoothDestroyTime
	float ___m_fSmoothDestroyTime_10;
	// System.Boolean NcAutoDestruct::m_bDisableEmit
	bool ___m_bDisableEmit_11;
	// System.Boolean NcAutoDestruct::m_bSmoothHide
	bool ___m_bSmoothHide_12;
	// System.Boolean NcAutoDestruct::m_bMeshFilterOnlySmoothHide
	bool ___m_bMeshFilterOnlySmoothHide_13;
	// System.Boolean NcAutoDestruct::m_bEndNcCurveAnimation
	bool ___m_bEndNcCurveAnimation_14;
	// NcAutoDestruct/CollisionType NcAutoDestruct::m_CollisionType
	int32_t ___m_CollisionType_15;
	// UnityEngine.LayerMask NcAutoDestruct::m_CollisionLayer
	LayerMask_t3188175821  ___m_CollisionLayer_16;
	// System.Single NcAutoDestruct::m_fCollisionRadius
	float ___m_fCollisionRadius_17;
	// System.Single NcAutoDestruct::m_fDestructPosY
	float ___m_fDestructPosY_18;
	// System.Single NcAutoDestruct::m_fStartTime
	float ___m_fStartTime_19;
	// System.Single NcAutoDestruct::m_fStartDestroyTime
	float ___m_fStartDestroyTime_20;
	// NcCurveAnimation NcAutoDestruct::m_NcCurveAnimation
	NcCurveAnimation_t1477713384 * ___m_NcCurveAnimation_21;

public:
	inline static int32_t get_offset_of_m_fLifeTime_9() { return static_cast<int32_t>(offsetof(NcAutoDestruct_t1373362174, ___m_fLifeTime_9)); }
	inline float get_m_fLifeTime_9() const { return ___m_fLifeTime_9; }
	inline float* get_address_of_m_fLifeTime_9() { return &___m_fLifeTime_9; }
	inline void set_m_fLifeTime_9(float value)
	{
		___m_fLifeTime_9 = value;
	}

	inline static int32_t get_offset_of_m_fSmoothDestroyTime_10() { return static_cast<int32_t>(offsetof(NcAutoDestruct_t1373362174, ___m_fSmoothDestroyTime_10)); }
	inline float get_m_fSmoothDestroyTime_10() const { return ___m_fSmoothDestroyTime_10; }
	inline float* get_address_of_m_fSmoothDestroyTime_10() { return &___m_fSmoothDestroyTime_10; }
	inline void set_m_fSmoothDestroyTime_10(float value)
	{
		___m_fSmoothDestroyTime_10 = value;
	}

	inline static int32_t get_offset_of_m_bDisableEmit_11() { return static_cast<int32_t>(offsetof(NcAutoDestruct_t1373362174, ___m_bDisableEmit_11)); }
	inline bool get_m_bDisableEmit_11() const { return ___m_bDisableEmit_11; }
	inline bool* get_address_of_m_bDisableEmit_11() { return &___m_bDisableEmit_11; }
	inline void set_m_bDisableEmit_11(bool value)
	{
		___m_bDisableEmit_11 = value;
	}

	inline static int32_t get_offset_of_m_bSmoothHide_12() { return static_cast<int32_t>(offsetof(NcAutoDestruct_t1373362174, ___m_bSmoothHide_12)); }
	inline bool get_m_bSmoothHide_12() const { return ___m_bSmoothHide_12; }
	inline bool* get_address_of_m_bSmoothHide_12() { return &___m_bSmoothHide_12; }
	inline void set_m_bSmoothHide_12(bool value)
	{
		___m_bSmoothHide_12 = value;
	}

	inline static int32_t get_offset_of_m_bMeshFilterOnlySmoothHide_13() { return static_cast<int32_t>(offsetof(NcAutoDestruct_t1373362174, ___m_bMeshFilterOnlySmoothHide_13)); }
	inline bool get_m_bMeshFilterOnlySmoothHide_13() const { return ___m_bMeshFilterOnlySmoothHide_13; }
	inline bool* get_address_of_m_bMeshFilterOnlySmoothHide_13() { return &___m_bMeshFilterOnlySmoothHide_13; }
	inline void set_m_bMeshFilterOnlySmoothHide_13(bool value)
	{
		___m_bMeshFilterOnlySmoothHide_13 = value;
	}

	inline static int32_t get_offset_of_m_bEndNcCurveAnimation_14() { return static_cast<int32_t>(offsetof(NcAutoDestruct_t1373362174, ___m_bEndNcCurveAnimation_14)); }
	inline bool get_m_bEndNcCurveAnimation_14() const { return ___m_bEndNcCurveAnimation_14; }
	inline bool* get_address_of_m_bEndNcCurveAnimation_14() { return &___m_bEndNcCurveAnimation_14; }
	inline void set_m_bEndNcCurveAnimation_14(bool value)
	{
		___m_bEndNcCurveAnimation_14 = value;
	}

	inline static int32_t get_offset_of_m_CollisionType_15() { return static_cast<int32_t>(offsetof(NcAutoDestruct_t1373362174, ___m_CollisionType_15)); }
	inline int32_t get_m_CollisionType_15() const { return ___m_CollisionType_15; }
	inline int32_t* get_address_of_m_CollisionType_15() { return &___m_CollisionType_15; }
	inline void set_m_CollisionType_15(int32_t value)
	{
		___m_CollisionType_15 = value;
	}

	inline static int32_t get_offset_of_m_CollisionLayer_16() { return static_cast<int32_t>(offsetof(NcAutoDestruct_t1373362174, ___m_CollisionLayer_16)); }
	inline LayerMask_t3188175821  get_m_CollisionLayer_16() const { return ___m_CollisionLayer_16; }
	inline LayerMask_t3188175821 * get_address_of_m_CollisionLayer_16() { return &___m_CollisionLayer_16; }
	inline void set_m_CollisionLayer_16(LayerMask_t3188175821  value)
	{
		___m_CollisionLayer_16 = value;
	}

	inline static int32_t get_offset_of_m_fCollisionRadius_17() { return static_cast<int32_t>(offsetof(NcAutoDestruct_t1373362174, ___m_fCollisionRadius_17)); }
	inline float get_m_fCollisionRadius_17() const { return ___m_fCollisionRadius_17; }
	inline float* get_address_of_m_fCollisionRadius_17() { return &___m_fCollisionRadius_17; }
	inline void set_m_fCollisionRadius_17(float value)
	{
		___m_fCollisionRadius_17 = value;
	}

	inline static int32_t get_offset_of_m_fDestructPosY_18() { return static_cast<int32_t>(offsetof(NcAutoDestruct_t1373362174, ___m_fDestructPosY_18)); }
	inline float get_m_fDestructPosY_18() const { return ___m_fDestructPosY_18; }
	inline float* get_address_of_m_fDestructPosY_18() { return &___m_fDestructPosY_18; }
	inline void set_m_fDestructPosY_18(float value)
	{
		___m_fDestructPosY_18 = value;
	}

	inline static int32_t get_offset_of_m_fStartTime_19() { return static_cast<int32_t>(offsetof(NcAutoDestruct_t1373362174, ___m_fStartTime_19)); }
	inline float get_m_fStartTime_19() const { return ___m_fStartTime_19; }
	inline float* get_address_of_m_fStartTime_19() { return &___m_fStartTime_19; }
	inline void set_m_fStartTime_19(float value)
	{
		___m_fStartTime_19 = value;
	}

	inline static int32_t get_offset_of_m_fStartDestroyTime_20() { return static_cast<int32_t>(offsetof(NcAutoDestruct_t1373362174, ___m_fStartDestroyTime_20)); }
	inline float get_m_fStartDestroyTime_20() const { return ___m_fStartDestroyTime_20; }
	inline float* get_address_of_m_fStartDestroyTime_20() { return &___m_fStartDestroyTime_20; }
	inline void set_m_fStartDestroyTime_20(float value)
	{
		___m_fStartDestroyTime_20 = value;
	}

	inline static int32_t get_offset_of_m_NcCurveAnimation_21() { return static_cast<int32_t>(offsetof(NcAutoDestruct_t1373362174, ___m_NcCurveAnimation_21)); }
	inline NcCurveAnimation_t1477713384 * get_m_NcCurveAnimation_21() const { return ___m_NcCurveAnimation_21; }
	inline NcCurveAnimation_t1477713384 ** get_address_of_m_NcCurveAnimation_21() { return &___m_NcCurveAnimation_21; }
	inline void set_m_NcCurveAnimation_21(NcCurveAnimation_t1477713384 * value)
	{
		___m_NcCurveAnimation_21 = value;
		Il2CppCodeGenWriteBarrier(&___m_NcCurveAnimation_21, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
