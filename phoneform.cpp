#include "phoneform.h"
#include "ui_phoneform.h"
#include "modify_phone_numberdialog.h"
#include <QDialog>
#include <QFont>
#include "conf.h"
PhoneForm::PhoneForm(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::PhoneForm)
{
    ui->setupUi(this);
    font.setPointSize(26);
    ui->label_2->setText(get_phone_num());
    ui->label_2->setFont(font);
    ui->label_2->setAlignment(Qt::AlignHCenter);
}

PhoneForm::~PhoneForm()
{
    delete ui;
}

void PhoneForm::on_pushButton_clicked()
{
   modify_phone_numberDialog c;
   c.show();
   if(c.exec() == QDialog::Accepted){
        ui->label_2->setText(get_phone_num());
        ui->label_2->setFont(font);
        ui->label_2->setAlignment(Qt::AlignHCenter);
    }
}
