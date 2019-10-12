#ifndef BASEINFO_H
#define BASEINFO_H

#include <QWidget>
#include<QLabel>
#include<QLineEdit>
#include<QComboBox>//复选框
#include<QTextEdit>
#include<QGridLayout>
#include<QPushButton>

class BaseInfo : public QWidget
{
    Q_OBJECT
public:
    explicit BaseInfo(QWidget *parent = nullptr);

signals:

public slots:

private:
    QLabel *UserName;//用户名
    QLabel *Name;//姓名
    QLabel *Sex;
    QLabel *Age;
    QLabel *Department;//部门
    QLabel *Other;//备注
    QLineEdit *UserNameLineEdit;
    QLineEdit *NameLineEdit;
    QComboBox *SexComboBox;
    QTextEdit *DepartmetEdit;
    QLineEdit *AgeLineEdit;
    QGridLayout *LeftLayout;

    QLabel *HeadLabel;
    QLabel *HeadLconLabel;
    QPushButton *UpdateHeadBtn;
    QHBoxLayout *TopRightLayout;
    QLabel * IntroductionLabel;
    QTextEdit *IntroductionTextEdit;
    QVBoxLayout *RightLayout;

};

#endif // BASEINFO_H
