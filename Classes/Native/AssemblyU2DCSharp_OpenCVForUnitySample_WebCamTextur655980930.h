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
// OpenCVForUnity.Rect[]
struct RectU5BU5D_t4274034901;
// System.Collections.Generic.List`1<OpenCVForUnity.Rect>
struct List_1_t1173347212;
// System.Collections.Generic.List`1<OpenCVForUnitySample.WebCamTextureAsyncDetectFaceSample/TrackedObject>
struct List_1_t1114110091;
// System.Collections.Generic.List`1<System.Single>
struct List_1_t1365137228;
// OpenCVForUnitySample.WebCamTextureAsyncDetectFaceSample/ThreadComm
struct ThreadComm_t133737156;
// System.Object
struct Il2CppObject;
// OpenCVForUnity.MatOfRect
struct MatOfRect_t3527744841;
// OpenCVForUnitySample.WebCamTextureToMatHelper
struct WebCamTextureToMatHelper_t772277295;

#include "UnityEngine_UnityEngine_MonoBehaviour667441552.h"
#include "AssemblyU2DCSharp_OpenCVForUnitySample_WebCamTextu1777946744.h"
#include "AssemblyU2DCSharp_OpenCVForUnitySample_WebCamTextu1042731794.h"
#include "mscorlib_System_Boolean476798718.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// OpenCVForUnitySample.WebCamTextureAsyncDetectFaceSample
struct  WebCamTextureAsyncDetectFaceSample_t655980930  : public MonoBehaviour_t667441552
{
public:
	// UnityEngine.Color32[] OpenCVForUnitySample.WebCamTextureAsyncDetectFaceSample::colors
	Color32U5BU5D_t2960766953* ___colors_2;
	// OpenCVForUnity.Mat OpenCVForUnitySample.WebCamTextureAsyncDetectFaceSample::grayMat
	Mat_t3763101966 * ___grayMat_3;
	// UnityEngine.Texture2D OpenCVForUnitySample.WebCamTextureAsyncDetectFaceSample::texture
	Texture2D_t3884108195 * ___texture_4;
	// OpenCVForUnity.CascadeClassifier OpenCVForUnitySample.WebCamTextureAsyncDetectFaceSample::cascade
	CascadeClassifier_t2991922275 * ___cascade_5;
	// OpenCVForUnity.CascadeClassifier OpenCVForUnitySample.WebCamTextureAsyncDetectFaceSample::regionCascade
	CascadeClassifier_t2991922275 * ___regionCascade_6;
	// OpenCVForUnity.Rect[] OpenCVForUnitySample.WebCamTextureAsyncDetectFaceSample::rectsWhereRegions
	RectU5BU5D_t4274034901* ___rectsWhereRegions_7;
	// System.Collections.Generic.List`1<OpenCVForUnity.Rect> OpenCVForUnitySample.WebCamTextureAsyncDetectFaceSample::detectedObjectsInRegions
	List_1_t1173347212 * ___detectedObjectsInRegions_8;
	// System.Collections.Generic.List`1<OpenCVForUnity.Rect> OpenCVForUnitySample.WebCamTextureAsyncDetectFaceSample::resultObjects
	List_1_t1173347212 * ___resultObjects_9;
	// System.Collections.Generic.List`1<OpenCVForUnitySample.WebCamTextureAsyncDetectFaceSample/TrackedObject> OpenCVForUnitySample.WebCamTextureAsyncDetectFaceSample::trackedObjects
	List_1_t1114110091 * ___trackedObjects_10;
	// System.Collections.Generic.List`1<System.Single> OpenCVForUnitySample.WebCamTextureAsyncDetectFaceSample::weightsPositionsSmoothing
	List_1_t1365137228 * ___weightsPositionsSmoothing_11;
	// System.Collections.Generic.List`1<System.Single> OpenCVForUnitySample.WebCamTextureAsyncDetectFaceSample::weightsSizesSmoothing
	List_1_t1365137228 * ___weightsSizesSmoothing_12;
	// OpenCVForUnitySample.WebCamTextureAsyncDetectFaceSample/Parameters OpenCVForUnitySample.WebCamTextureAsyncDetectFaceSample::parameters
	Parameters_t1777946744  ___parameters_13;
	// OpenCVForUnitySample.WebCamTextureAsyncDetectFaceSample/InnerParameters OpenCVForUnitySample.WebCamTextureAsyncDetectFaceSample::innerParameters
	InnerParameters_t1042731794  ___innerParameters_14;
	// System.Boolean modreq(System.Runtime.CompilerServices.IsVolatile) OpenCVForUnitySample.WebCamTextureAsyncDetectFaceSample::shouldStopThread
	bool ___shouldStopThread_15;
	// OpenCVForUnitySample.WebCamTextureAsyncDetectFaceSample/ThreadComm modreq(System.Runtime.CompilerServices.IsVolatile) OpenCVForUnitySample.WebCamTextureAsyncDetectFaceSample::threadComm
	ThreadComm_t133737156 * ___threadComm_16;
	// System.Object OpenCVForUnitySample.WebCamTextureAsyncDetectFaceSample::thisLock
	Il2CppObject * ___thisLock_17;
	// System.Boolean modreq(System.Runtime.CompilerServices.IsVolatile) OpenCVForUnitySample.WebCamTextureAsyncDetectFaceSample::isThreadRunning
	bool ___isThreadRunning_18;
	// System.Boolean modreq(System.Runtime.CompilerServices.IsVolatile) OpenCVForUnitySample.WebCamTextureAsyncDetectFaceSample::didUpdateTheDetectionResult
	bool ___didUpdateTheDetectionResult_19;
	// OpenCVForUnity.Mat OpenCVForUnitySample.WebCamTextureAsyncDetectFaceSample::grayMat4Thread
	Mat_t3763101966 * ___grayMat4Thread_20;
	// OpenCVForUnity.MatOfRect OpenCVForUnitySample.WebCamTextureAsyncDetectFaceSample::resultDetect
	MatOfRect_t3527744841 * ___resultDetect_21;
	// OpenCVForUnitySample.WebCamTextureToMatHelper OpenCVForUnitySample.WebCamTextureAsyncDetectFaceSample::webCamTextureToMatHelper
	WebCamTextureToMatHelper_t772277295 * ___webCamTextureToMatHelper_22;

public:
	inline static int32_t get_offset_of_colors_2() { return static_cast<int32_t>(offsetof(WebCamTextureAsyncDetectFaceSample_t655980930, ___colors_2)); }
	inline Color32U5BU5D_t2960766953* get_colors_2() const { return ___colors_2; }
	inline Color32U5BU5D_t2960766953** get_address_of_colors_2() { return &___colors_2; }
	inline void set_colors_2(Color32U5BU5D_t2960766953* value)
	{
		___colors_2 = value;
		Il2CppCodeGenWriteBarrier(&___colors_2, value);
	}

