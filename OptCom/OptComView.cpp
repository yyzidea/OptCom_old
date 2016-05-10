
// OptComView.cpp : COptComView ���ʵ��
//

#include "stdafx.h"
// SHARED_HANDLERS ������ʵ��Ԥ��������ͼ������ɸѡ�������
// ATL ��Ŀ�н��ж��壬�����������Ŀ�����ĵ����롣
#ifndef SHARED_HANDLERS
#include "OptCom.h"
#endif

#include "OptComDoc.h"
#include "OptComView.h"
#include "SerialCom.h"

#ifdef _DEBUG
#define new DEBUG_NEW
#endif


// COptComView

IMPLEMENT_DYNCREATE(COptComView, CView)

BEGIN_MESSAGE_MAP(COptComView, CView)
END_MESSAGE_MAP()

// COptComView ����/����

COptComView::COptComView()
{
	// TODO: �ڴ˴���ӹ������

}

COptComView::~COptComView()
{
}

BOOL COptComView::PreCreateWindow(CREATESTRUCT& cs)
{
	// TODO: �ڴ˴�ͨ���޸�
	//  CREATESTRUCT cs ���޸Ĵ��������ʽ

	return CView::PreCreateWindow(cs);
}

// COptComView ����

void COptComView::OnDraw(CDC* pDC)
{
	COptComDoc* pDoc = GetDocument();
	ASSERT_VALID(pDoc);
	if (!pDoc)
		return;

	// TODO: �ڴ˴�Ϊ����������ӻ��ƴ���
	pDC->TextOutW(20, 20, pDoc->GetPathName());

	HANDLE hMasterCOM = CreateFile(L"\\\\.\\COM3",
		GENERIC_READ | GENERIC_WRITE,
		0,
		0,
		OPEN_EXISTING,
		FILE_ATTRIBUTE_NORMAL,
		0);

	PurgeComm(hMasterCOM, PURGE_TXABORT | PURGE_RXABORT | PURGE_TXCLEAR | PURGE_RXCLEAR);
	

}


// COptComView ���

#ifdef _DEBUG
void COptComView::AssertValid() const
{
	CView::AssertValid();
}

void COptComView::Dump(CDumpContext& dc) const
{
	CView::Dump(dc);
}

COptComDoc* COptComView::GetDocument() const // �ǵ��԰汾��������
{
	ASSERT(m_pDocument->IsKindOf(RUNTIME_CLASS(COptComDoc)));
	return (COptComDoc*)m_pDocument;
}
#endif //_DEBUG


// COptComView ��Ϣ�������
