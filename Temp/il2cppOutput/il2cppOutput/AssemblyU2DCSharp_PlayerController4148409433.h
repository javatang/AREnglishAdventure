#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// UnityEngine.Transform
struct Transform_t3275118058;
// UnityEngine.AI.NavMeshAgent
struct NavMeshAgent_t2761625415;

#include "AssemblyU2DCSharp_Singleton_1_gen1029326524.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// PlayerController
struct  PlayerController_t4148409433  : public Singleton_1_t1029326524
{
public:
	// UnityEngine.Transform PlayerController::Button3DEnterAR
	Transform_t3275118058 * ___Button3DEnterAR_3;
	// UnityEngine.Transform PlayerController::Button3DEnterA
	Transform_t3275118058 * ___Button3DEnterA_4;
	// UnityEngine.Transform PlayerController::Button3DEnterB
	Transform_t3275118058 * ___Button3DEnterB_5;
	// UnityEngine.Transform PlayerController::Button3DEnterC
	Transform_t3275118058 * ___Button3DEnterC_6;
	// UnityEngine.Transform PlayerController::Button3DEnterD
	Transform_t3275118058 * ___Button3DEnterD_7;
	// UnityEngine.AI.NavMeshAgent PlayerController::agent
	NavMeshAgent_t2761625415 * ___agent_8;

public:
	inline static int32_t get_offset_of_Button3DEnterAR_3() { return static_cast<int32_t>(offsetof(PlayerController_t4148409433, ___Button3DEnterAR_3)); }
	inline Transform_t3275118058 * get_Button3DEnterAR_3() const { return ___Button3DEnterAR_3; }
	inline Transform_t3275118058 ** get_address_of_Button3DEnterAR_3() { return &___Button3DEnterAR_3; }
	inline void set_Button3DEnterAR_3(Transform_t3275118058 * value)
	{
		___Button3DEnterAR_3 = value;
		Il2CppCodeGenWriteBarrier(&___Button3DEnterAR_3, value);
	}

	inline static int32_t get_offset_of_Button3DEnterA_4() { return static_cast<int32_t>(offsetof(PlayerController_t4148409433, ___Button3DEnterA_4)); }
	inline Transform_t3275118058 * get_Button3DEnterA_4() const { return ___Button3DEnterA_4; }
	inline Transform_t3275118058 ** get_address_of_Button3DEnterA_4() { return &___Button3DEnterA_4; }
	inline void set_Button3DEnterA_4(Transform_t3275118058 * value)
	{
		___Button3DEnterA_4 = value;
		Il2CppCodeGenWriteBarrier(&___Button3DEnterA_4, value);
	}

	inline static int32_t get_offset_of_Button3DEnterB_5() { return static_cast<int32_t>(offsetof(PlayerController_t4148409433, ___Button3DEnterB_5)); }
	inline Transform_t3275118058 * get_Button3DEnterB_5() const { return ___Button3DEnterB_5; }
	inline Transform_t3275118058 ** get_address_of_Button3DEnterB_5() { return &___Button3DEnterB_5; }
	inline void set_Button3DEnterB_5(Transform_t3275118058 * value)
	{
		___Button3DEnterB_5 = value;
		Il2CppCodeGenWriteBarrier(&___Button3DEnterB_5, value);
	}

	inline static int32_t get_offset_of_Button3DEnterC_6() { return static_cast<int32_t>(offsetof(PlayerController_t4148409433, ___Button3DEnterC_6)); }
	inline Transform_t3275118058 * get_Button3DEnterC_6() const { return ___Button3DEnterC_6; }
	inline Transform_t3275118058 ** get_address_of_Button3DEnterC_6() { return &___Button3DEnterC_6; }
	inline void set_Button3DEnterC_6(Transform_t3275118058 * value)
	{
		___Button3DEnterC_6 = value;
		Il2CppCodeGenWriteBarrier(&___Button3DEnterC_6, value);
	}

	inline static int32_t get_offset_of_Button3DEnterD_7() { return static_cast<int32_t>(offsetof(PlayerController_t4148409433, ___Button3DEnterD_7)); }
	inline Transform_t3275118058 * get_Button3DEnterD_7() const { return ___Button3DEnterD_7; }
	inline Transform_t3275118058 ** get_address_of_Button3DEnterD_7() { return &___Button3DEnterD_7; }
	inline void set_Button3DEnterD_7(Transform_t3275118058 * value)
	{
		___Button3DEnterD_7 = value;
		Il2CppCodeGenWriteBarrier(&___Button3DEnterD_7, value);
	}

	inline static int32_t get_offset_of_agent_8() { return static_cast<int32_t>(offsetof(PlayerController_t4148409433, ___agent_8)); }
	inline NavMeshAgent_t2761625415 * get_agent_8() const { return ___agent_8; }
	inline NavMeshAgent_t2761625415 ** get_address_of_agent_8() { return &___agent_8; }
	inline void set_agent_8(NavMeshAgent_t2761625415 * value)
	{
		___agent_8 = value;
		Il2CppCodeGenWriteBarrier(&___agent_8, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
