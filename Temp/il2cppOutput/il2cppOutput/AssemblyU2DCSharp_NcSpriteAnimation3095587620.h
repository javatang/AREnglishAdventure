#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// UnityEngine.GameObject
struct GameObject_t1756533147;
// NcSpriteFactory
struct NcSpriteFactory_t883580072;
// NcSpriteFactory/NcFrameInfo[]
struct NcFrameInfoU5BU5D_t2570076182;
// UnityEngine.Component
struct Component_t3819376471;
// System.String
struct String_t;
// UnityEngine.AnimationCurve
struct AnimationCurve_t3306541151;
// UnityEngine.Renderer
struct Renderer_t257310565;
// UnityEngine.Vector2[]
struct Vector2U5BU5D_t686124026;

#include "AssemblyU2DCSharp_NcEffectAniBehaviour2396724283.h"
#include "AssemblyU2DCSharp_NcSpriteAnimation_TEXTURE_TYPE1052064627.h"
#include "AssemblyU2DCSharp_NcSpriteAnimation_PLAYMODE2358179084.h"
#include "AssemblyU2DCSharp_NcSpriteFactory_MESH_TYPE826724577.h"
#include "AssemblyU2DCSharp_NcSpriteFactory_ALIGN_TYPE1276270715.h"
#include "UnityEngine_UnityEngine_Vector22243707579.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// NcSpriteAnimation
struct  NcSpriteAnimation_t3095587620  : public NcEffectAniBehaviour_t2396724283
{
public:
	// NcSpriteAnimation/TEXTURE_TYPE NcSpriteAnimation::m_TextureType
	int32_t ___m_TextureType_13;
	// NcSpriteAnimation/PLAYMODE NcSpriteAnimation::m_PlayMode
	int32_t ___m_PlayMode_14;
	// System.Single NcSpriteAnimation::m_fDelayTime
	float ___m_fDelayTime_15;
	// System.Int32 NcSpriteAnimation::m_nStartFrame
	int32_t ___m_nStartFrame_16;
	// System.Int32 NcSpriteAnimation::m_nFrameCount
	int32_t ___m_nFrameCount_17;
	// System.Int32 NcSpriteAnimation::m_nSelectFrame
	int32_t ___m_nSelectFrame_18;
	// System.Boolean NcSpriteAnimation::m_bLoop
	bool ___m_bLoop_19;
	// System.Int32 NcSpriteAnimation::m_nLoopStartFrame
	int32_t ___m_nLoopStartFrame_20;
	// System.Int32 NcSpriteAnimation::m_nLoopFrameCount
	int32_t ___m_nLoopFrameCount_21;
	// System.Int32 NcSpriteAnimation::m_nLoopingCount
	int32_t ___m_nLoopingCount_22;
	// System.Boolean NcSpriteAnimation::m_bLoopRandom
	bool ___m_bLoopRandom_23;
	// System.Boolean NcSpriteAnimation::m_bAutoDestruct
	bool ___m_bAutoDestruct_24;
	// System.Single NcSpriteAnimation::m_fFps
	float ___m_fFps_25;
	// System.Int32 NcSpriteAnimation::m_nTilingX
	int32_t ___m_nTilingX_26;
	// System.Int32 NcSpriteAnimation::m_nTilingY
	int32_t ___m_nTilingY_27;
	// UnityEngine.GameObject NcSpriteAnimation::m_NcSpriteFactoryPrefab
	GameObject_t1756533147 * ___m_NcSpriteFactoryPrefab_28;
	// NcSpriteFactory NcSpriteAnimation::m_NcSpriteFactoryCom
	NcSpriteFactory_t883580072 * ___m_NcSpriteFactoryCom_29;
	// NcSpriteFactory/NcFrameInfo[] NcSpriteAnimation::m_NcSpriteFrameInfos
	NcFrameInfoU5BU5D_t2570076182* ___m_NcSpriteFrameInfos_30;
	// System.Single NcSpriteAnimation::m_fUvScale
	float ___m_fUvScale_31;
	// System.Int32 NcSpriteAnimation::m_nSpriteFactoryIndex
	int32_t ___m_nSpriteFactoryIndex_32;
	// NcSpriteFactory/MESH_TYPE NcSpriteAnimation::m_MeshType
	int32_t ___m_MeshType_33;
	// NcSpriteFactory/ALIGN_TYPE NcSpriteAnimation::m_AlignType
	int32_t ___m_AlignType_34;
	// System.Single NcSpriteAnimation::m_fShowRate
	float ___m_fShowRate_35;
	// System.Boolean NcSpriteAnimation::m_bTrimCenterAlign
	bool ___m_bTrimCenterAlign_36;
	// UnityEngine.Component NcSpriteAnimation::m_OnChangeFrameComponent
	Component_t3819376471 * ___m_OnChangeFrameComponent_37;
	// System.String NcSpriteAnimation::m_OnChangeFrameFunction
	String_t* ___m_OnChangeFrameFunction_38;
	// System.Boolean NcSpriteAnimation::m_bCreateBuiltInPlane
	bool ___m_bCreateBuiltInPlane_39;
	// System.Boolean NcSpriteAnimation::m_bBuildSpriteObj
	bool ___m_bBuildSpriteObj_40;
	// System.Boolean NcSpriteAnimation::m_bNeedRebuildAlphaChannel
	bool ___m_bNeedRebuildAlphaChannel_41;
	// UnityEngine.AnimationCurve NcSpriteAnimation::m_curveAlphaWeight
	AnimationCurve_t3306541151 * ___m_curveAlphaWeight_42;
	// UnityEngine.Vector2 NcSpriteAnimation::m_size
	Vector2_t2243707579  ___m_size_43;
	// UnityEngine.Renderer NcSpriteAnimation::m_Renderer
	Renderer_t257310565 * ___m_Renderer_44;
	// System.Single NcSpriteAnimation::m_fStartTime
	float ___m_fStartTime_45;
	// System.Int32 NcSpriteAnimation::m_nLastIndex
	int32_t ___m_nLastIndex_46;
	// System.Int32 NcSpriteAnimation::m_nLastSeqIndex
	int32_t ___m_nLastSeqIndex_47;
	// System.Boolean NcSpriteAnimation::m_bInPartLoop
	bool ___m_bInPartLoop_48;
	// System.Boolean NcSpriteAnimation::m_bBreakLoop
	bool ___m_bBreakLoop_49;
	// UnityEngine.Vector2[] NcSpriteAnimation::m_MeshUVsByTileTexture
	Vector2U5BU5D_t686124026* ___m_MeshUVsByTileTexture_50;

public:
	inline static int32_t get_offset_of_m_TextureType_13() { return static_cast<int32_t>(offsetof(NcSpriteAnimation_t3095587620, ___m_TextureType_13)); }
	inline int32_t get_m_TextureType_13() const { return ___m_TextureType_13; }
	inline int32_t* get_address_of_m_TextureType_13() { return &___m_TextureType_13; }
	inline void set_m_TextureType_13(int32_t value)
	{
		___m_TextureType_13 = value;
	}

