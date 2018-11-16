

/* this ALWAYS GENERATED file contains the definitions for the interfaces */


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


/* verify that the <rpcndr.h> version is high enough to compile this file*/
#ifndef __REQUIRED_RPCNDR_H_VERSION__
#define __REQUIRED_RPCNDR_H_VERSION__ 475
#endif

#include "rpc.h"
#include "rpcndr.h"

#ifndef __RPCNDR_H_VERSION__
#error this stub requires an updated version of <rpcndr.h>
#endif // __RPCNDR_H_VERSION__


#ifndef __test_ocx_parament_array_h_h__
#define __test_ocx_parament_array_h_h__

#if defined(_MSC_VER) && (_MSC_VER >= 1020)
#pragma once
#endif

/* Forward Declarations */ 

#ifndef ___DTest_ocx_parament_array_FWD_DEFINED__
#define ___DTest_ocx_parament_array_FWD_DEFINED__
typedef interface _DTest_ocx_parament_array _DTest_ocx_parament_array;
#endif 	/* ___DTest_ocx_parament_array_FWD_DEFINED__ */


#ifndef ___DTest_ocx_parament_arrayEvents_FWD_DEFINED__
#define ___DTest_ocx_parament_arrayEvents_FWD_DEFINED__
typedef interface _DTest_ocx_parament_arrayEvents _DTest_ocx_parament_arrayEvents;
#endif 	/* ___DTest_ocx_parament_arrayEvents_FWD_DEFINED__ */


#ifndef __Test_ocx_parament_array_FWD_DEFINED__
#define __Test_ocx_parament_array_FWD_DEFINED__

#ifdef __cplusplus
typedef class Test_ocx_parament_array Test_ocx_parament_array;
#else
typedef struct Test_ocx_parament_array Test_ocx_parament_array;
#endif /* __cplusplus */

#endif 	/* __Test_ocx_parament_array_FWD_DEFINED__ */


#ifdef __cplusplus
extern "C"{
#endif 



#ifndef __TEST_OCX_PARAMENT_ARRAYLib_LIBRARY_DEFINED__
#define __TEST_OCX_PARAMENT_ARRAYLib_LIBRARY_DEFINED__

/* library TEST_OCX_PARAMENT_ARRAYLib */
/* [control][helpstring][helpfile][version][uuid] */ 


DEFINE_GUID(LIBID_TEST_OCX_PARAMENT_ARRAYLib,0xEDE2254F,0x4DA8,0x4038,0x8E,0x1B,0x9F,0xE3,0xDB,0xDC,0x77,0xB5);

#ifndef ___DTest_ocx_parament_array_DISPINTERFACE_DEFINED__
#define ___DTest_ocx_parament_array_DISPINTERFACE_DEFINED__

/* dispinterface _DTest_ocx_parament_array */
/* [hidden][helpstring][uuid] */ 


DEFINE_GUID(DIID__DTest_ocx_parament_array,0x84696215,0x585E,0x4E84,0xA8,0x55,0x77,0xDA,0x7B,0x82,0x21,0x0A);

#if defined(__cplusplus) && !defined(CINTERFACE)

    MIDL_INTERFACE("84696215-585E-4E84-A855-77DA7B82210A")
    _DTest_ocx_parament_array : public IDispatch
    {
    };
    
#else 	/* C style interface */

    typedef struct _DTest_ocx_parament_arrayVtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            _DTest_ocx_parament_array * This,
            /* [in] */ REFIID riid,
            /* [annotation][iid_is][out] */ 
            __RPC__deref_out  void **ppvObject);
        
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            _DTest_ocx_parament_array * This);
        
        ULONG ( STDMETHODCALLTYPE *Release )( 
            _DTest_ocx_parament_array * This);
        
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfoCount )( 
            _DTest_ocx_parament_array * This,
            /* [out] */ UINT *pctinfo);
        
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfo )( 
            _DTest_ocx_parament_array * This,
            /* [in] */ UINT iTInfo,
            /* [in] */ LCID lcid,
            /* [out] */ ITypeInfo **ppTInfo);
        
        HRESULT ( STDMETHODCALLTYPE *GetIDsOfNames )( 
            _DTest_ocx_parament_array * This,
            /* [in] */ REFIID riid,
            /* [size_is][in] */ LPOLESTR *rgszNames,
            /* [range][in] */ UINT cNames,
            /* [in] */ LCID lcid,
            /* [size_is][out] */ DISPID *rgDispId);
        
        /* [local] */ HRESULT ( STDMETHODCALLTYPE *Invoke )( 
            _DTest_ocx_parament_array * This,
            /* [in] */ DISPID dispIdMember,
            /* [in] */ REFIID riid,
            /* [in] */ LCID lcid,
            /* [in] */ WORD wFlags,
            /* [out][in] */ DISPPARAMS *pDispParams,
            /* [out] */ VARIANT *pVarResult,
            /* [out] */ EXCEPINFO *pExcepInfo,
            /* [out] */ UINT *puArgErr);
        
        END_INTERFACE
    } _DTest_ocx_parament_arrayVtbl;

    interface _DTest_ocx_parament_array
    {
        CONST_VTBL struct _DTest_ocx_parament_arrayVtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define _DTest_ocx_parament_array_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define _DTest_ocx_parament_array_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define _DTest_ocx_parament_array_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define _DTest_ocx_parament_array_GetTypeInfoCount(This,pctinfo)	\
    ( (This)->lpVtbl -> GetTypeInfoCount(This,pctinfo) ) 

#define _DTest_ocx_parament_array_GetTypeInfo(This,iTInfo,lcid,ppTInfo)	\
    ( (This)->lpVtbl -> GetTypeInfo(This,iTInfo,lcid,ppTInfo) ) 

#define _DTest_ocx_parament_array_GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId)	\
    ( (This)->lpVtbl -> GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId) ) 

