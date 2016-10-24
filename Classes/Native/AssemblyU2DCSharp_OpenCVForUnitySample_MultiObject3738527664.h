#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// UnityEngine.Color32[]
struct Color32U5BU5D_t2960766953;
// UnityEngine.Texture2D
struct Texture2D_t3884108195;
// OpenCVForUnity.Mat
struct Mat_t3763101966;
// ColorObject
struct ColorObject_t2518683746;
// OpenCVForUnitySample.WebCamTextureToMatHelper
struct WebCamTextureToMatHelper_t772277295;

#include "UnityEngine_UnityEngine_MonoBehaviour667441552.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// OpenCVForUnitySample.MultiObjectTrackingBasedOnColorSample
struct  MultiObjectTrackingBasedOnColorSample_t3738527664  : public MonoBehaviour_t667441552
{
public:
	// UnityEngine.Color32[] OpenCVForUnitySample.MultiObjectTrackingBasedOnColorSample::colors
	Color32U5BU5D_t2960766953* ___colors_4;
	// UnityEngine.Texture2D OpenCVForUnitySample.MultiObjectTrackingBasedOnColorSample::texture
	Texture2D_t3884108195 * ___texture_5;
	// OpenCVForUnity.Mat OpenCVForUnitySample.MultiObjectTrackingBasedOnColorSample::rgbMat
	Mat_t3763101966 * ___rgbMat_6;
	// OpenCVForUnity.Mat OpenCVForUnitySample.MultiObjectTrackingBasedOnColorSample::thresholdMat
	Mat_t3763101966 * ___thresholdMat_7;
	// OpenCVForUnity.Mat OpenCVForUnitySample.MultiObjectTrackingBasedOnColorSample::hsvMat
	Mat_t3763101966 * ___hsvMat_8;
	// ColorObject OpenCVForUnitySample.MultiObjectTrackingBasedOnColorSample::blue
	ColorObject_t2518683746 * ___blue_9;
	// ColorObject OpenCVForUnitySample.MultiObjectTrackingBasedOnColorSample::yellow
	ColorObject_t2518683746 * ___yellow_10;
	// ColorObject OpenCVForUnitySample.MultiObjectTrackingBasedOnColorSample::red
	ColorObject_t2518683746 * ___red_11;
	// ColorObject OpenCVForUnitySample.MultiObjectTrackingBasedOnColorSample::green
	ColorObject_t2518683746 * ___green_12;
	// OpenCVForUnitySample.WebCamTextureToMatHelper OpenCVForUnitySample.MultiObjectTrackingBasedOnColorSample::webCamTextureToMatHelper
	WebCamTextureToMatHelper_t772277295 * ___webCamTextureToMatHelper_13;

public:
	inline static int32_t get_offset_of_colors_4() { return static_cast<int32_t>(offsetof(MultiObjectTrackingBasedOnColorSample_t3738527664, ___colors_4)); }
	inline Color32U5BU5D_t2960766953* get_colors_4() const { return ___colors_4; }
	inline Color32U5BU5D_t2960766953** get_address_of_colors_4() { return &___colors_4; }
	inline void set_colors_4(Color32U5BU5D_t2960766953* value)
	{
		___colors_4 = value;
		Il2CppCodeGenWriteBarrier(&___colors_4, value);
	}

	inline static int32_t get_offset_of_texture_5() { return static_cast<int32_t>(offsetof(MultiObjectTrackingBasedOnColorSample_t3738527664, ___texture_5)); }
	inline Texture2D_t3884108195 * get_texture_5() const { return ___texture_5; }
	inline Texture2D_t3884108195 ** get_address_of_texture_5() { return &___texture_5; }
	inline void set_texture_5(Texture2D_t3884108195 * value)
	{
		___texture_5 = value;
		Il2CppCodeGenWriteBarrier(&___texture_5, value);
	}

	inline static int32_t get_offset_of_rgbMat_6() { return static_cast<int32_t>(offsetof(MultiObjectTrackingBasedOnColorSample_t3738527664, ___rgbMat_6)); }
	inline Mat_t3763101966 * get_rgbMat_6() const { return ___rgbMat_6; }
	inline Mat_t3763101966 ** get_address_of_rgbMat_6() { return &___rgbMat_6; }
	inline void set_rgbMat_6(Mat_t3763101966 * value)
	{
		___rgbMat_6 = value;
		Il2CppCodeGenWriteBarrier(&___rgbMat_6, value);
	}

