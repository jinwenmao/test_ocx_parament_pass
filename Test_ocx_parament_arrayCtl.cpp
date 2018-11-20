// Test_ocx_parament_arrayCtl.cpp : Implementation of the CTest_ocx_parament_arrayCtrl ActiveX Control class.

#include "stdafx.h"
#include "test_ocx_parament_array.h"
#include "Test_ocx_parament_arrayCtl.h"
#include "Test_ocx_parament_arrayPpg.h"
#include <COMUTIL.H>
#include <deque>
//#include <COMUTIL.H>
using namespace std;
#pragma comment(lib, "comsupp.lib")  

#ifdef _DEBUG
#define new DEBUG_NEW
#undef THIS_FILE
static char THIS_FILE[] = __FILE__;
#endif


IMPLEMENT_DYNCREATE(CTest_ocx_parament_arrayCtrl, COleControl)


/////////////////////////////////////////////////////////////////////////////
// Message map

BEGIN_MESSAGE_MAP(CTest_ocx_parament_arrayCtrl, COleControl)
	//{{AFX_MSG_MAP(CTest_ocx_parament_arrayCtrl)
	// NOTE - ClassWizard will add and remove message map entries
	//    DO NOT EDIT what you see in these blocks of generated code !
	//}}AFX_MSG_MAP
	ON_OLEVERB(AFX_IDS_VERB_PROPERTIES, OnProperties)
END_MESSAGE_MAP()


/////////////////////////////////////////////////////////////////////////////
// Dispatch map

BEGIN_DISPATCH_MAP(CTest_ocx_parament_arrayCtrl, COleControl)
	//{{AFX_DISPATCH_MAP(CTest_ocx_parament_arrayCtrl)
	DISP_FUNCTION(CTest_ocx_parament_arrayCtrl, "Tests1", Tests1, VT_I4, VTS_PI4)
	DISP_FUNCTION(CTest_ocx_parament_arrayCtrl, "TestVar", TestVar, VT_I4, VTS_PVARIANT)
	DISP_FUNCTION(CTest_ocx_parament_arrayCtrl, "testSendVar", testSendVar, VT_I4, VTS_PVARIANT)
	DISP_FUNCTION(CTest_ocx_parament_arrayCtrl, "testnameidpairv", testnameidpairv, VT_I4, VTS_PVARIANT VTS_PVARIANT)
	//}}AFX_DISPATCH_MAP
	DISP_FUNCTION_ID(CTest_ocx_parament_arrayCtrl, "AboutBox", DISPID_ABOUTBOX, AboutBox, VT_EMPTY, VTS_NONE)
END_DISPATCH_MAP()


/////////////////////////////////////////////////////////////////////////////
// Event map

BEGIN_EVENT_MAP(CTest_ocx_parament_arrayCtrl, COleControl)
	//{{AFX_EVENT_MAP(CTest_ocx_parament_arrayCtrl)
	// NOTE - ClassWizard will add and remove event map entries
	//    DO NOT EDIT what you see in these blocks of generated code !
	//}}AFX_EVENT_MAP
END_EVENT_MAP()


/////////////////////////////////////////////////////////////////////////////
// Property pages

// TODO: Add more property pages as needed.  Remember to increase the count!
BEGIN_PROPPAGEIDS(CTest_ocx_parament_arrayCtrl, 1)
	PROPPAGEID(CTest_ocx_parament_arrayPropPage::guid)
END_PROPPAGEIDS(CTest_ocx_parament_arrayCtrl)


/////////////////////////////////////////////////////////////////////////////
// Initialize class factory and guid

IMPLEMENT_OLECREATE_EX(CTest_ocx_parament_arrayCtrl, "TESTOCXPARAMENTARRAY.TestocxparamentarrayCtrl.1",
	0x22586611, 0x5918, 0x47b5, 0x90, 0x19, 0xce, 0x69, 0x23, 0x76, 0x99, 0xe8)


/////////////////////////////////////////////////////////////////////////////
// Type library ID and version

IMPLEMENT_OLETYPELIB(CTest_ocx_parament_arrayCtrl, _tlid, _wVerMajor, _wVerMinor)


/////////////////////////////////////////////////////////////////////////////
// Interface IDs

const IID BASED_CODE IID_DTest_ocx_parament_array =
		{ 0x84696215, 0x585e, 0x4e84, { 0xa8, 0x55, 0x77, 0xda, 0x7b, 0x82, 0x21, 0xa } };
