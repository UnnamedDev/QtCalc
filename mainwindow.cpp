#include "mainwindow.h"
#include "ui_mainwindow.h"

MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    //calc = new CCalc();
}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::on_pushButton0_clicked()
{
    ui->line->setText(ui->line->text() + "0");
}

void MainWindow::on_pushButton1_clicked()
{
    ui->line->setText(ui->line->text() + "1");
}

void MainWindow::on_pushButton2_clicked()
{
    ui->line->setText(ui->line->text() + "2");
}

void MainWindow::on_pushButton3_clicked()
{
    ui->line->setText(ui->line->text() + "3");
}

void MainWindow::on_pushButton4_clicked()
{
    ui->line->setText(ui->line->text() + "4");
}

void MainWindow::on_pushButton5_clicked()
{
    ui->line->setText(ui->line->text() + "5");
}

void MainWindow::on_pushButton6_clicked()
{
    ui->line->setText(ui->line->text() + "6");
}

void MainWindow::on_pushButton7_clicked()
{
    ui->line->setText(ui->line->text() + "7");
}

void MainWindow::on_pushButton8_clicked()
{
    ui->line->setText(ui->line->text() + "8");
}

void MainWindow::on_pushButton9_clicked()
{
    ui->line->setText(ui->line->text() + "9");
}

void MainWindow::on_pushButtonDiv_clicked()
{
    if (ui->line->text() != "")
    {
        calc.setFirstOperand(ui->line->text().toDouble());
        calc.setOperationType("/");
        ui->line->clear();
        operationButtonsEnabled(false);
    }
}

void MainWindow::on_pushButtonAdd_clicked()
{
    if (ui->line->text() != "")
    {
        calc.setFirstOperand(ui->line->text().toDouble());
        calc.setOperationType("+");
        ui->line->clear();
        operationButtonsEnabled(false);
    }
}

void MainWindow::on_pushButtonMult_clicked()
{
    if (ui->line->text() != "x")
    {
        calc.setFirstOperand(ui->line->text().toDouble());
        calc.setOperationType("+");
        ui->line->clear();
        operationButtonsEnabled(false);
    }
}

void MainWindow::on_pushButtonMin_clicked()
{
    if (ui->line->text() != "-")
    {
        calc.setFirstOperand(ui->line->text().toDouble());
        calc.setOperationType("+");
        ui->line->clear();
        operationButtonsEnabled(false);
    }
}

void MainWindow::on_pushButtonRes_clicked()
{
    calc.setSecondOperand(ui->line->text().toDouble());

    if (!qIsNaN(calc.getFirstOperand())  &&
        !qIsNaN(calc.getSecondOperand()) &&
        calc.getOperationType() != "")
    {
        ui->line->setText(QString::number(calc.calculate()));
        operationButtonsEnabled(true);
    }

}

void MainWindow::operationButtonsEnabled(bool state)
{
    ui->pushButtonAdd->setEnabled(state);
    ui->pushButtonMult->setEnabled(state);
    ui->pushButtonMin->setEnabled(state);
    ui->pushButtonDiv->setEnabled(state);
}
