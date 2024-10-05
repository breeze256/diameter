/********************************************************************************
** Form generated from reading UI file 'diameter.ui'
**
** Created by: Qt User Interface Compiler version 5.15.15
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_DIAMETER_H
#define UI_DIAMETER_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_diameter
{
public:
    QWidget *centralwidget;
    QMenuBar *menubar;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *diameter)
    {
        if (diameter->objectName().isEmpty())
            diameter->setObjectName(QString::fromUtf8("diameter"));
        diameter->resize(800, 600);
        centralwidget = new QWidget(diameter);
        centralwidget->setObjectName(QString::fromUtf8("centralwidget"));
        diameter->setCentralWidget(centralwidget);
        menubar = new QMenuBar(diameter);
        menubar->setObjectName(QString::fromUtf8("menubar"));
        diameter->setMenuBar(menubar);
        statusbar = new QStatusBar(diameter);
        statusbar->setObjectName(QString::fromUtf8("statusbar"));
        diameter->setStatusBar(statusbar);

        retranslateUi(diameter);

        QMetaObject::connectSlotsByName(diameter);
    } // setupUi

    void retranslateUi(QMainWindow *diameter)
    {
        diameter->setWindowTitle(QCoreApplication::translate("diameter", "diameter", nullptr));
    } // retranslateUi

};

namespace Ui {
    class diameter: public Ui_diameter {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_DIAMETER_H
