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
// UnityEngine.AnimationCurve
struct AnimationCurve_t3306541151;
// System.String[]
struct StringU5BU5D_t1642385972;
// System.Boolean[]
struct BooleanU5BU5D_t3568034315;
// UnityEngine.Vector4[]
struct Vector4U5BU5D_t1658499504;

#include "mscorlib_System_Object2689449295.h"
#include "AssemblyU2DCSharp_NcCurveAnimation_NcInfoCurve_APPLY71545597.h"
#include "UnityEngine_UnityEngine_Vector42243707581.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// NcCurveAnimation/NcInfoCurve
struct  NcInfoCurve_t575754313  : public Il2CppObject
{
public:
	// System.Boolean NcCurveAnimation/NcInfoCurve::m_bEnabled
	bool ___m_bEnabled_1;
	// System.String NcCurveAnimation/NcInfoCurve::m_CurveName
	String_t* ___m_CurveName_2;
	// UnityEngine.AnimationCurve NcCurveAnimation/NcInfoCurve::m_AniCurve
	AnimationCurve_t3306541151 * ___m_AniCurve_3;
	// NcCurveAnimation/NcInfoCurve/APPLY_TYPE NcCurveAnimation/NcInfoCurve::m_ApplyType
	int32_t ___m_ApplyType_5;
	// System.Boolean[] NcCurveAnimation/NcInfoCurve::m_bApplyOption
	BooleanU5BU5D_t3568034315* ___m_bApplyOption_6;
	// System.Boolean NcCurveAnimation/NcInfoCurve::m_bRecursively
	bool ___m_bRecursively_7;
	// System.Single NcCurveAnimation/NcInfoCurve::m_fValueScale
	float ___m_fValueScale_8;
	// UnityEngine.Vector4 NcCurveAnimation/NcInfoCurve::m_FromColor
	Vector4_t2243707581  ___m_FromColor_9;
	// UnityEngine.Vector4 NcCurveAnimation/NcInfoCurve::m_ToColor
	Vector4_t2243707581  ___m_ToColor_10;
	// System.Int32 NcCurveAnimation/NcInfoCurve::m_nTag
	int32_t ___m_nTag_11;
	// System.Int32 NcCurveAnimation/NcInfoCurve::m_nSortGroup
	int32_t ___m_nSortGroup_12;
	// UnityEngine.Vector4 NcCurveAnimation/NcInfoCurve::m_OriginalValue
	Vector4_t2243707581  ___m_OriginalValue_13;
	// UnityEngine.Vector4 NcCurveAnimation/NcInfoCurve::m_BeforeValue
	Vector4_t2243707581  ___m_BeforeValue_14;
	// UnityEngine.Vector4[] NcCurveAnimation/NcInfoCurve::m_ChildOriginalColorValues
	Vector4U5BU5D_t1658499504* ___m_ChildOriginalColorValues_15;
	// UnityEngine.Vector4[] NcCurveAnimation/NcInfoCurve::m_ChildBeforeColorValues
	Vector4U5BU5D_t1658499504* ___m_ChildBeforeColorValues_16;

public:
	inline static int32_t get_offset_of_m_bEnabled_1() { return static_cast<int32_t>(offsetof(NcInfoCurve_t575754313, ___m_bEnabled_1)); }
	inline bool get_m_bEnabled_1() const { return ___m_bEnabled_1; }
	inline bool* get_address_of_m_bEnabled_1() { return &___m_bEnabled_1; }
	inline void set_m_bEnabled_1(bool value)
	{
		___m_bEnabled_1 = value;
	}

	inline static int32_t get_offset_of_m_CurveName_2() { return static_cast<int32_t>(offsetof(NcInfoCurve_t575754313, ___m_CurveName_2)); }
	inline String_t* get_m_CurveName_2() const { return ___m_CurveName_2; }
	inline String_t** get_address_of_m_CurveName_2() { return &___m_CurveName_2; }
	inline void set_m_CurveName_2(String_t* value)
	{
		___m_CurveName_2 = value;
		Il2CppCodeGenWriteBarrier(&___m_CurveName_2, value);
	}

