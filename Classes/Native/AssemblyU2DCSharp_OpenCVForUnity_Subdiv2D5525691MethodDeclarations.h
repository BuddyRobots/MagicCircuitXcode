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

// OpenCVForUnity.Subdiv2D
struct Subdiv2D_t5525691;
// OpenCVForUnity.Rect
struct Rect_t4100128956;
// OpenCVForUnity.Point
struct Point_t1661367934;
// System.Int32[]
struct Int32U5BU5D_t3230847821;
// OpenCVForUnity.MatOfFloat4
struct MatOfFloat4_t2776514621;
// OpenCVForUnity.MatOfFloat6
struct MatOfFloat6_t2776514623;
// OpenCVForUnity.MatOfInt
struct MatOfInt_t2359161200;
// System.Collections.Generic.List`1<OpenCVForUnity.MatOfPoint2f>
struct List_1_t1019594069;
// OpenCVForUnity.MatOfPoint2f
struct MatOfPoint2f_t3946375813;
// System.Double[]
struct DoubleU5BU5D_t2145413704;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_IntPtr4010401971.h"
#include "AssemblyU2DCSharp_OpenCVForUnity_Rect4100128956.h"
#include "AssemblyU2DCSharp_OpenCVForUnity_Point1661367934.h"
#include "AssemblyU2DCSharp_OpenCVForUnity_MatOfFloat42776514621.h"
#include "AssemblyU2DCSharp_OpenCVForUnity_MatOfFloat62776514623.h"
#include "AssemblyU2DCSharp_OpenCVForUnity_MatOfInt2359161200.h"
#include "AssemblyU2DCSharp_OpenCVForUnity_MatOfPoint2f3946375813.h"

