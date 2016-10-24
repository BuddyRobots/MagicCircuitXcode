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

// OpenCVForUnity.DescriptorExtractor
struct DescriptorExtractor_t2209197347;
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

// System.Void OpenCVForUnity.DescriptorExtractor::.ctor(System.IntPtr)
extern "C"  void DescriptorExtractor__ctor_m4026538281 (DescriptorExtractor_t2209197347 * __this, IntPtr_t ___addr0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void OpenCVForUnity.DescriptorExtractor::Dispose(System.Boolean)
extern "C"  void DescriptorExtractor_Dispose_m3268760063 (DescriptorExtractor_t2209197347 * __this, bool ___disposing0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean OpenCVForUnity.DescriptorExtractor::empty()
extern "C"  bool DescriptorExtractor_empty_m2393993506 (DescriptorExtractor_t2209197347 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 OpenCVForUnity.DescriptorExtractor::descriptorSize()
extern "C"  int32_t DescriptorExtractor_descriptorSize_m1841939415 (DescriptorExtractor_t2209197347 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 OpenCVForUnity.DescriptorExtractor::descriptorType()
extern "C"  int32_t DescriptorExtractor_descriptorType_m1885046992 (DescriptorExtractor_t2209197347 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// OpenCVForUnity.DescriptorExtractor OpenCVForUnity.DescriptorExtractor::create(System.Int32)
extern "C"  DescriptorExtractor_t2209197347 * DescriptorExtractor_create_m1799494259 (Il2CppObject * __this /* static, unused */, int32_t ___extractorType0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void OpenCVForUnity.DescriptorExtractor::compute(OpenCVForUnity.Mat,OpenCVForUnity.MatOfKeyPoint,OpenCVForUnity.Mat)
extern "C"  void DescriptorExtractor_compute_m413899021 (DescriptorExtractor_t2209197347 * __this, Mat_t3763101966 * ___image0, MatOfKeyPoint_t1212576982 * ___keypoints1, Mat_t3763101966 * ___descriptors2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void OpenCVForUnity.DescriptorExtractor::compute(System.Collections.Generic.List`1<OpenCVForUnity.Mat>,System.Collections.Generic.List`1<OpenCVForUnity.MatOfKeyPoint>,System.Collections.Generic.List`1<OpenCVForUnity.Mat>)
extern "C"  void DescriptorExtractor_compute_m1052535235 (DescriptorExtractor_t2209197347 * __this, List_1_t836320222 * ___images0, List_1_t2580762534 * ___keypoints1, List_1_t836320222 * ___descriptors2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void OpenCVForUnity.DescriptorExtractor::read(System.String)
extern "C"  void DescriptorExtractor_read_m1692859539 (DescriptorExtractor_t2209197347 * __this, String_t* ___fileName0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void OpenCVForUnity.DescriptorExtractor::write(System.String)
extern "C"  void DescriptorExtractor_write_m3522218394 (DescriptorExtractor_t2209197347 * __this, String_t* ___fileName0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean OpenCVForUnity.DescriptorExtractor::features2d_DescriptorExtractor_empty_10(System.IntPtr)
extern "C"  bool DescriptorExtractor_features2d_DescriptorExtractor_empty_10_m2641574452 (Il2CppObject * __this /* static, unused */, IntPtr_t ___nativeObj0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 OpenCVForUnity.DescriptorExtractor::features2d_DescriptorExtractor_descriptorSize_10(System.IntPtr)
extern "C"  int32_t DescriptorExtractor_features2d_DescriptorExtractor_descriptorSize_10_m1723470201 (Il2CppObject * __this /* static, unused */, IntPtr_t ___nativeObj0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 OpenCVForUnity.DescriptorExtractor::features2d_DescriptorExtractor_descriptorType_10(System.IntPtr)
extern "C"  int32_t DescriptorExtractor_features2d_DescriptorExtractor_descriptorType_10_m2860303474 (Il2CppObject * __this /* static, unused */, IntPtr_t ___nativeObj0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.IntPtr OpenCVForUnity.DescriptorExtractor::features2d_DescriptorExtractor_create_10(System.Int32)
extern "C"  IntPtr_t DescriptorExtractor_features2d_DescriptorExtractor_create_10_m521988807 (Il2CppObject * __this /* static, unused */, int32_t ___extractorType0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void OpenCVForUnity.DescriptorExtractor::features2d_DescriptorExtractor_compute_10(System.IntPtr,System.IntPtr,System.IntPtr,System.IntPtr)
extern "C"  void DescriptorExtractor_features2d_DescriptorExtractor_compute_10_m2761100308 (Il2CppObject * __this /* static, unused */, IntPtr_t ___nativeObj0, IntPtr_t ___image_nativeObj1, IntPtr_t ___keypoints_mat_nativeObj2, IntPtr_t ___descriptors_nativeObj3, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void OpenCVForUnity.DescriptorExtractor::features2d_DescriptorExtractor_compute_11(System.IntPtr,System.IntPtr,System.IntPtr,System.IntPtr)
extern "C"  void DescriptorExtractor_features2d_DescriptorExtractor_compute_11_m830481203 (Il2CppObject * __this /* static, unused */, IntPtr_t ___nativeObj0, IntPtr_t ___images_mat_nativeObj1, IntPtr_t ___keypoints_mat_nativeObj2, IntPtr_t ___descriptors_mat_nativeObj3, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void OpenCVForUnity.DescriptorExtractor::features2d_DescriptorExtractor_read_10(System.IntPtr,System.String)
extern "C"  void DescriptorExtractor_features2d_DescriptorExtractor_read_10_m1375076937 (Il2CppObject * __this /* static, unused */, IntPtr_t ___nativeObj0, String_t* ___fileName1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void OpenCVForUnity.DescriptorExtractor::features2d_DescriptorExtractor_write_10(System.IntPtr,System.String)
extern "C"  void DescriptorExtractor_features2d_DescriptorExtractor_write_10_m3455514446 (Il2CppObject * __this /* static, unused */, IntPtr_t ___nativeObj0, String_t* ___fileName1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void OpenCVForUnity.DescriptorExtractor::features2d_DescriptorExtractor_delete(System.IntPtr)
extern "C"  void DescriptorExtractor_features2d_DescriptorExtractor_delete_m2272882022 (Il2CppObject * __this /* static, unused */, IntPtr_t ___nativeObj0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
