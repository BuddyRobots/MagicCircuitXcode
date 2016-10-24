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

// OpenCVForUnity.MinDistancePredictCollector
struct MinDistancePredictCollector_t3775344873;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_IntPtr4010401971.h"

// System.Void OpenCVForUnity.MinDistancePredictCollector::.ctor(System.IntPtr)
extern "C"  void MinDistancePredictCollector__ctor_m2078833775 (MinDistancePredictCollector_t3775344873 * __this, IntPtr_t ___addr0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void OpenCVForUnity.MinDistancePredictCollector::.ctor(System.Double)
extern "C"  void MinDistancePredictCollector__ctor_m1966363485 (MinDistancePredictCollector_t3775344873 * __this, double ___threshold0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void OpenCVForUnity.MinDistancePredictCollector::.ctor()
extern "C"  void MinDistancePredictCollector__ctor_m3801782277 (MinDistancePredictCollector_t3775344873 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void OpenCVForUnity.MinDistancePredictCollector::Dispose(System.Boolean)
extern "C"  void MinDistancePredictCollector_Dispose_m4211990777 (MinDistancePredictCollector_t3775344873 * __this, bool ___disposing0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// OpenCVForUnity.MinDistancePredictCollector OpenCVForUnity.MinDistancePredictCollector::create(System.Double)
extern "C"  MinDistancePredictCollector_t3775344873 * MinDistancePredictCollector_create_m4206021664 (Il2CppObject * __this /* static, unused */, double ___threshold0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// OpenCVForUnity.MinDistancePredictCollector OpenCVForUnity.MinDistancePredictCollector::create()
extern "C"  MinDistancePredictCollector_t3775344873 * MinDistancePredictCollector_create_m2639797858 (Il2CppObject * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean OpenCVForUnity.MinDistancePredictCollector::emit(System.Int32,System.Double,System.Int32)
extern "C"  bool MinDistancePredictCollector_emit_m3655379428 (MinDistancePredictCollector_t3775344873 * __this, int32_t ___label0, double ___dist1, int32_t ___state2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean OpenCVForUnity.MinDistancePredictCollector::emit(System.Int32,System.Double)
extern "C"  bool MinDistancePredictCollector_emit_m1155613139 (MinDistancePredictCollector_t3775344873 * __this, int32_t ___label0, double ___dist1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Double OpenCVForUnity.MinDistancePredictCollector::getDist()
extern "C"  double MinDistancePredictCollector_getDist_m562322780 (MinDistancePredictCollector_t3775344873 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 OpenCVForUnity.MinDistancePredictCollector::getLabel()
extern "C"  int32_t MinDistancePredictCollector_getLabel_m833076939 (MinDistancePredictCollector_t3775344873 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.IntPtr OpenCVForUnity.MinDistancePredictCollector::face_MinDistancePredictCollector_MinDistancePredictCollector_10(System.Double)
extern "C"  IntPtr_t MinDistancePredictCollector_face_MinDistancePredictCollector_MinDistancePredictCollector_10_m1859502315 (Il2CppObject * __this /* static, unused */, double ___threshold0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.IntPtr OpenCVForUnity.MinDistancePredictCollector::face_MinDistancePredictCollector_MinDistancePredictCollector_11()
extern "C"  IntPtr_t MinDistancePredictCollector_face_MinDistancePredictCollector_MinDistancePredictCollector_11_m917520248 (Il2CppObject * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.IntPtr OpenCVForUnity.MinDistancePredictCollector::face_MinDistancePredictCollector_create_10(System.Double)
extern "C"  IntPtr_t MinDistancePredictCollector_face_MinDistancePredictCollector_create_10_m1491289874 (Il2CppObject * __this /* static, unused */, double ___threshold0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.IntPtr OpenCVForUnity.MinDistancePredictCollector::face_MinDistancePredictCollector_create_11()
extern "C"  IntPtr_t MinDistancePredictCollector_face_MinDistancePredictCollector_create_11_m3355493873 (Il2CppObject * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean OpenCVForUnity.MinDistancePredictCollector::face_MinDistancePredictCollector_emit_10(System.IntPtr,System.Int32,System.Double,System.Int32)
extern "C"  bool MinDistancePredictCollector_face_MinDistancePredictCollector_emit_10_m3217185536 (Il2CppObject * __this /* static, unused */, IntPtr_t ___nativeObj0, int32_t ___label1, double ___dist2, int32_t ___state3, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean OpenCVForUnity.MinDistancePredictCollector::face_MinDistancePredictCollector_emit_11(System.IntPtr,System.Int32,System.Double)
extern "C"  bool MinDistancePredictCollector_face_MinDistancePredictCollector_emit_11_m407593464 (Il2CppObject * __this /* static, unused */, IntPtr_t ___nativeObj0, int32_t ___label1, double ___dist2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Double OpenCVForUnity.MinDistancePredictCollector::face_MinDistancePredictCollector_getDist_10(System.IntPtr)
extern "C"  double MinDistancePredictCollector_face_MinDistancePredictCollector_getDist_10_m2683330732 (Il2CppObject * __this /* static, unused */, IntPtr_t ___nativeObj0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 OpenCVForUnity.MinDistancePredictCollector::face_MinDistancePredictCollector_getLabel_10(System.IntPtr)
extern "C"  int32_t MinDistancePredictCollector_face_MinDistancePredictCollector_getLabel_10_m2330206829 (Il2CppObject * __this /* static, unused */, IntPtr_t ___nativeObj0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void OpenCVForUnity.MinDistancePredictCollector::face_MinDistancePredictCollector_delete(System.IntPtr)
extern "C"  void MinDistancePredictCollector_face_MinDistancePredictCollector_delete_m3827001056 (Il2CppObject * __this /* static, unused */, IntPtr_t ___nativeObj0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
