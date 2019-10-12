#include "detail.h"
#include<QDebug>
Detail::Detail(QWidget *parent) : QWidget(parent)
{
    National=new QLabel(tr("国家："));
    NationalComboBox=new QComboBox;
    NationalComboBox->insertItem(0,tr("中国"));
    NationalComboBox->insertItem(1,tr("美国"));
    Province=new QLabel(tr("省份："));
    ProvinceComboBox=new QComboBox;
    ProvinceComboBox->insertItem(0,tr("江苏省"));
    ProvinceComboBox->insertItem(1,tr("河南省"));
    ProvinceComboBox->insertItem(2,tr("河北省"));
    ProvinceComboBox->insertItem(3,tr("湖南省"));
    ProvinceComboBox->insertItem(4,tr("湖北省"));
    connect(NationalComboBox,SIGNAL(currentIndexChanged(int)),
            this,SLOT(setCh()));
    City=new QLabel(tr("城市："));
    CityLineEdit=new QLineEdit;
    Disc=new QLabel(tr("个人说明："));
    DiscTextEdit=new QTextEdit;
    //布局
    DetailLayout=new QGridLayout(this);
    DetailLayout->setMargin(15);
    DetailLayout->setSpacing(10);
    DetailLayout->addWidget(National,0,0);
    DetailLayout->addWidget(NationalComboBox,0,1);
    DetailLayout->addWidget(Province,1,0);
    DetailLayout->addWidget(ProvinceComboBox,1,1);
    DetailLayout->addWidget(City,2,0);
    DetailLayout->addWidget(CityLineEdit,2,1);
    DetailLayout->addWidget(Disc,3,0);
    DetailLayout->addWidget(DiscTextEdit,3,1);
}

void Detail::setCh()
{
    if(NationalComboBox->currentIndex()==0)
    {
        ProvinceComboBox->clear();
        ProvinceComboBox->insertItem(0,tr("江苏省"));
        ProvinceComboBox->insertItem(1,tr("河南省"));
        ProvinceComboBox->insertItem(2,tr("河北省"));
        ProvinceComboBox->insertItem(3,tr("湖南省"));
        ProvinceComboBox->insertItem(4,tr("湖北省"));
    }
    if(NationalComboBox->currentIndex()==1)
    {
        ProvinceComboBox->clear();
        ProvinceComboBox->insertItem(0,tr("纽约"));
        ProvinceComboBox->insertItem(1,tr("华盛顿"));
        ProvinceComboBox->insertItem(2,tr("加利福尼亚"));
        ProvinceComboBox->insertItem(3,tr("圣马丁"));
        ProvinceComboBox->insertItem(4,tr("西部"));
    }
}
