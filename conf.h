#ifndef CONF_H
#define CONF_H
#include<QString>
#include <QFile>
#include <QFileDevice>
#include <QtDebug>
#include <QSqlDatabase>
#include <QSqlQuery>
static QString USER_ACCOUNT="admin";
static QString USER_PASSWORD="admin";
void modify_phone_num(QString str);
int get_threshold(int index);
QString get_phone_num();
int get_alarm_bt_flag();
int get_music_bt_flag();
void modify_setting_flag(int index);
class conf
{
public:
    conf();
};

#endif // CONF_H