	inline static int32_t get_offset_of_m_AniCurve_3() { return static_cast<int32_t>(offsetof(NcInfoCurve_t575754313, ___m_AniCurve_3)); }
	inline AnimationCurve_t3306541151 * get_m_AniCurve_3() const { return ___m_AniCurve_3; }
	inline AnimationCurve_t3306541151 ** get_address_of_m_AniCurve_3() { return &___m_AniCurve_3; }
	inline void set_m_AniCurve_3(AnimationCurve_t3306541151 * value)
	{
		___m_AniCurve_3 = value;
		Il2CppCodeGenWriteBarrier(&___m_AniCurve_3, value);
	}

	inline static int32_t get_offset_of_m_ApplyType_5() { return static_cast<int32_t>(offsetof(NcInfoCurve_t575754313, ___m_ApplyType_5)); }
	inline int32_t get_m_ApplyType_5() const { return ___m_ApplyType_5; }
	inline int32_t* get_address_of_m_ApplyType_5() { return &___m_ApplyType_5; }
	inline void set_m_ApplyType_5(int32_t value)
	{
		___m_ApplyType_5 = value;
	}

	inline static int32_t get_offset_of_m_bApplyOption_6() { return static_cast<int32_t>(offsetof(NcInfoCurve_t575754313, ___m_bApplyOption_6)); }
	inline BooleanU5BU5D_t3568034315* get_m_bApplyOption_6() const { return ___m_bApplyOption_6; }
	inline BooleanU5BU5D_t3568034315** get_address_of_m_bApplyOption_6() { return &___m_bApplyOption_6; }
	inline void set_m_bApplyOption_6(BooleanU5BU5D_t3568034315* value)
	{
		___m_bApplyOption_6 = value;
		Il2CppCodeGenWriteBarrier(&___m_bApplyOption_6, value);
	}

	inline static int32_t get_offset_of_m_bRecursively_7() { return static_cast<int32_t>(offsetof(NcInfoCurve_t575754313, ___m_bRecursively_7)); }
	inline bool get_m_bRecursively_7() const { return ___m_bRecursively_7; }
	inline bool* get_address_of_m_bRecursively_7() { return &___m_bRecursively_7; }
	inline void set_m_bRecursively_7(bool value)
	{
		___m_bRecursively_7 = value;
	}

	inline static int32_t get_offset_of_m_fValueScale_8() { return static_cast<int32_t>(offsetof(NcInfoCurve_t575754313, ___m_fValueScale_8)); }
	inline float get_m_fValueScale_8() const { return ___m_fValueScale_8; }
	inline float* get_address_of_m_fValueScale_8() { return &___m_fValueScale_8; }
	inline void set_m_fValueScale_8(float value)
	{
		___m_fValueScale_8 = value;
	}

	inline static int32_t get_offset_of_m_FromColor_9() { return static_cast<int32_t>(offsetof(NcInfoCurve_t575754313, ___m_FromColor_9)); }
	inline Vector4_t2243707581  get_m_FromColor_9() const { return ___m_FromColor_9; }
	inline Vector4_t2243707581 * get_address_of_m_FromColor_9() { return &___m_FromColor_9; }
	inline void set_m_FromColor_9(Vector4_t2243707581  value)
	{
		___m_FromColor_9 = value;
	}

	inline static int32_t get_offset_of_m_ToColor_10() { return static_cast<int32_t>(offsetof(NcInfoCurve_t575754313, ___m_ToColor_10)); }
	inline Vector4_t2243707581  get_m_ToColor_10() const { return ___m_ToColor_10; }
	inline Vector4_t2243707581 * get_address_of_m_ToColor_10() { return &___m_ToColor_10; }
	inline void set_m_ToColor_10(Vector4_t2243707581  value)
	{
		___m_ToColor_10 = value;
	}

	inline static int32_t get_offset_of_m_nTag_11() { return static_cast<int32_t>(offsetof(NcInfoCurve_t575754313, ___m_nTag_11)); }
	inline int32_t get_m_nTag_11() const { return ___m_nTag_11; }
	inline int32_t* get_address_of_m_nTag_11() { return &___m_nTag_11; }
	inline void set_m_nTag_11(int32_t value)
	{
		___m_nTag_11 = value;
	}