	inline static int32_t get_offset_of_grayMat_3() { return static_cast<int32_t>(offsetof(WebCamTextureAsyncDetectFaceSample_t655980930, ___grayMat_3)); }
	inline Mat_t3763101966 * get_grayMat_3() const { return ___grayMat_3; }
	inline Mat_t3763101966 ** get_address_of_grayMat_3() { return &___grayMat_3; }
	inline void set_grayMat_3(Mat_t3763101966 * value)
	{
		___grayMat_3 = value;
		Il2CppCodeGenWriteBarrier(&___grayMat_3, value);
	}

	inline static int32_t get_offset_of_texture_4() { return static_cast<int32_t>(offsetof(WebCamTextureAsyncDetectFaceSample_t655980930, ___texture_4)); }
	inline Texture2D_t3884108195 * get_texture_4() const { return ___texture_4; }
	inline Texture2D_t3884108195 ** get_address_of_texture_4() { return &___texture_4; }
	inline void set_texture_4(Texture2D_t3884108195 * value)
	{
		___texture_4 = value;
		Il2CppCodeGenWriteBarrier(&___texture_4, value);
	}

	inline static int32_t get_offset_of_cascade_5() { return static_cast<int32_t>(offsetof(WebCamTextureAsyncDetectFaceSample_t655980930, ___cascade_5)); }
	inline CascadeClassifier_t2991922275 * get_cascade_5() const { return ___cascade_5; }
	inline CascadeClassifier_t2991922275 ** get_address_of_cascade_5() { return &___cascade_5; }
	inline void set_cascade_5(CascadeClassifier_t2991922275 * value)
	{
		___cascade_5 = value;
		Il2CppCodeGenWriteBarrier(&___cascade_5, value);
	}

