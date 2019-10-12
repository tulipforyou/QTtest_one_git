#include "baseinfo.h"

BaseInfo::BaseInfo(QWidget *parent) : QWidget(parent)
{
    UserName=new QLabel(tr("用户名："));
    UserNameLineEdit=new QLineEdit;
    Name=new QLabel(tr("姓名："));
    NameLineEdit=new QLineEdit;
    Sex=new QLabel(tr("性别："));
    SexComboBox=new QComboBox;
    SexComboBox->addItem("女");
    SexComboBox->addItem("男");
    Age=new QLabel(tr("年龄："));
    AgeLineEdit=new QLineEdit;
    Department=new QLabel(tr("部门："));
    DepartmetEdit=new QTextEdit;
    Other=new QLabel(tr("备注："));
    Other->setFrameStyle(QFrame::Panel|QFrame::Sunken);
    //左侧布局
    LeftLayout=new  QGridLayout();
    LeftLayout->addWidget(UserName,0,0);
    LeftLayout->addWidget(UserNameLineEdit,0,1);
    LeftLayout->addWidget(Name,1,0);
    LeftLayout->addWidget(NameLineEdit,1,1);
    LeftLayout->addWidget(Sex,2,0);
    LeftLayout->addWidget(SexComboBox,2,1);
    LeftLayout->addWidget(Age,3,0);
    LeftLayout->addWidget(AgeLineEdit,3,1);
    LeftLayout->addWidget(Department,4,0);
    LeftLayout->addWidget(DepartmetEdit,4,1);
    LeftLayout->addWidget(Other,5,0,1,2);
   // LeftLayout->setColumnStretch(0,1);
   // LeftLayout->setColumnStretch(1,3);

    TopRightLayout=new QHBoxLayout();
    TopRightLayout->setSpacing(20);
    RightLayout=new QVBoxLayout();
    RightLayout->setMargin(10);
    HeadLabel=new QLabel(tr("图像："));
    HeadLconLabel=new QLabel;
    QPixmap icon("111.png");
    HeadLconLabel->setPixmap(icon);
    HeadLconLabel->resize(icon.width(),icon.height());
    UpdateHeadBtn=new QPushButton(tr("更新"));
    IntroductionLabel=new QLabel(tr("个人说明"));
    IntroductionTextEdit=new QTextEdit;
    //右侧布局
    TopRightLayout->addWidget(HeadLabel);
    TopRightLayout->addWidget(HeadLconLabel);
    TopRightLayout->addWidget(UpdateHeadBtn);
    RightLayout->addLayout(TopRightLayout);
    RightLayout->addWidget(IntroductionLabel);
    RightLayout->addWidget(IntroductionTextEdit);
    //整体布局
    QGridLayout *mainWindow=new QGridLayout(this);
    mainWindow->setMargin(15);
    mainWindow->setSpacing(10);
    mainWindow->addLayout(LeftLayout,0,0);
    mainWindow->addLayout(RightLayout,0,1);
    mainWindow->setSizeConstraint(QLayout::SetFixedSize);
}