	inline static int32_t get_offset_of_m_PlayMode_14() { return static_cast<int32_t>(offsetof(NcSpriteAnimation_t3095587620, ___m_PlayMode_14)); }
	inline int32_t get_m_PlayMode_14() const { return ___m_PlayMode_14; }
	inline int32_t* get_address_of_m_PlayMode_14() { return &___m_PlayMode_14; }
	inline void set_m_PlayMode_14(int32_t value)
	{
		___m_PlayMode_14 = value;
	}

	inline static int32_t get_offset_of_m_fDelayTime_15() { return static_cast<int32_t>(offsetof(NcSpriteAnimation_t3095587620, ___m_fDelayTime_15)); }
	inline float get_m_fDelayTime_15() const { return ___m_fDelayTime_15; }
	inline float* get_address_of_m_fDelayTime_15() { return &___m_fDelayTime_15; }
	inline void set_m_fDelayTime_15(float value)
	{
		___m_fDelayTime_15 = value;
	}

	inline static int32_t get_offset_of_m_nStartFrame_16() { return static_cast<int32_t>(offsetof(NcSpriteAnimation_t3095587620, ___m_nStartFrame_16)); }
	inline int32_t get_m_nStartFrame_16() const { return ___m_nStartFrame_16; }
	inline int32_t* get_address_of_m_nStartFrame_16() { return &___m_nStartFrame_16; }
	inline void set_m_nStartFrame_16(int32_t value)
	{
		___m_nStartFrame_16 = value;
	}

