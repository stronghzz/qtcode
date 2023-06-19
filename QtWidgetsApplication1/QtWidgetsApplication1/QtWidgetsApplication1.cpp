#include "QtWidgetsApplication1.h"
#include <QPushButton.h>

QtWidgetsApplication1::QtWidgetsApplication1(QWidget *parent)
    : QMainWindow(parent)
{
    QPushButton* btn = new QPushButton;
    //btn->show();//用顶层方式显示
    btn->setParent(this);
    btn->setText("第一个按钮");
    ui.setupUi(this);
    connect(ui.pushButton, SIGNAL(clicked(bool)), this, SLOT(on_pushButton()));

}

QtWidgetsApplication1::~QtWidgetsApplication1()
{}

void QtWidgetsApplication1::on_pushButton()
{
    ui.textBrowser->setText("hello,world");
    
}