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

// OpenCVForUnity.RTrees
struct RTrees_t3403313371;
// OpenCVForUnity.Mat
struct Mat_t3763101966;
// OpenCVForUnity.TermCriteria
struct TermCriteria_t3040734659;
// System.Double[]
struct DoubleU5BU5D_t2145413704;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_IntPtr4010401971.h"
#include "AssemblyU2DCSharp_OpenCVForUnity_TermCriteria3040734659.h"

// System.Void OpenCVForUnity.RTrees::.ctor(System.IntPtr)
extern "C"  void RTrees__ctor_m2994695185 (RTrees_t3403313371 * __this, IntPtr_t ___addr0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void OpenCVForUnity.RTrees::Dispose(System.Boolean)
extern "C"  void RTrees_Dispose_m2712024599 (RTrees_t3403313371 * __this, bool ___disposing0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// OpenCVForUnity.Mat OpenCVForUnity.RTrees::getVarImportance()
extern "C"  Mat_t3763101966 * RTrees_getVarImportance_m2403499396 (RTrees_t3403313371 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// OpenCVForUnity.RTrees OpenCVForUnity.RTrees::create()
extern "C"  RTrees_t3403313371 * RTrees_create_m42513074 (Il2CppObject * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// OpenCVForUnity.TermCriteria OpenCVForUnity.RTrees::getTermCriteria()
extern "C"  TermCriteria_t3040734659 * RTrees_getTermCriteria_m2022713061 (RTrees_t3403313371 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean OpenCVForUnity.RTrees::getCalculateVarImportance()
extern "C"  bool RTrees_getCalculateVarImportance_m2258473856 (RTrees_t3403313371 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 OpenCVForUnity.RTrees::getActiveVarCount()
extern "C"  int32_t RTrees_getActiveVarCount_m693541427 (RTrees_t3403313371 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void OpenCVForUnity.RTrees::setActiveVarCount(System.Int32)
extern "C"  void RTrees_setActiveVarCount_m1780396674 (RTrees_t3403313371 * __this, int32_t ___val0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void OpenCVForUnity.RTrees::setCalculateVarImportance(System.Boolean)
extern "C"  void RTrees_setCalculateVarImportance_m2241584719 (RTrees_t3403313371 * __this, bool ___val0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void OpenCVForUnity.RTrees::setTermCriteria(OpenCVForUnity.TermCriteria)
extern "C"  void RTrees_setTermCriteria_m2051764340 (RTrees_t3403313371 * __this, TermCriteria_t3040734659 * ___val0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.IntPtr OpenCVForUnity.RTrees::ml_RTrees_getVarImportance_10(System.IntPtr)
extern "C"  IntPtr_t RTrees_ml_RTrees_getVarImportance_10_m2765499201 (Il2CppObject * __this /* static, unused */, IntPtr_t ___nativeObj0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.IntPtr OpenCVForUnity.RTrees::ml_RTrees_create_10()
extern "C"  IntPtr_t RTrees_ml_RTrees_create_10_m411293148 (Il2CppObject * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void OpenCVForUnity.RTrees::ml_RTrees_getTermCriteria_10(System.IntPtr,System.Double[])
extern "C"  void RTrees_ml_RTrees_getTermCriteria_10_m3151926612 (Il2CppObject * __this /* static, unused */, IntPtr_t ___nativeObj0, DoubleU5BU5D_t2145413704* ___vals1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean OpenCVForUnity.RTrees::ml_RTrees_getCalculateVarImportance_10(System.IntPtr)
extern "C"  bool RTrees_ml_RTrees_getCalculateVarImportance_10_m618460600 (Il2CppObject * __this /* static, unused */, IntPtr_t ___nativeObj0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 OpenCVForUnity.RTrees::ml_RTrees_getActiveVarCount_10(System.IntPtr)
extern "C"  int32_t RTrees_ml_RTrees_getActiveVarCount_10_m1201140203 (Il2CppObject * __this /* static, unused */, IntPtr_t ___nativeObj0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void OpenCVForUnity.RTrees::ml_RTrees_setActiveVarCount_10(System.IntPtr,System.Int32)
extern "C"  void RTrees_ml_RTrees_setActiveVarCount_10_m3483995022 (Il2CppObject * __this /* static, unused */, IntPtr_t ___nativeObj0, int32_t ___val1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void OpenCVForUnity.RTrees::ml_RTrees_setCalculateVarImportance_10(System.IntPtr,System.Boolean)
extern "C"  void RTrees_ml_RTrees_setCalculateVarImportance_10_m1914252141 (Il2CppObject * __this /* static, unused */, IntPtr_t ___nativeObj0, bool ___val1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void OpenCVForUnity.RTrees::ml_RTrees_setTermCriteria_10(System.IntPtr,System.Int32,System.Int32,System.Double)
extern "C"  void RTrees_ml_RTrees_setTermCriteria_10_m2722934946 (Il2CppObject * __this /* static, unused */, IntPtr_t ___nativeObj0, int32_t ___val_type1, int32_t ___val_maxCount2, double ___val_epsilon3, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void OpenCVForUnity.RTrees::ml_RTrees_delete(System.IntPtr)
extern "C"  void RTrees_ml_RTrees_delete_m899209228 (Il2CppObject * __this /* static, unused */, IntPtr_t ___nativeObj0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
