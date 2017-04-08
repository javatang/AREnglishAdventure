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

#include "AssemblyU2DCSharp_NcEffectBehaviour813403937.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// NcDelayActive
struct  NcDelayActive_t2627727524  : public NcEffectBehaviour_t813403937
{
public:
	// System.String NcDelayActive::NotAvailable
	String_t* ___NotAvailable_9;
	// System.Single NcDelayActive::m_fDelayTime
	float ___m_fDelayTime_10;
	// System.Boolean NcDelayActive::m_bActiveRecursively
	bool ___m_bActiveRecursively_11;
	// System.Single NcDelayActive::m_fAliveTime
	float ___m_fAliveTime_12;
	// System.Single NcDelayActive::m_fParentDelayTime
	float ___m_fParentDelayTime_13;
	// System.Boolean NcDelayActive::m_bAddedInvoke
	bool ___m_bAddedInvoke_14;
	// System.Single NcDelayActive::m_fStartedTime
	float ___m_fStartedTime_15;

public:
	inline static int32_t get_offset_of_NotAvailable_9() { return static_cast<int32_t>(offsetof(NcDelayActive_t2627727524, ___NotAvailable_9)); }
	inline String_t* get_NotAvailable_9() const { return ___NotAvailable_9; }
	inline String_t** get_address_of_NotAvailable_9() { return &___NotAvailable_9; }
	inline void set_NotAvailable_9(String_t* value)
	{
		___NotAvailable_9 = value;
		Il2CppCodeGenWriteBarrier(&___NotAvailable_9, value);
	}

	inline static int32_t get_offset_of_m_fDelayTime_10() { return static_cast<int32_t>(offsetof(NcDelayActive_t2627727524, ___m_fDelayTime_10)); }
	inline float get_m_fDelayTime_10() const { return ___m_fDelayTime_10; }
	inline float* get_address_of_m_fDelayTime_10() { return &___m_fDelayTime_10; }
	inline void set_m_fDelayTime_10(float value)
	{
		___m_fDelayTime_10 = value;
	}

	inline static int32_t get_offset_of_m_bActiveRecursively_11() { return static_cast<int32_t>(offsetof(NcDelayActive_t2627727524, ___m_bActiveRecursively_11)); }
	inline bool get_m_bActiveRecursively_11() const { return ___m_bActiveRecursively_11; }
	inline bool* get_address_of_m_bActiveRecursively_11() { return &___m_bActiveRecursively_11; }
	inline void set_m_bActiveRecursively_11(bool value)
	{
		___m_bActiveRecursively_11 = value;
	}

	inline static int32_t get_offset_of_m_fAliveTime_12() { return static_cast<int32_t>(offsetof(NcDelayActive_t2627727524, ___m_fAliveTime_12)); }
	inline float get_m_fAliveTime_12() const { return ___m_fAliveTime_12; }
	inline float* get_address_of_m_fAliveTime_12() { return &___m_fAliveTime_12; }
	inline void set_m_fAliveTime_12(float value)
	{
		___m_fAliveTime_12 = value;
	}

	inline static int32_t get_offset_of_m_fParentDelayTime_13() { return static_cast<int32_t>(offsetof(NcDelayActive_t2627727524, ___m_fParentDelayTime_13)); }
	inline float get_m_fParentDelayTime_13() const { return ___m_fParentDelayTime_13; }
	inline float* get_address_of_m_fParentDelayTime_13() { return &___m_fParentDelayTime_13; }
	inline void set_m_fParentDelayTime_13(float value)
	{
		___m_fParentDelayTime_13 = value;
	}

	inline static int32_t get_offset_of_m_bAddedInvoke_14() { return static_cast<int32_t>(offsetof(NcDelayActive_t2627727524, ___m_bAddedInvoke_14)); }
	inline bool get_m_bAddedInvoke_14() const { return ___m_bAddedInvoke_14; }
	inline bool* get_address_of_m_bAddedInvoke_14() { return &___m_bAddedInvoke_14; }
	inline void set_m_bAddedInvoke_14(bool value)
	{
		___m_bAddedInvoke_14 = value;
	}

	inline static int32_t get_offset_of_m_fStartedTime_15() { return static_cast<int32_t>(offsetof(NcDelayActive_t2627727524, ___m_fStartedTime_15)); }
	inline float get_m_fStartedTime_15() const { return ___m_fStartedTime_15; }
	inline float* get_address_of_m_fStartedTime_15() { return &___m_fStartedTime_15; }
	inline void set_m_fStartedTime_15(float value)
	{
		___m_fStartedTime_15 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
