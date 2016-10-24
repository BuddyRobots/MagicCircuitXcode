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

// OpenCVForUnity.BackgroundSubtractor
struct BackgroundSubtractor_t593313949;
// OpenCVForUnity.Mat
struct Mat_t3763101966;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_IntPtr4010401971.h"
#include "AssemblyU2DCSharp_OpenCVForUnity_Mat3763101966.h"

// System.Void OpenCVForUnity.BackgroundSubtractor::.ctor(System.IntPtr)
extern "C"  void BackgroundSubtractor__ctor_m2994148435 (BackgroundSubtractor_t593313949 * __this, IntPtr_t ___addr0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void OpenCVForUnity.BackgroundSubtractor::Dispose(System.Boolean)
extern "C"  void BackgroundSubtractor_Dispose_m3603664533 (BackgroundSubtractor_t593313949 * __this, bool ___disposing0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void OpenCVForUnity.BackgroundSubtractor::apply(OpenCVForUnity.Mat,OpenCVForUnity.Mat,System.Double)
extern "C"  void BackgroundSubtractor_apply_m2769687797 (BackgroundSubtractor_t593313949 * __this, Mat_t3763101966 * ___image0, Mat_t3763101966 * ___fgmask1, double ___learningRate2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void OpenCVForUnity.BackgroundSubtractor::apply(OpenCVForUnity.Mat,OpenCVForUnity.Mat)
extern "C"  void BackgroundSubtractor_apply_m2329339961 (BackgroundSubtractor_t593313949 * __this, Mat_t3763101966 * ___image0, Mat_t3763101966 * ___fgmask1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void OpenCVForUnity.BackgroundSubtractor::getBackgroundImage(OpenCVForUnity.Mat)
extern "C"  void BackgroundSubtractor_getBackgroundImage_m479775839 (BackgroundSubtractor_t593313949 * __this, Mat_t3763101966 * ___backgroundImage0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void OpenCVForUnity.BackgroundSubtractor::video_BackgroundSubtractor_apply_10(System.IntPtr,System.IntPtr,System.IntPtr,System.Double)
extern "C"  void BackgroundSubtractor_video_BackgroundSubtractor_apply_10_m3680817159 (Il2CppObject * __this /* static, unused */, IntPtr_t ___nativeObj0, IntPtr_t ___image_nativeObj1, IntPtr_t ___fgmask_nativeObj2, double ___learningRate3, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void OpenCVForUnity.BackgroundSubtractor::video_BackgroundSubtractor_apply_11(System.IntPtr,System.IntPtr,System.IntPtr)
extern "C"  void BackgroundSubtractor_video_BackgroundSubtractor_apply_11_m3925013546 (Il2CppObject * __this /* static, unused */, IntPtr_t ___nativeObj0, IntPtr_t ___image_nativeObj1, IntPtr_t ___fgmask_nativeObj2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void OpenCVForUnity.BackgroundSubtractor::video_BackgroundSubtractor_getBackgroundImage_10(System.IntPtr,System.IntPtr)
extern "C"  void BackgroundSubtractor_video_BackgroundSubtractor_getBackgroundImage_10_m1006526478 (Il2CppObject * __this /* static, unused */, IntPtr_t ___nativeObj0, IntPtr_t ___backgroundImage_nativeObj1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void OpenCVForUnity.BackgroundSubtractor::video_BackgroundSubtractor_delete(System.IntPtr)
extern "C"  void BackgroundSubtractor_video_BackgroundSubtractor_delete_m3573430580 (Il2CppObject * __this /* static, unused */, IntPtr_t ___nativeObj0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
