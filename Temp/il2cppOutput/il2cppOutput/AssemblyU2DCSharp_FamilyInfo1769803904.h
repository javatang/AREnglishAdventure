#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// System.String
struct String_t;

#include "mscorlib_System_Object2689449295.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// FamilyInfo
struct  FamilyInfo_t1769803904  : public Il2CppObject
{
public:
	// System.String FamilyInfo::name
	String_t* ___name_0;
	// System.Int32 FamilyInfo::age
	int32_t ___age_1;
	// System.String FamilyInfo::tellphone
	String_t* ___tellphone_2;
	// System.String FamilyInfo::address
	String_t* ___address_3;

public:
	inline static int32_t get_offset_of_name_0() { return static_cast<int32_t>(offsetof(FamilyInfo_t1769803904, ___name_0)); }
	inline String_t* get_name_0() const { return ___name_0; }
	inline String_t** get_address_of_name_0() { return &___name_0; }
	inline void set_name_0(String_t* value)
	{
		___name_0 = value;
		Il2CppCodeGenWriteBarrier(&___name_0, value);
	}

	inline static int32_t get_offset_of_age_1() { return static_cast<int32_t>(offsetof(FamilyInfo_t1769803904, ___age_1)); }
	inline int32_t get_age_1() const { return ___age_1; }
	inline int32_t* get_address_of_age_1() { return &___age_1; }
	inline void set_age_1(int32_t value)
	{
		___age_1 = value;
	}

	inline static int32_t get_offset_of_tellphone_2() { return static_cast<int32_t>(offsetof(FamilyInfo_t1769803904, ___tellphone_2)); }
	inline String_t* get_tellphone_2() const { return ___tellphone_2; }
	inline String_t** get_address_of_tellphone_2() { return &___tellphone_2; }
	inline void set_tellphone_2(String_t* value)
	{
		___tellphone_2 = value;
		Il2CppCodeGenWriteBarrier(&___tellphone_2, value);
	}

	inline static int32_t get_offset_of_address_3() { return static_cast<int32_t>(offsetof(FamilyInfo_t1769803904, ___address_3)); }
	inline String_t* get_address_3() const { return ___address_3; }
	inline String_t** get_address_of_address_3() { return &___address_3; }
	inline void set_address_3(String_t* value)
	{
		___address_3 = value;
		Il2CppCodeGenWriteBarrier(&___address_3, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
