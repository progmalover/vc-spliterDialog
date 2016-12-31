// splitTodialog.h : main header file for the SPLITTODIALOG application
//

#if !defined(AFX_SPLITTODIALOG_H__A14F5C2D_A06E_419B_A8A7_33BFAAA70140__INCLUDED_)
#define AFX_SPLITTODIALOG_H__A14F5C2D_A06E_419B_A8A7_33BFAAA70140__INCLUDED_

#if _MSC_VER > 1000
#pragma once
#endif // _MSC_VER > 1000

#ifndef __AFXWIN_H__
	#error include 'stdafx.h' before including this file for PCH
#endif

#include "resource.h"		// main symbols
#define __DLGBAR
/////////////////////////////////////////////////////////////////////////////
// CSplitTodialogApp:
// See splitTodialog.cpp for the implementation of this class
//

class CSplitTodialogApp : public CWinApp
{
public:
	CSplitTodialogApp();

// Overrides
	// ClassWizard generated virtual function overrides
	//{{AFX_VIRTUAL(CSplitTodialogApp)
	public:
	virtual BOOL InitInstance();
	//}}AFX_VIRTUAL

// Implementation

	//{{AFX_MSG(CSplitTodialogApp)
		// NOTE - the ClassWizard will add and remove member functions here.
		//    DO NOT EDIT what you see in these blocks of generated code !
	//}}AFX_MSG
	DECLARE_MESSAGE_MAP()
};


/////////////////////////////////////////////////////////////////////////////

//{{AFX_INSERT_LOCATION}}
// Microsoft Visual C++ will insert additional declarations immediately before the previous line.

#endif // !defined(AFX_SPLITTODIALOG_H__A14F5C2D_A06E_419B_A8A7_33BFAAA70140__INCLUDED_)
