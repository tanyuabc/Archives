#ifndef CONTENTWIDGET_H
#define CONTENTWIDGET_H
#include <QLabel>
#include <QStackedWidget>
//////////////////////////////////////////////////////////////////////////
//����������������������ӹ���ģ�飬��Ҫ��������������ģ�飬��������ϵͳ����ͼƬ��Դ����
// ���ڷ�ҳ
//
//
//////////////////////////////////////////////////////////////////////////
#include <QWidget>

class contentWidget : public /*QWidget*/ QStackedWidget
{
    Q_OBJECT
public:
    explicit contentWidget(QWidget *parent = 0);
	void  initWidget();		// ��ʼջ��ҳ��
private:
	QWidget   *m_pArchivesMgr;		// ��������ҳ��
	QWidget   *m_pPictureMgr;		// ͼƬ����
	QWidget	  *m_pOther;			// ����ҳ��  ���� 
signals:
    
public slots:
    
};

#endif // CONTENTWIDGET_H

/*
  �������ϵ���������
*/
