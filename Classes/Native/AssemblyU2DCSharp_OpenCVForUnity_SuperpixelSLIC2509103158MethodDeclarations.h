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

// OpenCVForUnity.SuperpixelSLIC
struct SuperpixelSLIC_t2509103158;
// OpenCVForUnity.Mat
struct Mat_t3763101966;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_IntPtr4010401971.h"
#include "AssemblyU2DCSharp_OpenCVForUnity_Mat3763101966.h"

// System.Void OpenCVForUnity.SuperpixelSLIC::.ctor(System.IntPtr)
extern "C"  void SuperpixelSLIC__ctor_m4087971116 (SuperpixelSLIC_t2509103158 * __this, IntPtr_t ___addr0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void OpenCVForUnity.SuperpixelSLIC::Dispose(System.Boolean)
extern "C"  void SuperpixelSLIC_Dispose_m3758279452 (SuperpixelSLIC_t2509103158 * __this, bool ___disposing0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 OpenCVForUnity.SuperpixelSLIC::getNumberOfSuperpixels()
extern "C"  int32_t SuperpixelSLIC_getNumberOfSuperpixels_m3389450368 (SuperpixelSLIC_t2509103158 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void OpenCVForUnity.SuperpixelSLIC::enforceLabelConnectivity(System.Int32)
extern "C"  void SuperpixelSLIC_enforceLabelConnectivity_m3480694550 (SuperpixelSLIC_t2509103158 * __this, int32_t ___min_element_size0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void OpenCVForUnity.SuperpixelSLIC::enforceLabelConnectivity()
extern "C"  void SuperpixelSLIC_enforceLabelConnectivity_m1277573445 (SuperpixelSLIC_t2509103158 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void OpenCVForUnity.SuperpixelSLIC::getLabelContourMask(OpenCVForUnity.Mat,System.Boolean)
extern "C"  void SuperpixelSLIC_getLabelContourMask_m1101339914 (SuperpixelSLIC_t2509103158 * __this, Mat_t3763101966 * ___image0, bool ___thick_line1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void OpenCVForUnity.SuperpixelSLIC::getLabelContourMask(OpenCVForUnity.Mat)
extern "C"  void SuperpixelSLIC_getLabelContourMask_m2503274003 (SuperpixelSLIC_t2509103158 * __this, Mat_t3763101966 * ___image0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void OpenCVForUnity.SuperpixelSLIC::getLabels(OpenCVForUnity.Mat)
extern "C"  void SuperpixelSLIC_getLabels_m1441176064 (SuperpixelSLIC_t2509103158 * __this, Mat_t3763101966 * ___labels_out0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void OpenCVForUnity.SuperpixelSLIC::iterate(System.Int32)
extern "C"  void SuperpixelSLIC_iterate_m2671167345 (SuperpixelSLIC_t2509103158 * __this, int32_t ___num_iterations0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void OpenCVForUnity.SuperpixelSLIC::iterate()
extern "C"  void SuperpixelSLIC_iterate_m3239789088 (SuperpixelSLIC_t2509103158 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 OpenCVForUnity.SuperpixelSLIC::ximgproc_SuperpixelSLIC_getNumberOfSuperpixels_10(System.IntPtr)
extern "C"  int32_t SuperpixelSLIC_ximgproc_SuperpixelSLIC_getNumberOfSuperpixels_10_m213981239 (Il2CppObject * __this /* static, unused */, IntPtr_t ___nativeObj0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void OpenCVForUnity.SuperpixelSLIC::ximgproc_SuperpixelSLIC_enforceLabelConnectivity_10(System.IntPtr,System.Int32)
extern "C"  void SuperpixelSLIC_ximgproc_SuperpixelSLIC_enforceLabelConnectivity_10_m3784551963 (Il2CppObject * __this /* static, unused */, IntPtr_t ___nativeObj0, int32_t ___min_element_size1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void OpenCVForUnity.SuperpixelSLIC::ximgproc_SuperpixelSLIC_enforceLabelConnectivity_11(System.IntPtr)
extern "C"  void SuperpixelSLIC_ximgproc_SuperpixelSLIC_enforceLabelConnectivity_11_m2059046427 (Il2CppObject * __this /* static, unused */, IntPtr_t ___nativeObj0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void OpenCVForUnity.SuperpixelSLIC::ximgproc_SuperpixelSLIC_getLabelContourMask_10(System.IntPtr,System.IntPtr,System.Boolean)
extern "C"  void SuperpixelSLIC_ximgproc_SuperpixelSLIC_getLabelContourMask_10_m301799696 (Il2CppObject * __this /* static, unused */, IntPtr_t ___nativeObj0, IntPtr_t ___image_nativeObj1, bool ___thick_line2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void OpenCVForUnity.SuperpixelSLIC::ximgproc_SuperpixelSLIC_getLabelContourMask_11(System.IntPtr,System.IntPtr)
extern "C"  void SuperpixelSLIC_ximgproc_SuperpixelSLIC_getLabelContourMask_11_m3834499692 (Il2CppObject * __this /* static, unused */, IntPtr_t ___nativeObj0, IntPtr_t ___image_nativeObj1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void OpenCVForUnity.SuperpixelSLIC::ximgproc_SuperpixelSLIC_getLabels_10(System.IntPtr,System.IntPtr)
extern "C"  void SuperpixelSLIC_ximgproc_SuperpixelSLIC_getLabels_10_m4081293178 (Il2CppObject * __this /* static, unused */, IntPtr_t ___nativeObj0, IntPtr_t ___labels_out_nativeObj1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void OpenCVForUnity.SuperpixelSLIC::ximgproc_SuperpixelSLIC_iterate_10(System.IntPtr,System.Int32)
extern "C"  void SuperpixelSLIC_ximgproc_SuperpixelSLIC_iterate_10_m1690031814 (Il2CppObject * __this /* static, unused */, IntPtr_t ___nativeObj0, int32_t ___num_iterations1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void OpenCVForUnity.SuperpixelSLIC::ximgproc_SuperpixelSLIC_iterate_11(System.IntPtr)
extern "C"  void SuperpixelSLIC_ximgproc_SuperpixelSLIC_iterate_11_m3578178448 (Il2CppObject * __this /* static, unused */, IntPtr_t ___nativeObj0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void OpenCVForUnity.SuperpixelSLIC::ximgproc_SuperpixelSLIC_delete(System.IntPtr)
extern "C"  void SuperpixelSLIC_ximgproc_SuperpixelSLIC_delete_m2885037610 (Il2CppObject * __this /* static, unused */, IntPtr_t ___nativeObj0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
