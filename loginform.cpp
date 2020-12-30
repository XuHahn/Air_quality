#include "loginform.h"
#include "ui_loginform.h"
#include <QString>
#include <QMessageBox>
#include <QDialog>
#include <QPalette>
#include <QPainter>
#include <QStyleOption>
#include "conf.h"
loginForm::loginForm(QWidget *parent):
    QDialog(parent),
    ui(new Ui::loginForm)
{
    ui->setupUi(this);
    ui->lineEdit_2->setEchoMode(QLineEdit::Password);
}

loginForm::~loginForm()
{
    delete ui;
}

void loginForm::on_pushButton_clicked()
{
    QString account = ui->lineEdit->text();
    QString pwd = ui->lineEdit_2->text();
    if(account == USER_ACCOUNT && pwd == USER_PASSWORD){
        this->login_status = 1;
        accept();
    }else {
        QMessageBox::information(NULL,"WARNING!","Account or password error!");
        this->login_status = 0;
}
    ui->lineEdit->setText("");
    ui->lineEdit_2->setText("");
}
void loginForm::paintEvent(QPaintEvent *event){
    QStyleOption opt;
    opt.init(this);
    QPainter p(this);
    style()->drawPrimitive(QStyle::PE_Widget, &opt, &p, this);
    QWidget::paintEvent(event);
}