const IID BASED_CODE IID_DTest_ocx_parament_arrayEvents =
		{ 0xcd22ae8b, 0x5cd6, 0x492d, { 0xb3, 0xfd, 0xa1, 0x21, 0xfd, 0xf4, 0x79, 0xe0 } };


/////////////////////////////////////////////////////////////////////////////
// Control type information

static const DWORD BASED_CODE _dwTest_ocx_parament_arrayOleMisc =
	OLEMISC_ACTIVATEWHENVISIBLE |
	OLEMISC_SETCLIENTSITEFIRST |
	OLEMISC_INSIDEOUT |
	OLEMISC_CANTLINKINSIDE |
	OLEMISC_RECOMPOSEONRESIZE;

IMPLEMENT_OLECTLTYPE(CTest_ocx_parament_arrayCtrl, IDS_TEST_OCX_PARAMENT_ARRAY, _dwTest_ocx_parament_arrayOleMisc)


/////////////////////////////////////////////////////////////////////////////
// CTest_ocx_parament_arrayCtrl::CTest_ocx_parament_arrayCtrlFactory::UpdateRegistry -
// Adds or removes system registry entries for CTest_ocx_parament_arrayCtrl

BOOL CTest_ocx_parament_arrayCtrl::CTest_ocx_parament_arrayCtrlFactory::UpdateRegistry(BOOL bRegister)
{
	// TODO: Verify that your control follows apartment-model threading rules.
	// Refer to MFC TechNote 64 for more information.
	// If your control does not conform to the apartment-model rules, then
	// you must modify the code below, changing the 6th parameter from
	// afxRegApartmentThreading to 0.

	if (bRegister)
		return AfxOleRegisterControlClass(
			AfxGetInstanceHandle(),
			m_clsid,
			m_lpszProgID,
			IDS_TEST_OCX_PARAMENT_ARRAY,
			IDB_TEST_OCX_PARAMENT_ARRAY,
			afxRegApartmentThreading,
			_dwTest_ocx_parament_arrayOleMisc,
			_tlid,
			_wVerMajor,
			_wVerMinor);
	else
		return AfxOleUnregisterClass(m_clsid, m_lpszProgID);
}


/////////////////////////////////////////////////////////////////////////////
// CTest_ocx_parament_arrayCtrl::CTest_ocx_parament_arrayCtrl - Constructor

CTest_ocx_parament_arrayCtrl::CTest_ocx_parament_arrayCtrl()
{
	InitializeIIDs(&IID_DTest_ocx_parament_array, &IID_DTest_ocx_parament_arrayEvents);

	// TODO: Initialize your control's instance data here.
}


/////////////////////////////////////////////////////////////////////////////
// CTest_ocx_parament_arrayCtrl::~CTest_ocx_parament_arrayCtrl - Destructor

CTest_ocx_parament_arrayCtrl::~CTest_ocx_parament_arrayCtrl()
{
	// TODO: Cleanup your control's instance data here.
}


/////////////////////////////////////////////////////////////////////////////
// CTest_ocx_parament_arrayCtrl::OnDraw - Drawing function

void CTest_ocx_parament_arrayCtrl::OnDraw(
			CDC* pdc, const CRect& rcBounds, const CRect& rcInvalid)
{
	// TODO: Replace the following code with your own drawing code.
	pdc->FillRect(rcBounds, CBrush::FromHandle((HBRUSH)GetStockObject(WHITE_BRUSH)));
	pdc->Ellipse(rcBounds);
}


/////////////////////////////////////////////////////////////////////////////
// CTest_ocx_parament_arrayCtrl::DoPropExchange - Persistence support

void CTest_ocx_parament_arrayCtrl::DoPropExchange(CPropExchange* pPX)
{
	ExchangeVersion(pPX, MAKELONG(_wVerMinor, _wVerMajor));
	COleControl::DoPropExchange(pPX);

	// TODO: Call PX_ functions for each persistent custom property.

}


/////////////////////////////////////////////////////////////////////////////
// CTest_ocx_parament_arrayCtrl::OnResetState - Reset control to default state

void CTest_ocx_parament_arrayCtrl::OnResetState()
{
	COleControl::OnResetState();  // Resets defaults found in DoPropExchange

	// TODO: Reset any other control state here.
}


/////////////////////////////////////////////////////////////////////////////
// CTest_ocx_parament_arrayCtrl::AboutBox - Display an "About" box to the user

void CTest_ocx_parament_arrayCtrl::AboutBox()
{
	CDialog dlgAbout(IDD_ABOUTBOX_TEST_OCX_PARAMENT_ARRAY);
	dlgAbout.DoModal();
}


