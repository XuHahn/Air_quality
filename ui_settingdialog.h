/********************************************************************************
** Form generated from reading UI file 'settingdialog.ui'
**
** Created by: Qt User Interface Compiler version 5.14.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_SETTINGDIALOG_H
#define UI_SETTINGDIALOG_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>

QT_BEGIN_NAMESPACE

class Ui_SettingDialog
{
public:
    QLabel *label;
    QPushButton *pushButton;
    QPushButton *pushButton_2;
    QLabel *label_2;
    QLabel *label_3;

    void setupUi(QDialog *SettingDialog)
    {
        if (SettingDialog->objectName().isEmpty())
            SettingDialog->setObjectName(QString::fromUtf8("SettingDialog"));
        SettingDialog->resize(359, 488);
        label = new QLabel(SettingDialog);
        label->setObjectName(QString::fromUtf8("label"));
        label->setGeometry(QRect(-40, 0, 421, 541));
        label->setStyleSheet(QString::fromUtf8("border-image: url(/home/xuhahn/QTpro/Air_quality/ui_img/bg1.jpg);"));
        pushButton = new QPushButton(SettingDialog);
        pushButton->setObjectName(QString::fromUtf8("pushButton"));
        pushButton->setGeometry(QRect(170, 120, 81, 41));
        pushButton->setStyleSheet(QString::fromUtf8("border-image: url(/home/xuhahn/QTpro/Air_quality/ui_img/off.png);"));
        pushButton_2 = new QPushButton(SettingDialog);
        pushButton_2->setObjectName(QString::fromUtf8("pushButton_2"));
        pushButton_2->setGeometry(QRect(170, 190, 81, 41));
        pushButton_2->setStyleSheet(QString::fromUtf8("border-image: url(/home/xuhahn/QTpro/Air_quality/ui_img/off.png);"));
        label_2 = new QLabel(SettingDialog);
        label_2->setObjectName(QString::fromUtf8("label_2"));
        label_2->setGeometry(QRect(90, 110, 81, 61));
        label_3 = new QLabel(SettingDialog);
        label_3->setObjectName(QString::fromUtf8("label_3"));
        label_3->setGeometry(QRect(90, 180, 81, 61));

        retranslateUi(SettingDialog);

        QMetaObject::connectSlotsByName(SettingDialog);
    } // setupUi

    void retranslateUi(QDialog *SettingDialog)
    {
        SettingDialog->setWindowTitle(QCoreApplication::translate("SettingDialog", "Dialog", nullptr));
        label->setText(QString());
        pushButton->setText(QString());
        pushButton_2->setText(QString());
        label_2->setText(QCoreApplication::translate("SettingDialog", "<html><head/><body><p><span style=\" font-size:16pt;\">Alarm:</span></p></body></html>", nullptr));
        label_3->setText(QCoreApplication::translate("SettingDialog", "<html><head/><body><p><span style=\" font-size:16pt;\">Music:</span></p></body></html>", nullptr));
    } // retranslateUi

};

namespace Ui {
    class SettingDialog: public Ui_SettingDialog {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_SETTINGDIALOG_H
