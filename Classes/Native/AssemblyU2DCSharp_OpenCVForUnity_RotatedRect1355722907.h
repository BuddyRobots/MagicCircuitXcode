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
// OpenCVForUnity.Size
struct Size_t4100163289;

#include "mscorlib_System_Object4170816371.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// OpenCVForUnity.RotatedRect
struct  RotatedRect_t1355722907  : public Il2CppObject
{
public:
	// OpenCVForUnity.Point OpenCVForUnity.RotatedRect::center
	Point_t1661367934 * ___center_0;
	// OpenCVForUnity.Size OpenCVForUnity.RotatedRect::size
	Size_t4100163289 * ___size_1;
	// System.Double OpenCVForUnity.RotatedRect::angle
	double ___angle_2;

public:
	inline static int32_t get_offset_of_center_0() { return static_cast<int32_t>(offsetof(RotatedRect_t1355722907, ___center_0)); }
	inline Point_t1661367934 * get_center_0() const { return ___center_0; }
	inline Point_t1661367934 ** get_address_of_center_0() { return &___center_0; }
	inline void set_center_0(Point_t1661367934 * value)
	{
		___center_0 = value;
		Il2CppCodeGenWriteBarrier(&___center_0, value);
	}

	inline static int32_t get_offset_of_size_1() { return static_cast<int32_t>(offsetof(RotatedRect_t1355722907, ___size_1)); }
	inline Size_t4100163289 * get_size_1() const { return ___size_1; }
	inline Size_t4100163289 ** get_address_of_size_1() { return &___size_1; }
	inline void set_size_1(Size_t4100163289 * value)
	{
		___size_1 = value;
		Il2CppCodeGenWriteBarrier(&___size_1, value);
	}

	inline static int32_t get_offset_of_angle_2() { return static_cast<int32_t>(offsetof(RotatedRect_t1355722907, ___angle_2)); }
	inline double get_angle_2() const { return ___angle_2; }
	inline double* get_address_of_angle_2() { return &___angle_2; }
	inline void set_angle_2(double value)
	{
		___angle_2 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
