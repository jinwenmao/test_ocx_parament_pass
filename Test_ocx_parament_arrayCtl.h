#if !defined(AFX_TEST_OCX_PARAMENT_ARRAYCTL_H__5100C39B_5FC0_416D_95DB_76378601063B__INCLUDED_)
#define AFX_TEST_OCX_PARAMENT_ARRAYCTL_H__5100C39B_5FC0_416D_95DB_76378601063B__INCLUDED_

#if _MSC_VER > 1000
#pragma once
#endif // _MSC_VER > 1000

// Test_ocx_parament_arrayCtl.h : Declaration of the CTest_ocx_parament_arrayCtrl ActiveX Control class.

/////////////////////////////////////////////////////////////////////////////
// CTest_ocx_parament_arrayCtrl : See Test_ocx_parament_arrayCtl.cpp for implementation.

class CTest_ocx_parament_arrayCtrl : public COleControl
{
	DECLARE_DYNCREATE(CTest_ocx_parament_arrayCtrl)

// Constructor
public:
	CTest_ocx_parament_arrayCtrl();

// Overrides
	// ClassWizard generated virtual function overrides
	//{{AFX_VIRTUAL(CTest_ocx_parament_arrayCtrl)
	public:
	virtual void OnDraw(CDC* pdc, const CRect& rcBounds, const CRect& rcInvalid);
	virtual void DoPropExchange(CPropExchange* pPX);
	virtual void OnResetState();
	//}}AFX_VIRTUAL

// Implementation
protected:
	~CTest_ocx_parament_arrayCtrl();

	DECLARE_OLECREATE_EX(CTest_ocx_parament_arrayCtrl)    // Class factory and guid
	DECLARE_OLETYPELIB(CTest_ocx_parament_arrayCtrl)      // GetTypeInfo
	DECLARE_PROPPAGEIDS(CTest_ocx_parament_arrayCtrl)     // Property page IDs
	DECLARE_OLECTLTYPE(CTest_ocx_parament_arrayCtrl)		// Type name and misc status

// Message maps
	//{{AFX_MSG(CTest_ocx_parament_arrayCtrl)
		// NOTE - ClassWizard will add and remove member functions here.
		//    DO NOT EDIT what you see in these blocks of generated code !
	//}}AFX_MSG
	DECLARE_MESSAGE_MAP()

// Dispatch maps
	//{{AFX_DISPATCH(CTest_ocx_parament_arrayCtrl)
	afx_msg long Tests1(long FAR* t1);
	afx_msg long TestVar(VARIANT FAR* var);
	afx_msg long testSendVar(VARIANT FAR* sendv);
	//}}AFX_DISPATCH
	DECLARE_DISPATCH_MAP()

	afx_msg void AboutBox();

// Event maps
	//{{AFX_EVENT(CTest_ocx_parament_arrayCtrl)
	//}}AFX_EVENT
	DECLARE_EVENT_MAP()

// Dispatch and event IDs
public:
	enum {
	//{{AFX_DISP_ID(CTest_ocx_parament_arrayCtrl)
	dispidTests1 = 1L,
	dispidTestVar = 2L,
	dispidTestSendVar = 3L,
	//}}AFX_DISP_ID
	};
};

//{{AFX_INSERT_LOCATION}}
// Microsoft Visual C++ will insert additional declarations immediately before the previous line.

#endif // !defined(AFX_TEST_OCX_PARAMENT_ARRAYCTL_H__5100C39B_5FC0_416D_95DB_76378601063B__INCLUDED)
