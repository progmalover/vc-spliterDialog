// splitTodialogDlg.cpp : implementation file
//

#include "stdafx.h"
#include "splitTodialog.h"
#include "splitTodialogDlg.h"

#ifdef _DEBUG
#define new DEBUG_NEW
#undef THIS_FILE
static char THIS_FILE[] = __FILE__;
#endif

/////////////////////////////////////////////////////////////////////////////
// CAboutDlg dialog used for App About

class CAboutDlg : public CDialog
{
public:
	CAboutDlg();

// Dialog Data
	//{{AFX_DATA(CAboutDlg)
	enum { IDD = IDD_ABOUTBOX };
	//}}AFX_DATA

	// ClassWizard generated virtual function overrides
	//{{AFX_VIRTUAL(CAboutDlg)
	protected:
	virtual void DoDataExchange(CDataExchange* pDX);    // DDX/DDV support
	//}}AFX_VIRTUAL

// Implementation
protected:
	//{{AFX_MSG(CAboutDlg)
	//}}AFX_MSG
	DECLARE_MESSAGE_MAP()
};

CAboutDlg::CAboutDlg() : CDialog(CAboutDlg::IDD)
{
	//{{AFX_DATA_INIT(CAboutDlg)
	//}}AFX_DATA_INIT
 
}

void CAboutDlg::DoDataExchange(CDataExchange* pDX)
{
	CDialog::DoDataExchange(pDX);
	//{{AFX_DATA_MAP(CAboutDlg)
	//}}AFX_DATA_MAP
}

BEGIN_MESSAGE_MAP(CAboutDlg, CDialog)
	//{{AFX_MSG_MAP(CAboutDlg)
		// No message handlers
	//}}AFX_MSG_MAP
END_MESSAGE_MAP()

/////////////////////////////////////////////////////////////////////////////
// CSplitTodialogDlg dialog

CSplitTodialogDlg::CSplitTodialogDlg(CWnd* pParent /*=NULL*/)
	: CDialog(CSplitTodialogDlg::IDD, pParent)
{
	//{{AFX_DATA_INIT(CSplitTodialogDlg)
		// NOTE: the ClassWizard will add member initialization here
	//}}AFX_DATA_INIT
	// Note that LoadIcon does not require a subsequent DestroyIcon in Win32
	m_hIcon = AfxGetApp()->LoadIcon(IDR_MAINFRAME);
		DlgFrame = NULL;
}

void CSplitTodialogDlg::DoDataExchange(CDataExchange* pDX)
{
	CDialog::DoDataExchange(pDX);
	//{{AFX_DATA_MAP(CSplitTodialogDlg)
		// NOTE: the ClassWizard will add DDX and DDV calls here
	//}}AFX_DATA_MAP
}

BEGIN_MESSAGE_MAP(CSplitTodialogDlg, CDialog)
	//{{AFX_MSG_MAP(CSplitTodialogDlg)
	ON_WM_SYSCOMMAND()
	ON_WM_PAINT()
	ON_WM_QUERYDRAGICON()
	ON_WM_SIZE()
	ON_WM_DESTROY()
	//}}AFX_MSG_MAP
END_MESSAGE_MAP()

/////////////////////////////////////////////////////////////////////////////
// CSplitTodialogDlg message handlers

