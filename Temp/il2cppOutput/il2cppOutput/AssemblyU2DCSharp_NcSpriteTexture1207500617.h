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

#include "AssemblyU2DCSharp_NcEffectBehaviour813403937.h"
#include "AssemblyU2DCSharp_NcSpriteFactory_MESH_TYPE826724577.h"
#include "AssemblyU2DCSharp_NcSpriteFactory_ALIGN_TYPE1276270715.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// NcSpriteTexture
struct  NcSpriteTexture_t1207500617  : public NcEffectBehaviour_t813403937
{
public:
	// UnityEngine.GameObject NcSpriteTexture::m_NcSpriteFactoryPrefab
	GameObject_t1756533147 * ___m_NcSpriteFactoryPrefab_9;
	// NcSpriteFactory NcSpriteTexture::m_NcSpriteFactoryCom
	NcSpriteFactory_t883580072 * ___m_NcSpriteFactoryCom_10;
	// NcSpriteFactory/NcFrameInfo[] NcSpriteTexture::m_NcSpriteFrameInfos
	NcFrameInfoU5BU5D_t2570076182* ___m_NcSpriteFrameInfos_11;
	// System.Single NcSpriteTexture::m_fUvScale
	float ___m_fUvScale_12;
	// System.Int32 NcSpriteTexture::m_nSpriteFactoryIndex
	int32_t ___m_nSpriteFactoryIndex_13;
	// System.Int32 NcSpriteTexture::m_nFrameIndex
	int32_t ___m_nFrameIndex_14;
	// NcSpriteFactory/MESH_TYPE NcSpriteTexture::m_MeshType
	int32_t ___m_MeshType_15;
	// NcSpriteFactory/ALIGN_TYPE NcSpriteTexture::m_AlignType
	int32_t ___m_AlignType_16;
	// System.Single NcSpriteTexture::m_fShowRate
	float ___m_fShowRate_17;
	// UnityEngine.GameObject NcSpriteTexture::m_EffectObject
	GameObject_t1756533147 * ___m_EffectObject_18;

public:
	inline static int32_t get_offset_of_m_NcSpriteFactoryPrefab_9() { return static_cast<int32_t>(offsetof(NcSpriteTexture_t1207500617, ___m_NcSpriteFactoryPrefab_9)); }
	inline GameObject_t1756533147 * get_m_NcSpriteFactoryPrefab_9() const { return ___m_NcSpriteFactoryPrefab_9; }
	inline GameObject_t1756533147 ** get_address_of_m_NcSpriteFactoryPrefab_9() { return &___m_NcSpriteFactoryPrefab_9; }
	inline void set_m_NcSpriteFactoryPrefab_9(GameObject_t1756533147 * value)
	{
		___m_NcSpriteFactoryPrefab_9 = value;
		Il2CppCodeGenWriteBarrier(&___m_NcSpriteFactoryPrefab_9, value);
	}

	inline static int32_t get_offset_of_m_NcSpriteFactoryCom_10() { return static_cast<int32_t>(offsetof(NcSpriteTexture_t1207500617, ___m_NcSpriteFactoryCom_10)); }
	inline NcSpriteFactory_t883580072 * get_m_NcSpriteFactoryCom_10() const { return ___m_NcSpriteFactoryCom_10; }
	inline NcSpriteFactory_t883580072 ** get_address_of_m_NcSpriteFactoryCom_10() { return &___m_NcSpriteFactoryCom_10; }
	inline void set_m_NcSpriteFactoryCom_10(NcSpriteFactory_t883580072 * value)
	{
		___m_NcSpriteFactoryCom_10 = value;
		Il2CppCodeGenWriteBarrier(&___m_NcSpriteFactoryCom_10, value);
	}

