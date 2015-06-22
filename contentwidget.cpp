#include "contentwidget.h"
#include <QPalette>
#include <QVBoxLayout>
contentWidget::contentWidget(QWidget *parent) :
    QStackedWidget(parent)
{
	QVBoxLayout *pvBoxLayout = new QVBoxLayout;
	QLabel * mPlabel =NULL;
	mPlabel = new QLabel(QString("填充内容"));
	mPlabel->setText(QString("tanyu"));
	pvBoxLayout->addWidget(mPlabel);
    QPalette palette;
    palette.setBrush(QPalette::Window,QBrush(QColor(250,255,240,150)));
    setPalette(palette);
    setAutoFillBackground(true);
	this->setLayout(pvBoxLayout);

	// 设置当前页面面数
}

void contentWidget::initWidget()
{
	m_pArchivesMgr = new QWidget;
	m_pPictureMgr = new QWidget;
	m_pOther = new QWidget;

	QStackedWidget *stackedWidget = new QStackedWidget;
	stackedWidget->addWidget(m_pArchivesMgr);
	stackedWidget->addWidget(m_pPictureMgr);
	stackedWidget->addWidget(m_pOther);


}
