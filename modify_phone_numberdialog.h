#ifndef MODIFY_PHONE_NUMBERDIALOG_H
#define MODIFY_PHONE_NUMBERDIALOG_H

#include <QDialog>

namespace Ui {
class modify_phone_numberDialog;
}

class modify_phone_numberDialog : public QDialog
{
    Q_OBJECT

public:
    explicit modify_phone_numberDialog(QWidget *parent = nullptr);
    ~modify_phone_numberDialog();

private slots:
    void on_buttonBox_accepted();


private:
    Ui::modify_phone_numberDialog *ui;
};

#endif // MODIFY_PHONE_NUMBERDIALOG_H
