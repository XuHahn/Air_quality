/********************************************************************************
** Form generated from reading UI file 'loginform.ui'
**
** Created by: Qt User Interface Compiler version 5.14.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_LOGINFORM_H
#define UI_LOGINFORM_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QFrame>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_loginForm
{
public:
    QPushButton *pushButton;
    QLabel *label_3;
    QFrame *frame;
    QGridLayout *gridLayout;
    QLineEdit *lineEdit_2;
    QLabel *label_2;
    QLabel *label;
    QLineEdit *lineEdit;

    void setupUi(QWidget *loginForm)
    {
        if (loginForm->objectName().isEmpty())
            loginForm->setObjectName(QString::fromUtf8("loginForm"));
        loginForm->resize(309, 475);
        loginForm->setStyleSheet(QString::fromUtf8(""));
        pushButton = new QPushButton(loginForm);
        pushButton->setObjectName(QString::fromUtf8("pushButton"));
        pushButton->setGeometry(QRect(90, 310, 141, 41));
        label_3 = new QLabel(loginForm);
        label_3->setObjectName(QString::fromUtf8("label_3"));
        label_3->setGeometry(QRect(0, -10, 311, 491));
        label_3->setContextMenuPolicy(Qt::PreventContextMenu);
        label_3->setStyleSheet(QString::fromUtf8("border-image: url(/home/xuhahn/QTpro/Air_quality/ui_img/bg.jpg);"));
        frame = new QFrame(loginForm);
        frame->setObjectName(QString::fromUtf8("frame"));
        frame->setGeometry(QRect(40, 130, 241, 141));
        frame->setFrameShape(QFrame::StyledPanel);
        frame->setFrameShadow(QFrame::Raised);
        gridLayout = new QGridLayout(frame);
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        lineEdit_2 = new QLineEdit(frame);
        lineEdit_2->setObjectName(QString::fromUtf8("lineEdit_2"));

        gridLayout->addWidget(lineEdit_2, 1, 1, 1, 1);

        label_2 = new QLabel(frame);
        label_2->setObjectName(QString::fromUtf8("label_2"));

        gridLayout->addWidget(label_2, 1, 0, 1, 1);

        label = new QLabel(frame);
        label->setObjectName(QString::fromUtf8("label"));

        gridLayout->addWidget(label, 0, 0, 1, 1);

        lineEdit = new QLineEdit(frame);
        lineEdit->setObjectName(QString::fromUtf8("lineEdit"));

        gridLayout->addWidget(lineEdit, 0, 1, 1, 1);

        label_3->raise();
        pushButton->raise();
        frame->raise();

        retranslateUi(loginForm);

        QMetaObject::connectSlotsByName(loginForm);
    } // setupUi

    void retranslateUi(QWidget *loginForm)
    {
        loginForm->setWindowTitle(QCoreApplication::translate("loginForm", "Form", nullptr));
        pushButton->setText(QCoreApplication::translate("loginForm", "Login in", nullptr));
        label_3->setText(QString());
        label_2->setText(QCoreApplication::translate("loginForm", "<html><head/><body><p><span style=\" color:#ffffff;\">Password:</span></p></body></html>", nullptr));
        label->setText(QCoreApplication::translate("loginForm", "<html><head/><body><p><span style=\" color:#ffffff;\">Account:</span></p></body></html>", nullptr));
    } // retranslateUi

};

namespace Ui {
    class loginForm: public Ui_loginForm {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_LOGINFORM_H
