#include "mainwindow.h"
#include "ui_mainwindow.h"
#include <QDebug>
#include <QtCore>
#include <windows.h>
using namespace std;
#define N 5
class Elevator{
public:
    int Dir; //1->up 2->down 3->both
    int WT,persons;
    int CF;
    int arr[5];

    Elevator(int n){
        qDebug()<<"Constructer Called";
        WT=0;
        CF=0;
        Dir=0;  persons=0;
        for(int i=0;i<n;i++)    arr[i]=0;
    }

    void update(){
        qDebug()<<"Array :";
          for(int i=0;i<5;i++)
        qDebug()<<arr[i];
    }
};
Elevator Obj(5),Obj3(5),Obj5(5);
MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    qDebug()<<"Program initiated";
}

MainWindow::~MainWindow()
{
    delete ui;
}
void MainWindow::on_pushButton_clicked(bool checked)
{
    ui->pushButton->setStyleSheet("background-color: red");
    Obj.arr[0]=2;
    Obj.update();
}
void MainWindow::on_pushButton_11_clicked()
{
    ui->pushButton_11->setStyleSheet("background-color: red");
    if(Obj.arr[1]!=2)   Obj.arr[1]=1;
    else Obj.arr[1]=3;
    Obj.update();
}
void MainWindow::on_pushButton_4_clicked()
{
    ui->pushButton_4->setStyleSheet("background-color: red");
    if(Obj.arr[1]!=1)   Obj.arr[1]=2;
    else Obj.arr[1]=3;
    Obj.update();
}

void MainWindow::on_pushButton_12_clicked()
{
    ui->pushButton_12->setStyleSheet("background-color: red");
    if(Obj.arr[2]!=2) Obj.arr[2]=1;
    else Obj.arr[2]=3;
    Obj.update();
}

void MainWindow::on_pushButton_6_clicked()
{
    ui->pushButton_6->setStyleSheet("background-color: red");
    if(Obj.arr[2]!=1)   Obj.arr[2]=2;
    else Obj.arr[2]=3;
    Obj.update();
}

void MainWindow::on_pushButton_13_clicked()
{
    ui->pushButton_13->setStyleSheet("background-color: red");
    if(Obj.arr[3]!=2)   Obj.arr[3]=1;
    else Obj.arr[3]=3;
    Obj.update();
}

void MainWindow::on_pushButton_8_clicked()
{
    ui->pushButton_8->setStyleSheet("background-color: red");
    if(Obj.arr[3]!=1)   Obj.arr[3]=2;
    else Obj.arr[3]=3;
    Obj.update();
}

void MainWindow::on_pushButton_14_clicked()
{
    ui->pushButton_14->setStyleSheet("background-color: red");
    Obj.arr[4]=1;
    Obj.update();
}

void MainWindow::on_pushButton_15_clicked()
{
    ui->pushButton_15->setStyleSheet("background-color: red");
    Obj.arr[0]=3;
    Obj.update();
}

void MainWindow::on_pushButton_16_clicked()
{
    ui->pushButton_16->setStyleSheet("background-color: red");
    Obj.arr[1]=3;
    Obj.update();
}

void MainWindow::on_pushButton_20_clicked()
{
    ui->pushButton_20->setStyleSheet("background-color: red");
    Obj.arr[2]=3;
    Obj.update();
}

void MainWindow::on_pushButton_18_clicked()
{
    ui->pushButton_18->setStyleSheet("background-color: red");
    Obj.arr[3]=3;
    Obj.update();
}

void MainWindow::on_pushButton_17_clicked()
{
    ui->pushButton_17->setStyleSheet("background-color: red");
    Obj.arr[4]=3;
    Obj.update();
}
bool is_overload()
    {
        int persons = rand()%15+1;
        if(persons>8) return true;
        else return false;
    }
