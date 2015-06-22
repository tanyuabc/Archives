#ifndef CONTENTWIDGET_H
#define CONTENTWIDGET_H
#include <QLabel>
#include <QStackedWidget>
//////////////////////////////////////////////////////////////////////////
//主界面的内容区域，用于增加功能模块，主要是增加三个功能模块，档案管理，系统管理，图片资源管理
// 用于分页
//
//
//////////////////////////////////////////////////////////////////////////
#include <QWidget>

class contentWidget : public /*QWidget*/ QStackedWidget
{
    Q_OBJECT
public:
    explicit contentWidget(QWidget *parent = 0);
	void  initWidget();		// 初始栈的页面
private:
	QWidget   *m_pArchivesMgr;		// 档案管理页面
	QWidget   *m_pPictureMgr;		// 图片管理
	QWidget	  *m_pOther;			// 其他页面  待定 
signals:
    
public slots:
    
};

#endif // CONTENTWIDGET_H

/*
  主界面上的内容区域
*/
