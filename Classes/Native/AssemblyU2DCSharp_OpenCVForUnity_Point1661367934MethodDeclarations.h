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

// OpenCVForUnity.Point
struct Point_t1661367934;
// System.Double[]
struct DoubleU5BU5D_t2145413704;
// System.Object
struct Il2CppObject;
// OpenCVForUnity.Rect
struct Rect_t4100128956;
// System.String
struct String_t;

#include "codegen/il2cpp-codegen.h"
#include "AssemblyU2DCSharp_OpenCVForUnity_Point1661367934.h"
#include "mscorlib_System_Object4170816371.h"
#include "AssemblyU2DCSharp_OpenCVForUnity_Rect4100128956.h"

// System.Void OpenCVForUnity.Point::.ctor(System.Double,System.Double)
extern "C"  void Point__ctor_m2715659822 (Point_t1661367934 * __this, double ___x0, double ___y1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void OpenCVForUnity.Point::.ctor()
extern "C"  void Point__ctor_m555412496 (Point_t1661367934 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void OpenCVForUnity.Point::.ctor(System.Double[])
extern "C"  void Point__ctor_m2030005200 (Point_t1661367934 * __this, DoubleU5BU5D_t2145413704* ___vals0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void OpenCVForUnity.Point::set(System.Double[])
extern "C"  void Point_set_m1308882800 (Point_t1661367934 * __this, DoubleU5BU5D_t2145413704* ___vals0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// OpenCVForUnity.Point OpenCVForUnity.Point::clone()
extern "C"  Point_t1661367934 * Point_clone_m3363800313 (Point_t1661367934 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Double OpenCVForUnity.Point::dot(OpenCVForUnity.Point)
extern "C"  double Point_dot_m3861534281 (Point_t1661367934 * __this, Point_t1661367934 * ___p0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 OpenCVForUnity.Point::GetHashCode()
extern "C"  int32_t Point_GetHashCode_m861943793 (Point_t1661367934 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean OpenCVForUnity.Point::Equals(System.Object)
extern "C"  bool Point_Equals_m427111117 (Point_t1661367934 * __this, Il2CppObject * ___obj0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean OpenCVForUnity.Point::inside(OpenCVForUnity.Rect)
extern "C"  bool Point_inside_m2643812709 (Point_t1661367934 * __this, Rect_t4100128956 * ___r0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String OpenCVForUnity.Point::ToString()
extern "C"  String_t* Point_ToString_m3945431875 (Point_t1661367934 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
