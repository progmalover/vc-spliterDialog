// DlgFrame.cpp : implementation file
//

#include "stdafx.h"
#include "splitTodialog.h"
#include "DlgFrame.h"
#include ".\dlgframe.h"
#include "mView.h"
#include "mFormView.h"
#include <afxext.h>
#ifdef _DEBUG
#define new DEBUG_NEW
#undef THIS_FILE
static char THIS_FILE[] = __FILE__;
#endif
 
/////////////////////////////////////////////////////////////////////////////
// CDlgFrame

IMPLEMENT_DYNCREATE(CDlgFrame, CFrameWnd)

CDlgFrame::CDlgFrame()
{
}

CDlgFrame::~CDlgFrame()
{
	  
}


BEGIN_MESSAGE_MAP(CDlgFrame, CFrameWnd)
	//{{AFX_MSG_MAP(CDlgFrame)
	ON_WM_CREATE()
	//}}AFX_MSG_MAP
	ON_WM_TIMER()
END_MESSAGE_MAP()

/////////////////////////////////////////////////////////////////////////////
// CDlgFrame message handlers

BOOL CDlgFrame::OnCreateClient(LPCREATESTRUCT lpcs, CCreateContext* pContext)
{
	// CG: The following block was added by the Splitter Bar component.
    CCreateContext p;
	p.m_pCurrentDoc  = NULL;
	p.m_pCurrentFrame  = this;
	p.m_pLastView = NULL;
	p.m_pNewDocTemplate = NULL;
	p.m_pNewViewClass = RUNTIME_CLASS(CmFormView);
	{   
		//m_wndSplitter.CreateStatic(this,2,1,
		//	WS_CHILD|WS_VISIBLE,AFX_IDW_PANE_FIRST); 
	    // m_wndSplitter.CreateView(2,1,RUNTIME_CLASS(CmView), CSize(10, 10),&p);
		if (!m_wndSplitter.Create(this,
		                          2, 1,          // TODO: adjust the number of rows, columns
		                          CSize(20, 20), // TODO: adjust the minimum pane size
		                          	&p))
		{
			TRACE0("Failed to create splitter bar ");
			return FALSE;    // failed to create
		} 
	
        

	//	m_wndSplitter.SplitRow(1); 
		return TRUE;
	}
}

int CDlgFrame::OnCreate(LPCREATESTRUCT lpCreateStruct) 
{
	if (CFrameWnd::OnCreate(lpCreateStruct) == -1)
		return -1;
    if(!m_tBar.CreateDlgBar(this ,WS_CHILD|WS_VISIBLE|
		   CBRS_LEFT|CBRS_SIZE_DYNAMIC,IDR_MAINTLBAR) )
    {
	   AfxMessageBox("Error Create DlgBar!",MB_ICONWARNING|MB_OK);
	   return FALSE;
	} 
	m_tBar.EnableDocking(CBRS_ALIGN_ANY   ); 
	EnableDocking(CBRS_ALIGN_ANY);
    DockControlBar(&m_tBar); 
	return 0;
}
BOOL CDlgFrame::PreCreateWindow(CREATESTRUCT& cs)
{
	// TODO: 在此添加专用代码和/或调用基类

	if (cs.lpszClass == NULL)
	{
		 
		cs.lpszClass = AfxRegisterWndClass(
			CS_VREDRAW | CS_HREDRAW,
			::LoadCursor(NULL, IDC_ARROW),
			(HBRUSH) ::GetStockObject(WHITE_BRUSH),
			::LoadIcon(NULL, IDI_APPLICATION));

	}

//	if (cs.style & FWS_ADDTOTITLE)
	//	cs.style |= FWS_PREFIXTITLE;

	//cs.dwExStyle |= WS_EX_CLIENTEDGE;

	return TRUE;
}
