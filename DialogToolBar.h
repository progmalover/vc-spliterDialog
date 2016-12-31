#include "stdafx.h"
#if !defined(AFX_DIALOGTOOLBAR_H__D3E72FDE_6381_4372_8017_67C47C8130F1__INCLUDED_)
#define AFX_DIALOGTOOLBAR_H__D3E72FDE_6381_4372_8017_67C47C8130F1__INCLUDED_

#if _MSC_VER > 1000
#pragma once
#endif // _MSC_VER > 1000

// DialogToolBar.h : header file
//

/////////////////////////////////////////////////////////////////////////////
// CDialogToolBar window

class CDialogToolBar : public CToolBar
{
// Construction
public:
	CDialogToolBar();

// Attributes
public:

// Operations
public:

// Overrides
	// ClassWizard generated virtual function overrides
	//{{AFX_VIRTUAL(CDialogToolBar)
	//}}AFX_VIRTUAL

// Implementation
public:
	bool CreateDlgBar(CWnd *Dlg,UINT style,UINT source );
	virtual ~CDialogToolBar();

	// Generated message map functions
protected:
	//{{AFX_MSG(CDialogToolBar)

	//}}AFX_MSG

	DECLARE_MESSAGE_MAP()
public:
	void EndDrag(void);
protected:
	virtual BOOL OnWndMsg(UINT message, WPARAM wParam, LPARAM lParam, LRESULT* pResult);
};

/////////////////////////////////////////////////////////////////////////////

//{{AFX_INSERT_LOCATION}}
// Microsoft Visual C++ will insert additional declarations immediately before the previous line.

#endif // !defined(AFX_DIALOGTOOLBAR_H__D3E72FDE_6381_4372_8017_67C47C8130F1__INCLUDED_)
