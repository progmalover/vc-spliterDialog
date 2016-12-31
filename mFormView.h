#if !defined(AFX_MFORMVIEW_H__F9561664_A039_4D77_9E7E_4584C578AF1A__INCLUDED_)
#define AFX_MFORMVIEW_H__F9561664_A039_4D77_9E7E_4584C578AF1A__INCLUDED_

#if _MSC_VER > 1000
#pragma once
#endif // _MSC_VER > 1000
// mFormView.h : header file
//

/////////////////////////////////////////////////////////////////////////////
// CmFormView form view

#ifndef __AFXEXT_H__
#include <afxext.h>
#endif

class CmFormView : public CFormView
{
public:
	CmFormView();           // protected constructor used by dynamic creation
	DECLARE_DYNCREATE(CmFormView)

// Form Data
public:
	//{{AFX_DATA(CmFormView)
	enum { IDD = IDD_EXAMPLEDLG  };
		// NOTE: the ClassWizard will add data members here
	//}}AFX_DATA

// Attributes
public:

// Operations
public:

// Overrides
	// ClassWizard generated virtual function overrides
	//{{AFX_VIRTUAL(CmFormView)
	protected:
	virtual void DoDataExchange(CDataExchange* pDX);    // DDX/DDV support
	//}}AFX_VIRTUAL

// Implementation
public:
	virtual ~CmFormView();
#ifdef _DEBUG
	virtual void AssertValid() const;
	virtual void Dump(CDumpContext& dc) const;
#endif

	// Generated message map functions
	//{{AFX_MSG(CmFormView)
//	afx_msg int OnCreate(LPCREATESTRUCT lpCreateStruct);
	//}}AFX_MSG
	DECLARE_MESSAGE_MAP()
protected:
	virtual LRESULT WindowProc(UINT message, WPARAM wParam, LPARAM lParam);
	virtual BOOL OnWndMsg(UINT message, WPARAM wParam, LPARAM lParam, LRESULT* pResult);
};

/////////////////////////////////////////////////////////////////////////////

//{{AFX_INSERT_LOCATION}}
// Microsoft Visual C++ will insert additional declarations immediately before the previous line.

#endif // !defined(AFX_MFORMVIEW_H__F9561664_A039_4D77_9E7E_4584C578AF1A__INCLUDED_)