#define _DTest_ocx_parament_array_Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr)	\
    ( (This)->lpVtbl -> Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr) ) 

#endif /* COBJMACROS */


#endif 	/* C style interface */


#endif 	/* ___DTest_ocx_parament_array_DISPINTERFACE_DEFINED__ */


#ifndef ___DTest_ocx_parament_arrayEvents_DISPINTERFACE_DEFINED__
#define ___DTest_ocx_parament_arrayEvents_DISPINTERFACE_DEFINED__

/* dispinterface _DTest_ocx_parament_arrayEvents */
/* [helpstring][uuid] */ 


DEFINE_GUID(DIID__DTest_ocx_parament_arrayEvents,0xCD22AE8B,0x5CD6,0x492D,0xB3,0xFD,0xA1,0x21,0xFD,0xF4,0x79,0xE0);

#if defined(__cplusplus) && !defined(CINTERFACE)

    MIDL_INTERFACE("CD22AE8B-5CD6-492D-B3FD-A121FDF479E0")
    _DTest_ocx_parament_arrayEvents : public IDispatch
    {
    };
    
#else 	/* C style interface */

    typedef struct _DTest_ocx_parament_arrayEventsVtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            _DTest_ocx_parament_arrayEvents * This,
            /* [in] */ REFIID riid,
            /* [annotation][iid_is][out] */ 
            __RPC__deref_out  void **ppvObject);
        
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            _DTest_ocx_parament_arrayEvents * This);
        
        ULONG ( STDMETHODCALLTYPE *Release )( 
            _DTest_ocx_parament_arrayEvents * This);
        
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfoCount )( 
            _DTest_ocx_parament_arrayEvents * This,
            /* [out] */ UINT *pctinfo);
        
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfo )( 
            _DTest_ocx_parament_arrayEvents * This,
            /* [in] */ UINT iTInfo,
            /* [in] */ LCID lcid,
            /* [out] */ ITypeInfo **ppTInfo);
        
        HRESULT ( STDMETHODCALLTYPE *GetIDsOfNames )( 
            _DTest_ocx_parament_arrayEvents * This,
            /* [in] */ REFIID riid,
            /* [size_is][in] */ LPOLESTR *rgszNames,
            /* [range][in] */ UINT cNames,
            /* [in] */ LCID lcid,
            /* [size_is][out] */ DISPID *rgDispId);
        
        /* [local] */ HRESULT ( STDMETHODCALLTYPE *Invoke )( 
            _DTest_ocx_parament_arrayEvents * This,
            /* [in] */ DISPID dispIdMember,
            /* [in] */ REFIID riid,
            /* [in] */ LCID lcid,
            /* [in] */ WORD wFlags,
            /* [out][in] */ DISPPARAMS *pDispParams,
            /* [out] */ VARIANT *pVarResult,
            /* [out] */ EXCEPINFO *pExcepInfo,
            /* [out] */ UINT *puArgErr);
        
        END_INTERFACE
    } _DTest_ocx_parament_arrayEventsVtbl;

    interface _DTest_ocx_parament_arrayEvents
    {
        CONST_VTBL struct _DTest_ocx_parament_arrayEventsVtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define _DTest_ocx_parament_arrayEvents_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define _DTest_ocx_parament_arrayEvents_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define _DTest_ocx_parament_arrayEvents_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define _DTest_ocx_parament_arrayEvents_GetTypeInfoCount(This,pctinfo)	\
    ( (This)->lpVtbl -> GetTypeInfoCount(This,pctinfo) ) 

#define _DTest_ocx_parament_arrayEvents_GetTypeInfo(This,iTInfo,lcid,ppTInfo)	\
    ( (This)->lpVtbl -> GetTypeInfo(This,iTInfo,lcid,ppTInfo) ) 

#define _DTest_ocx_parament_arrayEvents_GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId)	\
    ( (This)->lpVtbl -> GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId) ) 

#define _DTest_ocx_parament_arrayEvents_Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr)	\
    ( (This)->lpVtbl -> Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr) ) 

#endif /* COBJMACROS */


#endif 	/* C style interface */


#endif 	/* ___DTest_ocx_parament_arrayEvents_DISPINTERFACE_DEFINED__ */


DEFINE_GUID(CLSID_Test_ocx_parament_array,0x22586611,0x5918,0x47B5,0x90,0x19,0xCE,0x69,0x23,0x76,0x99,0xE8);

#ifdef __cplusplus

class DECLSPEC_UUID("22586611-5918-47B5-9019-CE69237699E8")
Test_ocx_parament_array;
#endif
#endif /* __TEST_OCX_PARAMENT_ARRAYLib_LIBRARY_DEFINED__ */

/* Additional Prototypes for ALL interfaces */

/* end of Additional Prototypes */

#ifdef __cplusplus
}
#endif

#endif


