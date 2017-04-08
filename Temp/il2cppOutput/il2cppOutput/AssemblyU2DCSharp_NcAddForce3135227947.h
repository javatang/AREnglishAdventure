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
#include "UnityEngine_UnityEngine_ForceMode1856518252.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// NcAddForce
struct  NcAddForce_t3135227947  : public NcEffectBehaviour_t813403937
{
public:
	// UnityEngine.Vector3 NcAddForce::m_AddForce
	Vector3_t2243707580  ___m_AddForce_9;
	// UnityEngine.Vector3 NcAddForce::m_RandomRange
	Vector3_t2243707580  ___m_RandomRange_10;
	// UnityEngine.ForceMode NcAddForce::m_ForceMode
	int32_t ___m_ForceMode_11;

public:
	inline static int32_t get_offset_of_m_AddForce_9() { return static_cast<int32_t>(offsetof(NcAddForce_t3135227947, ___m_AddForce_9)); }
	inline Vector3_t2243707580  get_m_AddForce_9() const { return ___m_AddForce_9; }
	inline Vector3_t2243707580 * get_address_of_m_AddForce_9() { return &___m_AddForce_9; }
	inline void set_m_AddForce_9(Vector3_t2243707580  value)
	{
		___m_AddForce_9 = value;
	}

	inline static int32_t get_offset_of_m_RandomRange_10() { return static_cast<int32_t>(offsetof(NcAddForce_t3135227947, ___m_RandomRange_10)); }
	inline Vector3_t2243707580  get_m_RandomRange_10() const { return ___m_RandomRange_10; }
	inline Vector3_t2243707580 * get_address_of_m_RandomRange_10() { return &___m_RandomRange_10; }
	inline void set_m_RandomRange_10(Vector3_t2243707580  value)
	{
		___m_RandomRange_10 = value;
	}

	inline static int32_t get_offset_of_m_ForceMode_11() { return static_cast<int32_t>(offsetof(NcAddForce_t3135227947, ___m_ForceMode_11)); }
	inline int32_t get_m_ForceMode_11() const { return ___m_ForceMode_11; }
	inline int32_t* get_address_of_m_ForceMode_11() { return &___m_ForceMode_11; }
	inline void set_m_ForceMode_11(int32_t value)
	{
		___m_ForceMode_11 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
