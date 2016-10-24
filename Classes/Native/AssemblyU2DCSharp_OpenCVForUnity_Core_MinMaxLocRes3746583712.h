#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// OpenCVForUnity.Point
struct Point_t1661367934;

#include "mscorlib_System_Object4170816371.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// OpenCVForUnity.Core/MinMaxLocResult
struct  MinMaxLocResult_t3746583712  : public Il2CppObject
{
public:
	// System.Double OpenCVForUnity.Core/MinMaxLocResult::minVal
	double ___minVal_0;
	// System.Double OpenCVForUnity.Core/MinMaxLocResult::maxVal
	double ___maxVal_1;
	// OpenCVForUnity.Point OpenCVForUnity.Core/MinMaxLocResult::minLoc
	Point_t1661367934 * ___minLoc_2;
	// OpenCVForUnity.Point OpenCVForUnity.Core/MinMaxLocResult::maxLoc
	Point_t1661367934 * ___maxLoc_3;

public:
	inline static int32_t get_offset_of_minVal_0() { return static_cast<int32_t>(offsetof(MinMaxLocResult_t3746583712, ___minVal_0)); }
	inline double get_minVal_0() const { return ___minVal_0; }
	inline double* get_address_of_minVal_0() { return &___minVal_0; }
	inline void set_minVal_0(double value)
	{
		___minVal_0 = value;
	}

	inline static int32_t get_offset_of_maxVal_1() { return static_cast<int32_t>(offsetof(MinMaxLocResult_t3746583712, ___maxVal_1)); }
	inline double get_maxVal_1() const { return ___maxVal_1; }
	inline double* get_address_of_maxVal_1() { return &___maxVal_1; }
	inline void set_maxVal_1(double value)
	{
		___maxVal_1 = value;
	}

	inline static int32_t get_offset_of_minLoc_2() { return static_cast<int32_t>(offsetof(MinMaxLocResult_t3746583712, ___minLoc_2)); }
	inline Point_t1661367934 * get_minLoc_2() const { return ___minLoc_2; }
	inline Point_t1661367934 ** get_address_of_minLoc_2() { return &___minLoc_2; }
	inline void set_minLoc_2(Point_t1661367934 * value)
	{
		___minLoc_2 = value;
		Il2CppCodeGenWriteBarrier(&___minLoc_2, value);
	}

	inline static int32_t get_offset_of_maxLoc_3() { return static_cast<int32_t>(offsetof(MinMaxLocResult_t3746583712, ___maxLoc_3)); }
	inline Point_t1661367934 * get_maxLoc_3() const { return ___maxLoc_3; }
	inline Point_t1661367934 ** get_address_of_maxLoc_3() { return &___maxLoc_3; }
	inline void set_maxLoc_3(Point_t1661367934 * value)
	{
		___maxLoc_3 = value;
		Il2CppCodeGenWriteBarrier(&___maxLoc_3, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
