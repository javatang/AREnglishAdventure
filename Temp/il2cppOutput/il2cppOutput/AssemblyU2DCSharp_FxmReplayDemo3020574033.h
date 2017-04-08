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

#include "UnityEngine_UnityEngine_MonoBehaviour1158329972.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// FxmReplayDemo
struct  FxmReplayDemo_t3020574033  : public MonoBehaviour_t1158329972
{
public:
	// UnityEngine.GameObject FxmReplayDemo::m_TargetPrefab
	GameObject_t1756533147 * ___m_TargetPrefab_2;
	// UnityEngine.GameObject FxmReplayDemo::m_InstanceObj
	GameObject_t1756533147 * ___m_InstanceObj_3;

public:
	inline static int32_t get_offset_of_m_TargetPrefab_2() { return static_cast<int32_t>(offsetof(FxmReplayDemo_t3020574033, ___m_TargetPrefab_2)); }
	inline GameObject_t1756533147 * get_m_TargetPrefab_2() const { return ___m_TargetPrefab_2; }
	inline GameObject_t1756533147 ** get_address_of_m_TargetPrefab_2() { return &___m_TargetPrefab_2; }
	inline void set_m_TargetPrefab_2(GameObject_t1756533147 * value)
	{
		___m_TargetPrefab_2 = value;
		Il2CppCodeGenWriteBarrier(&___m_TargetPrefab_2, value);
	}

	inline static int32_t get_offset_of_m_InstanceObj_3() { return static_cast<int32_t>(offsetof(FxmReplayDemo_t3020574033, ___m_InstanceObj_3)); }
	inline GameObject_t1756533147 * get_m_InstanceObj_3() const { return ___m_InstanceObj_3; }
	inline GameObject_t1756533147 ** get_address_of_m_InstanceObj_3() { return &___m_InstanceObj_3; }
	inline void set_m_InstanceObj_3(GameObject_t1756533147 * value)
	{
		___m_InstanceObj_3 = value;
		Il2CppCodeGenWriteBarrier(&___m_InstanceObj_3, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
