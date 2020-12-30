#include "mainwindow.h"
#include "loginform.h"
#include "conf.h"
#include <QApplication>
#include <QDebug>
#include <QSqlDatabase>
#include <QSqlQuery>
int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    loginForm login;
    MainWindow w;
    get_threshold(1);
    w.setFixedSize(320,465);
    login.show();
    if(login.exec()==QDialog::Accepted){
        w.show();
        return a.exec();
    }
}
