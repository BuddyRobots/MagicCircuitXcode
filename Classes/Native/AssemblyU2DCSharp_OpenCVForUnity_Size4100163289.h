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

// OpenCVForUnity.Size
struct  Size_t4100163289  : public Il2CppObject
{
public:
	// System.Double OpenCVForUnity.Size::width
	double ___width_0;
	// System.Double OpenCVForUnity.Size::height
	double ___height_1;

public:
	inline static int32_t get_offset_of_width_0() { return static_cast<int32_t>(offsetof(Size_t4100163289, ___width_0)); }
	inline double get_width_0() const { return ___width_0; }
	inline double* get_address_of_width_0() { return &___width_0; }
	inline void set_width_0(double value)
	{
		___width_0 = value;
	}

	inline static int32_t get_offset_of_height_1() { return static_cast<int32_t>(offsetof(Size_t4100163289, ___height_1)); }
	inline double get_height_1() const { return ___height_1; }
	inline double* get_address_of_height_1() { return &___height_1; }
	inline void set_height_1(double value)
	{
		___height_1 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
