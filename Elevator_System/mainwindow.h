#ifndef MAINWINDOW_H
#define MAINWINDOW_H
#include <QtCore>
#include <QMainWindow>
namespace Ui {
class MainWindow;
}

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    void colour(int i,int j);
    void colour3(int i,int j);
    void colour5(int i,int j);
    explicit MainWindow(QWidget *parent = 0);
    ~MainWindow();


private slots:
    void on_pushButton_clicked(bool checked);

    void on_pushButton_11_clicked();

    void on_pushButton_4_clicked();

    void on_pushButton_12_clicked();

    void on_pushButton_6_clicked();

    void on_pushButton_13_clicked();

    void on_pushButton_8_clicked();

    void on_pushButton_14_clicked();

    void on_pushButton_15_clicked();

    void on_pushButton_16_clicked();

    void on_pushButton_20_clicked();

    void on_pushButton_18_clicked();

    void on_pushButton_17_clicked();
    void on_pushButton_10_clicked();

    void on_pushButton_21_clicked();

    void on_pushButton_19_clicked();

    void on_Floor3_1_clicked();

    void on_Floor3_3_clicked();

    void on_Floor3_5_clicked();

    void on_Floor3_A_clicked();

    void on_Floor3_E_clicked();

    void on_FLOOR5D_clicked();

    void on_FLOOR3U_clicked();

    void on_FLOOR3D_clicked();

    void on_FLOOR1U_clicked();

    void on_NextButton5_clicked();

    void on_NextButton3_clicked();

    void on_Floor5_2_clicked();

    void on_Floor5_1_clicked();

    void on_Floor5_4_clicked();

    void on_Floor5_A_clicked();

    void on_Floor5_E_clicked();

    void on_FLOOR54U_clicked();

    void on_FLOOR54D_clicked();

    void on_FLOOR52U_clicked();

    void on_FLOOR52D_clicked();

    void on_FLOOR51U_clicked();

public:
    Ui::MainWindow *ui;
};

#endif // MAINWINDOW_H
