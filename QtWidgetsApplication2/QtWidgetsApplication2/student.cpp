#include "student.h"
#include <QDebug>
student::student(QObject *parent)
	: QObject(parent)
{}

student::~student()
{}

void student::treat()
{
	qDebug() << "wante eat ";
}

void student::treat(QString foodname)
{
	qDebug() << "wante eat " << foodname;
}