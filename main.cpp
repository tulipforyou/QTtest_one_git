#include "dialog.h"

#include <QApplication>
#include<QTextCodec>
#include<QSplitter>
#include<QListWidget>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    QFont font("AR PL KaitiM GB",12);
    a.setFont(font);
    QSplitter *splitterMain=new QSplitter(Qt::Horizontal);
    splitterMain->setOpaqueResize(true);  //
    QListWidget *list=new QListWidget(splitterMain);
    list->insertItem(0,QObject::tr("基本信息"));
    list->insertItem(1,QObject::tr("练习方式"));
    list->insertItem(2,QObject::tr("详细资料"));
    Dialog *dialog=new Dialog(splitterMain);
    QObject::connect(list,SIGNAL(currentRowChanged(int)),dialog->stack,SLOT(setCurrentIndex(int)));
    splitterMain->setWindowTitle(QObject::tr("修改用户资料"));
    splitterMain->show();

    return a.exec();
}
