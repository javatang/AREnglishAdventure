#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// UnityEngine.Color[]
struct ColorU5BU5D_t672350442;
// System.Single[]
struct SingleU5BU5D_t577127397;
// System.Collections.Generic.List`1<NcTrailTexture/Point>
struct List_1_t3497229361;
// UnityEngine.Transform
struct Transform_t3275118058;
// UnityEngine.GameObject
struct GameObject_t1756533147;
// UnityEngine.Mesh
struct Mesh_t1356156583;

#include "AssemblyU2DCSharp_NcEffectBehaviour813403937.h"
#include "AssemblyU2DCSharp_NcTrailTexture_AXIS_TYPE3983958957.h"
#include "UnityEngine_UnityEngine_Vector32243707580.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// NcTrailTexture
struct  NcTrailTexture_t1000731200  : public NcEffectBehaviour_t813403937
{
public:
	// System.Single NcTrailTexture::m_fDelayTime
	float ___m_fDelayTime_9;
	// System.Single NcTrailTexture::m_fEmitTime
	float ___m_fEmitTime_10;
	// System.Boolean NcTrailTexture::m_bSmoothHide
	bool ___m_bSmoothHide_11;
	// System.Boolean NcTrailTexture::m_bEmit
	bool ___m_bEmit_12;
	// System.Single NcTrailTexture::m_fStartTime
	float ___m_fStartTime_13;
	// System.Single NcTrailTexture::m_fStopTime
	float ___m_fStopTime_14;
	// System.Single NcTrailTexture::m_fLifeTime
	float ___m_fLifeTime_15;
	// NcTrailTexture/AXIS_TYPE NcTrailTexture::m_TipAxis
	int32_t ___m_TipAxis_16;
	// System.Single NcTrailTexture::m_fTipSize
	float ___m_fTipSize_17;
	// System.Boolean NcTrailTexture::m_bCenterAlign
	bool ___m_bCenterAlign_18;
	// System.Boolean NcTrailTexture::m_UvFlipHorizontal
	bool ___m_UvFlipHorizontal_19;
	// System.Boolean NcTrailTexture::m_UvFlipVirtical
	bool ___m_UvFlipVirtical_20;
	// System.Int32 NcTrailTexture::m_nFadeHeadCount
	int32_t ___m_nFadeHeadCount_21;
	// System.Int32 NcTrailTexture::m_nFadeTailCount
	int32_t ___m_nFadeTailCount_22;
	// UnityEngine.Color[] NcTrailTexture::m_Colors
	ColorU5BU5D_t672350442* ___m_Colors_23;
	// System.Single[] NcTrailTexture::m_SizeRates
	SingleU5BU5D_t577127397* ___m_SizeRates_24;
	// System.Boolean NcTrailTexture::m_bInterpolation
	bool ___m_bInterpolation_25;
	// System.Int32 NcTrailTexture::m_nMaxSmoothCount
	int32_t ___m_nMaxSmoothCount_26;
	// System.Int32 NcTrailTexture::m_nSubdivisions
	int32_t ___m_nSubdivisions_27;
	// System.Collections.Generic.List`1<NcTrailTexture/Point> NcTrailTexture::m_SmoothedPoints
	List_1_t3497229361 * ___m_SmoothedPoints_28;
	// System.Single NcTrailTexture::m_fMinVertexDistance
	float ___m_fMinVertexDistance_29;
	// System.Single NcTrailTexture::m_fMaxVertexDistance
	float ___m_fMaxVertexDistance_30;
	// System.Single NcTrailTexture::m_fMaxAngle
	float ___m_fMaxAngle_31;
	// System.Boolean NcTrailTexture::m_bAutoDestruct
	bool ___m_bAutoDestruct_32;
	// System.Collections.Generic.List`1<NcTrailTexture/Point> NcTrailTexture::m_Points
	List_1_t3497229361 * ___m_Points_33;
	// UnityEngine.Transform NcTrailTexture::m_base
	Transform_t3275118058 * ___m_base_34;
	// UnityEngine.GameObject NcTrailTexture::m_TrialObject
	GameObject_t1756533147 * ___m_TrialObject_35;
	// UnityEngine.Mesh NcTrailTexture::m_TrailMesh
	Mesh_t1356156583 * ___m_TrailMesh_36;
	// UnityEngine.Vector3 NcTrailTexture::m_LastPosition
	Vector3_t2243707580  ___m_LastPosition_37;
	// UnityEngine.Vector3 NcTrailTexture::m_LastCameraPosition1
	Vector3_t2243707580  ___m_LastCameraPosition1_38;
	// UnityEngine.Vector3 NcTrailTexture::m_LastCameraPosition2
	Vector3_t2243707580  ___m_LastCameraPosition2_39;
	// System.Boolean NcTrailTexture::m_bLastFrameEmit
	bool ___m_bLastFrameEmit_40;

public:
	inline static int32_t get_offset_of_m_fDelayTime_9() { return static_cast<int32_t>(offsetof(NcTrailTexture_t1000731200, ___m_fDelayTime_9)); }
	inline float get_m_fDelayTime_9() const { return ___m_fDelayTime_9; }
	inline float* get_address_of_m_fDelayTime_9() { return &___m_fDelayTime_9; }
	inline void set_m_fDelayTime_9(float value)
	{
		___m_fDelayTime_9 = value;
	}

