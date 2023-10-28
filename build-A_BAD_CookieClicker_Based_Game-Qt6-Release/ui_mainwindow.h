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
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QWidget *centralwidget;
    QLabel *label;
    QPushButton *click;
    QPushButton *multi10;
    QPushButton *multi2;
    QLineEdit *hack;
    QLabel *label_2;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName(QString::fromUtf8("MainWindow"));
        MainWindow->resize(400, 300);
        centralwidget = new QWidget(MainWindow);
        centralwidget->setObjectName(QString::fromUtf8("centralwidget"));
        centralwidget->setStyleSheet(QString::fromUtf8("background-color:gray;"));
        label = new QLabel(centralwidget);
        label->setObjectName(QString::fromUtf8("label"));
        label->setGeometry(QRect(130, 90, 121, 18));
        label->setStyleSheet(QString::fromUtf8("color:white;"));
        click = new QPushButton(centralwidget);
        click->setObjectName(QString::fromUtf8("click"));
        click->setGeometry(QRect(40, 250, 87, 26));
        click->setStyleSheet(QString::fromUtf8("color:white;"));
        multi10 = new QPushButton(centralwidget);
        multi10->setObjectName(QString::fromUtf8("multi10"));
        multi10->setGeometry(QRect(150, 250, 87, 26));
        multi10->setStyleSheet(QString::fromUtf8("color:white;"));
        multi2 = new QPushButton(centralwidget);
        multi2->setObjectName(QString::fromUtf8("multi2"));
        multi2->setGeometry(QRect(260, 250, 87, 26));
        multi2->setStyleSheet(QString::fromUtf8("color:white;"));
        hack = new QLineEdit(centralwidget);
        hack->setObjectName(QString::fromUtf8("hack"));
        hack->setGeometry(QRect(140, 210, 113, 26));
        hack->setStyleSheet(QString::fromUtf8("color:white;"));
        label_2 = new QLabel(centralwidget);
        label_2->setObjectName(QString::fromUtf8("label_2"));
        label_2->setGeometry(QRect(50, 210, 91, 18));
        label_2->setStyleSheet(QString::fromUtf8("color:white;"));
        MainWindow->setCentralWidget(centralwidget);

        retranslateUi(MainWindow);

        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QCoreApplication::translate("MainWindow", "MainWindow", nullptr));
        label->setText(QCoreApplication::translate("MainWindow", "<html><head/><body><p align=\"center\">0</p></body></html>", nullptr));
        click->setText(QCoreApplication::translate("MainWindow", "Click me", nullptr));
        multi10->setText(QCoreApplication::translate("MainWindow", "+10 multi", nullptr));
        multi2->setText(QCoreApplication::translate("MainWindow", "*2 multi", nullptr));
        label_2->setText(QCoreApplication::translate("MainWindow", "Cheat code:", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
