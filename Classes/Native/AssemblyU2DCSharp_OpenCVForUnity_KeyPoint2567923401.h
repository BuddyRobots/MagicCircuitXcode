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

// OpenCVForUnity.KeyPoint
struct  KeyPoint_t2567923401  : public Il2CppObject
{
public:
	// OpenCVForUnity.Point OpenCVForUnity.KeyPoint::pt
	Point_t1661367934 * ___pt_0;
	// System.Single OpenCVForUnity.KeyPoint::size
	float ___size_1;
	// System.Single OpenCVForUnity.KeyPoint::angle
	float ___angle_2;
	// System.Single OpenCVForUnity.KeyPoint::response
	float ___response_3;
	// System.Int32 OpenCVForUnity.KeyPoint::octave
	int32_t ___octave_4;
	// System.Int32 OpenCVForUnity.KeyPoint::class_id
	int32_t ___class_id_5;

public:
	inline static int32_t get_offset_of_pt_0() { return static_cast<int32_t>(offsetof(KeyPoint_t2567923401, ___pt_0)); }
	inline Point_t1661367934 * get_pt_0() const { return ___pt_0; }
	inline Point_t1661367934 ** get_address_of_pt_0() { return &___pt_0; }
	inline void set_pt_0(Point_t1661367934 * value)
	{
		___pt_0 = value;
		Il2CppCodeGenWriteBarrier(&___pt_0, value);
	}

	inline static int32_t get_offset_of_size_1() { return static_cast<int32_t>(offsetof(KeyPoint_t2567923401, ___size_1)); }
	inline float get_size_1() const { return ___size_1; }
	inline float* get_address_of_size_1() { return &___size_1; }
	inline void set_size_1(float value)
	{
		___size_1 = value;
	}

	inline static int32_t get_offset_of_angle_2() { return static_cast<int32_t>(offsetof(KeyPoint_t2567923401, ___angle_2)); }
	inline float get_angle_2() const { return ___angle_2; }
	inline float* get_address_of_angle_2() { return &___angle_2; }
	inline void set_angle_2(float value)
	{
		___angle_2 = value;
	}

	inline static int32_t get_offset_of_response_3() { return static_cast<int32_t>(offsetof(KeyPoint_t2567923401, ___response_3)); }
	inline float get_response_3() const { return ___response_3; }
	inline float* get_address_of_response_3() { return &___response_3; }
	inline void set_response_3(float value)
	{
		___response_3 = value;
	}

	inline static int32_t get_offset_of_octave_4() { return static_cast<int32_t>(offsetof(KeyPoint_t2567923401, ___octave_4)); }
	inline int32_t get_octave_4() const { return ___octave_4; }
	inline int32_t* get_address_of_octave_4() { return &___octave_4; }
	inline void set_octave_4(int32_t value)
	{
		___octave_4 = value;
	}

	inline static int32_t get_offset_of_class_id_5() { return static_cast<int32_t>(offsetof(KeyPoint_t2567923401, ___class_id_5)); }
	inline int32_t get_class_id_5() const { return ___class_id_5; }
	inline int32_t* get_address_of_class_id_5() { return &___class_id_5; }
	inline void set_class_id_5(int32_t value)
	{
		___class_id_5 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
