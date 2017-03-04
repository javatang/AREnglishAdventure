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
// NcSpriteFactory/NcFrameInfo[]
struct NcFrameInfoU5BU5D_t2570076182;
// UnityEngine.GameObject
struct GameObject_t1756533147;
// UnityEngine.AudioClip
struct AudioClip_t1932558630;

#include "mscorlib_System_Object2689449295.h"
#include "UnityEngine_UnityEngine_Vector32243707580.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// NcSpriteFactory/NcSpriteNode
struct  NcSpriteNode_t368222601  : public Il2CppObject
{
public:
	// System.Boolean NcSpriteFactory/NcSpriteNode::m_bIncludedAtlas
	bool ___m_bIncludedAtlas_0;
	// System.String NcSpriteFactory/NcSpriteNode::m_TextureGUID
	String_t* ___m_TextureGUID_1;
	// System.String NcSpriteFactory/NcSpriteNode::m_TextureName
	String_t* ___m_TextureName_2;
	// System.Single NcSpriteFactory/NcSpriteNode::m_fMaxTextureAlpha
	float ___m_fMaxTextureAlpha_3;
	// System.String NcSpriteFactory/NcSpriteNode::m_SpriteName
	String_t* ___m_SpriteName_4;
	// System.Int32 NcSpriteFactory/NcSpriteNode::m_nSkipFrame
	int32_t ___m_nSkipFrame_5;
	// NcSpriteFactory/NcFrameInfo[] NcSpriteFactory/NcSpriteNode::m_FrameInfos
	NcFrameInfoU5BU5D_t2570076182* ___m_FrameInfos_6;
	// System.Int32 NcSpriteFactory/NcSpriteNode::m_nTilingX
	int32_t ___m_nTilingX_7;
	// System.Int32 NcSpriteFactory/NcSpriteNode::m_nTilingY
	int32_t ___m_nTilingY_8;
	// System.Int32 NcSpriteFactory/NcSpriteNode::m_nStartFrame
	int32_t ___m_nStartFrame_9;
	// System.Int32 NcSpriteFactory/NcSpriteNode::m_nFrameCount
	int32_t ___m_nFrameCount_10;
	// System.Boolean NcSpriteFactory/NcSpriteNode::m_bLoop
	bool ___m_bLoop_11;
	// System.Int32 NcSpriteFactory/NcSpriteNode::m_nLoopStartFrame
	int32_t ___m_nLoopStartFrame_12;
	// System.Int32 NcSpriteFactory/NcSpriteNode::m_nLoopFrameCount
	int32_t ___m_nLoopFrameCount_13;
	// System.Int32 NcSpriteFactory/NcSpriteNode::m_nLoopingCount
	int32_t ___m_nLoopingCount_14;
	// System.Single NcSpriteFactory/NcSpriteNode::m_fFps
	float ___m_fFps_15;
	// System.Single NcSpriteFactory/NcSpriteNode::m_fTime
	float ___m_fTime_16;
	// System.Int32 NcSpriteFactory/NcSpriteNode::m_nNextSpriteIndex
	int32_t ___m_nNextSpriteIndex_17;
	// System.Int32 NcSpriteFactory/NcSpriteNode::m_nTestMode
	int32_t ___m_nTestMode_18;
	// System.Single NcSpriteFactory/NcSpriteNode::m_fTestSpeed
	float ___m_fTestSpeed_19;
	// System.Boolean NcSpriteFactory/NcSpriteNode::m_bEffectInstantiate
	bool ___m_bEffectInstantiate_20;
	// UnityEngine.GameObject NcSpriteFactory/NcSpriteNode::m_EffectPrefab
	GameObject_t1756533147 * ___m_EffectPrefab_21;
	// System.Int32 NcSpriteFactory/NcSpriteNode::m_nSpriteFactoryIndex
	int32_t ___m_nSpriteFactoryIndex_22;
	// System.Int32 NcSpriteFactory/NcSpriteNode::m_nEffectFrame
	int32_t ___m_nEffectFrame_23;
	// System.Boolean NcSpriteFactory/NcSpriteNode::m_bEffectOnlyFirst
	bool ___m_bEffectOnlyFirst_24;
	// System.Boolean NcSpriteFactory/NcSpriteNode::m_bEffectDetach
	bool ___m_bEffectDetach_25;
	// System.Single NcSpriteFactory/NcSpriteNode::m_fEffectSpeed
	float ___m_fEffectSpeed_26;
	// System.Single NcSpriteFactory/NcSpriteNode::m_fEffectScale
	float ___m_fEffectScale_27;
	// UnityEngine.Vector3 NcSpriteFactory/NcSpriteNode::m_EffectPos
	Vector3_t2243707580  ___m_EffectPos_28;
	// UnityEngine.Vector3 NcSpriteFactory/NcSpriteNode::m_EffectRot
	Vector3_t2243707580  ___m_EffectRot_29;
	// UnityEngine.AudioClip NcSpriteFactory/NcSpriteNode::m_AudioClip
	AudioClip_t1932558630 * ___m_AudioClip_30;
	// System.Int32 NcSpriteFactory/NcSpriteNode::m_nSoundFrame
	int32_t ___m_nSoundFrame_31;
	// System.Boolean NcSpriteFactory/NcSpriteNode::m_bSoundOnlyFirst
	bool ___m_bSoundOnlyFirst_32;
	// System.Boolean NcSpriteFactory/NcSpriteNode::m_bSoundLoop
	bool ___m_bSoundLoop_33;
	// System.Single NcSpriteFactory/NcSpriteNode::m_fSoundVolume
	float ___m_fSoundVolume_34;
	// System.Single NcSpriteFactory/NcSpriteNode::m_fSoundPitch
	float ___m_fSoundPitch_35;

public:
	inline static int32_t get_offset_of_m_bIncludedAtlas_0() { return static_cast<int32_t>(offsetof(NcSpriteNode_t368222601, ___m_bIncludedAtlas_0)); }
	inline bool get_m_bIncludedAtlas_0() const { return ___m_bIncludedAtlas_0; }
	inline bool* get_address_of_m_bIncludedAtlas_0() { return &___m_bIncludedAtlas_0; }
	inline void set_m_bIncludedAtlas_0(bool value)
	{
		___m_bIncludedAtlas_0 = value;
	}