// System.Void OpenCVForUnity.Subdiv2D::.ctor(System.IntPtr)
extern "C"  void Subdiv2D__ctor_m1781300721 (Subdiv2D_t5525691 * __this, IntPtr_t ___addr0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void OpenCVForUnity.Subdiv2D::.ctor(OpenCVForUnity.Rect)
extern "C"  void Subdiv2D__ctor_m1663839942 (Subdiv2D_t5525691 * __this, Rect_t4100128956 * ___rect0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void OpenCVForUnity.Subdiv2D::.ctor()
extern "C"  void Subdiv2D__ctor_m2301119299 (Subdiv2D_t5525691 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void OpenCVForUnity.Subdiv2D::Dispose(System.Boolean)
extern "C"  void Subdiv2D_Dispose_m922310711 (Subdiv2D_t5525691 * __this, bool ___disposing0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// OpenCVForUnity.Point OpenCVForUnity.Subdiv2D::getVertex(System.Int32,System.Int32[])
extern "C"  Point_t1661367934 * Subdiv2D_getVertex_m1898782551 (Subdiv2D_t5525691 * __this, int32_t ___vertex0, Int32U5BU5D_t3230847821* ___firstEdge1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// OpenCVForUnity.Point OpenCVForUnity.Subdiv2D::getVertex(System.Int32)
extern "C"  Point_t1661367934 * Subdiv2D_getVertex_m1674808094 (Subdiv2D_t5525691 * __this, int32_t ___vertex0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 OpenCVForUnity.Subdiv2D::edgeDst(System.Int32,OpenCVForUnity.Point)
extern "C"  int32_t Subdiv2D_edgeDst_m175236307 (Subdiv2D_t5525691 * __this, int32_t ___edge0, Point_t1661367934 * ___dstpt1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 OpenCVForUnity.Subdiv2D::edgeDst(System.Int32)
extern "C"  int32_t Subdiv2D_edgeDst_m2752502440 (Subdiv2D_t5525691 * __this, int32_t ___edge0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 OpenCVForUnity.Subdiv2D::edgeOrg(System.Int32,OpenCVForUnity.Point)
extern "C"  int32_t Subdiv2D_edgeOrg_m1042345812 (Subdiv2D_t5525691 * __this, int32_t ___edge0, Point_t1661367934 * ___orgpt1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 OpenCVForUnity.Subdiv2D::edgeOrg(System.Int32)
extern "C"  int32_t Subdiv2D_edgeOrg_m2846237063 (Subdiv2D_t5525691 * __this, int32_t ___edge0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 OpenCVForUnity.Subdiv2D::findNearest(OpenCVForUnity.Point,OpenCVForUnity.Point)
extern "C"  int32_t Subdiv2D_findNearest_m3258256370 (Subdiv2D_t5525691 * __this, Point_t1661367934 * ___pt0, Point_t1661367934 * ___nearestPt1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 OpenCVForUnity.Subdiv2D::findNearest(OpenCVForUnity.Point)
extern "C"  int32_t Subdiv2D_findNearest_m557293097 (Subdiv2D_t5525691 * __this, Point_t1661367934 * ___pt0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 OpenCVForUnity.Subdiv2D::getEdge(System.Int32,System.Int32)
extern "C"  int32_t Subdiv2D_getEdge_m29007076 (Subdiv2D_t5525691 * __this, int32_t ___edge0, int32_t ___nextEdgeType1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 OpenCVForUnity.Subdiv2D::insert(OpenCVForUnity.Point)
extern "C"  int32_t Subdiv2D_insert_m2696226977 (Subdiv2D_t5525691 * __this, Point_t1661367934 * ___pt0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 OpenCVForUnity.Subdiv2D::locate(OpenCVForUnity.Point,System.Int32[],System.Int32[])
extern "C"  int32_t Subdiv2D_locate_m686697050 (Subdiv2D_t5525691 * __this, Point_t1661367934 * ___pt0, Int32U5BU5D_t3230847821* ___edge1, Int32U5BU5D_t3230847821* ___vertex2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 OpenCVForUnity.Subdiv2D::nextEdge(System.Int32)
extern "C"  int32_t Subdiv2D_nextEdge_m3220432084 (Subdiv2D_t5525691 * __this, int32_t ___edge0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 OpenCVForUnity.Subdiv2D::rotateEdge(System.Int32,System.Int32)
extern "C"  int32_t Subdiv2D_rotateEdge_m727197083 (Subdiv2D_t5525691 * __this, int32_t ___edge0, int32_t ___rotate1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 OpenCVForUnity.Subdiv2D::symEdge(System.Int32)
extern "C"  int32_t Subdiv2D_symEdge_m3539993604 (Subdiv2D_t5525691 * __this, int32_t ___edge0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void OpenCVForUnity.Subdiv2D::getEdgeList(OpenCVForUnity.MatOfFloat4)
extern "C"  void Subdiv2D_getEdgeList_m2673116424 (Subdiv2D_t5525691 * __this, MatOfFloat4_t2776514621 * ___edgeList0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void OpenCVForUnity.Subdiv2D::getTriangleList(OpenCVForUnity.MatOfFloat6)
extern "C"  void Subdiv2D_getTriangleList_m1299204753 (Subdiv2D_t5525691 * __this, MatOfFloat6_t2776514623 * ___triangleList0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void OpenCVForUnity.Subdiv2D::getVoronoiFacetList(OpenCVForUnity.MatOfInt,System.Collections.Generic.List`1<OpenCVForUnity.MatOfPoint2f>,OpenCVForUnity.MatOfPoint2f)
extern "C"  void Subdiv2D_getVoronoiFacetList_m349591515 (Subdiv2D_t5525691 * __this, MatOfInt_t2359161200 * ___idx0, List_1_t1019594069 * ___facetList1, MatOfPoint2f_t3946375813 * ___facetCenters2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void OpenCVForUnity.Subdiv2D::initDelaunay(OpenCVForUnity.Rect)
extern "C"  void Subdiv2D_initDelaunay_m3257999281 (Subdiv2D_t5525691 * __this, Rect_t4100128956 * ___rect0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void OpenCVForUnity.Subdiv2D::insert(OpenCVForUnity.MatOfPoint2f)
extern "C"  void Subdiv2D_insert_m2223697670 (Subdiv2D_t5525691 * __this, MatOfPoint2f_t3946375813 * ___ptvec0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.IntPtr OpenCVForUnity.Subdiv2D::imgproc_Subdiv2D_Subdiv2D_10(System.Int32,System.Int32,System.Int32,System.Int32)
extern "C"  IntPtr_t Subdiv2D_imgproc_Subdiv2D_Subdiv2D_10_m2517893045 (Il2CppObject * __this /* static, unused */, int32_t ___rect_x0, int32_t ___rect_y1, int32_t ___rect_width2, int32_t ___rect_height3, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.IntPtr OpenCVForUnity.Subdiv2D::imgproc_Subdiv2D_Subdiv2D_11()
extern "C"  IntPtr_t Subdiv2D_imgproc_Subdiv2D_Subdiv2D_11_m1159857522 (Il2CppObject * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void OpenCVForUnity.Subdiv2D::imgproc_Subdiv2D_getVertex_10(System.IntPtr,System.Int32,System.Double[],System.Double[])
extern "C"  void Subdiv2D_imgproc_Subdiv2D_getVertex_10_m1157155954 (Il2CppObject * __this /* static, unused */, IntPtr_t ___nativeObj0, int32_t ___vertex1, DoubleU5BU5D_t2145413704* ___firstEdge_out2, DoubleU5BU5D_t2145413704* ___vals3, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void OpenCVForUnity.Subdiv2D::imgproc_Subdiv2D_getVertex_11(System.IntPtr,System.Int32,System.Double[])
extern "C"  void Subdiv2D_imgproc_Subdiv2D_getVertex_11_m1658331737 (Il2CppObject * __this /* static, unused */, IntPtr_t ___nativeObj0, int32_t ___vertex1, DoubleU5BU5D_t2145413704* ___vals2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 OpenCVForUnity.Subdiv2D::imgproc_Subdiv2D_edgeDst_10(System.IntPtr,System.Int32,System.Double[])
extern "C"  int32_t Subdiv2D_imgproc_Subdiv2D_edgeDst_10_m2692269944 (Il2CppObject * __this /* static, unused */, IntPtr_t ___nativeObj0, int32_t ___edge1, DoubleU5BU5D_t2145413704* ___dstpt_out2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 OpenCVForUnity.Subdiv2D::imgproc_Subdiv2D_edgeDst_11(System.IntPtr,System.Int32)
extern "C"  int32_t Subdiv2D_imgproc_Subdiv2D_edgeDst_11_m2172259167 (Il2CppObject * __this /* static, unused */, IntPtr_t ___nativeObj0, int32_t ___edge1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 OpenCVForUnity.Subdiv2D::imgproc_Subdiv2D_edgeOrg_10(System.IntPtr,System.Int32,System.Double[])
extern "C"  int32_t Subdiv2D_imgproc_Subdiv2D_edgeOrg_10_m334436473 (Il2CppObject * __this /* static, unused */, IntPtr_t ___nativeObj0, int32_t ___edge1, DoubleU5BU5D_t2145413704* ___orgpt_out2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 OpenCVForUnity.Subdiv2D::imgproc_Subdiv2D_edgeOrg_11(System.IntPtr,System.Int32)
extern "C"  int32_t Subdiv2D_imgproc_Subdiv2D_edgeOrg_11_m3112992352 (Il2CppObject * __this /* static, unused */, IntPtr_t ___nativeObj0, int32_t ___edge1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 OpenCVForUnity.Subdiv2D::imgproc_Subdiv2D_findNearest_10(System.IntPtr,System.Double,System.Double,System.Double[])
extern "C"  int32_t Subdiv2D_imgproc_Subdiv2D_findNearest_10_m2510857352 (Il2CppObject * __this /* static, unused */, IntPtr_t ___nativeObj0, double ___pt_x1, double ___pt_y2, DoubleU5BU5D_t2145413704* ___nearestPt_out3, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 OpenCVForUnity.Subdiv2D::imgproc_Subdiv2D_findNearest_11(System.IntPtr,System.Double,System.Double)
extern "C"  int32_t Subdiv2D_imgproc_Subdiv2D_findNearest_11_m3678571853 (Il2CppObject * __this /* static, unused */, IntPtr_t ___nativeObj0, double ___pt_x1, double ___pt_y2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 OpenCVForUnity.Subdiv2D::imgproc_Subdiv2D_getEdge_10(System.IntPtr,System.Int32,System.Int32)
extern "C"  int32_t Subdiv2D_imgproc_Subdiv2D_getEdge_10_m2636301732 (Il2CppObject * __this /* static, unused */, IntPtr_t ___nativeObj0, int32_t ___edge1, int32_t ___nextEdgeType2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 OpenCVForUnity.Subdiv2D::imgproc_Subdiv2D_insert_10(System.IntPtr,System.Double,System.Double)
extern "C"  int32_t Subdiv2D_imgproc_Subdiv2D_insert_10_m1568129802 (Il2CppObject * __this /* static, unused */, IntPtr_t ___nativeObj0, double ___pt_x1, double ___pt_y2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 OpenCVForUnity.Subdiv2D::imgproc_Subdiv2D_locate_10(System.IntPtr,System.Double,System.Double,System.Double[],System.Double[])
extern "C"  int32_t Subdiv2D_imgproc_Subdiv2D_locate_10_m1235772695 (Il2CppObject * __this /* static, unused */, IntPtr_t ___nativeObj0, double ___pt_x1, double ___pt_y2, DoubleU5BU5D_t2145413704* ___edge_out3, DoubleU5BU5D_t2145413704* ___vertex_out4, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 OpenCVForUnity.Subdiv2D::imgproc_Subdiv2D_nextEdge_10(System.IntPtr,System.Int32)
extern "C"  int32_t Subdiv2D_imgproc_Subdiv2D_nextEdge_10_m1038624142 (Il2CppObject * __this /* static, unused */, IntPtr_t ___nativeObj0, int32_t ___edge1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 OpenCVForUnity.Subdiv2D::imgproc_Subdiv2D_rotateEdge_10(System.IntPtr,System.Int32,System.Int32)
extern "C"  int32_t Subdiv2D_imgproc_Subdiv2D_rotateEdge_10_m2824509297 (Il2CppObject * __this /* static, unused */, IntPtr_t ___nativeObj0, int32_t ___edge1, int32_t ___rotate2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 OpenCVForUnity.Subdiv2D::imgproc_Subdiv2D_symEdge_10(System.IntPtr,System.Int32)
extern "C"  int32_t Subdiv2D_imgproc_Subdiv2D_symEdge_10_m3906887938 (Il2CppObject * __this /* static, unused */, IntPtr_t ___nativeObj0, int32_t ___edge1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void OpenCVForUnity.Subdiv2D::imgproc_Subdiv2D_getEdgeList_10(System.IntPtr,System.IntPtr)
extern "C"  void Subdiv2D_imgproc_Subdiv2D_getEdgeList_10_m1663954526 (Il2CppObject * __this /* static, unused */, IntPtr_t ___nativeObj0, IntPtr_t ___edgeList_mat_nativeObj1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void OpenCVForUnity.Subdiv2D::imgproc_Subdiv2D_getTriangleList_10(System.IntPtr,System.IntPtr)
extern "C"  void Subdiv2D_imgproc_Subdiv2D_getTriangleList_10_m1116270889 (Il2CppObject * __this /* static, unused */, IntPtr_t ___nativeObj0, IntPtr_t ___triangleList_mat_nativeObj1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void OpenCVForUnity.Subdiv2D::imgproc_Subdiv2D_getVoronoiFacetList_10(System.IntPtr,System.IntPtr,System.IntPtr,System.IntPtr)
extern "C"  void Subdiv2D_imgproc_Subdiv2D_getVoronoiFacetList_10_m3399853762 (Il2CppObject * __this /* static, unused */, IntPtr_t ___nativeObj0, IntPtr_t ___idx_mat_nativeObj1, IntPtr_t ___facetList_mat_nativeObj2, IntPtr_t ___facetCenters_mat_nativeObj3, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void OpenCVForUnity.Subdiv2D::imgproc_Subdiv2D_initDelaunay_10(System.IntPtr,System.Int32,System.Int32,System.Int32,System.Int32)
extern "C"  void Subdiv2D_imgproc_Subdiv2D_initDelaunay_10_m217270018 (Il2CppObject * __this /* static, unused */, IntPtr_t ___nativeObj0, int32_t ___rect_x1, int32_t ___rect_y2, int32_t ___rect_width3, int32_t ___rect_height4, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void OpenCVForUnity.Subdiv2D::imgproc_Subdiv2D_insert_11(System.IntPtr,System.IntPtr)
extern "C"  void Subdiv2D_imgproc_Subdiv2D_insert_11_m1003138481 (Il2CppObject * __this /* static, unused */, IntPtr_t ___nativeObj0, IntPtr_t ___ptvec_mat_nativeObj1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void OpenCVForUnity.Subdiv2D::imgproc_Subdiv2D_delete(System.IntPtr)
extern "C"  void Subdiv2D_imgproc_Subdiv2D_delete_m2748527890 (Il2CppObject * __this /* static, unused */, IntPtr_t ___nativeObj0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
