#include "thresholddialog.h"
#include "ui_thresholddialog.h"
#include <QSlider>
#include <QtDebug>
#include "conf.h"
#include <QMessageBox>
thresholdDialog::thresholdDialog(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::thresholdDialog)
{
    ui->setupUi(this);
    save_num[0]=get_threshold(0);
    save_num[1]=get_threshold(1);
    save_num[2]=get_threshold(2);
    int values[3] = {save_num[0],save_num[1],save_num[2]};

    ui->lcdNumber->display(float(values[0]*0.1));
    ui->lcdNumber_2->display(float(values[1]*0.01));
    ui->lcdNumber_3->display(float(values[2]*0.01));

    ui->horizontalSlider->setRange(-200,500);
    ui->horizontalSlider->setValue(values[0]);
    ui->horizontalSlider->setTickInterval(1);

    ui->horizontalSlider_2->setRange(0,100);
    ui->horizontalSlider_2->setValue(values[1]);
    ui->horizontalSlider_2->setTickInterval(1);

    ui->horizontalSlider_3->setRange(0,100);
    ui->horizontalSlider_3->setValue(values[2]);
    ui->horizontalSlider_3->setTickInterval(1);
}

thresholdDialog::~thresholdDialog()
{
    delete ui;
}


void thresholdDialog::on_horizontalSlider_actionTriggered(int action)
{
    float value = float(ui->horizontalSlider->value()) * 0.1;
    this->save_num[0]=ui->horizontalSlider->value();
    ui->lcdNumber->display(value);
}

void thresholdDialog::on_horizontalSlider_2_actionTriggered(int action)
{
    float value = float(ui->horizontalSlider_2->value()) * 0.01;
    this->save_num[1]=ui->horizontalSlider_2->value();
    ui->lcdNumber_2->display(value);
}

void thresholdDialog::on_horizontalSlider_3_actionTriggered(int action)
{
    float value = float(ui->horizontalSlider_3->value()) * 0.01;
    this->save_num[2]=ui->horizontalSlider_3->value();
    ui->lcdNumber_3->display(value);
}

void thresholdDialog::on_pushButton_clicked()
{
    QFile file("threshold.txt");
    file.open(QIODevice::WriteOnly);
    QTextStream tx(&file);
    tx<<this->save_num[0]<<"\n"\
            <<this->save_num[1]<<"\n"<<this->save_num[2];

    QMessageBox::information(NULL,"warning threshold","warning threshold is changed",\
                    QMessageBox::Accepted,QMessageBox::Accepted);
    file.close();
    this->close();
}