	inline static int32_t get_offset_of_m_nFrameCount_17() { return static_cast<int32_t>(offsetof(NcSpriteAnimation_t3095587620, ___m_nFrameCount_17)); }
	inline int32_t get_m_nFrameCount_17() const { return ___m_nFrameCount_17; }
	inline int32_t* get_address_of_m_nFrameCount_17() { return &___m_nFrameCount_17; }
	inline void set_m_nFrameCount_17(int32_t value)
	{
		___m_nFrameCount_17 = value;
	}

	inline static int32_t get_offset_of_m_nSelectFrame_18() { return static_cast<int32_t>(offsetof(NcSpriteAnimation_t3095587620, ___m_nSelectFrame_18)); }
	inline int32_t get_m_nSelectFrame_18() const { return ___m_nSelectFrame_18; }
	inline int32_t* get_address_of_m_nSelectFrame_18() { return &___m_nSelectFrame_18; }
	inline void set_m_nSelectFrame_18(int32_t value)
	{
		___m_nSelectFrame_18 = value;
	}

	inline static int32_t get_offset_of_m_bLoop_19() { return static_cast<int32_t>(offsetof(NcSpriteAnimation_t3095587620, ___m_bLoop_19)); }
	inline bool get_m_bLoop_19() const { return ___m_bLoop_19; }
	inline bool* get_address_of_m_bLoop_19() { return &___m_bLoop_19; }
	inline void set_m_bLoop_19(bool value)
	{
		___m_bLoop_19 = value;
	}

	inline static int32_t get_offset_of_m_nLoopStartFrame_20() { return static_cast<int32_t>(offsetof(NcSpriteAnimation_t3095587620, ___m_nLoopStartFrame_20)); }
	inline int32_t get_m_nLoopStartFrame_20() const { return ___m_nLoopStartFrame_20; }
	inline int32_t* get_address_of_m_nLoopStartFrame_20() { return &___m_nLoopStartFrame_20; }
	inline void set_m_nLoopStartFrame_20(int32_t value)
	{
		___m_nLoopStartFrame_20 = value;
	}

	inline static int32_t get_offset_of_m_nLoopFrameCount_21() { return static_cast<int32_t>(offsetof(NcSpriteAnimation_t3095587620, ___m_nLoopFrameCount_21)); }
	inline int32_t get_m_nLoopFrameCount_21() const { return ___m_nLoopFrameCount_21; }
	inline int32_t* get_address_of_m_nLoopFrameCount_21() { return &___m_nLoopFrameCount_21; }
	inline void set_m_nLoopFrameCount_21(int32_t value)
	{
		___m_nLoopFrameCount_21 = value;
	}

	inline static int32_t get_offset_of_m_nLoopingCount_22() { return static_cast<int32_t>(offsetof(NcSpriteAnimation_t3095587620, ___m_nLoopingCount_22)); }
	inline int32_t get_m_nLoopingCount_22() const { return ___m_nLoopingCount_22; }
	inline int32_t* get_address_of_m_nLoopingCount_22() { return &___m_nLoopingCount_22; }
	inline void set_m_nLoopingCount_22(int32_t value)
	{
		___m_nLoopingCount_22 = value;
	}

	inline static int32_t get_offset_of_m_bLoopRandom_23() { return static_cast<int32_t>(offsetof(NcSpriteAnimation_t3095587620, ___m_bLoopRandom_23)); }
	inline bool get_m_bLoopRandom_23() const { return ___m_bLoopRandom_23; }
	inline bool* get_address_of_m_bLoopRandom_23() { return &___m_bLoopRandom_23; }
	inline void set_m_bLoopRandom_23(bool value)
	{
		___m_bLoopRandom_23 = value;
	}

