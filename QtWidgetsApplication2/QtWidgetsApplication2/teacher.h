#pragma once

#include <QObject>

class teacher  : public QObject
{
	Q_OBJECT

public:
	teacher(QObject *parent);
	~teacher();
signals:
	void hungry();
	void hungry(QString foodname);

};