	inline static int32_t get_offset_of_m_fEmitTime_10() { return static_cast<int32_t>(offsetof(NcTrailTexture_t1000731200, ___m_fEmitTime_10)); }
	inline float get_m_fEmitTime_10() const { return ___m_fEmitTime_10; }
	inline float* get_address_of_m_fEmitTime_10() { return &___m_fEmitTime_10; }
	inline void set_m_fEmitTime_10(float value)
	{
		___m_fEmitTime_10 = value;
	}

	inline static int32_t get_offset_of_m_bSmoothHide_11() { return static_cast<int32_t>(offsetof(NcTrailTexture_t1000731200, ___m_bSmoothHide_11)); }
	inline bool get_m_bSmoothHide_11() const { return ___m_bSmoothHide_11; }
	inline bool* get_address_of_m_bSmoothHide_11() { return &___m_bSmoothHide_11; }
	inline void set_m_bSmoothHide_11(bool value)
	{
		___m_bSmoothHide_11 = value;
	}

	inline static int32_t get_offset_of_m_bEmit_12() { return static_cast<int32_t>(offsetof(NcTrailTexture_t1000731200, ___m_bEmit_12)); }
	inline bool get_m_bEmit_12() const { return ___m_bEmit_12; }
	inline bool* get_address_of_m_bEmit_12() { return &___m_bEmit_12; }
	inline void set_m_bEmit_12(bool value)
	{
		___m_bEmit_12 = value;
	}

	inline static int32_t get_offset_of_m_fStartTime_13() { return static_cast<int32_t>(offsetof(NcTrailTexture_t1000731200, ___m_fStartTime_13)); }
	inline float get_m_fStartTime_13() const { return ___m_fStartTime_13; }
	inline float* get_address_of_m_fStartTime_13() { return &___m_fStartTime_13; }
	inline void set_m_fStartTime_13(float value)
	{
		___m_fStartTime_13 = value;
	}

	inline static int32_t get_offset_of_m_fStopTime_14() { return static_cast<int32_t>(offsetof(NcTrailTexture_t1000731200, ___m_fStopTime_14)); }
	inline float get_m_fStopTime_14() const { return ___m_fStopTime_14; }
	inline float* get_address_of_m_fStopTime_14() { return &___m_fStopTime_14; }
	inline void set_m_fStopTime_14(float value)
	{
		___m_fStopTime_14 = value;
	}

	inline static int32_t get_offset_of_m_fLifeTime_15() { return static_cast<int32_t>(offsetof(NcTrailTexture_t1000731200, ___m_fLifeTime_15)); }
	inline float get_m_fLifeTime_15() const { return ___m_fLifeTime_15; }
	inline float* get_address_of_m_fLifeTime_15() { return &___m_fLifeTime_15; }
	inline void set_m_fLifeTime_15(float value)
	{
		___m_fLifeTime_15 = value;
	}

	inline static int32_t get_offset_of_m_TipAxis_16() { return static_cast<int32_t>(offsetof(NcTrailTexture_t1000731200, ___m_TipAxis_16)); }
	inline int32_t get_m_TipAxis_16() const { return ___m_TipAxis_16; }
	inline int32_t* get_address_of_m_TipAxis_16() { return &___m_TipAxis_16; }
	inline void set_m_TipAxis_16(int32_t value)
	{
		___m_TipAxis_16 = value;
	}

