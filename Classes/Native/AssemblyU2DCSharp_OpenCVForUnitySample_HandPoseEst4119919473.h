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
// UnityEngine.UI.Slider
struct Slider_t79469677;
// OpenCVForUnity.Scalar
struct Scalar_t3445295492;
// ColorBlobDetector
struct ColorBlobDetector_t3044050278;
// OpenCVForUnity.Mat
struct Mat_t3763101966;
// OpenCVForUnity.Size
struct Size_t4100163289;
// UnityEngine.UI.Text
struct Text_t9039225;
// OpenCVForUnitySample.WebCamTextureToMatHelper
struct WebCamTextureToMatHelper_t772277295;

#include "UnityEngine_UnityEngine_MonoBehaviour667441552.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// OpenCVForUnitySample.HandPoseEstimationSample
struct  HandPoseEstimationSample_t4119919473  : public MonoBehaviour_t667441552
{
public:
	// UnityEngine.Color32[] OpenCVForUnitySample.HandPoseEstimationSample::colors
	Color32U5BU5D_t2960766953* ___colors_2;
	// UnityEngine.Texture2D OpenCVForUnitySample.HandPoseEstimationSample::texture
	Texture2D_t3884108195 * ___texture_3;
	// UnityEngine.UI.Slider OpenCVForUnitySample.HandPoseEstimationSample::threasholdSlider
	Slider_t79469677 * ___threasholdSlider_4;
	// OpenCVForUnity.Scalar OpenCVForUnitySample.HandPoseEstimationSample::blobColorHsv
	Scalar_t3445295492 * ___blobColorHsv_5;
	// ColorBlobDetector OpenCVForUnitySample.HandPoseEstimationSample::detector
	ColorBlobDetector_t3044050278 * ___detector_6;
	// OpenCVForUnity.Mat OpenCVForUnitySample.HandPoseEstimationSample::spectrumMat
	Mat_t3763101966 * ___spectrumMat_7;
	// System.Boolean OpenCVForUnitySample.HandPoseEstimationSample::isColorSelected
	bool ___isColorSelected_8;
	// OpenCVForUnity.Size OpenCVForUnitySample.HandPoseEstimationSample::SPECTRUM_SIZE
	Size_t4100163289 * ___SPECTRUM_SIZE_9;
	// OpenCVForUnity.Scalar OpenCVForUnitySample.HandPoseEstimationSample::CONTOUR_COLOR
	Scalar_t3445295492 * ___CONTOUR_COLOR_10;
	// OpenCVForUnity.Scalar OpenCVForUnitySample.HandPoseEstimationSample::CONTOUR_COLOR_WHITE
	Scalar_t3445295492 * ___CONTOUR_COLOR_WHITE_11;
	// System.Int32 OpenCVForUnitySample.HandPoseEstimationSample::numberOfFingers
	int32_t ___numberOfFingers_12;
	// UnityEngine.UI.Text OpenCVForUnitySample.HandPoseEstimationSample::numberOfFingersText
	Text_t9039225 * ___numberOfFingersText_13;
	// OpenCVForUnitySample.WebCamTextureToMatHelper OpenCVForUnitySample.HandPoseEstimationSample::webCamTextureToMatHelper
	WebCamTextureToMatHelper_t772277295 * ___webCamTextureToMatHelper_14;

public:
	inline static int32_t get_offset_of_colors_2() { return static_cast<int32_t>(offsetof(HandPoseEstimationSample_t4119919473, ___colors_2)); }
	inline Color32U5BU5D_t2960766953* get_colors_2() const { return ___colors_2; }
	inline Color32U5BU5D_t2960766953** get_address_of_colors_2() { return &___colors_2; }
	inline void set_colors_2(Color32U5BU5D_t2960766953* value)
	{
		___colors_2 = value;
		Il2CppCodeGenWriteBarrier(&___colors_2, value);
	}

	inline static int32_t get_offset_of_texture_3() { return static_cast<int32_t>(offsetof(HandPoseEstimationSample_t4119919473, ___texture_3)); }
	inline Texture2D_t3884108195 * get_texture_3() const { return ___texture_3; }
	inline Texture2D_t3884108195 ** get_address_of_texture_3() { return &___texture_3; }
	inline void set_texture_3(Texture2D_t3884108195 * value)
	{
		___texture_3 = value;
		Il2CppCodeGenWriteBarrier(&___texture_3, value);
	}

	inline static int32_t get_offset_of_threasholdSlider_4() { return static_cast<int32_t>(offsetof(HandPoseEstimationSample_t4119919473, ___threasholdSlider_4)); }
	inline Slider_t79469677 * get_threasholdSlider_4() const { return ___threasholdSlider_4; }
	inline Slider_t79469677 ** get_address_of_threasholdSlider_4() { return &___threasholdSlider_4; }
	inline void set_threasholdSlider_4(Slider_t79469677 * value)
	{
		___threasholdSlider_4 = value;
		Il2CppCodeGenWriteBarrier(&___threasholdSlider_4, value);
	}

	inline static int32_t get_offset_of_blobColorHsv_5() { return static_cast<int32_t>(offsetof(HandPoseEstimationSample_t4119919473, ___blobColorHsv_5)); }
	inline Scalar_t3445295492 * get_blobColorHsv_5() const { return ___blobColorHsv_5; }
	inline Scalar_t3445295492 ** get_address_of_blobColorHsv_5() { return &___blobColorHsv_5; }
	inline void set_blobColorHsv_5(Scalar_t3445295492 * value)
	{
		___blobColorHsv_5 = value;
		Il2CppCodeGenWriteBarrier(&___blobColorHsv_5, value);
	}