	inline static int32_t get_offset_of_m_NcSpriteFrameInfos_11() { return static_cast<int32_t>(offsetof(NcSpriteTexture_t1207500617, ___m_NcSpriteFrameInfos_11)); }
	inline NcFrameInfoU5BU5D_t2570076182* get_m_NcSpriteFrameInfos_11() const { return ___m_NcSpriteFrameInfos_11; }
	inline NcFrameInfoU5BU5D_t2570076182** get_address_of_m_NcSpriteFrameInfos_11() { return &___m_NcSpriteFrameInfos_11; }
	inline void set_m_NcSpriteFrameInfos_11(NcFrameInfoU5BU5D_t2570076182* value)
	{
		___m_NcSpriteFrameInfos_11 = value;
		Il2CppCodeGenWriteBarrier(&___m_NcSpriteFrameInfos_11, value);
	}

	inline static int32_t get_offset_of_m_fUvScale_12() { return static_cast<int32_t>(offsetof(NcSpriteTexture_t1207500617, ___m_fUvScale_12)); }
	inline float get_m_fUvScale_12() const { return ___m_fUvScale_12; }
	inline float* get_address_of_m_fUvScale_12() { return &___m_fUvScale_12; }
	inline void set_m_fUvScale_12(float value)
	{
		___m_fUvScale_12 = value;
	}

	inline static int32_t get_offset_of_m_nSpriteFactoryIndex_13() { return static_cast<int32_t>(offsetof(NcSpriteTexture_t1207500617, ___m_nSpriteFactoryIndex_13)); }
	inline int32_t get_m_nSpriteFactoryIndex_13() const { return ___m_nSpriteFactoryIndex_13; }
	inline int32_t* get_address_of_m_nSpriteFactoryIndex_13() { return &___m_nSpriteFactoryIndex_13; }
	inline void set_m_nSpriteFactoryIndex_13(int32_t value)
	{
		___m_nSpriteFactoryIndex_13 = value;
	}

	inline static int32_t get_offset_of_m_nFrameIndex_14() { return static_cast<int32_t>(offsetof(NcSpriteTexture_t1207500617, ___m_nFrameIndex_14)); }
	inline int32_t get_m_nFrameIndex_14() const { return ___m_nFrameIndex_14; }
	inline int32_t* get_address_of_m_nFrameIndex_14() { return &___m_nFrameIndex_14; }
	inline void set_m_nFrameIndex_14(int32_t value)
	{
		___m_nFrameIndex_14 = value;
	}

	inline static int32_t get_offset_of_m_MeshType_15() { return static_cast<int32_t>(offsetof(NcSpriteTexture_t1207500617, ___m_MeshType_15)); }
	inline int32_t get_m_MeshType_15() const { return ___m_MeshType_15; }
	inline int32_t* get_address_of_m_MeshType_15() { return &___m_MeshType_15; }
	inline void set_m_MeshType_15(int32_t value)
	{
		___m_MeshType_15 = value;
	}

	inline static int32_t get_offset_of_m_AlignType_16() { return static_cast<int32_t>(offsetof(NcSpriteTexture_t1207500617, ___m_AlignType_16)); }
	inline int32_t get_m_AlignType_16() const { return ___m_AlignType_16; }
	inline int32_t* get_address_of_m_AlignType_16() { return &___m_AlignType_16; }
	inline void set_m_AlignType_16(int32_t value)
	{
		___m_AlignType_16 = value;
	}

	inline static int32_t get_offset_of_m_fShowRate_17() { return static_cast<int32_t>(offsetof(NcSpriteTexture_t1207500617, ___m_fShowRate_17)); }
	inline float get_m_fShowRate_17() const { return ___m_fShowRate_17; }
	inline float* get_address_of_m_fShowRate_17() { return &___m_fShowRate_17; }
	inline void set_m_fShowRate_17(float value)
	{
		___m_fShowRate_17 = value;
	}

	inline static int32_t get_offset_of_m_EffectObject_18() { return static_cast<int32_t>(offsetof(NcSpriteTexture_t1207500617, ___m_EffectObject_18)); }
	inline GameObject_t1756533147 * get_m_EffectObject_18() const { return ___m_EffectObject_18; }
	inline GameObject_t1756533147 ** get_address_of_m_EffectObject_18() { return &___m_EffectObject_18; }
	inline void set_m_EffectObject_18(GameObject_t1756533147 * value)
	{
		___m_EffectObject_18 = value;
		Il2CppCodeGenWriteBarrier(&___m_EffectObject_18, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