void MainWindow::colour(int i,int j){
    MainWindow::ui->lcdNumber->display(Obj.CF+1);
    MainWindow::ui->lcdNumber_2->display(Obj.CF+1);
    MainWindow::ui->lcdNumber_3->display(Obj.CF+1);
    MainWindow::ui->lcdNumber_4->display(Obj.CF+1);
    MainWindow::ui->lcdNumber_5->display(Obj.CF+1);
    MainWindow::ui->lcdNumber_6->display(Obj.CF+1);
    if(i==0){
            if(j==1)
           MainWindow::ui->pushButton_2->setStyleSheet("background-color: red");
            if(j==2){
                MainWindow::ui->pushButton_2->setStyleSheet("background-color: green");
                MainWindow::ui->pushButton->setStyleSheet("background-color: rgb(255,255,255)");
                MainWindow::ui->pushButton_15->setStyleSheet("background-color: rgb(255,255,255)");

            }
            MainWindow::ui->pushButton_3->setStyleSheet("background-color: rgb(200, 144, 13)");
            MainWindow::ui->pushButton_5->setStyleSheet("background-color: rgb(200, 144, 13)");
            MainWindow::ui->pushButton_7->setStyleSheet("background-color: rgb(200, 144, 13)");
            MainWindow::ui->pushButton_9->setStyleSheet("background-color: rgb(200, 144, 13)");
    }
    else if(i==1) {
        MainWindow::ui->pushButton_2->setStyleSheet("background-color: rgb(200, 144, 13)");
        if(j==1)
        MainWindow::ui->pushButton_3->setStyleSheet("background-color: red");
        if(j==2){
            MainWindow::ui->pushButton_3->setStyleSheet("background-color: green");
            MainWindow::ui->pushButton_16->setStyleSheet("background-color: rgb(255,255,255)");
            if(Obj.Dir==1){// Up
                MainWindow::ui->pushButton_4->setStyleSheet("background-color: rgb(255,255,255)");
            }
            else if(Obj.Dir==2){// Down
                MainWindow::ui->pushButton_11->setStyleSheet("background-color: rgb(255,255,255)");
            }
        }
        MainWindow::ui->pushButton_5->setStyleSheet("background-color: rgb(200, 144, 13)");
        MainWindow::ui->pushButton_7->setStyleSheet("background-color: rgb(200, 144, 13)");
        MainWindow::ui->pushButton_9->setStyleSheet("background-color: rgb(200, 144, 13)");
           }
    else if(i==2){
        MainWindow::ui->pushButton_2->setStyleSheet("background-color: rgb(200, 144, 13)");
        MainWindow::ui->pushButton_3->setStyleSheet("background-color: rgb(200, 144, 13)");
        if(j==1)
        MainWindow::ui->pushButton_5->setStyleSheet("background-color: red");
        if(j==2){
            MainWindow::ui->pushButton_5->setStyleSheet("background-color: green");
            MainWindow::ui->pushButton_20->setStyleSheet("background-color: rgb(255,255,255)");
            if(Obj.Dir==1){// Up
                MainWindow::ui->pushButton_6->setStyleSheet("background-color: rgb(255,255,255)");
            }
            else if(Obj.Dir==2){// Down
                MainWindow::ui->pushButton_12->setStyleSheet("background-color: rgb(255,255,255)");
            }
        }
        MainWindow::ui->pushButton_7->setStyleSheet("background-color: rgb(200, 144, 13)");
        MainWindow::ui->pushButton_9->setStyleSheet("background-color: rgb(200, 144, 13)");
         }
    else if(i==3){
        MainWindow::ui->pushButton_2->setStyleSheet("background-color: rgb(200, 144, 13)");
        MainWindow::ui->pushButton_3->setStyleSheet("background-color: rgb(200, 144, 13)");
        MainWindow::ui->pushButton_5->setStyleSheet("background-color: rgb(200, 144, 13)");
        if(j==1)
        MainWindow::ui->pushButton_7->setStyleSheet("background-color: red");
        if(j==2){
            MainWindow::ui->pushButton_7->setStyleSheet("background-color: green");
            MainWindow::ui->pushButton_18->setStyleSheet("background-color: rgb(255,255,255)");
            if(Obj.Dir==1){// Up
                MainWindow::ui->pushButton_8->setStyleSheet("background-color: rgb(255,255,255)");
            }
            else if(Obj.Dir==2){// Down
                MainWindow::ui->pushButton_13->setStyleSheet("background-color: rgb(255,255,255)");
            }
        }
        MainWindow::ui->pushButton_9->setStyleSheet("background-color: rgb(200, 144, 13)");
         }
    else if(i==4){
        MainWindow::ui->pushButton_2->setStyleSheet("background-color: rgb(200, 144, 13)");
        MainWindow::ui->pushButton_3->setStyleSheet("background-color: rgb(200, 144, 13)");
        MainWindow::ui->pushButton_5->setStyleSheet("background-color: rgb(200, 144, 13)");
        MainWindow::ui->pushButton_7->setStyleSheet("background-color: rgb(200, 144, 13)");
        if(j==1)
        MainWindow::ui->pushButton_9->setStyleSheet("background-color: red");
        if(j==2){
            MainWindow::ui->pushButton_9->setStyleSheet("background-color: green");
            MainWindow::ui->pushButton_14->setStyleSheet("background-color: rgb(255,255,255)");
            MainWindow::ui->pushButton_17->setStyleSheet("background-color: rgb(255,255,255)");
        }
        }

}


