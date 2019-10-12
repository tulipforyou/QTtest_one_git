#ifndef DIALOG_H
#define DIALOG_H

#include <QDialog>
#include<QFrame>
#include<QStackedWidget>
#include<QPushButton>
#include"baseinfo.h"
#include"detail.h"
#include"contact.h"

class Dialog : public QFrame
{
    Q_OBJECT

public:
    Dialog(QWidget *parent = nullptr);

    QStackedWidget *stack;
    QPushButton *AmendBtn;
    QPushButton *CloseBtn;
    BaseInfo *baseinfo;
    Contact * contact;
    Detail * detail;

    ~Dialog();
};
#endif // DIALOG_H
