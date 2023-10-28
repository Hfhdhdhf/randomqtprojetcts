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
    QPushButton *ilostF;
    QLabel *F;
    QLabel *igottatakethat;
    QLineEdit *guess;
    QLabel *nothanks;
    QLabel *label;
    QLineEdit *bet;
    QPushButton *pushButton;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName(QString::fromUtf8("MainWindow"));
        MainWindow->resize(400, 300);
        centralwidget = new QWidget(MainWindow);
        centralwidget->setObjectName(QString::fromUtf8("centralwidget"));
        ilostF = new QPushButton(centralwidget);
        ilostF->setObjectName(QString::fromUtf8("ilostF"));
        ilostF->setGeometry(QRect(10, 260, 87, 26));
        F = new QLabel(centralwidget);
        F->setObjectName(QString::fromUtf8("F"));
        F->setGeometry(QRect(10, 10, 51, 18));
        igottatakethat = new QLabel(centralwidget);
        igottatakethat->setObjectName(QString::fromUtf8("igottatakethat"));
        igottatakethat->setGeometry(QRect(60, 10, 71, 18));
        guess = new QLineEdit(centralwidget);
        guess->setObjectName(QString::fromUtf8("guess"));
        guess->setGeometry(QRect(140, 110, 113, 26));
        nothanks = new QLabel(centralwidget);
        nothanks->setObjectName(QString::fromUtf8("nothanks"));
        nothanks->setGeometry(QRect(50, 110, 91, 18));
        label = new QLabel(centralwidget);
        label->setObjectName(QString::fromUtf8("label"));
        label->setGeometry(QRect(50, 150, 66, 18));
        bet = new QLineEdit(centralwidget);
        bet->setObjectName(QString::fromUtf8("bet"));
        bet->setGeometry(QRect(120, 150, 113, 26));
        pushButton = new QPushButton(centralwidget);
        pushButton->setObjectName(QString::fromUtf8("pushButton"));
        pushButton->setGeometry(QRect(300, 260, 80, 26));
        MainWindow->setCentralWidget(centralwidget);
        guess->raise();
        ilostF->raise();
        F->raise();
        igottatakethat->raise();
        nothanks->raise();
        label->raise();
        bet->raise();
        pushButton->raise();

        retranslateUi(MainWindow);

        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QCoreApplication::translate("MainWindow", "MainWindow", nullptr));
        ilostF->setText(QCoreApplication::translate("MainWindow", "GENERATE", nullptr));
        F->setText(QCoreApplication::translate("MainWindow", "money:", nullptr));
        igottatakethat->setText(QCoreApplication::translate("MainWindow", "0", nullptr));
        nothanks->setText(QCoreApplication::translate("MainWindow", "Enter guess:", nullptr));
        label->setText(QCoreApplication::translate("MainWindow", "Enter bet:", nullptr));
        pushButton->setText(QCoreApplication::translate("MainWindow", "Guess", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
