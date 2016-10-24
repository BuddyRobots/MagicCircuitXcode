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

// OpenCVForUnity.CvException
struct CvException_t3749946826;
// System.String
struct String_t;
// System.Object[]
struct ObjectU5BU5D_t1108656482;
// System.Exception
struct Exception_t3991598821;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_String7231557.h"
#include "mscorlib_System_Exception3991598821.h"

// System.Void OpenCVForUnity.CvException::.ctor()
extern "C"  void CvException__ctor_m859848772 (CvException_t3749946826 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void OpenCVForUnity.CvException::.ctor(System.String)
extern "C"  void CvException__ctor_m1551035710 (CvException_t3749946826 * __this, String_t* ___message0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void OpenCVForUnity.CvException::.ctor(System.String,System.Object[])
extern "C"  void CvException__ctor_m2372683690 (CvException_t3749946826 * __this, String_t* ___messageFormat0, ObjectU5BU5D_t1108656482* ___args1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void OpenCVForUnity.CvException::.ctor(System.String,System.Exception)
extern "C"  void CvException__ctor_m2452437944 (CvException_t3749946826 * __this, String_t* ___message0, Exception_t3991598821 * ___innerException1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