	inline static int32_t get_offset_of_m_fTipSize_17() { return static_cast<int32_t>(offsetof(NcTrailTexture_t1000731200, ___m_fTipSize_17)); }
	inline float get_m_fTipSize_17() const { return ___m_fTipSize_17; }
	inline float* get_address_of_m_fTipSize_17() { return &___m_fTipSize_17; }
	inline void set_m_fTipSize_17(float value)
	{
		___m_fTipSize_17 = value;
	}

	inline static int32_t get_offset_of_m_bCenterAlign_18() { return static_cast<int32_t>(offsetof(NcTrailTexture_t1000731200, ___m_bCenterAlign_18)); }
	inline bool get_m_bCenterAlign_18() const { return ___m_bCenterAlign_18; }
	inline bool* get_address_of_m_bCenterAlign_18() { return &___m_bCenterAlign_18; }
	inline void set_m_bCenterAlign_18(bool value)
	{
		___m_bCenterAlign_18 = value;
	}

	inline static int32_t get_offset_of_m_UvFlipHorizontal_19() { return static_cast<int32_t>(offsetof(NcTrailTexture_t1000731200, ___m_UvFlipHorizontal_19)); }
	inline bool get_m_UvFlipHorizontal_19() const { return ___m_UvFlipHorizontal_19; }
	inline bool* get_address_of_m_UvFlipHorizontal_19() { return &___m_UvFlipHorizontal_19; }
	inline void set_m_UvFlipHorizontal_19(bool value)
	{
		___m_UvFlipHorizontal_19 = value;
	}

	inline static int32_t get_offset_of_m_UvFlipVirtical_20() { return static_cast<int32_t>(offsetof(NcTrailTexture_t1000731200, ___m_UvFlipVirtical_20)); }
	inline bool get_m_UvFlipVirtical_20() const { return ___m_UvFlipVirtical_20; }
	inline bool* get_address_of_m_UvFlipVirtical_20() { return &___m_UvFlipVirtical_20; }
	inline void set_m_UvFlipVirtical_20(bool value)
	{
		___m_UvFlipVirtical_20 = value;
	}

	inline static int32_t get_offset_of_m_nFadeHeadCount_21() { return static_cast<int32_t>(offsetof(NcTrailTexture_t1000731200, ___m_nFadeHeadCount_21)); }
	inline int32_t get_m_nFadeHeadCount_21() const { return ___m_nFadeHeadCount_21; }
	inline int32_t* get_address_of_m_nFadeHeadCount_21() { return &___m_nFadeHeadCount_21; }
	inline void set_m_nFadeHeadCount_21(int32_t value)
	{
		___m_nFadeHeadCount_21 = value;
	}

	inline static int32_t get_offset_of_m_nFadeTailCount_22() { return static_cast<int32_t>(offsetof(NcTrailTexture_t1000731200, ___m_nFadeTailCount_22)); }
	inline int32_t get_m_nFadeTailCount_22() const { return ___m_nFadeTailCount_22; }
	inline int32_t* get_address_of_m_nFadeTailCount_22() { return &___m_nFadeTailCount_22; }
	inline void set_m_nFadeTailCount_22(int32_t value)
	{
		___m_nFadeTailCount_22 = value;
	}

	inline static int32_t get_offset_of_m_Colors_23() { return static_cast<int32_t>(offsetof(NcTrailTexture_t1000731200, ___m_Colors_23)); }
	inline ColorU5BU5D_t672350442* get_m_Colors_23() const { return ___m_Colors_23; }
	inline ColorU5BU5D_t672350442** get_address_of_m_Colors_23() { return &___m_Colors_23; }
	inline void set_m_Colors_23(ColorU5BU5D_t672350442* value)
	{
		___m_Colors_23 = value;
		Il2CppCodeGenWriteBarrier(&___m_Colors_23, value);
	}

	inline static int32_t get_offset_of_m_SizeRates_24() { return static_cast<int32_t>(offsetof(NcTrailTexture_t1000731200, ___m_SizeRates_24)); }
	inline SingleU5BU5D_t577127397* get_m_SizeRates_24() const { return ___m_SizeRates_24; }
	inline SingleU5BU5D_t577127397** get_address_of_m_SizeRates_24() { return &___m_SizeRates_24; }
	inline void set_m_SizeRates_24(SingleU5BU5D_t577127397* value)
	{
		___m_SizeRates_24 = value;
		Il2CppCodeGenWriteBarrier(&___m_SizeRates_24, value);
	}

