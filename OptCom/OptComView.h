
// OptComView.h : COptComView ��Ľӿ�
//

#pragma once


class COptComView : public CView
{
protected: // �������л�����
	COptComView();
	DECLARE_DYNCREATE(COptComView)

// ����
public:
	COptComDoc* GetDocument() const;

// ����
public:

// ��д
public:
	virtual void OnDraw(CDC* pDC);  // ��д�Ի��Ƹ���ͼ
	virtual BOOL PreCreateWindow(CREATESTRUCT& cs);
protected:

// ʵ��
public:
	virtual ~COptComView();
#ifdef _DEBUG
	virtual void AssertValid() const;
	virtual void Dump(CDumpContext& dc) const;
#endif

protected:

// ���ɵ���Ϣӳ�亯��
protected:
	DECLARE_MESSAGE_MAP()
};

#ifndef _DEBUG  // OptComView.cpp �еĵ��԰汾
inline COptComDoc* COptComView::GetDocument() const
   { return reinterpret_cast<COptComDoc*>(m_pDocument); }
#endif

