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
// UnityEngine.GameObject[]
struct GameObjectU5BU5D_t3057952154;

#include "AssemblyU2DCSharp_NcEffectBehaviour813403937.h"
#include "AssemblyU2DCSharp_NcAttachPrefab_AttachType4204306860.h"
#include "UnityEngine_UnityEngine_Vector32243707580.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// NcAttachPrefab
struct  NcAttachPrefab_t2186397940  : public NcEffectBehaviour_t813403937
{
public:
	// NcAttachPrefab/AttachType NcAttachPrefab::m_AttachType
	int32_t ___m_AttachType_9;
	// System.Single NcAttachPrefab::m_fDelayTime
	float ___m_fDelayTime_10;
	// System.Single NcAttachPrefab::m_fRepeatTime
	float ___m_fRepeatTime_11;
	// System.Int32 NcAttachPrefab::m_nRepeatCount
	int32_t ___m_nRepeatCount_12;
	// UnityEngine.GameObject NcAttachPrefab::m_AttachPrefab
	GameObject_t1756533147 * ___m_AttachPrefab_13;
	// System.Single NcAttachPrefab::m_fPrefabSpeed
	float ___m_fPrefabSpeed_14;
	// System.Single NcAttachPrefab::m_fPrefabLifeTime
	float ___m_fPrefabLifeTime_15;
	// System.Boolean NcAttachPrefab::m_bWorldSpace
	bool ___m_bWorldSpace_16;
	// UnityEngine.Vector3 NcAttachPrefab::m_AddStartPos
	Vector3_t2243707580  ___m_AddStartPos_17;
	// UnityEngine.Vector3 NcAttachPrefab::m_AccumStartRot
	Vector3_t2243707580  ___m_AccumStartRot_18;
	// UnityEngine.Vector3 NcAttachPrefab::m_RandomRange
	Vector3_t2243707580  ___m_RandomRange_19;
	// System.Int32 NcAttachPrefab::m_nSpriteFactoryIndex
	int32_t ___m_nSpriteFactoryIndex_20;
	// System.Boolean NcAttachPrefab::m_bDetachParent
	bool ___m_bDetachParent_21;
	// System.Single NcAttachPrefab::m_fStartTime
	float ___m_fStartTime_22;
	// System.Int32 NcAttachPrefab::m_nCreateCount
	int32_t ___m_nCreateCount_23;
	// System.Boolean NcAttachPrefab::m_bStartAttach
	bool ___m_bStartAttach_24;
	// UnityEngine.GameObject[] NcAttachPrefab::m_CreateGameObjects
	GameObjectU5BU5D_t3057952154* ___m_CreateGameObjects_25;
	// System.Boolean NcAttachPrefab::m_bEnabled
	bool ___m_bEnabled_26;

public:
	inline static int32_t get_offset_of_m_AttachType_9() { return static_cast<int32_t>(offsetof(NcAttachPrefab_t2186397940, ___m_AttachType_9)); }
	inline int32_t get_m_AttachType_9() const { return ___m_AttachType_9; }
	inline int32_t* get_address_of_m_AttachType_9() { return &___m_AttachType_9; }
	inline void set_m_AttachType_9(int32_t value)
	{
		___m_AttachType_9 = value;
	}

	inline static int32_t get_offset_of_m_fDelayTime_10() { return static_cast<int32_t>(offsetof(NcAttachPrefab_t2186397940, ___m_fDelayTime_10)); }
	inline float get_m_fDelayTime_10() const { return ___m_fDelayTime_10; }
	inline float* get_address_of_m_fDelayTime_10() { return &___m_fDelayTime_10; }
	inline void set_m_fDelayTime_10(float value)
	{
		___m_fDelayTime_10 = value;
	}

	inline static int32_t get_offset_of_m_fRepeatTime_11() { return static_cast<int32_t>(offsetof(NcAttachPrefab_t2186397940, ___m_fRepeatTime_11)); }
	inline float get_m_fRepeatTime_11() const { return ___m_fRepeatTime_11; }
	inline float* get_address_of_m_fRepeatTime_11() { return &___m_fRepeatTime_11; }
	inline void set_m_fRepeatTime_11(float value)
	{
		___m_fRepeatTime_11 = value;
	}

