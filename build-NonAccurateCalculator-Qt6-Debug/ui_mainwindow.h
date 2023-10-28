/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 6.3.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QLabel>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QWidget *centralwidget;
    QLabel *point;
    QPushButton *click;
    QPushButton *upgrade1;
    QPushButton *pushButton_3;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName(QString::fromUtf8("MainWindow"));
        MainWindow->resize(370, 280);
        centralwidget = new QWidget(MainWindow);
        centralwidget->setObjectName(QString::fromUtf8("centralwidget"));
        point = new QLabel(centralwidget);
        point->setObjectName(QString::fromUtf8("point"));
        point->setGeometry(QRect(120, 80, 111, 31));
        click = new QPushButton(centralwidget);
        click->setObjectName(QString::fromUtf8("click"));
        click->setGeometry(QRect(20, 240, 87, 26));
        upgrade1 = new QPushButton(centralwidget);
        upgrade1->setObjectName(QString::fromUtf8("upgrade1"));
        upgrade1->setGeometry(QRect(130, 240, 87, 26));
        pushButton_3 = new QPushButton(centralwidget);
        pushButton_3->setObjectName(QString::fromUtf8("pushButton_3"));
        pushButton_3->setGeometry(QRect(240, 240, 87, 26));
        MainWindow->setCentralWidget(centralwidget);

        retranslateUi(MainWindow);

        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QCoreApplication::translate("MainWindow", "MainWindow", nullptr));
        point->setText(QCoreApplication::translate("MainWindow", "<html><head/><body><p align=\"center\">0</p></body></html>", nullptr));
        click->setText(QCoreApplication::translate("MainWindow", "Click me", nullptr));
        upgrade1->setText(QCoreApplication::translate("MainWindow", "+10 upgrade", nullptr));
        pushButton_3->setText(QCoreApplication::translate("MainWindow", "*2 click", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
