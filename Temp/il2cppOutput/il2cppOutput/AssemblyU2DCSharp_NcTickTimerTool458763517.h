#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>


#include "mscorlib_System_Object2689449295.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// NcTickTimerTool
struct  NcTickTimerTool_t458763517  : public Il2CppObject
{
public:
	// System.Int32 NcTickTimerTool::m_nStartTickCount
	int32_t ___m_nStartTickCount_0;
	// System.Int32 NcTickTimerTool::m_nCheckTickCount
	int32_t ___m_nCheckTickCount_1;

public:
	inline static int32_t get_offset_of_m_nStartTickCount_0() { return static_cast<int32_t>(offsetof(NcTickTimerTool_t458763517, ___m_nStartTickCount_0)); }
	inline int32_t get_m_nStartTickCount_0() const { return ___m_nStartTickCount_0; }
	inline int32_t* get_address_of_m_nStartTickCount_0() { return &___m_nStartTickCount_0; }
	inline void set_m_nStartTickCount_0(int32_t value)
	{
		___m_nStartTickCount_0 = value;
	}

	inline static int32_t get_offset_of_m_nCheckTickCount_1() { return static_cast<int32_t>(offsetof(NcTickTimerTool_t458763517, ___m_nCheckTickCount_1)); }
	inline int32_t get_m_nCheckTickCount_1() const { return ___m_nCheckTickCount_1; }
	inline int32_t* get_address_of_m_nCheckTickCount_1() { return &___m_nCheckTickCount_1; }
	inline void set_m_nCheckTickCount_1(int32_t value)
	{
		___m_nCheckTickCount_1 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
