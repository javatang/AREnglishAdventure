#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// UnityEngine.GameObject[]
struct GameObjectU5BU5D_t3057952154;
// UnityEngine.GUIText
struct GUIText_t2411476300;
// FxmTestSingleMouse
struct FxmTestSingleMouse_t2216994848;

#include "UnityEngine_UnityEngine_MonoBehaviour1158329972.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// FxmTestSingleMain
struct  FxmTestSingleMain_t2606026096  : public MonoBehaviour_t1158329972
{
public:
	// UnityEngine.GameObject[] FxmTestSingleMain::m_EffectPrefabs
	GameObjectU5BU5D_t3057952154* ___m_EffectPrefabs_2;
	// UnityEngine.GUIText FxmTestSingleMain::m_EffectGUIText
	GUIText_t2411476300 * ___m_EffectGUIText_3;
	// System.Int32 FxmTestSingleMain::m_nIndex
	int32_t ___m_nIndex_4;
	// System.Single FxmTestSingleMain::m_fCreateScale
	float ___m_fCreateScale_5;
	// System.Int32 FxmTestSingleMain::m_nCreateCount
	int32_t ___m_nCreateCount_6;
	// System.Single FxmTestSingleMain::m_fRandomRange
	float ___m_fRandomRange_7;
	// FxmTestSingleMouse FxmTestSingleMain::m_FXMakerMouse
	FxmTestSingleMouse_t2216994848 * ___m_FXMakerMouse_8;

public:
	inline static int32_t get_offset_of_m_EffectPrefabs_2() { return static_cast<int32_t>(offsetof(FxmTestSingleMain_t2606026096, ___m_EffectPrefabs_2)); }
	inline GameObjectU5BU5D_t3057952154* get_m_EffectPrefabs_2() const { return ___m_EffectPrefabs_2; }
	inline GameObjectU5BU5D_t3057952154** get_address_of_m_EffectPrefabs_2() { return &___m_EffectPrefabs_2; }
	inline void set_m_EffectPrefabs_2(GameObjectU5BU5D_t3057952154* value)
	{
		___m_EffectPrefabs_2 = value;
		Il2CppCodeGenWriteBarrier(&___m_EffectPrefabs_2, value);
	}

	inline static int32_t get_offset_of_m_EffectGUIText_3() { return static_cast<int32_t>(offsetof(FxmTestSingleMain_t2606026096, ___m_EffectGUIText_3)); }
	inline GUIText_t2411476300 * get_m_EffectGUIText_3() const { return ___m_EffectGUIText_3; }
	inline GUIText_t2411476300 ** get_address_of_m_EffectGUIText_3() { return &___m_EffectGUIText_3; }
	inline void set_m_EffectGUIText_3(GUIText_t2411476300 * value)
	{
		___m_EffectGUIText_3 = value;
		Il2CppCodeGenWriteBarrier(&___m_EffectGUIText_3, value);
	}

	inline static int32_t get_offset_of_m_nIndex_4() { return static_cast<int32_t>(offsetof(FxmTestSingleMain_t2606026096, ___m_nIndex_4)); }
	inline int32_t get_m_nIndex_4() const { return ___m_nIndex_4; }
	inline int32_t* get_address_of_m_nIndex_4() { return &___m_nIndex_4; }
	inline void set_m_nIndex_4(int32_t value)
	{
		___m_nIndex_4 = value;
	}

	inline static int32_t get_offset_of_m_fCreateScale_5() { return static_cast<int32_t>(offsetof(FxmTestSingleMain_t2606026096, ___m_fCreateScale_5)); }
	inline float get_m_fCreateScale_5() const { return ___m_fCreateScale_5; }
	inline float* get_address_of_m_fCreateScale_5() { return &___m_fCreateScale_5; }
	inline void set_m_fCreateScale_5(float value)
	{
		___m_fCreateScale_5 = value;
	}

	inline static int32_t get_offset_of_m_nCreateCount_6() { return static_cast<int32_t>(offsetof(FxmTestSingleMain_t2606026096, ___m_nCreateCount_6)); }
	inline int32_t get_m_nCreateCount_6() const { return ___m_nCreateCount_6; }
	inline int32_t* get_address_of_m_nCreateCount_6() { return &___m_nCreateCount_6; }
	inline void set_m_nCreateCount_6(int32_t value)
	{
		___m_nCreateCount_6 = value;
	}

	inline static int32_t get_offset_of_m_fRandomRange_7() { return static_cast<int32_t>(offsetof(FxmTestSingleMain_t2606026096, ___m_fRandomRange_7)); }
	inline float get_m_fRandomRange_7() const { return ___m_fRandomRange_7; }
	inline float* get_address_of_m_fRandomRange_7() { return &___m_fRandomRange_7; }
	inline void set_m_fRandomRange_7(float value)
	{
		___m_fRandomRange_7 = value;
	}

	inline static int32_t get_offset_of_m_FXMakerMouse_8() { return static_cast<int32_t>(offsetof(FxmTestSingleMain_t2606026096, ___m_FXMakerMouse_8)); }
	inline FxmTestSingleMouse_t2216994848 * get_m_FXMakerMouse_8() const { return ___m_FXMakerMouse_8; }
	inline FxmTestSingleMouse_t2216994848 ** get_address_of_m_FXMakerMouse_8() { return &___m_FXMakerMouse_8; }
	inline void set_m_FXMakerMouse_8(FxmTestSingleMouse_t2216994848 * value)
	{
		___m_FXMakerMouse_8 = value;
		Il2CppCodeGenWriteBarrier(&___m_FXMakerMouse_8, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