	inline static int32_t get_offset_of_m_nSortGroup_12() { return static_cast<int32_t>(offsetof(NcInfoCurve_t575754313, ___m_nSortGroup_12)); }
	inline int32_t get_m_nSortGroup_12() const { return ___m_nSortGroup_12; }
	inline int32_t* get_address_of_m_nSortGroup_12() { return &___m_nSortGroup_12; }
	inline void set_m_nSortGroup_12(int32_t value)
	{
		___m_nSortGroup_12 = value;
	}

	inline static int32_t get_offset_of_m_OriginalValue_13() { return static_cast<int32_t>(offsetof(NcInfoCurve_t575754313, ___m_OriginalValue_13)); }
	inline Vector4_t2243707581  get_m_OriginalValue_13() const { return ___m_OriginalValue_13; }
	inline Vector4_t2243707581 * get_address_of_m_OriginalValue_13() { return &___m_OriginalValue_13; }
	inline void set_m_OriginalValue_13(Vector4_t2243707581  value)
	{
		___m_OriginalValue_13 = value;
	}

	inline static int32_t get_offset_of_m_BeforeValue_14() { return static_cast<int32_t>(offsetof(NcInfoCurve_t575754313, ___m_BeforeValue_14)); }
	inline Vector4_t2243707581  get_m_BeforeValue_14() const { return ___m_BeforeValue_14; }
	inline Vector4_t2243707581 * get_address_of_m_BeforeValue_14() { return &___m_BeforeValue_14; }
	inline void set_m_BeforeValue_14(Vector4_t2243707581  value)
	{
		___m_BeforeValue_14 = value;
	}

	inline static int32_t get_offset_of_m_ChildOriginalColorValues_15() { return static_cast<int32_t>(offsetof(NcInfoCurve_t575754313, ___m_ChildOriginalColorValues_15)); }
	inline Vector4U5BU5D_t1658499504* get_m_ChildOriginalColorValues_15() const { return ___m_ChildOriginalColorValues_15; }
	inline Vector4U5BU5D_t1658499504** get_address_of_m_ChildOriginalColorValues_15() { return &___m_ChildOriginalColorValues_15; }
	inline void set_m_ChildOriginalColorValues_15(Vector4U5BU5D_t1658499504* value)
	{
		___m_ChildOriginalColorValues_15 = value;
		Il2CppCodeGenWriteBarrier(&___m_ChildOriginalColorValues_15, value);
	}

	inline static int32_t get_offset_of_m_ChildBeforeColorValues_16() { return static_cast<int32_t>(offsetof(NcInfoCurve_t575754313, ___m_ChildBeforeColorValues_16)); }
	inline Vector4U5BU5D_t1658499504* get_m_ChildBeforeColorValues_16() const { return ___m_ChildBeforeColorValues_16; }
	inline Vector4U5BU5D_t1658499504** get_address_of_m_ChildBeforeColorValues_16() { return &___m_ChildBeforeColorValues_16; }
	inline void set_m_ChildBeforeColorValues_16(Vector4U5BU5D_t1658499504* value)
	{
		___m_ChildBeforeColorValues_16 = value;
		Il2CppCodeGenWriteBarrier(&___m_ChildBeforeColorValues_16, value);
	}
};

struct NcInfoCurve_t575754313_StaticFields
{
public:
	// System.String[] NcCurveAnimation/NcInfoCurve::m_TypeName
	StringU5BU5D_t1642385972* ___m_TypeName_4;

public:
	inline static int32_t get_offset_of_m_TypeName_4() { return static_cast<int32_t>(offsetof(NcInfoCurve_t575754313_StaticFields, ___m_TypeName_4)); }
	inline StringU5BU5D_t1642385972* get_m_TypeName_4() const { return ___m_TypeName_4; }
	inline StringU5BU5D_t1642385972** get_address_of_m_TypeName_4() { return &___m_TypeName_4; }
	inline void set_m_TypeName_4(StringU5BU5D_t1642385972* value)
	{
		___m_TypeName_4 = value;
		Il2CppCodeGenWriteBarrier(&___m_TypeName_4, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
