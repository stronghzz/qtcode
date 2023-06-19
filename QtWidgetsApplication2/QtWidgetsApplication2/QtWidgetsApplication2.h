#pragma once

#include <QtWidgets/QWidget>
#include "ui_QtWidgetsApplication2.h"
#include "teacher.h"
#include "student.h"
#pragma execution_character_set("utf-8")// 该指令仅支持VS环境
class QtWidgetsApplication2 : public QWidget
{
    Q_OBJECT

public:
    QtWidgetsApplication2(QWidget *parent = nullptr);
    ~QtWidgetsApplication2();

private:
    student* st;
    teacher* zt;
    Ui::QtWidgetsApplication2Class ui;
    void classover();
};
