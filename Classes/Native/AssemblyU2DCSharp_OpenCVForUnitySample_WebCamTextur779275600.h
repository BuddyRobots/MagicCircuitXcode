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
// OpenCVForUnity.Mat
struct Mat_t3763101966;
// UnityEngine.Texture2D
struct Texture2D_t3884108195;
// OpenCVForUnity.CascadeClassifier
struct CascadeClassifier_t2991922275;
// OpenCVForUnity.MatOfRect
struct MatOfRect_t3527744841;
// OpenCVForUnitySample.WebCamTextureToMatHelper
struct WebCamTextureToMatHelper_t772277295;

#include "UnityEngine_UnityEngine_MonoBehaviour667441552.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// OpenCVForUnitySample.WebCamTextureDetectFaceSample
struct  WebCamTextureDetectFaceSample_t779275600  : public MonoBehaviour_t667441552
{
public:
	// UnityEngine.Color32[] OpenCVForUnitySample.WebCamTextureDetectFaceSample::colors
	Color32U5BU5D_t2960766953* ___colors_2;
	// OpenCVForUnity.Mat OpenCVForUnitySample.WebCamTextureDetectFaceSample::grayMat
	Mat_t3763101966 * ___grayMat_3;
	// UnityEngine.Texture2D OpenCVForUnitySample.WebCamTextureDetectFaceSample::texture
	Texture2D_t3884108195 * ___texture_4;
	// OpenCVForUnity.CascadeClassifier OpenCVForUnitySample.WebCamTextureDetectFaceSample::cascade
	CascadeClassifier_t2991922275 * ___cascade_5;
	// OpenCVForUnity.MatOfRect OpenCVForUnitySample.WebCamTextureDetectFaceSample::faces
	MatOfRect_t3527744841 * ___faces_6;
	// OpenCVForUnitySample.WebCamTextureToMatHelper OpenCVForUnitySample.WebCamTextureDetectFaceSample::webCamTextureToMatHelper
	WebCamTextureToMatHelper_t772277295 * ___webCamTextureToMatHelper_7;

public:
	inline static int32_t get_offset_of_colors_2() { return static_cast<int32_t>(offsetof(WebCamTextureDetectFaceSample_t779275600, ___colors_2)); }
	inline Color32U5BU5D_t2960766953* get_colors_2() const { return ___colors_2; }
	inline Color32U5BU5D_t2960766953** get_address_of_colors_2() { return &___colors_2; }
	inline void set_colors_2(Color32U5BU5D_t2960766953* value)
	{
		___colors_2 = value;
		Il2CppCodeGenWriteBarrier(&___colors_2, value);
	}

	inline static int32_t get_offset_of_grayMat_3() { return static_cast<int32_t>(offsetof(WebCamTextureDetectFaceSample_t779275600, ___grayMat_3)); }
	inline Mat_t3763101966 * get_grayMat_3() const { return ___grayMat_3; }
	inline Mat_t3763101966 ** get_address_of_grayMat_3() { return &___grayMat_3; }
	inline void set_grayMat_3(Mat_t3763101966 * value)
	{
		___grayMat_3 = value;
		Il2CppCodeGenWriteBarrier(&___grayMat_3, value);
	}

	inline static int32_t get_offset_of_texture_4() { return static_cast<int32_t>(offsetof(WebCamTextureDetectFaceSample_t779275600, ___texture_4)); }
	inline Texture2D_t3884108195 * get_texture_4() const { return ___texture_4; }
	inline Texture2D_t3884108195 ** get_address_of_texture_4() { return &___texture_4; }
	inline void set_texture_4(Texture2D_t3884108195 * value)
	{
		___texture_4 = value;
		Il2CppCodeGenWriteBarrier(&___texture_4, value);
	}

	inline static int32_t get_offset_of_cascade_5() { return static_cast<int32_t>(offsetof(WebCamTextureDetectFaceSample_t779275600, ___cascade_5)); }
	inline CascadeClassifier_t2991922275 * get_cascade_5() const { return ___cascade_5; }
	inline CascadeClassifier_t2991922275 ** get_address_of_cascade_5() { return &___cascade_5; }
	inline void set_cascade_5(CascadeClassifier_t2991922275 * value)
	{
		___cascade_5 = value;
		Il2CppCodeGenWriteBarrier(&___cascade_5, value);
	}

	inline static int32_t get_offset_of_faces_6() { return static_cast<int32_t>(offsetof(WebCamTextureDetectFaceSample_t779275600, ___faces_6)); }
	inline MatOfRect_t3527744841 * get_faces_6() const { return ___faces_6; }
	inline MatOfRect_t3527744841 ** get_address_of_faces_6() { return &___faces_6; }
	inline void set_faces_6(MatOfRect_t3527744841 * value)
	{
		___faces_6 = value;
		Il2CppCodeGenWriteBarrier(&___faces_6, value);
	}

	inline static int32_t get_offset_of_webCamTextureToMatHelper_7() { return static_cast<int32_t>(offsetof(WebCamTextureDetectFaceSample_t779275600, ___webCamTextureToMatHelper_7)); }
	inline WebCamTextureToMatHelper_t772277295 * get_webCamTextureToMatHelper_7() const { return ___webCamTextureToMatHelper_7; }
	inline WebCamTextureToMatHelper_t772277295 ** get_address_of_webCamTextureToMatHelper_7() { return &___webCamTextureToMatHelper_7; }
	inline void set_webCamTextureToMatHelper_7(WebCamTextureToMatHelper_t772277295 * value)
	{
		___webCamTextureToMatHelper_7 = value;
		Il2CppCodeGenWriteBarrier(&___webCamTextureToMatHelper_7, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
