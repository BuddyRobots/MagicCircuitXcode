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

// OpenCVForUnity.SparseMatchInterpolator
struct SparseMatchInterpolator_t557642010;
// OpenCVForUnity.Mat
struct Mat_t3763101966;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_IntPtr4010401971.h"
#include "AssemblyU2DCSharp_OpenCVForUnity_Mat3763101966.h"

// System.Void OpenCVForUnity.SparseMatchInterpolator::.ctor(System.IntPtr)
extern "C"  void SparseMatchInterpolator__ctor_m2097956320 (SparseMatchInterpolator_t557642010 * __this, IntPtr_t ___addr0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void OpenCVForUnity.SparseMatchInterpolator::Dispose(System.Boolean)
extern "C"  void SparseMatchInterpolator_Dispose_m2661078504 (SparseMatchInterpolator_t557642010 * __this, bool ___disposing0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void OpenCVForUnity.SparseMatchInterpolator::interpolate(OpenCVForUnity.Mat,OpenCVForUnity.Mat,OpenCVForUnity.Mat,OpenCVForUnity.Mat,OpenCVForUnity.Mat)
extern "C"  void SparseMatchInterpolator_interpolate_m2587403224 (SparseMatchInterpolator_t557642010 * __this, Mat_t3763101966 * ___from_image0, Mat_t3763101966 * ___from_points1, Mat_t3763101966 * ___to_image2, Mat_t3763101966 * ___to_points3, Mat_t3763101966 * ___dense_flow4, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void OpenCVForUnity.SparseMatchInterpolator::ximgproc_SparseMatchInterpolator_interpolate_10(System.IntPtr,System.IntPtr,System.IntPtr,System.IntPtr,System.IntPtr,System.IntPtr)
extern "C"  void SparseMatchInterpolator_ximgproc_SparseMatchInterpolator_interpolate_10_m3341074138 (Il2CppObject * __this /* static, unused */, IntPtr_t ___nativeObj0, IntPtr_t ___from_image_nativeObj1, IntPtr_t ___from_points_nativeObj2, IntPtr_t ___to_image_nativeObj3, IntPtr_t ___to_points_nativeObj4, IntPtr_t ___dense_flow_nativeObj5, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void OpenCVForUnity.SparseMatchInterpolator::ximgproc_SparseMatchInterpolator_delete(System.IntPtr)
extern "C"  void SparseMatchInterpolator_ximgproc_SparseMatchInterpolator_delete_m989843398 (Il2CppObject * __this /* static, unused */, IntPtr_t ___nativeObj0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
