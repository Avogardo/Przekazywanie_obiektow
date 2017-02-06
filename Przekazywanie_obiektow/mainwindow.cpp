#include "mainwindow.h"
#include "ui_mainwindow.h"
#include "klasa2.h"
#include <QString>

MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);
}

MainWindow::~MainWindow()
{
    delete ui;
}

int MainWindow::zapodaj()
{
    Klasa2 b1(5);
//    QString zmienna = QStringLiteral("My magic number is %1. That's all!").arg(b1.getB());




   return b1.getB();
}

void MainWindow::on_pushButton_clicked()
{
    ui->textBrowser ->setText(QStringLiteral("My magic number is %1. That's all!").arg(zapodaj()));
}
//    b= ui->Ekran ->text().toDouble();
