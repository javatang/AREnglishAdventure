﻿#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// System.Object
struct Il2CppObject;

#include "UnityEngine_UnityEngine_MonoBehaviour1158329972.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Singleton`1<System.Object>
struct  Singleton_1_t3865333682  : public MonoBehaviour_t1158329972
{
public:

public:
};

struct Singleton_1_t3865333682_StaticFields
{
public:
	// T Singleton`1::_instance
	Il2CppObject * ____instance_2;

public:
	inline static int32_t get_offset_of__instance_2() { return static_cast<int32_t>(offsetof(Singleton_1_t3865333682_StaticFields, ____instance_2)); }
	inline Il2CppObject * get__instance_2() const { return ____instance_2; }
	inline Il2CppObject ** get_address_of__instance_2() { return &____instance_2; }
	inline void set__instance_2(Il2CppObject * value)
	{
		____instance_2 = value;
		Il2CppCodeGenWriteBarrier(&____instance_2, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
