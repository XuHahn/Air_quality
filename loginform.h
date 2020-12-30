#ifndef LOGINFORM_H
#define LOGINFORM_H
#include <QStyleOption>
#include <QWidget>
#include <QDialog>
namespace Ui {
class loginForm;
}

class loginForm : public QDialog
{
    Q_OBJECT
public:
    int login_status = 0;
    explicit loginForm(QWidget *parent = nullptr);
    ~loginForm();

private slots:
    void on_pushButton_clicked();
    void paintEvent(QPaintEvent *event);
private:
    Ui::loginForm *ui;
};

#endif // LOGINFORM_H
