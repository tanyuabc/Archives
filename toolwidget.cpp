#include "toolwidget.h"
#include "toolbutton.h"
#include <QLabel>
#include <QHBoxLayout>
#include <QTextCodec>
toolWidget::toolWidget(QWidget *parent) :
    QWidget(parent)
{
	//QTextCodec::setCodecForLocale(QTextCodec::codecForName("UTF-8"));
    toolButton *tbTiJian=new toolButton(":/img/toolWidget/tiJian.png",trUtf8("�������"));
    toolButton *tbMuMa=new toolButton(":/img/toolWidget/muMa.png",trUtf8("ľ���ɱ"));
    toolButton *tbLouDong=new toolButton(":/img/toolWidget/louDong.png",trUtf8("©���޸�"));
    toolButton *tbXiTong=new toolButton(":/img/toolWidget/xiTong.png",tr("ϵͳ�޸�"));
    toolButton *tbQingLi=new toolButton(":/img/toolWidget/qingLi.png",tr("��������"));
    toolButton *tbJiaSu=new toolButton(":/img/toolWidget/jiaSu.png",tr("�Ż�����"));
    toolButton *tbMenZhen=new toolButton(":/img/toolWidget/menZhen.png",tr("��������"));
    toolButton *tbRuanJian=new toolButton(":/img/toolWidget/ruanJian.png",tr("����ܼ�"));
    toolButton *tbGongNeng=new toolButton(":/img/toolWidget/gongNeng.png",tr("���ܴ�ȫ"));

    QLabel *logoLabel=new QLabel;
    QPixmap pixmap(":/img/logo.png");
    logoLabel->setPixmap(pixmap);
    logoLabel->setFixedSize(pixmap.size());
    logoLabel->setCursor(Qt::PointingHandCursor);

    QHBoxLayout *mainLayout=new QHBoxLayout;
    mainLayout->setContentsMargins(5,0,5,0);
    mainLayout->addWidget(tbTiJian);
    mainLayout->addWidget(tbMuMa);
    mainLayout->addWidget(tbLouDong);
    mainLayout->addWidget(tbXiTong);
    mainLayout->addWidget(tbQingLi);
    mainLayout->addWidget(tbJiaSu);
    mainLayout->addWidget(tbMenZhen);
    mainLayout->addWidget(tbRuanJian);
    mainLayout->addWidget(tbGongNeng);
    mainLayout->addStretch();
    //mainLayout->addWidget(logoLabel);
    setLayout(mainLayout);

    setFixedHeight(80);
}
