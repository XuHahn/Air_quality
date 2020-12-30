#include "modify_phone_numberdialog.h"
#include "ui_modify_phone_numberdialog.h"
#include "conf.h"
#include "qdebug.h"

modify_phone_numberDialog::modify_phone_numberDialog(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::modify_phone_numberDialog)
{
    ui->setupUi(this);
}

modify_phone_numberDialog::~modify_phone_numberDialog()
{
    delete ui;
}

void modify_phone_numberDialog::on_buttonBox_accepted()
{
    modify_phone_num(ui->lineEdit->text());
}

