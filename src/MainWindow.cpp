#include "MainWindow.h"
#include "ui_MainWindow.h"
#include <QLabel>
#include <qlabel.h>
#include <qnamespace.h>

MainWindow::MainWindow(QWidget* parent)
    : QMainWindow(parent)
    , ui(new Ui_diameter)
{
    ui->setupUi(this);

    QLabel *helloLabel = new QLabel(tr("Hello, world!"), this);
    helloLabel -> setAlignment(Qt::AlignCenter);
}

MainWindow::~MainWindow()
{
    delete ui; 
}