#include "MainWindow.h"
#include <QApplication>

#pragma comment(lib, "user32.lib")

int main(int argc, char *argv[])
{
    QApplication diameter(argc, argv);
    MainWindow Window1;
    Window1.setWindowTitle("Diameter MainWindow");
    Window1.show();
    return diameter.exec();
}