	inline static int32_t get_offset_of_m_TextureGUID_1() { return static_cast<int32_t>(offsetof(NcSpriteNode_t368222601, ___m_TextureGUID_1)); }
	inline String_t* get_m_TextureGUID_1() const { return ___m_TextureGUID_1; }
	inline String_t** get_address_of_m_TextureGUID_1() { return &___m_TextureGUID_1; }
	inline void set_m_TextureGUID_1(String_t* value)
	{
		___m_TextureGUID_1 = value;
		Il2CppCodeGenWriteBarrier(&___m_TextureGUID_1, value);
	}

	inline static int32_t get_offset_of_m_TextureName_2() { return static_cast<int32_t>(offsetof(NcSpriteNode_t368222601, ___m_TextureName_2)); }
	inline String_t* get_m_TextureName_2() const { return ___m_TextureName_2; }
	inline String_t** get_address_of_m_TextureName_2() { return &___m_TextureName_2; }
	inline void set_m_TextureName_2(String_t* value)
	{
		___m_TextureName_2 = value;
		Il2CppCodeGenWriteBarrier(&___m_TextureName_2, value);
	}

	inline static int32_t get_offset_of_m_fMaxTextureAlpha_3() { return static_cast<int32_t>(offsetof(NcSpriteNode_t368222601, ___m_fMaxTextureAlpha_3)); }
	inline float get_m_fMaxTextureAlpha_3() const { return ___m_fMaxTextureAlpha_3; }
	inline float* get_address_of_m_fMaxTextureAlpha_3() { return &___m_fMaxTextureAlpha_3; }
	inline void set_m_fMaxTextureAlpha_3(float value)
	{
		___m_fMaxTextureAlpha_3 = value;
	}

	inline static int32_t get_offset_of_m_SpriteName_4() { return static_cast<int32_t>(offsetof(NcSpriteNode_t368222601, ___m_SpriteName_4)); }
	inline String_t* get_m_SpriteName_4() const { return ___m_SpriteName_4; }
	inline String_t** get_address_of_m_SpriteName_4() { return &___m_SpriteName_4; }
	inline void set_m_SpriteName_4(String_t* value)
	{
		___m_SpriteName_4 = value;
		Il2CppCodeGenWriteBarrier(&___m_SpriteName_4, value);
	}

