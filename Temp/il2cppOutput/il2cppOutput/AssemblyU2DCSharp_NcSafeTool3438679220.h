#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// NcSafeTool
struct NcSafeTool_t3438679220;

#include "UnityEngine_UnityEngine_MonoBehaviour1158329972.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// NcSafeTool
struct  NcSafeTool_t3438679220  : public MonoBehaviour_t1158329972
{
public:

public:
};

struct NcSafeTool_t3438679220_StaticFields
{
public:
	// System.Boolean NcSafeTool::m_bShuttingDown
	bool ___m_bShuttingDown_2;
	// System.Boolean NcSafeTool::m_bLoadLevel
	bool ___m_bLoadLevel_3;
	// NcSafeTool NcSafeTool::s_Instance
	NcSafeTool_t3438679220 * ___s_Instance_4;

public:
	inline static int32_t get_offset_of_m_bShuttingDown_2() { return static_cast<int32_t>(offsetof(NcSafeTool_t3438679220_StaticFields, ___m_bShuttingDown_2)); }
	inline bool get_m_bShuttingDown_2() const { return ___m_bShuttingDown_2; }
	inline bool* get_address_of_m_bShuttingDown_2() { return &___m_bShuttingDown_2; }
	inline void set_m_bShuttingDown_2(bool value)
	{
		___m_bShuttingDown_2 = value;
	}

	inline static int32_t get_offset_of_m_bLoadLevel_3() { return static_cast<int32_t>(offsetof(NcSafeTool_t3438679220_StaticFields, ___m_bLoadLevel_3)); }
	inline bool get_m_bLoadLevel_3() const { return ___m_bLoadLevel_3; }
	inline bool* get_address_of_m_bLoadLevel_3() { return &___m_bLoadLevel_3; }
	inline void set_m_bLoadLevel_3(bool value)
	{
		___m_bLoadLevel_3 = value;
	}

	inline static int32_t get_offset_of_s_Instance_4() { return static_cast<int32_t>(offsetof(NcSafeTool_t3438679220_StaticFields, ___s_Instance_4)); }
	inline NcSafeTool_t3438679220 * get_s_Instance_4() const { return ___s_Instance_4; }
	inline NcSafeTool_t3438679220 ** get_address_of_s_Instance_4() { return &___s_Instance_4; }
	inline void set_s_Instance_4(NcSafeTool_t3438679220 * value)
	{
		___s_Instance_4 = value;
		Il2CppCodeGenWriteBarrier(&___s_Instance_4, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
