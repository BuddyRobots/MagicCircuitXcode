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

// OpenCVForUnity.MergeExposures
struct MergeExposures_t3433100172;
// System.Collections.Generic.List`1<OpenCVForUnity.Mat>
struct List_1_t836320222;
// OpenCVForUnity.Mat
struct Mat_t3763101966;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_IntPtr4010401971.h"
#include "AssemblyU2DCSharp_OpenCVForUnity_Mat3763101966.h"

// System.Void OpenCVForUnity.MergeExposures::.ctor(System.IntPtr)
extern "C"  void MergeExposures__ctor_m3850750978 (MergeExposures_t3433100172 * __this, IntPtr_t ___addr0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void OpenCVForUnity.MergeExposures::Dispose(System.Boolean)
extern "C"  void MergeExposures_Dispose_m1954350214 (MergeExposures_t3433100172 * __this, bool ___disposing0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void OpenCVForUnity.MergeExposures::process(System.Collections.Generic.List`1<OpenCVForUnity.Mat>,OpenCVForUnity.Mat,OpenCVForUnity.Mat,OpenCVForUnity.Mat)
extern "C"  void MergeExposures_process_m793057533 (MergeExposures_t3433100172 * __this, List_1_t836320222 * ___src0, Mat_t3763101966 * ___dst1, Mat_t3763101966 * ___times2, Mat_t3763101966 * ___response3, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void OpenCVForUnity.MergeExposures::photo_MergeExposures_process_10(System.IntPtr,System.IntPtr,System.IntPtr,System.IntPtr,System.IntPtr)
extern "C"  void MergeExposures_photo_MergeExposures_process_10_m3666566831 (Il2CppObject * __this /* static, unused */, IntPtr_t ___nativeObj0, IntPtr_t ___src_mat_nativeObj1, IntPtr_t ___dst_nativeObj2, IntPtr_t ___times_nativeObj3, IntPtr_t ___response_nativeObj4, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void OpenCVForUnity.MergeExposures::photo_MergeExposures_delete(System.IntPtr)
extern "C"  void MergeExposures_photo_MergeExposures_delete_m1278970555 (Il2CppObject * __this /* static, unused */, IntPtr_t ___nativeObj0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
