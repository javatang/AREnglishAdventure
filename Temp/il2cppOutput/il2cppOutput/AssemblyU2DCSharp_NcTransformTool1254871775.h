#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>


#include "mscorlib_System_Object2689449295.h"
#include "UnityEngine_UnityEngine_Vector32243707580.h"
#include "UnityEngine_UnityEngine_Quaternion4030073918.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// NcTransformTool
struct  NcTransformTool_t1254871775  : public Il2CppObject
{
public:
	// UnityEngine.Vector3 NcTransformTool::m_vecPos
	Vector3_t2243707580  ___m_vecPos_0;
	// UnityEngine.Quaternion NcTransformTool::m_vecRot
	Quaternion_t4030073918  ___m_vecRot_1;
	// UnityEngine.Vector3 NcTransformTool::m_vecRotHint
	Vector3_t2243707580  ___m_vecRotHint_2;
	// UnityEngine.Vector3 NcTransformTool::m_vecScale
	Vector3_t2243707580  ___m_vecScale_3;

public:
	inline static int32_t get_offset_of_m_vecPos_0() { return static_cast<int32_t>(offsetof(NcTransformTool_t1254871775, ___m_vecPos_0)); }
	inline Vector3_t2243707580  get_m_vecPos_0() const { return ___m_vecPos_0; }
	inline Vector3_t2243707580 * get_address_of_m_vecPos_0() { return &___m_vecPos_0; }
	inline void set_m_vecPos_0(Vector3_t2243707580  value)
	{
		___m_vecPos_0 = value;
	}

	inline static int32_t get_offset_of_m_vecRot_1() { return static_cast<int32_t>(offsetof(NcTransformTool_t1254871775, ___m_vecRot_1)); }
	inline Quaternion_t4030073918  get_m_vecRot_1() const { return ___m_vecRot_1; }
	inline Quaternion_t4030073918 * get_address_of_m_vecRot_1() { return &___m_vecRot_1; }
	inline void set_m_vecRot_1(Quaternion_t4030073918  value)
	{
		___m_vecRot_1 = value;
	}

	inline static int32_t get_offset_of_m_vecRotHint_2() { return static_cast<int32_t>(offsetof(NcTransformTool_t1254871775, ___m_vecRotHint_2)); }
	inline Vector3_t2243707580  get_m_vecRotHint_2() const { return ___m_vecRotHint_2; }
	inline Vector3_t2243707580 * get_address_of_m_vecRotHint_2() { return &___m_vecRotHint_2; }
	inline void set_m_vecRotHint_2(Vector3_t2243707580  value)
	{
		___m_vecRotHint_2 = value;
	}

	inline static int32_t get_offset_of_m_vecScale_3() { return static_cast<int32_t>(offsetof(NcTransformTool_t1254871775, ___m_vecScale_3)); }
	inline Vector3_t2243707580  get_m_vecScale_3() const { return ___m_vecScale_3; }
	inline Vector3_t2243707580 * get_address_of_m_vecScale_3() { return &___m_vecScale_3; }
	inline void set_m_vecScale_3(Vector3_t2243707580  value)
	{
		___m_vecScale_3 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