	inline static int32_t get_offset_of_m_bAutoDestruct_24() { return static_cast<int32_t>(offsetof(NcSpriteAnimation_t3095587620, ___m_bAutoDestruct_24)); }
	inline bool get_m_bAutoDestruct_24() const { return ___m_bAutoDestruct_24; }
	inline bool* get_address_of_m_bAutoDestruct_24() { return &___m_bAutoDestruct_24; }
	inline void set_m_bAutoDestruct_24(bool value)
	{
		___m_bAutoDestruct_24 = value;
	}

	inline static int32_t get_offset_of_m_fFps_25() { return static_cast<int32_t>(offsetof(NcSpriteAnimation_t3095587620, ___m_fFps_25)); }
	inline float get_m_fFps_25() const { return ___m_fFps_25; }
	inline float* get_address_of_m_fFps_25() { return &___m_fFps_25; }
	inline void set_m_fFps_25(float value)
	{
		___m_fFps_25 = value;
	}

	inline static int32_t get_offset_of_m_nTilingX_26() { return static_cast<int32_t>(offsetof(NcSpriteAnimation_t3095587620, ___m_nTilingX_26)); }
	inline int32_t get_m_nTilingX_26() const { return ___m_nTilingX_26; }
	inline int32_t* get_address_of_m_nTilingX_26() { return &___m_nTilingX_26; }
	inline void set_m_nTilingX_26(int32_t value)
	{
		___m_nTilingX_26 = value;
	}

	inline static int32_t get_offset_of_m_nTilingY_27() { return static_cast<int32_t>(offsetof(NcSpriteAnimation_t3095587620, ___m_nTilingY_27)); }
	inline int32_t get_m_nTilingY_27() const { return ___m_nTilingY_27; }
	inline int32_t* get_address_of_m_nTilingY_27() { return &___m_nTilingY_27; }
	inline void set_m_nTilingY_27(int32_t value)
	{
		___m_nTilingY_27 = value;
	}

	inline static int32_t get_offset_of_m_NcSpriteFactoryPrefab_28() { return static_cast<int32_t>(offsetof(NcSpriteAnimation_t3095587620, ___m_NcSpriteFactoryPrefab_28)); }
	inline GameObject_t1756533147 * get_m_NcSpriteFactoryPrefab_28() const { return ___m_NcSpriteFactoryPrefab_28; }
	inline GameObject_t1756533147 ** get_address_of_m_NcSpriteFactoryPrefab_28() { return &___m_NcSpriteFactoryPrefab_28; }
	inline void set_m_NcSpriteFactoryPrefab_28(GameObject_t1756533147 * value)
	{
		___m_NcSpriteFactoryPrefab_28 = value;
		Il2CppCodeGenWriteBarrier(&___m_NcSpriteFactoryPrefab_28, value);
	}

	inline static int32_t get_offset_of_m_NcSpriteFactoryCom_29() { return static_cast<int32_t>(offsetof(NcSpriteAnimation_t3095587620, ___m_NcSpriteFactoryCom_29)); }
	inline NcSpriteFactory_t883580072 * get_m_NcSpriteFactoryCom_29() const { return ___m_NcSpriteFactoryCom_29; }
	inline NcSpriteFactory_t883580072 ** get_address_of_m_NcSpriteFactoryCom_29() { return &___m_NcSpriteFactoryCom_29; }
	inline void set_m_NcSpriteFactoryCom_29(NcSpriteFactory_t883580072 * value)
	{
		___m_NcSpriteFactoryCom_29 = value;
		Il2CppCodeGenWriteBarrier(&___m_NcSpriteFactoryCom_29, value);
	}