void MainWindow::on_pushButton_10_clicked()
{
    int i=0;
            //IF THE Dir IS SET, BUT NO BUTTON IS PRESSED, SET Dir TO 0
    int temp=0;
            if(Obj.Dir==1) {
                for(i=Obj.CF;i<N;i++)
                {
                    if(Obj.arr[i]==1) temp++;
                }
                if(temp==0) Obj.Dir=0;
            }

            temp=0;
            if(Obj.Dir==2) {
                for(i=Obj.CF;i>=0;i--)
                    if(Obj.arr[i]==2)
                        temp++;
                if(temp==0) {
                    Obj.Dir=0;
                }
            }

            if(Obj.Dir==0) {
                for(i=Obj.CF;i<N;i++)
                if(Obj.arr[i]==2) {
                    Obj.arr[i]=1;
                    Obj.Dir=1;
                    break;
                }
            }
            if(Obj.Dir==0) {
                for(i=Obj.CF;i>=0;i--)
                if(Obj.arr[i]==1) {
                    Obj.arr[i]=2;
                    Obj.Dir=2;
                    break;
                }
            }
            if(Obj.Dir==0) {
                for(i=Obj.CF;i>=0;i--)
                if(Obj.arr[i]==3) {
                    Obj.Dir=2;
                    break;
                }
            }
            if(Obj.Dir==0)
            {
                for(i=Obj.CF;i<N;i++)
                if(Obj.arr[i]==3) {
                    Obj.Dir=1;
                    break;
                }
            }

            for(i=Obj.CF;i<N;i++)
            {
                if( (Obj.arr[i]==1 || Obj.arr[i]==3)&& Obj.Dir<=1) {
                        //cout<<Obj.CF<<" ";
                    if(Obj.arr[Obj.CF]==3 || Obj.arr[Obj.CF]==1) {

                        Obj.arr[Obj.CF] -= Obj.Dir;
                        qDebug()<<"Current File: "<<Obj.CF;
                        colour(Obj.CF, 2); //2->GREEN->OPEN
                        Beep(1000,700);
                        while(is_overload()) {
                                Beep(2000, 2000);
                        }

                        break;
                    }
                    else {
                        colour(Obj.CF, 1); //1->RED->GOING
                    }

                    Obj.CF++;

                    break;
                }
            }
            if(i==N) {
                    //cout<<Obj.CF<<endl;

                Obj.Dir=2;
                int j;
                for(j=N-1;j>=0;j--)
                {

                    if( (Obj.arr[j]==2 || Obj.arr[j]==3)&& (Obj.Dir==2||Obj.Dir==0)) {
                        //cout<<Obj.CF<<" ";
                        if(Obj.arr[Obj.CF]==3 || Obj.arr[Obj.CF]==2) {

                            Obj.arr[Obj.CF] -= Obj.Dir;
                            qDebug()<<"Current File: "<<Obj.CF;
                            colour(Obj.CF, 2); //2->GREEN->OPEN
                           Beep(1000,700);
                            while(is_overload()) {
                                    Beep(2000, 2000);
                            }
                            break;
                        }
                        else {
                            colour(Obj.CF, 1); //1->BLUE->GOING
                        }

                        Obj.CF--;
                        break;
                    }
                }
            }
            Obj.update();
}

