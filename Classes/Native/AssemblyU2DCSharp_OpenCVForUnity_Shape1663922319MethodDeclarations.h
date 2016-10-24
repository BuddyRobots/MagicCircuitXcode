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

// OpenCVForUnity.Shape
struct Shape_t1663922319;
// OpenCVForUnity.AffineTransformer
struct AffineTransformer_t540507304;
// OpenCVForUnity.HausdorffDistanceExtractor
struct HausdorffDistanceExtractor_t1392110423;
// OpenCVForUnity.HistogramCostExtractor
struct HistogramCostExtractor_t694650219;
// OpenCVForUnity.ShapeContextDistanceExtractor
struct ShapeContextDistanceExtractor_t604152943;
// OpenCVForUnity.ShapeTransformer
struct ShapeTransformer_t339422736;
// OpenCVForUnity.ThinPlateSplineShapeTransformer
struct ThinPlateSplineShapeTransformer_t773495348;

#include "codegen/il2cpp-codegen.h"
#include "AssemblyU2DCSharp_OpenCVForUnity_HistogramCostExtra694650219.h"
#include "AssemblyU2DCSharp_OpenCVForUnity_ShapeTransformer339422736.h"
#include "mscorlib_System_IntPtr4010401971.h"

// System.Void OpenCVForUnity.Shape::.ctor()
extern "C"  void Shape__ctor_m3708663071 (Shape_t1663922319 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// OpenCVForUnity.AffineTransformer OpenCVForUnity.Shape::createAffineTransformer(System.Boolean)
extern "C"  AffineTransformer_t540507304 * Shape_createAffineTransformer_m1532246634 (Il2CppObject * __this /* static, unused */, bool ___fullAffine0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// OpenCVForUnity.HausdorffDistanceExtractor OpenCVForUnity.Shape::createHausdorffDistanceExtractor(System.Int32,System.Single)
extern "C"  HausdorffDistanceExtractor_t1392110423 * Shape_createHausdorffDistanceExtractor_m3569216389 (Il2CppObject * __this /* static, unused */, int32_t ___distanceFlag0, float ___rankProp1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// OpenCVForUnity.HausdorffDistanceExtractor OpenCVForUnity.Shape::createHausdorffDistanceExtractor()
extern "C"  HausdorffDistanceExtractor_t1392110423 * Shape_createHausdorffDistanceExtractor_m1206682063 (Il2CppObject * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// OpenCVForUnity.HistogramCostExtractor OpenCVForUnity.Shape::createChiHistogramCostExtractor(System.Int32,System.Single)
extern "C"  HistogramCostExtractor_t694650219 * Shape_createChiHistogramCostExtractor_m1773727603 (Il2CppObject * __this /* static, unused */, int32_t ___nDummies0, float ___defaultCost1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// OpenCVForUnity.HistogramCostExtractor OpenCVForUnity.Shape::createChiHistogramCostExtractor()
extern "C"  HistogramCostExtractor_t694650219 * Shape_createChiHistogramCostExtractor_m3543503677 (Il2CppObject * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// OpenCVForUnity.HistogramCostExtractor OpenCVForUnity.Shape::createEMDHistogramCostExtractor(System.Int32,System.Int32,System.Single)
extern "C"  HistogramCostExtractor_t694650219 * Shape_createEMDHistogramCostExtractor_m3686051478 (Il2CppObject * __this /* static, unused */, int32_t ___flag0, int32_t ___nDummies1, float ___defaultCost2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// OpenCVForUnity.HistogramCostExtractor OpenCVForUnity.Shape::createEMDHistogramCostExtractor()
extern "C"  HistogramCostExtractor_t694650219 * Shape_createEMDHistogramCostExtractor_m4176531285 (Il2CppObject * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// OpenCVForUnity.HistogramCostExtractor OpenCVForUnity.Shape::createEMDL1HistogramCostExtractor(System.Int32,System.Single)
extern "C"  HistogramCostExtractor_t694650219 * Shape_createEMDL1HistogramCostExtractor_m2358529904 (Il2CppObject * __this /* static, unused */, int32_t ___nDummies0, float ___defaultCost1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// OpenCVForUnity.HistogramCostExtractor OpenCVForUnity.Shape::createEMDL1HistogramCostExtractor()
extern "C"  HistogramCostExtractor_t694650219 * Shape_createEMDL1HistogramCostExtractor_m1828091258 (Il2CppObject * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// OpenCVForUnity.HistogramCostExtractor OpenCVForUnity.Shape::createNormHistogramCostExtractor(System.Int32,System.Int32,System.Single)
extern "C"  HistogramCostExtractor_t694650219 * Shape_createNormHistogramCostExtractor_m3815506688 (Il2CppObject * __this /* static, unused */, int32_t ___flag0, int32_t ___nDummies1, float ___defaultCost2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// OpenCVForUnity.HistogramCostExtractor OpenCVForUnity.Shape::createNormHistogramCostExtractor()
extern "C"  HistogramCostExtractor_t694650219 * Shape_createNormHistogramCostExtractor_m3749582379 (Il2CppObject * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// OpenCVForUnity.ShapeContextDistanceExtractor OpenCVForUnity.Shape::createShapeContextDistanceExtractor(System.Int32,System.Int32,System.Single,System.Single,System.Int32,OpenCVForUnity.HistogramCostExtractor,OpenCVForUnity.ShapeTransformer)
extern "C"  ShapeContextDistanceExtractor_t604152943 * Shape_createShapeContextDistanceExtractor_m1322892619 (Il2CppObject * __this /* static, unused */, int32_t ___nAngularBins0, int32_t ___nRadialBins1, float ___innerRadius2, float ___outerRadius3, int32_t ___iterations4, HistogramCostExtractor_t694650219 * ___comparer5, ShapeTransformer_t339422736 * ___transformer6, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// OpenCVForUnity.ShapeContextDistanceExtractor OpenCVForUnity.Shape::createShapeContextDistanceExtractor()
extern "C"  ShapeContextDistanceExtractor_t604152943 * Shape_createShapeContextDistanceExtractor_m3666133889 (Il2CppObject * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// OpenCVForUnity.ThinPlateSplineShapeTransformer OpenCVForUnity.Shape::createThinPlateSplineShapeTransformer(System.Double)
extern "C"  ThinPlateSplineShapeTransformer_t773495348 * Shape_createThinPlateSplineShapeTransformer_m999623127 (Il2CppObject * __this /* static, unused */, double ___regularizationParameter0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// OpenCVForUnity.ThinPlateSplineShapeTransformer OpenCVForUnity.Shape::createThinPlateSplineShapeTransformer()
extern "C"  ThinPlateSplineShapeTransformer_t773495348 * Shape_createThinPlateSplineShapeTransformer_m1823531851 (Il2CppObject * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.IntPtr OpenCVForUnity.Shape::shape_Shape_createAffineTransformer_10(System.Boolean)
extern "C"  IntPtr_t Shape_shape_Shape_createAffineTransformer_10_m2902729613 (Il2CppObject * __this /* static, unused */, bool ___fullAffine0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.IntPtr OpenCVForUnity.Shape::shape_Shape_createHausdorffDistanceExtractor_10(System.Int32,System.Single)
extern "C"  IntPtr_t Shape_shape_Shape_createHausdorffDistanceExtractor_10_m534684133 (Il2CppObject * __this /* static, unused */, int32_t ___distanceFlag0, float ___rankProp1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.IntPtr OpenCVForUnity.Shape::shape_Shape_createHausdorffDistanceExtractor_11()
extern "C"  IntPtr_t Shape_shape_Shape_createHausdorffDistanceExtractor_11_m3654579184 (Il2CppObject * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.IntPtr OpenCVForUnity.Shape::shape_Shape_createChiHistogramCostExtractor_10(System.Int32,System.Single)
extern "C"  IntPtr_t Shape_shape_Shape_createChiHistogramCostExtractor_10_m566639503 (Il2CppObject * __this /* static, unused */, int32_t ___nDummies0, float ___defaultCost1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.IntPtr OpenCVForUnity.Shape::shape_Shape_createChiHistogramCostExtractor_11()
extern "C"  IntPtr_t Shape_shape_Shape_createChiHistogramCostExtractor_11_m1800130074 (Il2CppObject * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.IntPtr OpenCVForUnity.Shape::shape_Shape_createEMDHistogramCostExtractor_10(System.Int32,System.Int32,System.Single)
extern "C"  IntPtr_t Shape_shape_Shape_createEMDHistogramCostExtractor_10_m802141482 (Il2CppObject * __this /* static, unused */, int32_t ___flag0, int32_t ___nDummies1, float ___defaultCost2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.IntPtr OpenCVForUnity.Shape::shape_Shape_createEMDHistogramCostExtractor_11()
extern "C"  IntPtr_t Shape_shape_Shape_createEMDHistogramCostExtractor_11_m1124203266 (Il2CppObject * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.IntPtr OpenCVForUnity.Shape::shape_Shape_createEMDL1HistogramCostExtractor_10(System.Int32,System.Single)
extern "C"  IntPtr_t Shape_shape_Shape_createEMDL1HistogramCostExtractor_10_m480264434 (Il2CppObject * __this /* static, unused */, int32_t ___nDummies0, float ___defaultCost1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.IntPtr OpenCVForUnity.Shape::shape_Shape_createEMDL1HistogramCostExtractor_11()
extern "C"  IntPtr_t Shape_shape_Shape_createEMDL1HistogramCostExtractor_11_m1392789821 (Il2CppObject * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.IntPtr OpenCVForUnity.Shape::shape_Shape_createNormHistogramCostExtractor_10(System.Int32,System.Int32,System.Single)
extern "C"  IntPtr_t Shape_shape_Shape_createNormHistogramCostExtractor_10_m4258265836 (Il2CppObject * __this /* static, unused */, int32_t ___flag0, int32_t ___nDummies1, float ___defaultCost2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.IntPtr OpenCVForUnity.Shape::shape_Shape_createNormHistogramCostExtractor_11()
extern "C"  IntPtr_t Shape_shape_Shape_createNormHistogramCostExtractor_11_m1763525504 (Il2CppObject * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.IntPtr OpenCVForUnity.Shape::shape_Shape_createShapeContextDistanceExtractor_10(System.Int32,System.Int32,System.Single,System.Single,System.Int32,System.IntPtr,System.IntPtr)
extern "C"  IntPtr_t Shape_shape_Shape_createShapeContextDistanceExtractor_10_m3580512434 (Il2CppObject * __this /* static, unused */, int32_t ___nAngularBins0, int32_t ___nRadialBins1, float ___innerRadius2, float ___outerRadius3, int32_t ___iterations4, IntPtr_t ___comparer_nativeObj5, IntPtr_t ___transformer_nativeObj6, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.IntPtr OpenCVForUnity.Shape::shape_Shape_createShapeContextDistanceExtractor_11()
extern "C"  IntPtr_t Shape_shape_Shape_createShapeContextDistanceExtractor_11_m2530196208 (Il2CppObject * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.IntPtr OpenCVForUnity.Shape::shape_Shape_createThinPlateSplineShapeTransformer_10(System.Double)
extern "C"  IntPtr_t Shape_shape_Shape_createThinPlateSplineShapeTransformer_10_m4006550008 (Il2CppObject * __this /* static, unused */, double ___regularizationParameter0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.IntPtr OpenCVForUnity.Shape::shape_Shape_createThinPlateSplineShapeTransformer_11()
extern "C"  IntPtr_t Shape_shape_Shape_createThinPlateSplineShapeTransformer_11_m2501522763 (Il2CppObject * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
