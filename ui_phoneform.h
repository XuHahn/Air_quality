/********************************************************************************
** Form generated from reading UI file 'phoneform.ui'
**
** Created by: Qt User Interface Compiler version 5.14.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_PHONEFORM_H
#define UI_PHONEFORM_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_PhoneForm
{
public:
    QLabel *label;
    QPushButton *pushButton;
    QLabel *label_2;
    QLabel *label_3;
    QLabel *label_4;

    void setupUi(QWidget *PhoneForm)
    {
        if (PhoneForm->objectName().isEmpty())
            PhoneForm->setObjectName(QString::fromUtf8("PhoneForm"));
        PhoneForm->resize(286, 427);
        label = new QLabel(PhoneForm);
        label->setObjectName(QString::fromUtf8("label"));
        label->setGeometry(QRect(90, 20, 81, 71));
        label->setStyleSheet(QString::fromUtf8("border-image: url(:/ui_img/ui_img/\347\224\265\350\257\235.png);"));
        pushButton = new QPushButton(PhoneForm);
        pushButton->setObjectName(QString::fromUtf8("pushButton"));
        pushButton->setGeometry(QRect(60, 240, 171, 61));
        label_2 = new QLabel(PhoneForm);
        label_2->setObjectName(QString::fromUtf8("label_2"));
        label_2->setGeometry(QRect(10, 140, 261, 61));
        label_3 = new QLabel(PhoneForm);
        label_3->setObjectName(QString::fromUtf8("label_3"));
        label_3->setGeometry(QRect(120, 50, 61, 61));
        label_3->setStyleSheet(QString::fromUtf8("border-image: url(/home/xuhahn/QTpro/Air_quality/ui_img/phone2.png);"));
        label_4 = new QLabel(PhoneForm);
        label_4->setObjectName(QString::fromUtf8("label_4"));
        label_4->setGeometry(QRect(-10, 0, 311, 431));
        label_4->setStyleSheet(QString::fromUtf8("border-image: url(/home/xuhahn/QTpro/Air_quality/ui_img/bg1.jpg);"));
        label_4->raise();
        label->raise();
        pushButton->raise();
        label_2->raise();
        label_3->raise();

        retranslateUi(PhoneForm);

        QMetaObject::connectSlotsByName(PhoneForm);
    } // setupUi

    void retranslateUi(QWidget *PhoneForm)
    {
        PhoneForm->setWindowTitle(QCoreApplication::translate("PhoneForm", "Form", nullptr));
        label->setText(QString());
        pushButton->setText(QCoreApplication::translate("PhoneForm", "Change Phone Number", nullptr));
        label_2->setText(QCoreApplication::translate("PhoneForm", "<html><head/><body><p align=\"center\"><span style=\" font-size:26pt;\">133-1823-2888</span></p></body></html>", nullptr));
        label_3->setText(QString());
        label_4->setText(QString());
    } // retranslateUi

};

namespace Ui {
    class PhoneForm: public Ui_PhoneForm {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_PHONEFORM_H
