#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// System.Collections.Generic.List`1<NcCurveAnimation/NcInfoCurve>
struct List_1_t4239842741;
// UnityEngine.Transform
struct Transform_t3275118058;
// System.String
struct String_t;
// UnityEngine.Material
struct Material_t193706927;
// System.String[]
struct StringU5BU5D_t1642385972;
// UnityEngine.Renderer[]
struct RendererU5BU5D_t2810717544;
// UnityEngine.MeshFilter
struct MeshFilter_t3026937449;
// UnityEngine.MeshFilter[]
struct MeshFilterU5BU5D_t3443068372;
// NcUvAnimation
struct NcUvAnimation_t3398882402;
// NcTransformTool
struct NcTransformTool_t1254871775;

#include "AssemblyU2DCSharp_NcEffectAniBehaviour2396724283.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// NcCurveAnimation
struct  NcCurveAnimation_t1477713384  : public NcEffectAniBehaviour_t2396724283
{
public:
	// System.Collections.Generic.List`1<NcCurveAnimation/NcInfoCurve> NcCurveAnimation::m_CurveInfoList
	List_1_t4239842741 * ___m_CurveInfoList_13;
	// System.Single NcCurveAnimation::m_fDelayTime
	float ___m_fDelayTime_14;
	// System.Single NcCurveAnimation::m_fDurationTime
	float ___m_fDurationTime_15;
	// System.Boolean NcCurveAnimation::m_bAutoDestruct
	bool ___m_bAutoDestruct_16;
	// System.Single NcCurveAnimation::m_fStartTime
	float ___m_fStartTime_17;
	// System.Single NcCurveAnimation::m_fAddElapsedTime
	float ___m_fAddElapsedTime_18;
	// System.Single NcCurveAnimation::m_fElapsedRate
	float ___m_fElapsedRate_19;
	// UnityEngine.Transform NcCurveAnimation::m_Transform
	Transform_t3275118058 * ___m_Transform_20;
	// System.String NcCurveAnimation::m_ColorName
	String_t* ___m_ColorName_21;
	// UnityEngine.Material NcCurveAnimation::m_MainMaterial
	Material_t193706927 * ___m_MainMaterial_22;
	// System.String[] NcCurveAnimation::m_ChildColorNames
	StringU5BU5D_t1642385972* ___m_ChildColorNames_23;
	// UnityEngine.Renderer[] NcCurveAnimation::m_ChildRenderers
	RendererU5BU5D_t2810717544* ___m_ChildRenderers_24;
	// UnityEngine.MeshFilter NcCurveAnimation::m_MainMeshFilter
	MeshFilter_t3026937449 * ___m_MainMeshFilter_25;
	// UnityEngine.MeshFilter[] NcCurveAnimation::m_ChildMeshFilters
	MeshFilterU5BU5D_t3443068372* ___m_ChildMeshFilters_26;
	// NcUvAnimation NcCurveAnimation::m_NcUvAnimation
	NcUvAnimation_t3398882402 * ___m_NcUvAnimation_27;
	// NcTransformTool NcCurveAnimation::m_NcTansform
	NcTransformTool_t1254871775 * ___m_NcTansform_28;
	// System.Boolean NcCurveAnimation::m_bSavedOriginalValue
	bool ___m_bSavedOriginalValue_29;

public:
	inline static int32_t get_offset_of_m_CurveInfoList_13() { return static_cast<int32_t>(offsetof(NcCurveAnimation_t1477713384, ___m_CurveInfoList_13)); }
	inline List_1_t4239842741 * get_m_CurveInfoList_13() const { return ___m_CurveInfoList_13; }
	inline List_1_t4239842741 ** get_address_of_m_CurveInfoList_13() { return &___m_CurveInfoList_13; }
	inline void set_m_CurveInfoList_13(List_1_t4239842741 * value)
	{
		___m_CurveInfoList_13 = value;
		Il2CppCodeGenWriteBarrier(&___m_CurveInfoList_13, value);
	}

	inline static int32_t get_offset_of_m_fDelayTime_14() { return static_cast<int32_t>(offsetof(NcCurveAnimation_t1477713384, ___m_fDelayTime_14)); }
	inline float get_m_fDelayTime_14() const { return ___m_fDelayTime_14; }
	inline float* get_address_of_m_fDelayTime_14() { return &___m_fDelayTime_14; }
	inline void set_m_fDelayTime_14(float value)
	{
		___m_fDelayTime_14 = value;
	}

