#include "modify_phone_num_dialog.h"
#include "ui_modify_phone_num_dialog.h"

modify_phone_num_Dialog::modify_phone_num_Dialog(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::modify_phone_num_Dialog)
{
    ui->setupUi(this);
}

modify_phone_num_Dialog::~modify_phone_num_Dialog()
{
    delete ui;
}

void modify_phone_num_Dialog::on_pushButton_clicked()
{
    this->phone_num=ui->textEdit->toPlainText();
    ui->pushButton-
    this->close();
}