	inline static int32_t get_offset_of_m_bInterpolation_25() { return static_cast<int32_t>(offsetof(NcTrailTexture_t1000731200, ___m_bInterpolation_25)); }
	inline bool get_m_bInterpolation_25() const { return ___m_bInterpolation_25; }
	inline bool* get_address_of_m_bInterpolation_25() { return &___m_bInterpolation_25; }
	inline void set_m_bInterpolation_25(bool value)
	{
		___m_bInterpolation_25 = value;
	}

	inline static int32_t get_offset_of_m_nMaxSmoothCount_26() { return static_cast<int32_t>(offsetof(NcTrailTexture_t1000731200, ___m_nMaxSmoothCount_26)); }
	inline int32_t get_m_nMaxSmoothCount_26() const { return ___m_nMaxSmoothCount_26; }
	inline int32_t* get_address_of_m_nMaxSmoothCount_26() { return &___m_nMaxSmoothCount_26; }
	inline void set_m_nMaxSmoothCount_26(int32_t value)
	{
		___m_nMaxSmoothCount_26 = value;
	}

	inline static int32_t get_offset_of_m_nSubdivisions_27() { return static_cast<int32_t>(offsetof(NcTrailTexture_t1000731200, ___m_nSubdivisions_27)); }
	inline int32_t get_m_nSubdivisions_27() const { return ___m_nSubdivisions_27; }
	inline int32_t* get_address_of_m_nSubdivisions_27() { return &___m_nSubdivisions_27; }
	inline void set_m_nSubdivisions_27(int32_t value)
	{
		___m_nSubdivisions_27 = value;
	}

	inline static int32_t get_offset_of_m_SmoothedPoints_28() { return static_cast<int32_t>(offsetof(NcTrailTexture_t1000731200, ___m_SmoothedPoints_28)); }
	inline List_1_t3497229361 * get_m_SmoothedPoints_28() const { return ___m_SmoothedPoints_28; }
	inline List_1_t3497229361 ** get_address_of_m_SmoothedPoints_28() { return &___m_SmoothedPoints_28; }
	inline void set_m_SmoothedPoints_28(List_1_t3497229361 * value)
	{
		___m_SmoothedPoints_28 = value;
		Il2CppCodeGenWriteBarrier(&___m_SmoothedPoints_28, value);
	}

	inline static int32_t get_offset_of_m_fMinVertexDistance_29() { return static_cast<int32_t>(offsetof(NcTrailTexture_t1000731200, ___m_fMinVertexDistance_29)); }
	inline float get_m_fMinVertexDistance_29() const { return ___m_fMinVertexDistance_29; }
	inline float* get_address_of_m_fMinVertexDistance_29() { return &___m_fMinVertexDistance_29; }
	inline void set_m_fMinVertexDistance_29(float value)
	{
		___m_fMinVertexDistance_29 = value;
	}

	inline static int32_t get_offset_of_m_fMaxVertexDistance_30() { return static_cast<int32_t>(offsetof(NcTrailTexture_t1000731200, ___m_fMaxVertexDistance_30)); }
	inline float get_m_fMaxVertexDistance_30() const { return ___m_fMaxVertexDistance_30; }
	inline float* get_address_of_m_fMaxVertexDistance_30() { return &___m_fMaxVertexDistance_30; }
	inline void set_m_fMaxVertexDistance_30(float value)
	{
		___m_fMaxVertexDistance_30 = value;
	}

	inline static int32_t get_offset_of_m_fMaxAngle_31() { return static_cast<int32_t>(offsetof(NcTrailTexture_t1000731200, ___m_fMaxAngle_31)); }
	inline float get_m_fMaxAngle_31() const { return ___m_fMaxAngle_31; }
	inline float* get_address_of_m_fMaxAngle_31() { return &___m_fMaxAngle_31; }
	inline void set_m_fMaxAngle_31(float value)
	{
		___m_fMaxAngle_31 = value;
	}

	inline static int32_t get_offset_of_m_bAutoDestruct_32() { return static_cast<int32_t>(offsetof(NcTrailTexture_t1000731200, ___m_bAutoDestruct_32)); }
	inline bool get_m_bAutoDestruct_32() const { return ___m_bAutoDestruct_32; }
	inline bool* get_address_of_m_bAutoDestruct_32() { return &___m_bAutoDestruct_32; }
	inline void set_m_bAutoDestruct_32(bool value)
	{
		___m_bAutoDestruct_32 = value;
	}

