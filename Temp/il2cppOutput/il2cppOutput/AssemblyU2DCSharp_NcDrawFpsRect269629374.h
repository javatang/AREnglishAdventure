#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// System.String
struct String_t;
// UnityEngine.GUIStyle
struct GUIStyle_t1799908754;

#include "UnityEngine_UnityEngine_MonoBehaviour1158329972.h"
#include "UnityEngine_UnityEngine_Rect3681755626.h"
#include "UnityEngine_UnityEngine_Color2020392075.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// NcDrawFpsRect
struct  NcDrawFpsRect_t269629374  : public MonoBehaviour_t1158329972
{
public:
	// System.Boolean NcDrawFpsRect::centerTop
	bool ___centerTop_2;
	// UnityEngine.Rect NcDrawFpsRect::startRect
	Rect_t3681755626  ___startRect_3;
	// System.Boolean NcDrawFpsRect::updateColor
	bool ___updateColor_4;
	// System.Boolean NcDrawFpsRect::allowDrag
	bool ___allowDrag_5;
	// System.Single NcDrawFpsRect::frequency
	float ___frequency_6;
	// System.Int32 NcDrawFpsRect::nbDecimal
	int32_t ___nbDecimal_7;
	// System.Single NcDrawFpsRect::accum
	float ___accum_8;
	// System.Int32 NcDrawFpsRect::frames
	int32_t ___frames_9;
	// UnityEngine.Color NcDrawFpsRect::color
	Color_t2020392075  ___color_10;
	// System.String NcDrawFpsRect::sFPS
	String_t* ___sFPS_11;
	// UnityEngine.GUIStyle NcDrawFpsRect::style
	GUIStyle_t1799908754 * ___style_12;

public:
	inline static int32_t get_offset_of_centerTop_2() { return static_cast<int32_t>(offsetof(NcDrawFpsRect_t269629374, ___centerTop_2)); }
	inline bool get_centerTop_2() const { return ___centerTop_2; }
	inline bool* get_address_of_centerTop_2() { return &___centerTop_2; }
	inline void set_centerTop_2(bool value)
	{
		___centerTop_2 = value;
	}

	inline static int32_t get_offset_of_startRect_3() { return static_cast<int32_t>(offsetof(NcDrawFpsRect_t269629374, ___startRect_3)); }
	inline Rect_t3681755626  get_startRect_3() const { return ___startRect_3; }
	inline Rect_t3681755626 * get_address_of_startRect_3() { return &___startRect_3; }
	inline void set_startRect_3(Rect_t3681755626  value)
	{
		___startRect_3 = value;
	}

	inline static int32_t get_offset_of_updateColor_4() { return static_cast<int32_t>(offsetof(NcDrawFpsRect_t269629374, ___updateColor_4)); }
	inline bool get_updateColor_4() const { return ___updateColor_4; }
	inline bool* get_address_of_updateColor_4() { return &___updateColor_4; }
	inline void set_updateColor_4(bool value)
	{
		___updateColor_4 = value;
	}

	inline static int32_t get_offset_of_allowDrag_5() { return static_cast<int32_t>(offsetof(NcDrawFpsRect_t269629374, ___allowDrag_5)); }
	inline bool get_allowDrag_5() const { return ___allowDrag_5; }
	inline bool* get_address_of_allowDrag_5() { return &___allowDrag_5; }
	inline void set_allowDrag_5(bool value)
	{
		___allowDrag_5 = value;
	}

	inline static int32_t get_offset_of_frequency_6() { return static_cast<int32_t>(offsetof(NcDrawFpsRect_t269629374, ___frequency_6)); }
	inline float get_frequency_6() const { return ___frequency_6; }
	inline float* get_address_of_frequency_6() { return &___frequency_6; }
	inline void set_frequency_6(float value)
	{
		___frequency_6 = value;
	}

	inline static int32_t get_offset_of_nbDecimal_7() { return static_cast<int32_t>(offsetof(NcDrawFpsRect_t269629374, ___nbDecimal_7)); }
	inline int32_t get_nbDecimal_7() const { return ___nbDecimal_7; }
	inline int32_t* get_address_of_nbDecimal_7() { return &___nbDecimal_7; }
	inline void set_nbDecimal_7(int32_t value)
	{
		___nbDecimal_7 = value;
	}

	inline static int32_t get_offset_of_accum_8() { return static_cast<int32_t>(offsetof(NcDrawFpsRect_t269629374, ___accum_8)); }
	inline float get_accum_8() const { return ___accum_8; }
	inline float* get_address_of_accum_8() { return &___accum_8; }
	inline void set_accum_8(float value)
	{
		___accum_8 = value;
	}

	inline static int32_t get_offset_of_frames_9() { return static_cast<int32_t>(offsetof(NcDrawFpsRect_t269629374, ___frames_9)); }
	inline int32_t get_frames_9() const { return ___frames_9; }
	inline int32_t* get_address_of_frames_9() { return &___frames_9; }
	inline void set_frames_9(int32_t value)
	{
		___frames_9 = value;
	}

	inline static int32_t get_offset_of_color_10() { return static_cast<int32_t>(offsetof(NcDrawFpsRect_t269629374, ___color_10)); }
	inline Color_t2020392075  get_color_10() const { return ___color_10; }
	inline Color_t2020392075 * get_address_of_color_10() { return &___color_10; }
	inline void set_color_10(Color_t2020392075  value)
	{
		___color_10 = value;
	}

	inline static int32_t get_offset_of_sFPS_11() { return static_cast<int32_t>(offsetof(NcDrawFpsRect_t269629374, ___sFPS_11)); }
	inline String_t* get_sFPS_11() const { return ___sFPS_11; }
	inline String_t** get_address_of_sFPS_11() { return &___sFPS_11; }
	inline void set_sFPS_11(String_t* value)
	{
		___sFPS_11 = value;
		Il2CppCodeGenWriteBarrier(&___sFPS_11, value);
	}

	inline static int32_t get_offset_of_style_12() { return static_cast<int32_t>(offsetof(NcDrawFpsRect_t269629374, ___style_12)); }
	inline GUIStyle_t1799908754 * get_style_12() const { return ___style_12; }
	inline GUIStyle_t1799908754 ** get_address_of_style_12() { return &___style_12; }
	inline void set_style_12(GUIStyle_t1799908754 * value)
	{
		___style_12 = value;
		Il2CppCodeGenWriteBarrier(&___style_12, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
