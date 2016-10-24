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

// OpenCVForUnity.DMatch
struct  DMatch_t2995548505  : public Il2CppObject
{
public:
	// System.Int32 OpenCVForUnity.DMatch::queryIdx
	int32_t ___queryIdx_0;
	// System.Int32 OpenCVForUnity.DMatch::trainIdx
	int32_t ___trainIdx_1;
	// System.Int32 OpenCVForUnity.DMatch::imgIdx
	int32_t ___imgIdx_2;
	// System.Single OpenCVForUnity.DMatch::distance
	float ___distance_3;

public:
	inline static int32_t get_offset_of_queryIdx_0() { return static_cast<int32_t>(offsetof(DMatch_t2995548505, ___queryIdx_0)); }
	inline int32_t get_queryIdx_0() const { return ___queryIdx_0; }
	inline int32_t* get_address_of_queryIdx_0() { return &___queryIdx_0; }
	inline void set_queryIdx_0(int32_t value)
	{
		___queryIdx_0 = value;
	}

	inline static int32_t get_offset_of_trainIdx_1() { return static_cast<int32_t>(offsetof(DMatch_t2995548505, ___trainIdx_1)); }
	inline int32_t get_trainIdx_1() const { return ___trainIdx_1; }
	inline int32_t* get_address_of_trainIdx_1() { return &___trainIdx_1; }
	inline void set_trainIdx_1(int32_t value)
	{
		___trainIdx_1 = value;
	}

	inline static int32_t get_offset_of_imgIdx_2() { return static_cast<int32_t>(offsetof(DMatch_t2995548505, ___imgIdx_2)); }
	inline int32_t get_imgIdx_2() const { return ___imgIdx_2; }
	inline int32_t* get_address_of_imgIdx_2() { return &___imgIdx_2; }
	inline void set_imgIdx_2(int32_t value)
	{
		___imgIdx_2 = value;
	}

	inline static int32_t get_offset_of_distance_3() { return static_cast<int32_t>(offsetof(DMatch_t2995548505, ___distance_3)); }
	inline float get_distance_3() const { return ___distance_3; }
	inline float* get_address_of_distance_3() { return &___distance_3; }
	inline void set_distance_3(float value)
	{
		___distance_3 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
