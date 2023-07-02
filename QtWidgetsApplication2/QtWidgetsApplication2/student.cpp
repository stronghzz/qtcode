#include "student.h"
#include <QDebug>
student::student(QObject *parent)
	: QObject(parent)
{}

student::~student()
{}

void student::treat()
{
	qDebug() << "qinglaoshichifan ";
}

void student::treat(QString foodname)
{
	qDebug() << "qinglaoshichifan" << foodname;
}