void MainWindow::on_pushButton_21_clicked()
{
    Beep(2500, 10000);
}

void MainWindow::on_pushButton_19_clicked()
{
    for(int i=0;i<5;i++){
            Beep(2000, 1000);
    }
}
void MainWindow::on_NextButton3_clicked()
{
    int i=0;
            //IF THE Dir IS SET, BUT NO BUTTON IS PRESSED, SET Dir TO 0
    int temp=0;
            if(Obj3.Dir==1) {
                for(i=Obj3.CF;i<N;i++)
                {
                    if(Obj3.arr[i]==1) temp++;
                }
                if(temp==0) Obj3.Dir=0;
            }

            temp=0;
            if(Obj3.Dir==2) {
                for(i=Obj3.CF;i>=0;i--)
                    if(Obj3.arr[i]==2)
                        temp++;
                if(temp==0) {
                    Obj3.Dir=0;
                }
            }

            if(Obj3.Dir==0) {
                for(i=Obj3.CF;i<N;i++)
                if(Obj3.arr[i]==2) {
                    Obj3.arr[i]=1;
                    Obj3.Dir=1;
                    break;
                }
            }
            if(Obj3.Dir==0) {
                for(i=Obj3.CF;i>=0;i--)
                if(Obj3.arr[i]==1) {
                    Obj3.arr[i]=2;
                    Obj3.Dir=2;
                    break;
                }
            }
            if(Obj3.Dir==0) {
                for(i=Obj3.CF;i>=0;i--)
                if(Obj3.arr[i]==3) {
                    Obj3.Dir=2;
                    break;
                }
            }
            if(Obj3.Dir==0)
            {
                for(i=Obj3.CF;i<N;i++)
                if(Obj3.arr[i]==3) {
                    Obj3.Dir=1;
                    break;
                }
            }

            for(i=Obj3.CF;i<N;i++)
            {
                if( (Obj3.arr[i]==1 || Obj3.arr[i]==3)&& Obj3.Dir<=1) {
                        //cout<<Obj3.CF<<" ";
                    if(Obj3.arr[Obj3.CF]==3 || Obj3.arr[Obj3.CF]==1) {

                        Obj3.arr[Obj3.CF] -= Obj3.Dir;
                        qDebug()<<"Current File: "<<Obj3.CF;
                        colour3(Obj3.CF, 2); //2->GREEN->OPEN
                        Beep(1000,700);
                        while(is_overload()) {
                                Beep(2000, 2000);
                        }

                        break;
                    }
                    else {
                        colour3(Obj3.CF, 1); //1->RED->GOING
                    }

                    Obj3.CF++;

                    break;
                }
            }
            if(i==N) {
                    //cout<<Obj3.CF<<endl;

                Obj3.Dir=2;
                int j;
                for(j=N-1;j>=0;j--)
                {

                    if( (Obj3.arr[j]==2 || Obj3.arr[j]==3)&& (Obj3.Dir==2||Obj3.Dir==0)) {
                        //cout<<Obj3.CF<<" ";
                        if(Obj3.arr[Obj3.CF]==3 || Obj3.arr[Obj3.CF]==2) {

                            Obj3.arr[Obj3.CF] -= Obj3.Dir;
                            qDebug()<<"Current File: "<<Obj3.CF;
                            colour3(Obj3.CF, 2); //2->GREEN->OPEN
                           Beep(1000,700);
                            while(is_overload()) {
                                    Beep(2000, 2000);
                            }
                            break;
                        }
                        else {
                            colour3(Obj3.CF, 1); //1->BLUE->GOING
                        }

                        Obj3.CF--;
                        break;
                    }
                }
            }
            Obj3.update();
}
void MainWindow::on_Floor3_1_clicked()
{
    ui->Floor3_1->setStyleSheet("background-color: red");
    Obj3.arr[0]=3;
    Obj3.update();
}

