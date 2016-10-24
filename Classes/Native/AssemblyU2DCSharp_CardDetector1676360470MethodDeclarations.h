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

// CardDetector
struct CardDetector_t1676360470;
// System.Collections.Generic.List`1<System.Collections.Generic.List`1<OpenCVForUnity.Point>>
struct List_1_t102771742;
// OpenCVForUnity.Mat
struct Mat_t3763101966;
// OpenCVForUnity.Point
struct Point_t1661367934;
// System.Collections.Generic.List`1<OpenCVForUnity.Point>
struct List_1_t3029553486;

#include "codegen/il2cpp-codegen.h"
#include "AssemblyU2DCSharp_OpenCVForUnity_Mat3763101966.h"
#include "AssemblyU2DCSharp_OpenCVForUnity_Point1661367934.h"

// System.Void CardDetector::.ctor()
extern "C"  void CardDetector__ctor_m1201590341 (CardDetector_t1676360470 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.Generic.List`1<System.Collections.Generic.List`1<OpenCVForUnity.Point>> CardDetector::findSquares(OpenCVForUnity.Mat)
extern "C"  List_1_t102771742 * CardDetector_findSquares_m3624380207 (Il2CppObject * __this /* static, unused */, Mat_t3763101966 * ___binaryImg0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.Generic.List`1<System.Collections.Generic.List`1<OpenCVForUnity.Point>> CardDetector::computeOuterSquare(System.Collections.Generic.List`1<System.Collections.Generic.List`1<OpenCVForUnity.Point>>)
extern "C"  List_1_t102771742 * CardDetector_computeOuterSquare_m73073647 (Il2CppObject * __this /* static, unused */, List_1_t102771742 * ___squares0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void CardDetector::removeCard(OpenCVForUnity.Mat&,System.Collections.Generic.List`1<System.Collections.Generic.List`1<OpenCVForUnity.Point>>)
extern "C"  void CardDetector_removeCard_m112790987 (Il2CppObject * __this /* static, unused */, Mat_t3763101966 ** ___img0, List_1_t102771742 * ___squares1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.Generic.List`1<System.Collections.Generic.List`1<OpenCVForUnity.Point>> CardDetector::filterSquares(System.Collections.Generic.List`1<System.Collections.Generic.List`1<OpenCVForUnity.Point>>)
extern "C"  List_1_t102771742 * CardDetector_filterSquares_m2614172708 (Il2CppObject * __this /* static, unused */, List_1_t102771742 * ___squares0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Double CardDetector::findLen(OpenCVForUnity.Point,OpenCVForUnity.Point,System.Boolean)
extern "C"  double CardDetector_findLen_m3818452979 (Il2CppObject * __this /* static, unused */, Point_t1661367934 * ___p10, Point_t1661367934 * ___p21, bool ___sqrt_v2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean CardDetector::isSquareClockwise(System.Collections.Generic.List`1<OpenCVForUnity.Point>)
extern "C"  bool CardDetector_isSquareClockwise_m3789808259 (Il2CppObject * __this /* static, unused */, List_1_t3029553486 * ___square0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Single CardDetector::Angle(OpenCVForUnity.Point,OpenCVForUnity.Point,OpenCVForUnity.Point)
extern "C"  float CardDetector_Angle_m3299180607 (Il2CppObject * __this /* static, unused */, Point_t1661367934 * ___pt10, Point_t1661367934 * ___pt21, Point_t1661367934 * ___pt02, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean CardDetector::isInROI(OpenCVForUnity.Point,System.Collections.Generic.List`1<OpenCVForUnity.Point>)
extern "C"  bool CardDetector_isInROI_m2147089016 (Il2CppObject * __this /* static, unused */, Point_t1661367934 * ___p0, List_1_t3029553486 * ___roi1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Double CardDetector::computeProduct(OpenCVForUnity.Point,OpenCVForUnity.Point,OpenCVForUnity.Point)
extern "C"  double CardDetector_computeProduct_m2692781231 (Il2CppObject * __this /* static, unused */, Point_t1661367934 * ___p0, Point_t1661367934 * ___a1, Point_t1661367934 * ___b2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
