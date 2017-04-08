#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// System.Object
struct Il2CppObject;

#include "AssemblyU2DCSharp_NcTimerTool227073218.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// NcRandomTimerTool
struct  NcRandomTimerTool_t3836186327  : public NcTimerTool_t227073218
{
public:
	// System.Single NcRandomTimerTool::m_fRandomTime
	float ___m_fRandomTime_10;
	// System.Single NcRandomTimerTool::m_fUpdateTime
	float ___m_fUpdateTime_11;
	// System.Single NcRandomTimerTool::m_fMinIntervalTime
	float ___m_fMinIntervalTime_12;
	// System.Int32 NcRandomTimerTool::m_nRepeatCount
	int32_t ___m_nRepeatCount_13;
	// System.Int32 NcRandomTimerTool::m_nCallCount
	int32_t ___m_nCallCount_14;
	// System.Object NcRandomTimerTool::m_ArgObject
	Il2CppObject * ___m_ArgObject_15;

public:
	inline static int32_t get_offset_of_m_fRandomTime_10() { return static_cast<int32_t>(offsetof(NcRandomTimerTool_t3836186327, ___m_fRandomTime_10)); }
	inline float get_m_fRandomTime_10() const { return ___m_fRandomTime_10; }
	inline float* get_address_of_m_fRandomTime_10() { return &___m_fRandomTime_10; }
	inline void set_m_fRandomTime_10(float value)
	{
		___m_fRandomTime_10 = value;
	}

	inline static int32_t get_offset_of_m_fUpdateTime_11() { return static_cast<int32_t>(offsetof(NcRandomTimerTool_t3836186327, ___m_fUpdateTime_11)); }
	inline float get_m_fUpdateTime_11() const { return ___m_fUpdateTime_11; }
	inline float* get_address_of_m_fUpdateTime_11() { return &___m_fUpdateTime_11; }
	inline void set_m_fUpdateTime_11(float value)
	{
		___m_fUpdateTime_11 = value;
	}

	inline static int32_t get_offset_of_m_fMinIntervalTime_12() { return static_cast<int32_t>(offsetof(NcRandomTimerTool_t3836186327, ___m_fMinIntervalTime_12)); }
	inline float get_m_fMinIntervalTime_12() const { return ___m_fMinIntervalTime_12; }
	inline float* get_address_of_m_fMinIntervalTime_12() { return &___m_fMinIntervalTime_12; }
	inline void set_m_fMinIntervalTime_12(float value)
	{
		___m_fMinIntervalTime_12 = value;
	}

	inline static int32_t get_offset_of_m_nRepeatCount_13() { return static_cast<int32_t>(offsetof(NcRandomTimerTool_t3836186327, ___m_nRepeatCount_13)); }
	inline int32_t get_m_nRepeatCount_13() const { return ___m_nRepeatCount_13; }
	inline int32_t* get_address_of_m_nRepeatCount_13() { return &___m_nRepeatCount_13; }
	inline void set_m_nRepeatCount_13(int32_t value)
	{
		___m_nRepeatCount_13 = value;
	}

	inline static int32_t get_offset_of_m_nCallCount_14() { return static_cast<int32_t>(offsetof(NcRandomTimerTool_t3836186327, ___m_nCallCount_14)); }
	inline int32_t get_m_nCallCount_14() const { return ___m_nCallCount_14; }
	inline int32_t* get_address_of_m_nCallCount_14() { return &___m_nCallCount_14; }
	inline void set_m_nCallCount_14(int32_t value)
	{
		___m_nCallCount_14 = value;
	}

	inline static int32_t get_offset_of_m_ArgObject_15() { return static_cast<int32_t>(offsetof(NcRandomTimerTool_t3836186327, ___m_ArgObject_15)); }
	inline Il2CppObject * get_m_ArgObject_15() const { return ___m_ArgObject_15; }
	inline Il2CppObject ** get_address_of_m_ArgObject_15() { return &___m_ArgObject_15; }
	inline void set_m_ArgObject_15(Il2CppObject * value)
	{
		___m_ArgObject_15 = value;
		Il2CppCodeGenWriteBarrier(&___m_ArgObject_15, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
