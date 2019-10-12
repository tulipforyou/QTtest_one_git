#ifndef DETAIL_H
#define DETAIL_H

#include <QWidget>
#include<QLabel>
#include<QTextEdit>
#include<QLineEdit>
#include<QComboBox>
#include<QGridLayout>

class Detail : public QWidget
{
    Q_OBJECT
public:
    explicit Detail(QWidget *parent = nullptr);
signals:

public slots:
    void setCh();
private:
    QLabel * National;
    QComboBox *NationalComboBox;
    QLabel * Province;
    QComboBox *ProvinceComboBox;
    QLabel *City;
    QLineEdit *CityLineEdit;
    QLabel *Disc;
    QTextEdit *DiscTextEdit;
    QGridLayout *DetailLayout;
};

#endif // DETAIL_H
