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

// NcRepeatTimerTool
struct  NcRepeatTimerTool_t2929130883  : public NcTimerTool_t227073218
{
public:
	// System.Single NcRepeatTimerTool::m_fUpdateTime
	float ___m_fUpdateTime_10;
	// System.Single NcRepeatTimerTool::m_fIntervalTime
	float ___m_fIntervalTime_11;
	// System.Int32 NcRepeatTimerTool::m_nRepeatCount
	int32_t ___m_nRepeatCount_12;
	// System.Int32 NcRepeatTimerTool::m_nCallCount
	int32_t ___m_nCallCount_13;
	// System.Object NcRepeatTimerTool::m_ArgObject
	Il2CppObject * ___m_ArgObject_14;

public:
	inline static int32_t get_offset_of_m_fUpdateTime_10() { return static_cast<int32_t>(offsetof(NcRepeatTimerTool_t2929130883, ___m_fUpdateTime_10)); }
	inline float get_m_fUpdateTime_10() const { return ___m_fUpdateTime_10; }
	inline float* get_address_of_m_fUpdateTime_10() { return &___m_fUpdateTime_10; }
	inline void set_m_fUpdateTime_10(float value)
	{
		___m_fUpdateTime_10 = value;
	}

	inline static int32_t get_offset_of_m_fIntervalTime_11() { return static_cast<int32_t>(offsetof(NcRepeatTimerTool_t2929130883, ___m_fIntervalTime_11)); }
	inline float get_m_fIntervalTime_11() const { return ___m_fIntervalTime_11; }
	inline float* get_address_of_m_fIntervalTime_11() { return &___m_fIntervalTime_11; }
	inline void set_m_fIntervalTime_11(float value)
	{
		___m_fIntervalTime_11 = value;
	}

	inline static int32_t get_offset_of_m_nRepeatCount_12() { return static_cast<int32_t>(offsetof(NcRepeatTimerTool_t2929130883, ___m_nRepeatCount_12)); }
	inline int32_t get_m_nRepeatCount_12() const { return ___m_nRepeatCount_12; }
	inline int32_t* get_address_of_m_nRepeatCount_12() { return &___m_nRepeatCount_12; }
	inline void set_m_nRepeatCount_12(int32_t value)
	{
		___m_nRepeatCount_12 = value;
	}

	inline static int32_t get_offset_of_m_nCallCount_13() { return static_cast<int32_t>(offsetof(NcRepeatTimerTool_t2929130883, ___m_nCallCount_13)); }
	inline int32_t get_m_nCallCount_13() const { return ___m_nCallCount_13; }
	inline int32_t* get_address_of_m_nCallCount_13() { return &___m_nCallCount_13; }
	inline void set_m_nCallCount_13(int32_t value)
	{
		___m_nCallCount_13 = value;
	}

	inline static int32_t get_offset_of_m_ArgObject_14() { return static_cast<int32_t>(offsetof(NcRepeatTimerTool_t2929130883, ___m_ArgObject_14)); }
	inline Il2CppObject * get_m_ArgObject_14() const { return ___m_ArgObject_14; }
	inline Il2CppObject ** get_address_of_m_ArgObject_14() { return &___m_ArgObject_14; }
	inline void set_m_ArgObject_14(Il2CppObject * value)
	{
		___m_ArgObject_14 = value;
		Il2CppCodeGenWriteBarrier(&___m_ArgObject_14, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
