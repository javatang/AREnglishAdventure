#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// UnityEngine.GameObject
struct GameObject_t1756533147;

#include "AssemblyU2DCSharp_Singleton_1_gen3695067872.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UIManager
struct  UIManager_t2519183485  : public Singleton_1_t3695067872
{
public:
	// UnityEngine.GameObject UIManager::player
	GameObject_t1756533147 * ___player_3;
	// UnityEngine.GameObject UIManager::UIContainer
	GameObject_t1756533147 * ___UIContainer_4;

public:
	inline static int32_t get_offset_of_player_3() { return static_cast<int32_t>(offsetof(UIManager_t2519183485, ___player_3)); }
	inline GameObject_t1756533147 * get_player_3() const { return ___player_3; }
	inline GameObject_t1756533147 ** get_address_of_player_3() { return &___player_3; }
	inline void set_player_3(GameObject_t1756533147 * value)
	{
		___player_3 = value;
		Il2CppCodeGenWriteBarrier(&___player_3, value);
	}

	inline static int32_t get_offset_of_UIContainer_4() { return static_cast<int32_t>(offsetof(UIManager_t2519183485, ___UIContainer_4)); }
	inline GameObject_t1756533147 * get_UIContainer_4() const { return ___UIContainer_4; }
	inline GameObject_t1756533147 ** get_address_of_UIContainer_4() { return &___UIContainer_4; }
	inline void set_UIContainer_4(GameObject_t1756533147 * value)
	{
		___UIContainer_4 = value;
		Il2CppCodeGenWriteBarrier(&___UIContainer_4, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