	inline static int32_t get_offset_of_detector_6() { return static_cast<int32_t>(offsetof(HandPoseEstimationSample_t4119919473, ___detector_6)); }
	inline ColorBlobDetector_t3044050278 * get_detector_6() const { return ___detector_6; }
	inline ColorBlobDetector_t3044050278 ** get_address_of_detector_6() { return &___detector_6; }
	inline void set_detector_6(ColorBlobDetector_t3044050278 * value)
	{
		___detector_6 = value;
		Il2CppCodeGenWriteBarrier(&___detector_6, value);
	}

	inline static int32_t get_offset_of_spectrumMat_7() { return static_cast<int32_t>(offsetof(HandPoseEstimationSample_t4119919473, ___spectrumMat_7)); }
	inline Mat_t3763101966 * get_spectrumMat_7() const { return ___spectrumMat_7; }
	inline Mat_t3763101966 ** get_address_of_spectrumMat_7() { return &___spectrumMat_7; }
	inline void set_spectrumMat_7(Mat_t3763101966 * value)
	{
		___spectrumMat_7 = value;
		Il2CppCodeGenWriteBarrier(&___spectrumMat_7, value);
	}

	inline static int32_t get_offset_of_isColorSelected_8() { return static_cast<int32_t>(offsetof(HandPoseEstimationSample_t4119919473, ___isColorSelected_8)); }
	inline bool get_isColorSelected_8() const { return ___isColorSelected_8; }
	inline bool* get_address_of_isColorSelected_8() { return &___isColorSelected_8; }
	inline void set_isColorSelected_8(bool value)
	{
		___isColorSelected_8 = value;
	}

	inline static int32_t get_offset_of_SPECTRUM_SIZE_9() { return static_cast<int32_t>(offsetof(HandPoseEstimationSample_t4119919473, ___SPECTRUM_SIZE_9)); }
	inline Size_t4100163289 * get_SPECTRUM_SIZE_9() const { return ___SPECTRUM_SIZE_9; }
	inline Size_t4100163289 ** get_address_of_SPECTRUM_SIZE_9() { return &___SPECTRUM_SIZE_9; }
	inline void set_SPECTRUM_SIZE_9(Size_t4100163289 * value)
	{
		___SPECTRUM_SIZE_9 = value;
		Il2CppCodeGenWriteBarrier(&___SPECTRUM_SIZE_9, value);
	}

	inline static int32_t get_offset_of_CONTOUR_COLOR_10() { return static_cast<int32_t>(offsetof(HandPoseEstimationSample_t4119919473, ___CONTOUR_COLOR_10)); }
	inline Scalar_t3445295492 * get_CONTOUR_COLOR_10() const { return ___CONTOUR_COLOR_10; }
	inline Scalar_t3445295492 ** get_address_of_CONTOUR_COLOR_10() { return &___CONTOUR_COLOR_10; }
	inline void set_CONTOUR_COLOR_10(Scalar_t3445295492 * value)
	{
		___CONTOUR_COLOR_10 = value;
		Il2CppCodeGenWriteBarrier(&___CONTOUR_COLOR_10, value);
	}

	inline static int32_t get_offset_of_CONTOUR_COLOR_WHITE_11() { return static_cast<int32_t>(offsetof(HandPoseEstimationSample_t4119919473, ___CONTOUR_COLOR_WHITE_11)); }
	inline Scalar_t3445295492 * get_CONTOUR_COLOR_WHITE_11() const { return ___CONTOUR_COLOR_WHITE_11; }
	inline Scalar_t3445295492 ** get_address_of_CONTOUR_COLOR_WHITE_11() { return &___CONTOUR_COLOR_WHITE_11; }
	inline void set_CONTOUR_COLOR_WHITE_11(Scalar_t3445295492 * value)
	{
		___CONTOUR_COLOR_WHITE_11 = value;
		Il2CppCodeGenWriteBarrier(&___CONTOUR_COLOR_WHITE_11, value);
	}

	inline static int32_t get_offset_of_numberOfFingers_12() { return static_cast<int32_t>(offsetof(HandPoseEstimationSample_t4119919473, ___numberOfFingers_12)); }
	inline int32_t get_numberOfFingers_12() const { return ___numberOfFingers_12; }
	inline int32_t* get_address_of_numberOfFingers_12() { return &___numberOfFingers_12; }
	inline void set_numberOfFingers_12(int32_t value)
	{
		___numberOfFingers_12 = value;
	}

	inline static int32_t get_offset_of_numberOfFingersText_13() { return static_cast<int32_t>(offsetof(HandPoseEstimationSample_t4119919473, ___numberOfFingersText_13)); }
	inline Text_t9039225 * get_numberOfFingersText_13() const { return ___numberOfFingersText_13; }
	inline Text_t9039225 ** get_address_of_numberOfFingersText_13() { return &___numberOfFingersText_13; }
	inline void set_numberOfFingersText_13(Text_t9039225 * value)
	{
		___numberOfFingersText_13 = value;
		Il2CppCodeGenWriteBarrier(&___numberOfFingersText_13, value);
	}

	inline static int32_t get_offset_of_webCamTextureToMatHelper_14() { return static_cast<int32_t>(offsetof(HandPoseEstimationSample_t4119919473, ___webCamTextureToMatHelper_14)); }
	inline WebCamTextureToMatHelper_t772277295 * get_webCamTextureToMatHelper_14() const { return ___webCamTextureToMatHelper_14; }
	inline WebCamTextureToMatHelper_t772277295 ** get_address_of_webCamTextureToMatHelper_14() { return &___webCamTextureToMatHelper_14; }
	inline void set_webCamTextureToMatHelper_14(WebCamTextureToMatHelper_t772277295 * value)
	{
		___webCamTextureToMatHelper_14 = value;
		Il2CppCodeGenWriteBarrier(&___webCamTextureToMatHelper_14, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