	inline static int32_t get_offset_of_m_nSkipFrame_5() { return static_cast<int32_t>(offsetof(NcSpriteNode_t368222601, ___m_nSkipFrame_5)); }
	inline int32_t get_m_nSkipFrame_5() const { return ___m_nSkipFrame_5; }
	inline int32_t* get_address_of_m_nSkipFrame_5() { return &___m_nSkipFrame_5; }
	inline void set_m_nSkipFrame_5(int32_t value)
	{
		___m_nSkipFrame_5 = value;
	}

	inline static int32_t get_offset_of_m_FrameInfos_6() { return static_cast<int32_t>(offsetof(NcSpriteNode_t368222601, ___m_FrameInfos_6)); }
	inline NcFrameInfoU5BU5D_t2570076182* get_m_FrameInfos_6() const { return ___m_FrameInfos_6; }
	inline NcFrameInfoU5BU5D_t2570076182** get_address_of_m_FrameInfos_6() { return &___m_FrameInfos_6; }
	inline void set_m_FrameInfos_6(NcFrameInfoU5BU5D_t2570076182* value)
	{
		___m_FrameInfos_6 = value;
		Il2CppCodeGenWriteBarrier(&___m_FrameInfos_6, value);
	}

	inline static int32_t get_offset_of_m_nTilingX_7() { return static_cast<int32_t>(offsetof(NcSpriteNode_t368222601, ___m_nTilingX_7)); }
	inline int32_t get_m_nTilingX_7() const { return ___m_nTilingX_7; }
	inline int32_t* get_address_of_m_nTilingX_7() { return &___m_nTilingX_7; }
	inline void set_m_nTilingX_7(int32_t value)
	{
		___m_nTilingX_7 = value;
	}

	inline static int32_t get_offset_of_m_nTilingY_8() { return static_cast<int32_t>(offsetof(NcSpriteNode_t368222601, ___m_nTilingY_8)); }
	inline int32_t get_m_nTilingY_8() const { return ___m_nTilingY_8; }
	inline int32_t* get_address_of_m_nTilingY_8() { return &___m_nTilingY_8; }
	inline void set_m_nTilingY_8(int32_t value)
	{
		___m_nTilingY_8 = value;
	}

	inline static int32_t get_offset_of_m_nStartFrame_9() { return static_cast<int32_t>(offsetof(NcSpriteNode_t368222601, ___m_nStartFrame_9)); }
	inline int32_t get_m_nStartFrame_9() const { return ___m_nStartFrame_9; }
	inline int32_t* get_address_of_m_nStartFrame_9() { return &___m_nStartFrame_9; }
	inline void set_m_nStartFrame_9(int32_t value)
	{
		___m_nStartFrame_9 = value;
	}

	inline static int32_t get_offset_of_m_nFrameCount_10() { return static_cast<int32_t>(offsetof(NcSpriteNode_t368222601, ___m_nFrameCount_10)); }
	inline int32_t get_m_nFrameCount_10() const { return ___m_nFrameCount_10; }
	inline int32_t* get_address_of_m_nFrameCount_10() { return &___m_nFrameCount_10; }
	inline void set_m_nFrameCount_10(int32_t value)
	{
		___m_nFrameCount_10 = value;
	}

	inline static int32_t get_offset_of_m_bLoop_11() { return static_cast<int32_t>(offsetof(NcSpriteNode_t368222601, ___m_bLoop_11)); }
	inline bool get_m_bLoop_11() const { return ___m_bLoop_11; }
	inline bool* get_address_of_m_bLoop_11() { return &___m_bLoop_11; }
	inline void set_m_bLoop_11(bool value)
	{
		___m_bLoop_11 = value;
	}

	inline static int32_t get_offset_of_m_nLoopStartFrame_12() { return static_cast<int32_t>(offsetof(NcSpriteNode_t368222601, ___m_nLoopStartFrame_12)); }
	inline int32_t get_m_nLoopStartFrame_12() const { return ___m_nLoopStartFrame_12; }
	inline int32_t* get_address_of_m_nLoopStartFrame_12() { return &___m_nLoopStartFrame_12; }
	inline void set_m_nLoopStartFrame_12(int32_t value)
	{
		___m_nLoopStartFrame_12 = value;
	}

