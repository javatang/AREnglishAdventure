#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// UnityEngine.Texture
struct Texture_t2243626319;

#include "AssemblyU2DCSharp_FXMakerImageEffectBase3723875321.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// FXMakerGrayscaleEffect
struct  FXMakerGrayscaleEffect_t2036518040  : public FXMakerImageEffectBase_t3723875321
{
public:
	// UnityEngine.Texture FXMakerGrayscaleEffect::textureRamp
	Texture_t2243626319 * ___textureRamp_4;
	// System.Single FXMakerGrayscaleEffect::rampOffset
	float ___rampOffset_5;

public:
	inline static int32_t get_offset_of_textureRamp_4() { return static_cast<int32_t>(offsetof(FXMakerGrayscaleEffect_t2036518040, ___textureRamp_4)); }
	inline Texture_t2243626319 * get_textureRamp_4() const { return ___textureRamp_4; }
	inline Texture_t2243626319 ** get_address_of_textureRamp_4() { return &___textureRamp_4; }
	inline void set_textureRamp_4(Texture_t2243626319 * value)
	{
		___textureRamp_4 = value;
		Il2CppCodeGenWriteBarrier(&___textureRamp_4, value);
	}

	inline static int32_t get_offset_of_rampOffset_5() { return static_cast<int32_t>(offsetof(FXMakerGrayscaleEffect_t2036518040, ___rampOffset_5)); }
	inline float get_rampOffset_5() const { return ___rampOffset_5; }
	inline float* get_address_of_rampOffset_5() { return &___rampOffset_5; }
	inline void set_rampOffset_5(float value)
	{
		___rampOffset_5 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
