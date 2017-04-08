#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>


#include "AssemblyU2DCSharp_NcEffectBehaviour813403937.h"
#include "UnityEngine_UnityEngine_Vector32243707580.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// NcRotation
struct  NcRotation_t1898986315  : public NcEffectBehaviour_t813403937
{
public:
	// System.Boolean NcRotation::m_bWorldSpace
	bool ___m_bWorldSpace_9;
	// UnityEngine.Vector3 NcRotation::m_vRotationValue
	Vector3_t2243707580  ___m_vRotationValue_10;

public:
	inline static int32_t get_offset_of_m_bWorldSpace_9() { return static_cast<int32_t>(offsetof(NcRotation_t1898986315, ___m_bWorldSpace_9)); }
	inline bool get_m_bWorldSpace_9() const { return ___m_bWorldSpace_9; }
	inline bool* get_address_of_m_bWorldSpace_9() { return &___m_bWorldSpace_9; }
	inline void set_m_bWorldSpace_9(bool value)
	{
		___m_bWorldSpace_9 = value;
	}

	inline static int32_t get_offset_of_m_vRotationValue_10() { return static_cast<int32_t>(offsetof(NcRotation_t1898986315, ___m_vRotationValue_10)); }
	inline Vector3_t2243707580  get_m_vRotationValue_10() const { return ___m_vRotationValue_10; }
	inline Vector3_t2243707580 * get_address_of_m_vRotationValue_10() { return &___m_vRotationValue_10; }
	inline void set_m_vRotationValue_10(Vector3_t2243707580  value)
	{
		___m_vRotationValue_10 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
