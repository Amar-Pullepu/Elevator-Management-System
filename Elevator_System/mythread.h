#ifndef MYTHREAD_H
#define MYTHREAD_H
#include <QtCore>
#include "mainwindow.h"
#include "ui_mainwindow.h"
#include <QMainWindow>
namespace Ui { class MainWindow; }
class MyThread : public QThread,public QMainWindow
{
public:

    void colour(int i,int j);
    MyThread();
    void run();
};

#endif // MYTHREAD_H
