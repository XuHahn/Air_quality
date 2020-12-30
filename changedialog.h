#ifndef CHANGEDIALOG_H
#define CHANGEDIALOG_H

#include <QDialog>

namespace Ui {
class changeDialog;
}

class changeDialog : public QDialog
{
    Q_OBJECT
public:
    QString num="";
    explicit changeDialog(QWidget *parent = nullptr);
    ~changeDialog();

private slots:
    void on_pushButton_clicked();

private:
    Ui::changeDialog *ui;
};

#endif // CHANGEDIALOG_H