	inline static int32_t get_offset_of_regionCascade_6() { return static_cast<int32_t>(offsetof(WebCamTextureAsyncDetectFaceSample_t655980930, ___regionCascade_6)); }
	inline CascadeClassifier_t2991922275 * get_regionCascade_6() const { return ___regionCascade_6; }
	inline CascadeClassifier_t2991922275 ** get_address_of_regionCascade_6() { return &___regionCascade_6; }
	inline void set_regionCascade_6(CascadeClassifier_t2991922275 * value)
	{
		___regionCascade_6 = value;
		Il2CppCodeGenWriteBarrier(&___regionCascade_6, value);
	}

	inline static int32_t get_offset_of_rectsWhereRegions_7() { return static_cast<int32_t>(offsetof(WebCamTextureAsyncDetectFaceSample_t655980930, ___rectsWhereRegions_7)); }
	inline RectU5BU5D_t4274034901* get_rectsWhereRegions_7() const { return ___rectsWhereRegions_7; }
	inline RectU5BU5D_t4274034901** get_address_of_rectsWhereRegions_7() { return &___rectsWhereRegions_7; }
	inline void set_rectsWhereRegions_7(RectU5BU5D_t4274034901* value)
	{
		___rectsWhereRegions_7 = value;
		Il2CppCodeGenWriteBarrier(&___rectsWhereRegions_7, value);
	}

	inline static int32_t get_offset_of_detectedObjectsInRegions_8() { return static_cast<int32_t>(offsetof(WebCamTextureAsyncDetectFaceSample_t655980930, ___detectedObjectsInRegions_8)); }
	inline List_1_t1173347212 * get_detectedObjectsInRegions_8() const { return ___detectedObjectsInRegions_8; }
	inline List_1_t1173347212 ** get_address_of_detectedObjectsInRegions_8() { return &___detectedObjectsInRegions_8; }
	inline void set_detectedObjectsInRegions_8(List_1_t1173347212 * value)
	{
		___detectedObjectsInRegions_8 = value;
		Il2CppCodeGenWriteBarrier(&___detectedObjectsInRegions_8, value);
	}

	inline static int32_t get_offset_of_resultObjects_9() { return static_cast<int32_t>(offsetof(WebCamTextureAsyncDetectFaceSample_t655980930, ___resultObjects_9)); }
	inline List_1_t1173347212 * get_resultObjects_9() const { return ___resultObjects_9; }
	inline List_1_t1173347212 ** get_address_of_resultObjects_9() { return &___resultObjects_9; }
	inline void set_resultObjects_9(List_1_t1173347212 * value)
	{
		___resultObjects_9 = value;
		Il2CppCodeGenWriteBarrier(&___resultObjects_9, value);
	}

