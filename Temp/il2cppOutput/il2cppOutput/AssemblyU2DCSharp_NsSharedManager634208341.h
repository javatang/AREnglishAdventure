#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// NsSharedManager
struct NsSharedManager_t634208341;
// System.Collections.Generic.List`1<UnityEngine.GameObject>
struct List_1_t1125654279;
// System.Collections.Generic.List`1<UnityEngine.AudioClip>
struct List_1_t1301679762;
// System.Collections.Generic.List`1<System.Collections.Generic.List`1<UnityEngine.AudioSource>>
struct List_1_t4168316183;

#include "UnityEngine_UnityEngine_MonoBehaviour1158329972.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// NsSharedManager
struct  NsSharedManager_t634208341  : public MonoBehaviour_t1158329972
{
public:
	// System.Collections.Generic.List`1<UnityEngine.GameObject> NsSharedManager::m_SharedPrefabs
	List_1_t1125654279 * ___m_SharedPrefabs_3;
	// System.Collections.Generic.List`1<UnityEngine.GameObject> NsSharedManager::m_SharedGameObjects
	List_1_t1125654279 * ___m_SharedGameObjects_4;
	// System.Collections.Generic.List`1<UnityEngine.AudioClip> NsSharedManager::m_SharedAudioClip
	List_1_t1301679762 * ___m_SharedAudioClip_5;
	// System.Collections.Generic.List`1<System.Collections.Generic.List`1<UnityEngine.AudioSource>> NsSharedManager::m_SharedAudioSources
	List_1_t4168316183 * ___m_SharedAudioSources_6;

public:
	inline static int32_t get_offset_of_m_SharedPrefabs_3() { return static_cast<int32_t>(offsetof(NsSharedManager_t634208341, ___m_SharedPrefabs_3)); }
	inline List_1_t1125654279 * get_m_SharedPrefabs_3() const { return ___m_SharedPrefabs_3; }
	inline List_1_t1125654279 ** get_address_of_m_SharedPrefabs_3() { return &___m_SharedPrefabs_3; }
	inline void set_m_SharedPrefabs_3(List_1_t1125654279 * value)
	{
		___m_SharedPrefabs_3 = value;
		Il2CppCodeGenWriteBarrier(&___m_SharedPrefabs_3, value);
	}

	inline static int32_t get_offset_of_m_SharedGameObjects_4() { return static_cast<int32_t>(offsetof(NsSharedManager_t634208341, ___m_SharedGameObjects_4)); }
	inline List_1_t1125654279 * get_m_SharedGameObjects_4() const { return ___m_SharedGameObjects_4; }
	inline List_1_t1125654279 ** get_address_of_m_SharedGameObjects_4() { return &___m_SharedGameObjects_4; }
	inline void set_m_SharedGameObjects_4(List_1_t1125654279 * value)
	{
		___m_SharedGameObjects_4 = value;
		Il2CppCodeGenWriteBarrier(&___m_SharedGameObjects_4, value);
	}

	inline static int32_t get_offset_of_m_SharedAudioClip_5() { return static_cast<int32_t>(offsetof(NsSharedManager_t634208341, ___m_SharedAudioClip_5)); }
	inline List_1_t1301679762 * get_m_SharedAudioClip_5() const { return ___m_SharedAudioClip_5; }
	inline List_1_t1301679762 ** get_address_of_m_SharedAudioClip_5() { return &___m_SharedAudioClip_5; }
	inline void set_m_SharedAudioClip_5(List_1_t1301679762 * value)
	{
		___m_SharedAudioClip_5 = value;
		Il2CppCodeGenWriteBarrier(&___m_SharedAudioClip_5, value);
	}

	inline static int32_t get_offset_of_m_SharedAudioSources_6() { return static_cast<int32_t>(offsetof(NsSharedManager_t634208341, ___m_SharedAudioSources_6)); }
	inline List_1_t4168316183 * get_m_SharedAudioSources_6() const { return ___m_SharedAudioSources_6; }
	inline List_1_t4168316183 ** get_address_of_m_SharedAudioSources_6() { return &___m_SharedAudioSources_6; }
	inline void set_m_SharedAudioSources_6(List_1_t4168316183 * value)
	{
		___m_SharedAudioSources_6 = value;
		Il2CppCodeGenWriteBarrier(&___m_SharedAudioSources_6, value);
	}
};

struct NsSharedManager_t634208341_StaticFields
{
public:
	// NsSharedManager NsSharedManager::_inst
	NsSharedManager_t634208341 * ____inst_2;

public:
	inline static int32_t get_offset_of__inst_2() { return static_cast<int32_t>(offsetof(NsSharedManager_t634208341_StaticFields, ____inst_2)); }
	inline NsSharedManager_t634208341 * get__inst_2() const { return ____inst_2; }
	inline NsSharedManager_t634208341 ** get_address_of__inst_2() { return &____inst_2; }
	inline void set__inst_2(NsSharedManager_t634208341 * value)
	{
		____inst_2 = value;
		Il2CppCodeGenWriteBarrier(&____inst_2, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
