#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// System.Collections.Generic.List`1<UnityEngine.Component>
struct List_1_t3188497603;

#include "UnityEngine_UnityEngine_MonoBehaviour1158329972.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// NsRenderManager
struct  NsRenderManager_t3571176622  : public MonoBehaviour_t1158329972
{
public:
	// System.Collections.Generic.List`1<UnityEngine.Component> NsRenderManager::m_RenderEventCalls
	List_1_t3188497603 * ___m_RenderEventCalls_2;

public:
	inline static int32_t get_offset_of_m_RenderEventCalls_2() { return static_cast<int32_t>(offsetof(NsRenderManager_t3571176622, ___m_RenderEventCalls_2)); }
	inline List_1_t3188497603 * get_m_RenderEventCalls_2() const { return ___m_RenderEventCalls_2; }
	inline List_1_t3188497603 ** get_address_of_m_RenderEventCalls_2() { return &___m_RenderEventCalls_2; }
	inline void set_m_RenderEventCalls_2(List_1_t3188497603 * value)
	{
		___m_RenderEventCalls_2 = value;
		Il2CppCodeGenWriteBarrier(&___m_RenderEventCalls_2, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