	inline static int32_t get_offset_of_m_nLoopFrameCount_13() { return static_cast<int32_t>(offsetof(NcSpriteNode_t368222601, ___m_nLoopFrameCount_13)); }
	inline int32_t get_m_nLoopFrameCount_13() const { return ___m_nLoopFrameCount_13; }
	inline int32_t* get_address_of_m_nLoopFrameCount_13() { return &___m_nLoopFrameCount_13; }
	inline void set_m_nLoopFrameCount_13(int32_t value)
	{
		___m_nLoopFrameCount_13 = value;
	}

	inline static int32_t get_offset_of_m_nLoopingCount_14() { return static_cast<int32_t>(offsetof(NcSpriteNode_t368222601, ___m_nLoopingCount_14)); }
	inline int32_t get_m_nLoopingCount_14() const { return ___m_nLoopingCount_14; }
	inline int32_t* get_address_of_m_nLoopingCount_14() { return &___m_nLoopingCount_14; }
	inline void set_m_nLoopingCount_14(int32_t value)
	{
		___m_nLoopingCount_14 = value;
	}

	inline static int32_t get_offset_of_m_fFps_15() { return static_cast<int32_t>(offsetof(NcSpriteNode_t368222601, ___m_fFps_15)); }
	inline float get_m_fFps_15() const { return ___m_fFps_15; }
	inline float* get_address_of_m_fFps_15() { return &___m_fFps_15; }
	inline void set_m_fFps_15(float value)
	{
		___m_fFps_15 = value;
	}

	inline static int32_t get_offset_of_m_fTime_16() { return static_cast<int32_t>(offsetof(NcSpriteNode_t368222601, ___m_fTime_16)); }
	inline float get_m_fTime_16() const { return ___m_fTime_16; }
	inline float* get_address_of_m_fTime_16() { return &___m_fTime_16; }
	inline void set_m_fTime_16(float value)
	{
		___m_fTime_16 = value;
	}

	inline static int32_t get_offset_of_m_nNextSpriteIndex_17() { return static_cast<int32_t>(offsetof(NcSpriteNode_t368222601, ___m_nNextSpriteIndex_17)); }
	inline int32_t get_m_nNextSpriteIndex_17() const { return ___m_nNextSpriteIndex_17; }
	inline int32_t* get_address_of_m_nNextSpriteIndex_17() { return &___m_nNextSpriteIndex_17; }
	inline void set_m_nNextSpriteIndex_17(int32_t value)
	{
		___m_nNextSpriteIndex_17 = value;
	}

	inline static int32_t get_offset_of_m_nTestMode_18() { return static_cast<int32_t>(offsetof(NcSpriteNode_t368222601, ___m_nTestMode_18)); }
	inline int32_t get_m_nTestMode_18() const { return ___m_nTestMode_18; }
	inline int32_t* get_address_of_m_nTestMode_18() { return &___m_nTestMode_18; }
	inline void set_m_nTestMode_18(int32_t value)
	{
		___m_nTestMode_18 = value;
	}

	inline static int32_t get_offset_of_m_fTestSpeed_19() { return static_cast<int32_t>(offsetof(NcSpriteNode_t368222601, ___m_fTestSpeed_19)); }
	inline float get_m_fTestSpeed_19() const { return ___m_fTestSpeed_19; }
	inline float* get_address_of_m_fTestSpeed_19() { return &___m_fTestSpeed_19; }
	inline void set_m_fTestSpeed_19(float value)
	{
		___m_fTestSpeed_19 = value;
	}

	inline static int32_t get_offset_of_m_bEffectInstantiate_20() { return static_cast<int32_t>(offsetof(NcSpriteNode_t368222601, ___m_bEffectInstantiate_20)); }
	inline bool get_m_bEffectInstantiate_20() const { return ___m_bEffectInstantiate_20; }
	inline bool* get_address_of_m_bEffectInstantiate_20() { return &___m_bEffectInstantiate_20; }
	inline void set_m_bEffectInstantiate_20(bool value)
	{
		___m_bEffectInstantiate_20 = value;
	}

