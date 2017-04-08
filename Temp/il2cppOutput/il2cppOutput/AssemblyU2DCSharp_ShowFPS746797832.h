#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// UnityEngine.GUIStyle
struct GUIStyle_t1799908754;

#include "UnityEngine_UnityEngine_MonoBehaviour1158329972.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// ShowFPS
struct  ShowFPS_t746797832  : public MonoBehaviour_t1158329972
{
public:
	// System.Int32 ShowFPS::fontSize
	int32_t ___fontSize_2;
	// System.Single ShowFPS::updateInterval
	float ___updateInterval_3;
	// System.Single ShowFPS::lastInterval
	float ___lastInterval_4;
	// System.Int32 ShowFPS::frames
	int32_t ___frames_5;
	// System.Single ShowFPS::fps
	float ___fps_6;
	// System.Single ShowFPS::time
	float ___time_7;
	// UnityEngine.GUIStyle ShowFPS::style
	GUIStyle_t1799908754 * ___style_8;

public:
	inline static int32_t get_offset_of_fontSize_2() { return static_cast<int32_t>(offsetof(ShowFPS_t746797832, ___fontSize_2)); }
	inline int32_t get_fontSize_2() const { return ___fontSize_2; }
	inline int32_t* get_address_of_fontSize_2() { return &___fontSize_2; }
	inline void set_fontSize_2(int32_t value)
	{
		___fontSize_2 = value;
	}

	inline static int32_t get_offset_of_updateInterval_3() { return static_cast<int32_t>(offsetof(ShowFPS_t746797832, ___updateInterval_3)); }
	inline float get_updateInterval_3() const { return ___updateInterval_3; }
	inline float* get_address_of_updateInterval_3() { return &___updateInterval_3; }
	inline void set_updateInterval_3(float value)
	{
		___updateInterval_3 = value;
	}

	inline static int32_t get_offset_of_lastInterval_4() { return static_cast<int32_t>(offsetof(ShowFPS_t746797832, ___lastInterval_4)); }
	inline float get_lastInterval_4() const { return ___lastInterval_4; }
	inline float* get_address_of_lastInterval_4() { return &___lastInterval_4; }
	inline void set_lastInterval_4(float value)
	{
		___lastInterval_4 = value;
	}

	inline static int32_t get_offset_of_frames_5() { return static_cast<int32_t>(offsetof(ShowFPS_t746797832, ___frames_5)); }
	inline int32_t get_frames_5() const { return ___frames_5; }
	inline int32_t* get_address_of_frames_5() { return &___frames_5; }
	inline void set_frames_5(int32_t value)
	{
		___frames_5 = value;
	}

	inline static int32_t get_offset_of_fps_6() { return static_cast<int32_t>(offsetof(ShowFPS_t746797832, ___fps_6)); }
	inline float get_fps_6() const { return ___fps_6; }
	inline float* get_address_of_fps_6() { return &___fps_6; }
	inline void set_fps_6(float value)
	{
		___fps_6 = value;
	}

	inline static int32_t get_offset_of_time_7() { return static_cast<int32_t>(offsetof(ShowFPS_t746797832, ___time_7)); }
	inline float get_time_7() const { return ___time_7; }
	inline float* get_address_of_time_7() { return &___time_7; }
	inline void set_time_7(float value)
	{
		___time_7 = value;
	}

	inline static int32_t get_offset_of_style_8() { return static_cast<int32_t>(offsetof(ShowFPS_t746797832, ___style_8)); }
	inline GUIStyle_t1799908754 * get_style_8() const { return ___style_8; }
	inline GUIStyle_t1799908754 ** get_address_of_style_8() { return &___style_8; }
	inline void set_style_8(GUIStyle_t1799908754 * value)
	{
		___style_8 = value;
		Il2CppCodeGenWriteBarrier(&___style_8, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
