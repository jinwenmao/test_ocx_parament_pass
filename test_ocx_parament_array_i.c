

/* this ALWAYS GENERATED file contains the IIDs and CLSIDs */

/* link this file in with the server and any clients */


 /* File created by MIDL compiler version 7.00.0555 */
/* at Fri Nov 16 09:59:32 2018
 */
/* Compiler settings for test_ocx_parament_array.odl:
    Oicf, W1, Zp8, env=Win32 (32b run), target_arch=X86 7.00.0555 
    protocol : dce , ms_ext, c_ext, robust
    error checks: allocation ref bounds_check enum stub_data 
    VC __declspec() decoration level: 
         __declspec(uuid()), __declspec(selectany), __declspec(novtable)
         DECLSPEC_UUID(), MIDL_INTERFACE()
*/
/* @@MIDL_FILE_HEADING(  ) */

#pragma warning( disable: 4049 )  /* more than 64k source lines */


#ifdef __cplusplus
extern "C"{
#endif 


#include <rpc.h>
#include <rpcndr.h>

#ifdef _MIDL_USE_GUIDDEF_

#ifndef INITGUID
#define INITGUID
#include <guiddef.h>
#undef INITGUID
#else
#include <guiddef.h>
#endif

#define MIDL_DEFINE_GUID(type,name,l,w1,w2,b1,b2,b3,b4,b5,b6,b7,b8) \
        DEFINE_GUID(name,l,w1,w2,b1,b2,b3,b4,b5,b6,b7,b8)

#else // !_MIDL_USE_GUIDDEF_

#ifndef __IID_DEFINED__
#define __IID_DEFINED__

typedef struct _IID
{
    unsigned long x;
    unsigned short s1;
    unsigned short s2;
    unsigned char  c[8];
} IID;

#endif // __IID_DEFINED__

#ifndef CLSID_DEFINED
#define CLSID_DEFINED
typedef IID CLSID;
#endif // CLSID_DEFINED

#define MIDL_DEFINE_GUID(type,name,l,w1,w2,b1,b2,b3,b4,b5,b6,b7,b8) \
        const type name = {l,w1,w2,{b1,b2,b3,b4,b5,b6,b7,b8}}

#endif !_MIDL_USE_GUIDDEF_

MIDL_DEFINE_GUID(IID, LIBID_TEST_OCX_PARAMENT_ARRAYLib,0xEDE2254F,0x4DA8,0x4038,0x8E,0x1B,0x9F,0xE3,0xDB,0xDC,0x77,0xB5);


MIDL_DEFINE_GUID(IID, DIID__DTest_ocx_parament_array,0x84696215,0x585E,0x4E84,0xA8,0x55,0x77,0xDA,0x7B,0x82,0x21,0x0A);


MIDL_DEFINE_GUID(IID, DIID__DTest_ocx_parament_arrayEvents,0xCD22AE8B,0x5CD6,0x492D,0xB3,0xFD,0xA1,0x21,0xFD,0xF4,0x79,0xE0);


MIDL_DEFINE_GUID(CLSID, CLSID_Test_ocx_parament_array,0x22586611,0x5918,0x47B5,0x90,0x19,0xCE,0x69,0x23,0x76,0x99,0xE8);

#undef MIDL_DEFINE_GUID

#ifdef __cplusplus
}
#endif



