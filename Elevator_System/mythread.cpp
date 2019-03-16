#include "mythread.h"
#include "mainwindow.h"
#include <Qtcore>
#include <QDebug>
#include <windows.h>
#include "ui_mainwindow.h"

MyThread::MyThread()
{

}
void MyThread::run(){

}
/*
void MyThread::colour(int i,int j){
    switch(i){
    case 0:
            MyWi.ui->pushButton_2->setStyleSheet("background-color: red");
            MyWi.ui->pushButton_3->setStyleSheet("background-color: rgb(200, 144, 13)");
            MyWi.ui->pushButton_5->setStyleSheet("background-color: rgb(200, 144, 13)");
           MyWi.ui->pushButton_7->setStyleSheet("background-color: rgb(200, 144, 13)");
          MyWi.ui->pushButton_9->setStyleSheet("background-color: rgb(200, 144, 13)");
            break;
    case 1:
        MyWi.ui->pushButton_2->setStyleSheet("background-color: rgb(200, 144, 13)");
        MyWi.ui->pushButton_3->setStyleSheet("background-color: red");
        MyWi.ui->pushButton_5->setStyleSheet("background-color: rgb(200, 144, 13)");
        MyWi.ui->pushButton_7->setStyleSheet("background-color: rgb(200, 144, 13)");
        MyWi.ui->pushButton_9->setStyleSheet("background-color: rgb(200, 144, 13)");
            break;
    case 2:
        MyWi.ui->pushButton_2->setStyleSheet("background-color: rgb(200, 144, 13)");
        MyWi.ui->pushButton_3->setStyleSheet("background-color: rgb(200, 144, 13)");
        MyWi.ui->pushButton_5->setStyleSheet("background-color: red");
        MyWi.ui->pushButton_7->setStyleSheet("background-color: rgb(200, 144, 13)");
        MyWi.ui->pushButton_9->setStyleSheet("background-color: rgb(200, 144, 13)");
            break;
    case 3:
        MyWi.ui->pushButton_2->setStyleSheet("background-color: rgb(200, 144, 13)");
        MyWi.ui->pushButton_3->setStyleSheet("background-color: rgb(200, 144, 13)");
        MyWi.ui->pushButton_5->setStyleSheet("background-color: rgb(200, 144, 13)");
        MyWi.ui->pushButton_7->setStyleSheet("background-color: red");
        MyWi.ui->pushButton_9->setStyleSheet("background-color: rgb(200, 144, 13)");
            break;
    case 4:
        MyWi.ui->pushButton_2->setStyleSheet("background-color: rgb(200, 144, 13)");
        MyWi.ui->pushButton_3->setStyleSheet("background-color: rgb(200, 144, 13)");
        MyWi.ui->pushButton_5->setStyleSheet("background-color: rgb(200, 144, 13)");
        MyWi.ui->pushButton_7->setStyleSheet("background-color: rgb(200, 144, 13)");
        MyWi.ui->pushButton_9->setStyleSheet("background-color: red");
            break;

    }
}

*/
