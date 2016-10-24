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

// OpenCVForUnity.CascadeClassifier
struct CascadeClassifier_t2991922275;
// System.String
struct String_t;
// OpenCVForUnity.Size
struct Size_t4100163289;
// OpenCVForUnity.Mat
struct Mat_t3763101966;
// OpenCVForUnity.MatOfRect
struct MatOfRect_t3527744841;
// OpenCVForUnity.MatOfInt
struct MatOfInt_t2359161200;
// OpenCVForUnity.MatOfDouble
struct MatOfDouble_t2722206390;
// System.Double[]
struct DoubleU5BU5D_t2145413704;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_IntPtr4010401971.h"
#include "mscorlib_System_String7231557.h"
#include "AssemblyU2DCSharp_OpenCVForUnity_Mat3763101966.h"
#include "AssemblyU2DCSharp_OpenCVForUnity_MatOfRect3527744841.h"
#include "AssemblyU2DCSharp_OpenCVForUnity_Size4100163289.h"
#include "AssemblyU2DCSharp_OpenCVForUnity_MatOfInt2359161200.h"
#include "AssemblyU2DCSharp_OpenCVForUnity_MatOfDouble2722206390.h"

// System.Void OpenCVForUnity.CascadeClassifier::.ctor(System.IntPtr)
extern "C"  void CascadeClassifier__ctor_m3102421609 (CascadeClassifier_t2991922275 * __this, IntPtr_t ___addr0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void OpenCVForUnity.CascadeClassifier::.ctor(System.String)
extern "C"  void CascadeClassifier__ctor_m3558190359 (CascadeClassifier_t2991922275 * __this, String_t* ___filename0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void OpenCVForUnity.CascadeClassifier::.ctor()
extern "C"  void CascadeClassifier__ctor_m692433867 (CascadeClassifier_t2991922275 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void OpenCVForUnity.CascadeClassifier::Dispose(System.Boolean)
extern "C"  void CascadeClassifier_Dispose_m3649351871 (CascadeClassifier_t2991922275 * __this, bool ___disposing0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// OpenCVForUnity.Size OpenCVForUnity.CascadeClassifier::getOriginalWindowSize()
extern "C"  Size_t4100163289 * CascadeClassifier_getOriginalWindowSize_m868219988 (CascadeClassifier_t2991922275 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean OpenCVForUnity.CascadeClassifier::convert(System.String,System.String)
extern "C"  bool CascadeClassifier_convert_m1991383542 (Il2CppObject * __this /* static, unused */, String_t* ___oldcascade0, String_t* ___newcascade1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean OpenCVForUnity.CascadeClassifier::empty()
extern "C"  bool CascadeClassifier_empty_m1905398498 (CascadeClassifier_t2991922275 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean OpenCVForUnity.CascadeClassifier::isOldFormatCascade()
extern "C"  bool CascadeClassifier_isOldFormatCascade_m3162289869 (CascadeClassifier_t2991922275 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean OpenCVForUnity.CascadeClassifier::load(System.String)
extern "C"  bool CascadeClassifier_load_m3645120463 (CascadeClassifier_t2991922275 * __this, String_t* ___filename0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 OpenCVForUnity.CascadeClassifier::getFeatureType()
extern "C"  int32_t CascadeClassifier_getFeatureType_m4072214561 (CascadeClassifier_t2991922275 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void OpenCVForUnity.CascadeClassifier::detectMultiScale(OpenCVForUnity.Mat,OpenCVForUnity.MatOfRect,System.Double,System.Int32,System.Int32,OpenCVForUnity.Size,OpenCVForUnity.Size)
extern "C"  void CascadeClassifier_detectMultiScale_m1228971142 (CascadeClassifier_t2991922275 * __this, Mat_t3763101966 * ___image0, MatOfRect_t3527744841 * ___objects1, double ___scaleFactor2, int32_t ___minNeighbors3, int32_t ___flags4, Size_t4100163289 * ___minSize5, Size_t4100163289 * ___maxSize6, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void OpenCVForUnity.CascadeClassifier::detectMultiScale(OpenCVForUnity.Mat,OpenCVForUnity.MatOfRect)
extern "C"  void CascadeClassifier_detectMultiScale_m2718812254 (CascadeClassifier_t2991922275 * __this, Mat_t3763101966 * ___image0, MatOfRect_t3527744841 * ___objects1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void OpenCVForUnity.CascadeClassifier::detectMultiScale2(OpenCVForUnity.Mat,OpenCVForUnity.MatOfRect,OpenCVForUnity.MatOfInt,System.Double,System.Int32,System.Int32,OpenCVForUnity.Size,OpenCVForUnity.Size)
extern "C"  void CascadeClassifier_detectMultiScale2_m2876178203 (CascadeClassifier_t2991922275 * __this, Mat_t3763101966 * ___image0, MatOfRect_t3527744841 * ___objects1, MatOfInt_t2359161200 * ___numDetections2, double ___scaleFactor3, int32_t ___minNeighbors4, int32_t ___flags5, Size_t4100163289 * ___minSize6, Size_t4100163289 * ___maxSize7, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void OpenCVForUnity.CascadeClassifier::detectMultiScale2(OpenCVForUnity.Mat,OpenCVForUnity.MatOfRect,OpenCVForUnity.MatOfInt)
extern "C"  void CascadeClassifier_detectMultiScale2_m1399135475 (CascadeClassifier_t2991922275 * __this, Mat_t3763101966 * ___image0, MatOfRect_t3527744841 * ___objects1, MatOfInt_t2359161200 * ___numDetections2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void OpenCVForUnity.CascadeClassifier::detectMultiScale3(OpenCVForUnity.Mat,OpenCVForUnity.MatOfRect,OpenCVForUnity.MatOfInt,OpenCVForUnity.MatOfDouble,System.Double,System.Int32,System.Int32,OpenCVForUnity.Size,OpenCVForUnity.Size,System.Boolean)
extern "C"  void CascadeClassifier_detectMultiScale3_m1043546500 (CascadeClassifier_t2991922275 * __this, Mat_t3763101966 * ___image0, MatOfRect_t3527744841 * ___objects1, MatOfInt_t2359161200 * ___rejectLevels2, MatOfDouble_t2722206390 * ___levelWeights3, double ___scaleFactor4, int32_t ___minNeighbors5, int32_t ___flags6, Size_t4100163289 * ___minSize7, Size_t4100163289 * ___maxSize8, bool ___outputRejectLevels9, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void OpenCVForUnity.CascadeClassifier::detectMultiScale3(OpenCVForUnity.Mat,OpenCVForUnity.MatOfRect,OpenCVForUnity.MatOfInt,OpenCVForUnity.MatOfDouble)
extern "C"  void CascadeClassifier_detectMultiScale3_m1441263281 (CascadeClassifier_t2991922275 * __this, Mat_t3763101966 * ___image0, MatOfRect_t3527744841 * ___objects1, MatOfInt_t2359161200 * ___rejectLevels2, MatOfDouble_t2722206390 * ___levelWeights3, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.IntPtr OpenCVForUnity.CascadeClassifier::objdetect_CascadeClassifier_CascadeClassifier_10(System.String)
extern "C"  IntPtr_t CascadeClassifier_objdetect_CascadeClassifier_CascadeClassifier_10_m2458188124 (Il2CppObject * __this /* static, unused */, String_t* ___filename0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.IntPtr OpenCVForUnity.CascadeClassifier::objdetect_CascadeClassifier_CascadeClassifier_11()
extern "C"  IntPtr_t CascadeClassifier_objdetect_CascadeClassifier_CascadeClassifier_11_m225894183 (Il2CppObject * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void OpenCVForUnity.CascadeClassifier::objdetect_CascadeClassifier_getOriginalWindowSize_10(System.IntPtr,System.Double[])
extern "C"  void CascadeClassifier_objdetect_CascadeClassifier_getOriginalWindowSize_10_m3064082368 (Il2CppObject * __this /* static, unused */, IntPtr_t ___nativeObj0, DoubleU5BU5D_t2145413704* ___vals1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean OpenCVForUnity.CascadeClassifier::objdetect_CascadeClassifier_convert_10(System.String,System.String)
extern "C"  bool CascadeClassifier_objdetect_CascadeClassifier_convert_10_m2979183511 (Il2CppObject * __this /* static, unused */, String_t* ___oldcascade0, String_t* ___newcascade1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean OpenCVForUnity.CascadeClassifier::objdetect_CascadeClassifier_empty_10(System.IntPtr)
extern "C"  bool CascadeClassifier_objdetect_CascadeClassifier_empty_10_m1699780167 (Il2CppObject * __this /* static, unused */, IntPtr_t ___nativeObj0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean OpenCVForUnity.CascadeClassifier::objdetect_CascadeClassifier_isOldFormatCascade_10(System.IntPtr)
extern "C"  bool CascadeClassifier_objdetect_CascadeClassifier_isOldFormatCascade_10_m1395815408 (Il2CppObject * __this /* static, unused */, IntPtr_t ___nativeObj0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean OpenCVForUnity.CascadeClassifier::objdetect_CascadeClassifier_load_10(System.IntPtr,System.String)
extern "C"  bool CascadeClassifier_objdetect_CascadeClassifier_load_10_m2993657650 (Il2CppObject * __this /* static, unused */, IntPtr_t ___nativeObj0, String_t* ___filename1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 OpenCVForUnity.CascadeClassifier::objdetect_CascadeClassifier_getFeatureType_10(System.IntPtr)
extern "C"  int32_t CascadeClassifier_objdetect_CascadeClassifier_getFeatureType_10_m1823304132 (Il2CppObject * __this /* static, unused */, IntPtr_t ___nativeObj0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void OpenCVForUnity.CascadeClassifier::objdetect_CascadeClassifier_detectMultiScale_10(System.IntPtr,System.IntPtr,System.IntPtr,System.Double,System.Int32,System.Int32,System.Double,System.Double,System.Double,System.Double)
extern "C"  void CascadeClassifier_objdetect_CascadeClassifier_detectMultiScale_10_m3200681432 (Il2CppObject * __this /* static, unused */, IntPtr_t ___nativeObj0, IntPtr_t ___image_nativeObj1, IntPtr_t ___objects_mat_nativeObj2, double ___scaleFactor3, int32_t ___minNeighbors4, int32_t ___flags5, double ___minSize_width6, double ___minSize_height7, double ___maxSize_width8, double ___maxSize_height9, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void OpenCVForUnity.CascadeClassifier::objdetect_CascadeClassifier_detectMultiScale_11(System.IntPtr,System.IntPtr,System.IntPtr)
extern "C"  void CascadeClassifier_objdetect_CascadeClassifier_detectMultiScale_11_m2924703851 (Il2CppObject * __this /* static, unused */, IntPtr_t ___nativeObj0, IntPtr_t ___image_nativeObj1, IntPtr_t ___objects_mat_nativeObj2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void OpenCVForUnity.CascadeClassifier::objdetect_CascadeClassifier_detectMultiScale2_10(System.IntPtr,System.IntPtr,System.IntPtr,System.IntPtr,System.Double,System.Int32,System.Int32,System.Double,System.Double,System.Double,System.Double)
extern "C"  void CascadeClassifier_objdetect_CascadeClassifier_detectMultiScale2_10_m4066915970 (Il2CppObject * __this /* static, unused */, IntPtr_t ___nativeObj0, IntPtr_t ___image_nativeObj1, IntPtr_t ___objects_mat_nativeObj2, IntPtr_t ___numDetections_mat_nativeObj3, double ___scaleFactor4, int32_t ___minNeighbors5, int32_t ___flags6, double ___minSize_width7, double ___minSize_height8, double ___maxSize_width9, double ___maxSize_height10, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void OpenCVForUnity.CascadeClassifier::objdetect_CascadeClassifier_detectMultiScale2_11(System.IntPtr,System.IntPtr,System.IntPtr,System.IntPtr)
extern "C"  void CascadeClassifier_objdetect_CascadeClassifier_detectMultiScale2_11_m1210926805 (Il2CppObject * __this /* static, unused */, IntPtr_t ___nativeObj0, IntPtr_t ___image_nativeObj1, IntPtr_t ___objects_mat_nativeObj2, IntPtr_t ___numDetections_mat_nativeObj3, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void OpenCVForUnity.CascadeClassifier::objdetect_CascadeClassifier_detectMultiScale3_10(System.IntPtr,System.IntPtr,System.IntPtr,System.IntPtr,System.IntPtr,System.Double,System.Int32,System.Int32,System.Double,System.Double,System.Double,System.Double,System.Boolean)
extern "C"  void CascadeClassifier_objdetect_CascadeClassifier_detectMultiScale3_10_m2130158348 (Il2CppObject * __this /* static, unused */, IntPtr_t ___nativeObj0, IntPtr_t ___image_nativeObj1, IntPtr_t ___objects_mat_nativeObj2, IntPtr_t ___rejectLevels_mat_nativeObj3, IntPtr_t ___levelWeights_mat_nativeObj4, double ___scaleFactor5, int32_t ___minNeighbors6, int32_t ___flags7, double ___minSize_width8, double ___minSize_height9, double ___maxSize_width10, double ___maxSize_height11, bool ___outputRejectLevels12, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void OpenCVForUnity.CascadeClassifier::objdetect_CascadeClassifier_detectMultiScale3_11(System.IntPtr,System.IntPtr,System.IntPtr,System.IntPtr,System.IntPtr)
extern "C"  void CascadeClassifier_objdetect_CascadeClassifier_detectMultiScale3_11_m3775333988 (Il2CppObject * __this /* static, unused */, IntPtr_t ___nativeObj0, IntPtr_t ___image_nativeObj1, IntPtr_t ___objects_mat_nativeObj2, IntPtr_t ___rejectLevels_mat_nativeObj3, IntPtr_t ___levelWeights_mat_nativeObj4, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void OpenCVForUnity.CascadeClassifier::objdetect_CascadeClassifier_delete(System.IntPtr)
extern "C"  void CascadeClassifier_objdetect_CascadeClassifier_delete_m1047099425 (Il2CppObject * __this /* static, unused */, IntPtr_t ___nativeObj0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
