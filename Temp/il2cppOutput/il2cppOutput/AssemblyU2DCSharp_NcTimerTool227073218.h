#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// System.Single[]
struct SingleU5BU5D_t577127397;

#include "mscorlib_System_Object2689449295.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// NcTimerTool
struct  NcTimerTool_t227073218  : public Il2CppObject
{
public:
	// System.Boolean NcTimerTool::m_bEnable
	bool ___m_bEnable_0;
	// System.Single NcTimerTool::m_fLastEngineTime
	float ___m_fLastEngineTime_1;
	// System.Single NcTimerTool::m_fCurrentTime
	float ___m_fCurrentTime_2;
	// System.Single NcTimerTool::m_fLastTime
	float ___m_fLastTime_3;
	// System.Single NcTimerTool::m_fTimeScale
	float ___m_fTimeScale_4;
	// System.Int32 NcTimerTool::m_nSmoothCount
	int32_t ___m_nSmoothCount_5;
	// System.Int32 NcTimerTool::m_nSmoothIndex
	int32_t ___m_nSmoothIndex_6;
	// System.Single NcTimerTool::m_fSmoothRate
	float ___m_fSmoothRate_7;
	// System.Single[] NcTimerTool::m_fSmoothTimes
	SingleU5BU5D_t577127397* ___m_fSmoothTimes_8;
	// System.Single NcTimerTool::m_fLastSmoothDeltaTime
	float ___m_fLastSmoothDeltaTime_9;

public:
	inline static int32_t get_offset_of_m_bEnable_0() { return static_cast<int32_t>(offsetof(NcTimerTool_t227073218, ___m_bEnable_0)); }
	inline bool get_m_bEnable_0() const { return ___m_bEnable_0; }
	inline bool* get_address_of_m_bEnable_0() { return &___m_bEnable_0; }
	inline void set_m_bEnable_0(bool value)
	{
		___m_bEnable_0 = value;
	}

	inline static int32_t get_offset_of_m_fLastEngineTime_1() { return static_cast<int32_t>(offsetof(NcTimerTool_t227073218, ___m_fLastEngineTime_1)); }
	inline float get_m_fLastEngineTime_1() const { return ___m_fLastEngineTime_1; }
	inline float* get_address_of_m_fLastEngineTime_1() { return &___m_fLastEngineTime_1; }
	inline void set_m_fLastEngineTime_1(float value)
	{
		___m_fLastEngineTime_1 = value;
	}

	inline static int32_t get_offset_of_m_fCurrentTime_2() { return static_cast<int32_t>(offsetof(NcTimerTool_t227073218, ___m_fCurrentTime_2)); }
	inline float get_m_fCurrentTime_2() const { return ___m_fCurrentTime_2; }
	inline float* get_address_of_m_fCurrentTime_2() { return &___m_fCurrentTime_2; }
	inline void set_m_fCurrentTime_2(float value)
	{
		___m_fCurrentTime_2 = value;
	}

	inline static int32_t get_offset_of_m_fLastTime_3() { return static_cast<int32_t>(offsetof(NcTimerTool_t227073218, ___m_fLastTime_3)); }
	inline float get_m_fLastTime_3() const { return ___m_fLastTime_3; }
	inline float* get_address_of_m_fLastTime_3() { return &___m_fLastTime_3; }
	inline void set_m_fLastTime_3(float value)
	{
		___m_fLastTime_3 = value;
	}

	inline static int32_t get_offset_of_m_fTimeScale_4() { return static_cast<int32_t>(offsetof(NcTimerTool_t227073218, ___m_fTimeScale_4)); }
	inline float get_m_fTimeScale_4() const { return ___m_fTimeScale_4; }
	inline float* get_address_of_m_fTimeScale_4() { return &___m_fTimeScale_4; }
	inline void set_m_fTimeScale_4(float value)
	{
		___m_fTimeScale_4 = value;
	}

	inline static int32_t get_offset_of_m_nSmoothCount_5() { return static_cast<int32_t>(offsetof(NcTimerTool_t227073218, ___m_nSmoothCount_5)); }
	inline int32_t get_m_nSmoothCount_5() const { return ___m_nSmoothCount_5; }
	inline int32_t* get_address_of_m_nSmoothCount_5() { return &___m_nSmoothCount_5; }
	inline void set_m_nSmoothCount_5(int32_t value)
	{
		___m_nSmoothCount_5 = value;
	}

	inline static int32_t get_offset_of_m_nSmoothIndex_6() { return static_cast<int32_t>(offsetof(NcTimerTool_t227073218, ___m_nSmoothIndex_6)); }
	inline int32_t get_m_nSmoothIndex_6() const { return ___m_nSmoothIndex_6; }
	inline int32_t* get_address_of_m_nSmoothIndex_6() { return &___m_nSmoothIndex_6; }
	inline void set_m_nSmoothIndex_6(int32_t value)
	{
		___m_nSmoothIndex_6 = value;
	}

	inline static int32_t get_offset_of_m_fSmoothRate_7() { return static_cast<int32_t>(offsetof(NcTimerTool_t227073218, ___m_fSmoothRate_7)); }
	inline float get_m_fSmoothRate_7() const { return ___m_fSmoothRate_7; }
	inline float* get_address_of_m_fSmoothRate_7() { return &___m_fSmoothRate_7; }
	inline void set_m_fSmoothRate_7(float value)
	{
		___m_fSmoothRate_7 = value;
	}

	inline static int32_t get_offset_of_m_fSmoothTimes_8() { return static_cast<int32_t>(offsetof(NcTimerTool_t227073218, ___m_fSmoothTimes_8)); }
	inline SingleU5BU5D_t577127397* get_m_fSmoothTimes_8() const { return ___m_fSmoothTimes_8; }
	inline SingleU5BU5D_t577127397** get_address_of_m_fSmoothTimes_8() { return &___m_fSmoothTimes_8; }
	inline void set_m_fSmoothTimes_8(SingleU5BU5D_t577127397* value)
	{
		___m_fSmoothTimes_8 = value;
		Il2CppCodeGenWriteBarrier(&___m_fSmoothTimes_8, value);
	}

	inline static int32_t get_offset_of_m_fLastSmoothDeltaTime_9() { return static_cast<int32_t>(offsetof(NcTimerTool_t227073218, ___m_fLastSmoothDeltaTime_9)); }
	inline float get_m_fLastSmoothDeltaTime_9() const { return ___m_fLastSmoothDeltaTime_9; }
	inline float* get_address_of_m_fLastSmoothDeltaTime_9() { return &___m_fLastSmoothDeltaTime_9; }
	inline void set_m_fLastSmoothDeltaTime_9(float value)
	{
		___m_fLastSmoothDeltaTime_9 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
