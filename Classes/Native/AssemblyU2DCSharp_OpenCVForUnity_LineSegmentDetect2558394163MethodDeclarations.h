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

// OpenCVForUnity.LineSegmentDetector
struct LineSegmentDetector_t2558394163;
// OpenCVForUnity.Size
struct Size_t4100163289;
// OpenCVForUnity.Mat
struct Mat_t3763101966;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_IntPtr4010401971.h"
#include "AssemblyU2DCSharp_OpenCVForUnity_Size4100163289.h"
#include "AssemblyU2DCSharp_OpenCVForUnity_Mat3763101966.h"

// System.Void OpenCVForUnity.LineSegmentDetector::.ctor(System.IntPtr)
extern "C"  void LineSegmentDetector__ctor_m251690809 (LineSegmentDetector_t2558394163 * __this, IntPtr_t ___addr0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void OpenCVForUnity.LineSegmentDetector::Dispose(System.Boolean)
extern "C"  void LineSegmentDetector_Dispose_m1916432879 (LineSegmentDetector_t2558394163 * __this, bool ___disposing0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 OpenCVForUnity.LineSegmentDetector::compareSegments(OpenCVForUnity.Size,OpenCVForUnity.Mat,OpenCVForUnity.Mat,OpenCVForUnity.Mat)
extern "C"  int32_t LineSegmentDetector_compareSegments_m781000047 (LineSegmentDetector_t2558394163 * __this, Size_t4100163289 * ___size0, Mat_t3763101966 * ___lines11, Mat_t3763101966 * ___lines22, Mat_t3763101966 * ____image3, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 OpenCVForUnity.LineSegmentDetector::compareSegments(OpenCVForUnity.Size,OpenCVForUnity.Mat,OpenCVForUnity.Mat)
extern "C"  int32_t LineSegmentDetector_compareSegments_m357081660 (LineSegmentDetector_t2558394163 * __this, Size_t4100163289 * ___size0, Mat_t3763101966 * ___lines11, Mat_t3763101966 * ___lines22, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void OpenCVForUnity.LineSegmentDetector::detect(OpenCVForUnity.Mat,OpenCVForUnity.Mat,OpenCVForUnity.Mat,OpenCVForUnity.Mat,OpenCVForUnity.Mat)
extern "C"  void LineSegmentDetector_detect_m4170206865 (LineSegmentDetector_t2558394163 * __this, Mat_t3763101966 * ____image0, Mat_t3763101966 * ____lines1, Mat_t3763101966 * ___width2, Mat_t3763101966 * ___prec3, Mat_t3763101966 * ___nfa4, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void OpenCVForUnity.LineSegmentDetector::detect(OpenCVForUnity.Mat,OpenCVForUnity.Mat)
extern "C"  void LineSegmentDetector_detect_m1783597498 (LineSegmentDetector_t2558394163 * __this, Mat_t3763101966 * ____image0, Mat_t3763101966 * ____lines1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void OpenCVForUnity.LineSegmentDetector::drawSegments(OpenCVForUnity.Mat,OpenCVForUnity.Mat)
extern "C"  void LineSegmentDetector_drawSegments_m602641977 (LineSegmentDetector_t2558394163 * __this, Mat_t3763101966 * ____image0, Mat_t3763101966 * ___lines1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 OpenCVForUnity.LineSegmentDetector::imgproc_LineSegmentDetector_compareSegments_10(System.IntPtr,System.Double,System.Double,System.IntPtr,System.IntPtr,System.IntPtr)
extern "C"  int32_t LineSegmentDetector_imgproc_LineSegmentDetector_compareSegments_10_m2358233446 (Il2CppObject * __this /* static, unused */, IntPtr_t ___nativeObj0, double ___size_width1, double ___size_height2, IntPtr_t ___lines1_nativeObj3, IntPtr_t ___lines2_nativeObj4, IntPtr_t ____image_nativeObj5, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 OpenCVForUnity.LineSegmentDetector::imgproc_LineSegmentDetector_compareSegments_11(System.IntPtr,System.Double,System.Double,System.IntPtr,System.IntPtr)
extern "C"  int32_t LineSegmentDetector_imgproc_LineSegmentDetector_compareSegments_11_m1399515831 (Il2CppObject * __this /* static, unused */, IntPtr_t ___nativeObj0, double ___size_width1, double ___size_height2, IntPtr_t ___lines1_nativeObj3, IntPtr_t ___lines2_nativeObj4, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void OpenCVForUnity.LineSegmentDetector::imgproc_LineSegmentDetector_detect_10(System.IntPtr,System.IntPtr,System.IntPtr,System.IntPtr,System.IntPtr,System.IntPtr)
extern "C"  void LineSegmentDetector_imgproc_LineSegmentDetector_detect_10_m3169689958 (Il2CppObject * __this /* static, unused */, IntPtr_t ___nativeObj0, IntPtr_t ____image_nativeObj1, IntPtr_t ____lines_nativeObj2, IntPtr_t ___width_nativeObj3, IntPtr_t ___prec_nativeObj4, IntPtr_t ___nfa_nativeObj5, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void OpenCVForUnity.LineSegmentDetector::imgproc_LineSegmentDetector_detect_11(System.IntPtr,System.IntPtr,System.IntPtr)
extern "C"  void LineSegmentDetector_imgproc_LineSegmentDetector_detect_11_m3694976667 (Il2CppObject * __this /* static, unused */, IntPtr_t ___nativeObj0, IntPtr_t ____image_nativeObj1, IntPtr_t ____lines_nativeObj2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void OpenCVForUnity.LineSegmentDetector::imgproc_LineSegmentDetector_drawSegments_10(System.IntPtr,System.IntPtr,System.IntPtr)
extern "C"  void LineSegmentDetector_imgproc_LineSegmentDetector_drawSegments_10_m3076803549 (Il2CppObject * __this /* static, unused */, IntPtr_t ___nativeObj0, IntPtr_t ____image_nativeObj1, IntPtr_t ___lines_nativeObj2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void OpenCVForUnity.LineSegmentDetector::imgproc_LineSegmentDetector_delete(System.IntPtr)
extern "C"  void LineSegmentDetector_imgproc_LineSegmentDetector_delete_m4122251424 (Il2CppObject * __this /* static, unused */, IntPtr_t ___nativeObj0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
