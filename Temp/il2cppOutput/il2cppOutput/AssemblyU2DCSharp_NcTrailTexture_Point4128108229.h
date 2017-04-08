#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>


#include "mscorlib_System_Object2689449295.h"
#include "UnityEngine_UnityEngine_Vector32243707580.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// NcTrailTexture/Point
struct  Point_t4128108229  : public Il2CppObject
{
public:
	// System.Single NcTrailTexture/Point::timeCreated
	float ___timeCreated_0;
	// UnityEngine.Vector3 NcTrailTexture/Point::basePosition
	Vector3_t2243707580  ___basePosition_1;
	// UnityEngine.Vector3 NcTrailTexture/Point::tipPosition
	Vector3_t2243707580  ___tipPosition_2;
	// System.Boolean NcTrailTexture/Point::lineBreak
	bool ___lineBreak_3;

public:
	inline static int32_t get_offset_of_timeCreated_0() { return static_cast<int32_t>(offsetof(Point_t4128108229, ___timeCreated_0)); }
	inline float get_timeCreated_0() const { return ___timeCreated_0; }
	inline float* get_address_of_timeCreated_0() { return &___timeCreated_0; }
	inline void set_timeCreated_0(float value)
	{
		___timeCreated_0 = value;
	}

	inline static int32_t get_offset_of_basePosition_1() { return static_cast<int32_t>(offsetof(Point_t4128108229, ___basePosition_1)); }
	inline Vector3_t2243707580  get_basePosition_1() const { return ___basePosition_1; }
	inline Vector3_t2243707580 * get_address_of_basePosition_1() { return &___basePosition_1; }
	inline void set_basePosition_1(Vector3_t2243707580  value)
	{
		___basePosition_1 = value;
	}

	inline static int32_t get_offset_of_tipPosition_2() { return static_cast<int32_t>(offsetof(Point_t4128108229, ___tipPosition_2)); }
	inline Vector3_t2243707580  get_tipPosition_2() const { return ___tipPosition_2; }
	inline Vector3_t2243707580 * get_address_of_tipPosition_2() { return &___tipPosition_2; }
	inline void set_tipPosition_2(Vector3_t2243707580  value)
	{
		___tipPosition_2 = value;
	}

	inline static int32_t get_offset_of_lineBreak_3() { return static_cast<int32_t>(offsetof(Point_t4128108229, ___lineBreak_3)); }
	inline bool get_lineBreak_3() const { return ___lineBreak_3; }
	inline bool* get_address_of_lineBreak_3() { return &___lineBreak_3; }
	inline void set_lineBreak_3(bool value)
	{
		___lineBreak_3 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
