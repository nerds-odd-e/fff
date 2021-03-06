#include "global_fakes.h"
#include <string.h> // for memcpy

#ifndef TEST_WITH_CALLING_CONVENTIONS
DEFINE_FAKE_VOID_FUNC(voidfunc1, int);
DEFINE_FAKE_VOID_FUNC(voidfunc2, char, char);

#define OUT_ARG_0 Y
DEFINE_FAKE_VOID_FUNC(voidfunc1outparam, char *);
#undef OUT_ARG_0

#define OUT_ARG_0 Y
#define OUT_ARG_1 Y
DEFINE_FAKE_VOID_FUNC(voidfunc2outparam, unsigned int *, char *);
#undef OUT_ARG_0
#undef OUT_ARG_1

#define OUT_ARG_0 Y
#define OUT_ARG_1 Y
DEFINE_FAKE_VOID_FUNC(voidfunc3outparam, uint8_t *, uint32_t *);
#undef OUT_ARG_0
#undef OUT_ARG_1

#define OUT_ARG_0 Y
DEFINE_FAKE_VOID_FUNC(voidfunc4outparam, struct MyStruct *);
#undef OUT_ARG_0

DEFINE_FAKE_VALUE_FUNC(long, longfunc0);
DEFINE_FAKE_VALUE_FUNC(enum MYBOOL, enumfunc0);
DEFINE_FAKE_VALUE_FUNC(struct MyStruct, structfunc0);
DEFINE_FAKE_VOID_FUNC_VARARG(voidfunc3var, const char *, int, ...);
DEFINE_FAKE_VALUE_FUNC_VARARG(int, valuefunc3var, const char *, int, ...);
#ifndef __cplusplus
DEFINE_FAKE_VALUE_FUNC(int, strlcpy3, char* const, const char* const, const size_t);
#endif /* __cplusplus */
DEFINE_FAKE_VOID_FUNC(voidfunc20, int, int, int, int, int, int, int, int, int, int, int, int, int, int, int, int, int, int, int, int);
DEFINE_FAKE_VALUE_FUNC(int, valuefunc20, int, int, int, int, int, int, int, int, int, int, int, int, int, int, int, int, int, int, int, int);
#else
DEFINE_FAKE_VOID_FUNC(__cdecl, voidfunc1, int);
DEFINE_FAKE_VOID_FUNC(__cdecl, voidfunc2, char, char);
DEFINE_FAKE_VOID_FUNC(__cdecl, voidfunc1outparam, char *);

DEFINE_FAKE_VALUE_FUNC(long, __cdecl, longfunc0);
DEFINE_FAKE_VALUE_FUNC(enum MYBOOL, __cdecl, enumfunc0);
DEFINE_FAKE_VALUE_FUNC(struct MyStruct, __cdecl, structfunc0);
DEFINE_FAKE_VOID_FUNC_VARARG(__cdecl, voidfunc3var, const char *, int, ...);
DEFINE_FAKE_VALUE_FUNC_VARARG(int, __cdecl, valuefunc3var, const char *, int, ...);
#ifndef __cplusplus
DEFINE_FAKE_VALUE_FUNC(int, __cdecl, strlcpy3, char* const, const char* const, const size_t);
#endif /* __cplusplus */
DEFINE_FAKE_VOID_FUNC(__cdecl, voidfunc20, int, int, int, int, int, int, int, int, int, int, int, int, int, int, int, int, int, int, int, int);
DEFINE_FAKE_VALUE_FUNC(int, __cdecl,valuefunc20, int, int, int, int, int, int, int, int, int, int, int, int, int, int, int, int, int, int, int, int);
#endif
