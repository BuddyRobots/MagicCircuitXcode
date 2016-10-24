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

// OpenCVForUnity.KNearest
struct KNearest_t3073377739;
// OpenCVForUnity.Mat
struct Mat_t3763101966;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_IntPtr4010401971.h"
#include "AssemblyU2DCSharp_OpenCVForUnity_Mat3763101966.h"

// System.Void OpenCVForUnity.KNearest::.ctor(System.IntPtr)
extern "C"  void KNearest__ctor_m1866204929 (KNearest_t3073377739 * __this, IntPtr_t ___addr0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void OpenCVForUnity.KNearest::Dispose(System.Boolean)
extern "C"  void KNearest_Dispose_m567833895 (KNearest_t3073377739 * __this, bool ___disposing0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// OpenCVForUnity.KNearest OpenCVForUnity.KNearest::create()
extern "C"  KNearest_t3073377739 * KNearest_create_m2741829650 (Il2CppObject * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean OpenCVForUnity.KNearest::getIsClassifier()
extern "C"  bool KNearest_getIsClassifier_m2349886534 (KNearest_t3073377739 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Single OpenCVForUnity.KNearest::findNearest(OpenCVForUnity.Mat,System.Int32,OpenCVForUnity.Mat,OpenCVForUnity.Mat,OpenCVForUnity.Mat)
extern "C"  float KNearest_findNearest_m982606555 (KNearest_t3073377739 * __this, Mat_t3763101966 * ___samples0, int32_t ___k1, Mat_t3763101966 * ___results2, Mat_t3763101966 * ___neighborResponses3, Mat_t3763101966 * ___dist4, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Single OpenCVForUnity.KNearest::findNearest(OpenCVForUnity.Mat,System.Int32,OpenCVForUnity.Mat)
extern "C"  float KNearest_findNearest_m429954299 (KNearest_t3073377739 * __this, Mat_t3763101966 * ___samples0, int32_t ___k1, Mat_t3763101966 * ___results2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 OpenCVForUnity.KNearest::getAlgorithmType()
extern "C"  int32_t KNearest_getAlgorithmType_m318864278 (KNearest_t3073377739 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 OpenCVForUnity.KNearest::getDefaultK()
extern "C"  int32_t KNearest_getDefaultK_m1906503839 (KNearest_t3073377739 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 OpenCVForUnity.KNearest::getEmax()
extern "C"  int32_t KNearest_getEmax_m2336968212 (KNearest_t3073377739 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void OpenCVForUnity.KNearest::setAlgorithmType(System.Int32)
extern "C"  void KNearest_setAlgorithmType_m2356503849 (KNearest_t3073377739 * __this, int32_t ___val0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void OpenCVForUnity.KNearest::setDefaultK(System.Int32)
extern "C"  void KNearest_setDefaultK_m1813711086 (KNearest_t3073377739 * __this, int32_t ___val0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void OpenCVForUnity.KNearest::setEmax(System.Int32)
extern "C"  void KNearest_setEmax_m3057012195 (KNearest_t3073377739 * __this, int32_t ___val0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void OpenCVForUnity.KNearest::setIsClassifier(System.Boolean)
extern "C"  void KNearest_setIsClassifier_m2131513237 (KNearest_t3073377739 * __this, bool ___val0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.IntPtr OpenCVForUnity.KNearest::ml_KNearest_create_10()
extern "C"  IntPtr_t KNearest_ml_KNearest_create_10_m3211969692 (Il2CppObject * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean OpenCVForUnity.KNearest::ml_KNearest_getIsClassifier_10(System.IntPtr)
extern "C"  bool KNearest_ml_KNearest_getIsClassifier_10_m1186865326 (Il2CppObject * __this /* static, unused */, IntPtr_t ___nativeObj0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Single OpenCVForUnity.KNearest::ml_KNearest_findNearest_10(System.IntPtr,System.IntPtr,System.Int32,System.IntPtr,System.IntPtr,System.IntPtr)
extern "C"  float KNearest_ml_KNearest_findNearest_10_m1750748521 (Il2CppObject * __this /* static, unused */, IntPtr_t ___nativeObj0, IntPtr_t ___samples_nativeObj1, int32_t ___k2, IntPtr_t ___results_nativeObj3, IntPtr_t ___neighborResponses_nativeObj4, IntPtr_t ___dist_nativeObj5, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Single OpenCVForUnity.KNearest::ml_KNearest_findNearest_11(System.IntPtr,System.IntPtr,System.Int32,System.IntPtr)
extern "C"  float KNearest_ml_KNearest_findNearest_11_m2510491982 (Il2CppObject * __this /* static, unused */, IntPtr_t ___nativeObj0, IntPtr_t ___samples_nativeObj1, int32_t ___k2, IntPtr_t ___results_nativeObj3, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 OpenCVForUnity.KNearest::ml_KNearest_getAlgorithmType_10(System.IntPtr)
extern "C"  int32_t KNearest_ml_KNearest_getAlgorithmType_10_m4032336790 (Il2CppObject * __this /* static, unused */, IntPtr_t ___nativeObj0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 OpenCVForUnity.KNearest::ml_KNearest_getDefaultK_10(System.IntPtr)
extern "C"  int32_t KNearest_ml_KNearest_getDefaultK_10_m1367111175 (Il2CppObject * __this /* static, unused */, IntPtr_t ___nativeObj0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 OpenCVForUnity.KNearest::ml_KNearest_getEmax_10(System.IntPtr)
extern "C"  int32_t KNearest_ml_KNearest_getEmax_10_m2429641596 (Il2CppObject * __this /* static, unused */, IntPtr_t ___nativeObj0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void OpenCVForUnity.KNearest::ml_KNearest_setAlgorithmType_10(System.IntPtr,System.Int32)
extern "C"  void KNearest_ml_KNearest_setAlgorithmType_10_m1682127103 (Il2CppObject * __this /* static, unused */, IntPtr_t ___nativeObj0, int32_t ___val1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void OpenCVForUnity.KNearest::ml_KNearest_setDefaultK_10(System.IntPtr,System.Int32)
extern "C"  void KNearest_ml_KNearest_setDefaultK_10_m1601255282 (Il2CppObject * __this /* static, unused */, IntPtr_t ___nativeObj0, int32_t ___val1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void OpenCVForUnity.KNearest::ml_KNearest_setEmax_10(System.IntPtr,System.Int32)
extern "C"  void KNearest_ml_KNearest_setEmax_10_m3704586525 (Il2CppObject * __this /* static, unused */, IntPtr_t ___nativeObj0, int32_t ___val1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void OpenCVForUnity.KNearest::ml_KNearest_setIsClassifier_10(System.IntPtr,System.Boolean)
extern "C"  void KNearest_ml_KNearest_setIsClassifier_10_m2900422071 (Il2CppObject * __this /* static, unused */, IntPtr_t ___nativeObj0, bool ___val1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void OpenCVForUnity.KNearest::ml_KNearest_delete(System.IntPtr)
extern "C"  void KNearest_ml_KNearest_delete_m1179138380 (Il2CppObject * __this /* static, unused */, IntPtr_t ___nativeObj0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
