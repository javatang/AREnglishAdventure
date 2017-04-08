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

#include "AssemblyU2DCSharp_NcEffectBehaviour813403937.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// NcDetachObject
struct  NcDetachObject_t4019232197  : public NcEffectBehaviour_t813403937
{
public:
	// UnityEngine.GameObject NcDetachObject::m_LinkGameObject
	GameObject_t1756533147 * ___m_LinkGameObject_9;

public:
	inline static int32_t get_offset_of_m_LinkGameObject_9() { return static_cast<int32_t>(offsetof(NcDetachObject_t4019232197, ___m_LinkGameObject_9)); }
	inline GameObject_t1756533147 * get_m_LinkGameObject_9() const { return ___m_LinkGameObject_9; }
	inline GameObject_t1756533147 ** get_address_of_m_LinkGameObject_9() { return &___m_LinkGameObject_9; }
	inline void set_m_LinkGameObject_9(GameObject_t1756533147 * value)
	{
		___m_LinkGameObject_9 = value;
		Il2CppCodeGenWriteBarrier(&___m_LinkGameObject_9, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
