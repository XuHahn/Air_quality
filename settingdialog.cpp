#include "settingdialog.h"
#include "ui_settingdialog.h"

SettingDialog::SettingDialog(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::SettingDialog)
{
    ui->setupUi(this);
    player.setVolume(50);
    player.setMedia(QUrl::fromLocalFile("/home/xuhahn/QTpro/Air_quality/卓依婷 - 迎春花.mp3"));
}

SettingDialog::~SettingDialog()
{
    delete ui;
}

void SettingDialog::on_pushButton_clicked()
{
    if(get_alarm_bt_flag()==0){
        modify_setting_flag(0);
        ui->pushButton->\
            setStyleSheet("border-image: url(/home/xuhahn/QTpro/Air_quality/ui_img/off.png);");
    }else{
        modify_setting_flag(0);
        ui->pushButton->\
            setStyleSheet("border-image: url(/home/xuhahn/QTpro/Air_quality/ui_img/on.png);");
    }
}

void SettingDialog::on_pushButton_2_clicked()
{
    if(get_music_bt_flag()==0){
        modify_setting_flag(1);
        player.pause();
        ui->pushButton_2->\
            setStyleSheet("border-image: url(/home/xuhahn/QTpro/Air_quality/ui_img/off.png);");
    }else{
        modify_setting_flag(1);
        player.play();
        ui->pushButton_2->\
            setStyleSheet("border-image: url(/home/xuhahn/QTpro/Air_quality/ui_img/on.png);");
    }
}
