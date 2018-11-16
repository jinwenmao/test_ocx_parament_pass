// Test_ocx_parament_arrayPpg.cpp : Implementation of the CTest_ocx_parament_arrayPropPage property page class.

#include "stdafx.h"
#include "test_ocx_parament_array.h"
#include "Test_ocx_parament_arrayPpg.h"

#ifdef _DEBUG
#define new DEBUG_NEW
#undef THIS_FILE
static char THIS_FILE[] = __FILE__;
#endif


IMPLEMENT_DYNCREATE(CTest_ocx_parament_arrayPropPage, COlePropertyPage)


/////////////////////////////////////////////////////////////////////////////
// Message map

BEGIN_MESSAGE_MAP(CTest_ocx_parament_arrayPropPage, COlePropertyPage)
	//{{AFX_MSG_MAP(CTest_ocx_parament_arrayPropPage)
	// NOTE - ClassWizard will add and remove message map entries
	//    DO NOT EDIT what you see in these blocks of generated code !
	//}}AFX_MSG_MAP
END_MESSAGE_MAP()


/////////////////////////////////////////////////////////////////////////////
// Initialize class factory and guid

IMPLEMENT_OLECREATE_EX(CTest_ocx_parament_arrayPropPage, "TESTOCXPARAMENTARRAY.TestocxparamentarrayPropPage.1",
	0x1a75f75a, 0xdd0, 0x40e7, 0xa7, 0xc3, 0x7a, 0x68, 0x4c, 0x84, 0x5a, 0x34)


/////////////////////////////////////////////////////////////////////////////
// CTest_ocx_parament_arrayPropPage::CTest_ocx_parament_arrayPropPageFactory::UpdateRegistry -
// Adds or removes system registry entries for CTest_ocx_parament_arrayPropPage

BOOL CTest_ocx_parament_arrayPropPage::CTest_ocx_parament_arrayPropPageFactory::UpdateRegistry(BOOL bRegister)
{
	if (bRegister)
		return AfxOleRegisterPropertyPageClass(AfxGetInstanceHandle(),
			m_clsid, IDS_TEST_OCX_PARAMENT_ARRAY_PPG);
	else
		return AfxOleUnregisterClass(m_clsid, NULL);
}


/////////////////////////////////////////////////////////////////////////////
// CTest_ocx_parament_arrayPropPage::CTest_ocx_parament_arrayPropPage - Constructor

CTest_ocx_parament_arrayPropPage::CTest_ocx_parament_arrayPropPage() :
	COlePropertyPage(IDD, IDS_TEST_OCX_PARAMENT_ARRAY_PPG_CAPTION)
{
	//{{AFX_DATA_INIT(CTest_ocx_parament_arrayPropPage)
	// NOTE: ClassWizard will add member initialization here
	//    DO NOT EDIT what you see in these blocks of generated code !
	//}}AFX_DATA_INIT
}


/////////////////////////////////////////////////////////////////////////////
// CTest_ocx_parament_arrayPropPage::DoDataExchange - Moves data between page and properties

void CTest_ocx_parament_arrayPropPage::DoDataExchange(CDataExchange* pDX)
{
	//{{AFX_DATA_MAP(CTest_ocx_parament_arrayPropPage)
	// NOTE: ClassWizard will add DDP, DDX, and DDV calls here
	//    DO NOT EDIT what you see in these blocks of generated code !
	//}}AFX_DATA_MAP
	DDP_PostProcessing(pDX);
}


/////////////////////////////////////////////////////////////////////////////
// CTest_ocx_parament_arrayPropPage message handlers