	inline static int32_t get_offset_of_m_EffectPrefab_21() { return static_cast<int32_t>(offsetof(NcSpriteNode_t368222601, ___m_EffectPrefab_21)); }
	inline GameObject_t1756533147 * get_m_EffectPrefab_21() const { return ___m_EffectPrefab_21; }
	inline GameObject_t1756533147 ** get_address_of_m_EffectPrefab_21() { return &___m_EffectPrefab_21; }
	inline void set_m_EffectPrefab_21(GameObject_t1756533147 * value)
	{
		___m_EffectPrefab_21 = value;
		Il2CppCodeGenWriteBarrier(&___m_EffectPrefab_21, value);
	}

	inline static int32_t get_offset_of_m_nSpriteFactoryIndex_22() { return static_cast<int32_t>(offsetof(NcSpriteNode_t368222601, ___m_nSpriteFactoryIndex_22)); }
	inline int32_t get_m_nSpriteFactoryIndex_22() const { return ___m_nSpriteFactoryIndex_22; }
	inline int32_t* get_address_of_m_nSpriteFactoryIndex_22() { return &___m_nSpriteFactoryIndex_22; }
	inline void set_m_nSpriteFactoryIndex_22(int32_t value)
	{
		___m_nSpriteFactoryIndex_22 = value;
	}

	inline static int32_t get_offset_of_m_nEffectFrame_23() { return static_cast<int32_t>(offsetof(NcSpriteNode_t368222601, ___m_nEffectFrame_23)); }
	inline int32_t get_m_nEffectFrame_23() const { return ___m_nEffectFrame_23; }
	inline int32_t* get_address_of_m_nEffectFrame_23() { return &___m_nEffectFrame_23; }
	inline void set_m_nEffectFrame_23(int32_t value)
	{
		___m_nEffectFrame_23 = value;
	}

	inline static int32_t get_offset_of_m_bEffectOnlyFirst_24() { return static_cast<int32_t>(offsetof(NcSpriteNode_t368222601, ___m_bEffectOnlyFirst_24)); }
	inline bool get_m_bEffectOnlyFirst_24() const { return ___m_bEffectOnlyFirst_24; }
	inline bool* get_address_of_m_bEffectOnlyFirst_24() { return &___m_bEffectOnlyFirst_24; }
	inline void set_m_bEffectOnlyFirst_24(bool value)
	{
		___m_bEffectOnlyFirst_24 = value;
	}

	inline static int32_t get_offset_of_m_bEffectDetach_25() { return static_cast<int32_t>(offsetof(NcSpriteNode_t368222601, ___m_bEffectDetach_25)); }
	inline bool get_m_bEffectDetach_25() const { return ___m_bEffectDetach_25; }
	inline bool* get_address_of_m_bEffectDetach_25() { return &___m_bEffectDetach_25; }
	inline void set_m_bEffectDetach_25(bool value)
	{
		___m_bEffectDetach_25 = value;
	}

	inline static int32_t get_offset_of_m_fEffectSpeed_26() { return static_cast<int32_t>(offsetof(NcSpriteNode_t368222601, ___m_fEffectSpeed_26)); }
	inline float get_m_fEffectSpeed_26() const { return ___m_fEffectSpeed_26; }
	inline float* get_address_of_m_fEffectSpeed_26() { return &___m_fEffectSpeed_26; }
	inline void set_m_fEffectSpeed_26(float value)
	{
		___m_fEffectSpeed_26 = value;
	}

	inline static int32_t get_offset_of_m_fEffectScale_27() { return static_cast<int32_t>(offsetof(NcSpriteNode_t368222601, ___m_fEffectScale_27)); }
	inline float get_m_fEffectScale_27() const { return ___m_fEffectScale_27; }
	inline float* get_address_of_m_fEffectScale_27() { return &___m_fEffectScale_27; }
	inline void set_m_fEffectScale_27(float value)
	{
		___m_fEffectScale_27 = value;
	}

