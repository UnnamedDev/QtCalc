#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include <ccalc.h>
#include <QString>

namespace Ui {
class MainWindow;
}

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    explicit MainWindow(QWidget *parent = 0);
    ~MainWindow();

private slots:
    void on_pushButton0_clicked();
    void on_pushButton1_clicked();
    void on_pushButton2_clicked();
    void on_pushButton3_clicked();
    void on_pushButton4_clicked();
    void on_pushButton5_clicked();
    void on_pushButton6_clicked();
    void on_pushButton7_clicked();
    void on_pushButton8_clicked();
    void on_pushButton9_clicked();

    void on_pushButtonDiv_clicked();
    void on_pushButtonAdd_clicked();
    void on_pushButtonMult_clicked();
    void on_pushButtonMin_clicked();

    void on_pushButtonRes_clicked();

private:
    void operationButtonsEnabled(bool state);
    CCalc calc;
    Ui::MainWindow *ui;
};

#endif // MAINWINDOW_H
