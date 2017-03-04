#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// UnityEngine.AnimationCurve
struct AnimationCurve_t3306541151;
// UnityEngine.Component
struct Component_t3819376471;

#include "UnityEngine_UnityEngine_MonoBehaviour1158329972.h"
#include "AssemblyU2DCSharp_FxmTestSimulate_MODE_TYPE1890609512.h"
#include "AssemblyU2DCSharp_FxmTestControls_AXIS10529083.h"
#include "UnityEngine_UnityEngine_Vector32243707580.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// FxmTestSimulate
struct  FxmTestSimulate_t3728900157  : public MonoBehaviour_t1158329972
{
public:
	// FxmTestSimulate/MODE_TYPE FxmTestSimulate::m_Mode
	int32_t ___m_Mode_2;
	// FxmTestControls/AXIS FxmTestSimulate::m_nAxis
	int32_t ___m_nAxis_3;
	// System.Single FxmTestSimulate::m_fStartTime
	float ___m_fStartTime_4;
	// UnityEngine.Vector3 FxmTestSimulate::m_StartPos
	Vector3_t2243707580  ___m_StartPos_5;
	// UnityEngine.Vector3 FxmTestSimulate::m_EndPos
	Vector3_t2243707580  ___m_EndPos_6;
	// System.Single FxmTestSimulate::m_fSpeed
	float ___m_fSpeed_7;
	// System.Boolean FxmTestSimulate::m_bRotFront
	bool ___m_bRotFront_8;
	// System.Single FxmTestSimulate::m_fDist
	float ___m_fDist_9;
	// System.Single FxmTestSimulate::m_fRadius
	float ___m_fRadius_10;
	// System.Single FxmTestSimulate::m_fArcLenRate
	float ___m_fArcLenRate_11;
	// UnityEngine.AnimationCurve FxmTestSimulate::m_Curve
	AnimationCurve_t3306541151 * ___m_Curve_12;
	// UnityEngine.Component FxmTestSimulate::m_FXMakerControls
	Component_t3819376471 * ___m_FXMakerControls_13;
	// System.Int32 FxmTestSimulate::m_nMultiShotIndex
	int32_t ___m_nMultiShotIndex_14;
	// System.Int32 FxmTestSimulate::m_nMultiShotCount
	int32_t ___m_nMultiShotCount_15;
	// System.Int32 FxmTestSimulate::m_nCircleCount
	int32_t ___m_nCircleCount_16;
	// UnityEngine.Vector3 FxmTestSimulate::m_PrevPosition
	Vector3_t2243707580  ___m_PrevPosition_17;

public:
	inline static int32_t get_offset_of_m_Mode_2() { return static_cast<int32_t>(offsetof(FxmTestSimulate_t3728900157, ___m_Mode_2)); }
	inline int32_t get_m_Mode_2() const { return ___m_Mode_2; }
	inline int32_t* get_address_of_m_Mode_2() { return &___m_Mode_2; }
	inline void set_m_Mode_2(int32_t value)
	{
		___m_Mode_2 = value;
	}

	inline static int32_t get_offset_of_m_nAxis_3() { return static_cast<int32_t>(offsetof(FxmTestSimulate_t3728900157, ___m_nAxis_3)); }
	inline int32_t get_m_nAxis_3() const { return ___m_nAxis_3; }
	inline int32_t* get_address_of_m_nAxis_3() { return &___m_nAxis_3; }
	inline void set_m_nAxis_3(int32_t value)
	{
		___m_nAxis_3 = value;
	}

	inline static int32_t get_offset_of_m_fStartTime_4() { return static_cast<int32_t>(offsetof(FxmTestSimulate_t3728900157, ___m_fStartTime_4)); }
	inline float get_m_fStartTime_4() const { return ___m_fStartTime_4; }
	inline float* get_address_of_m_fStartTime_4() { return &___m_fStartTime_4; }
	inline void set_m_fStartTime_4(float value)
	{
		___m_fStartTime_4 = value;
	}

