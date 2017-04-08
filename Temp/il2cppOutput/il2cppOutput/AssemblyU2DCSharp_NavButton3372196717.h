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

#include "UnityEngine_UnityEngine_MonoBehaviour1158329972.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// NavButton
struct  NavButton_t3372196717  : public MonoBehaviour_t1158329972
{
public:
	// UnityEngine.Transform NavButton::EnterPoint
	Transform_t3275118058 * ___EnterPoint_2;

public:
	inline static int32_t get_offset_of_EnterPoint_2() { return static_cast<int32_t>(offsetof(NavButton_t3372196717, ___EnterPoint_2)); }
	inline Transform_t3275118058 * get_EnterPoint_2() const { return ___EnterPoint_2; }
	inline Transform_t3275118058 ** get_address_of_EnterPoint_2() { return &___EnterPoint_2; }
	inline void set_EnterPoint_2(Transform_t3275118058 * value)
	{
		___EnterPoint_2 = value;
		Il2CppCodeGenWriteBarrier(&___EnterPoint_2, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