	inline static int32_t get_offset_of_m_nRepeatCount_12() { return static_cast<int32_t>(offsetof(NcAttachPrefab_t2186397940, ___m_nRepeatCount_12)); }
	inline int32_t get_m_nRepeatCount_12() const { return ___m_nRepeatCount_12; }
	inline int32_t* get_address_of_m_nRepeatCount_12() { return &___m_nRepeatCount_12; }
	inline void set_m_nRepeatCount_12(int32_t value)
	{
		___m_nRepeatCount_12 = value;
	}

	inline static int32_t get_offset_of_m_AttachPrefab_13() { return static_cast<int32_t>(offsetof(NcAttachPrefab_t2186397940, ___m_AttachPrefab_13)); }
	inline GameObject_t1756533147 * get_m_AttachPrefab_13() const { return ___m_AttachPrefab_13; }
	inline GameObject_t1756533147 ** get_address_of_m_AttachPrefab_13() { return &___m_AttachPrefab_13; }
	inline void set_m_AttachPrefab_13(GameObject_t1756533147 * value)
	{
		___m_AttachPrefab_13 = value;
		Il2CppCodeGenWriteBarrier(&___m_AttachPrefab_13, value);
	}

	inline static int32_t get_offset_of_m_fPrefabSpeed_14() { return static_cast<int32_t>(offsetof(NcAttachPrefab_t2186397940, ___m_fPrefabSpeed_14)); }
	inline float get_m_fPrefabSpeed_14() const { return ___m_fPrefabSpeed_14; }
	inline float* get_address_of_m_fPrefabSpeed_14() { return &___m_fPrefabSpeed_14; }
	inline void set_m_fPrefabSpeed_14(float value)
	{
		___m_fPrefabSpeed_14 = value;
	}

	inline static int32_t get_offset_of_m_fPrefabLifeTime_15() { return static_cast<int32_t>(offsetof(NcAttachPrefab_t2186397940, ___m_fPrefabLifeTime_15)); }
	inline float get_m_fPrefabLifeTime_15() const { return ___m_fPrefabLifeTime_15; }
	inline float* get_address_of_m_fPrefabLifeTime_15() { return &___m_fPrefabLifeTime_15; }
	inline void set_m_fPrefabLifeTime_15(float value)
	{
		___m_fPrefabLifeTime_15 = value;
	}

	inline static int32_t get_offset_of_m_bWorldSpace_16() { return static_cast<int32_t>(offsetof(NcAttachPrefab_t2186397940, ___m_bWorldSpace_16)); }
	inline bool get_m_bWorldSpace_16() const { return ___m_bWorldSpace_16; }
	inline bool* get_address_of_m_bWorldSpace_16() { return &___m_bWorldSpace_16; }
	inline void set_m_bWorldSpace_16(bool value)
	{
		___m_bWorldSpace_16 = value;
	}

	inline static int32_t get_offset_of_m_AddStartPos_17() { return static_cast<int32_t>(offsetof(NcAttachPrefab_t2186397940, ___m_AddStartPos_17)); }
	inline Vector3_t2243707580  get_m_AddStartPos_17() const { return ___m_AddStartPos_17; }
	inline Vector3_t2243707580 * get_address_of_m_AddStartPos_17() { return &___m_AddStartPos_17; }
	inline void set_m_AddStartPos_17(Vector3_t2243707580  value)
	{
		___m_AddStartPos_17 = value;
	}

	inline static int32_t get_offset_of_m_AccumStartRot_18() { return static_cast<int32_t>(offsetof(NcAttachPrefab_t2186397940, ___m_AccumStartRot_18)); }
	inline Vector3_t2243707580  get_m_AccumStartRot_18() const { return ___m_AccumStartRot_18; }
	inline Vector3_t2243707580 * get_address_of_m_AccumStartRot_18() { return &___m_AccumStartRot_18; }
	inline void set_m_AccumStartRot_18(Vector3_t2243707580  value)
	{
		___m_AccumStartRot_18 = value;
	}