	inline static int32_t get_offset_of_trackedObjects_10() { return static_cast<int32_t>(offsetof(WebCamTextureAsyncDetectFaceSample_t655980930, ___trackedObjects_10)); }
	inline List_1_t1114110091 * get_trackedObjects_10() const { return ___trackedObjects_10; }
	inline List_1_t1114110091 ** get_address_of_trackedObjects_10() { return &___trackedObjects_10; }
	inline void set_trackedObjects_10(List_1_t1114110091 * value)
	{
		___trackedObjects_10 = value;
		Il2CppCodeGenWriteBarrier(&___trackedObjects_10, value);
	}

	inline static int32_t get_offset_of_weightsPositionsSmoothing_11() { return static_cast<int32_t>(offsetof(WebCamTextureAsyncDetectFaceSample_t655980930, ___weightsPositionsSmoothing_11)); }
	inline List_1_t1365137228 * get_weightsPositionsSmoothing_11() const { return ___weightsPositionsSmoothing_11; }
	inline List_1_t1365137228 ** get_address_of_weightsPositionsSmoothing_11() { return &___weightsPositionsSmoothing_11; }
	inline void set_weightsPositionsSmoothing_11(List_1_t1365137228 * value)
	{
		___weightsPositionsSmoothing_11 = value;
		Il2CppCodeGenWriteBarrier(&___weightsPositionsSmoothing_11, value);
	}

	inline static int32_t get_offset_of_weightsSizesSmoothing_12() { return static_cast<int32_t>(offsetof(WebCamTextureAsyncDetectFaceSample_t655980930, ___weightsSizesSmoothing_12)); }
	inline List_1_t1365137228 * get_weightsSizesSmoothing_12() const { return ___weightsSizesSmoothing_12; }
	inline List_1_t1365137228 ** get_address_of_weightsSizesSmoothing_12() { return &___weightsSizesSmoothing_12; }
	inline void set_weightsSizesSmoothing_12(List_1_t1365137228 * value)
	{
		___weightsSizesSmoothing_12 = value;
		Il2CppCodeGenWriteBarrier(&___weightsSizesSmoothing_12, value);
	}

	inline static int32_t get_offset_of_parameters_13() { return static_cast<int32_t>(offsetof(WebCamTextureAsyncDetectFaceSample_t655980930, ___parameters_13)); }
	inline Parameters_t1777946744  get_parameters_13() const { return ___parameters_13; }
	inline Parameters_t1777946744 * get_address_of_parameters_13() { return &___parameters_13; }
	inline void set_parameters_13(Parameters_t1777946744  value)
	{
		___parameters_13 = value;
	}

	inline static int32_t get_offset_of_innerParameters_14() { return static_cast<int32_t>(offsetof(WebCamTextureAsyncDetectFaceSample_t655980930, ___innerParameters_14)); }
	inline InnerParameters_t1042731794  get_innerParameters_14() const { return ___innerParameters_14; }
	inline InnerParameters_t1042731794 * get_address_of_innerParameters_14() { return &___innerParameters_14; }
	inline void set_innerParameters_14(InnerParameters_t1042731794  value)
	{
		___innerParameters_14 = value;
	}

	inline static int32_t get_offset_of_shouldStopThread_15() { return static_cast<int32_t>(offsetof(WebCamTextureAsyncDetectFaceSample_t655980930, ___shouldStopThread_15)); }
	inline bool get_shouldStopThread_15() const { return ___shouldStopThread_15; }
	inline bool* get_address_of_shouldStopThread_15() { return &___shouldStopThread_15; }
	inline void set_shouldStopThread_15(bool value)
	{
		___shouldStopThread_15 = value;
	}

	inline static int32_t get_offset_of_threadComm_16() { return static_cast<int32_t>(offsetof(WebCamTextureAsyncDetectFaceSample_t655980930, ___threadComm_16)); }
	inline ThreadComm_t133737156 * get_threadComm_16() const { return ___threadComm_16; }
	inline ThreadComm_t133737156 ** get_address_of_threadComm_16() { return &___threadComm_16; }
	inline void set_threadComm_16(ThreadComm_t133737156 * value)
	{
		___threadComm_16 = value;
		Il2CppCodeGenWriteBarrier(&___threadComm_16, value);
	}

