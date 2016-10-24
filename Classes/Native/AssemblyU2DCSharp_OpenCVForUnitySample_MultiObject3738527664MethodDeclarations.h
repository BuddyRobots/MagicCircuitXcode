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

// OpenCVForUnitySample.MultiObjectTrackingBasedOnColorSample
struct MultiObjectTrackingBasedOnColorSample_t3738527664;
// System.Collections.Generic.List`1<ColorObject>
struct List_1_t3886869298;
// OpenCVForUnity.Mat
struct Mat_t3763101966;
// System.Collections.Generic.List`1<OpenCVForUnity.MatOfPoint>
struct List_1_t2465515105;
// ColorObject
struct ColorObject_t2518683746;

#include "codegen/il2cpp-codegen.h"
#include "AssemblyU2DCSharp_OpenCVForUnity_Mat3763101966.h"
#include "AssemblyU2DCSharp_ColorObject2518683746.h"

// System.Void OpenCVForUnitySample.MultiObjectTrackingBasedOnColorSample::.ctor()
extern "C"  void MultiObjectTrackingBasedOnColorSample__ctor_m2585346796 (MultiObjectTrackingBasedOnColorSample_t3738527664 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void OpenCVForUnitySample.MultiObjectTrackingBasedOnColorSample::Start()
extern "C"  void MultiObjectTrackingBasedOnColorSample_Start_m1532484588 (MultiObjectTrackingBasedOnColorSample_t3738527664 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void OpenCVForUnitySample.MultiObjectTrackingBasedOnColorSample::OnWebCamTextureToMatHelperInited()
extern "C"  void MultiObjectTrackingBasedOnColorSample_OnWebCamTextureToMatHelperInited_m3616508281 (MultiObjectTrackingBasedOnColorSample_t3738527664 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void OpenCVForUnitySample.MultiObjectTrackingBasedOnColorSample::OnWebCamTextureToMatHelperDisposed()
extern "C"  void MultiObjectTrackingBasedOnColorSample_OnWebCamTextureToMatHelperDisposed_m3561027119 (MultiObjectTrackingBasedOnColorSample_t3738527664 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void OpenCVForUnitySample.MultiObjectTrackingBasedOnColorSample::Update()
extern "C"  void MultiObjectTrackingBasedOnColorSample_Update_m268234145 (MultiObjectTrackingBasedOnColorSample_t3738527664 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void OpenCVForUnitySample.MultiObjectTrackingBasedOnColorSample::OnDisable()
extern "C"  void MultiObjectTrackingBasedOnColorSample_OnDisable_m2729263443 (MultiObjectTrackingBasedOnColorSample_t3738527664 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void OpenCVForUnitySample.MultiObjectTrackingBasedOnColorSample::OnBackButton()
extern "C"  void MultiObjectTrackingBasedOnColorSample_OnBackButton_m2907493904 (MultiObjectTrackingBasedOnColorSample_t3738527664 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void OpenCVForUnitySample.MultiObjectTrackingBasedOnColorSample::OnPlayButton()
extern "C"  void MultiObjectTrackingBasedOnColorSample_OnPlayButton_m2986524509 (MultiObjectTrackingBasedOnColorSample_t3738527664 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void OpenCVForUnitySample.MultiObjectTrackingBasedOnColorSample::OnPauseButton()
extern "C"  void MultiObjectTrackingBasedOnColorSample_OnPauseButton_m3934636595 (MultiObjectTrackingBasedOnColorSample_t3738527664 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void OpenCVForUnitySample.MultiObjectTrackingBasedOnColorSample::OnStopButton()
extern "C"  void MultiObjectTrackingBasedOnColorSample_OnStopButton_m2514062891 (MultiObjectTrackingBasedOnColorSample_t3738527664 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void OpenCVForUnitySample.MultiObjectTrackingBasedOnColorSample::OnChangeCameraButton()
extern "C"  void MultiObjectTrackingBasedOnColorSample_OnChangeCameraButton_m2588437534 (MultiObjectTrackingBasedOnColorSample_t3738527664 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void OpenCVForUnitySample.MultiObjectTrackingBasedOnColorSample::drawObject(System.Collections.Generic.List`1<ColorObject>,OpenCVForUnity.Mat,OpenCVForUnity.Mat,System.Collections.Generic.List`1<OpenCVForUnity.MatOfPoint>,OpenCVForUnity.Mat)
extern "C"  void MultiObjectTrackingBasedOnColorSample_drawObject_m4202150980 (MultiObjectTrackingBasedOnColorSample_t3738527664 * __this, List_1_t3886869298 * ___theColorObjects0, Mat_t3763101966 * ___frame1, Mat_t3763101966 * ___temp2, List_1_t2465515105 * ___contours3, Mat_t3763101966 * ___hierarchy4, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void OpenCVForUnitySample.MultiObjectTrackingBasedOnColorSample::morphOps(OpenCVForUnity.Mat)
extern "C"  void MultiObjectTrackingBasedOnColorSample_morphOps_m496358631 (MultiObjectTrackingBasedOnColorSample_t3738527664 * __this, Mat_t3763101966 * ___thresh0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void OpenCVForUnitySample.MultiObjectTrackingBasedOnColorSample::trackFilteredObject(ColorObject,OpenCVForUnity.Mat,OpenCVForUnity.Mat,OpenCVForUnity.Mat)
extern "C"  void MultiObjectTrackingBasedOnColorSample_trackFilteredObject_m4053539398 (MultiObjectTrackingBasedOnColorSample_t3738527664 * __this, ColorObject_t2518683746 * ___theColorObject0, Mat_t3763101966 * ___threshold1, Mat_t3763101966 * ___HSV2, Mat_t3763101966 * ___cameraFeed3, const MethodInfo* method) IL2CPP_METHOD_ATTR;
