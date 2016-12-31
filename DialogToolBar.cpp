// DialogToolBar.cpp : implementation file
//

#include "stdafx.h"
//#include "ToolDlg.h"
#include  "DialogToolBar.h"
#include  ".\dialogtoolbar.h"
#include  "splitTodialogDlg.h"
#ifdef _DEBUG
#define new DEBUG_NEW
#undef THIS_FILE
static char THIS_FILE[] = __FILE__;
#endif
 
/////////////////////////////////////////////////////////////////////////////
// CDialogToolBar

CDialogToolBar::CDialogToolBar()
{
}

CDialogToolBar::~CDialogToolBar()
{
}

 

BEGIN_MESSAGE_MAP(CDialogToolBar, CToolBar)
	//{{AFX_MSG_MAP(CDialogToolBar)
//	ON_COMMAND(ID_MOVELAST, OnMovelast)
	//}}AFX_MSG_MAP
END_MESSAGE_MAP()

/////////////////////////////////////////////////////////////////////////////
// CDialogToolBar message handlers

bool CDialogToolBar::CreateDlgBar(CWnd *dlg, UINT style, UINT source)
{
   	 
 //	 CDialog  *dlg =(CDialog) CDialog::FromHandle(Dlg->m_hWnd ); 
    
     if(!Create(dlg ,style) ||!LoadToolBar(source))
		return  false;
	  
	 if( dlg->IsKindOf(RUNTIME_CLASS(CDialog))  )
     try{
		CRect rcClientStart;
		CRect rcClientNow;
		dlg->GetClientRect(rcClientStart);
		dlg->RepositionBars(AFX_IDW_CONTROLBAR_FIRST,
                     AFX_IDW_CONTROLBAR_LAST,
                     0, reposQuery, rcClientNow); 

      
		CPoint ptOffset(rcClientNow.left - rcClientStart.left,
                       rcClientNow.top - rcClientStart.top);

		CRect  rcChild;
		//获得子窗口
		CWnd* pwndChild = dlg->GetWindow(GW_CHILD);
		//重新计算子窗口位置
		while (pwndChild)
		{
			 pwndChild->GetWindowRect(rcChild);
			 ScreenToClient(rcChild);
			 rcChild.OffsetRect(ptOffset);
			 pwndChild->MoveWindow(rcChild, FALSE);
			 pwndChild = pwndChild->GetNextWindow();
		} 

		CRect rcWindow;
		dlg->GetWindowRect(rcWindow);
		rcWindow.right += rcClientStart.Width() - rcClientNow.Width();
		rcWindow.bottom += rcClientStart.Height() - rcClientNow.Height();
		dlg->MoveWindow(rcWindow, FALSE); 
		dlg->RepositionBars(AFX_IDW_CONTROLBAR_FIRST,AFX_IDW_CONTROLBAR_LAST,0);
	 }
	 catch(...)
	 {
        // char  ermsg[512];
		// e.GetErrorMessage(ermsg,512);
		 ::AfxMessageBox("Error",MB_OK|MB_ICONWARNING); 
	 }

	 return true;
}

BOOL CDialogToolBar::OnWndMsg(UINT message, WPARAM wParam, LPARAM lParam, LRESULT* pResult)
{
	// TODO: Add your specialized code here and/or call the base class

	BOOL  Ret = CWnd::OnWndMsg(message, wParam, lParam, pResult);

	if(message == WM_LBUTTONDOWN)
	{
		if(IsFloating())
		{
			 CSplitTodialogDlg *pDlg = (CSplitTodialogDlg *)AfxGetMainWnd();
		     pDlg->DlgFrame->RecalcLayout();
		}
	}

	return Ret;
}
