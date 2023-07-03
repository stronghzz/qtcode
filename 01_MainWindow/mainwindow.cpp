#include "mainwindow.h"
#include <QMenuBar>
#include <QToolBar>
#include <QPushButton>
#include <QStatusBar>
#include <QLabel>
#include <QDockWidget>
#include <QTextEdit>
MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
{
    resize(600,400);
    QMenuBar * bar = menuBar();
    setMenuBar(bar);
    QMenu * fileMenu = bar->addMenu("文件");
    QMenu * editMenu = bar->addMenu("编辑");
    QAction * newAction = fileMenu->addAction("新建");
    fileMenu->addSeparator();//添加分隔线
    QAction * openAction = fileMenu->addAction("打开");
    editMenu->addAction("撤销");
    //工具栏 可以有多个
    QToolBar * toolBar = new QToolBar(this);
    addToolBar(Qt::LeftToolBarArea,toolBar);
    toolBar->setAllowedAreas(Qt::LeftToolBarArea | Qt::RightToolBarArea);
    toolBar->setFloatable(false);//设置浮动
    toolBar->setMovable(false);//总开关
    toolBar->addAction(newAction);
    toolBar->addSeparator();
    toolBar->addAction(openAction);
    //工具栏中添加控件
    QPushButton * btn = new QPushButton("aa",this);
    toolBar->addWidget(btn);
    //状态栏
    QStatusBar * stBar = statusBar();
    setStatusBar(stBar);
    //放标签控件
    QLabel * label = new QLabel("提示信息",this);
    stBar->addWidget(label);
    QLabel * label2 = new QLabel("右侧提示信息",this);
    stBar->addPermanentWidget(label2);
    //铆接部件（浮动窗口） 可以有多个
    QDockWidget * dockWidget = new QDockWidget("浮动",this);
    addDockWidget(Qt::BottomDockWidgetArea,dockWidget);
    //设置后期停靠区域，只允许上下
    //dockWidget->setAllowedAreas(Qt::TopDockWidgetArea | Qt::BottomDockWidgetArea);
    //设置中心部件
    QTextEdit * edit = new QTextEdit(this);
    setCentralWidget(edit);
}

MainWindow::~MainWindow()
{
}

