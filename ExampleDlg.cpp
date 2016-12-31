// ExampleDlg.cpp : implementation file
//

#include "stdafx.h"
#include "splitTodialog.h"
#include "ExampleDlg.h"

#ifdef _DEBUG
#define new DEBUG_NEW
#undef THIS_FILE
static char THIS_FILE[] = __FILE__;
#endif

/////////////////////////////////////////////////////////////////////////////
// CExampleDlg dialog


CExampleDlg::CExampleDlg(CWnd* pParent /*=NULL*/)
	: CDialog(IDD_EXAMPLEDLG, pParent)
{
	//{{AFX_DATA_INIT(CExampleDlg)
		// NOTE: the ClassWizard will add member initialization here
	//}}AFX_DATA_INIT
}


void CExampleDlg::DoDataExchange(CDataExchange* pDX)
{
	CDialog::DoDataExchange(pDX);
	//{{AFX_DATA_MAP(CExampleDlg)
		// NOTE: the ClassWizard will add DDX and DDV calls here
	//}}AFX_DATA_MAP
}


BEGIN_MESSAGE_MAP(CExampleDlg, CDialog)
	//{{AFX_MSG_MAP(CExampleDlg)
	//}}AFX_MSG_MAP
	ON_BN_CLICKED(IDOK, OnBnClickedOk)
END_MESSAGE_MAP()

/////////////////////////////////////////////////////////////////////////////
// CExampleDlg message handlers
#include ".\splitTodialogDlg.h"
#include "exampledlg.h"
void CExampleDlg::OnOK() 
{
	CSplitTodialogDlg a;
	a.DoModal(); 
//	CDialog::OnOK();
}

void CExampleDlg::OnBnClickedOk()
{
	// TODO: 在此添加控件通知处理程序代码
	OnOK();
}
