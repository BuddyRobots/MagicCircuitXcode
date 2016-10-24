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

// OpenCVForUnity.Mat
struct Mat_t3763101966;
// OpenCVForUnity.Size
struct Size_t4100163289;
// OpenCVForUnity.Scalar
struct Scalar_t3445295492;
// OpenCVForUnity.Range
struct Range_t1662802475;
// OpenCVForUnity.Rect
struct Rect_t4100128956;
// OpenCVForUnity.Point
struct Point_t1661367934;
// System.String
struct String_t;
// System.Double[]
struct DoubleU5BU5D_t2145413704;
// System.Single[]
struct SingleU5BU5D_t2316563989;
// System.Int32[]
struct Int32U5BU5D_t3230847821;
// System.Int16[]
struct Int16U5BU5D_t801762735;
// System.Byte[]
struct ByteU5BU5D_t4260760469;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_IntPtr4010401971.h"
#include "AssemblyU2DCSharp_OpenCVForUnity_Size4100163289.h"
#include "AssemblyU2DCSharp_OpenCVForUnity_Scalar3445295492.h"
#include "AssemblyU2DCSharp_OpenCVForUnity_Mat3763101966.h"
#include "AssemblyU2DCSharp_OpenCVForUnity_Range1662802475.h"
#include "AssemblyU2DCSharp_OpenCVForUnity_Rect4100128956.h"
#include "AssemblyU2DCSharp_OpenCVForUnity_Point1661367934.h"

