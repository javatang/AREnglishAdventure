#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// System.Collections.Generic.List`1<FamilyInfo>
struct List_1_t1138925036;

#include "mscorlib_System_Object2689449295.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// FamilyList
struct  FamilyList_t136462996  : public Il2CppObject
{
public:
	// System.Collections.Generic.List`1<FamilyInfo> FamilyList::family_list
	List_1_t1138925036 * ___family_list_0;

public:
	inline static int32_t get_offset_of_family_list_0() { return static_cast<int32_t>(offsetof(FamilyList_t136462996, ___family_list_0)); }
	inline List_1_t1138925036 * get_family_list_0() const { return ___family_list_0; }
	inline List_1_t1138925036 ** get_address_of_family_list_0() { return &___family_list_0; }
	inline void set_family_list_0(List_1_t1138925036 * value)
	{
		___family_list_0 = value;
		Il2CppCodeGenWriteBarrier(&___family_list_0, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
