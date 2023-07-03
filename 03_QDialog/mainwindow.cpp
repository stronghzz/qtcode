#include "mainwindow.h"
#include "ui_mainwindow.h"
#include <QDialog>
#include <QDebug>
MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    //点击新建按键，弹出一个对话框
    connect(ui->actionnew_2,&QAction::triggered,[=](){
        //对话框 分类
        //模态对话框（不可以对其他窗口进行操作）非模态对话框（可以对其他窗口进行操作）
        //模态创建
//        QDialog dlg(this);
//        dlg.resize(200,100);
//        dlg.exec();
//        qDebug() << "模态对话框弹出了";
        //非模态
        QDialog *dlg = new QDialog(this);
        dlg->resize(500,200);
        dlg->show();
        dlg->setAttribute(Qt::WA_DeleteOnClose);//55号属性
    });
}

MainWindow::~MainWindow()
{
    delete ui;
}

