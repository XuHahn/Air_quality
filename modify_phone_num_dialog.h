#ifndef MODIFY_PHONE_NUM_DIALOG_H
#define MODIFY_PHONE_NUM_DIALOG_H

#include <QDialog>
#include <QString>

namespace Ui {
class modify_phone_num_Dialog;
}

class modify_phone_num_Dialog : public QDialog
{
    Q_OBJECT

public:
    QString phone_num="";
    explicit modify_phone_num_Dialog(QWidget *parent = nullptr);
    ~modify_phone_num_Dialog();

private slots:
    void on_pushButton_clicked();

private:
    Ui::modify_phone_num_Dialog *ui;
};

#endif // MODIFY_PHONE_NUM_DIALOG_H