void MainWindow::on_Floor3_3_clicked()
{
    ui->Floor3_3->setStyleSheet("background-color: red");
    Obj3.arr[2]=3;
    Obj3.update();
}

void MainWindow::on_Floor3_5_clicked()
{
    ui->Floor3_5->setStyleSheet("background-color: red");
    Obj3.arr[4]=3;
    Obj3.update();
}

void MainWindow::on_Floor3_A_clicked()
{
    for(int i=0;i<5;i++){
            Beep(2000, 1000);
    }
}
void MainWindow::on_Floor3_E_clicked()
{

    Beep(2500, 10000);
}
void MainWindow::on_FLOOR5D_clicked()
{
    ui->FLOOR5D->setStyleSheet("background-color: red");
    if(Obj3.arr[4]!=2) Obj3.arr[4]=1;
    else Obj3.arr[4]=3;
    Obj3.update();
}
void MainWindow::on_FLOOR3U_clicked()
{
    ui->FLOOR3U->setStyleSheet("background-color: red");
    if(Obj3.arr[2]!=1)   Obj3.arr[2]=2;
    else Obj3.arr[2]=3;
    Obj3.update();
}

void MainWindow::on_FLOOR3D_clicked()
{
    ui->FLOOR3D->setStyleSheet("background-color: red");
    if(Obj3.arr[2]!=2) Obj3.arr[2]=1;
    else Obj3.arr[2]=3;
    Obj3.update();
}