	inline static int32_t get_offset_of_m_RandomRange_19() { return static_cast<int32_t>(offsetof(NcAttachPrefab_t2186397940, ___m_RandomRange_19)); }
	inline Vector3_t2243707580  get_m_RandomRange_19() const { return ___m_RandomRange_19; }
	inline Vector3_t2243707580 * get_address_of_m_RandomRange_19() { return &___m_RandomRange_19; }
	inline void set_m_RandomRange_19(Vector3_t2243707580  value)
	{
		___m_RandomRange_19 = value;
	}

	inline static int32_t get_offset_of_m_nSpriteFactoryIndex_20() { return static_cast<int32_t>(offsetof(NcAttachPrefab_t2186397940, ___m_nSpriteFactoryIndex_20)); }
	inline int32_t get_m_nSpriteFactoryIndex_20() const { return ___m_nSpriteFactoryIndex_20; }
	inline int32_t* get_address_of_m_nSpriteFactoryIndex_20() { return &___m_nSpriteFactoryIndex_20; }
	inline void set_m_nSpriteFactoryIndex_20(int32_t value)
	{
		___m_nSpriteFactoryIndex_20 = value;
	}

	inline static int32_t get_offset_of_m_bDetachParent_21() { return static_cast<int32_t>(offsetof(NcAttachPrefab_t2186397940, ___m_bDetachParent_21)); }
	inline bool get_m_bDetachParent_21() const { return ___m_bDetachParent_21; }
	inline bool* get_address_of_m_bDetachParent_21() { return &___m_bDetachParent_21; }
	inline void set_m_bDetachParent_21(bool value)
	{
		___m_bDetachParent_21 = value;
	}

	inline static int32_t get_offset_of_m_fStartTime_22() { return static_cast<int32_t>(offsetof(NcAttachPrefab_t2186397940, ___m_fStartTime_22)); }
	inline float get_m_fStartTime_22() const { return ___m_fStartTime_22; }
	inline float* get_address_of_m_fStartTime_22() { return &___m_fStartTime_22; }
	inline void set_m_fStartTime_22(float value)
	{
		___m_fStartTime_22 = value;
	}

	inline static int32_t get_offset_of_m_nCreateCount_23() { return static_cast<int32_t>(offsetof(NcAttachPrefab_t2186397940, ___m_nCreateCount_23)); }
	inline int32_t get_m_nCreateCount_23() const { return ___m_nCreateCount_23; }
	inline int32_t* get_address_of_m_nCreateCount_23() { return &___m_nCreateCount_23; }
	inline void set_m_nCreateCount_23(int32_t value)
	{
		___m_nCreateCount_23 = value;
	}

	inline static int32_t get_offset_of_m_bStartAttach_24() { return static_cast<int32_t>(offsetof(NcAttachPrefab_t2186397940, ___m_bStartAttach_24)); }
	inline bool get_m_bStartAttach_24() const { return ___m_bStartAttach_24; }
	inline bool* get_address_of_m_bStartAttach_24() { return &___m_bStartAttach_24; }
	inline void set_m_bStartAttach_24(bool value)
	{
		___m_bStartAttach_24 = value;
	}

	inline static int32_t get_offset_of_m_CreateGameObjects_25() { return static_cast<int32_t>(offsetof(NcAttachPrefab_t2186397940, ___m_CreateGameObjects_25)); }
	inline GameObjectU5BU5D_t3057952154* get_m_CreateGameObjects_25() const { return ___m_CreateGameObjects_25; }
	inline GameObjectU5BU5D_t3057952154** get_address_of_m_CreateGameObjects_25() { return &___m_CreateGameObjects_25; }
	inline void set_m_CreateGameObjects_25(GameObjectU5BU5D_t3057952154* value)
	{
		___m_CreateGameObjects_25 = value;
		Il2CppCodeGenWriteBarrier(&___m_CreateGameObjects_25, value);
	}

	inline static int32_t get_offset_of_m_bEnabled_26() { return static_cast<int32_t>(offsetof(NcAttachPrefab_t2186397940, ___m_bEnabled_26)); }
	inline bool get_m_bEnabled_26() const { return ___m_bEnabled_26; }
	inline bool* get_address_of_m_bEnabled_26() { return &___m_bEnabled_26; }
	inline void set_m_bEnabled_26(bool value)
	{
		___m_bEnabled_26 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
