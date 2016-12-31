// mFormView.cpp : implementation file
//

#include "stdafx.h"
#include "splitTodialog.h"
#include "mFormView.h"
#include ".\mformview.h"

#ifdef _DEBUG
#define new DEBUG_NEW
#undef THIS_FILE
static char THIS_FILE[] = __FILE__;
#endif

/////////////////////////////////////////////////////////////////////////////
// CmFormView

IMPLEMENT_DYNCREATE(CmFormView, CFormView)

CmFormView::CmFormView()
: CFormView(IDD_EXAMPLEDLG)
{
	//{{AFX_DATA_INIT(CmFormView)
		// NOTE: the ClassWizard will add member initialization here
	//}}AFX_DATA_INIT
    m_lpszTemplateName  = MAKEINTRESOURCE(IDD_EXAMPLEDLG);
}

CmFormView::~CmFormView()
{
}

void CmFormView::DoDataExchange(CDataExchange* pDX)
{
	CFormView::DoDataExchange(pDX);
	//{{AFX_DATA_MAP(CmFormView)
		// NOTE: the ClassWizard will add DDX and DDV calls here
	//}}AFX_DATA_MAP
}


BEGIN_MESSAGE_MAP(CmFormView, CFormView)
	//{{AFX_MSG_MAP(CmFormView)

	//}}AFX_MSG_MAP
END_MESSAGE_MAP()

/////////////////////////////////////////////////////////////////////////////
// CmFormView diagnostics

#ifdef _DEBUG
void CmFormView::AssertValid() const
{
	CFormView::AssertValid();
}

void CmFormView::Dump(CDumpContext& dc) const
{
	CFormView::Dump(dc);
}
#endif //_DEBUG

/////////////////////////////////////////////////////////////////////////////
// CmFormView message handlers


LRESULT CmFormView::WindowProc(UINT message, WPARAM wParam, LPARAM lParam)
{
	// TODO: Add your specialized code here and/or call the base class

	return CFormView::WindowProc(message, wParam, lParam);
}

BOOL CmFormView::OnWndMsg(UINT message, WPARAM wParam, LPARAM lParam, LRESULT* pResult)
{
	// TODO: Add your specialized code here and/or call the base class

	return CFormView::OnWndMsg(message, wParam, lParam, pResult);
}
