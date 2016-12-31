// splitTodialogDlg.h : header file
//
#include "DlgFrame.h"
#include "DialogToolBar.h"
#if !defined(AFX_SPLITTODIALOGDLG_H__2D2ED67E_7345_4172_A9E0_513F4BB56892__INCLUDED_)
#define AFX_SPLITTODIALOGDLG_H__2D2ED67E_7345_4172_A9E0_513F4BB56892__INCLUDED_

#if _MSC_VER > 1000
#pragma once
#endif // _MSC_VER > 1000

/////////////////////////////////////////////////////////////////////////////
// CSplitTodialogDlg dialog

class CSplitTodialogDlg : public CDialog
{
// Construction
public:
	CSplitTodialogDlg(CWnd* pParent = NULL);	// standard constructor

// Dialog Data
	//{{AFX_DATA(CSplitTodialogDlg)
	enum { IDD = IDD_SPLITTODIALOG_DIALOG };
		// NOTE: the ClassWizard will add data members here
	//}}AFX_DATA

	// ClassWizard generated virtual function overrides
	//{{AFX_VIRTUAL(CSplitTodialogDlg)
	protected:
	virtual void DoDataExchange(CDataExchange* pDX);	// DDX/DDV support
	//}}AFX_VIRTUAL
public:
	CDlgFrame  *DlgFrame;
    CDialogToolBar m_tBar;
protected:
	HICON m_hIcon;
  
	// Generated message map functions
	//{{AFX_MSG(CSplitTodialogDlg)
	virtual BOOL OnInitDialog();
	afx_msg void OnSysCommand(UINT nID, LPARAM lParam);
	afx_msg void OnPaint();
	afx_msg HCURSOR OnQueryDragIcon();
	afx_msg void OnSize(UINT nType, int cx, int cy);
	afx_msg void OnDestroy();
	//}}AFX_MSG
	DECLARE_MESSAGE_MAP()
};

//{{AFX_INSERT_LOCATION}}
// Microsoft Visual C++ will insert additional declarations immediately before the previous line.

#endif // !defined(AFX_SPLITTODIALOGDLG_H__2D2ED67E_7345_4172_A9E0_513F4BB56892__INCLUDED_)
