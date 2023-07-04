#include "mainwindow.h"
#include "ui_mainwindow.h"
#include <QDialog>
#include <QDebug>
#include <QMessageBox>
#include <QColorDialog>
#include <QFileDialog>
#include <QFontDialog>
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
  /*      QDialog *dlg = new QDialog(this);
        dlg->resize(500,200);
        dlg->show();
        dlg->setAttribute(Qt::WA_DeleteOnClose);*///55号属性
        //消息对话框
        //错误对话框
        //QMessageBox::critical(this,"critical","错误");
        //信息对话框
        //QMessageBox::information(this,"info","信息");
        //提问对话框
//        if (QMessageBox::Save == QMessageBox::question(this,"ques","提问",QMessageBox::Save|QMessageBox::Cancel))
//        {
//            qDebug() << "选择的是保存";
//        }
//        else
//        {
//            qDebug() << "选择的是取消";
//        }
        //警告对话框
       // QMessageBox::warning(this,"waring","警告");
        //其他标准对话框
//        QColor color = QColorDialog::getColor(QColor(255,0,0));
//        qDebug() << "r = " << color.red() << "g = " << color.green() << "b = " << color.blue();
       // QString str = QFileDialog::getOpenFileName(this,"打开文件","C:\\Users\\86159\\Desktop");
        //qDebug() << str;//返回值是选取的路径
        //字体对话框
        bool flag;
        QFontDialog::getFont(&flag,QFont("华文彩云",36));
    });
}

MainWindow::~MainWindow()
{
    delete ui;
}