// System.Void OpenCVForUnity.Mat::.ctor(System.IntPtr)
extern "C"  void Mat__ctor_m3094940372 (Mat_t3763101966 * __this, IntPtr_t ___addr0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void OpenCVForUnity.Mat::.ctor()
extern "C"  void Mat__ctor_m220825984 (Mat_t3763101966 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void OpenCVForUnity.Mat::.ctor(System.Int32,System.Int32,System.Int32)
extern "C"  void Mat__ctor_m322175217 (Mat_t3763101966 * __this, int32_t ___rows0, int32_t ___cols1, int32_t ___type2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void OpenCVForUnity.Mat::.ctor(OpenCVForUnity.Size,System.Int32)
extern "C"  void Mat__ctor_m581286251 (Mat_t3763101966 * __this, Size_t4100163289 * ___size0, int32_t ___type1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void OpenCVForUnity.Mat::.ctor(System.Int32,System.Int32,System.Int32,OpenCVForUnity.Scalar)
extern "C"  void Mat__ctor_m244954700 (Mat_t3763101966 * __this, int32_t ___rows0, int32_t ___cols1, int32_t ___type2, Scalar_t3445295492 * ___s3, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void OpenCVForUnity.Mat::.ctor(OpenCVForUnity.Size,System.Int32,OpenCVForUnity.Scalar)
extern "C"  void Mat__ctor_m2232710982 (Mat_t3763101966 * __this, Size_t4100163289 * ___size0, int32_t ___type1, Scalar_t3445295492 * ___s2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void OpenCVForUnity.Mat::.ctor(OpenCVForUnity.Mat,OpenCVForUnity.Range,OpenCVForUnity.Range)
extern "C"  void Mat__ctor_m2985071141 (Mat_t3763101966 * __this, Mat_t3763101966 * ___m0, Range_t1662802475 * ___rowRange1, Range_t1662802475 * ___colRange2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void OpenCVForUnity.Mat::.ctor(OpenCVForUnity.Mat,OpenCVForUnity.Range)
extern "C"  void Mat__ctor_m1387168233 (Mat_t3763101966 * __this, Mat_t3763101966 * ___m0, Range_t1662802475 * ___rowRange1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void OpenCVForUnity.Mat::.ctor(OpenCVForUnity.Mat,OpenCVForUnity.Rect)
extern "C"  void Mat__ctor_m3231444936 (Mat_t3763101966 * __this, Mat_t3763101966 * ___m0, Rect_t4100128956 * ___roi1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void OpenCVForUnity.Mat::Dispose(System.Boolean)
extern "C"  void Mat_Dispose_m4114119796 (Mat_t3763101966 * __this, bool ___disposing0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// OpenCVForUnity.Mat OpenCVForUnity.Mat::adjustROI(System.Int32,System.Int32,System.Int32,System.Int32)
extern "C"  Mat_t3763101966 * Mat_adjustROI_m4062490701 (Mat_t3763101966 * __this, int32_t ___dtop0, int32_t ___dbottom1, int32_t ___dleft2, int32_t ___dright3, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void OpenCVForUnity.Mat::assignTo(OpenCVForUnity.Mat,System.Int32)
extern "C"  void Mat_assignTo_m3742678436 (Mat_t3763101966 * __this, Mat_t3763101966 * ___m0, int32_t ___type1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void OpenCVForUnity.Mat::assignTo(OpenCVForUnity.Mat)
extern "C"  void Mat_assignTo_m2715293203 (Mat_t3763101966 * __this, Mat_t3763101966 * ___m0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 OpenCVForUnity.Mat::channels()
extern "C"  int32_t Mat_channels_m124060546 (Mat_t3763101966 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 OpenCVForUnity.Mat::checkVector(System.Int32,System.Int32,System.Boolean)
extern "C"  int32_t Mat_checkVector_m3652870898 (Mat_t3763101966 * __this, int32_t ___elemChannels0, int32_t ___depth1, bool ___requireContinuous2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 OpenCVForUnity.Mat::checkVector(System.Int32,System.Int32)
extern "C"  int32_t Mat_checkVector_m3356071211 (Mat_t3763101966 * __this, int32_t ___elemChannels0, int32_t ___depth1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 OpenCVForUnity.Mat::checkVector(System.Int32)
extern "C"  int32_t Mat_checkVector_m3688402732 (Mat_t3763101966 * __this, int32_t ___elemChannels0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// OpenCVForUnity.Mat OpenCVForUnity.Mat::clone()
extern "C"  Mat_t3763101966 * Mat_clone_m2705136441 (Mat_t3763101966 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// OpenCVForUnity.Mat OpenCVForUnity.Mat::col(System.Int32)
extern "C"  Mat_t3763101966 * Mat_col_m917969069 (Mat_t3763101966 * __this, int32_t ___x0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// OpenCVForUnity.Mat OpenCVForUnity.Mat::colRange(System.Int32,System.Int32)
extern "C"  Mat_t3763101966 * Mat_colRange_m2558518563 (Mat_t3763101966 * __this, int32_t ___startcol0, int32_t ___endcol1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// OpenCVForUnity.Mat OpenCVForUnity.Mat::colRange(OpenCVForUnity.Range)
extern "C"  Mat_t3763101966 * Mat_colRange_m3948640971 (Mat_t3763101966 * __this, Range_t1662802475 * ___r0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 OpenCVForUnity.Mat::dims()
extern "C"  int32_t Mat_dims_m3032945245 (Mat_t3763101966 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 OpenCVForUnity.Mat::cols()
extern "C"  int32_t Mat_cols_m3009827429 (Mat_t3763101966 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void OpenCVForUnity.Mat::convertTo(OpenCVForUnity.Mat,System.Int32,System.Double,System.Double)
extern "C"  void Mat_convertTo_m1809526782 (Mat_t3763101966 * __this, Mat_t3763101966 * ___m0, int32_t ___rtype1, double ___alpha2, double ___beta3, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void OpenCVForUnity.Mat::convertTo(OpenCVForUnity.Mat,System.Int32,System.Double)
extern "C"  void Mat_convertTo_m125703938 (Mat_t3763101966 * __this, Mat_t3763101966 * ___m0, int32_t ___rtype1, double ___alpha2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void OpenCVForUnity.Mat::convertTo(OpenCVForUnity.Mat,System.Int32)
extern "C"  void Mat_convertTo_m1117246726 (Mat_t3763101966 * __this, Mat_t3763101966 * ___m0, int32_t ___rtype1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void OpenCVForUnity.Mat::copyTo(OpenCVForUnity.Mat)
extern "C"  void Mat_copyTo_m2692626649 (Mat_t3763101966 * __this, Mat_t3763101966 * ___m0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void OpenCVForUnity.Mat::copyTo(OpenCVForUnity.Mat,OpenCVForUnity.Mat)
extern "C"  void Mat_copyTo_m118767538 (Mat_t3763101966 * __this, Mat_t3763101966 * ___m0, Mat_t3763101966 * ___mask1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void OpenCVForUnity.Mat::create(System.Int32,System.Int32,System.Int32)
extern "C"  void Mat_create_m2387618897 (Mat_t3763101966 * __this, int32_t ___rows0, int32_t ___cols1, int32_t ___type2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void OpenCVForUnity.Mat::create(OpenCVForUnity.Size,System.Int32)
extern "C"  void Mat_create_m2208165067 (Mat_t3763101966 * __this, Size_t4100163289 * ___size0, int32_t ___type1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// OpenCVForUnity.Mat OpenCVForUnity.Mat::cross(OpenCVForUnity.Mat)
extern "C"  Mat_t3763101966 * Mat_cross_m1716461697 (Mat_t3763101966 * __this, Mat_t3763101966 * ___m0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int64 OpenCVForUnity.Mat::dataAddr()
extern "C"  int64_t Mat_dataAddr_m820027246 (Mat_t3763101966 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 OpenCVForUnity.Mat::depth()
extern "C"  int32_t Mat_depth_m3715334643 (Mat_t3763101966 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// OpenCVForUnity.Mat OpenCVForUnity.Mat::diag(System.Int32)
extern "C"  Mat_t3763101966 * Mat_diag_m2566932994 (Mat_t3763101966 * __this, int32_t ___d0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// OpenCVForUnity.Mat OpenCVForUnity.Mat::diag()
extern "C"  Mat_t3763101966 * Mat_diag_m3853473329 (Mat_t3763101966 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// OpenCVForUnity.Mat OpenCVForUnity.Mat::diag(OpenCVForUnity.Mat)
extern "C"  Mat_t3763101966 * Mat_diag_m3497140758 (Il2CppObject * __this /* static, unused */, Mat_t3763101966 * ___d0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Double OpenCVForUnity.Mat::dot(OpenCVForUnity.Mat)
extern "C"  double Mat_dot_m4082951465 (Mat_t3763101966 * __this, Mat_t3763101966 * ___m0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int64 OpenCVForUnity.Mat::elemSize()
extern "C"  int64_t Mat_elemSize_m129727395 (Mat_t3763101966 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int64 OpenCVForUnity.Mat::elemSize1()
extern "C"  int64_t Mat_elemSize1_m4021557904 (Mat_t3763101966 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean OpenCVForUnity.Mat::empty()
extern "C"  bool Mat_empty_m3506257303 (Mat_t3763101966 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// OpenCVForUnity.Mat OpenCVForUnity.Mat::eye(System.Int32,System.Int32,System.Int32)
extern "C"  Mat_t3763101966 * Mat_eye_m630784894 (Il2CppObject * __this /* static, unused */, int32_t ___rows0, int32_t ___cols1, int32_t ___type2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// OpenCVForUnity.Mat OpenCVForUnity.Mat::eye(OpenCVForUnity.Size,System.Int32)
extern "C"  Mat_t3763101966 * Mat_eye_m2607737272 (Il2CppObject * __this /* static, unused */, Size_t4100163289 * ___size0, int32_t ___type1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// OpenCVForUnity.Mat OpenCVForUnity.Mat::inv(System.Int32)
extern "C"  Mat_t3763101966 * Mat_inv_m3149043038 (Mat_t3763101966 * __this, int32_t ___method0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// OpenCVForUnity.Mat OpenCVForUnity.Mat::inv()
extern "C"  Mat_t3763101966 * Mat_inv_m2345847693 (Mat_t3763101966 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean OpenCVForUnity.Mat::isContinuous()
extern "C"  bool Mat_isContinuous_m1478046705 (Mat_t3763101966 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean OpenCVForUnity.Mat::isSubmatrix()
extern "C"  bool Mat_isSubmatrix_m2047988481 (Mat_t3763101966 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void OpenCVForUnity.Mat::locateROI(OpenCVForUnity.Size,OpenCVForUnity.Point)
extern "C"  void Mat_locateROI_m3401217127 (Mat_t3763101966 * __this, Size_t4100163289 * ___wholeSize0, Point_t1661367934 * ___ofs1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// OpenCVForUnity.Mat OpenCVForUnity.Mat::mul(OpenCVForUnity.Mat,System.Double)
extern "C"  Mat_t3763101966 * Mat_mul_m2432542849 (Mat_t3763101966 * __this, Mat_t3763101966 * ___m0, double ___scale1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// OpenCVForUnity.Mat OpenCVForUnity.Mat::mul(OpenCVForUnity.Mat)
extern "C"  Mat_t3763101966 * Mat_mul_m1949458629 (Mat_t3763101966 * __this, Mat_t3763101966 * ___m0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// OpenCVForUnity.Mat OpenCVForUnity.Mat::ones(System.Int32,System.Int32,System.Int32)
extern "C"  Mat_t3763101966 * Mat_ones_m2922531396 (Il2CppObject * __this /* static, unused */, int32_t ___rows0, int32_t ___cols1, int32_t ___type2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// OpenCVForUnity.Mat OpenCVForUnity.Mat::ones(OpenCVForUnity.Size,System.Int32)
extern "C"  Mat_t3763101966 * Mat_ones_m3340647678 (Il2CppObject * __this /* static, unused */, Size_t4100163289 * ___size0, int32_t ___type1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void OpenCVForUnity.Mat::push_back(OpenCVForUnity.Mat)
extern "C"  void Mat_push_back_m2015966159 (Mat_t3763101966 * __this, Mat_t3763101966 * ___m0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void OpenCVForUnity.Mat::release()
extern "C"  void Mat_release_m3788381637 (Mat_t3763101966 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// OpenCVForUnity.Mat OpenCVForUnity.Mat::reshape(System.Int32,System.Int32)
extern "C"  Mat_t3763101966 * Mat_reshape_m736354876 (Mat_t3763101966 * __this, int32_t ___cn0, int32_t ___rows1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// OpenCVForUnity.Mat OpenCVForUnity.Mat::reshape(System.Int32)
extern "C"  Mat_t3763101966 * Mat_reshape_m760306299 (Mat_t3763101966 * __this, int32_t ___cn0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// OpenCVForUnity.Mat OpenCVForUnity.Mat::row(System.Int32)
extern "C"  Mat_t3763101966 * Mat_row_m3440946055 (Mat_t3763101966 * __this, int32_t ___y0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// OpenCVForUnity.Mat OpenCVForUnity.Mat::rowRange(System.Int32,System.Int32)
extern "C"  Mat_t3763101966 * Mat_rowRange_m125318525 (Mat_t3763101966 * __this, int32_t ___startrow0, int32_t ___endrow1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// OpenCVForUnity.Mat OpenCVForUnity.Mat::rowRange(OpenCVForUnity.Range)
extern "C"  Mat_t3763101966 * Mat_rowRange_m1316280881 (Mat_t3763101966 * __this, Range_t1662802475 * ___r0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 OpenCVForUnity.Mat::rows()
extern "C"  int32_t Mat_rows_m3439592395 (Mat_t3763101966 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// OpenCVForUnity.Mat OpenCVForUnity.Mat::setTo(OpenCVForUnity.Scalar)
extern "C"  Mat_t3763101966 * Mat_setTo_m1296856616 (Mat_t3763101966 * __this, Scalar_t3445295492 * ___s0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// OpenCVForUnity.Mat OpenCVForUnity.Mat::setTo(OpenCVForUnity.Scalar,OpenCVForUnity.Mat)
extern "C"  Mat_t3763101966 * Mat_setTo_m1720453635 (Mat_t3763101966 * __this, Scalar_t3445295492 * ___value0, Mat_t3763101966 * ___mask1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// OpenCVForUnity.Mat OpenCVForUnity.Mat::setTo(OpenCVForUnity.Mat,OpenCVForUnity.Mat)
extern "C"  Mat_t3763101966 * Mat_setTo_m2776215085 (Mat_t3763101966 * __this, Mat_t3763101966 * ___value0, Mat_t3763101966 * ___mask1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// OpenCVForUnity.Mat OpenCVForUnity.Mat::setTo(OpenCVForUnity.Mat)
extern "C"  Mat_t3763101966 * Mat_setTo_m3550625342 (Mat_t3763101966 * __this, Mat_t3763101966 * ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// OpenCVForUnity.Size OpenCVForUnity.Mat::size()
extern "C"  Size_t4100163289 * Mat_size_m3025372978 (Mat_t3763101966 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int64 OpenCVForUnity.Mat::step1(System.Int32)
extern "C"  int64_t Mat_step1_m1097268421 (Mat_t3763101966 * __this, int32_t ___i0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int64 OpenCVForUnity.Mat::step1()
extern "C"  int64_t Mat_step1_m1687278964 (Mat_t3763101966 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// OpenCVForUnity.Mat OpenCVForUnity.Mat::submat(System.Int32,System.Int32,System.Int32,System.Int32)
extern "C"  Mat_t3763101966 * Mat_submat_m4192609248 (Mat_t3763101966 * __this, int32_t ___rowStart0, int32_t ___rowEnd1, int32_t ___colStart2, int32_t ___colEnd3, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// OpenCVForUnity.Mat OpenCVForUnity.Mat::submat(OpenCVForUnity.Range,OpenCVForUnity.Range)
extern "C"  Mat_t3763101966 * Mat_submat_m4090923488 (Mat_t3763101966 * __this, Range_t1662802475 * ___rowRange0, Range_t1662802475 * ___colRange1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// OpenCVForUnity.Mat OpenCVForUnity.Mat::submat(OpenCVForUnity.Rect)
extern "C"  Mat_t3763101966 * Mat_submat_m1532650947 (Mat_t3763101966 * __this, Rect_t4100128956 * ___roi0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// OpenCVForUnity.Mat OpenCVForUnity.Mat::t()
extern "C"  Mat_t3763101966 * Mat_t_m2326469136 (Mat_t3763101966 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int64 OpenCVForUnity.Mat::total()
extern "C"  int64_t Mat_total_m2445099539 (Mat_t3763101966 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 OpenCVForUnity.Mat::type()
extern "C"  int32_t Mat_type_m3505863916 (Mat_t3763101966 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// OpenCVForUnity.Mat OpenCVForUnity.Mat::zeros(System.Int32,System.Int32,System.Int32)
extern "C"  Mat_t3763101966 * Mat_zeros_m3333157720 (Il2CppObject * __this /* static, unused */, int32_t ___rows0, int32_t ___cols1, int32_t ___type2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// OpenCVForUnity.Mat OpenCVForUnity.Mat::zeros(OpenCVForUnity.Size,System.Int32)
extern "C"  Mat_t3763101966 * Mat_zeros_m2181121298 (Il2CppObject * __this /* static, unused */, Size_t4100163289 * ___size0, int32_t ___type1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String OpenCVForUnity.Mat::ToString()
extern "C"  String_t* Mat_ToString_m2674449555 (Mat_t3763101966 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String OpenCVForUnity.Mat::dump()
extern "C"  String_t* Mat_dump_m3663403259 (Mat_t3763101966 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 OpenCVForUnity.Mat::put(System.Int32,System.Int32,System.Double[])
extern "C"  int32_t Mat_put_m3805779873 (Mat_t3763101966 * __this, int32_t ___row0, int32_t ___col1, DoubleU5BU5D_t2145413704* ___data2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 OpenCVForUnity.Mat::put(System.Int32,System.Int32,System.Single[])
extern "C"  int32_t Mat_put_m3117393866 (Mat_t3763101966 * __this, int32_t ___row0, int32_t ___col1, SingleU5BU5D_t2316563989* ___data2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 OpenCVForUnity.Mat::put(System.Int32,System.Int32,System.Int32[])
extern "C"  int32_t Mat_put_m4273312334 (Mat_t3763101966 * __this, int32_t ___row0, int32_t ___col1, Int32U5BU5D_t3230847821* ___data2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 OpenCVForUnity.Mat::put(System.Int32,System.Int32,System.Int16[])
extern "C"  int32_t Mat_put_m4271584456 (Mat_t3763101966 * __this, int32_t ___row0, int32_t ___col1, Int16U5BU5D_t801762735* ___data2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 OpenCVForUnity.Mat::put(System.Int32,System.Int32,System.Byte[])
extern "C"  int32_t Mat_put_m2138970570 (Mat_t3763101966 * __this, int32_t ___row0, int32_t ___col1, ByteU5BU5D_t4260760469* ___data2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 OpenCVForUnity.Mat::get(System.Int32,System.Int32,System.Byte[])
extern "C"  int32_t Mat_get_m1360492899 (Mat_t3763101966 * __this, int32_t ___row0, int32_t ___col1, ByteU5BU5D_t4260760469* ___data2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 OpenCVForUnity.Mat::get(System.Int32,System.Int32,System.Int16[])
extern "C"  int32_t Mat_get_m1613613135 (Mat_t3763101966 * __this, int32_t ___row0, int32_t ___col1, Int16U5BU5D_t801762735* ___data2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 OpenCVForUnity.Mat::get(System.Int32,System.Int32,System.Int32[])
extern "C"  int32_t Mat_get_m1615341013 (Mat_t3763101966 * __this, int32_t ___row0, int32_t ___col1, Int32U5BU5D_t3230847821* ___data2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 OpenCVForUnity.Mat::get(System.Int32,System.Int32,System.Single[])
extern "C"  int32_t Mat_get_m2324661539 (Mat_t3763101966 * __this, int32_t ___row0, int32_t ___col1, SingleU5BU5D_t2316563989* ___data2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 OpenCVForUnity.Mat::get(System.Int32,System.Int32,System.Double[])
extern "C"  int32_t Mat_get_m3013047546 (Mat_t3763101966 * __this, int32_t ___row0, int32_t ___col1, DoubleU5BU5D_t2145413704* ___data2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Double[] OpenCVForUnity.Mat::get(System.Int32,System.Int32)
extern "C"  DoubleU5BU5D_t2145413704* Mat_get_m2889067539 (Mat_t3763101966 * __this, int32_t ___row0, int32_t ___col1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 OpenCVForUnity.Mat::height()
extern "C"  int32_t Mat_height_m1675194201 (Mat_t3763101966 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 OpenCVForUnity.Mat::width()
extern "C"  int32_t Mat_width_m3501469750 (Mat_t3763101966 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.IntPtr OpenCVForUnity.Mat::getNativeObjAddr()
extern "C"  IntPtr_t Mat_getNativeObjAddr_m2180980180 (Mat_t3763101966 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.IntPtr OpenCVForUnity.Mat::core_Mat_n_1Mat__()
extern "C"  IntPtr_t Mat_core_Mat_n_1Mat___m3889638312 (Il2CppObject * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.IntPtr OpenCVForUnity.Mat::core_Mat_n_1Mat__III(System.Int32,System.Int32,System.Int32)
extern "C"  IntPtr_t Mat_core_Mat_n_1Mat__III_m4193587988 (Il2CppObject * __this /* static, unused */, int32_t ___rows0, int32_t ___cols1, int32_t ___type2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.IntPtr OpenCVForUnity.Mat::core_Mat_n_1Mat__DDI(System.Double,System.Double,System.Int32)
extern "C"  IntPtr_t Mat_core_Mat_n_1Mat__DDI_m3201175772 (Il2CppObject * __this /* static, unused */, double ___size_width0, double ___size_height1, int32_t ___type2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.IntPtr OpenCVForUnity.Mat::core_Mat_n_1Mat__IIIDDDD(System.Int32,System.Int32,System.Int32,System.Double,System.Double,System.Double,System.Double)
extern "C"  IntPtr_t Mat_core_Mat_n_1Mat__IIIDDDD_m1219826436 (Il2CppObject * __this /* static, unused */, int32_t ___rows0, int32_t ___cols1, int32_t ___type2, double ___s_val03, double ___s_val14, double ___s_val25, double ___s_val36, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.IntPtr OpenCVForUnity.Mat::core_Mat_n_1Mat__DDIDDDD(System.Double,System.Double,System.Int32,System.Double,System.Double,System.Double,System.Double)
extern "C"  IntPtr_t Mat_core_Mat_n_1Mat__DDIDDDD_m957008076 (Il2CppObject * __this /* static, unused */, double ___size_width0, double ___size_height1, int32_t ___type2, double ___s_val03, double ___s_val14, double ___s_val25, double ___s_val36, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.IntPtr OpenCVForUnity.Mat::core_Mat_n_1Mat__JIIII(System.IntPtr,System.Int32,System.Int32,System.Int32,System.Int32)
extern "C"  IntPtr_t Mat_core_Mat_n_1Mat__JIIII_m832480208 (Il2CppObject * __this /* static, unused */, IntPtr_t ___m_nativeObj0, int32_t ___rowRange_start1, int32_t ___rowRange_end2, int32_t ___colRange_start3, int32_t ___colRange_end4, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.IntPtr OpenCVForUnity.Mat::core_Mat_n_1Mat__JII(System.IntPtr,System.Int32,System.Int32)
extern "C"  IntPtr_t Mat_core_Mat_n_1Mat__JII_m3716274896 (Il2CppObject * __this /* static, unused */, IntPtr_t ___m_nativeObj0, int32_t ___rowRange_start1, int32_t ___rowRange_end2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.IntPtr OpenCVForUnity.Mat::core_Mat_n_1adjustROI(System.IntPtr,System.Int32,System.Int32,System.Int32,System.Int32)
extern "C"  IntPtr_t Mat_core_Mat_n_1adjustROI_m2214695471 (Il2CppObject * __this /* static, unused */, IntPtr_t ___nativeObj0, int32_t ___dtop1, int32_t ___dbottom2, int32_t ___dleft3, int32_t ___dright4, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void OpenCVForUnity.Mat::core_Mat_n_1assignTo__JJI(System.IntPtr,System.IntPtr,System.Int32)
extern "C"  void Mat_core_Mat_n_1assignTo__JJI_m1371903665 (Il2CppObject * __this /* static, unused */, IntPtr_t ___nativeObj0, IntPtr_t ___m_nativeObj1, int32_t ___type2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void OpenCVForUnity.Mat::core_Mat_n_1assignTo__JJ(System.IntPtr,System.IntPtr)
extern "C"  void Mat_core_Mat_n_1assignTo__JJ_m2378695987 (Il2CppObject * __this /* static, unused */, IntPtr_t ___nativeObj0, IntPtr_t ___m_nativeObj1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 OpenCVForUnity.Mat::core_Mat_n_1channels(System.IntPtr)
extern "C"  int32_t Mat_core_Mat_n_1channels_m953174001 (Il2CppObject * __this /* static, unused */, IntPtr_t ___nativeObj0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 OpenCVForUnity.Mat::core_Mat_n_1checkVector__JIIZ(System.IntPtr,System.Int32,System.Int32,System.Boolean)
extern "C"  int32_t Mat_core_Mat_n_1checkVector__JIIZ_m3160400275 (Il2CppObject * __this /* static, unused */, IntPtr_t ___nativeObj0, int32_t ___elemChannels1, int32_t ___depth2, bool ___requireContinuous3, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 OpenCVForUnity.Mat::core_Mat_n_1checkVector__JII(System.IntPtr,System.Int32,System.Int32)
extern "C"  int32_t Mat_core_Mat_n_1checkVector__JII_m1708081986 (Il2CppObject * __this /* static, unused */, IntPtr_t ___nativeObj0, int32_t ___elemChannels1, int32_t ___depth2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 OpenCVForUnity.Mat::core_Mat_n_1checkVector__JI(System.IntPtr,System.Int32)
extern "C"  int32_t Mat_core_Mat_n_1checkVector__JI_m41068956 (Il2CppObject * __this /* static, unused */, IntPtr_t ___nativeObj0, int32_t ___elemChannels1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.IntPtr OpenCVForUnity.Mat::core_Mat_n_1clone(System.IntPtr)
extern "C"  IntPtr_t Mat_core_Mat_n_1clone_m3991573455 (Il2CppObject * __this /* static, unused */, IntPtr_t ___nativeObj0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.IntPtr OpenCVForUnity.Mat::core_Mat_n_1col(System.IntPtr,System.Int32)
extern "C"  IntPtr_t Mat_core_Mat_n_1col_m1663391947 (Il2CppObject * __this /* static, unused */, IntPtr_t ___nativeObj0, int32_t ___x1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.IntPtr OpenCVForUnity.Mat::core_Mat_n_1colRange(System.IntPtr,System.Int32,System.Int32)
extern "C"  IntPtr_t Mat_core_Mat_n_1colRange_m818130525 (Il2CppObject * __this /* static, unused */, IntPtr_t ___nativeObj0, int32_t ___startcol1, int32_t ___endcol2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 OpenCVForUnity.Mat::core_Mat_n_1dims(System.IntPtr)
extern "C"  int32_t Mat_core_Mat_n_1dims_m3070442614 (Il2CppObject * __this /* static, unused */, IntPtr_t ___nativeObj0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 OpenCVForUnity.Mat::core_Mat_n_1cols(System.IntPtr)
extern "C"  int32_t Mat_core_Mat_n_1cols_m874137966 (Il2CppObject * __this /* static, unused */, IntPtr_t ___nativeObj0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void OpenCVForUnity.Mat::core_Mat_n_1convertTo__JJIDD(System.IntPtr,System.IntPtr,System.Int32,System.Double,System.Double)
extern "C"  void Mat_core_Mat_n_1convertTo__JJIDD_m3506283501 (Il2CppObject * __this /* static, unused */, IntPtr_t ___nativeObj0, IntPtr_t ___m_nativeObj1, int32_t ___rtype2, double ___alpha3, double ___beta4, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void OpenCVForUnity.Mat::core_Mat_n_1convertTo__JJID(System.IntPtr,System.IntPtr,System.Int32,System.Double)
extern "C"  void Mat_core_Mat_n_1convertTo__JJID_m1645366807 (Il2CppObject * __this /* static, unused */, IntPtr_t ___nativeObj0, IntPtr_t ___m_nativeObj1, int32_t ___rtype2, double ___alpha3, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void OpenCVForUnity.Mat::core_Mat_n_1convertTo__JJI(System.IntPtr,System.IntPtr,System.Int32)
extern "C"  void Mat_core_Mat_n_1convertTo__JJI_m3573526709 (Il2CppObject * __this /* static, unused */, IntPtr_t ___nativeObj0, IntPtr_t ___m_nativeObj1, int32_t ___rtype2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void OpenCVForUnity.Mat::core_Mat_n_1copyTo__JJ(System.IntPtr,System.IntPtr)
extern "C"  void Mat_core_Mat_n_1copyTo__JJ_m1225773037 (Il2CppObject * __this /* static, unused */, IntPtr_t ___nativeObj0, IntPtr_t ___m_nativeObj1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void OpenCVForUnity.Mat::core_Mat_n_1copyTo__JJJ(System.IntPtr,System.IntPtr,System.IntPtr)
extern "C"  void Mat_core_Mat_n_1copyTo__JJJ_m349045337 (Il2CppObject * __this /* static, unused */, IntPtr_t ___nativeObj0, IntPtr_t ___m_nativeObj1, IntPtr_t ___mask_nativeObj2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void OpenCVForUnity.Mat::core_Mat_n_1create__JIII(System.IntPtr,System.Int32,System.Int32,System.Int32)
extern "C"  void Mat_core_Mat_n_1create__JIII_m1483539267 (Il2CppObject * __this /* static, unused */, IntPtr_t ___nativeObj0, int32_t ___rows1, int32_t ___cols2, int32_t ___type3, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void OpenCVForUnity.Mat::core_Mat_n_1create__JDDI(System.IntPtr,System.Double,System.Double,System.Int32)
extern "C"  void Mat_core_Mat_n_1create__JDDI_m513677643 (Il2CppObject * __this /* static, unused */, IntPtr_t ___nativeObj0, double ___size_width1, double ___size_height2, int32_t ___type3, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.IntPtr OpenCVForUnity.Mat::core_Mat_n_1cross(System.IntPtr,System.IntPtr)
extern "C"  IntPtr_t Mat_core_Mat_n_1cross_m1295163162 (Il2CppObject * __this /* static, unused */, IntPtr_t ___nativeObj0, IntPtr_t ___m_nativeObj1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int64 OpenCVForUnity.Mat::core_Mat_n_1dataAddr(System.IntPtr)
extern "C"  int64_t Mat_core_Mat_n_1dataAddr_m2701497605 (Il2CppObject * __this /* static, unused */, IntPtr_t ___nativeObj0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 OpenCVForUnity.Mat::core_Mat_n_1depth(System.IntPtr)
extern "C"  int32_t Mat_core_Mat_n_1depth_m3620038082 (Il2CppObject * __this /* static, unused */, IntPtr_t ___nativeObj0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.IntPtr OpenCVForUnity.Mat::core_Mat_n_1diag__JI(System.IntPtr,System.Int32)
extern "C"  IntPtr_t Mat_core_Mat_n_1diag__JI_m4171397799 (Il2CppObject * __this /* static, unused */, IntPtr_t ___nativeObj0, int32_t ___d1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.IntPtr OpenCVForUnity.Mat::core_Mat_n_1diag__J(System.IntPtr)
extern "C"  IntPtr_t Mat_core_Mat_n_1diag__J_m682883469 (Il2CppObject * __this /* static, unused */, IntPtr_t ___d_nativeObj0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Double OpenCVForUnity.Mat::core_Mat_n_1dot(System.IntPtr,System.IntPtr)
extern "C"  double Mat_core_Mat_n_1dot_m113701855 (Il2CppObject * __this /* static, unused */, IntPtr_t ___nativeObj0, IntPtr_t ___m_nativeObj1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int64 OpenCVForUnity.Mat::core_Mat_n_1elemSize(System.IntPtr)
extern "C"  int64_t Mat_core_Mat_n_1elemSize_m2560292592 (Il2CppObject * __this /* static, unused */, IntPtr_t ___nativeObj0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int64 OpenCVForUnity.Mat::core_Mat_n_1elemSize1(System.IntPtr)
extern "C"  int64_t Mat_core_Mat_n_1elemSize1_m1259885125 (Il2CppObject * __this /* static, unused */, IntPtr_t ___nativeObj0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean OpenCVForUnity.Mat::core_Mat_n_1empty(System.IntPtr)
extern "C"  bool Mat_core_Mat_n_1empty_m3516525470 (Il2CppObject * __this /* static, unused */, IntPtr_t ___nativeObj0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.IntPtr OpenCVForUnity.Mat::core_Mat_n_1eye__III(System.Int32,System.Int32,System.Int32)
extern "C"  IntPtr_t Mat_core_Mat_n_1eye__III_m2321975747 (Il2CppObject * __this /* static, unused */, int32_t ___rows0, int32_t ___cols1, int32_t ___type2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.IntPtr OpenCVForUnity.Mat::core_Mat_n_1eye__DDI(System.Double,System.Double,System.Int32)
extern "C"  IntPtr_t Mat_core_Mat_n_1eye__DDI_m4173109195 (Il2CppObject * __this /* static, unused */, double ___size_width0, double ___size_height1, int32_t ___type2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.IntPtr OpenCVForUnity.Mat::core_Mat_n_1inv__JI(System.IntPtr,System.Int32)
extern "C"  IntPtr_t Mat_core_Mat_n_1inv__JI_m4012169307 (Il2CppObject * __this /* static, unused */, IntPtr_t ___nativeObj0, int32_t ___method1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.IntPtr OpenCVForUnity.Mat::core_Mat_n_1inv__J(System.IntPtr)
extern "C"  IntPtr_t Mat_core_Mat_n_1inv__J_m4176847425 (Il2CppObject * __this /* static, unused */, IntPtr_t ___nativeObj0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean OpenCVForUnity.Mat::core_Mat_n_1isContinuous(System.IntPtr)
extern "C"  bool Mat_core_Mat_n_1isContinuous_m4225000802 (Il2CppObject * __this /* static, unused */, IntPtr_t ___nativeObj0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean OpenCVForUnity.Mat::core_Mat_n_1isSubmatrix(System.IntPtr)
extern "C"  bool Mat_core_Mat_n_1isSubmatrix_m3739454900 (Il2CppObject * __this /* static, unused */, IntPtr_t ___nativeObj0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void OpenCVForUnity.Mat::core_Mat_locateROI_10(System.IntPtr,System.Double[],System.Double[])
extern "C"  void Mat_core_Mat_locateROI_10_m1015691911 (Il2CppObject * __this /* static, unused */, IntPtr_t ___nativeObj0, DoubleU5BU5D_t2145413704* ___wholeSize_out1, DoubleU5BU5D_t2145413704* ___ofs_out2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.IntPtr OpenCVForUnity.Mat::core_Mat_n_1mul__JJD(System.IntPtr,System.IntPtr,System.Double)
extern "C"  IntPtr_t Mat_core_Mat_n_1mul__JJD_m2846515492 (Il2CppObject * __this /* static, unused */, IntPtr_t ___nativeObj0, IntPtr_t ___m_nativeObj1, double ___scale2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.IntPtr OpenCVForUnity.Mat::core_Mat_n_1mul__JJ(System.IntPtr,System.IntPtr)
extern "C"  IntPtr_t Mat_core_Mat_n_1mul__JJ_m870155446 (Il2CppObject * __this /* static, unused */, IntPtr_t ___nativeObj0, IntPtr_t ___m_nativeObj1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.IntPtr OpenCVForUnity.Mat::core_Mat_n_1ones__III(System.Int32,System.Int32,System.Int32)
extern "C"  IntPtr_t Mat_core_Mat_n_1ones__III_m3400880405 (Il2CppObject * __this /* static, unused */, int32_t ___rows0, int32_t ___cols1, int32_t ___type2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.IntPtr OpenCVForUnity.Mat::core_Mat_n_1ones__DDI(System.Double,System.Double,System.Int32)
extern "C"  IntPtr_t Mat_core_Mat_n_1ones__DDI_m1618399901 (Il2CppObject * __this /* static, unused */, double ___size_width0, double ___size_height1, int32_t ___type2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void OpenCVForUnity.Mat::core_Mat_n_1push_1back(System.IntPtr,System.IntPtr)
extern "C"  void Mat_core_Mat_n_1push_1back_m2438260106 (Il2CppObject * __this /* static, unused */, IntPtr_t ___nativeObj0, IntPtr_t ___m_nativeObj1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void OpenCVForUnity.Mat::core_Mat_n_1release(System.IntPtr)
extern "C"  void Mat_core_Mat_n_1release_m505042928 (Il2CppObject * __this /* static, unused */, IntPtr_t ___nativeObj0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.IntPtr OpenCVForUnity.Mat::core_Mat_n_1reshape__JII(System.IntPtr,System.Int32,System.Int32)
extern "C"  IntPtr_t Mat_core_Mat_n_1reshape__JII_m746140382 (Il2CppObject * __this /* static, unused */, IntPtr_t ___nativeObj0, int32_t ___cn1, int32_t ___rows2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.IntPtr OpenCVForUnity.Mat::core_Mat_n_1reshape__JI(System.IntPtr,System.Int32)
extern "C"  IntPtr_t Mat_core_Mat_n_1reshape__JI_m2000411192 (Il2CppObject * __this /* static, unused */, IntPtr_t ___nativeObj0, int32_t ___cn1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.IntPtr OpenCVForUnity.Mat::core_Mat_n_1row(System.IntPtr,System.Int32)
extern "C"  IntPtr_t Mat_core_Mat_n_1row_m1664607781 (Il2CppObject * __this /* static, unused */, IntPtr_t ___nativeObj0, int32_t ___y1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.IntPtr OpenCVForUnity.Mat::core_Mat_n_1rowRange(System.IntPtr,System.Int32,System.Int32)
extern "C"  IntPtr_t Mat_core_Mat_n_1rowRange_m907237687 (Il2CppObject * __this /* static, unused */, IntPtr_t ___nativeObj0, int32_t ___startrow1, int32_t ___endrow2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 OpenCVForUnity.Mat::core_Mat_n_1rows(System.IntPtr)
extern "C"  int32_t Mat_core_Mat_n_1rows_m3093466568 (Il2CppObject * __this /* static, unused */, IntPtr_t ___nativeObj0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.IntPtr OpenCVForUnity.Mat::core_Mat_n_1setTo__JDDDD(System.IntPtr,System.Double,System.Double,System.Double,System.Double)
extern "C"  IntPtr_t Mat_core_Mat_n_1setTo__JDDDD_m130622205 (Il2CppObject * __this /* static, unused */, IntPtr_t ___nativeObj0, double ___s_val01, double ___s_val12, double ___s_val23, double ___s_val34, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.IntPtr OpenCVForUnity.Mat::core_Mat_n_1setTo__JDDDDJ(System.IntPtr,System.Double,System.Double,System.Double,System.Double,System.IntPtr)
extern "C"  IntPtr_t Mat_core_Mat_n_1setTo__JDDDDJ_m2832387021 (Il2CppObject * __this /* static, unused */, IntPtr_t ___nativeObj0, double ___s_val01, double ___s_val12, double ___s_val23, double ___s_val34, IntPtr_t ___mask_nativeObj5, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.IntPtr OpenCVForUnity.Mat::core_Mat_n_1setTo__JJJ(System.IntPtr,System.IntPtr,System.IntPtr)
extern "C"  IntPtr_t Mat_core_Mat_n_1setTo__JJJ_m1230910825 (Il2CppObject * __this /* static, unused */, IntPtr_t ___nativeObj0, IntPtr_t ___value_nativeObj1, IntPtr_t ___mask_nativeObj2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.IntPtr OpenCVForUnity.Mat::core_Mat_n_1setTo__JJ(System.IntPtr,System.IntPtr)
extern "C"  IntPtr_t Mat_core_Mat_n_1setTo__JJ_m555867869 (Il2CppObject * __this /* static, unused */, IntPtr_t ___nativeObj0, IntPtr_t ___value_nativeObj1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void OpenCVForUnity.Mat::core_Mat_n_1size(System.IntPtr,System.Double[])
extern "C"  void Mat_core_Mat_n_1size_m985828360 (Il2CppObject * __this /* static, unused */, IntPtr_t ___nativeObj0, DoubleU5BU5D_t2145413704* ___vals1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int64 OpenCVForUnity.Mat::core_Mat_n_1step1__JI(System.IntPtr,System.Int32)
extern "C"  int64_t Mat_core_Mat_n_1step1__JI_m1394524085 (Il2CppObject * __this /* static, unused */, IntPtr_t ___nativeObj0, int32_t ___i1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int64 OpenCVForUnity.Mat::core_Mat_n_1step1__J(System.IntPtr)
extern "C"  int64_t Mat_core_Mat_n_1step1__J_m1204031259 (Il2CppObject * __this /* static, unused */, IntPtr_t ___nativeObj0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.IntPtr OpenCVForUnity.Mat::core_Mat_n_1submat_1rr(System.IntPtr,System.Int32,System.Int32,System.Int32,System.Int32)
extern "C"  IntPtr_t Mat_core_Mat_n_1submat_1rr_m482528936 (Il2CppObject * __this /* static, unused */, IntPtr_t ___nativeObj0, int32_t ___rowRange_start1, int32_t ___rowRange_end2, int32_t ___colRange_start3, int32_t ___colRange_end4, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.IntPtr OpenCVForUnity.Mat::core_Mat_n_1submat(System.IntPtr,System.Int32,System.Int32,System.Int32,System.Int32)
extern "C"  IntPtr_t Mat_core_Mat_n_1submat_m120925402 (Il2CppObject * __this /* static, unused */, IntPtr_t ___nativeObj0, int32_t ___roi_x1, int32_t ___roi_y2, int32_t ___roi_width3, int32_t ___roi_height4, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.IntPtr OpenCVForUnity.Mat::core_Mat_n_1t(System.IntPtr)
extern "C"  IntPtr_t Mat_core_Mat_n_1t_m3385578584 (Il2CppObject * __this /* static, unused */, IntPtr_t ___nativeObj0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int64 OpenCVForUnity.Mat::core_Mat_n_1total(System.IntPtr)
extern "C"  int64_t Mat_core_Mat_n_1total_m2796691490 (Il2CppObject * __this /* static, unused */, IntPtr_t ___nativeObj0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 OpenCVForUnity.Mat::core_Mat_n_1type(System.IntPtr)
extern "C"  int32_t Mat_core_Mat_n_1type_m1993011783 (Il2CppObject * __this /* static, unused */, IntPtr_t ___nativeObj0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.IntPtr OpenCVForUnity.Mat::core_Mat_n_1zeros__III(System.Int32,System.Int32,System.Int32)
extern "C"  IntPtr_t Mat_core_Mat_n_1zeros__III_m2489957673 (Il2CppObject * __this /* static, unused */, int32_t ___rows0, int32_t ___cols1, int32_t ___type2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.IntPtr OpenCVForUnity.Mat::core_Mat_n_1zeros__DDI(System.Double,System.Double,System.Int32)
extern "C"  IntPtr_t Mat_core_Mat_n_1zeros__DDI_m2394982833 (Il2CppObject * __this /* static, unused */, double ___size_width0, double ___size_height1, int32_t ___type2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void OpenCVForUnity.Mat::core_Mat_n_1delete(System.IntPtr)
extern "C"  void Mat_core_Mat_n_1delete_m2674812292 (Il2CppObject * __this /* static, unused */, IntPtr_t ___nativeObj0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 OpenCVForUnity.Mat::core_Mat_nPutD(System.IntPtr,System.Int32,System.Int32,System.Int32,System.Double[])
extern "C"  int32_t Mat_core_Mat_nPutD_m727972467 (Il2CppObject * __this /* static, unused */, IntPtr_t ___self0, int32_t ___row1, int32_t ___col2, int32_t ___count3, DoubleU5BU5D_t2145413704* ___data4, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 OpenCVForUnity.Mat::core_Mat_nPutF(System.IntPtr,System.Int32,System.Int32,System.Int32,System.Single[])
extern "C"  int32_t Mat_core_Mat_nPutF_m3367203102 (Il2CppObject * __this /* static, unused */, IntPtr_t ___self0, int32_t ___row1, int32_t ___col2, int32_t ___count3, SingleU5BU5D_t2316563989* ___data4, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 OpenCVForUnity.Mat::core_Mat_nPutI(System.IntPtr,System.Int32,System.Int32,System.Int32,System.Int32[])
extern "C"  int32_t Mat_core_Mat_nPutI_m216690775 (Il2CppObject * __this /* static, unused */, IntPtr_t ___self0, int32_t ___row1, int32_t ___col2, int32_t ___count3, Int32U5BU5D_t3230847821* ___data4, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 OpenCVForUnity.Mat::core_Mat_nPutS(System.IntPtr,System.Int32,System.Int32,System.Int32,System.Int16[])
extern "C"  int32_t Mat_core_Mat_nPutS_m1167317255 (Il2CppObject * __this /* static, unused */, IntPtr_t ___self0, int32_t ___row1, int32_t ___col2, int32_t ___count3, Int16U5BU5D_t801762735* ___data4, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 OpenCVForUnity.Mat::core_Mat_nPutB(System.IntPtr,System.Int32,System.Int32,System.Int32,System.Byte[])
extern "C"  int32_t Mat_core_Mat_nPutB_m2623924762 (Il2CppObject * __this /* static, unused */, IntPtr_t ___self0, int32_t ___row1, int32_t ___col2, int32_t ___count3, ByteU5BU5D_t4260760469* ___data4, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 OpenCVForUnity.Mat::core_Mat_nGetB(System.IntPtr,System.Int32,System.Int32,System.Int32,System.Byte[])
extern "C"  int32_t Mat_core_Mat_nGetB_m3574225459 (Il2CppObject * __this /* static, unused */, IntPtr_t ___self0, int32_t ___row1, int32_t ___col2, int32_t ___count3, ByteU5BU5D_t4260760469* ___vals4, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 OpenCVForUnity.Mat::core_Mat_nGetS(System.IntPtr,System.Int32,System.Int32,System.Int32,System.Int16[])
extern "C"  int32_t Mat_core_Mat_nGetS_m561867790 (Il2CppObject * __this /* static, unused */, IntPtr_t ___self0, int32_t ___row1, int32_t ___col2, int32_t ___count3, Int16U5BU5D_t801762735* ___vals4, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 OpenCVForUnity.Mat::core_Mat_nGetI(System.IntPtr,System.Int32,System.Int32,System.Int32,System.Int32[])
extern "C"  int32_t Mat_core_Mat_nGetI_m3906208606 (Il2CppObject * __this /* static, unused */, IntPtr_t ___self0, int32_t ___row1, int32_t ___col2, int32_t ___count3, Int32U5BU5D_t3230847821* ___vals4, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 OpenCVForUnity.Mat::core_Mat_nGetF(System.IntPtr,System.Int32,System.Int32,System.Int32,System.Single[])
extern "C"  int32_t Mat_core_Mat_nGetF_m1778138871 (Il2CppObject * __this /* static, unused */, IntPtr_t ___self0, int32_t ___row1, int32_t ___col2, int32_t ___count3, SingleU5BU5D_t2316563989* ___vals4, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 OpenCVForUnity.Mat::core_Mat_nGetD(System.IntPtr,System.Int32,System.Int32,System.Int32,System.Double[])
extern "C"  int32_t Mat_core_Mat_nGetD_m3433875532 (Il2CppObject * __this /* static, unused */, IntPtr_t ___self0, int32_t ___row1, int32_t ___col2, int32_t ___count3, DoubleU5BU5D_t2145413704* ___vals4, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 OpenCVForUnity.Mat::core_Mat_nGet(System.IntPtr,System.Int32,System.Int32,System.Int32,System.Double[])
extern "C"  int32_t Mat_core_Mat_nGet_m1956752180 (Il2CppObject * __this /* static, unused */, IntPtr_t ___self0, int32_t ___row1, int32_t ___col2, int32_t ___count3, DoubleU5BU5D_t2145413704* ___vals4, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.IntPtr OpenCVForUnity.Mat::core_Mat_nDump(System.IntPtr)
extern "C"  IntPtr_t Mat_core_Mat_nDump_m336292504 (Il2CppObject * __this /* static, unused */, IntPtr_t ___self0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
