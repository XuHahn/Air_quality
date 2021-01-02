#ifndef SETTINGDIALOG_H
#define SETTINGDIALOG_H

#include <QDialog>
#include "conf.h"
#include <QtMultimedia/QMediaPlayer>
#include <QtMultimedia/QMediaContent>
namespace Ui {
class SettingDialog;
}

class SettingDialog : public QDialog
{
    QMediaPlayer player;
    Q_OBJECT
public:
    explicit SettingDialog(QWidget *parent = nullptr);
    ~SettingDialog();

private slots:

    void on_pushButton_clicked();

    void on_pushButton_2_clicked();

private:
    Ui::SettingDialog *ui;
};

#endif // SETTINGDIALOG_H
