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

// OpenCVForUnity.CLAHE
struct CLAHE_t1648279811;
// OpenCVForUnity.Size
struct Size_t4100163289;
// OpenCVForUnity.Mat
struct Mat_t3763101966;
// System.Double[]
struct DoubleU5BU5D_t2145413704;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_IntPtr4010401971.h"
#include "AssemblyU2DCSharp_OpenCVForUnity_Mat3763101966.h"
#include "AssemblyU2DCSharp_OpenCVForUnity_Size4100163289.h"

// System.Void OpenCVForUnity.CLAHE::.ctor(System.IntPtr)
extern "C"  void CLAHE__ctor_m1868675849 (CLAHE_t1648279811 * __this, IntPtr_t ___addr0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void OpenCVForUnity.CLAHE::Dispose(System.Boolean)
extern "C"  void CLAHE_Dispose_m1164567583 (CLAHE_t1648279811 * __this, bool ___disposing0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// OpenCVForUnity.Size OpenCVForUnity.CLAHE::getTilesGridSize()
extern "C"  Size_t4100163289 * CLAHE_getTilesGridSize_m2731406204 (CLAHE_t1648279811 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Double OpenCVForUnity.CLAHE::getClipLimit()
extern "C"  double CLAHE_getClipLimit_m1379007441 (CLAHE_t1648279811 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void OpenCVForUnity.CLAHE::apply(OpenCVForUnity.Mat,OpenCVForUnity.Mat)
extern "C"  void CLAHE_apply_m4127608047 (CLAHE_t1648279811 * __this, Mat_t3763101966 * ___src0, Mat_t3763101966 * ___dst1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void OpenCVForUnity.CLAHE::collectGarbage()
extern "C"  void CLAHE_collectGarbage_m1943144324 (CLAHE_t1648279811 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void OpenCVForUnity.CLAHE::setClipLimit(System.Double)
extern "C"  void CLAHE_setClipLimit_m2729729056 (CLAHE_t1648279811 * __this, double ___clipLimit0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void OpenCVForUnity.CLAHE::setTilesGridSize(OpenCVForUnity.Size)
extern "C"  void CLAHE_setTilesGridSize_m3130431401 (CLAHE_t1648279811 * __this, Size_t4100163289 * ___tileGridSize0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void OpenCVForUnity.CLAHE::imgproc_CLAHE_getTilesGridSize_10(System.IntPtr,System.Double[])
extern "C"  void CLAHE_imgproc_CLAHE_getTilesGridSize_10_m2105874669 (Il2CppObject * __this /* static, unused */, IntPtr_t ___nativeObj0, DoubleU5BU5D_t2145413704* ___vals1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Double OpenCVForUnity.CLAHE::imgproc_CLAHE_getClipLimit_10(System.IntPtr)
extern "C"  double CLAHE_imgproc_CLAHE_getClipLimit_10_m995354229 (Il2CppObject * __this /* static, unused */, IntPtr_t ___nativeObj0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void OpenCVForUnity.CLAHE::imgproc_CLAHE_apply_10(System.IntPtr,System.IntPtr,System.IntPtr)
extern "C"  void CLAHE_imgproc_CLAHE_apply_10_m3923263863 (Il2CppObject * __this /* static, unused */, IntPtr_t ___nativeObj0, IntPtr_t ___src_nativeObj1, IntPtr_t ___dst_nativeObj2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void OpenCVForUnity.CLAHE::imgproc_CLAHE_collectGarbage_10(System.IntPtr)
extern "C"  void CLAHE_imgproc_CLAHE_collectGarbage_10_m1669896552 (Il2CppObject * __this /* static, unused */, IntPtr_t ___nativeObj0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void OpenCVForUnity.CLAHE::imgproc_CLAHE_setClipLimit_10(System.IntPtr,System.Double)
extern "C"  void CLAHE_imgproc_CLAHE_setClipLimit_10_m1815679554 (Il2CppObject * __this /* static, unused */, IntPtr_t ___nativeObj0, double ___clipLimit1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void OpenCVForUnity.CLAHE::imgproc_CLAHE_setTilesGridSize_10(System.IntPtr,System.Double,System.Double)
extern "C"  void CLAHE_imgproc_CLAHE_setTilesGridSize_10_m2316096319 (Il2CppObject * __this /* static, unused */, IntPtr_t ___nativeObj0, double ___tileGridSize_width1, double ___tileGridSize_height2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void OpenCVForUnity.CLAHE::imgproc_CLAHE_delete(System.IntPtr)
extern "C"  void CLAHE_imgproc_CLAHE_delete_m1370924256 (Il2CppObject * __this /* static, unused */, IntPtr_t ___nativeObj0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
