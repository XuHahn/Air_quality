#ifndef CHANGEFORM_H
#define CHANGEFORM_H

#include <QWidget>

namespace Ui {
class changeForm;
}

class changeForm : public QWidget
{
    Q_OBJECT

public:
    explicit changeForm(QWidget *parent = nullptr);
    ~changeForm();

private:
    Ui::changeForm *ui;
};

#endif // CHANGEFORM_H
