#include "QtWidgetsApplication1.h"
#include <QtWidgets/QApplication>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);//应用程序对象，在qt中，有且仅有一个
    QtWidgetsApplication1 w;
    w.show();
    return a.exec();//进入消息循环
}
