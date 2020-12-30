#ifndef THRESHOLDDIALOG_H
#define THRESHOLDDIALOG_H

#include <QDialog>
#include <QtSql/QSqlDatabase>
namespace Ui {
class thresholdDialog;
}

class thresholdDialog : public QDialog
{
    Q_OBJECT
    int save_num[3];
public:
    explicit thresholdDialog(QWidget *parent = nullptr);
    ~thresholdDialog();

private slots:


    void on_horizontalSlider_actionTriggered(int action);

    void on_horizontalSlider_2_actionTriggered(int action);

    void on_horizontalSlider_3_actionTriggered(int action);

    void on_pushButton_clicked();

private:
    Ui::thresholdDialog *ui;
};

#endif // THRESHOLDDIALOG_H
