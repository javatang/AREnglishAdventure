#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>


#include "UnityEngine_UnityEngine_MonoBehaviour1158329972.h"
#include "UnityEngine_UnityEngine_Vector32243707580.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// CameraShake
struct  CameraShake_t893586983  : public MonoBehaviour_t1158329972
{
public:
	// UnityEngine.Vector3 CameraShake::originPosition
	Vector3_t2243707580  ___originPosition_2;
	// System.Single CameraShake::shake_decay
	float ___shake_decay_3;
	// System.Single CameraShake::shake_scale
	float ___shake_scale_4;

public:
	inline static int32_t get_offset_of_originPosition_2() { return static_cast<int32_t>(offsetof(CameraShake_t893586983, ___originPosition_2)); }
	inline Vector3_t2243707580  get_originPosition_2() const { return ___originPosition_2; }
	inline Vector3_t2243707580 * get_address_of_originPosition_2() { return &___originPosition_2; }
	inline void set_originPosition_2(Vector3_t2243707580  value)
	{
		___originPosition_2 = value;
	}

	inline static int32_t get_offset_of_shake_decay_3() { return static_cast<int32_t>(offsetof(CameraShake_t893586983, ___shake_decay_3)); }
	inline float get_shake_decay_3() const { return ___shake_decay_3; }
	inline float* get_address_of_shake_decay_3() { return &___shake_decay_3; }
	inline void set_shake_decay_3(float value)
	{
		___shake_decay_3 = value;
	}

	inline static int32_t get_offset_of_shake_scale_4() { return static_cast<int32_t>(offsetof(CameraShake_t893586983, ___shake_scale_4)); }
	inline float get_shake_scale_4() const { return ___shake_scale_4; }
	inline float* get_address_of_shake_scale_4() { return &___shake_scale_4; }
	inline void set_shake_scale_4(float value)
	{
		___shake_scale_4 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
