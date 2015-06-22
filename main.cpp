#include <QApplication>
#include "mainwidget.h"
#include <QTextCodec>


//#if _MSC_VER >= 1600
#pragma execution_character_set("utf-8")
//#endif


#include "titlewidget.h"
int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
	
	//QTextCodec *codec = QTextCodec::codecForName("UTF-8");

    //QTextCodec::setCodecForLocale(codec);

	//codec->setCodecForLocale(codec);
	//QTextCodec::setCodecForLocale(QTextCodec::codecForName("GBK"));

	QTextCodec *codec = QTextCodec::codecForName("GBK"); 
	QTextCodec::setCodecForLocale(codec); 


    QPalette palette;
    palette.setColor(QPalette::WindowText,Qt::white);
  //a.setPalette(palette);

  //  a.setFont(QFont());
    mainWidget w;

  //  sysButtonWidget w;
  //  titleWidget w;
    w.show();
    
    return a.exec();
}
