#pragma once

#include <QtWidgets/QMainWindow>
#include "ui_QtWidgetsApplication1.h"

class QtWidgetsApplication1 : public QMainWindow
{
    Q_OBJECT  // ����ʹ���źźͲ�

public:
    QtWidgetsApplication1(QWidget *parent = nullptr);
    ~QtWidgetsApplication1();
private slots:
    void on_pushButton();

private:
    Ui::QtWidgetsApplication1Class ui;
};
