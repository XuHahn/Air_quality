/********************************************************************************
** Form generated from reading UI file 'thresholddialog.ui'
**
** Created by: Qt User Interface Compiler version 5.14.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_THRESHOLDDIALOG_H
#define UI_THRESHOLDDIALOG_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QLCDNumber>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSlider>

QT_BEGIN_NAMESPACE

class Ui_thresholdDialog
{
public:
    QSlider *horizontalSlider;
    QSlider *horizontalSlider_2;
    QSlider *horizontalSlider_3;
    QLabel *label_2;
    QLabel *label_3;
    QLabel *label_4;
    QLCDNumber *lcdNumber;
    QLCDNumber *lcdNumber_2;
    QLCDNumber *lcdNumber_3;
    QLabel *label;
    QPushButton *pushButton;

    void setupUi(QDialog *thresholdDialog)
    {
        if (thresholdDialog->objectName().isEmpty())
            thresholdDialog->setObjectName(QString::fromUtf8("thresholdDialog"));
        thresholdDialog->resize(527, 352);
        horizontalSlider = new QSlider(thresholdDialog);
        horizontalSlider->setObjectName(QString::fromUtf8("horizontalSlider"));
        horizontalSlider->setGeometry(QRect(190, 90, 160, 16));
        horizontalSlider->setStyleSheet(QString::fromUtf8(""));
        horizontalSlider->setOrientation(Qt::Horizontal);
        horizontalSlider_2 = new QSlider(thresholdDialog);
        horizontalSlider_2->setObjectName(QString::fromUtf8("horizontalSlider_2"));
        horizontalSlider_2->setGeometry(QRect(190, 150, 160, 16));
        horizontalSlider_2->setOrientation(Qt::Horizontal);
        horizontalSlider_3 = new QSlider(thresholdDialog);
        horizontalSlider_3->setObjectName(QString::fromUtf8("horizontalSlider_3"));
        horizontalSlider_3->setGeometry(QRect(190, 210, 160, 16));
        horizontalSlider_3->setOrientation(Qt::Horizontal);
        label_2 = new QLabel(thresholdDialog);
        label_2->setObjectName(QString::fromUtf8("label_2"));
        label_2->setGeometry(QRect(350, 70, 51, 51));
        label_2->setStyleSheet(QString::fromUtf8("border-image: url(/home/xuhahn/QTpro/Air_quality/ui_img/21.png);"));
        label_3 = new QLabel(thresholdDialog);
        label_3->setObjectName(QString::fromUtf8("label_3"));
        label_3->setGeometry(QRect(350, 130, 51, 51));
        label_3->setStyleSheet(QString::fromUtf8("border-image: url(/home/xuhahn/QTpro/Air_quality/ui_img/6.png);"));
        label_4 = new QLabel(thresholdDialog);
        label_4->setObjectName(QString::fromUtf8("label_4"));
        label_4->setGeometry(QRect(350, 190, 51, 51));
        label_4->setStyleSheet(QString::fromUtf8("border-image: url(/home/xuhahn/QTpro/Air_quality/ui_img/\346\271\277\345\272\246.png);"));
        lcdNumber = new QLCDNumber(thresholdDialog);
        lcdNumber->setObjectName(QString::fromUtf8("lcdNumber"));
        lcdNumber->setGeometry(QRect(93, 80, 81, 41));
        lcdNumber_2 = new QLCDNumber(thresholdDialog);
        lcdNumber_2->setObjectName(QString::fromUtf8("lcdNumber_2"));
        lcdNumber_2->setGeometry(QRect(90, 140, 81, 41));
        lcdNumber_3 = new QLCDNumber(thresholdDialog);
        lcdNumber_3->setObjectName(QString::fromUtf8("lcdNumber_3"));
        lcdNumber_3->setGeometry(QRect(90, 200, 81, 41));
        label = new QLabel(thresholdDialog);
        label->setObjectName(QString::fromUtf8("label"));
        label->setGeometry(QRect(-20, -30, 561, 401));
        label->setStyleSheet(QString::fromUtf8("border-image: url(/home/xuhahn/QTpro/Air_quality/ui_img/bg1.jpg);"));
        pushButton = new QPushButton(thresholdDialog);
        pushButton->setObjectName(QString::fromUtf8("pushButton"));
        pushButton->setGeometry(QRect(200, 290, 111, 31));
        label->raise();
        horizontalSlider->raise();
        horizontalSlider_2->raise();
        horizontalSlider_3->raise();
        label_2->raise();
        label_3->raise();
        label_4->raise();
        lcdNumber->raise();
        lcdNumber_2->raise();
        lcdNumber_3->raise();
        pushButton->raise();

        retranslateUi(thresholdDialog);
        QObject::connect(horizontalSlider, SIGNAL(actionTriggered(int)), lcdNumber, SLOT(display(int)));
        QObject::connect(horizontalSlider_2, SIGNAL(actionTriggered(int)), lcdNumber_2, SLOT(display(int)));
        QObject::connect(horizontalSlider_3, SIGNAL(actionTriggered(int)), lcdNumber_3, SLOT(display(int)));

        QMetaObject::connectSlotsByName(thresholdDialog);
    } // setupUi

    void retranslateUi(QDialog *thresholdDialog)
    {
        thresholdDialog->setWindowTitle(QCoreApplication::translate("thresholdDialog", "Dialog", nullptr));
        label_2->setText(QString());
        label_3->setText(QString());
        label_4->setText(QString());
        label->setText(QString());
        pushButton->setText(QCoreApplication::translate("thresholdDialog", "Modify", nullptr));
    } // retranslateUi

};

namespace Ui {
    class thresholdDialog: public Ui_thresholdDialog {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_THRESHOLDDIALOG_H
