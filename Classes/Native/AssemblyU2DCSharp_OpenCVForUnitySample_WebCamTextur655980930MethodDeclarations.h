#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>
#include <assert.h>
#include <exception>

// OpenCVForUnitySample.WebCamTextureAsyncDetectFaceSample
struct WebCamTextureAsyncDetectFaceSample_t655980930;
// System.Object
struct Il2CppObject;
// System.Collections.Generic.List`1<OpenCVForUnity.Rect>
struct List_1_t1173347212;
// OpenCVForUnity.Mat
struct Mat_t3763101966;
// OpenCVForUnity.Rect
struct Rect_t4100128956;
// OpenCVForUnity.Point
struct Point_t1661367934;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_Object4170816371.h"
#include "AssemblyU2DCSharp_OpenCVForUnity_Mat3763101966.h"
#include "AssemblyU2DCSharp_OpenCVForUnity_Rect4100128956.h"

// System.Void OpenCVForUnitySample.WebCamTextureAsyncDetectFaceSample::.ctor()
extern "C"  void WebCamTextureAsyncDetectFaceSample__ctor_m3950892074 (WebCamTextureAsyncDetectFaceSample_t655980930 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void OpenCVForUnitySample.WebCamTextureAsyncDetectFaceSample::Start()
extern "C"  void WebCamTextureAsyncDetectFaceSample_Start_m2898029866 (WebCamTextureAsyncDetectFaceSample_t655980930 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void OpenCVForUnitySample.WebCamTextureAsyncDetectFaceSample::OnWebCamTextureToMatHelperInited()
extern "C"  void WebCamTextureAsyncDetectFaceSample_OnWebCamTextureToMatHelperInited_m2138579323 (WebCamTextureAsyncDetectFaceSample_t655980930 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void OpenCVForUnitySample.WebCamTextureAsyncDetectFaceSample::OnWebCamTextureToMatHelperDisposed()
extern "C"  void WebCamTextureAsyncDetectFaceSample_OnWebCamTextureToMatHelperDisposed_m610506161 (WebCamTextureAsyncDetectFaceSample_t655980930 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void OpenCVForUnitySample.WebCamTextureAsyncDetectFaceSample::Update()
extern "C"  void WebCamTextureAsyncDetectFaceSample_Update_m3945432099 (WebCamTextureAsyncDetectFaceSample_t655980930 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void OpenCVForUnitySample.WebCamTextureAsyncDetectFaceSample::initThread()
extern "C"  void WebCamTextureAsyncDetectFaceSample_initThread_m3877600692 (WebCamTextureAsyncDetectFaceSample_t655980930 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void OpenCVForUnitySample.WebCamTextureAsyncDetectFaceSample::ThreadWorker()
extern "C"  void WebCamTextureAsyncDetectFaceSample_ThreadWorker_m1530197762 (WebCamTextureAsyncDetectFaceSample_t655980930 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void OpenCVForUnitySample.WebCamTextureAsyncDetectFaceSample::_ThreadWorker(System.Object)
extern "C"  void WebCamTextureAsyncDetectFaceSample__ThreadWorker_m2817659173 (WebCamTextureAsyncDetectFaceSample_t655980930 * __this, Il2CppObject * ___o0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void OpenCVForUnitySample.WebCamTextureAsyncDetectFaceSample::StartThread()
extern "C"  void WebCamTextureAsyncDetectFaceSample_StartThread_m2354971156 (WebCamTextureAsyncDetectFaceSample_t655980930 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void OpenCVForUnitySample.WebCamTextureAsyncDetectFaceSample::StopThread()
extern "C"  void WebCamTextureAsyncDetectFaceSample_StopThread_m601776838 (WebCamTextureAsyncDetectFaceSample_t655980930 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void OpenCVForUnitySample.WebCamTextureAsyncDetectFaceSample::getObjects(System.Collections.Generic.List`1<OpenCVForUnity.Rect>)
extern "C"  void WebCamTextureAsyncDetectFaceSample_getObjects_m473519109 (WebCamTextureAsyncDetectFaceSample_t655980930 * __this, List_1_t1173347212 * ___result0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void OpenCVForUnitySample.WebCamTextureAsyncDetectFaceSample::updateTrackedObjects(System.Collections.Generic.List`1<OpenCVForUnity.Rect>)
extern "C"  void WebCamTextureAsyncDetectFaceSample_updateTrackedObjects_m2056343706 (WebCamTextureAsyncDetectFaceSample_t655980930 * __this, List_1_t1173347212 * ___detectedObjects0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void OpenCVForUnitySample.WebCamTextureAsyncDetectFaceSample::detectInRegion(OpenCVForUnity.Mat,OpenCVForUnity.Rect,System.Collections.Generic.List`1<OpenCVForUnity.Rect>)
extern "C"  void WebCamTextureAsyncDetectFaceSample_detectInRegion_m1824537205 (WebCamTextureAsyncDetectFaceSample_t655980930 * __this, Mat_t3763101966 * ___img0, Rect_t4100128956 * ___r1, List_1_t1173347212 * ___detectedObjectsInRegions2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// OpenCVForUnity.Rect OpenCVForUnitySample.WebCamTextureAsyncDetectFaceSample::calcTrackedObjectPositionToShow(System.Int32)
extern "C"  Rect_t4100128956 * WebCamTextureAsyncDetectFaceSample_calcTrackedObjectPositionToShow_m620369592 (WebCamTextureAsyncDetectFaceSample_t655980930 * __this, int32_t ___i0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// OpenCVForUnity.Point OpenCVForUnitySample.WebCamTextureAsyncDetectFaceSample::centerRect(OpenCVForUnity.Rect)
extern "C"  Point_t1661367934 * WebCamTextureAsyncDetectFaceSample_centerRect_m2552172328 (WebCamTextureAsyncDetectFaceSample_t655980930 * __this, Rect_t4100128956 * ___r0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// OpenCVForUnity.Rect OpenCVForUnitySample.WebCamTextureAsyncDetectFaceSample::Intersect(OpenCVForUnity.Rect,OpenCVForUnity.Rect)
extern "C"  Rect_t4100128956 * WebCamTextureAsyncDetectFaceSample_Intersect_m2110142779 (WebCamTextureAsyncDetectFaceSample_t655980930 * __this, Rect_t4100128956 * ___a0, Rect_t4100128956 * ___b1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// OpenCVForUnity.Rect OpenCVForUnitySample.WebCamTextureAsyncDetectFaceSample::Inflate(OpenCVForUnity.Rect,System.Int32,System.Int32)
extern "C"  Rect_t4100128956 * WebCamTextureAsyncDetectFaceSample_Inflate_m184522192 (WebCamTextureAsyncDetectFaceSample_t655980930 * __this, Rect_t4100128956 * ___rect0, int32_t ___x1, int32_t ___y2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void OpenCVForUnitySample.WebCamTextureAsyncDetectFaceSample::OnDisable()
extern "C"  void WebCamTextureAsyncDetectFaceSample_OnDisable_m2697659281 (WebCamTextureAsyncDetectFaceSample_t655980930 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void OpenCVForUnitySample.WebCamTextureAsyncDetectFaceSample::OnBackButton()
extern "C"  void WebCamTextureAsyncDetectFaceSample_OnBackButton_m1985741586 (WebCamTextureAsyncDetectFaceSample_t655980930 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void OpenCVForUnitySample.WebCamTextureAsyncDetectFaceSample::OnPlayButton()
extern "C"  void WebCamTextureAsyncDetectFaceSample_OnPlayButton_m2064772191 (WebCamTextureAsyncDetectFaceSample_t655980930 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void OpenCVForUnitySample.WebCamTextureAsyncDetectFaceSample::OnPauseButton()
extern "C"  void WebCamTextureAsyncDetectFaceSample_OnPauseButton_m1130118513 (WebCamTextureAsyncDetectFaceSample_t655980930 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void OpenCVForUnitySample.WebCamTextureAsyncDetectFaceSample::OnStopButton()
extern "C"  void WebCamTextureAsyncDetectFaceSample_OnStopButton_m1592310573 (WebCamTextureAsyncDetectFaceSample_t655980930 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void OpenCVForUnitySample.WebCamTextureAsyncDetectFaceSample::OnChangeCameraButton()
extern "C"  void WebCamTextureAsyncDetectFaceSample_OnChangeCameraButton_m342062880 (WebCamTextureAsyncDetectFaceSample_t655980930 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
