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

// OpenCVForUnity.VideoCapture
struct VideoCapture_t815983651;
// System.String
struct String_t;
// OpenCVForUnity.Mat
struct Mat_t3763101966;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_IntPtr4010401971.h"
#include "mscorlib_System_String7231557.h"
#include "AssemblyU2DCSharp_OpenCVForUnity_Mat3763101966.h"

// System.Void OpenCVForUnity.VideoCapture::.ctor(System.IntPtr)
extern "C"  void VideoCapture__ctor_m287067993 (VideoCapture_t815983651 * __this, IntPtr_t ___addr0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void OpenCVForUnity.VideoCapture::.ctor(System.String,System.Int32)
extern "C"  void VideoCapture__ctor_m2462389808 (VideoCapture_t815983651 * __this, String_t* ___filename0, int32_t ___apiPreference1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void OpenCVForUnity.VideoCapture::.ctor(System.String)
extern "C"  void VideoCapture__ctor_m742836743 (VideoCapture_t815983651 * __this, String_t* ___filename0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void OpenCVForUnity.VideoCapture::.ctor(System.Int32)
extern "C"  void VideoCapture__ctor_m3750008236 (VideoCapture_t815983651 * __this, int32_t ___index0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void OpenCVForUnity.VideoCapture::.ctor()
extern "C"  void VideoCapture__ctor_m1356353755 (VideoCapture_t815983651 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void OpenCVForUnity.VideoCapture::Dispose(System.Boolean)
extern "C"  void VideoCapture_Dispose_m3571133903 (VideoCapture_t815983651 * __this, bool ___disposing0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean OpenCVForUnity.VideoCapture::grab()
extern "C"  bool VideoCapture_grab_m2398848257 (VideoCapture_t815983651 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean OpenCVForUnity.VideoCapture::isOpened()
extern "C"  bool VideoCapture_isOpened_m1802231080 (VideoCapture_t815983651 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean OpenCVForUnity.VideoCapture::open(System.String,System.Int32)
extern "C"  bool VideoCapture_open_m2662963668 (VideoCapture_t815983651 * __this, String_t* ___filename0, int32_t ___apiPreference1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean OpenCVForUnity.VideoCapture::open(System.String)
extern "C"  bool VideoCapture_open_m2358324195 (VideoCapture_t815983651 * __this, String_t* ___filename0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean OpenCVForUnity.VideoCapture::open(System.Int32)
extern "C"  bool VideoCapture_open_m1169721424 (VideoCapture_t815983651 * __this, int32_t ___index0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean OpenCVForUnity.VideoCapture::read(OpenCVForUnity.Mat)
extern "C"  bool VideoCapture_read_m528253744 (VideoCapture_t815983651 * __this, Mat_t3763101966 * ___image0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean OpenCVForUnity.VideoCapture::retrieve(OpenCVForUnity.Mat,System.Int32)
extern "C"  bool VideoCapture_retrieve_m2017068993 (VideoCapture_t815983651 * __this, Mat_t3763101966 * ___image0, int32_t ___flag1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean OpenCVForUnity.VideoCapture::retrieve(OpenCVForUnity.Mat)
extern "C"  bool VideoCapture_retrieve_m1865654486 (VideoCapture_t815983651 * __this, Mat_t3763101966 * ___image0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean OpenCVForUnity.VideoCapture::set(System.Int32,System.Double)
extern "C"  bool VideoCapture_set_m2543533308 (VideoCapture_t815983651 * __this, int32_t ___propId0, double ___value1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Double OpenCVForUnity.VideoCapture::get(System.Int32)
extern "C"  double VideoCapture_get_m3134733795 (VideoCapture_t815983651 * __this, int32_t ___propId0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void OpenCVForUnity.VideoCapture::release()
extern "C"  void VideoCapture_release_m4108876384 (VideoCapture_t815983651 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.IntPtr OpenCVForUnity.VideoCapture::videoio_VideoCapture_VideoCapture_10(System.String,System.Int32)
extern "C"  IntPtr_t VideoCapture_videoio_VideoCapture_VideoCapture_10_m1677199142 (Il2CppObject * __this /* static, unused */, String_t* ___filename0, int32_t ___apiPreference1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.IntPtr OpenCVForUnity.VideoCapture::videoio_VideoCapture_VideoCapture_11(System.String)
extern "C"  IntPtr_t VideoCapture_videoio_VideoCapture_VideoCapture_11_m3659751216 (Il2CppObject * __this /* static, unused */, String_t* ___filename0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.IntPtr OpenCVForUnity.VideoCapture::videoio_VideoCapture_VideoCapture_12(System.Int32)
extern "C"  IntPtr_t VideoCapture_videoio_VideoCapture_VideoCapture_12_m779592100 (Il2CppObject * __this /* static, unused */, int32_t ___index0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.IntPtr OpenCVForUnity.VideoCapture::videoio_VideoCapture_VideoCapture_13()
extern "C"  IntPtr_t VideoCapture_videoio_VideoCapture_VideoCapture_13_m3670250644 (Il2CppObject * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean OpenCVForUnity.VideoCapture::videoio_VideoCapture_grab_10(System.IntPtr)
extern "C"  bool VideoCapture_videoio_VideoCapture_grab_10_m3847145347 (Il2CppObject * __this /* static, unused */, IntPtr_t ___nativeObj0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean OpenCVForUnity.VideoCapture::videoio_VideoCapture_isOpened_10(System.IntPtr)
extern "C"  bool VideoCapture_videoio_VideoCapture_isOpened_10_m2504964778 (Il2CppObject * __this /* static, unused */, IntPtr_t ___nativeObj0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean OpenCVForUnity.VideoCapture::videoio_VideoCapture_open_10(System.IntPtr,System.String,System.Int32)
extern "C"  bool VideoCapture_videoio_VideoCapture_open_10_m3299122554 (Il2CppObject * __this /* static, unused */, IntPtr_t ___nativeObj0, String_t* ___filename1, int32_t ___apiPreference2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean OpenCVForUnity.VideoCapture::videoio_VideoCapture_open_11(System.IntPtr,System.String)
extern "C"  bool VideoCapture_videoio_VideoCapture_open_11_m3484933660 (Il2CppObject * __this /* static, unused */, IntPtr_t ___nativeObj0, String_t* ___filename1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean OpenCVForUnity.VideoCapture::videoio_VideoCapture_open_12(System.IntPtr,System.Int32)
extern "C"  bool VideoCapture_videoio_VideoCapture_open_12_m4254470008 (Il2CppObject * __this /* static, unused */, IntPtr_t ___nativeObj0, int32_t ___index1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean OpenCVForUnity.VideoCapture::videoio_VideoCapture_read_10(System.IntPtr,System.IntPtr)
extern "C"  bool VideoCapture_videoio_VideoCapture_read_10_m3328293659 (Il2CppObject * __this /* static, unused */, IntPtr_t ___nativeObj0, IntPtr_t ___image_nativeObj1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean OpenCVForUnity.VideoCapture::videoio_VideoCapture_retrieve_10(System.IntPtr,System.IntPtr,System.Int32)
extern "C"  bool VideoCapture_videoio_VideoCapture_retrieve_10_m2671281590 (Il2CppObject * __this /* static, unused */, IntPtr_t ___nativeObj0, IntPtr_t ___image_nativeObj1, int32_t ___flag2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean OpenCVForUnity.VideoCapture::videoio_VideoCapture_retrieve_11(System.IntPtr,System.IntPtr)
extern "C"  bool VideoCapture_videoio_VideoCapture_retrieve_11_m1279476832 (Il2CppObject * __this /* static, unused */, IntPtr_t ___nativeObj0, IntPtr_t ___image_nativeObj1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean OpenCVForUnity.VideoCapture::videoio_VideoCapture_set_10(System.IntPtr,System.Int32,System.Double)
extern "C"  bool VideoCapture_videoio_VideoCapture_set_10_m1921452958 (Il2CppObject * __this /* static, unused */, IntPtr_t ___nativeObj0, int32_t ___propId1, double ___value2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Double OpenCVForUnity.VideoCapture::videoio_VideoCapture_get_10(System.IntPtr,System.Int32)
extern "C"  double VideoCapture_videoio_VideoCapture_get_10_m131210077 (Il2CppObject * __this /* static, unused */, IntPtr_t ___nativeObj0, int32_t ___propId1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void OpenCVForUnity.VideoCapture::videoio_VideoCapture_release_10(System.IntPtr)
extern "C"  void VideoCapture_videoio_VideoCapture_release_10_m1702234350 (Il2CppObject * __this /* static, unused */, IntPtr_t ___nativeObj0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void OpenCVForUnity.VideoCapture::videoio_VideoCapture_delete(System.IntPtr)
extern "C"  void VideoCapture_videoio_VideoCapture_delete_m601172762 (Il2CppObject * __this /* static, unused */, IntPtr_t ___nativeObj0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