	inline static int32_t get_offset_of_m_Points_33() { return static_cast<int32_t>(offsetof(NcTrailTexture_t1000731200, ___m_Points_33)); }
	inline List_1_t3497229361 * get_m_Points_33() const { return ___m_Points_33; }
	inline List_1_t3497229361 ** get_address_of_m_Points_33() { return &___m_Points_33; }
	inline void set_m_Points_33(List_1_t3497229361 * value)
	{
		___m_Points_33 = value;
		Il2CppCodeGenWriteBarrier(&___m_Points_33, value);
	}

	inline static int32_t get_offset_of_m_base_34() { return static_cast<int32_t>(offsetof(NcTrailTexture_t1000731200, ___m_base_34)); }
	inline Transform_t3275118058 * get_m_base_34() const { return ___m_base_34; }
	inline Transform_t3275118058 ** get_address_of_m_base_34() { return &___m_base_34; }
	inline void set_m_base_34(Transform_t3275118058 * value)
	{
		___m_base_34 = value;
		Il2CppCodeGenWriteBarrier(&___m_base_34, value);
	}

	inline static int32_t get_offset_of_m_TrialObject_35() { return static_cast<int32_t>(offsetof(NcTrailTexture_t1000731200, ___m_TrialObject_35)); }
	inline GameObject_t1756533147 * get_m_TrialObject_35() const { return ___m_TrialObject_35; }
	inline GameObject_t1756533147 ** get_address_of_m_TrialObject_35() { return &___m_TrialObject_35; }
	inline void set_m_TrialObject_35(GameObject_t1756533147 * value)
	{
		___m_TrialObject_35 = value;
		Il2CppCodeGenWriteBarrier(&___m_TrialObject_35, value);
	}

	inline static int32_t get_offset_of_m_TrailMesh_36() { return static_cast<int32_t>(offsetof(NcTrailTexture_t1000731200, ___m_TrailMesh_36)); }
	inline Mesh_t1356156583 * get_m_TrailMesh_36() const { return ___m_TrailMesh_36; }
	inline Mesh_t1356156583 ** get_address_of_m_TrailMesh_36() { return &___m_TrailMesh_36; }
	inline void set_m_TrailMesh_36(Mesh_t1356156583 * value)
	{
		___m_TrailMesh_36 = value;
		Il2CppCodeGenWriteBarrier(&___m_TrailMesh_36, value);
	}

	inline static int32_t get_offset_of_m_LastPosition_37() { return static_cast<int32_t>(offsetof(NcTrailTexture_t1000731200, ___m_LastPosition_37)); }
	inline Vector3_t2243707580  get_m_LastPosition_37() const { return ___m_LastPosition_37; }
	inline Vector3_t2243707580 * get_address_of_m_LastPosition_37() { return &___m_LastPosition_37; }
	inline void set_m_LastPosition_37(Vector3_t2243707580  value)
	{
		___m_LastPosition_37 = value;
	}

	inline static int32_t get_offset_of_m_LastCameraPosition1_38() { return static_cast<int32_t>(offsetof(NcTrailTexture_t1000731200, ___m_LastCameraPosition1_38)); }
	inline Vector3_t2243707580  get_m_LastCameraPosition1_38() const { return ___m_LastCameraPosition1_38; }
	inline Vector3_t2243707580 * get_address_of_m_LastCameraPosition1_38() { return &___m_LastCameraPosition1_38; }
	inline void set_m_LastCameraPosition1_38(Vector3_t2243707580  value)
	{
		___m_LastCameraPosition1_38 = value;
	}

	inline static int32_t get_offset_of_m_LastCameraPosition2_39() { return static_cast<int32_t>(offsetof(NcTrailTexture_t1000731200, ___m_LastCameraPosition2_39)); }
	inline Vector3_t2243707580  get_m_LastCameraPosition2_39() const { return ___m_LastCameraPosition2_39; }
	inline Vector3_t2243707580 * get_address_of_m_LastCameraPosition2_39() { return &___m_LastCameraPosition2_39; }
	inline void set_m_LastCameraPosition2_39(Vector3_t2243707580  value)
	{
		___m_LastCameraPosition2_39 = value;
	}

	inline static int32_t get_offset_of_m_bLastFrameEmit_40() { return static_cast<int32_t>(offsetof(NcTrailTexture_t1000731200, ___m_bLastFrameEmit_40)); }
	inline bool get_m_bLastFrameEmit_40() const { return ___m_bLastFrameEmit_40; }
	inline bool* get_address_of_m_bLastFrameEmit_40() { return &___m_bLastFrameEmit_40; }
	inline void set_m_bLastFrameEmit_40(bool value)
	{
		___m_bLastFrameEmit_40 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
