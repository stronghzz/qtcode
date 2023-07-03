#include "mainwindow.h"
#include "ui_mainwindow.h"

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    //ui->actionnew->setIcon(QIcon("C:/qtcode/0034034892281415_b.jpg"));
    ui->actionnew->setIcon(QIcon(":/test/test.jpg"));
}

MainWindow::~MainWindow()
{
    delete ui;
}

