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

// OpenCVForUnity.ShapeContextDistanceExtractor
struct ShapeContextDistanceExtractor_t604152943;
// OpenCVForUnity.HistogramCostExtractor
struct HistogramCostExtractor_t694650219;
// OpenCVForUnity.ShapeTransformer
struct ShapeTransformer_t339422736;
// OpenCVForUnity.Mat
struct Mat_t3763101966;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_IntPtr4010401971.h"
#include "AssemblyU2DCSharp_OpenCVForUnity_Mat3763101966.h"
#include "AssemblyU2DCSharp_OpenCVForUnity_HistogramCostExtra694650219.h"
#include "AssemblyU2DCSharp_OpenCVForUnity_ShapeTransformer339422736.h"

// System.Void OpenCVForUnity.ShapeContextDistanceExtractor::.ctor(System.IntPtr)
extern "C"  void ShapeContextDistanceExtractor__ctor_m62901621 (ShapeContextDistanceExtractor_t604152943 * __this, IntPtr_t ___addr0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void OpenCVForUnity.ShapeContextDistanceExtractor::Dispose(System.Boolean)
extern "C"  void ShapeContextDistanceExtractor_Dispose_m4104890931 (ShapeContextDistanceExtractor_t604152943 * __this, bool ___disposing0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// OpenCVForUnity.HistogramCostExtractor OpenCVForUnity.ShapeContextDistanceExtractor::getCostExtractor()
extern "C"  HistogramCostExtractor_t694650219 * ShapeContextDistanceExtractor_getCostExtractor_m1367509985 (ShapeContextDistanceExtractor_t604152943 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// OpenCVForUnity.ShapeTransformer OpenCVForUnity.ShapeContextDistanceExtractor::getTransformAlgorithm()
extern "C"  ShapeTransformer_t339422736 * ShapeContextDistanceExtractor_getTransformAlgorithm_m3349826848 (ShapeContextDistanceExtractor_t604152943 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean OpenCVForUnity.ShapeContextDistanceExtractor::getRotationInvariant()
extern "C"  bool ShapeContextDistanceExtractor_getRotationInvariant_m1185693413 (ShapeContextDistanceExtractor_t604152943 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Single OpenCVForUnity.ShapeContextDistanceExtractor::getBendingEnergyWeight()
extern "C"  float ShapeContextDistanceExtractor_getBendingEnergyWeight_m1839594660 (ShapeContextDistanceExtractor_t604152943 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Single OpenCVForUnity.ShapeContextDistanceExtractor::getImageAppearanceWeight()
extern "C"  float ShapeContextDistanceExtractor_getImageAppearanceWeight_m1487821906 (ShapeContextDistanceExtractor_t604152943 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Single OpenCVForUnity.ShapeContextDistanceExtractor::getInnerRadius()
extern "C"  float ShapeContextDistanceExtractor_getInnerRadius_m3412089763 (ShapeContextDistanceExtractor_t604152943 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Single OpenCVForUnity.ShapeContextDistanceExtractor::getOuterRadius()
extern "C"  float ShapeContextDistanceExtractor_getOuterRadius_m363477192 (ShapeContextDistanceExtractor_t604152943 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Single OpenCVForUnity.ShapeContextDistanceExtractor::getShapeContextWeight()
extern "C"  float ShapeContextDistanceExtractor_getShapeContextWeight_m2475858701 (ShapeContextDistanceExtractor_t604152943 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Single OpenCVForUnity.ShapeContextDistanceExtractor::getStdDev()
extern "C"  float ShapeContextDistanceExtractor_getStdDev_m1475564825 (ShapeContextDistanceExtractor_t604152943 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 OpenCVForUnity.ShapeContextDistanceExtractor::getAngularBins()
extern "C"  int32_t ShapeContextDistanceExtractor_getAngularBins_m1144567467 (ShapeContextDistanceExtractor_t604152943 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 OpenCVForUnity.ShapeContextDistanceExtractor::getIterations()
extern "C"  int32_t ShapeContextDistanceExtractor_getIterations_m2307451227 (ShapeContextDistanceExtractor_t604152943 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 OpenCVForUnity.ShapeContextDistanceExtractor::getRadialBins()
extern "C"  int32_t ShapeContextDistanceExtractor_getRadialBins_m2903094768 (ShapeContextDistanceExtractor_t604152943 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void OpenCVForUnity.ShapeContextDistanceExtractor::getImages(OpenCVForUnity.Mat,OpenCVForUnity.Mat)
extern "C"  void ShapeContextDistanceExtractor_getImages_m4214151003 (ShapeContextDistanceExtractor_t604152943 * __this, Mat_t3763101966 * ___image10, Mat_t3763101966 * ___image21, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void OpenCVForUnity.ShapeContextDistanceExtractor::setAngularBins(System.Int32)
extern "C"  void ShapeContextDistanceExtractor_setAngularBins_m3007325026 (ShapeContextDistanceExtractor_t604152943 * __this, int32_t ___nAngularBins0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void OpenCVForUnity.ShapeContextDistanceExtractor::setBendingEnergyWeight(System.Single)
extern "C"  void ShapeContextDistanceExtractor_setBendingEnergyWeight_m2830041567 (ShapeContextDistanceExtractor_t604152943 * __this, float ___bendingEnergyWeight0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void OpenCVForUnity.ShapeContextDistanceExtractor::setCostExtractor(OpenCVForUnity.HistogramCostExtractor)
extern "C"  void ShapeContextDistanceExtractor_setCostExtractor_m3605018560 (ShapeContextDistanceExtractor_t604152943 * __this, HistogramCostExtractor_t694650219 * ___comparer0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void OpenCVForUnity.ShapeContextDistanceExtractor::setImageAppearanceWeight(System.Single)
extern "C"  void ShapeContextDistanceExtractor_setImageAppearanceWeight_m967628529 (ShapeContextDistanceExtractor_t604152943 * __this, float ___imageAppearanceWeight0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void OpenCVForUnity.ShapeContextDistanceExtractor::setImages(OpenCVForUnity.Mat,OpenCVForUnity.Mat)
extern "C"  void ShapeContextDistanceExtractor_setImages_m2964221391 (ShapeContextDistanceExtractor_t604152943 * __this, Mat_t3763101966 * ___image10, Mat_t3763101966 * ___image21, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void OpenCVForUnity.ShapeContextDistanceExtractor::setInnerRadius(System.Single)
extern "C"  void ShapeContextDistanceExtractor_setInnerRadius_m2590839104 (ShapeContextDistanceExtractor_t604152943 * __this, float ___innerRadius0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void OpenCVForUnity.ShapeContextDistanceExtractor::setIterations(System.Int32)
extern "C"  void ShapeContextDistanceExtractor_setIterations_m1321236870 (ShapeContextDistanceExtractor_t604152943 * __this, int32_t ___iterations0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void OpenCVForUnity.ShapeContextDistanceExtractor::setOuterRadius(System.Single)
extern "C"  void ShapeContextDistanceExtractor_setOuterRadius_m719353915 (ShapeContextDistanceExtractor_t604152943 * __this, float ___outerRadius0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void OpenCVForUnity.ShapeContextDistanceExtractor::setRadialBins(System.Int32)
extern "C"  void ShapeContextDistanceExtractor_setRadialBins_m1840385691 (ShapeContextDistanceExtractor_t604152943 * __this, int32_t ___nRadialBins0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void OpenCVForUnity.ShapeContextDistanceExtractor::setRotationInvariant(System.Boolean)
extern "C"  void ShapeContextDistanceExtractor_setRotationInvariant_m3809712732 (ShapeContextDistanceExtractor_t604152943 * __this, bool ___rotationInvariant0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void OpenCVForUnity.ShapeContextDistanceExtractor::setShapeContextWeight(System.Single)
extern "C"  void ShapeContextDistanceExtractor_setShapeContextWeight_m3217327718 (ShapeContextDistanceExtractor_t604152943 * __this, float ___shapeContextWeight0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void OpenCVForUnity.ShapeContextDistanceExtractor::setStdDev(System.Single)
extern "C"  void ShapeContextDistanceExtractor_setStdDev_m3103275994 (ShapeContextDistanceExtractor_t604152943 * __this, float ___sigma0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void OpenCVForUnity.ShapeContextDistanceExtractor::setTransformAlgorithm(OpenCVForUnity.ShapeTransformer)
extern "C"  void ShapeContextDistanceExtractor_setTransformAlgorithm_m174724787 (ShapeContextDistanceExtractor_t604152943 * __this, ShapeTransformer_t339422736 * ___transformer0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.IntPtr OpenCVForUnity.ShapeContextDistanceExtractor::shape_ShapeContextDistanceExtractor_getCostExtractor_10(System.IntPtr)
extern "C"  IntPtr_t ShapeContextDistanceExtractor_shape_ShapeContextDistanceExtractor_getCostExtractor_10_m1663767755 (Il2CppObject * __this /* static, unused */, IntPtr_t ___nativeObj0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.IntPtr OpenCVForUnity.ShapeContextDistanceExtractor::shape_ShapeContextDistanceExtractor_getTransformAlgorithm_10(System.IntPtr)
extern "C"  IntPtr_t ShapeContextDistanceExtractor_shape_ShapeContextDistanceExtractor_getTransformAlgorithm_10_m1383533625 (Il2CppObject * __this /* static, unused */, IntPtr_t ___nativeObj0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean OpenCVForUnity.ShapeContextDistanceExtractor::shape_ShapeContextDistanceExtractor_getRotationInvariant_10(System.IntPtr)
extern "C"  bool ShapeContextDistanceExtractor_shape_ShapeContextDistanceExtractor_getRotationInvariant_10_m582125525 (Il2CppObject * __this /* static, unused */, IntPtr_t ___nativeObj0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Single OpenCVForUnity.ShapeContextDistanceExtractor::shape_ShapeContextDistanceExtractor_getBendingEnergyWeight_10(System.IntPtr)
extern "C"  float ShapeContextDistanceExtractor_shape_ShapeContextDistanceExtractor_getBendingEnergyWeight_10_m2577386644 (Il2CppObject * __this /* static, unused */, IntPtr_t ___nativeObj0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Single OpenCVForUnity.ShapeContextDistanceExtractor::shape_ShapeContextDistanceExtractor_getImageAppearanceWeight_10(System.IntPtr)
extern "C"  float ShapeContextDistanceExtractor_shape_ShapeContextDistanceExtractor_getImageAppearanceWeight_10_m2493833538 (Il2CppObject * __this /* static, unused */, IntPtr_t ___nativeObj0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Single OpenCVForUnity.ShapeContextDistanceExtractor::shape_ShapeContextDistanceExtractor_getInnerRadius_10(System.IntPtr)
extern "C"  float ShapeContextDistanceExtractor_shape_ShapeContextDistanceExtractor_getInnerRadius_10_m274237843 (Il2CppObject * __this /* static, unused */, IntPtr_t ___nativeObj0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Single OpenCVForUnity.ShapeContextDistanceExtractor::shape_ShapeContextDistanceExtractor_getOuterRadius_10(System.IntPtr)
extern "C"  float ShapeContextDistanceExtractor_shape_ShapeContextDistanceExtractor_getOuterRadius_10_m4124409016 (Il2CppObject * __this /* static, unused */, IntPtr_t ___nativeObj0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Single OpenCVForUnity.ShapeContextDistanceExtractor::shape_ShapeContextDistanceExtractor_getShapeContextWeight_10(System.IntPtr)
extern "C"  float ShapeContextDistanceExtractor_shape_ShapeContextDistanceExtractor_getShapeContextWeight_10_m3053033605 (Il2CppObject * __this /* static, unused */, IntPtr_t ___nativeObj0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Single OpenCVForUnity.ShapeContextDistanceExtractor::shape_ShapeContextDistanceExtractor_getStdDev_10(System.IntPtr)
extern "C"  float ShapeContextDistanceExtractor_shape_ShapeContextDistanceExtractor_getStdDev_10_m1620156561 (Il2CppObject * __this /* static, unused */, IntPtr_t ___nativeObj0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 OpenCVForUnity.ShapeContextDistanceExtractor::shape_ShapeContextDistanceExtractor_getAngularBins_10(System.IntPtr)
extern "C"  int32_t ShapeContextDistanceExtractor_shape_ShapeContextDistanceExtractor_getAngularBins_10_m3061816219 (Il2CppObject * __this /* static, unused */, IntPtr_t ___nativeObj0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 OpenCVForUnity.ShapeContextDistanceExtractor::shape_ShapeContextDistanceExtractor_getIterations_10(System.IntPtr)
extern "C"  int32_t ShapeContextDistanceExtractor_shape_ShapeContextDistanceExtractor_getIterations_10_m1575823315 (Il2CppObject * __this /* static, unused */, IntPtr_t ___nativeObj0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 OpenCVForUnity.ShapeContextDistanceExtractor::shape_ShapeContextDistanceExtractor_getRadialBins_10(System.IntPtr)
extern "C"  int32_t ShapeContextDistanceExtractor_shape_ShapeContextDistanceExtractor_getRadialBins_10_m3509856872 (Il2CppObject * __this /* static, unused */, IntPtr_t ___nativeObj0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void OpenCVForUnity.ShapeContextDistanceExtractor::shape_ShapeContextDistanceExtractor_getImages_10(System.IntPtr,System.IntPtr,System.IntPtr)
extern "C"  void ShapeContextDistanceExtractor_shape_ShapeContextDistanceExtractor_getImages_10_m3660783615 (Il2CppObject * __this /* static, unused */, IntPtr_t ___nativeObj0, IntPtr_t ___image1_nativeObj1, IntPtr_t ___image2_nativeObj2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void OpenCVForUnity.ShapeContextDistanceExtractor::shape_ShapeContextDistanceExtractor_setAngularBins_10(System.IntPtr,System.Int32)
extern "C"  void ShapeContextDistanceExtractor_shape_ShapeContextDistanceExtractor_setAngularBins_10_m2192920310 (Il2CppObject * __this /* static, unused */, IntPtr_t ___nativeObj0, int32_t ___nAngularBins1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void OpenCVForUnity.ShapeContextDistanceExtractor::shape_ShapeContextDistanceExtractor_setBendingEnergyWeight_10(System.IntPtr,System.Single)
extern "C"  void ShapeContextDistanceExtractor_shape_ShapeContextDistanceExtractor_setBendingEnergyWeight_10_m738059041 (Il2CppObject * __this /* static, unused */, IntPtr_t ___nativeObj0, float ___bendingEnergyWeight1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void OpenCVForUnity.ShapeContextDistanceExtractor::shape_ShapeContextDistanceExtractor_setCostExtractor_10(System.IntPtr,System.IntPtr)
extern "C"  void ShapeContextDistanceExtractor_shape_ShapeContextDistanceExtractor_setCostExtractor_10_m369275736 (Il2CppObject * __this /* static, unused */, IntPtr_t ___nativeObj0, IntPtr_t ___comparer_nativeObj1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void OpenCVForUnity.ShapeContextDistanceExtractor::shape_ShapeContextDistanceExtractor_setImageAppearanceWeight_10(System.IntPtr,System.Single)
extern "C"  void ShapeContextDistanceExtractor_shape_ShapeContextDistanceExtractor_setImageAppearanceWeight_10_m3328517455 (Il2CppObject * __this /* static, unused */, IntPtr_t ___nativeObj0, float ___imageAppearanceWeight1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void OpenCVForUnity.ShapeContextDistanceExtractor::shape_ShapeContextDistanceExtractor_setImages_10(System.IntPtr,System.IntPtr,System.IntPtr)
extern "C"  void ShapeContextDistanceExtractor_shape_ShapeContextDistanceExtractor_setImages_10_m3391561483 (Il2CppObject * __this /* static, unused */, IntPtr_t ___nativeObj0, IntPtr_t ___image1_nativeObj1, IntPtr_t ___image2_nativeObj2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void OpenCVForUnity.ShapeContextDistanceExtractor::shape_ShapeContextDistanceExtractor_setInnerRadius_10(System.IntPtr,System.Single)
extern "C"  void ShapeContextDistanceExtractor_shape_ShapeContextDistanceExtractor_setInnerRadius_10_m1024040416 (Il2CppObject * __this /* static, unused */, IntPtr_t ___nativeObj0, float ___innerRadius1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void OpenCVForUnity.ShapeContextDistanceExtractor::shape_ShapeContextDistanceExtractor_setIterations_10(System.IntPtr,System.Int32)
extern "C"  void ShapeContextDistanceExtractor_shape_ShapeContextDistanceExtractor_setIterations_10_m401999562 (Il2CppObject * __this /* static, unused */, IntPtr_t ___nativeObj0, int32_t ___iterations1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void OpenCVForUnity.ShapeContextDistanceExtractor::shape_ShapeContextDistanceExtractor_setOuterRadius_10(System.IntPtr,System.Single)
extern "C"  void ShapeContextDistanceExtractor_shape_ShapeContextDistanceExtractor_setOuterRadius_10_m471313477 (Il2CppObject * __this /* static, unused */, IntPtr_t ___nativeObj0, float ___outerRadius1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void OpenCVForUnity.ShapeContextDistanceExtractor::shape_ShapeContextDistanceExtractor_setRadialBins_10(System.IntPtr,System.Int32)
extern "C"  void ShapeContextDistanceExtractor_shape_ShapeContextDistanceExtractor_setRadialBins_10_m2713230933 (Il2CppObject * __this /* static, unused */, IntPtr_t ___nativeObj0, int32_t ___nRadialBins1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void OpenCVForUnity.ShapeContextDistanceExtractor::shape_ShapeContextDistanceExtractor_setRotationInvariant_10(System.IntPtr,System.Boolean)
extern "C"  void ShapeContextDistanceExtractor_shape_ShapeContextDistanceExtractor_setRotationInvariant_10_m703314504 (Il2CppObject * __this /* static, unused */, IntPtr_t ___nativeObj0, bool ___rotationInvariant1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void OpenCVForUnity.ShapeContextDistanceExtractor::shape_ShapeContextDistanceExtractor_setShapeContextWeight_10(System.IntPtr,System.Single)
extern "C"  void ShapeContextDistanceExtractor_shape_ShapeContextDistanceExtractor_setShapeContextWeight_10_m4227252994 (Il2CppObject * __this /* static, unused */, IntPtr_t ___nativeObj0, float ___shapeContextWeight1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void OpenCVForUnity.ShapeContextDistanceExtractor::shape_ShapeContextDistanceExtractor_setStdDev_10(System.IntPtr,System.Single)
extern "C"  void ShapeContextDistanceExtractor_shape_ShapeContextDistanceExtractor_setStdDev_10_m1105693198 (Il2CppObject * __this /* static, unused */, IntPtr_t ___nativeObj0, float ___sigma1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void OpenCVForUnity.ShapeContextDistanceExtractor::shape_ShapeContextDistanceExtractor_setTransformAlgorithm_10(System.IntPtr,System.IntPtr)
extern "C"  void ShapeContextDistanceExtractor_shape_ShapeContextDistanceExtractor_setTransformAlgorithm_10_m1980498216 (Il2CppObject * __this /* static, unused */, IntPtr_t ___nativeObj0, IntPtr_t ___transformer_nativeObj1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void OpenCVForUnity.ShapeContextDistanceExtractor::shape_ShapeContextDistanceExtractor_delete(System.IntPtr)
extern "C"  void ShapeContextDistanceExtractor_shape_ShapeContextDistanceExtractor_delete_m627425128 (Il2CppObject * __this /* static, unused */, IntPtr_t ___nativeObj0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