	inline static int32_t get_offset_of_m_NcSpriteFrameInfos_30() { return static_cast<int32_t>(offsetof(NcSpriteAnimation_t3095587620, ___m_NcSpriteFrameInfos_30)); }
	inline NcFrameInfoU5BU5D_t2570076182* get_m_NcSpriteFrameInfos_30() const { return ___m_NcSpriteFrameInfos_30; }
	inline NcFrameInfoU5BU5D_t2570076182** get_address_of_m_NcSpriteFrameInfos_30() { return &___m_NcSpriteFrameInfos_30; }
	inline void set_m_NcSpriteFrameInfos_30(NcFrameInfoU5BU5D_t2570076182* value)
	{
		___m_NcSpriteFrameInfos_30 = value;
		Il2CppCodeGenWriteBarrier(&___m_NcSpriteFrameInfos_30, value);
	}

	inline static int32_t get_offset_of_m_fUvScale_31() { return static_cast<int32_t>(offsetof(NcSpriteAnimation_t3095587620, ___m_fUvScale_31)); }
	inline float get_m_fUvScale_31() const { return ___m_fUvScale_31; }
	inline float* get_address_of_m_fUvScale_31() { return &___m_fUvScale_31; }
	inline void set_m_fUvScale_31(float value)
	{
		___m_fUvScale_31 = value;
	}

	inline static int32_t get_offset_of_m_nSpriteFactoryIndex_32() { return static_cast<int32_t>(offsetof(NcSpriteAnimation_t3095587620, ___m_nSpriteFactoryIndex_32)); }
	inline int32_t get_m_nSpriteFactoryIndex_32() const { return ___m_nSpriteFactoryIndex_32; }
	inline int32_t* get_address_of_m_nSpriteFactoryIndex_32() { return &___m_nSpriteFactoryIndex_32; }
	inline void set_m_nSpriteFactoryIndex_32(int32_t value)
	{
		___m_nSpriteFactoryIndex_32 = value;
	}

	inline static int32_t get_offset_of_m_MeshType_33() { return static_cast<int32_t>(offsetof(NcSpriteAnimation_t3095587620, ___m_MeshType_33)); }
	inline int32_t get_m_MeshType_33() const { return ___m_MeshType_33; }
	inline int32_t* get_address_of_m_MeshType_33() { return &___m_MeshType_33; }
	inline void set_m_MeshType_33(int32_t value)
	{
		___m_MeshType_33 = value;
	}

	inline static int32_t get_offset_of_m_AlignType_34() { return static_cast<int32_t>(offsetof(NcSpriteAnimation_t3095587620, ___m_AlignType_34)); }
	inline int32_t get_m_AlignType_34() const { return ___m_AlignType_34; }
	inline int32_t* get_address_of_m_AlignType_34() { return &___m_AlignType_34; }
	inline void set_m_AlignType_34(int32_t value)
	{
		___m_AlignType_34 = value;
	}

	inline static int32_t get_offset_of_m_fShowRate_35() { return static_cast<int32_t>(offsetof(NcSpriteAnimation_t3095587620, ___m_fShowRate_35)); }
	inline float get_m_fShowRate_35() const { return ___m_fShowRate_35; }
	inline float* get_address_of_m_fShowRate_35() { return &___m_fShowRate_35; }
	inline void set_m_fShowRate_35(float value)
	{
		___m_fShowRate_35 = value;
	}

	inline static int32_t get_offset_of_m_bTrimCenterAlign_36() { return static_cast<int32_t>(offsetof(NcSpriteAnimation_t3095587620, ___m_bTrimCenterAlign_36)); }
	inline bool get_m_bTrimCenterAlign_36() const { return ___m_bTrimCenterAlign_36; }
	inline bool* get_address_of_m_bTrimCenterAlign_36() { return &___m_bTrimCenterAlign_36; }
	inline void set_m_bTrimCenterAlign_36(bool value)
	{
		___m_bTrimCenterAlign_36 = value;
	}

	inline static int32_t get_offset_of_m_OnChangeFrameComponent_37() { return static_cast<int32_t>(offsetof(NcSpriteAnimation_t3095587620, ___m_OnChangeFrameComponent_37)); }
	inline Component_t3819376471 * get_m_OnChangeFrameComponent_37() const { return ___m_OnChangeFrameComponent_37; }
	inline Component_t3819376471 ** get_address_of_m_OnChangeFrameComponent_37() { return &___m_OnChangeFrameComponent_37; }
	inline void set_m_OnChangeFrameComponent_37(Component_t3819376471 * value)
	{
		___m_OnChangeFrameComponent_37 = value;
		Il2CppCodeGenWriteBarrier(&___m_OnChangeFrameComponent_37, value);
	}

