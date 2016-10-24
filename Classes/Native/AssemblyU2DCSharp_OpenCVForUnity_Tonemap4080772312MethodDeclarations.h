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

// OpenCVForUnity.Tonemap
struct Tonemap_t4080772312;
// OpenCVForUnity.Mat
struct Mat_t3763101966;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_IntPtr4010401971.h"
#include "AssemblyU2DCSharp_OpenCVForUnity_Mat3763101966.h"

// System.Void OpenCVForUnity.Tonemap::.ctor(System.IntPtr)
extern "C"  void Tonemap__ctor_m1984251678 (Tonemap_t4080772312 * __this, IntPtr_t ___addr0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void OpenCVForUnity.Tonemap::Dispose(System.Boolean)
extern "C"  void Tonemap_Dispose_m4015285226 (Tonemap_t4080772312 * __this, bool ___disposing0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Single OpenCVForUnity.Tonemap::getGamma()
extern "C"  float Tonemap_getGamma_m3001563755 (Tonemap_t4080772312 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void OpenCVForUnity.Tonemap::process(OpenCVForUnity.Mat,OpenCVForUnity.Mat)
extern "C"  void Tonemap_process_m4209977507 (Tonemap_t4080772312 * __this, Mat_t3763101966 * ___src0, Mat_t3763101966 * ___dst1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void OpenCVForUnity.Tonemap::setGamma(System.Single)
extern "C"  void Tonemap_setGamma_m3753450104 (Tonemap_t4080772312 * __this, float ___gamma0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Single OpenCVForUnity.Tonemap::photo_Tonemap_getGamma_10(System.IntPtr)
extern "C"  float Tonemap_photo_Tonemap_getGamma_10_m2820918305 (Il2CppObject * __this /* static, unused */, IntPtr_t ___nativeObj0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void OpenCVForUnity.Tonemap::photo_Tonemap_process_10(System.IntPtr,System.IntPtr,System.IntPtr)
extern "C"  void Tonemap_photo_Tonemap_process_10_m501353777 (Il2CppObject * __this /* static, unused */, IntPtr_t ___nativeObj0, IntPtr_t ___src_nativeObj1, IntPtr_t ___dst_nativeObj2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void OpenCVForUnity.Tonemap::photo_Tonemap_setGamma_10(System.IntPtr,System.Single)
extern "C"  void Tonemap_photo_Tonemap_setGamma_10_m3754879982 (Il2CppObject * __this /* static, unused */, IntPtr_t ___nativeObj0, float ___gamma1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void OpenCVForUnity.Tonemap::photo_Tonemap_delete(System.IntPtr)
extern "C"  void Tonemap_photo_Tonemap_delete_m772469081 (Il2CppObject * __this /* static, unused */, IntPtr_t ___nativeObj0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
