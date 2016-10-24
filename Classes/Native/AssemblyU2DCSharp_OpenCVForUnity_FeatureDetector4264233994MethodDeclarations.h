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

// OpenCVForUnity.FeatureDetector
struct FeatureDetector_t4264233994;
// OpenCVForUnity.Mat
struct Mat_t3763101966;
// OpenCVForUnity.MatOfKeyPoint
struct MatOfKeyPoint_t1212576982;
// System.Collections.Generic.List`1<OpenCVForUnity.Mat>
struct List_1_t836320222;
// System.Collections.Generic.List`1<OpenCVForUnity.MatOfKeyPoint>
struct List_1_t2580762534;
// System.String
struct String_t;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_IntPtr4010401971.h"
#include "AssemblyU2DCSharp_OpenCVForUnity_Mat3763101966.h"
#include "AssemblyU2DCSharp_OpenCVForUnity_MatOfKeyPoint1212576982.h"
#include "mscorlib_System_String7231557.h"

// System.Void OpenCVForUnity.FeatureDetector::.ctor(System.IntPtr)
extern "C"  void FeatureDetector__ctor_m1291318480 (FeatureDetector_t4264233994 * __this, IntPtr_t ___addr0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void OpenCVForUnity.FeatureDetector::Dispose(System.Boolean)
extern "C"  void FeatureDetector_Dispose_m2455208184 (FeatureDetector_t4264233994 * __this, bool ___disposing0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean OpenCVForUnity.FeatureDetector::empty()
extern "C"  bool FeatureDetector_empty_m2445735963 (FeatureDetector_t4264233994 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// OpenCVForUnity.FeatureDetector OpenCVForUnity.FeatureDetector::create(System.Int32)
extern "C"  FeatureDetector_t4264233994 * FeatureDetector_create_m4022780563 (Il2CppObject * __this /* static, unused */, int32_t ___detectorType0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void OpenCVForUnity.FeatureDetector::detect(OpenCVForUnity.Mat,OpenCVForUnity.MatOfKeyPoint,OpenCVForUnity.Mat)
extern "C"  void FeatureDetector_detect_m4164795984 (FeatureDetector_t4264233994 * __this, Mat_t3763101966 * ___image0, MatOfKeyPoint_t1212576982 * ___keypoints1, Mat_t3763101966 * ___mask2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void OpenCVForUnity.FeatureDetector::detect(OpenCVForUnity.Mat,OpenCVForUnity.MatOfKeyPoint)
extern "C"  void FeatureDetector_detect_m2362766075 (FeatureDetector_t4264233994 * __this, Mat_t3763101966 * ___image0, MatOfKeyPoint_t1212576982 * ___keypoints1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void OpenCVForUnity.FeatureDetector::detect(System.Collections.Generic.List`1<OpenCVForUnity.Mat>,System.Collections.Generic.List`1<OpenCVForUnity.MatOfKeyPoint>,System.Collections.Generic.List`1<OpenCVForUnity.Mat>)
extern "C"  void FeatureDetector_detect_m1983210464 (FeatureDetector_t4264233994 * __this, List_1_t836320222 * ___images0, List_1_t2580762534 * ___keypoints1, List_1_t836320222 * ___masks2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void OpenCVForUnity.FeatureDetector::detect(System.Collections.Generic.List`1<OpenCVForUnity.Mat>,System.Collections.Generic.List`1<OpenCVForUnity.MatOfKeyPoint>)
extern "C"  void FeatureDetector_detect_m784212793 (FeatureDetector_t4264233994 * __this, List_1_t836320222 * ___images0, List_1_t2580762534 * ___keypoints1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void OpenCVForUnity.FeatureDetector::read(System.String)
extern "C"  void FeatureDetector_read_m3544289292 (FeatureDetector_t4264233994 * __this, String_t* ___fileName0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void OpenCVForUnity.FeatureDetector::write(System.String)
extern "C"  void FeatureDetector_write_m786998593 (FeatureDetector_t4264233994 * __this, String_t* ___fileName0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean OpenCVForUnity.FeatureDetector::features2d_FeatureDetector_empty_10(System.IntPtr)
extern "C"  bool FeatureDetector_features2d_FeatureDetector_empty_10_m668673026 (Il2CppObject * __this /* static, unused */, IntPtr_t ___nativeObj0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.IntPtr OpenCVForUnity.FeatureDetector::features2d_FeatureDetector_create_10(System.Int32)
extern "C"  IntPtr_t FeatureDetector_features2d_FeatureDetector_create_10_m3122849173 (Il2CppObject * __this /* static, unused */, int32_t ___detectorType0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void OpenCVForUnity.FeatureDetector::features2d_FeatureDetector_detect_10(System.IntPtr,System.IntPtr,System.IntPtr,System.IntPtr)
extern "C"  void FeatureDetector_features2d_FeatureDetector_detect_10_m53226550 (Il2CppObject * __this /* static, unused */, IntPtr_t ___nativeObj0, IntPtr_t ___image_nativeObj1, IntPtr_t ___keypoints_mat_nativeObj2, IntPtr_t ___mask_nativeObj3, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void OpenCVForUnity.FeatureDetector::features2d_FeatureDetector_detect_11(System.IntPtr,System.IntPtr,System.IntPtr)
extern "C"  void FeatureDetector_features2d_FeatureDetector_detect_11_m2649959943 (Il2CppObject * __this /* static, unused */, IntPtr_t ___nativeObj0, IntPtr_t ___image_nativeObj1, IntPtr_t ___keypoints_mat_nativeObj2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void OpenCVForUnity.FeatureDetector::features2d_FeatureDetector_detect_12(System.IntPtr,System.IntPtr,System.IntPtr,System.IntPtr)
extern "C"  void FeatureDetector_features2d_FeatureDetector_detect_12_m486955636 (Il2CppObject * __this /* static, unused */, IntPtr_t ___nativeObj0, IntPtr_t ___images_mat_nativeObj1, IntPtr_t ___keypoints_mat_nativeObj2, IntPtr_t ___masks_mat_nativeObj3, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void OpenCVForUnity.FeatureDetector::features2d_FeatureDetector_detect_13(System.IntPtr,System.IntPtr,System.IntPtr)
extern "C"  void FeatureDetector_features2d_FeatureDetector_detect_13_m600572101 (Il2CppObject * __this /* static, unused */, IntPtr_t ___nativeObj0, IntPtr_t ___images_mat_nativeObj1, IntPtr_t ___keypoints_mat_nativeObj2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void OpenCVForUnity.FeatureDetector::features2d_FeatureDetector_read_10(System.IntPtr,System.String)
extern "C"  void FeatureDetector_features2d_FeatureDetector_read_10_m4042746683 (Il2CppObject * __this /* static, unused */, IntPtr_t ___nativeObj0, String_t* ___fileName1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void OpenCVForUnity.FeatureDetector::features2d_FeatureDetector_write_10(System.IntPtr,System.String)
extern "C"  void FeatureDetector_features2d_FeatureDetector_write_10_m253930652 (Il2CppObject * __this /* static, unused */, IntPtr_t ___nativeObj0, String_t* ___fileName1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void OpenCVForUnity.FeatureDetector::features2d_FeatureDetector_delete(System.IntPtr)
extern "C"  void FeatureDetector_features2d_FeatureDetector_delete_m3307568820 (Il2CppObject * __this /* static, unused */, IntPtr_t ___nativeObj0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