	inline static int32_t get_offset_of_thisLock_17() { return static_cast<int32_t>(offsetof(WebCamTextureAsyncDetectFaceSample_t655980930, ___thisLock_17)); }
	inline Il2CppObject * get_thisLock_17() const { return ___thisLock_17; }
	inline Il2CppObject ** get_address_of_thisLock_17() { return &___thisLock_17; }
	inline void set_thisLock_17(Il2CppObject * value)
	{
		___thisLock_17 = value;
		Il2CppCodeGenWriteBarrier(&___thisLock_17, value);
	}

	inline static int32_t get_offset_of_isThreadRunning_18() { return static_cast<int32_t>(offsetof(WebCamTextureAsyncDetectFaceSample_t655980930, ___isThreadRunning_18)); }
	inline bool get_isThreadRunning_18() const { return ___isThreadRunning_18; }
	inline bool* get_address_of_isThreadRunning_18() { return &___isThreadRunning_18; }
	inline void set_isThreadRunning_18(bool value)
	{
		___isThreadRunning_18 = value;
	}

	inline static int32_t get_offset_of_didUpdateTheDetectionResult_19() { return static_cast<int32_t>(offsetof(WebCamTextureAsyncDetectFaceSample_t655980930, ___didUpdateTheDetectionResult_19)); }
	inline bool get_didUpdateTheDetectionResult_19() const { return ___didUpdateTheDetectionResult_19; }
	inline bool* get_address_of_didUpdateTheDetectionResult_19() { return &___didUpdateTheDetectionResult_19; }
	inline void set_didUpdateTheDetectionResult_19(bool value)
	{
		___didUpdateTheDetectionResult_19 = value;
	}

	inline static int32_t get_offset_of_grayMat4Thread_20() { return static_cast<int32_t>(offsetof(WebCamTextureAsyncDetectFaceSample_t655980930, ___grayMat4Thread_20)); }
	inline Mat_t3763101966 * get_grayMat4Thread_20() const { return ___grayMat4Thread_20; }
	inline Mat_t3763101966 ** get_address_of_grayMat4Thread_20() { return &___grayMat4Thread_20; }
	inline void set_grayMat4Thread_20(Mat_t3763101966 * value)
	{
		___grayMat4Thread_20 = value;
		Il2CppCodeGenWriteBarrier(&___grayMat4Thread_20, value);
	}

	inline static int32_t get_offset_of_resultDetect_21() { return static_cast<int32_t>(offsetof(WebCamTextureAsyncDetectFaceSample_t655980930, ___resultDetect_21)); }
	inline MatOfRect_t3527744841 * get_resultDetect_21() const { return ___resultDetect_21; }
	inline MatOfRect_t3527744841 ** get_address_of_resultDetect_21() { return &___resultDetect_21; }
	inline void set_resultDetect_21(MatOfRect_t3527744841 * value)
	{
		___resultDetect_21 = value;
		Il2CppCodeGenWriteBarrier(&___resultDetect_21, value);
	}

	inline static int32_t get_offset_of_webCamTextureToMatHelper_22() { return static_cast<int32_t>(offsetof(WebCamTextureAsyncDetectFaceSample_t655980930, ___webCamTextureToMatHelper_22)); }
	inline WebCamTextureToMatHelper_t772277295 * get_webCamTextureToMatHelper_22() const { return ___webCamTextureToMatHelper_22; }
	inline WebCamTextureToMatHelper_t772277295 ** get_address_of_webCamTextureToMatHelper_22() { return &___webCamTextureToMatHelper_22; }
	inline void set_webCamTextureToMatHelper_22(WebCamTextureToMatHelper_t772277295 * value)
	{
		___webCamTextureToMatHelper_22 = value;
		Il2CppCodeGenWriteBarrier(&___webCamTextureToMatHelper_22, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
