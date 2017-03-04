#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// System.Collections.Generic.List`1<NcSpriteFactory/NcSpriteNode>
struct List_1_t4032311029;
// UnityEngine.GameObject
struct GameObject_t1756533147;
// NcAttachSound
struct NcAttachSound_t3877161099;

#include "AssemblyU2DCSharp_NcEffectBehaviour813403937.h"
#include "AssemblyU2DCSharp_NcSpriteFactory_SPRITE_TYPE274036503.h"
#include "AssemblyU2DCSharp_NcSpriteFactory_SHOW_TYPE3524340137.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// NcSpriteFactory
struct  NcSpriteFactory_t883580072  : public NcEffectBehaviour_t813403937
{
public:
	// NcSpriteFactory/SPRITE_TYPE NcSpriteFactory::m_SpriteType
	int32_t ___m_SpriteType_9;
	// System.Collections.Generic.List`1<NcSpriteFactory/NcSpriteNode> NcSpriteFactory::m_SpriteList
	List_1_t4032311029 * ___m_SpriteList_10;
	// System.Int32 NcSpriteFactory::m_nCurrentIndex
	int32_t ___m_nCurrentIndex_11;
	// System.Int32 NcSpriteFactory::m_nMaxAtlasTextureSize
	int32_t ___m_nMaxAtlasTextureSize_12;
	// System.Boolean NcSpriteFactory::m_bNeedRebuild
	bool ___m_bNeedRebuild_13;
	// System.Int32 NcSpriteFactory::m_nBuildStartIndex
	int32_t ___m_nBuildStartIndex_14;
	// System.Single NcSpriteFactory::m_fSpriteResizeRate
	float ___m_fSpriteResizeRate_15;
	// System.Boolean NcSpriteFactory::m_bTrimBlack
	bool ___m_bTrimBlack_16;
	// System.Boolean NcSpriteFactory::m_bTrimAlpha
	bool ___m_bTrimAlpha_17;
	// System.Single NcSpriteFactory::m_fUvScale
	float ___m_fUvScale_18;
	// System.Single NcSpriteFactory::m_fTextureRatio
	float ___m_fTextureRatio_19;
	// UnityEngine.GameObject NcSpriteFactory::m_CurrentEffect
	GameObject_t1756533147 * ___m_CurrentEffect_20;
	// NcAttachSound NcSpriteFactory::m_CurrentSound
	NcAttachSound_t3877161099 * ___m_CurrentSound_21;
	// System.Boolean NcSpriteFactory::m_bEndSprite
	bool ___m_bEndSprite_22;
	// NcSpriteFactory/SHOW_TYPE NcSpriteFactory::m_ShowType
	int32_t ___m_ShowType_23;
	// System.Boolean NcSpriteFactory::m_bShowEffect
	bool ___m_bShowEffect_24;
	// System.Boolean NcSpriteFactory::m_bTestMode
	bool ___m_bTestMode_25;
	// System.Boolean NcSpriteFactory::m_bSequenceMode
	bool ___m_bSequenceMode_26;
	// System.Boolean NcSpriteFactory::m_bbInstance
	bool ___m_bbInstance_27;

public:
	inline static int32_t get_offset_of_m_SpriteType_9() { return static_cast<int32_t>(offsetof(NcSpriteFactory_t883580072, ___m_SpriteType_9)); }
	inline int32_t get_m_SpriteType_9() const { return ___m_SpriteType_9; }
	inline int32_t* get_address_of_m_SpriteType_9() { return &___m_SpriteType_9; }
	inline void set_m_SpriteType_9(int32_t value)
	{
		___m_SpriteType_9 = value;
	}

	inline static int32_t get_offset_of_m_SpriteList_10() { return static_cast<int32_t>(offsetof(NcSpriteFactory_t883580072, ___m_SpriteList_10)); }
	inline List_1_t4032311029 * get_m_SpriteList_10() const { return ___m_SpriteList_10; }
	inline List_1_t4032311029 ** get_address_of_m_SpriteList_10() { return &___m_SpriteList_10; }
	inline void set_m_SpriteList_10(List_1_t4032311029 * value)
	{
		___m_SpriteList_10 = value;
		Il2CppCodeGenWriteBarrier(&___m_SpriteList_10, value);
	}

