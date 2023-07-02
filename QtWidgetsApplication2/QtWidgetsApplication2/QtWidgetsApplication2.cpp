#include "QtWidgetsApplication2.h"
#include <qpushbutton.h>
#include "teacher.h"
#include "student.h"
#include <qdebug.h>
QtWidgetsApplication2::QtWidgetsApplication2(QWidget *parent)
    : QWidget(parent)
{
    ui.setupUi(this);
    QPushButton* btn = new QPushButton("�¿�",this);
    QPushButton* btn2 = new QPushButton("����2", this);//���ƣ���ָ��
    resize(600, 400);
    btn2->move(100, 100);
    setWindowTitle("����");
    setFixedSize(600, 400);
    btn2->resize(50, 50);
    //connect(btn2, &QPushButton::clicked, this, &QWidget::close);
    this->zt = new teacher(this);
    this->st = new student(this);
    void (teacher:: * teacherSignal)(QString) = &teacher::hungry;
    void (student:: * studentSlot)(QString) = &student::treat;
    void (teacher:: * teacherSignal2)(void) = &teacher::hungry;
    void (student:: * studentSlot2)(void) = &student::treat;
    //connect(zt, &teacher::hungry, st, &student::treat);
    connect(zt, teacherSignal, st, studentSlot);
    //classover();
    //connect(btn, &QPushButton::clicked, this, &QtWidgetsApplication2::classover);
    connect(btn, &QPushButton::clicked, zt, teacherSignal2);
    connect(zt, teacherSignal2, st, studentSlot2);
    //�Ͽ��ź�
    //disconnect(zt, teacherSignal, st, studentSlot);
    //[=]() {
    //    btn->setText("aaa");
    //}();
    //int m = 10;
    //connect(btn, &QPushButton::clicked, this, [m]()mutable { m += 10; qDebug() << m; });//mutable�����޸Ŀ���
    //connect(btn2, &QPushButton::clicked, this, [m]() {qDebug() << m; });
    connect(btn2, &QPushButton::clicked, this, [&]() {
        emit zt->hungry("noodles1");
       // btn2->setText("�ر�");
        });
}

QtWidgetsApplication2::~QtWidgetsApplication2()
{}

void QtWidgetsApplication2::classover()
{
    emit zt->hungry("noodles");
}