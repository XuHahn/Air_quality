#ifndef PHONEFORM_H
#define PHONEFORM_H

#include <QWidget>

namespace Ui {
class PhoneForm;
}

class PhoneForm : public QWidget
{
    Q_OBJECT
    QFont font;
public:
    explicit PhoneForm(QWidget *parent = nullptr);
    ~PhoneForm();

private slots:
    void on_pushButton_clicked();

private:
    Ui::PhoneForm *ui;
};

#endif // PHONEFORM_H