	inline static int32_t get_offset_of_m_fDurationTime_15() { return static_cast<int32_t>(offsetof(NcCurveAnimation_t1477713384, ___m_fDurationTime_15)); }
	inline float get_m_fDurationTime_15() const { return ___m_fDurationTime_15; }
	inline float* get_address_of_m_fDurationTime_15() { return &___m_fDurationTime_15; }
	inline void set_m_fDurationTime_15(float value)
	{
		___m_fDurationTime_15 = value;
	}

	inline static int32_t get_offset_of_m_bAutoDestruct_16() { return static_cast<int32_t>(offsetof(NcCurveAnimation_t1477713384, ___m_bAutoDestruct_16)); }
	inline bool get_m_bAutoDestruct_16() const { return ___m_bAutoDestruct_16; }
	inline bool* get_address_of_m_bAutoDestruct_16() { return &___m_bAutoDestruct_16; }
	inline void set_m_bAutoDestruct_16(bool value)
	{
		___m_bAutoDestruct_16 = value;
	}

	inline static int32_t get_offset_of_m_fStartTime_17() { return static_cast<int32_t>(offsetof(NcCurveAnimation_t1477713384, ___m_fStartTime_17)); }
	inline float get_m_fStartTime_17() const { return ___m_fStartTime_17; }
	inline float* get_address_of_m_fStartTime_17() { return &___m_fStartTime_17; }
	inline void set_m_fStartTime_17(float value)
	{
		___m_fStartTime_17 = value;
	}

	inline static int32_t get_offset_of_m_fAddElapsedTime_18() { return static_cast<int32_t>(offsetof(NcCurveAnimation_t1477713384, ___m_fAddElapsedTime_18)); }
	inline float get_m_fAddElapsedTime_18() const { return ___m_fAddElapsedTime_18; }
	inline float* get_address_of_m_fAddElapsedTime_18() { return &___m_fAddElapsedTime_18; }
	inline void set_m_fAddElapsedTime_18(float value)
	{
		___m_fAddElapsedTime_18 = value;
	}

	inline static int32_t get_offset_of_m_fElapsedRate_19() { return static_cast<int32_t>(offsetof(NcCurveAnimation_t1477713384, ___m_fElapsedRate_19)); }
	inline float get_m_fElapsedRate_19() const { return ___m_fElapsedRate_19; }
	inline float* get_address_of_m_fElapsedRate_19() { return &___m_fElapsedRate_19; }
	inline void set_m_fElapsedRate_19(float value)
	{
		___m_fElapsedRate_19 = value;
	}

	inline static int32_t get_offset_of_m_Transform_20() { return static_cast<int32_t>(offsetof(NcCurveAnimation_t1477713384, ___m_Transform_20)); }
	inline Transform_t3275118058 * get_m_Transform_20() const { return ___m_Transform_20; }
	inline Transform_t3275118058 ** get_address_of_m_Transform_20() { return &___m_Transform_20; }
	inline void set_m_Transform_20(Transform_t3275118058 * value)
	{
		___m_Transform_20 = value;
		Il2CppCodeGenWriteBarrier(&___m_Transform_20, value);
	}

	inline static int32_t get_offset_of_m_ColorName_21() { return static_cast<int32_t>(offsetof(NcCurveAnimation_t1477713384, ___m_ColorName_21)); }
	inline String_t* get_m_ColorName_21() const { return ___m_ColorName_21; }
	inline String_t** get_address_of_m_ColorName_21() { return &___m_ColorName_21; }
	inline void set_m_ColorName_21(String_t* value)
	{
		___m_ColorName_21 = value;
		Il2CppCodeGenWriteBarrier(&___m_ColorName_21, value);
	}

	inline static int32_t get_offset_of_m_MainMaterial_22() { return static_cast<int32_t>(offsetof(NcCurveAnimation_t1477713384, ___m_MainMaterial_22)); }
	inline Material_t193706927 * get_m_MainMaterial_22() const { return ___m_MainMaterial_22; }
	inline Material_t193706927 ** get_address_of_m_MainMaterial_22() { return &___m_MainMaterial_22; }
	inline void set_m_MainMaterial_22(Material_t193706927 * value)
	{
		___m_MainMaterial_22 = value;
		Il2CppCodeGenWriteBarrier(&___m_MainMaterial_22, value);
	}

