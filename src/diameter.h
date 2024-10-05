#pragma once
#include "ui_diameter.h"
#include <QMainWindow>

class diameter : public QMainWindow {
    Q_OBJECT
    
public:
    diameter(QWidget* parent = nullptr);
    ~diameter();

private:
    Ui_diameter* ui;
};