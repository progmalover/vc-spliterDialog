
#include "DialogToolBar.h" 
#if !defined(AFX_DLGFRAME_H__2FF93C7F_EC99_4A24_B3A5_35B250A801C4__INCLUDED_)
#define AFX_DLGFRAME_H__2FF93C7F_EC99_4A24_B3A5_35B250A801C4__INCLUDED_

#if _MSC_VER > 1000
#pragma once
#endif // _MSC_VER > 1000
// DlgFrame.h : header file
//

/////////////////////////////////////////////////////////////////////////////
// CDlgFrame frame
#include "resource.h"
class CDlgFrame : public CFrameWnd
{
	DECLARE_DYNCREATE(CDlgFrame)
public:
	CDlgFrame();           // protected constructor used by dynamic creation

// Attributes
public:

// Operations
public:

// Overrides
	// ClassWizard generated virtual function overrides
	//{{AFX_VIRTUAL(CDlgFrame)
	//}}AFX_VIRTUAL

// Implementation
public:
	virtual ~CDlgFrame();

	// Generated message map functions
	//{{AFX_MSG(CDlgFrame)
	afx_msg int OnCreate(LPCREATESTRUCT lpCreateStruct);
	//}}AFX_MSG
	DECLARE_MESSAGE_MAP()
protected:
     CDialogToolBar m_tBar;
	 CSplitterWnd m_wndSplitter;
protected:
//	void FloatControlBar(CControlBar* pBar, CPoint point, DWORD dwStyle);
	virtual BOOL OnCreateClient(LPCREATESTRUCT lpcs, CCreateContext* pContext);
public:
	//void EndDrag(void);
	//afx_msg void OnTimer(UINT nIDEvent);
protected:
	virtual BOOL PreCreateWindow(CREATESTRUCT& cs);
};

/////////////////////////////////////////////////////////////////////////////

//{{AFX_INSERT_LOCATION}}
// Microsoft Visual C++ will insert additional declarations immediately before the previous line.

#endif // !defined(AFX_DLGFRAME_H__2FF93C7F_EC99_4A24_B3A5_35B250A801C4__INCLUDED_)