	inline static int32_t get_offset_of_m_OnChangeFrameFunction_38() { return static_cast<int32_t>(offsetof(NcSpriteAnimation_t3095587620, ___m_OnChangeFrameFunction_38)); }
	inline String_t* get_m_OnChangeFrameFunction_38() const { return ___m_OnChangeFrameFunction_38; }
	inline String_t** get_address_of_m_OnChangeFrameFunction_38() { return &___m_OnChangeFrameFunction_38; }
	inline void set_m_OnChangeFrameFunction_38(String_t* value)
	{
		___m_OnChangeFrameFunction_38 = value;
		Il2CppCodeGenWriteBarrier(&___m_OnChangeFrameFunction_38, value);
	}

	inline static int32_t get_offset_of_m_bCreateBuiltInPlane_39() { return static_cast<int32_t>(offsetof(NcSpriteAnimation_t3095587620, ___m_bCreateBuiltInPlane_39)); }
	inline bool get_m_bCreateBuiltInPlane_39() const { return ___m_bCreateBuiltInPlane_39; }
	inline bool* get_address_of_m_bCreateBuiltInPlane_39() { return &___m_bCreateBuiltInPlane_39; }
	inline void set_m_bCreateBuiltInPlane_39(bool value)
	{
		___m_bCreateBuiltInPlane_39 = value;
	}

	inline static int32_t get_offset_of_m_bBuildSpriteObj_40() { return static_cast<int32_t>(offsetof(NcSpriteAnimation_t3095587620, ___m_bBuildSpriteObj_40)); }
	inline bool get_m_bBuildSpriteObj_40() const { return ___m_bBuildSpriteObj_40; }
	inline bool* get_address_of_m_bBuildSpriteObj_40() { return &___m_bBuildSpriteObj_40; }
	inline void set_m_bBuildSpriteObj_40(bool value)
	{
		___m_bBuildSpriteObj_40 = value;
	}

	inline static int32_t get_offset_of_m_bNeedRebuildAlphaChannel_41() { return static_cast<int32_t>(offsetof(NcSpriteAnimation_t3095587620, ___m_bNeedRebuildAlphaChannel_41)); }
	inline bool get_m_bNeedRebuildAlphaChannel_41() const { return ___m_bNeedRebuildAlphaChannel_41; }
	inline bool* get_address_of_m_bNeedRebuildAlphaChannel_41() { return &___m_bNeedRebuildAlphaChannel_41; }
	inline void set_m_bNeedRebuildAlphaChannel_41(bool value)
	{
		___m_bNeedRebuildAlphaChannel_41 = value;
	}

	inline static int32_t get_offset_of_m_curveAlphaWeight_42() { return static_cast<int32_t>(offsetof(NcSpriteAnimation_t3095587620, ___m_curveAlphaWeight_42)); }
	inline AnimationCurve_t3306541151 * get_m_curveAlphaWeight_42() const { return ___m_curveAlphaWeight_42; }
	inline AnimationCurve_t3306541151 ** get_address_of_m_curveAlphaWeight_42() { return &___m_curveAlphaWeight_42; }
	inline void set_m_curveAlphaWeight_42(AnimationCurve_t3306541151 * value)
	{
		___m_curveAlphaWeight_42 = value;
		Il2CppCodeGenWriteBarrier(&___m_curveAlphaWeight_42, value);
	}

	inline static int32_t get_offset_of_m_size_43() { return static_cast<int32_t>(offsetof(NcSpriteAnimation_t3095587620, ___m_size_43)); }
	inline Vector2_t2243707579  get_m_size_43() const { return ___m_size_43; }
	inline Vector2_t2243707579 * get_address_of_m_size_43() { return &___m_size_43; }
	inline void set_m_size_43(Vector2_t2243707579  value)
	{
		___m_size_43 = value;
	}

