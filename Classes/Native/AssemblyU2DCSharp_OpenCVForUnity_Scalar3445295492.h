#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// System.Double[]
struct DoubleU5BU5D_t2145413704;

#include "mscorlib_System_Object4170816371.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// OpenCVForUnity.Scalar
struct  Scalar_t3445295492  : public Il2CppObject
{
public:
	// System.Double[] OpenCVForUnity.Scalar::val
	DoubleU5BU5D_t2145413704* ___val_0;

public:
	inline static int32_t get_offset_of_val_0() { return static_cast<int32_t>(offsetof(Scalar_t3445295492, ___val_0)); }
	inline DoubleU5BU5D_t2145413704* get_val_0() const { return ___val_0; }
	inline DoubleU5BU5D_t2145413704** get_address_of_val_0() { return &___val_0; }
	inline void set_val_0(DoubleU5BU5D_t2145413704* value)
	{
		___val_0 = value;
		Il2CppCodeGenWriteBarrier(&___val_0, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
