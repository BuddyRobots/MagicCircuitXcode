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

// OpenCVForUnity.Xphoto
struct Xphoto_t3600659026;
// OpenCVForUnity.Mat
struct Mat_t3763101966;

#include "codegen/il2cpp-codegen.h"
#include "AssemblyU2DCSharp_OpenCVForUnity_Mat3763101966.h"
#include "mscorlib_System_IntPtr4010401971.h"

// System.Void OpenCVForUnity.Xphoto::.ctor()
extern "C"  void Xphoto__ctor_m763780492 (Xphoto_t3600659026 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void OpenCVForUnity.Xphoto::autowbGrayworld(OpenCVForUnity.Mat,OpenCVForUnity.Mat,System.Single)
extern "C"  void Xphoto_autowbGrayworld_m808357676 (Il2CppObject * __this /* static, unused */, Mat_t3763101966 * ___src0, Mat_t3763101966 * ___dst1, float ___thresh2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void OpenCVForUnity.Xphoto::autowbGrayworld(OpenCVForUnity.Mat,OpenCVForUnity.Mat)
extern "C"  void Xphoto_autowbGrayworld_m3282566279 (Il2CppObject * __this /* static, unused */, Mat_t3763101966 * ___src0, Mat_t3763101966 * ___dst1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void OpenCVForUnity.Xphoto::balanceWhite(OpenCVForUnity.Mat,OpenCVForUnity.Mat,System.Int32,System.Single,System.Single,System.Single,System.Single)
extern "C"  void Xphoto_balanceWhite_m2167914506 (Il2CppObject * __this /* static, unused */, Mat_t3763101966 * ___src0, Mat_t3763101966 * ___dst1, int32_t ___algorithmType2, float ___inputMin3, float ___inputMax4, float ___outputMin5, float ___outputMax6, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void OpenCVForUnity.Xphoto::balanceWhite(OpenCVForUnity.Mat,OpenCVForUnity.Mat,System.Int32)
extern "C"  void Xphoto_balanceWhite_m921070326 (Il2CppObject * __this /* static, unused */, Mat_t3763101966 * ___src0, Mat_t3763101966 * ___dst1, int32_t ___algorithmType2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void OpenCVForUnity.Xphoto::dctDenoising(OpenCVForUnity.Mat,OpenCVForUnity.Mat,System.Double,System.Int32)
extern "C"  void Xphoto_dctDenoising_m408595310 (Il2CppObject * __this /* static, unused */, Mat_t3763101966 * ___src0, Mat_t3763101966 * ___dst1, double ___sigma2, int32_t ___psize3, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void OpenCVForUnity.Xphoto::dctDenoising(OpenCVForUnity.Mat,OpenCVForUnity.Mat,System.Double)
extern "C"  void Xphoto_dctDenoising_m642877449 (Il2CppObject * __this /* static, unused */, Mat_t3763101966 * ___src0, Mat_t3763101966 * ___dst1, double ___sigma2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void OpenCVForUnity.Xphoto::inpaint(OpenCVForUnity.Mat,OpenCVForUnity.Mat,OpenCVForUnity.Mat,System.Int32)
extern "C"  void Xphoto_inpaint_m3958647215 (Il2CppObject * __this /* static, unused */, Mat_t3763101966 * ___src0, Mat_t3763101966 * ___mask1, Mat_t3763101966 * ___dst2, int32_t ___algorithmType3, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void OpenCVForUnity.Xphoto::xphoto_Xphoto_autowbGrayworld_10(System.IntPtr,System.IntPtr,System.Single)
extern "C"  void Xphoto_xphoto_Xphoto_autowbGrayworld_10_m3212838054 (Il2CppObject * __this /* static, unused */, IntPtr_t ___src_nativeObj0, IntPtr_t ___dst_nativeObj1, float ___thresh2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void OpenCVForUnity.Xphoto::xphoto_Xphoto_autowbGrayworld_11(System.IntPtr,System.IntPtr)
extern "C"  void Xphoto_xphoto_Xphoto_autowbGrayworld_11_m1205852960 (Il2CppObject * __this /* static, unused */, IntPtr_t ___src_nativeObj0, IntPtr_t ___dst_nativeObj1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void OpenCVForUnity.Xphoto::xphoto_Xphoto_balanceWhite_10(System.IntPtr,System.IntPtr,System.Int32,System.Single,System.Single,System.Single,System.Single)
extern "C"  void Xphoto_xphoto_Xphoto_balanceWhite_10_m728228228 (Il2CppObject * __this /* static, unused */, IntPtr_t ___src_nativeObj0, IntPtr_t ___dst_nativeObj1, int32_t ___algorithmType2, float ___inputMin3, float ___inputMax4, float ___outputMin5, float ___outputMax6, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void OpenCVForUnity.Xphoto::xphoto_Xphoto_balanceWhite_11(System.IntPtr,System.IntPtr,System.Int32)
extern "C"  void Xphoto_xphoto_Xphoto_balanceWhite_11_m3594301745 (Il2CppObject * __this /* static, unused */, IntPtr_t ___src_nativeObj0, IntPtr_t ___dst_nativeObj1, int32_t ___algorithmType2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void OpenCVForUnity.Xphoto::xphoto_Xphoto_dctDenoising_10(System.IntPtr,System.IntPtr,System.Double,System.Int32)
extern "C"  void Xphoto_xphoto_Xphoto_dctDenoising_10_m296529024 (Il2CppObject * __this /* static, unused */, IntPtr_t ___src_nativeObj0, IntPtr_t ___dst_nativeObj1, double ___sigma2, int32_t ___psize3, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void OpenCVForUnity.Xphoto::xphoto_Xphoto_dctDenoising_11(System.IntPtr,System.IntPtr,System.Double)
extern "C"  void Xphoto_xphoto_Xphoto_dctDenoising_11_m1311087382 (Il2CppObject * __this /* static, unused */, IntPtr_t ___src_nativeObj0, IntPtr_t ___dst_nativeObj1, double ___sigma2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void OpenCVForUnity.Xphoto::xphoto_Xphoto_inpaint_10(System.IntPtr,System.IntPtr,System.IntPtr,System.Int32)
extern "C"  void Xphoto_xphoto_Xphoto_inpaint_10_m3667281796 (Il2CppObject * __this /* static, unused */, IntPtr_t ___src_nativeObj0, IntPtr_t ___mask_nativeObj1, IntPtr_t ___dst_nativeObj2, int32_t ___algorithmType3, const MethodInfo* method) IL2CPP_METHOD_ATTR;
