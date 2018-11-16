#if !defined(AFX_TEST_OCX_PARAMENT_ARRAYPPG_H__C1B1CFB3_A9D3_4965_9F36_10614194278D__INCLUDED_)
#define AFX_TEST_OCX_PARAMENT_ARRAYPPG_H__C1B1CFB3_A9D3_4965_9F36_10614194278D__INCLUDED_

#if _MSC_VER > 1000
#pragma once
#endif // _MSC_VER > 1000

// Test_ocx_parament_arrayPpg.h : Declaration of the CTest_ocx_parament_arrayPropPage property page class.

////////////////////////////////////////////////////////////////////////////
// CTest_ocx_parament_arrayPropPage : See Test_ocx_parament_arrayPpg.cpp.cpp for implementation.

class CTest_ocx_parament_arrayPropPage : public COlePropertyPage
{
	DECLARE_DYNCREATE(CTest_ocx_parament_arrayPropPage)
	DECLARE_OLECREATE_EX(CTest_ocx_parament_arrayPropPage)

// Constructor
public:
	CTest_ocx_parament_arrayPropPage();

// Dialog Data
	//{{AFX_DATA(CTest_ocx_parament_arrayPropPage)
	enum { IDD = IDD_PROPPAGE_TEST_OCX_PARAMENT_ARRAY };
		// NOTE - ClassWizard will add data members here.
		//    DO NOT EDIT what you see in these blocks of generated code !
	//}}AFX_DATA

// Implementation
protected:
	virtual void DoDataExchange(CDataExchange* pDX);    // DDX/DDV support

// Message maps
protected:
	//{{AFX_MSG(CTest_ocx_parament_arrayPropPage)
		// NOTE - ClassWizard will add and remove member functions here.
		//    DO NOT EDIT what you see in these blocks of generated code !
	//}}AFX_MSG
	DECLARE_MESSAGE_MAP()

};

//{{AFX_INSERT_LOCATION}}
// Microsoft Visual C++ will insert additional declarations immediately before the previous line.

#endif // !defined(AFX_TEST_OCX_PARAMENT_ARRAYPPG_H__C1B1CFB3_A9D3_4965_9F36_10614194278D__INCLUDED)
