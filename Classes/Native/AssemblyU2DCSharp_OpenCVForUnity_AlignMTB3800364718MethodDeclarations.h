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

// OpenCVForUnity.AlignMTB
struct AlignMTB_t3800364718;
// OpenCVForUnity.Point
struct Point_t1661367934;
// OpenCVForUnity.Mat
struct Mat_t3763101966;
// System.Collections.Generic.List`1<OpenCVForUnity.Mat>
struct List_1_t836320222;
// System.Double[]
struct DoubleU5BU5D_t2145413704;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_IntPtr4010401971.h"
#include "AssemblyU2DCSharp_OpenCVForUnity_Mat3763101966.h"
#include "AssemblyU2DCSharp_OpenCVForUnity_Point1661367934.h"

// System.Void OpenCVForUnity.AlignMTB::.ctor(System.IntPtr)
extern "C"  void AlignMTB__ctor_m3979860900 (AlignMTB_t3800364718 * __this, IntPtr_t ___addr0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void OpenCVForUnity.AlignMTB::Dispose(System.Boolean)
extern "C"  void AlignMTB_Dispose_m4272306596 (AlignMTB_t3800364718 * __this, bool ___disposing0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// OpenCVForUnity.Point OpenCVForUnity.AlignMTB::calculateShift(OpenCVForUnity.Mat,OpenCVForUnity.Mat)
extern "C"  Point_t1661367934 * AlignMTB_calculateShift_m2182031016 (AlignMTB_t3800364718 * __this, Mat_t3763101966 * ___img00, Mat_t3763101966 * ___img11, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean OpenCVForUnity.AlignMTB::getCut()
extern "C"  bool AlignMTB_getCut_m3086797708 (AlignMTB_t3800364718 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 OpenCVForUnity.AlignMTB::getExcludeRange()
extern "C"  int32_t AlignMTB_getExcludeRange_m2090802165 (AlignMTB_t3800364718 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 OpenCVForUnity.AlignMTB::getMaxBits()
extern "C"  int32_t AlignMTB_getMaxBits_m631895098 (AlignMTB_t3800364718 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void OpenCVForUnity.AlignMTB::computeBitmaps(OpenCVForUnity.Mat,OpenCVForUnity.Mat,OpenCVForUnity.Mat)
extern "C"  void AlignMTB_computeBitmaps_m2165837798 (AlignMTB_t3800364718 * __this, Mat_t3763101966 * ___img0, Mat_t3763101966 * ___tb1, Mat_t3763101966 * ___eb2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void OpenCVForUnity.AlignMTB::process(System.Collections.Generic.List`1<OpenCVForUnity.Mat>,System.Collections.Generic.List`1<OpenCVForUnity.Mat>,OpenCVForUnity.Mat,OpenCVForUnity.Mat)
extern "C"  void AlignMTB_process_m1997131063 (AlignMTB_t3800364718 * __this, List_1_t836320222 * ___src0, List_1_t836320222 * ___dst1, Mat_t3763101966 * ___times2, Mat_t3763101966 * ___response3, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void OpenCVForUnity.AlignMTB::process(System.Collections.Generic.List`1<OpenCVForUnity.Mat>,System.Collections.Generic.List`1<OpenCVForUnity.Mat>)
extern "C"  void AlignMTB_process_m659776599 (AlignMTB_t3800364718 * __this, List_1_t836320222 * ___src0, List_1_t836320222 * ___dst1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void OpenCVForUnity.AlignMTB::setCut(System.Boolean)
extern "C"  void AlignMTB_setCut_m2076244139 (AlignMTB_t3800364718 * __this, bool ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void OpenCVForUnity.AlignMTB::setExcludeRange(System.Int32)
extern "C"  void AlignMTB_setExcludeRange_m3419272260 (AlignMTB_t3800364718 * __this, int32_t ___exclude_range0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void OpenCVForUnity.AlignMTB::setMaxBits(System.Int32)
extern "C"  void AlignMTB_setMaxBits_m1895276877 (AlignMTB_t3800364718 * __this, int32_t ___max_bits0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void OpenCVForUnity.AlignMTB::shiftMat(OpenCVForUnity.Mat,OpenCVForUnity.Mat,OpenCVForUnity.Point)
extern "C"  void AlignMTB_shiftMat_m695016903 (AlignMTB_t3800364718 * __this, Mat_t3763101966 * ___src0, Mat_t3763101966 * ___dst1, Point_t1661367934 * ___shift2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void OpenCVForUnity.AlignMTB::photo_AlignMTB_calculateShift_10(System.IntPtr,System.IntPtr,System.IntPtr,System.Double[])
extern "C"  void AlignMTB_photo_AlignMTB_calculateShift_10_m3836591408 (Il2CppObject * __this /* static, unused */, IntPtr_t ___nativeObj0, IntPtr_t ___img0_nativeObj1, IntPtr_t ___img1_nativeObj2, DoubleU5BU5D_t2145413704* ___vals3, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean OpenCVForUnity.AlignMTB::photo_AlignMTB_getCut_10(System.IntPtr)
extern "C"  bool AlignMTB_photo_AlignMTB_getCut_10_m2451151614 (Il2CppObject * __this /* static, unused */, IntPtr_t ___nativeObj0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 OpenCVForUnity.AlignMTB::photo_AlignMTB_getExcludeRange_10(System.IntPtr)
extern "C"  int32_t AlignMTB_photo_AlignMTB_getExcludeRange_10_m764340791 (Il2CppObject * __this /* static, unused */, IntPtr_t ___nativeObj0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 OpenCVForUnity.AlignMTB::photo_AlignMTB_getMaxBits_10(System.IntPtr)
extern "C"  int32_t AlignMTB_photo_AlignMTB_getMaxBits_10_m2207280672 (Il2CppObject * __this /* static, unused */, IntPtr_t ___nativeObj0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void OpenCVForUnity.AlignMTB::photo_AlignMTB_computeBitmaps_10(System.IntPtr,System.IntPtr,System.IntPtr,System.IntPtr)
extern "C"  void AlignMTB_photo_AlignMTB_computeBitmaps_10_m4099896405 (Il2CppObject * __this /* static, unused */, IntPtr_t ___nativeObj0, IntPtr_t ___img_nativeObj1, IntPtr_t ___tb_nativeObj2, IntPtr_t ___eb_nativeObj3, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void OpenCVForUnity.AlignMTB::photo_AlignMTB_process_10(System.IntPtr,System.IntPtr,System.IntPtr,System.IntPtr,System.IntPtr)
extern "C"  void AlignMTB_photo_AlignMTB_process_10_m3239030963 (Il2CppObject * __this /* static, unused */, IntPtr_t ___nativeObj0, IntPtr_t ___src_mat_nativeObj1, IntPtr_t ___dst_mat_nativeObj2, IntPtr_t ___times_nativeObj3, IntPtr_t ___response_nativeObj4, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void OpenCVForUnity.AlignMTB::photo_AlignMTB_process_11(System.IntPtr,System.IntPtr,System.IntPtr)
extern "C"  void AlignMTB_photo_AlignMTB_process_11_m2933245942 (Il2CppObject * __this /* static, unused */, IntPtr_t ___nativeObj0, IntPtr_t ___src_mat_nativeObj1, IntPtr_t ___dst_mat_nativeObj2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void OpenCVForUnity.AlignMTB::photo_AlignMTB_setCut_10(System.IntPtr,System.Boolean)
extern "C"  void AlignMTB_photo_AlignMTB_setCut_10_m37568767 (Il2CppObject * __this /* static, unused */, IntPtr_t ___nativeObj0, bool ___value1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void OpenCVForUnity.AlignMTB::photo_AlignMTB_setExcludeRange_10(System.IntPtr,System.Int32)
extern "C"  void AlignMTB_photo_AlignMTB_setExcludeRange_10_m460379110 (Il2CppObject * __this /* static, unused */, IntPtr_t ___nativeObj0, int32_t ___exclude_range1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void OpenCVForUnity.AlignMTB::photo_AlignMTB_setMaxBits_10(System.IntPtr,System.Int32)
extern "C"  void AlignMTB_photo_AlignMTB_setMaxBits_10_m3645356817 (Il2CppObject * __this /* static, unused */, IntPtr_t ___nativeObj0, int32_t ___max_bits1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void OpenCVForUnity.AlignMTB::photo_AlignMTB_shiftMat_10(System.IntPtr,System.IntPtr,System.IntPtr,System.Double,System.Double)
extern "C"  void AlignMTB_photo_AlignMTB_shiftMat_10_m1423331472 (Il2CppObject * __this /* static, unused */, IntPtr_t ___nativeObj0, IntPtr_t ___src_nativeObj1, IntPtr_t ___dst_nativeObj2, double ___shift_x3, double ___shift_y4, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void OpenCVForUnity.AlignMTB::photo_AlignMTB_delete(System.IntPtr)
extern "C"  void AlignMTB_photo_AlignMTB_delete_m3019987647 (Il2CppObject * __this /* static, unused */, IntPtr_t ___nativeObj0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
