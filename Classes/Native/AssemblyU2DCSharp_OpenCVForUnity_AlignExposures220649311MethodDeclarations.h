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

// OpenCVForUnity.AlignExposures
struct AlignExposures_t220649311;
// System.Collections.Generic.List`1<OpenCVForUnity.Mat>
struct List_1_t836320222;
// OpenCVForUnity.Mat
struct Mat_t3763101966;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_IntPtr4010401971.h"
#include "AssemblyU2DCSharp_OpenCVForUnity_Mat3763101966.h"

// System.Void OpenCVForUnity.AlignExposures::.ctor(System.IntPtr)
extern "C"  void AlignExposures__ctor_m3859857301 (AlignExposures_t220649311 * __this, IntPtr_t ___addr0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void OpenCVForUnity.AlignExposures::Dispose(System.Boolean)
extern "C"  void AlignExposures_Dispose_m2657879059 (AlignExposures_t220649311 * __this, bool ___disposing0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void OpenCVForUnity.AlignExposures::process(System.Collections.Generic.List`1<OpenCVForUnity.Mat>,System.Collections.Generic.List`1<OpenCVForUnity.Mat>,OpenCVForUnity.Mat,OpenCVForUnity.Mat)
extern "C"  void AlignExposures_process_m3339069544 (AlignExposures_t220649311 * __this, List_1_t836320222 * ___src0, List_1_t836320222 * ___dst1, Mat_t3763101966 * ___times2, Mat_t3763101966 * ___response3, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void OpenCVForUnity.AlignExposures::photo_AlignExposures_process_10(System.IntPtr,System.IntPtr,System.IntPtr,System.IntPtr,System.IntPtr)
extern "C"  void AlignExposures_photo_AlignExposures_process_10_m919943317 (Il2CppObject * __this /* static, unused */, IntPtr_t ___nativeObj0, IntPtr_t ___src_mat_nativeObj1, IntPtr_t ___dst_mat_nativeObj2, IntPtr_t ___times_nativeObj3, IntPtr_t ___response_nativeObj4, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void OpenCVForUnity.AlignExposures::photo_AlignExposures_delete(System.IntPtr)
extern "C"  void AlignExposures_photo_AlignExposures_delete_m2562994593 (Il2CppObject * __this /* static, unused */, IntPtr_t ___nativeObj0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
