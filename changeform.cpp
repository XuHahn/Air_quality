#include "changeform.h"
#include "ui_changeform.h"

changeForm::changeForm(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::changeForm)
{
    ui->setupUi(this);
}

changeForm::~changeForm()
{
    delete ui;
}
