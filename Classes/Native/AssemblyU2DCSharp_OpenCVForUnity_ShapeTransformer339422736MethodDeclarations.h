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

// OpenCVForUnity.ShapeTransformer
struct ShapeTransformer_t339422736;
// OpenCVForUnity.Mat
struct Mat_t3763101966;
// OpenCVForUnity.MatOfDMatch
struct MatOfDMatch_t2690227878;
// OpenCVForUnity.Scalar
struct Scalar_t3445295492;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_IntPtr4010401971.h"
#include "AssemblyU2DCSharp_OpenCVForUnity_Mat3763101966.h"
#include "AssemblyU2DCSharp_OpenCVForUnity_MatOfDMatch2690227878.h"
#include "AssemblyU2DCSharp_OpenCVForUnity_Scalar3445295492.h"

// System.Void OpenCVForUnity.ShapeTransformer::.ctor(System.IntPtr)
extern "C"  void ShapeTransformer__ctor_m1879041414 (ShapeTransformer_t339422736 * __this, IntPtr_t ___addr0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void OpenCVForUnity.ShapeTransformer::Dispose(System.Boolean)
extern "C"  void ShapeTransformer_Dispose_m727469186 (ShapeTransformer_t339422736 * __this, bool ___disposing0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Single OpenCVForUnity.ShapeTransformer::applyTransformation(OpenCVForUnity.Mat,OpenCVForUnity.Mat)
extern "C"  float ShapeTransformer_applyTransformation_m170109079 (ShapeTransformer_t339422736 * __this, Mat_t3763101966 * ___input0, Mat_t3763101966 * ___output1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Single OpenCVForUnity.ShapeTransformer::applyTransformation(OpenCVForUnity.Mat)
extern "C"  float ShapeTransformer_applyTransformation_m2090915860 (ShapeTransformer_t339422736 * __this, Mat_t3763101966 * ___input0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void OpenCVForUnity.ShapeTransformer::estimateTransformation(OpenCVForUnity.Mat,OpenCVForUnity.Mat,OpenCVForUnity.MatOfDMatch)
extern "C"  void ShapeTransformer_estimateTransformation_m898568084 (ShapeTransformer_t339422736 * __this, Mat_t3763101966 * ___transformingShape0, Mat_t3763101966 * ___targetShape1, MatOfDMatch_t2690227878 * ___matches2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void OpenCVForUnity.ShapeTransformer::warpImage(OpenCVForUnity.Mat,OpenCVForUnity.Mat,System.Int32,System.Int32,OpenCVForUnity.Scalar)
extern "C"  void ShapeTransformer_warpImage_m1679992194 (ShapeTransformer_t339422736 * __this, Mat_t3763101966 * ___transformingImage0, Mat_t3763101966 * ___output1, int32_t ___flags2, int32_t ___borderMode3, Scalar_t3445295492 * ___borderValue4, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void OpenCVForUnity.ShapeTransformer::warpImage(OpenCVForUnity.Mat,OpenCVForUnity.Mat,System.Int32)
extern "C"  void ShapeTransformer_warpImage_m571698736 (ShapeTransformer_t339422736 * __this, Mat_t3763101966 * ___transformingImage0, Mat_t3763101966 * ___output1, int32_t ___flags2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void OpenCVForUnity.ShapeTransformer::warpImage(OpenCVForUnity.Mat,OpenCVForUnity.Mat)
extern "C"  void ShapeTransformer_warpImage_m612987399 (ShapeTransformer_t339422736 * __this, Mat_t3763101966 * ___transformingImage0, Mat_t3763101966 * ___output1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Single OpenCVForUnity.ShapeTransformer::shape_ShapeTransformer_applyTransformation_10(System.IntPtr,System.IntPtr,System.IntPtr)
extern "C"  float ShapeTransformer_shape_ShapeTransformer_applyTransformation_10_m3916704104 (Il2CppObject * __this /* static, unused */, IntPtr_t ___nativeObj0, IntPtr_t ___input_nativeObj1, IntPtr_t ___output_nativeObj2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Single OpenCVForUnity.ShapeTransformer::shape_ShapeTransformer_applyTransformation_11(System.IntPtr,System.IntPtr)
extern "C"  float ShapeTransformer_shape_ShapeTransformer_applyTransformation_11_m2005699833 (Il2CppObject * __this /* static, unused */, IntPtr_t ___nativeObj0, IntPtr_t ___input_nativeObj1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void OpenCVForUnity.ShapeTransformer::shape_ShapeTransformer_estimateTransformation_10(System.IntPtr,System.IntPtr,System.IntPtr,System.IntPtr)
extern "C"  void ShapeTransformer_shape_ShapeTransformer_estimateTransformation_10_m478317668 (Il2CppObject * __this /* static, unused */, IntPtr_t ___nativeObj0, IntPtr_t ___transformingShape_nativeObj1, IntPtr_t ___targetShape_nativeObj2, IntPtr_t ___matches_mat_nativeObj3, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void OpenCVForUnity.ShapeTransformer::shape_ShapeTransformer_warpImage_10(System.IntPtr,System.IntPtr,System.IntPtr,System.Int32,System.Int32,System.Double,System.Double,System.Double,System.Double)
extern "C"  void ShapeTransformer_shape_ShapeTransformer_warpImage_10_m2748761504 (Il2CppObject * __this /* static, unused */, IntPtr_t ___nativeObj0, IntPtr_t ___transformingImage_nativeObj1, IntPtr_t ___output_nativeObj2, int32_t ___flags3, int32_t ___borderMode4, double ___borderValue_val05, double ___borderValue_val16, double ___borderValue_val27, double ___borderValue_val38, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void OpenCVForUnity.ShapeTransformer::shape_ShapeTransformer_warpImage_11(System.IntPtr,System.IntPtr,System.IntPtr,System.Int32)
extern "C"  void ShapeTransformer_shape_ShapeTransformer_warpImage_11_m291012488 (Il2CppObject * __this /* static, unused */, IntPtr_t ___nativeObj0, IntPtr_t ___transformingImage_nativeObj1, IntPtr_t ___output_nativeObj2, int32_t ___flags3, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void OpenCVForUnity.ShapeTransformer::shape_ShapeTransformer_warpImage_12(System.IntPtr,System.IntPtr,System.IntPtr)
extern "C"  void ShapeTransformer_shape_ShapeTransformer_warpImage_12_m4019682062 (Il2CppObject * __this /* static, unused */, IntPtr_t ___nativeObj0, IntPtr_t ___transformingImage_nativeObj1, IntPtr_t ___output_nativeObj2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void OpenCVForUnity.ShapeTransformer::shape_ShapeTransformer_delete(System.IntPtr)
extern "C"  void ShapeTransformer_shape_ShapeTransformer_delete_m425399604 (Il2CppObject * __this /* static, unused */, IntPtr_t ___nativeObj0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
