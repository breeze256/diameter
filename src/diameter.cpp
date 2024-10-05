#include "diameter.h"

diameter::diameter(QWidget* parent)
    : QMainWindow(parent)
    , ui(new Ui_diameter)
{
    ui->setupUi(this);
}

diameter::~diameter()
{
    delete ui; 
}