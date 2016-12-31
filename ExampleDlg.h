#if !defined(AFX_EXAMPLEDLG_H__961551A9_8684_4521_BCA5_71500BC2FE2A__INCLUDED_)
#define AFX_EXAMPLEDLG_H__961551A9_8684_4521_BCA5_71500BC2FE2A__INCLUDED_

#if _MSC_VER > 1000
#pragma once
#endif // _MSC_VER > 1000
// ExampleDlg.h : header file
//
 
/////////////////////////////////////////////////////////////////////////////
// CExampleDlg dialog

class CExampleDlg : public CDialog
{
// Construction
public:
	CExampleDlg(CWnd* pParent = NULL);   // standard constructor

// Dialog Data
	//{{AFX_DATA(CExampleDlg)
	enum { IDD = IDD_EXAMPLEDLG };
		// NOTE: the ClassWizard will add data members here
	//}}AFX_DATA


// Overrides
	// ClassWizard generated virtual function overrides
	//{{AFX_VIRTUAL(CExampleDlg)
	protected:
	virtual void DoDataExchange(CDataExchange* pDX);    // DDX/DDV support
	//}}AFX_VIRTUAL

// Implementation
protected:

	// Generated message map functions
	//{{AFX_MSG(CExampleDlg)
	virtual void OnOK();
	//}}AFX_MSG
	DECLARE_MESSAGE_MAP()
public:
	afx_msg void OnBnClickedOk();
};

//{{AFX_INSERT_LOCATION}}
// Microsoft Visual C++ will insert additional declarations immediately before the previous line.

#endif // !defined(AFX_EXAMPLEDLG_H__961551A9_8684_4521_BCA5_71500BC2FE2A__INCLUDED_)