	inline static int32_t get_offset_of_m_Renderer_44() { return static_cast<int32_t>(offsetof(NcSpriteAnimation_t3095587620, ___m_Renderer_44)); }
	inline Renderer_t257310565 * get_m_Renderer_44() const { return ___m_Renderer_44; }
	inline Renderer_t257310565 ** get_address_of_m_Renderer_44() { return &___m_Renderer_44; }
	inline void set_m_Renderer_44(Renderer_t257310565 * value)
	{
		___m_Renderer_44 = value;
		Il2CppCodeGenWriteBarrier(&___m_Renderer_44, value);
	}

	inline static int32_t get_offset_of_m_fStartTime_45() { return static_cast<int32_t>(offsetof(NcSpriteAnimation_t3095587620, ___m_fStartTime_45)); }
	inline float get_m_fStartTime_45() const { return ___m_fStartTime_45; }
	inline float* get_address_of_m_fStartTime_45() { return &___m_fStartTime_45; }
	inline void set_m_fStartTime_45(float value)
	{
		___m_fStartTime_45 = value;
	}

	inline static int32_t get_offset_of_m_nLastIndex_46() { return static_cast<int32_t>(offsetof(NcSpriteAnimation_t3095587620, ___m_nLastIndex_46)); }
	inline int32_t get_m_nLastIndex_46() const { return ___m_nLastIndex_46; }
	inline int32_t* get_address_of_m_nLastIndex_46() { return &___m_nLastIndex_46; }
	inline void set_m_nLastIndex_46(int32_t value)
	{
		___m_nLastIndex_46 = value;
	}

	inline static int32_t get_offset_of_m_nLastSeqIndex_47() { return static_cast<int32_t>(offsetof(NcSpriteAnimation_t3095587620, ___m_nLastSeqIndex_47)); }
	inline int32_t get_m_nLastSeqIndex_47() const { return ___m_nLastSeqIndex_47; }
	inline int32_t* get_address_of_m_nLastSeqIndex_47() { return &___m_nLastSeqIndex_47; }
	inline void set_m_nLastSeqIndex_47(int32_t value)
	{
		___m_nLastSeqIndex_47 = value;
	}

	inline static int32_t get_offset_of_m_bInPartLoop_48() { return static_cast<int32_t>(offsetof(NcSpriteAnimation_t3095587620, ___m_bInPartLoop_48)); }
	inline bool get_m_bInPartLoop_48() const { return ___m_bInPartLoop_48; }
	inline bool* get_address_of_m_bInPartLoop_48() { return &___m_bInPartLoop_48; }
	inline void set_m_bInPartLoop_48(bool value)
	{
		___m_bInPartLoop_48 = value;
	}

	inline static int32_t get_offset_of_m_bBreakLoop_49() { return static_cast<int32_t>(offsetof(NcSpriteAnimation_t3095587620, ___m_bBreakLoop_49)); }
	inline bool get_m_bBreakLoop_49() const { return ___m_bBreakLoop_49; }
	inline bool* get_address_of_m_bBreakLoop_49() { return &___m_bBreakLoop_49; }
	inline void set_m_bBreakLoop_49(bool value)
	{
		___m_bBreakLoop_49 = value;
	}

	inline static int32_t get_offset_of_m_MeshUVsByTileTexture_50() { return static_cast<int32_t>(offsetof(NcSpriteAnimation_t3095587620, ___m_MeshUVsByTileTexture_50)); }
	inline Vector2U5BU5D_t686124026* get_m_MeshUVsByTileTexture_50() const { return ___m_MeshUVsByTileTexture_50; }
	inline Vector2U5BU5D_t686124026** get_address_of_m_MeshUVsByTileTexture_50() { return &___m_MeshUVsByTileTexture_50; }
	inline void set_m_MeshUVsByTileTexture_50(Vector2U5BU5D_t686124026* value)
	{
		___m_MeshUVsByTileTexture_50 = value;
		Il2CppCodeGenWriteBarrier(&___m_MeshUVsByTileTexture_50, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