	inline static int32_t get_offset_of_m_nCurrentIndex_11() { return static_cast<int32_t>(offsetof(NcSpriteFactory_t883580072, ___m_nCurrentIndex_11)); }
	inline int32_t get_m_nCurrentIndex_11() const { return ___m_nCurrentIndex_11; }
	inline int32_t* get_address_of_m_nCurrentIndex_11() { return &___m_nCurrentIndex_11; }
	inline void set_m_nCurrentIndex_11(int32_t value)
	{
		___m_nCurrentIndex_11 = value;
	}

	inline static int32_t get_offset_of_m_nMaxAtlasTextureSize_12() { return static_cast<int32_t>(offsetof(NcSpriteFactory_t883580072, ___m_nMaxAtlasTextureSize_12)); }
	inline int32_t get_m_nMaxAtlasTextureSize_12() const { return ___m_nMaxAtlasTextureSize_12; }
	inline int32_t* get_address_of_m_nMaxAtlasTextureSize_12() { return &___m_nMaxAtlasTextureSize_12; }
	inline void set_m_nMaxAtlasTextureSize_12(int32_t value)
	{
		___m_nMaxAtlasTextureSize_12 = value;
	}

	inline static int32_t get_offset_of_m_bNeedRebuild_13() { return static_cast<int32_t>(offsetof(NcSpriteFactory_t883580072, ___m_bNeedRebuild_13)); }
	inline bool get_m_bNeedRebuild_13() const { return ___m_bNeedRebuild_13; }
	inline bool* get_address_of_m_bNeedRebuild_13() { return &___m_bNeedRebuild_13; }
	inline void set_m_bNeedRebuild_13(bool value)
	{
		___m_bNeedRebuild_13 = value;
	}

	inline static int32_t get_offset_of_m_nBuildStartIndex_14() { return static_cast<int32_t>(offsetof(NcSpriteFactory_t883580072, ___m_nBuildStartIndex_14)); }
	inline int32_t get_m_nBuildStartIndex_14() const { return ___m_nBuildStartIndex_14; }
	inline int32_t* get_address_of_m_nBuildStartIndex_14() { return &___m_nBuildStartIndex_14; }
	inline void set_m_nBuildStartIndex_14(int32_t value)
	{
		___m_nBuildStartIndex_14 = value;
	}

	inline static int32_t get_offset_of_m_fSpriteResizeRate_15() { return static_cast<int32_t>(offsetof(NcSpriteFactory_t883580072, ___m_fSpriteResizeRate_15)); }
	inline float get_m_fSpriteResizeRate_15() const { return ___m_fSpriteResizeRate_15; }
	inline float* get_address_of_m_fSpriteResizeRate_15() { return &___m_fSpriteResizeRate_15; }
	inline void set_m_fSpriteResizeRate_15(float value)
	{
		___m_fSpriteResizeRate_15 = value;
	}

	inline static int32_t get_offset_of_m_bTrimBlack_16() { return static_cast<int32_t>(offsetof(NcSpriteFactory_t883580072, ___m_bTrimBlack_16)); }
	inline bool get_m_bTrimBlack_16() const { return ___m_bTrimBlack_16; }
	inline bool* get_address_of_m_bTrimBlack_16() { return &___m_bTrimBlack_16; }
	inline void set_m_bTrimBlack_16(bool value)
	{
		___m_bTrimBlack_16 = value;
	}

	inline static int32_t get_offset_of_m_bTrimAlpha_17() { return static_cast<int32_t>(offsetof(NcSpriteFactory_t883580072, ___m_bTrimAlpha_17)); }
	inline bool get_m_bTrimAlpha_17() const { return ___m_bTrimAlpha_17; }
	inline bool* get_address_of_m_bTrimAlpha_17() { return &___m_bTrimAlpha_17; }
	inline void set_m_bTrimAlpha_17(bool value)
	{
		___m_bTrimAlpha_17 = value;
	}

	inline static int32_t get_offset_of_m_fUvScale_18() { return static_cast<int32_t>(offsetof(NcSpriteFactory_t883580072, ___m_fUvScale_18)); }
	inline float get_m_fUvScale_18() const { return ___m_fUvScale_18; }
	inline float* get_address_of_m_fUvScale_18() { return &___m_fUvScale_18; }
	inline void set_m_fUvScale_18(float value)
	{
		___m_fUvScale_18 = value;
	}

	inline static int32_t get_offset_of_m_fTextureRatio_19() { return static_cast<int32_t>(offsetof(NcSpriteFactory_t883580072, ___m_fTextureRatio_19)); }
	inline float get_m_fTextureRatio_19() const { return ___m_fTextureRatio_19; }
	inline float* get_address_of_m_fTextureRatio_19() { return &___m_fTextureRatio_19; }
	inline void set_m_fTextureRatio_19(float value)
	{
		___m_fTextureRatio_19 = value;
	}