void MainWindow::on_FLOOR1U_clicked()
{
    ui->FLOOR1U->setStyleSheet("background-color: red");
    if(Obj3.arr[0]!=1)   Obj3.arr[0]=2;
    else Obj3.arr[0]=3;
    Obj3.update();
}
void MainWindow::colour3(int i,int j){
    MainWindow::ui->lcd3_1->display(Obj3.CF+1);
    MainWindow::ui->lcd3_2->display(Obj3.CF+1);
    MainWindow::ui->lcd3_3->display(Obj3.CF+1);
    MainWindow::ui->lcd3_4->display(Obj3.CF+1);
    MainWindow::ui->lcd3_5->display(Obj3.CF+1);
    MainWindow::ui->lcd3_6->display(Obj3.CF+1);
    if(i==0){
            if(j==1)
           MainWindow::ui->FLOOR1->setStyleSheet("background-color: red");
            if(j==2){
                MainWindow::ui->FLOOR1->setStyleSheet("background-color: green");
                MainWindow::ui->FLOOR1U->setStyleSheet("background-color: rgb(255,255,255)");
                MainWindow::ui->Floor3_1->setStyleSheet("background-color: rgb(255,255,255)");

            }
            MainWindow::ui->FLOOR2->setStyleSheet("background-color: rgb(200, 144, 13)");
            MainWindow::ui->FLOOR3->setStyleSheet("background-color: rgb(200, 144, 13)");
            MainWindow::ui->FLOOR4->setStyleSheet("background-color: rgb(200, 144, 13)");
            MainWindow::ui->FLOOR5->setStyleSheet("background-color: rgb(200, 144, 13)");
    }
    else if(i==1) {
        MainWindow::ui->FLOOR1->setStyleSheet("background-color: rgb(200, 144, 13)");
        MainWindow::ui->FLOOR2->setStyleSheet("background-color: red");
        MainWindow::ui->FLOOR3->setStyleSheet("background-color: rgb(200, 144, 13)");
        MainWindow::ui->FLOOR4->setStyleSheet("background-color: rgb(200, 144, 13)");
        MainWindow::ui->FLOOR5->setStyleSheet("background-color: rgb(200, 144, 13)");
           }
    else if(i==2){
        MainWindow::ui->FLOOR1->setStyleSheet("background-color: rgb(200, 144, 13)");
        MainWindow::ui->FLOOR2->setStyleSheet("background-color: rgb(200, 144, 13)");
        if(j==1)
        MainWindow::ui->FLOOR3->setStyleSheet("background-color: red");
        if(j==2){
            MainWindow::ui->FLOOR3->setStyleSheet("background-color: green");
            MainWindow::ui->Floor3_3->setStyleSheet("background-color: rgb(255,255,255)");
            if(Obj3.Dir==1){// Up
                MainWindow::ui->FLOOR3U->setStyleSheet("background-color: rgb(255,255,255)");
            }
            else if(Obj3.Dir==2){// Down
                MainWindow::ui->FLOOR3D->setStyleSheet("background-color: rgb(255,255,255)");
            }
        }
        MainWindow::ui->FLOOR4->setStyleSheet("background-color: rgb(200, 144, 13)");
        MainWindow::ui->FLOOR5->setStyleSheet("background-color: rgb(200, 144, 13)");
         }
    else if(i==3){
        MainWindow::ui->FLOOR1->setStyleSheet("background-color: rgb(200, 144, 13)");
        MainWindow::ui->FLOOR2->setStyleSheet("background-color: rgb(200, 144, 13)");
        MainWindow::ui->FLOOR3->setStyleSheet("background-color: rgb(200, 144, 13)");
        MainWindow::ui->FLOOR4->setStyleSheet("background-color: red");
        MainWindow::ui->FLOOR5->setStyleSheet("background-color: rgb(200, 144, 13)");
         }
    else if(i==4){
        MainWindow::ui->FLOOR1->setStyleSheet("background-color: rgb(200, 144, 13)");
        MainWindow::ui->FLOOR2->setStyleSheet("background-color: rgb(200, 144, 13)");
        MainWindow::ui->FLOOR3->setStyleSheet("background-color: rgb(200, 144, 13)");
        MainWindow::ui->FLOOR4->setStyleSheet("background-color: rgb(200, 144, 13)");
        if(j==1)
        MainWindow::ui->FLOOR5->setStyleSheet("background-color: red");
        if(j==2){
            MainWindow::ui->FLOOR5->setStyleSheet("background-color: green");
            MainWindow::ui->FLOOR5D->setStyleSheet("background-color: rgb(255,255,255)");
            MainWindow::ui->Floor3_5->setStyleSheet("background-color: rgb(255,255,255)");
        }
        }

}
void MainWindow::on_NextButton5_clicked()
{
    int i=0;
            //IF THE Dir IS SET, BUT NO BUTTON IS PRESSED, SET Dir TO 0
    int temp=0;
            if(Obj5.Dir==1) {
                for(i=Obj5.CF;i<N;i++)
                {
                    if(Obj5.arr[i]==1) temp++;
                }
                if(temp==0) Obj5.Dir=0;
            }

            temp=0;
            if(Obj5.Dir==2) {
                for(i=Obj5.CF;i>=0;i--)
                    if(Obj5.arr[i]==2)
                        temp++;
                if(temp==0) {
                    Obj5.Dir=0;
                }
            }

            if(Obj5.Dir==0) {
                for(i=Obj5.CF;i<N;i++)
                if(Obj5.arr[i]==2) {
                    Obj5.arr[i]=1;
                    Obj5.Dir=1;
                    break;
                }
            }
            if(Obj5.Dir==0) {
                for(i=Obj5.CF;i>=0;i--)
                if(Obj5.arr[i]==1) {
                    Obj5.arr[i]=2;
                    Obj5.Dir=2;
                    break;
                }
            }
            if(Obj5.Dir==0) {
                for(i=Obj5.CF;i>=0;i--)
                if(Obj5.arr[i]==3) {
                    Obj5.Dir=2;
                    break;
                }
            }
            if(Obj5.Dir==0)
            {
                for(i=Obj5.CF;i<N;i++)
                if(Obj5.arr[i]==3) {
                    Obj5.Dir=1;
                    break;
                }
            }

            for(i=Obj5.CF;i<N;i++)
            {
                if( (Obj5.arr[i]==1 || Obj5.arr[i]==3)&& Obj5.Dir<=1) {
                        //cout<<Obj5.CF<<" ";
                    if(Obj5.arr[Obj5.CF]==3 || Obj5.arr[Obj5.CF]==1) {

                        Obj5.arr[Obj5.CF] -= Obj5.Dir;
                        qDebug()<<"Current File: "<<Obj5.CF;
                        colour5(Obj5.CF, 2); //2->GREEN->OPEN
                        Beep(1000,700);
                        while(is_overload()) {
                                Beep(2000, 2000);
                        }

                        break;
                    }
                    else {
                        colour5(Obj5.CF, 1); //1->RED->GOING
                    }

                    Obj5.CF++;

                    break;
                }
            }
            if(i==N) {
                    //cout<<Obj5.CF<<endl;

                Obj5.Dir=2;
                int j;
                for(j=N-1;j>=0;j--)
                {

                    if( (Obj5.arr[j]==2 || Obj5.arr[j]==3)&& (Obj5.Dir==2||Obj5.Dir==0)) {
                        //cout<<Obj5.CF<<" ";
                        if(Obj5.arr[Obj5.CF]==3 || Obj5.arr[Obj5.CF]==2) {

                            Obj5.arr[Obj5.CF] -= Obj5.Dir;
                            qDebug()<<"Current File: "<<Obj5.CF;
                            colour5(Obj5.CF, 2); //2->GREEN->OPEN
                           Beep(1000,700);
                            while(is_overload()) {
                                    Beep(2000, 2000);
                            }
                            break;
                        }
                        else {
                            colour5(Obj5.CF, 1); //1->BLUE->GOING
                        }

                        Obj5.CF--;
                        break;
                    }
                }
            }
            Obj5.update();
}
void MainWindow::colour5(int i,int j){
    MainWindow::ui->lcd5_1->display(Obj5.CF+1);
    MainWindow::ui->lcd5_2->display(Obj5.CF+1);
    MainWindow::ui->lcd5_3->display(Obj5.CF+1);
    MainWindow::ui->lcd5_4->display(Obj5.CF+1);
    MainWindow::ui->lcd5_5->display(Obj5.CF+1);
    MainWindow::ui->lcd5_6->display(Obj5.CF+1);
    if(i==0){
            if(j==1)
           MainWindow::ui->FLOOR51->setStyleSheet("background-color: red");
            if(j==2){
                MainWindow::ui->FLOOR51->setStyleSheet("background-color: green");
                MainWindow::ui->FLOOR51U->setStyleSheet("background-color: rgb(255,255,255)");
                MainWindow::ui->Floor5_1->setStyleSheet("background-color: rgb(255,255,255)");

            }
            MainWindow::ui->FLOOR52->setStyleSheet("background-color: rgb(200, 144, 13)");
            MainWindow::ui->FLOOR53->setStyleSheet("background-color: rgb(200, 144, 13)");
            MainWindow::ui->FLOOR54->setStyleSheet("background-color: rgb(200, 144, 13)");
            MainWindow::ui->FLOOR55->setStyleSheet("background-color: rgb(200, 144, 13)");
    }
    else if(i==1) {
        MainWindow::ui->FLOOR51->setStyleSheet("background-color: rgb(200, 144, 13)");
        if(j==1)
        MainWindow::ui->FLOOR52->setStyleSheet("background-color: red");
        if(j==2){
            MainWindow::ui->FLOOR52->setStyleSheet("background-color: green");
            MainWindow::ui->Floor5_2->setStyleSheet("background-color: rgb(255,255,255)");
            if(Obj5.Dir==1){// Up
                MainWindow::ui->FLOOR52U->setStyleSheet("background-color: rgb(255,255,255)");
            }
            else if(Obj5.Dir==2){// Down
                MainWindow::ui->FLOOR52D->setStyleSheet("background-color: rgb(255,255,255)");
            }
        }
        MainWindow::ui->FLOOR53->setStyleSheet("background-color: rgb(200, 144, 13)");
        MainWindow::ui->FLOOR54->setStyleSheet("background-color: rgb(200, 144, 13)");
        MainWindow::ui->FLOOR55->setStyleSheet("background-color: rgb(200, 144, 13)");
           }
    else if(i==2){
        MainWindow::ui->FLOOR51->setStyleSheet("background-color: rgb(200, 144, 13)");
        MainWindow::ui->FLOOR52->setStyleSheet("background-color: rgb(200, 144, 13)");
        MainWindow::ui->FLOOR53->setStyleSheet("background-color: red");
        MainWindow::ui->FLOOR54->setStyleSheet("background-color: rgb(200, 144, 13)");
        MainWindow::ui->FLOOR55->setStyleSheet("background-color: rgb(200, 144, 13)");
         }
    else if(i==3){
        MainWindow::ui->FLOOR51->setStyleSheet("background-color: rgb(200, 144, 13)");
        MainWindow::ui->FLOOR52->setStyleSheet("background-color: rgb(200, 144, 13)");
        MainWindow::ui->FLOOR53->setStyleSheet("background-color: rgb(200, 144, 13)");
        if(j==1)
        MainWindow::ui->FLOOR54->setStyleSheet("background-color: red");
        if(j==2){
            MainWindow::ui->FLOOR54->setStyleSheet("background-color: green");
            MainWindow::ui->Floor5_4->setStyleSheet("background-color: rgb(255,255,255)");
            if(Obj5.Dir==1){// Up
                MainWindow::ui->FLOOR54U->setStyleSheet("background-color: rgb(255,255,255)");
            }
            else if(Obj5.Dir==2){// Down
                MainWindow::ui->FLOOR54D->setStyleSheet("background-color: rgb(255,255,255)");
            }
        }
        MainWindow::ui->FLOOR5->setStyleSheet("background-color: rgb(200, 144, 13)");
         }
    else if(i==4){
        MainWindow::ui->FLOOR1->setStyleSheet("background-color: rgb(200, 144, 13)");
        MainWindow::ui->FLOOR2->setStyleSheet("background-color: rgb(200, 144, 13)");
        MainWindow::ui->FLOOR3->setStyleSheet("background-color: rgb(200, 144, 13)");
        MainWindow::ui->FLOOR4->setStyleSheet("background-color: rgb(200, 144, 13)");
        MainWindow::ui->FLOOR5->setStyleSheet("background-color: red");
        }

}
void MainWindow::on_Floor5_1_clicked()
{
    ui->Floor5_1->setStyleSheet("background-color: red");
    Obj5.arr[0]=3;
    Obj5.update();
}
void MainWindow::on_Floor5_2_clicked()
{
    ui->Floor5_2->setStyleSheet("background-color: red");
    Obj5.arr[1]=3;
    Obj5.update();
}


