// mView.cpp : implementation file
//

#include "stdafx.h"
#include "splitTodialog.h"
#include "mView.h"

#ifdef _DEBUG
#define new DEBUG_NEW
#undef THIS_FILE
static char THIS_FILE[] = __FILE__;
#endif

/////////////////////////////////////////////////////////////////////////////
// CmView

IMPLEMENT_DYNCREATE(CmView, CView)

CmView::CmView()
{
}

CmView::~CmView()
{
}


BEGIN_MESSAGE_MAP(CmView, CView)
	//{{AFX_MSG_MAP(CmView)
		// NOTE - the ClassWizard will add and remove mapping macros here.
	//}}AFX_MSG_MAP
END_MESSAGE_MAP()

/////////////////////////////////////////////////////////////////////////////
// CmView drawing

void CmView::OnDraw(CDC* pDC)
{
	CDocument* pDoc = GetDocument();
	// TODO: add draw code here
}

/////////////////////////////////////////////////////////////////////////////
// CmView diagnostics

#ifdef _DEBUG
void CmView::AssertValid() const
{
	CView::AssertValid();
}

void CmView::Dump(CDumpContext& dc) const
{
	CView::Dump(dc);
}
#endif //_DEBUG

/////////////////////////////////////////////////////////////////////////////
// CmView message handlers