	inline static int32_t get_offset_of_m_CurrentEffect_20() { return static_cast<int32_t>(offsetof(NcSpriteFactory_t883580072, ___m_CurrentEffect_20)); }
	inline GameObject_t1756533147 * get_m_CurrentEffect_20() const { return ___m_CurrentEffect_20; }
	inline GameObject_t1756533147 ** get_address_of_m_CurrentEffect_20() { return &___m_CurrentEffect_20; }
	inline void set_m_CurrentEffect_20(GameObject_t1756533147 * value)
	{
		___m_CurrentEffect_20 = value;
		Il2CppCodeGenWriteBarrier(&___m_CurrentEffect_20, value);
	}

	inline static int32_t get_offset_of_m_CurrentSound_21() { return static_cast<int32_t>(offsetof(NcSpriteFactory_t883580072, ___m_CurrentSound_21)); }
	inline NcAttachSound_t3877161099 * get_m_CurrentSound_21() const { return ___m_CurrentSound_21; }
	inline NcAttachSound_t3877161099 ** get_address_of_m_CurrentSound_21() { return &___m_CurrentSound_21; }
	inline void set_m_CurrentSound_21(NcAttachSound_t3877161099 * value)
	{
		___m_CurrentSound_21 = value;
		Il2CppCodeGenWriteBarrier(&___m_CurrentSound_21, value);
	}

	inline static int32_t get_offset_of_m_bEndSprite_22() { return static_cast<int32_t>(offsetof(NcSpriteFactory_t883580072, ___m_bEndSprite_22)); }
	inline bool get_m_bEndSprite_22() const { return ___m_bEndSprite_22; }
	inline bool* get_address_of_m_bEndSprite_22() { return &___m_bEndSprite_22; }
	inline void set_m_bEndSprite_22(bool value)
	{
		___m_bEndSprite_22 = value;
	}

	inline static int32_t get_offset_of_m_ShowType_23() { return static_cast<int32_t>(offsetof(NcSpriteFactory_t883580072, ___m_ShowType_23)); }
	inline int32_t get_m_ShowType_23() const { return ___m_ShowType_23; }
	inline int32_t* get_address_of_m_ShowType_23() { return &___m_ShowType_23; }
	inline void set_m_ShowType_23(int32_t value)
	{
		___m_ShowType_23 = value;
	}

	inline static int32_t get_offset_of_m_bShowEffect_24() { return static_cast<int32_t>(offsetof(NcSpriteFactory_t883580072, ___m_bShowEffect_24)); }
	inline bool get_m_bShowEffect_24() const { return ___m_bShowEffect_24; }
	inline bool* get_address_of_m_bShowEffect_24() { return &___m_bShowEffect_24; }
	inline void set_m_bShowEffect_24(bool value)
	{
		___m_bShowEffect_24 = value;
	}

	inline static int32_t get_offset_of_m_bTestMode_25() { return static_cast<int32_t>(offsetof(NcSpriteFactory_t883580072, ___m_bTestMode_25)); }
	inline bool get_m_bTestMode_25() const { return ___m_bTestMode_25; }
	inline bool* get_address_of_m_bTestMode_25() { return &___m_bTestMode_25; }
	inline void set_m_bTestMode_25(bool value)
	{
		___m_bTestMode_25 = value;
	}

	inline static int32_t get_offset_of_m_bSequenceMode_26() { return static_cast<int32_t>(offsetof(NcSpriteFactory_t883580072, ___m_bSequenceMode_26)); }
	inline bool get_m_bSequenceMode_26() const { return ___m_bSequenceMode_26; }
	inline bool* get_address_of_m_bSequenceMode_26() { return &___m_bSequenceMode_26; }
	inline void set_m_bSequenceMode_26(bool value)
	{
		___m_bSequenceMode_26 = value;
	}

	inline static int32_t get_offset_of_m_bbInstance_27() { return static_cast<int32_t>(offsetof(NcSpriteFactory_t883580072, ___m_bbInstance_27)); }
	inline bool get_m_bbInstance_27() const { return ___m_bbInstance_27; }
	inline bool* get_address_of_m_bbInstance_27() { return &___m_bbInstance_27; }
	inline void set_m_bbInstance_27(bool value)
	{
		___m_bbInstance_27 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
