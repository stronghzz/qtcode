#include "QtWidgetsApplication1.h"
#include <QtWidgets/QApplication>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);//Ӧ�ó��������qt�У����ҽ���һ��
    QtWidgetsApplication1 w;
    w.show();
    return a.exec();//������Ϣѭ��
}
