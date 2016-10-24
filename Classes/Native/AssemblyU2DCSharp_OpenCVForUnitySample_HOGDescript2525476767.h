#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// OpenCVForUnity.VideoCapture
struct VideoCapture_t815983651;
// OpenCVForUnity.Mat
struct Mat_t3763101966;
// UnityEngine.Texture2D
struct Texture2D_t3884108195;

#include "UnityEngine_UnityEngine_MonoBehaviour667441552.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// OpenCVForUnitySample.HOGDescriptorSample
struct  HOGDescriptorSample_t2525476767  : public MonoBehaviour_t667441552
{
public:
	// System.Double OpenCVForUnitySample.HOGDescriptorSample::frameWidth
	double ___frameWidth_2;
	// System.Double OpenCVForUnitySample.HOGDescriptorSample::frameHeight
	double ___frameHeight_3;
	// OpenCVForUnity.VideoCapture OpenCVForUnitySample.HOGDescriptorSample::capture
	VideoCapture_t815983651 * ___capture_4;
	// OpenCVForUnity.Mat OpenCVForUnitySample.HOGDescriptorSample::rgbMat
	Mat_t3763101966 * ___rgbMat_5;
	// UnityEngine.Texture2D OpenCVForUnitySample.HOGDescriptorSample::texture
	Texture2D_t3884108195 * ___texture_6;

public:
	inline static int32_t get_offset_of_frameWidth_2() { return static_cast<int32_t>(offsetof(HOGDescriptorSample_t2525476767, ___frameWidth_2)); }
	inline double get_frameWidth_2() const { return ___frameWidth_2; }
	inline double* get_address_of_frameWidth_2() { return &___frameWidth_2; }
	inline void set_frameWidth_2(double value)
	{
		___frameWidth_2 = value;
	}

	inline static int32_t get_offset_of_frameHeight_3() { return static_cast<int32_t>(offsetof(HOGDescriptorSample_t2525476767, ___frameHeight_3)); }
	inline double get_frameHeight_3() const { return ___frameHeight_3; }
	inline double* get_address_of_frameHeight_3() { return &___frameHeight_3; }
	inline void set_frameHeight_3(double value)
	{
		___frameHeight_3 = value;
	}

	inline static int32_t get_offset_of_capture_4() { return static_cast<int32_t>(offsetof(HOGDescriptorSample_t2525476767, ___capture_4)); }
	inline VideoCapture_t815983651 * get_capture_4() const { return ___capture_4; }
	inline VideoCapture_t815983651 ** get_address_of_capture_4() { return &___capture_4; }
	inline void set_capture_4(VideoCapture_t815983651 * value)
	{
		___capture_4 = value;
		Il2CppCodeGenWriteBarrier(&___capture_4, value);
	}

	inline static int32_t get_offset_of_rgbMat_5() { return static_cast<int32_t>(offsetof(HOGDescriptorSample_t2525476767, ___rgbMat_5)); }
	inline Mat_t3763101966 * get_rgbMat_5() const { return ___rgbMat_5; }
	inline Mat_t3763101966 ** get_address_of_rgbMat_5() { return &___rgbMat_5; }
	inline void set_rgbMat_5(Mat_t3763101966 * value)
	{
		___rgbMat_5 = value;
		Il2CppCodeGenWriteBarrier(&___rgbMat_5, value);
	}

	inline static int32_t get_offset_of_texture_6() { return static_cast<int32_t>(offsetof(HOGDescriptorSample_t2525476767, ___texture_6)); }
	inline Texture2D_t3884108195 * get_texture_6() const { return ___texture_6; }
	inline Texture2D_t3884108195 ** get_address_of_texture_6() { return &___texture_6; }
	inline void set_texture_6(Texture2D_t3884108195 * value)
	{
		___texture_6 = value;
		Il2CppCodeGenWriteBarrier(&___texture_6, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
