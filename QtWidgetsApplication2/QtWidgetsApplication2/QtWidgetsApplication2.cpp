#include "QtWidgetsApplication2.h"
#include <qpushbutton.h>
#include "teacher.h"
#include "student.h"
QtWidgetsApplication2::QtWidgetsApplication2(QWidget *parent)
    : QWidget(parent)
{
    ui.setupUi(this);
    QPushButton* btn = new QPushButton("下课",this);
    QPushButton* btn2 = new QPushButton("按键2", this);//名称，父指针
    resize(600, 400);
    btn2->move(100, 100);
    setWindowTitle("窗口");
    setFixedSize(600, 400);
    btn2->resize(50, 50);
    connect(btn2, &QPushButton::clicked, this, &QWidget::close);
    this->zt = new teacher(this);
    this->st = new student(this);
    void (teacher:: * teacherSignal)(void) = &teacher::hungry;
    void (student:: * studentSlot)(void) = &student::treat;
    //connect(zt, &teacher::hungry, st, &student::treat);
    connect(zt, teacherSignal, st, studentSlot);
    //classover();
    //connect(btn, &QPushButton::clicked, this, &QtWidgetsApplication2::classover);
    connect(btn, &QPushButton::clicked, zt, teacherSignal);
    //断开信号
    //disconnect(zt, teacherSignal, st, studentSlot);

}

QtWidgetsApplication2::~QtWidgetsApplication2()
{}

void QtWidgetsApplication2::classover()
{
    emit zt->hungry("noodles");
}