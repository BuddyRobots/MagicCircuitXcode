#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// UnityEngine.Texture2D
struct Texture2D_t3884108195;
// UnityEngine.WebCamTexture
struct WebCamTexture_t1290350902;
// OpenCVForUnity.Mat
struct Mat_t3763101966;
// RecognizeAlgo
struct RecognizeAlgo_t3253563361;
// MagicCircuit.RotateCamera
struct RotateCamera_t3573233670;
// System.Collections.Generic.List`1<OpenCVForUnity.Mat>
struct List_1_t836320222;

#include "UnityEngine_UnityEngine_MonoBehaviour667441552.h"
#include "UnityEngine_UnityEngine_WebCamDevice3274004757.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// GetImage
struct  GetImage_t2020783045  : public MonoBehaviour_t667441552
{
public:
	// UnityEngine.Texture2D GetImage::texture
	Texture2D_t3884108195 * ___texture_6;
	// UnityEngine.WebCamTexture GetImage::webCamTexture
	WebCamTexture_t1290350902 * ___webCamTexture_7;
	// UnityEngine.WebCamDevice GetImage::webCamDevice
	WebCamDevice_t3274004757  ___webCamDevice_8;
	// OpenCVForUnity.Mat GetImage::frameImg
	Mat_t3763101966 * ___frameImg_9;
	// RecognizeAlgo GetImage::recognizeAlgo
	RecognizeAlgo_t3253563361 * ___recognizeAlgo_10;
	// MagicCircuit.RotateCamera GetImage::rotateCamera
	RotateCamera_t3573233670 * ___rotateCamera_11;
	// System.Boolean GetImage::initDone
	bool ___initDone_12;
	// System.Collections.Generic.List`1<OpenCVForUnity.Mat> GetImage::tempImgs
	List_1_t836320222 * ___tempImgs_13;
	// System.Collections.Generic.List`1<OpenCVForUnity.Mat> GetImage::matList
	List_1_t836320222 * ___matList_14;

public:
	inline static int32_t get_offset_of_texture_6() { return static_cast<int32_t>(offsetof(GetImage_t2020783045, ___texture_6)); }
	inline Texture2D_t3884108195 * get_texture_6() const { return ___texture_6; }
	inline Texture2D_t3884108195 ** get_address_of_texture_6() { return &___texture_6; }
	inline void set_texture_6(Texture2D_t3884108195 * value)
	{
		___texture_6 = value;
		Il2CppCodeGenWriteBarrier(&___texture_6, value);
	}

	inline static int32_t get_offset_of_webCamTexture_7() { return static_cast<int32_t>(offsetof(GetImage_t2020783045, ___webCamTexture_7)); }
	inline WebCamTexture_t1290350902 * get_webCamTexture_7() const { return ___webCamTexture_7; }
	inline WebCamTexture_t1290350902 ** get_address_of_webCamTexture_7() { return &___webCamTexture_7; }
	inline void set_webCamTexture_7(WebCamTexture_t1290350902 * value)
	{
		___webCamTexture_7 = value;
		Il2CppCodeGenWriteBarrier(&___webCamTexture_7, value);
	}

	inline static int32_t get_offset_of_webCamDevice_8() { return static_cast<int32_t>(offsetof(GetImage_t2020783045, ___webCamDevice_8)); }
	inline WebCamDevice_t3274004757  get_webCamDevice_8() const { return ___webCamDevice_8; }
	inline WebCamDevice_t3274004757 * get_address_of_webCamDevice_8() { return &___webCamDevice_8; }
	inline void set_webCamDevice_8(WebCamDevice_t3274004757  value)
	{
		___webCamDevice_8 = value;
	}

	inline static int32_t get_offset_of_frameImg_9() { return static_cast<int32_t>(offsetof(GetImage_t2020783045, ___frameImg_9)); }
	inline Mat_t3763101966 * get_frameImg_9() const { return ___frameImg_9; }
	inline Mat_t3763101966 ** get_address_of_frameImg_9() { return &___frameImg_9; }
	inline void set_frameImg_9(Mat_t3763101966 * value)
	{
		___frameImg_9 = value;
		Il2CppCodeGenWriteBarrier(&___frameImg_9, value);
	}

	inline static int32_t get_offset_of_recognizeAlgo_10() { return static_cast<int32_t>(offsetof(GetImage_t2020783045, ___recognizeAlgo_10)); }
	inline RecognizeAlgo_t3253563361 * get_recognizeAlgo_10() const { return ___recognizeAlgo_10; }
	inline RecognizeAlgo_t3253563361 ** get_address_of_recognizeAlgo_10() { return &___recognizeAlgo_10; }
	inline void set_recognizeAlgo_10(RecognizeAlgo_t3253563361 * value)
	{
		___recognizeAlgo_10 = value;
		Il2CppCodeGenWriteBarrier(&___recognizeAlgo_10, value);
	}

	inline static int32_t get_offset_of_rotateCamera_11() { return static_cast<int32_t>(offsetof(GetImage_t2020783045, ___rotateCamera_11)); }
	inline RotateCamera_t3573233670 * get_rotateCamera_11() const { return ___rotateCamera_11; }
	inline RotateCamera_t3573233670 ** get_address_of_rotateCamera_11() { return &___rotateCamera_11; }
	inline void set_rotateCamera_11(RotateCamera_t3573233670 * value)
	{
		___rotateCamera_11 = value;
		Il2CppCodeGenWriteBarrier(&___rotateCamera_11, value);
	}

	inline static int32_t get_offset_of_initDone_12() { return static_cast<int32_t>(offsetof(GetImage_t2020783045, ___initDone_12)); }
	inline bool get_initDone_12() const { return ___initDone_12; }
	inline bool* get_address_of_initDone_12() { return &___initDone_12; }
	inline void set_initDone_12(bool value)
	{
		___initDone_12 = value;
	}

	inline static int32_t get_offset_of_tempImgs_13() { return static_cast<int32_t>(offsetof(GetImage_t2020783045, ___tempImgs_13)); }
	inline List_1_t836320222 * get_tempImgs_13() const { return ___tempImgs_13; }
	inline List_1_t836320222 ** get_address_of_tempImgs_13() { return &___tempImgs_13; }
	inline void set_tempImgs_13(List_1_t836320222 * value)
	{
		___tempImgs_13 = value;
		Il2CppCodeGenWriteBarrier(&___tempImgs_13, value);
	}

	inline static int32_t get_offset_of_matList_14() { return static_cast<int32_t>(offsetof(GetImage_t2020783045, ___matList_14)); }
	inline List_1_t836320222 * get_matList_14() const { return ___matList_14; }
	inline List_1_t836320222 ** get_address_of_matList_14() { return &___matList_14; }
	inline void set_matList_14(List_1_t836320222 * value)
	{
		___matList_14 = value;
		Il2CppCodeGenWriteBarrier(&___matList_14, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