	inline static int32_t get_offset_of_m_EffectPos_28() { return static_cast<int32_t>(offsetof(NcSpriteNode_t368222601, ___m_EffectPos_28)); }
	inline Vector3_t2243707580  get_m_EffectPos_28() const { return ___m_EffectPos_28; }
	inline Vector3_t2243707580 * get_address_of_m_EffectPos_28() { return &___m_EffectPos_28; }
	inline void set_m_EffectPos_28(Vector3_t2243707580  value)
	{
		___m_EffectPos_28 = value;
	}

	inline static int32_t get_offset_of_m_EffectRot_29() { return static_cast<int32_t>(offsetof(NcSpriteNode_t368222601, ___m_EffectRot_29)); }
	inline Vector3_t2243707580  get_m_EffectRot_29() const { return ___m_EffectRot_29; }
	inline Vector3_t2243707580 * get_address_of_m_EffectRot_29() { return &___m_EffectRot_29; }
	inline void set_m_EffectRot_29(Vector3_t2243707580  value)
	{
		___m_EffectRot_29 = value;
	}

	inline static int32_t get_offset_of_m_AudioClip_30() { return static_cast<int32_t>(offsetof(NcSpriteNode_t368222601, ___m_AudioClip_30)); }
	inline AudioClip_t1932558630 * get_m_AudioClip_30() const { return ___m_AudioClip_30; }
	inline AudioClip_t1932558630 ** get_address_of_m_AudioClip_30() { return &___m_AudioClip_30; }
	inline void set_m_AudioClip_30(AudioClip_t1932558630 * value)
	{
		___m_AudioClip_30 = value;
		Il2CppCodeGenWriteBarrier(&___m_AudioClip_30, value);
	}

	inline static int32_t get_offset_of_m_nSoundFrame_31() { return static_cast<int32_t>(offsetof(NcSpriteNode_t368222601, ___m_nSoundFrame_31)); }
	inline int32_t get_m_nSoundFrame_31() const { return ___m_nSoundFrame_31; }
	inline int32_t* get_address_of_m_nSoundFrame_31() { return &___m_nSoundFrame_31; }
	inline void set_m_nSoundFrame_31(int32_t value)
	{
		___m_nSoundFrame_31 = value;
	}

	inline static int32_t get_offset_of_m_bSoundOnlyFirst_32() { return static_cast<int32_t>(offsetof(NcSpriteNode_t368222601, ___m_bSoundOnlyFirst_32)); }
	inline bool get_m_bSoundOnlyFirst_32() const { return ___m_bSoundOnlyFirst_32; }
	inline bool* get_address_of_m_bSoundOnlyFirst_32() { return &___m_bSoundOnlyFirst_32; }
	inline void set_m_bSoundOnlyFirst_32(bool value)
	{
		___m_bSoundOnlyFirst_32 = value;
	}

	inline static int32_t get_offset_of_m_bSoundLoop_33() { return static_cast<int32_t>(offsetof(NcSpriteNode_t368222601, ___m_bSoundLoop_33)); }
	inline bool get_m_bSoundLoop_33() const { return ___m_bSoundLoop_33; }
	inline bool* get_address_of_m_bSoundLoop_33() { return &___m_bSoundLoop_33; }
	inline void set_m_bSoundLoop_33(bool value)
	{
		___m_bSoundLoop_33 = value;
	}

	inline static int32_t get_offset_of_m_fSoundVolume_34() { return static_cast<int32_t>(offsetof(NcSpriteNode_t368222601, ___m_fSoundVolume_34)); }
	inline float get_m_fSoundVolume_34() const { return ___m_fSoundVolume_34; }
	inline float* get_address_of_m_fSoundVolume_34() { return &___m_fSoundVolume_34; }
	inline void set_m_fSoundVolume_34(float value)
	{
		___m_fSoundVolume_34 = value;
	}

	inline static int32_t get_offset_of_m_fSoundPitch_35() { return static_cast<int32_t>(offsetof(NcSpriteNode_t368222601, ___m_fSoundPitch_35)); }
	inline float get_m_fSoundPitch_35() const { return ___m_fSoundPitch_35; }
	inline float* get_address_of_m_fSoundPitch_35() { return &___m_fSoundPitch_35; }
	inline void set_m_fSoundPitch_35(float value)
	{
		___m_fSoundPitch_35 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
