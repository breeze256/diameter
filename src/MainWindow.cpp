#include "MainWindow.h"

MainWindow::MainWindow(QWidget* parent)
    : QMainWindow(parent)
    , ui(new Ui_diameter)
{
    ui->setupUi(this);
}

MainWindow::~MainWindow()
{
    delete ui; 
}