/////////////////////////////////////////////////////////////////////////////
// CTest_ocx_parament_arrayCtrl message handlers

long CTest_ocx_parament_arrayCtrl::Tests1(long FAR* t1) 
{
	// TODO: Add your dispatch handler code here
	*t1 = 1000;

	return 0;
}

long CTest_ocx_parament_arrayCtrl::TestVar(VARIANT FAR* var) 
{
	// TODO: Add your dispatch handler code here
long a = 123;
//return -1;
//_variant_t lVal(a);
//var->parray = _variant_t.parray;
//var =_variant_t.parray;
int ARRAY_LEN = 10;

SAFEARRAY *psa; //使用数组整理读取的数据
SAFEARRAYBOUND rgsabound[1];
rgsabound[0].cElements =ARRAY_LEN; //设置数组的大小
rgsabound[0].lLbound = 0;
psa = SafeArrayCreate(VT_VARIANT, 1, rgsabound); //创建SafeArray数组

for(LONG i=0;i<ARRAY_LEN;i++)
{
//BSTR bstr = CComBSTR(vctCerts[i].szCertDN);

VARIANT v;  
v.vt = VT_I4; 
//v.bstrVal = i+100;
v.lVal = i+100;
::SafeArrayPutElement(psa, &i, &v);
}

var->vt = VT_ARRAY|VT_VARIANT; //数组类型
//can not use next type,cs client error
//var->vt = VT_ARRAY|VT_I4; //数组类型
var->parray = psa;
//--------------------- 
// 作者：bjgxjob 
// 来源：CSDN 
// 原文：https://blog.csdn.net/boise/article/details/52400533 
// 版权声明：本文为博主原创文章，转载请附上博文链接！

	return 0;
}

long CTest_ocx_parament_arrayCtrl::testSendVar(VARIANT FAR* sendv) 
{
	// TODO: Add your dispatch handler code here
sendv->vt;
sendv->parray->cbElements;
std::deque<int> lde;
			long i = 0;
			int ele_count = sendv->parray->rgsabound[0].cElements;
			int index_start =  sendv->parray->rgsabound[0].lLbound;
		//	int iSize =  +;
			for (i = index_start; i < ele_count+ index_start; i++)
			{
									//	iDime[1] = j;
				long rg = 0;
 
//					int d = -1;
//					HRESULT hrg = ::SafeArrayGetElement(sendv->parray, &i, &d);

										BSTR sb = NULL;
					HRESULT hrg = ::SafeArrayGetElement(sendv->parray, &i, &sb);

				//	_bstr_t b = sb;  
				//	char* lpszText2 = b; 
					char* lpszText2 = _com_util::ConvertBSTRToString(sb);  
					OutputDebugString(lpszText2);
					OutputDebugString("\n");
SysFreeString(sb); // 用完释放  
delete[] lpszText2;  

			}

	return 0;
}

long CTest_ocx_parament_arrayCtrl::testnameidpairv(VARIANT FAR* aname, VARIANT FAR* aid) 
{
		long i = 0;
		long j = 0;
			int ele_count_n = aname->parray->rgsabound[0].cElements;
			int index_start_n =  aname->parray->rgsabound[0].lLbound;

			int ele_count_id = aid->parray->rgsabound[0].cElements;
			int index_start_id =  aid->parray->rgsabound[0].lLbound;

			if (ele_count_n != ele_count_id)
			{
				return -1;
			}

			if(!(aid->vt  && VT_ARRAY))
			{
				return -1;
			}
			if (!(aid->vt && VT_I4))
			{
				return -1;
			}

			if(!(aname->vt && VT_ARRAY))
			{
				return -1;
			}
			if (!(aname->vt && VT_BSTR))
			{
				return -1;
			}

			for (i = index_start_n,j= index_start_id; i < ele_count_n+ index_start_n; i++,j++)
			{
				char str[MAX_PATH];
									//	iDime[1] = j;
				//long rg = 0;
 
					int d = -1;
					HRESULT hrg = ::SafeArrayGetElement(aid->parray, &i, &d);

										BSTR sb = NULL;
					 hrg = ::SafeArrayGetElement(aname->parray, &i, &sb);

				//	_bstr_t b = sb;  
				//	char* lpszText2 = b; 
					char* lpszText2 = _com_util::ConvertBSTRToString(sb);  
					sprintf(str,"%d   %s\n",d,lpszText2);
					OutputDebugString(str);
					//OutputDebugString("\n");
SysFreeString(sb); // 用完释放  
delete[] lpszText2;  

			}

	return 0;
}