BOOL CSplitTodialogDlg::OnInitDialog()
{
	CDialog::OnInitDialog();

	// Add "About..." menu item to system menu.

	// IDM_ABOUTBOX must be in the system command range.
	ASSERT((IDM_ABOUTBOX & 0xFFF0) == IDM_ABOUTBOX);
	ASSERT(IDM_ABOUTBOX < 0xF000);

	CMenu* pSysMenu = GetSystemMenu(FALSE);
	if (pSysMenu != NULL)
	{
		CString strAboutMenu;
		strAboutMenu.LoadString(IDS_ABOUTBOX);
		if (!strAboutMenu.IsEmpty())
		{
			pSysMenu->AppendMenu(MF_SEPARATOR);
			pSysMenu->AppendMenu(MF_STRING, IDM_ABOUTBOX, strAboutMenu);
		}
	}

	// Set the icon for this dialog.  The framework does this automatically
	//  when the application's main window is not a dialog
	SetIcon(m_hIcon, TRUE);			// Set big icon
	SetIcon(m_hIcon, FALSE);		// Set small icon
	
	// TODO: Add extra initialization here

	CRect rc;
	GetClientRect(rc);
	
#ifdef __DLGBAR	
	rc.top  = 40;
	if(!m_tBar.CreateDlgBar(this ,WS_CHILD|WS_VISIBLE|
		   CBRS_TOP|CBRS_SIZE_DYNAMIC,IDR_MAINTLBAR) )
    {
	   AfxMessageBox("Error Create DlgBar!",MB_ICONWARNING|MB_OK);
	   return FALSE;
	} 
#endif
	
    DlgFrame = new CDlgFrame();
	DlgFrame->Create(NULL,"DlgFrame",WS_CHILD|WS_VISIBLE,rc,this,MAKEINTRESOURCE(IDR_MAINFRAME)); 
	return TRUE;  // return TRUE  unless you set the focus to a control
}

void CSplitTodialogDlg::OnSysCommand(UINT nID, LPARAM lParam)
{
	if ((nID & 0xFFF0) == IDM_ABOUTBOX)
	{
		CAboutDlg dlgAbout;
		dlgAbout.DoModal();
	}
	else
	{
		CDialog::OnSysCommand(nID, lParam);
	}
}

// If you add a minimize button to your dialog, you will need the code below
//  to draw the icon.  For MFC applications using the document/view model,
//  this is automatically done for you by the framework.

void CSplitTodialogDlg::OnPaint() 
{
	if (IsIconic())
	{
		CPaintDC dc(this); // device context for painting

		SendMessage(WM_ICONERASEBKGND, (WPARAM) dc.GetSafeHdc(), 0);

		// Center icon in client rectangle
		int cxIcon = GetSystemMetrics(SM_CXICON);
		int cyIcon = GetSystemMetrics(SM_CYICON);
		CRect rect;
		GetClientRect(&rect);
		int x = (rect.Width() - cxIcon + 1) / 2;
		int y = (rect.Height() - cyIcon + 1) / 2;

		// Draw the icon
		dc.DrawIcon(x, y, m_hIcon);
	}
	else
	{
		CDialog::OnPaint();
	}
#ifdef __DLGBAR
 m_tBar.Invalidate(TRUE);  
#endif
}

// The system calls this to obtain the cursor to display while the user drags
//  the minimized window.
HCURSOR CSplitTodialogDlg::OnQueryDragIcon()
{
	return (HCURSOR) m_hIcon;
}

void CSplitTodialogDlg::OnSize(UINT nType, int cx, int cy) 
{
	CDialog::OnSize(nType, cx, cy);
	CRect rec;
	GetClientRect(rec);
#ifdef __DLGBAR
	rec.top  = 40;
#endif
	if(DlgFrame)
	if(IsWindow(DlgFrame->m_hWnd ))
	  DlgFrame->MoveWindow(rec,TRUE); 
	// TODO: Add your message handler code here
#ifdef __DLGBAR
 if(IsWindow(m_tBar.m_hWnd ))
  m_tBar.OnUpdateCmdUI((CFrameWnd *)this,FALSE);  
#endif	
}

void CSplitTodialogDlg::OnDestroy() 
{

   if(DlgFrame&&IsWindow(DlgFrame->m_hWnd) )
	  DlgFrame->CloseWindow(); 
	  
   if(DlgFrame)
	  delete DlgFrame;


   CDialog::OnDestroy();
	
	// TODO: Add your message handler code here
	
}
