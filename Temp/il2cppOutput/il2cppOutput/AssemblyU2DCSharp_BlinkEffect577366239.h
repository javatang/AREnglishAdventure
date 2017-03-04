#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// UnityEngine.Material
struct Material_t193706927;
// UnityEngine.Renderer
struct Renderer_t257310565;

#include "UnityEngine_UnityEngine_MonoBehaviour1158329972.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// BlinkEffect
struct  BlinkEffect_t577366239  : public MonoBehaviour_t1158329972
{
public:
	// System.Boolean BlinkEffect::isOpen
	bool ___isOpen_2;
	// System.Int32 BlinkEffect::interval
	int32_t ___interval_3;
	// UnityEngine.Material BlinkEffect::Material1
	Material_t193706927 * ___Material1_4;
	// UnityEngine.Material BlinkEffect::Material2
	Material_t193706927 * ___Material2_5;
	// System.Int32 BlinkEffect::timer
	int32_t ___timer_6;
	// UnityEngine.Renderer BlinkEffect::render
	Renderer_t257310565 * ___render_7;

public:
	inline static int32_t get_offset_of_isOpen_2() { return static_cast<int32_t>(offsetof(BlinkEffect_t577366239, ___isOpen_2)); }
	inline bool get_isOpen_2() const { return ___isOpen_2; }
	inline bool* get_address_of_isOpen_2() { return &___isOpen_2; }
	inline void set_isOpen_2(bool value)
	{
		___isOpen_2 = value;
	}

	inline static int32_t get_offset_of_interval_3() { return static_cast<int32_t>(offsetof(BlinkEffect_t577366239, ___interval_3)); }
	inline int32_t get_interval_3() const { return ___interval_3; }
	inline int32_t* get_address_of_interval_3() { return &___interval_3; }
	inline void set_interval_3(int32_t value)
	{
		___interval_3 = value;
	}

	inline static int32_t get_offset_of_Material1_4() { return static_cast<int32_t>(offsetof(BlinkEffect_t577366239, ___Material1_4)); }
	inline Material_t193706927 * get_Material1_4() const { return ___Material1_4; }
	inline Material_t193706927 ** get_address_of_Material1_4() { return &___Material1_4; }
	inline void set_Material1_4(Material_t193706927 * value)
	{
		___Material1_4 = value;
		Il2CppCodeGenWriteBarrier(&___Material1_4, value);
	}

	inline static int32_t get_offset_of_Material2_5() { return static_cast<int32_t>(offsetof(BlinkEffect_t577366239, ___Material2_5)); }
	inline Material_t193706927 * get_Material2_5() const { return ___Material2_5; }
	inline Material_t193706927 ** get_address_of_Material2_5() { return &___Material2_5; }
	inline void set_Material2_5(Material_t193706927 * value)
	{
		___Material2_5 = value;
		Il2CppCodeGenWriteBarrier(&___Material2_5, value);
	}

	inline static int32_t get_offset_of_timer_6() { return static_cast<int32_t>(offsetof(BlinkEffect_t577366239, ___timer_6)); }
	inline int32_t get_timer_6() const { return ___timer_6; }
	inline int32_t* get_address_of_timer_6() { return &___timer_6; }
	inline void set_timer_6(int32_t value)
	{
		___timer_6 = value;
	}

	inline static int32_t get_offset_of_render_7() { return static_cast<int32_t>(offsetof(BlinkEffect_t577366239, ___render_7)); }
	inline Renderer_t257310565 * get_render_7() const { return ___render_7; }
	inline Renderer_t257310565 ** get_address_of_render_7() { return &___render_7; }
	inline void set_render_7(Renderer_t257310565 * value)
	{
		___render_7 = value;
		Il2CppCodeGenWriteBarrier(&___render_7, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
