#ifndef CONTACT_H
#define CONTACT_H

#include <QWidget>
#include<QLabel>
#include<QLineEdit>
#include<QCheckBox>
#include<QGridLayout>

class Contact : public QWidget
{
    Q_OBJECT
public:
    explicit Contact(QWidget *parent = nullptr);

signals:

public slots:

private:
    QLabel *Email;
    QLineEdit *EmailLineEdit;
    QLabel *Addr;
    QLineEdit *AddrLineEdit;
    QLabel *Code;
    QLineEdit *CodeLineEdit;
    QLabel *Phone;
    QCheckBox *ChockPhone;
    QLineEdit *PhoneLineEdit;
    QLabel *Tel;
    QLineEdit *TelLineEdit;
    QGridLayout *ContactLayout;
};

#endif // CONTACT_H
