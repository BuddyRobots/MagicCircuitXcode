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

// OpenCVForUnity.TermCriteria
struct  TermCriteria_t3040734659  : public Il2CppObject
{
public:
	// System.Int32 OpenCVForUnity.TermCriteria::type
	int32_t ___type_3;
	// System.Int32 OpenCVForUnity.TermCriteria::maxCount
	int32_t ___maxCount_4;
	// System.Double OpenCVForUnity.TermCriteria::epsilon
	double ___epsilon_5;

public:
	inline static int32_t get_offset_of_type_3() { return static_cast<int32_t>(offsetof(TermCriteria_t3040734659, ___type_3)); }
	inline int32_t get_type_3() const { return ___type_3; }
	inline int32_t* get_address_of_type_3() { return &___type_3; }
	inline void set_type_3(int32_t value)
	{
		___type_3 = value;
	}

	inline static int32_t get_offset_of_maxCount_4() { return static_cast<int32_t>(offsetof(TermCriteria_t3040734659, ___maxCount_4)); }
	inline int32_t get_maxCount_4() const { return ___maxCount_4; }
	inline int32_t* get_address_of_maxCount_4() { return &___maxCount_4; }
	inline void set_maxCount_4(int32_t value)
	{
		___maxCount_4 = value;
	}

	inline static int32_t get_offset_of_epsilon_5() { return static_cast<int32_t>(offsetof(TermCriteria_t3040734659, ___epsilon_5)); }
	inline double get_epsilon_5() const { return ___epsilon_5; }
	inline double* get_address_of_epsilon_5() { return &___epsilon_5; }
	inline void set_epsilon_5(double value)
	{
		___epsilon_5 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
