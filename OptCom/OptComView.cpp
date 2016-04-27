
// OptComView.cpp : COptComView 类的实现
//

#include "stdafx.h"
// SHARED_HANDLERS 可以在实现预览、缩略图和搜索筛选器句柄的
// ATL 项目中进行定义，并允许与该项目共享文档代码。
#ifndef SHARED_HANDLERS
#include "OptCom.h"
#endif

#include "OptComDoc.h"
#include "OptComView.h"

#ifdef _DEBUG
#define new DEBUG_NEW
#endif


// COptComView

IMPLEMENT_DYNCREATE(COptComView, CView)

BEGIN_MESSAGE_MAP(COptComView, CView)
END_MESSAGE_MAP()

// COptComView 构造/析构

COptComView::COptComView()
{
	// TODO: 在此处添加构造代码

}

COptComView::~COptComView()
{
}

BOOL COptComView::PreCreateWindow(CREATESTRUCT& cs)
{
	// TODO: 在此处通过修改
	//  CREATESTRUCT cs 来修改窗口类或样式

	return CView::PreCreateWindow(cs);
}

// COptComView 绘制

void COptComView::OnDraw(CDC* /*pDC*/)
{
	COptComDoc* pDoc = GetDocument();
	ASSERT_VALID(pDoc);
	if (!pDoc)
		return;

	// TODO: 在此处为本机数据添加绘制代码
}


// COptComView 诊断

#ifdef _DEBUG
void COptComView::AssertValid() const
{
	CView::AssertValid();
}

void COptComView::Dump(CDumpContext& dc) const
{
	CView::Dump(dc);
}

COptComDoc* COptComView::GetDocument() const // 非调试版本是内联的
{
	ASSERT(m_pDocument->IsKindOf(RUNTIME_CLASS(COptComDoc)));
	return (COptComDoc*)m_pDocument;
}
#endif //_DEBUG


// COptComView 消息处理程序
