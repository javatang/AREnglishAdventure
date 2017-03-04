#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// UnityEngine.UI.Image
struct Image_t2042527209;
// UnityEngine.GameObject
struct GameObject_t1756533147;

#include "UnityEngine_UnityEngine_MonoBehaviour1158329972.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// MovieCamera
struct  MovieCamera_t3034908483  : public MonoBehaviour_t1158329972
{
public:
	// UnityEngine.UI.Image MovieCamera::UIBackground
	Image_t2042527209 * ___UIBackground_2;
	// UnityEngine.GameObject MovieCamera::player
	GameObject_t1756533147 * ___player_3;
	// System.Single MovieCamera::speed
	float ___speed_4;
	// System.Single MovieCamera::endZ
	float ___endZ_5;

public:
	inline static int32_t get_offset_of_UIBackground_2() { return static_cast<int32_t>(offsetof(MovieCamera_t3034908483, ___UIBackground_2)); }
	inline Image_t2042527209 * get_UIBackground_2() const { return ___UIBackground_2; }
	inline Image_t2042527209 ** get_address_of_UIBackground_2() { return &___UIBackground_2; }
	inline void set_UIBackground_2(Image_t2042527209 * value)
	{
		___UIBackground_2 = value;
		Il2CppCodeGenWriteBarrier(&___UIBackground_2, value);
	}

	inline static int32_t get_offset_of_player_3() { return static_cast<int32_t>(offsetof(MovieCamera_t3034908483, ___player_3)); }
	inline GameObject_t1756533147 * get_player_3() const { return ___player_3; }
	inline GameObject_t1756533147 ** get_address_of_player_3() { return &___player_3; }
	inline void set_player_3(GameObject_t1756533147 * value)
	{
		___player_3 = value;
		Il2CppCodeGenWriteBarrier(&___player_3, value);
	}

	inline static int32_t get_offset_of_speed_4() { return static_cast<int32_t>(offsetof(MovieCamera_t3034908483, ___speed_4)); }
	inline float get_speed_4() const { return ___speed_4; }
	inline float* get_address_of_speed_4() { return &___speed_4; }
	inline void set_speed_4(float value)
	{
		___speed_4 = value;
	}

	inline static int32_t get_offset_of_endZ_5() { return static_cast<int32_t>(offsetof(MovieCamera_t3034908483, ___endZ_5)); }
	inline float get_endZ_5() const { return ___endZ_5; }
	inline float* get_address_of_endZ_5() { return &___endZ_5; }
	inline void set_endZ_5(float value)
	{
		___endZ_5 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
