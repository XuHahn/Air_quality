/********************************************************************************
** Form generated from reading UI file 'changedialog.ui'
**
** Created by: Qt User Interface Compiler version 5.14.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_CHANGEDIALOG_H
#define UI_CHANGEDIALOG_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QDialogButtonBox>
#include <QtWidgets/QLabel>
#include <QtWidgets/QTextEdit>

QT_BEGIN_NAMESPACE

class Ui_changeDialog
{
public:
    QDialogButtonBox *buttonBox;
    QTextEdit *textEdit;
    QLabel *label;
    QLabel *label_2;

    void setupUi(QDialog *changeDialog)
    {
        if (changeDialog->objectName().isEmpty())
            changeDialog->setObjectName(QString::fromUtf8("changeDialog"));
        changeDialog->resize(327, 193);
        buttonBox = new QDialogButtonBox(changeDialog);
        buttonBox->setObjectName(QString::fromUtf8("buttonBox"));
        buttonBox->setGeometry(QRect(10, 150, 301, 32));
        buttonBox->setOrientation(Qt::Horizontal);
        buttonBox->setStandardButtons(QDialogButtonBox::Cancel|QDialogButtonBox::Ok);
        textEdit = new QTextEdit(changeDialog);
        textEdit->setObjectName(QString::fromUtf8("textEdit"));
        textEdit->setGeometry(QRect(40, 70, 241, 41));
        label = new QLabel(changeDialog);
        label->setObjectName(QString::fromUtf8("label"));
        label->setGeometry(QRect(70, 20, 201, 41));
        label_2 = new QLabel(changeDialog);
        label_2->setObjectName(QString::fromUtf8("label_2"));
        label_2->setGeometry(QRect(30, 60, 67, 17));

        retranslateUi(changeDialog);
        QObject::connect(buttonBox, SIGNAL(accepted()), changeDialog, SLOT(accept()));
        QObject::connect(buttonBox, SIGNAL(rejected()), changeDialog, SLOT(reject()));

        QMetaObject::connectSlotsByName(changeDialog);
    } // setupUi

    void retranslateUi(QDialog *changeDialog)
    {
        changeDialog->setWindowTitle(QCoreApplication::translate("changeDialog", "Dialog", nullptr));
        label->setText(QCoreApplication::translate("changeDialog", "Input your phone number", nullptr));
        label_2->setText(QCoreApplication::translate("changeDialog", "TextLabel", nullptr));
    } // retranslateUi

};

namespace Ui {
    class changeDialog: public Ui_changeDialog {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_CHANGEDIALOG_H