	inline static int32_t get_offset_of_m_StartPos_5() { return static_cast<int32_t>(offsetof(FxmTestSimulate_t3728900157, ___m_StartPos_5)); }
	inline Vector3_t2243707580  get_m_StartPos_5() const { return ___m_StartPos_5; }
	inline Vector3_t2243707580 * get_address_of_m_StartPos_5() { return &___m_StartPos_5; }
	inline void set_m_StartPos_5(Vector3_t2243707580  value)
	{
		___m_StartPos_5 = value;
	}

	inline static int32_t get_offset_of_m_EndPos_6() { return static_cast<int32_t>(offsetof(FxmTestSimulate_t3728900157, ___m_EndPos_6)); }
	inline Vector3_t2243707580  get_m_EndPos_6() const { return ___m_EndPos_6; }
	inline Vector3_t2243707580 * get_address_of_m_EndPos_6() { return &___m_EndPos_6; }
	inline void set_m_EndPos_6(Vector3_t2243707580  value)
	{
		___m_EndPos_6 = value;
	}

	inline static int32_t get_offset_of_m_fSpeed_7() { return static_cast<int32_t>(offsetof(FxmTestSimulate_t3728900157, ___m_fSpeed_7)); }
	inline float get_m_fSpeed_7() const { return ___m_fSpeed_7; }
	inline float* get_address_of_m_fSpeed_7() { return &___m_fSpeed_7; }
	inline void set_m_fSpeed_7(float value)
	{
		___m_fSpeed_7 = value;
	}

	inline static int32_t get_offset_of_m_bRotFront_8() { return static_cast<int32_t>(offsetof(FxmTestSimulate_t3728900157, ___m_bRotFront_8)); }
	inline bool get_m_bRotFront_8() const { return ___m_bRotFront_8; }
	inline bool* get_address_of_m_bRotFront_8() { return &___m_bRotFront_8; }
	inline void set_m_bRotFront_8(bool value)
	{
		___m_bRotFront_8 = value;
	}

	inline static int32_t get_offset_of_m_fDist_9() { return static_cast<int32_t>(offsetof(FxmTestSimulate_t3728900157, ___m_fDist_9)); }
	inline float get_m_fDist_9() const { return ___m_fDist_9; }
	inline float* get_address_of_m_fDist_9() { return &___m_fDist_9; }
	inline void set_m_fDist_9(float value)
	{
		___m_fDist_9 = value;
	}

	inline static int32_t get_offset_of_m_fRadius_10() { return static_cast<int32_t>(offsetof(FxmTestSimulate_t3728900157, ___m_fRadius_10)); }
	inline float get_m_fRadius_10() const { return ___m_fRadius_10; }
	inline float* get_address_of_m_fRadius_10() { return &___m_fRadius_10; }
	inline void set_m_fRadius_10(float value)
	{
		___m_fRadius_10 = value;
	}

	inline static int32_t get_offset_of_m_fArcLenRate_11() { return static_cast<int32_t>(offsetof(FxmTestSimulate_t3728900157, ___m_fArcLenRate_11)); }
	inline float get_m_fArcLenRate_11() const { return ___m_fArcLenRate_11; }
	inline float* get_address_of_m_fArcLenRate_11() { return &___m_fArcLenRate_11; }
	inline void set_m_fArcLenRate_11(float value)
	{
		___m_fArcLenRate_11 = value;
	}

	inline static int32_t get_offset_of_m_Curve_12() { return static_cast<int32_t>(offsetof(FxmTestSimulate_t3728900157, ___m_Curve_12)); }
	inline AnimationCurve_t3306541151 * get_m_Curve_12() const { return ___m_Curve_12; }
	inline AnimationCurve_t3306541151 ** get_address_of_m_Curve_12() { return &___m_Curve_12; }
	inline void set_m_Curve_12(AnimationCurve_t3306541151 * value)
	{
		___m_Curve_12 = value;
		Il2CppCodeGenWriteBarrier(&___m_Curve_12, value);
	}

