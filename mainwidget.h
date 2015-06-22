#ifndef MAINWIDGET_H
#define MAINWIDGET_H

#include <QWidget>
#include <QStackedWidget>
class mainWidget : public QWidget
{
    Q_OBJECT
    
public:
    mainWidget(QWidget *parent = 0);
    ~mainWidget();

protected:
    void paintEvent(QPaintEvent *);
private:
    QString bkPicName;//�����ڱ���ͼƬ������
    QPoint normalTopLeft;//������ʾ�Ĵ������Ͻ�����
	QStackedWidget   * m_pStackWidget;		// ����������
private slots:
    void showMax();
    void showMin();
    void showSkinWidget();
    void setPicName(QString);
};

#endif // MAINWIDGET_H
