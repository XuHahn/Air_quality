/********************************************************************************
** Form generated from reading UI file 'modify_phone_numberdialog.ui'
**
** Created by: Qt User Interface Compiler version 5.14.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MODIFY_PHONE_NUMBERDIALOG_H
#define UI_MODIFY_PHONE_NUMBERDIALOG_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QDialogButtonBox>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>

QT_BEGIN_NAMESPACE

class Ui_modify_phone_numberDialog
{
public:
    QDialogButtonBox *buttonBox;
    QLabel *label;
    QLineEdit *lineEdit;

    void setupUi(QDialog *modify_phone_numberDialog)
    {
        if (modify_phone_numberDialog->objectName().isEmpty())
            modify_phone_numberDialog->setObjectName(QString::fromUtf8("modify_phone_numberDialog"));
        modify_phone_numberDialog->resize(422, 290);
        buttonBox = new QDialogButtonBox(modify_phone_numberDialog);
        buttonBox->setObjectName(QString::fromUtf8("buttonBox"));
        buttonBox->setGeometry(QRect(100, 240, 301, 32));
        buttonBox->setOrientation(Qt::Horizontal);
        buttonBox->setStandardButtons(QDialogButtonBox::Cancel|QDialogButtonBox::Ok);
        label = new QLabel(modify_phone_numberDialog);
        label->setObjectName(QString::fromUtf8("label"));
        label->setGeometry(QRect(-10, -20, 441, 321));
        label->setStyleSheet(QString::fromUtf8("border-image: url(/home/xuhahn/QTpro/Air_quality/ui_img/bg2.jpg);"));
        lineEdit = new QLineEdit(modify_phone_numberDialog);
        lineEdit->setObjectName(QString::fromUtf8("lineEdit"));
        lineEdit->setGeometry(QRect(60, 100, 291, 81));
        label->raise();
        buttonBox->raise();
        lineEdit->raise();

        retranslateUi(modify_phone_numberDialog);
        QObject::connect(buttonBox, SIGNAL(accepted()), modify_phone_numberDialog, SLOT(accept()));
        QObject::connect(buttonBox, SIGNAL(rejected()), modify_phone_numberDialog, SLOT(reject()));

        QMetaObject::connectSlotsByName(modify_phone_numberDialog);
    } // setupUi

    void retranslateUi(QDialog *modify_phone_numberDialog)
    {
        modify_phone_numberDialog->setWindowTitle(QCoreApplication::translate("modify_phone_numberDialog", "Dialog", nullptr));
        label->setText(QString());
    } // retranslateUi

};

namespace Ui {
    class modify_phone_numberDialog: public Ui_modify_phone_numberDialog {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MODIFY_PHONE_NUMBERDIALOG_H