	inline static int32_t get_offset_of_m_FXMakerControls_13() { return static_cast<int32_t>(offsetof(FxmTestSimulate_t3728900157, ___m_FXMakerControls_13)); }
	inline Component_t3819376471 * get_m_FXMakerControls_13() const { return ___m_FXMakerControls_13; }
	inline Component_t3819376471 ** get_address_of_m_FXMakerControls_13() { return &___m_FXMakerControls_13; }
	inline void set_m_FXMakerControls_13(Component_t3819376471 * value)
	{
		___m_FXMakerControls_13 = value;
		Il2CppCodeGenWriteBarrier(&___m_FXMakerControls_13, value);
	}

	inline static int32_t get_offset_of_m_nMultiShotIndex_14() { return static_cast<int32_t>(offsetof(FxmTestSimulate_t3728900157, ___m_nMultiShotIndex_14)); }
	inline int32_t get_m_nMultiShotIndex_14() const { return ___m_nMultiShotIndex_14; }
	inline int32_t* get_address_of_m_nMultiShotIndex_14() { return &___m_nMultiShotIndex_14; }
	inline void set_m_nMultiShotIndex_14(int32_t value)
	{
		___m_nMultiShotIndex_14 = value;
	}

	inline static int32_t get_offset_of_m_nMultiShotCount_15() { return static_cast<int32_t>(offsetof(FxmTestSimulate_t3728900157, ___m_nMultiShotCount_15)); }
	inline int32_t get_m_nMultiShotCount_15() const { return ___m_nMultiShotCount_15; }
	inline int32_t* get_address_of_m_nMultiShotCount_15() { return &___m_nMultiShotCount_15; }
	inline void set_m_nMultiShotCount_15(int32_t value)
	{
		___m_nMultiShotCount_15 = value;
	}

	inline static int32_t get_offset_of_m_nCircleCount_16() { return static_cast<int32_t>(offsetof(FxmTestSimulate_t3728900157, ___m_nCircleCount_16)); }
	inline int32_t get_m_nCircleCount_16() const { return ___m_nCircleCount_16; }
	inline int32_t* get_address_of_m_nCircleCount_16() { return &___m_nCircleCount_16; }
	inline void set_m_nCircleCount_16(int32_t value)
	{
		___m_nCircleCount_16 = value;
	}

	inline static int32_t get_offset_of_m_PrevPosition_17() { return static_cast<int32_t>(offsetof(FxmTestSimulate_t3728900157, ___m_PrevPosition_17)); }
	inline Vector3_t2243707580  get_m_PrevPosition_17() const { return ___m_PrevPosition_17; }
	inline Vector3_t2243707580 * get_address_of_m_PrevPosition_17() { return &___m_PrevPosition_17; }
	inline void set_m_PrevPosition_17(Vector3_t2243707580  value)
	{
		___m_PrevPosition_17 = value;
	}
};

struct FxmTestSimulate_t3728900157_StaticFields
{
public:
	// System.Int32 FxmTestSimulate::m_nMultiShotCreate
	int32_t ___m_nMultiShotCreate_18;

public:
	inline static int32_t get_offset_of_m_nMultiShotCreate_18() { return static_cast<int32_t>(offsetof(FxmTestSimulate_t3728900157_StaticFields, ___m_nMultiShotCreate_18)); }
	inline int32_t get_m_nMultiShotCreate_18() const { return ___m_nMultiShotCreate_18; }
	inline int32_t* get_address_of_m_nMultiShotCreate_18() { return &___m_nMultiShotCreate_18; }
	inline void set_m_nMultiShotCreate_18(int32_t value)
	{
		___m_nMultiShotCreate_18 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
