#if !defined(AFX_MVIEW_H__417DAB55_4B45_4626_859D_3800D79690C8__INCLUDED_)
#define AFX_MVIEW_H__417DAB55_4B45_4626_859D_3800D79690C8__INCLUDED_

#if _MSC_VER > 1000
#pragma once
#endif // _MSC_VER > 1000
// mView.h : header file
//

/////////////////////////////////////////////////////////////////////////////
// CmView view

class CmView : public CView
{
public:
	CmView();           // protected constructor used by dynamic creation
	DECLARE_DYNCREATE(CmView)

// Attributes
public:

// Operations
public:

// Overrides
	// ClassWizard generated virtual function overrides
	//{{AFX_VIRTUAL(CmView)
	protected:
	virtual void OnDraw(CDC* pDC);      // overridden to draw this view
	//}}AFX_VIRTUAL

// Implementation
public:
	virtual ~CmView();
#ifdef _DEBUG
	virtual void AssertValid() const;
	virtual void Dump(CDumpContext& dc) const;
#endif

	// Generated message map functions
protected:
	//{{AFX_MSG(CmView)
		// NOTE - the ClassWizard will add and remove member functions here.
	//}}AFX_MSG
	DECLARE_MESSAGE_MAP()
};

/////////////////////////////////////////////////////////////////////////////

//{{AFX_INSERT_LOCATION}}
// Microsoft Visual C++ will insert additional declarations immediately before the previous line.

#endif // !defined(AFX_MVIEW_H__417DAB55_4B45_4626_859D_3800D79690C8__INCLUDED_)
