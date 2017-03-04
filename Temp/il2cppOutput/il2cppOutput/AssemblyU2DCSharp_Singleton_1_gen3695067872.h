#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// UIManager
struct UIManager_t2519183485;

#include "UnityEngine_UnityEngine_MonoBehaviour1158329972.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Singleton`1<UIManager>
struct  Singleton_1_t3695067872  : public MonoBehaviour_t1158329972
{
public:

public:
};

struct Singleton_1_t3695067872_StaticFields
{
public:
	// T Singleton`1::_instance
	UIManager_t2519183485 * ____instance_2;

public:
	inline static int32_t get_offset_of__instance_2() { return static_cast<int32_t>(offsetof(Singleton_1_t3695067872_StaticFields, ____instance_2)); }
	inline UIManager_t2519183485 * get__instance_2() const { return ____instance_2; }
	inline UIManager_t2519183485 ** get_address_of__instance_2() { return &____instance_2; }
	inline void set__instance_2(UIManager_t2519183485 * value)
	{
		____instance_2 = value;
		Il2CppCodeGenWriteBarrier(&____instance_2, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
