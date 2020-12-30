#include "mainwindow.h"
#include "ui_mainwindow.h"
#include "phoneform.h"
#include "settingdialog.h"
#include <QUrl>
#include <QDesktopServices>
#include <thresholddialog.h>
#include <QDebug>
#include <QtWebView/QtWebView>
MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);
}

MainWindow::~MainWindow()
{
    delete ui;
}


void MainWindow::on_pushButton_5_clicked()
{
    PhoneForm *phone = new PhoneForm(NULL);
    phone->show();
}

void MainWindow::on_pushButton_clicked()
{
    if(this->flag==0){
        flag = 1;
        ui->pushButton->\
            setStyleSheet("border-image: url(/home/xuhahn/QTpro/Air_quality/ui_img/开关打开.png);");
        ui->lcdNumber->display(23.5);
        ui->lcdNumber_2->display(20);
        ui->lcdNumber_3->display(10);
    }
    else if (this->flag==1){
        flag = 0;
        ui->pushButton->\
                setStyleSheet("border-image: url(/home/xuhahn/QTpro/Air_quality/ui_img/开关.png);");
        ui->lcdNumber->display(0.0);
        ui->lcdNumber_2->display(0.0);
        ui->lcdNumber_3->display(0.0);
    }

}

void MainWindow::on_pushButton_4_clicked()
{
    SettingDialog *setting = new SettingDialog(NULL);
    setting->show();
}

void MainWindow::on_pushButton_3_clicked()
{
    QUrl url("http://www.baidu.com");
    QDesktopServices::openUrl(url);
}


void MainWindow::on_pushButton_6_clicked()
{
    thresholdDialog *t = new thresholdDialog(NULL);
    t->show();
}
