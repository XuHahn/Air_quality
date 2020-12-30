#include "conf.h"
#include <QTextStream>
QString get_phone_num(){
    QFile file("phone_num.txt");
    file.open(QIODevice::ReadOnly);
    QString str = file.readAll();
    file.close();
    return str;
}
void modify_phone_num(QString str){
    QFile file("phone_num.txt");
    file.open(QIODevice::WriteOnly);
    QTextStream tx(&file);
    tx<<str;
    file.close();
}
int get_threshold(int index){
    QFile file("threshold.txt");
    file.open(QIODevice::ReadOnly);
    QString threshold[3];
    QTextStream tx(&file);
    for(int i = 0;i < 3;i++){
        threshold[i]=tx.readLine();
    }
    file.close();
    switch (index) {
        case 0:{
            return threshold[0].toInt();
        }
        case 1:{
            return threshold[1].toInt();
        }
        case 2:{
            return threshold[2].toInt();
        }
    default:{
        return -1;
    }
    }
}
int get_alarm_bt_flag(){
    QFile file("setting_flag.txt");
    file.open(QIODevice::ReadOnly);
    QString flag[2];
    QTextStream tx(&file);
    for(int i = 0;i < 2;i++){
        flag[i]=tx.readLine();
    }
    file.close();
    return flag[0].toInt();
}
int get_music_bt_flag(){
    QFile file("setting_flag.txt");
    file.open(QIODevice::ReadOnly);
    QString flag[2];
    QTextStream tx(&file);
    for(int i = 0;i < 2;i++){
        flag[i]=tx.readLine();
    }
    file.close();
    return flag[1].toInt();
}
void modify_setting_flag(int index){
    QFile file("setting_flag.txt");
    file.open(QIODevice::ReadOnly|QIODevice::WriteOnly);
    int flag[2]={get_alarm_bt_flag(),get_music_bt_flag()};
    QTextStream tx(&file);
    if(index==0){
        if(flag[0]==0){tx<<1<<"\n"<<flag[1];}
        else if(flag[0]==1){tx<<0<<"\n"<<flag[1];}
    }
    else if(index ==1){
        if(flag[1]==0){tx<<flag[0]<<"\n"<<1;}
        else if(flag[1]==1){tx<<flag[0]<<"\n"<<0;}
    }
}
conf::conf()
{

}
