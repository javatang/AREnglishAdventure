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
// UnityEngine.MeshFilter
struct MeshFilter_t3026937449;
// System.Collections.Generic.List`1<UnityEngine.Material>
struct List_1_t3857795355;
// NcEffectInitBackup
struct NcEffectInitBackup_t4184429182;

#include "UnityEngine_UnityEngine_MonoBehaviour1158329972.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// NcEffectBehaviour
struct  NcEffectBehaviour_t813403937  : public MonoBehaviour_t1158329972
{
public:
	// System.Single NcEffectBehaviour::m_fUserTag
	float ___m_fUserTag_4;
	// UnityEngine.MeshFilter NcEffectBehaviour::m_MeshFilter
	MeshFilter_t3026937449 * ___m_MeshFilter_5;
	// System.Collections.Generic.List`1<UnityEngine.Material> NcEffectBehaviour::m_RuntimeMaterials
	List_1_t3857795355 * ___m_RuntimeMaterials_6;
	// System.Boolean NcEffectBehaviour::m_bReplayState
	bool ___m_bReplayState_7;
	// NcEffectInitBackup NcEffectBehaviour::m_NcEffectInitBackup
	NcEffectInitBackup_t4184429182 * ___m_NcEffectInitBackup_8;

public:
	inline static int32_t get_offset_of_m_fUserTag_4() { return static_cast<int32_t>(offsetof(NcEffectBehaviour_t813403937, ___m_fUserTag_4)); }
	inline float get_m_fUserTag_4() const { return ___m_fUserTag_4; }
	inline float* get_address_of_m_fUserTag_4() { return &___m_fUserTag_4; }
	inline void set_m_fUserTag_4(float value)
	{
		___m_fUserTag_4 = value;
	}

	inline static int32_t get_offset_of_m_MeshFilter_5() { return static_cast<int32_t>(offsetof(NcEffectBehaviour_t813403937, ___m_MeshFilter_5)); }
	inline MeshFilter_t3026937449 * get_m_MeshFilter_5() const { return ___m_MeshFilter_5; }
	inline MeshFilter_t3026937449 ** get_address_of_m_MeshFilter_5() { return &___m_MeshFilter_5; }
	inline void set_m_MeshFilter_5(MeshFilter_t3026937449 * value)
	{
		___m_MeshFilter_5 = value;
		Il2CppCodeGenWriteBarrier(&___m_MeshFilter_5, value);
	}

	inline static int32_t get_offset_of_m_RuntimeMaterials_6() { return static_cast<int32_t>(offsetof(NcEffectBehaviour_t813403937, ___m_RuntimeMaterials_6)); }
	inline List_1_t3857795355 * get_m_RuntimeMaterials_6() const { return ___m_RuntimeMaterials_6; }
	inline List_1_t3857795355 ** get_address_of_m_RuntimeMaterials_6() { return &___m_RuntimeMaterials_6; }
	inline void set_m_RuntimeMaterials_6(List_1_t3857795355 * value)
	{
		___m_RuntimeMaterials_6 = value;
		Il2CppCodeGenWriteBarrier(&___m_RuntimeMaterials_6, value);
	}

	inline static int32_t get_offset_of_m_bReplayState_7() { return static_cast<int32_t>(offsetof(NcEffectBehaviour_t813403937, ___m_bReplayState_7)); }
	inline bool get_m_bReplayState_7() const { return ___m_bReplayState_7; }
	inline bool* get_address_of_m_bReplayState_7() { return &___m_bReplayState_7; }
	inline void set_m_bReplayState_7(bool value)
	{
		___m_bReplayState_7 = value;
	}

	inline static int32_t get_offset_of_m_NcEffectInitBackup_8() { return static_cast<int32_t>(offsetof(NcEffectBehaviour_t813403937, ___m_NcEffectInitBackup_8)); }
	inline NcEffectInitBackup_t4184429182 * get_m_NcEffectInitBackup_8() const { return ___m_NcEffectInitBackup_8; }
	inline NcEffectInitBackup_t4184429182 ** get_address_of_m_NcEffectInitBackup_8() { return &___m_NcEffectInitBackup_8; }
	inline void set_m_NcEffectInitBackup_8(NcEffectInitBackup_t4184429182 * value)
	{
		___m_NcEffectInitBackup_8 = value;
		Il2CppCodeGenWriteBarrier(&___m_NcEffectInitBackup_8, value);
	}
};

struct NcEffectBehaviour_t813403937_StaticFields
{
public:
	// System.Boolean NcEffectBehaviour::m_bShuttingDown
	bool ___m_bShuttingDown_2;
	// UnityEngine.GameObject NcEffectBehaviour::m_RootInstance
	GameObject_t1756533147 * ___m_RootInstance_3;

public:
	inline static int32_t get_offset_of_m_bShuttingDown_2() { return static_cast<int32_t>(offsetof(NcEffectBehaviour_t813403937_StaticFields, ___m_bShuttingDown_2)); }
	inline bool get_m_bShuttingDown_2() const { return ___m_bShuttingDown_2; }
	inline bool* get_address_of_m_bShuttingDown_2() { return &___m_bShuttingDown_2; }
	inline void set_m_bShuttingDown_2(bool value)
	{
		___m_bShuttingDown_2 = value;
	}

	inline static int32_t get_offset_of_m_RootInstance_3() { return static_cast<int32_t>(offsetof(NcEffectBehaviour_t813403937_StaticFields, ___m_RootInstance_3)); }
	inline GameObject_t1756533147 * get_m_RootInstance_3() const { return ___m_RootInstance_3; }
	inline GameObject_t1756533147 ** get_address_of_m_RootInstance_3() { return &___m_RootInstance_3; }
	inline void set_m_RootInstance_3(GameObject_t1756533147 * value)
	{
		___m_RootInstance_3 = value;
		Il2CppCodeGenWriteBarrier(&___m_RootInstance_3, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
