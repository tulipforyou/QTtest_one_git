#include "contact.h"

Contact::Contact(QWidget *parent) : QWidget(parent)
{
    Email=new QLabel(tr("电子邮箱:"));
    EmailLineEdit=new QLineEdit;
    Addr=new QLabel(tr("联系地址:"));
    AddrLineEdit=new QLineEdit;
    Code=new QLabel(tr("邮政编码:"));
    CodeLineEdit=new QLineEdit;
    Phone=new QLabel(tr("移动电话:"));
    PhoneLineEdit=new QLineEdit;
    ChockPhone=new QCheckBox(tr("接受留言"));
    Tel=new QLabel(tr("办公电话:"));
    TelLineEdit=new QLineEdit;
    //布局
    ContactLayout=new QGridLayout(this);
    ContactLayout->setMargin(15);
    ContactLayout->setSpacing(10);
    ContactLayout->addWidget(Email,0,0);
    ContactLayout->addWidget(EmailLineEdit,0,1);
    ContactLayout->addWidget(Addr,1,0);
    ContactLayout->addWidget(AddrLineEdit,1,1);
    ContactLayout->addWidget(Code,2,0);
    ContactLayout->addWidget(CodeLineEdit,2,1);
    ContactLayout->addWidget(Phone,3,0);
    ContactLayout->addWidget(PhoneLineEdit,3,1);
    ContactLayout->addWidget(ChockPhone,3,2);
    ContactLayout->addWidget(Tel,4,0);
    ContactLayout->addWidget(TelLineEdit,4,1);
    ContactLayout->setSizeConstraint(QLayout::SetFixedSize);
}
