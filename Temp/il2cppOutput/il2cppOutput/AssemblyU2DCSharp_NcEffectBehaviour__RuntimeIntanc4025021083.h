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

#include "mscorlib_System_Object2689449295.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// NcEffectBehaviour/_RuntimeIntance
struct  _RuntimeIntance_t4025021083  : public Il2CppObject
{
public:
	// UnityEngine.GameObject NcEffectBehaviour/_RuntimeIntance::m_ParentGameObject
	GameObject_t1756533147 * ___m_ParentGameObject_0;
	// UnityEngine.GameObject NcEffectBehaviour/_RuntimeIntance::m_ChildGameObject
	GameObject_t1756533147 * ___m_ChildGameObject_1;

public:
	inline static int32_t get_offset_of_m_ParentGameObject_0() { return static_cast<int32_t>(offsetof(_RuntimeIntance_t4025021083, ___m_ParentGameObject_0)); }
	inline GameObject_t1756533147 * get_m_ParentGameObject_0() const { return ___m_ParentGameObject_0; }
	inline GameObject_t1756533147 ** get_address_of_m_ParentGameObject_0() { return &___m_ParentGameObject_0; }
	inline void set_m_ParentGameObject_0(GameObject_t1756533147 * value)
	{
		___m_ParentGameObject_0 = value;
		Il2CppCodeGenWriteBarrier(&___m_ParentGameObject_0, value);
	}

	inline static int32_t get_offset_of_m_ChildGameObject_1() { return static_cast<int32_t>(offsetof(_RuntimeIntance_t4025021083, ___m_ChildGameObject_1)); }
	inline GameObject_t1756533147 * get_m_ChildGameObject_1() const { return ___m_ChildGameObject_1; }
	inline GameObject_t1756533147 ** get_address_of_m_ChildGameObject_1() { return &___m_ChildGameObject_1; }
	inline void set_m_ChildGameObject_1(GameObject_t1756533147 * value)
	{
		___m_ChildGameObject_1 = value;
		Il2CppCodeGenWriteBarrier(&___m_ChildGameObject_1, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
