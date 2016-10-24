#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>


#include "mscorlib_System_Object4170816371.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// OpenCVForUnity.Range
struct  Range_t1662802475  : public Il2CppObject
{
public:
	// System.Int32 OpenCVForUnity.Range::start
	int32_t ___start_0;
	// System.Int32 OpenCVForUnity.Range::end
	int32_t ___end_1;

public:
	inline static int32_t get_offset_of_start_0() { return static_cast<int32_t>(offsetof(Range_t1662802475, ___start_0)); }
	inline int32_t get_start_0() const { return ___start_0; }
	inline int32_t* get_address_of_start_0() { return &___start_0; }
	inline void set_start_0(int32_t value)
	{
		___start_0 = value;
	}

	inline static int32_t get_offset_of_end_1() { return static_cast<int32_t>(offsetof(Range_t1662802475, ___end_1)); }
	inline int32_t get_end_1() const { return ___end_1; }
	inline int32_t* get_address_of_end_1() { return &___end_1; }
	inline void set_end_1(int32_t value)
	{
		___end_1 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