	inline static int32_t get_offset_of_m_ChildColorNames_23() { return static_cast<int32_t>(offsetof(NcCurveAnimation_t1477713384, ___m_ChildColorNames_23)); }
	inline StringU5BU5D_t1642385972* get_m_ChildColorNames_23() const { return ___m_ChildColorNames_23; }
	inline StringU5BU5D_t1642385972** get_address_of_m_ChildColorNames_23() { return &___m_ChildColorNames_23; }
	inline void set_m_ChildColorNames_23(StringU5BU5D_t1642385972* value)
	{
		___m_ChildColorNames_23 = value;
		Il2CppCodeGenWriteBarrier(&___m_ChildColorNames_23, value);
	}

	inline static int32_t get_offset_of_m_ChildRenderers_24() { return static_cast<int32_t>(offsetof(NcCurveAnimation_t1477713384, ___m_ChildRenderers_24)); }
	inline RendererU5BU5D_t2810717544* get_m_ChildRenderers_24() const { return ___m_ChildRenderers_24; }
	inline RendererU5BU5D_t2810717544** get_address_of_m_ChildRenderers_24() { return &___m_ChildRenderers_24; }
	inline void set_m_ChildRenderers_24(RendererU5BU5D_t2810717544* value)
	{
		___m_ChildRenderers_24 = value;
		Il2CppCodeGenWriteBarrier(&___m_ChildRenderers_24, value);
	}

	inline static int32_t get_offset_of_m_MainMeshFilter_25() { return static_cast<int32_t>(offsetof(NcCurveAnimation_t1477713384, ___m_MainMeshFilter_25)); }
	inline MeshFilter_t3026937449 * get_m_MainMeshFilter_25() const { return ___m_MainMeshFilter_25; }
	inline MeshFilter_t3026937449 ** get_address_of_m_MainMeshFilter_25() { return &___m_MainMeshFilter_25; }
	inline void set_m_MainMeshFilter_25(MeshFilter_t3026937449 * value)
	{
		___m_MainMeshFilter_25 = value;
		Il2CppCodeGenWriteBarrier(&___m_MainMeshFilter_25, value);
	}

	inline static int32_t get_offset_of_m_ChildMeshFilters_26() { return static_cast<int32_t>(offsetof(NcCurveAnimation_t1477713384, ___m_ChildMeshFilters_26)); }
	inline MeshFilterU5BU5D_t3443068372* get_m_ChildMeshFilters_26() const { return ___m_ChildMeshFilters_26; }
	inline MeshFilterU5BU5D_t3443068372** get_address_of_m_ChildMeshFilters_26() { return &___m_ChildMeshFilters_26; }
	inline void set_m_ChildMeshFilters_26(MeshFilterU5BU5D_t3443068372* value)
	{
		___m_ChildMeshFilters_26 = value;
		Il2CppCodeGenWriteBarrier(&___m_ChildMeshFilters_26, value);
	}

	inline static int32_t get_offset_of_m_NcUvAnimation_27() { return static_cast<int32_t>(offsetof(NcCurveAnimation_t1477713384, ___m_NcUvAnimation_27)); }
	inline NcUvAnimation_t3398882402 * get_m_NcUvAnimation_27() const { return ___m_NcUvAnimation_27; }
	inline NcUvAnimation_t3398882402 ** get_address_of_m_NcUvAnimation_27() { return &___m_NcUvAnimation_27; }
	inline void set_m_NcUvAnimation_27(NcUvAnimation_t3398882402 * value)
	{
		___m_NcUvAnimation_27 = value;
		Il2CppCodeGenWriteBarrier(&___m_NcUvAnimation_27, value);
	}

	inline static int32_t get_offset_of_m_NcTansform_28() { return static_cast<int32_t>(offsetof(NcCurveAnimation_t1477713384, ___m_NcTansform_28)); }
	inline NcTransformTool_t1254871775 * get_m_NcTansform_28() const { return ___m_NcTansform_28; }
	inline NcTransformTool_t1254871775 ** get_address_of_m_NcTansform_28() { return &___m_NcTansform_28; }
	inline void set_m_NcTansform_28(NcTransformTool_t1254871775 * value)
	{
		___m_NcTansform_28 = value;
		Il2CppCodeGenWriteBarrier(&___m_NcTansform_28, value);
	}

	inline static int32_t get_offset_of_m_bSavedOriginalValue_29() { return static_cast<int32_t>(offsetof(NcCurveAnimation_t1477713384, ___m_bSavedOriginalValue_29)); }
	inline bool get_m_bSavedOriginalValue_29() const { return ___m_bSavedOriginalValue_29; }
	inline bool* get_address_of_m_bSavedOriginalValue_29() { return &___m_bSavedOriginalValue_29; }
	inline void set_m_bSavedOriginalValue_29(bool value)
	{
		___m_bSavedOriginalValue_29 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