	inline static int32_t get_offset_of_thresholdMat_7() { return static_cast<int32_t>(offsetof(MultiObjectTrackingBasedOnColorSample_t3738527664, ___thresholdMat_7)); }
	inline Mat_t3763101966 * get_thresholdMat_7() const { return ___thresholdMat_7; }
	inline Mat_t3763101966 ** get_address_of_thresholdMat_7() { return &___thresholdMat_7; }
	inline void set_thresholdMat_7(Mat_t3763101966 * value)
	{
		___thresholdMat_7 = value;
		Il2CppCodeGenWriteBarrier(&___thresholdMat_7, value);
	}

	inline static int32_t get_offset_of_hsvMat_8() { return static_cast<int32_t>(offsetof(MultiObjectTrackingBasedOnColorSample_t3738527664, ___hsvMat_8)); }
	inline Mat_t3763101966 * get_hsvMat_8() const { return ___hsvMat_8; }
	inline Mat_t3763101966 ** get_address_of_hsvMat_8() { return &___hsvMat_8; }
	inline void set_hsvMat_8(Mat_t3763101966 * value)
	{
		___hsvMat_8 = value;
		Il2CppCodeGenWriteBarrier(&___hsvMat_8, value);
	}

	inline static int32_t get_offset_of_blue_9() { return static_cast<int32_t>(offsetof(MultiObjectTrackingBasedOnColorSample_t3738527664, ___blue_9)); }
	inline ColorObject_t2518683746 * get_blue_9() const { return ___blue_9; }
	inline ColorObject_t2518683746 ** get_address_of_blue_9() { return &___blue_9; }
	inline void set_blue_9(ColorObject_t2518683746 * value)
	{
		___blue_9 = value;
		Il2CppCodeGenWriteBarrier(&___blue_9, value);
	}

	inline static int32_t get_offset_of_yellow_10() { return static_cast<int32_t>(offsetof(MultiObjectTrackingBasedOnColorSample_t3738527664, ___yellow_10)); }
	inline ColorObject_t2518683746 * get_yellow_10() const { return ___yellow_10; }
	inline ColorObject_t2518683746 ** get_address_of_yellow_10() { return &___yellow_10; }
	inline void set_yellow_10(ColorObject_t2518683746 * value)
	{
		___yellow_10 = value;
		Il2CppCodeGenWriteBarrier(&___yellow_10, value);
	}

	inline static int32_t get_offset_of_red_11() { return static_cast<int32_t>(offsetof(MultiObjectTrackingBasedOnColorSample_t3738527664, ___red_11)); }
	inline ColorObject_t2518683746 * get_red_11() const { return ___red_11; }
	inline ColorObject_t2518683746 ** get_address_of_red_11() { return &___red_11; }
	inline void set_red_11(ColorObject_t2518683746 * value)
	{
		___red_11 = value;
		Il2CppCodeGenWriteBarrier(&___red_11, value);
	}

	inline static int32_t get_offset_of_green_12() { return static_cast<int32_t>(offsetof(MultiObjectTrackingBasedOnColorSample_t3738527664, ___green_12)); }
	inline ColorObject_t2518683746 * get_green_12() const { return ___green_12; }
	inline ColorObject_t2518683746 ** get_address_of_green_12() { return &___green_12; }
	inline void set_green_12(ColorObject_t2518683746 * value)
	{
		___green_12 = value;
		Il2CppCodeGenWriteBarrier(&___green_12, value);
	}

	inline static int32_t get_offset_of_webCamTextureToMatHelper_13() { return static_cast<int32_t>(offsetof(MultiObjectTrackingBasedOnColorSample_t3738527664, ___webCamTextureToMatHelper_13)); }
	inline WebCamTextureToMatHelper_t772277295 * get_webCamTextureToMatHelper_13() const { return ___webCamTextureToMatHelper_13; }
	inline WebCamTextureToMatHelper_t772277295 ** get_address_of_webCamTextureToMatHelper_13() { return &___webCamTextureToMatHelper_13; }
	inline void set_webCamTextureToMatHelper_13(WebCamTextureToMatHelper_t772277295 * value)
	{
		___webCamTextureToMatHelper_13 = value;
		Il2CppCodeGenWriteBarrier(&___webCamTextureToMatHelper_13, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
