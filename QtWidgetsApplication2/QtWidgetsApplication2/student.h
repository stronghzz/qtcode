#pragma once

#include <QObject>

class student  : public QObject
{
	Q_OBJECT

public:
	student(QObject *parent);
	~student();
public slots:
	void treat();
	void treat(QString foodname);
};
