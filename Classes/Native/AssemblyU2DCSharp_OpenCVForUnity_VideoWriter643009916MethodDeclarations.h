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

// OpenCVForUnity.VideoWriter
struct VideoWriter_t643009916;
// System.String
struct String_t;
// OpenCVForUnity.Size
struct Size_t4100163289;
// OpenCVForUnity.Mat
struct Mat_t3763101966;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_IntPtr4010401971.h"
#include "mscorlib_System_String7231557.h"
#include "AssemblyU2DCSharp_OpenCVForUnity_Size4100163289.h"
#include "AssemblyU2DCSharp_OpenCVForUnity_Mat3763101966.h"

// System.Void OpenCVForUnity.VideoWriter::.ctor(System.IntPtr)
extern "C"  void VideoWriter__ctor_m1251846338 (VideoWriter_t643009916 * __this, IntPtr_t ___addr0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void OpenCVForUnity.VideoWriter::.ctor(System.String,System.Int32,System.Double,OpenCVForUnity.Size,System.Boolean)
extern "C"  void VideoWriter__ctor_m3279634964 (VideoWriter_t643009916 * __this, String_t* ___filename0, int32_t ___fourcc1, double ___fps2, Size_t4100163289 * ___frameSize3, bool ___isColor4, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void OpenCVForUnity.VideoWriter::.ctor(System.String,System.Int32,System.Double,OpenCVForUnity.Size)
extern "C"  void VideoWriter__ctor_m3265173065 (VideoWriter_t643009916 * __this, String_t* ___filename0, int32_t ___fourcc1, double ___fps2, Size_t4100163289 * ___frameSize3, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void OpenCVForUnity.VideoWriter::.ctor()
extern "C"  void VideoWriter__ctor_m1165287634 (VideoWriter_t643009916 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void OpenCVForUnity.VideoWriter::Dispose(System.Boolean)
extern "C"  void VideoWriter_Dispose_m3361664966 (VideoWriter_t643009916 * __this, bool ___disposing0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean OpenCVForUnity.VideoWriter::isOpened()
extern "C"  bool VideoWriter_isOpened_m3859992249 (VideoWriter_t643009916 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean OpenCVForUnity.VideoWriter::open(System.String,System.Int32,System.Double,OpenCVForUnity.Size,System.Boolean)
extern "C"  bool VideoWriter_open_m3578729622 (VideoWriter_t643009916 * __this, String_t* ___filename0, int32_t ___fourcc1, double ___fps2, Size_t4100163289 * ___frameSize3, bool ___isColor4, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean OpenCVForUnity.VideoWriter::open(System.String,System.Int32,System.Double,OpenCVForUnity.Size)
extern "C"  bool VideoWriter_open_m902057991 (VideoWriter_t643009916 * __this, String_t* ___filename0, int32_t ___fourcc1, double ___fps2, Size_t4100163289 * ___frameSize3, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean OpenCVForUnity.VideoWriter::set(System.Int32,System.Double)
extern "C"  bool VideoWriter_set_m1998823435 (VideoWriter_t643009916 * __this, int32_t ___propId0, double ___value1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Double OpenCVForUnity.VideoWriter::get(System.Int32)
extern "C"  double VideoWriter_get_m1418302068 (VideoWriter_t643009916 * __this, int32_t ___propId0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 OpenCVForUnity.VideoWriter::fourcc(System.Char,System.Char,System.Char,System.Char)
extern "C"  int32_t VideoWriter_fourcc_m4022694012 (Il2CppObject * __this /* static, unused */, Il2CppChar ___c10, Il2CppChar ___c21, Il2CppChar ___c32, Il2CppChar ___c43, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void OpenCVForUnity.VideoWriter::release()
extern "C"  void VideoWriter_release_m882960535 (VideoWriter_t643009916 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void OpenCVForUnity.VideoWriter::write(OpenCVForUnity.Mat)
extern "C"  void VideoWriter_write_m476353172 (VideoWriter_t643009916 * __this, Mat_t3763101966 * ___image0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.IntPtr OpenCVForUnity.VideoWriter::videoio_VideoWriter_VideoWriter_10(System.String,System.Int32,System.Double,System.Double,System.Double,System.Boolean)
extern "C"  IntPtr_t VideoWriter_videoio_VideoWriter_VideoWriter_10_m2467352622 (Il2CppObject * __this /* static, unused */, String_t* ___filename0, int32_t ___fourcc1, double ___fps2, double ___frameSize_width3, double ___frameSize_height4, bool ___isColor5, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.IntPtr OpenCVForUnity.VideoWriter::videoio_VideoWriter_VideoWriter_11(System.String,System.Int32,System.Double,System.Double,System.Double)
extern "C"  IntPtr_t VideoWriter_videoio_VideoWriter_VideoWriter_11_m2622589616 (Il2CppObject * __this /* static, unused */, String_t* ___filename0, int32_t ___fourcc1, double ___fps2, double ___frameSize_width3, double ___frameSize_height4, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.IntPtr OpenCVForUnity.VideoWriter::videoio_VideoWriter_VideoWriter_12()
extern "C"  IntPtr_t VideoWriter_videoio_VideoWriter_VideoWriter_12_m1623595176 (Il2CppObject * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean OpenCVForUnity.VideoWriter::videoio_VideoWriter_isOpened_10(System.IntPtr)
extern "C"  bool VideoWriter_videoio_VideoWriter_isOpened_10_m3234811132 (Il2CppObject * __this /* static, unused */, IntPtr_t ___nativeObj0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean OpenCVForUnity.VideoWriter::videoio_VideoWriter_open_10(System.IntPtr,System.String,System.Int32,System.Double,System.Double,System.Double,System.Boolean)
extern "C"  bool VideoWriter_videoio_VideoWriter_open_10_m564859041 (Il2CppObject * __this /* static, unused */, IntPtr_t ___nativeObj0, String_t* ___filename1, int32_t ___fourcc2, double ___fps3, double ___frameSize_width4, double ___frameSize_height5, bool ___isColor6, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean OpenCVForUnity.VideoWriter::videoio_VideoWriter_open_11(System.IntPtr,System.String,System.Int32,System.Double,System.Double,System.Double)
extern "C"  bool VideoWriter_videoio_VideoWriter_open_11_m3186330845 (Il2CppObject * __this /* static, unused */, IntPtr_t ___nativeObj0, String_t* ___filename1, int32_t ___fourcc2, double ___fps3, double ___frameSize_width4, double ___frameSize_height5, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean OpenCVForUnity.VideoWriter::videoio_VideoWriter_set_10(System.IntPtr,System.Int32,System.Double)
extern "C"  bool VideoWriter_videoio_VideoWriter_set_10_m189871216 (Il2CppObject * __this /* static, unused */, IntPtr_t ___nativeObj0, int32_t ___propId1, double ___value2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Double OpenCVForUnity.VideoWriter::videoio_VideoWriter_get_10(System.IntPtr,System.Int32)
extern "C"  double VideoWriter_videoio_VideoWriter_get_10_m39123823 (Il2CppObject * __this /* static, unused */, IntPtr_t ___nativeObj0, int32_t ___propId1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 OpenCVForUnity.VideoWriter::videoio_VideoWriter_fourcc_10(System.Char,System.Char,System.Char,System.Char)
extern "C"  int32_t VideoWriter_videoio_VideoWriter_fourcc_10_m1220018551 (Il2CppObject * __this /* static, unused */, Il2CppChar ___c10, Il2CppChar ___c21, Il2CppChar ___c32, Il2CppChar ___c43, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void OpenCVForUnity.VideoWriter::videoio_VideoWriter_release_10(System.IntPtr)
extern "C"  void VideoWriter_videoio_VideoWriter_release_10_m2063671644 (Il2CppObject * __this /* static, unused */, IntPtr_t ___nativeObj0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void OpenCVForUnity.VideoWriter::videoio_VideoWriter_write_10(System.IntPtr,System.IntPtr)
extern "C"  void VideoWriter_videoio_VideoWriter_write_10_m997340610 (Il2CppObject * __this /* static, unused */, IntPtr_t ___nativeObj0, IntPtr_t ___image_nativeObj1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void OpenCVForUnity.VideoWriter::videoio_VideoWriter_delete(System.IntPtr)
extern "C"  void VideoWriter_videoio_VideoWriter_delete_m1068083848 (Il2CppObject * __this /* static, unused */, IntPtr_t ___nativeObj0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