void MainWindow::on_Floor5_4_clicked()
{
    ui->Floor5_4->setStyleSheet("background-color: red");
    Obj5.arr[3]=3;
    Obj5.update();
}

void MainWindow::on_Floor5_A_clicked()
{
    for(int i=0;i<5;i++){
            Beep(2000, 1000);
    }
}

void MainWindow::on_Floor5_E_clicked()
{
        Beep(2500, 10000);
}

void MainWindow::on_FLOOR54U_clicked()
{
    ui->FLOOR54U->setStyleSheet("background-color: red");
    if(Obj5.arr[3]!=1)   Obj5.arr[3]=2;
    else Obj5.arr[3]=3;
    Obj5.update();
}

void MainWindow::on_FLOOR54D_clicked()
{
    ui->FLOOR54D->setStyleSheet("background-color: red");
    Obj.arr[3]=1;
    Obj.update();
}

void MainWindow::on_FLOOR52U_clicked()
{
    ui->FLOOR52U->setStyleSheet("background-color: red");
    if(Obj5.arr[1]!=1)   Obj5.arr[1]=2;
    else Obj5.arr[1]=3;
    Obj5.update();
}

void MainWindow::on_FLOOR52D_clicked()
{
    ui->FLOOR52D->setStyleSheet("background-color: red");
    Obj.arr[1]=1;
    Obj.update();
}

void MainWindow::on_FLOOR51U_clicked()
{
    ui->FLOOR51U->setStyleSheet("background-color: red");
    if(Obj5.arr[0]!=1)   Obj5.arr[0]=2;
    else Obj5.arr[0]=3;
    Obj5.update();
}
