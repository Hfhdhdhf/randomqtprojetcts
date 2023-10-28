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
    QPushButton *pushButton;
    QLabel *F;
    QLabel *label;
    QLabel *non;
    QLabel *non2;
    QLabel *non3AndLast;
    QLabel *help;
    QLineEdit *lineEdit;
    QLabel *betamo;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName(QString::fromUtf8("MainWindow"));
        MainWindow->resize(400, 300);
        centralwidget = new QWidget(MainWindow);
        centralwidget->setObjectName(QString::fromUtf8("centralwidget"));
        pushButton = new QPushButton(centralwidget);
        pushButton->setObjectName(QString::fromUtf8("pushButton"));
        pushButton->setGeometry(QRect(150, 250, 87, 26));
        F = new QLabel(centralwidget);
        F->setObjectName(QString::fromUtf8("F"));
        F->setGeometry(QRect(20, 20, 51, 18));
        label = new QLabel(centralwidget);
        label->setObjectName(QString::fromUtf8("label"));
        label->setGeometry(QRect(80, 20, 131, 18));
        non = new QLabel(centralwidget);
        non->setObjectName(QString::fromUtf8("non"));
        non->setGeometry(QRect(90, 110, 41, 18));
        non2 = new QLabel(centralwidget);
        non2->setObjectName(QString::fromUtf8("non2"));
        non2->setGeometry(QRect(170, 110, 41, 18));
        non3AndLast = new QLabel(centralwidget);
        non3AndLast->setObjectName(QString::fromUtf8("non3AndLast"));
        non3AndLast->setGeometry(QRect(240, 110, 41, 18));
        help = new QLabel(centralwidget);
        help->setObjectName(QString::fromUtf8("help"));
        help->setGeometry(QRect(70, 170, 251, 61));
        lineEdit = new QLineEdit(centralwidget);
        lineEdit->setObjectName(QString::fromUtf8("lineEdit"));
        lineEdit->setGeometry(QRect(130, 50, 113, 26));
        betamo = new QLabel(centralwidget);
        betamo->setObjectName(QString::fromUtf8("betamo"));
        betamo->setGeometry(QRect(40, 50, 81, 18));
        MainWindow->setCentralWidget(centralwidget);

        retranslateUi(MainWindow);

        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QCoreApplication::translate("MainWindow", "MainWindow", nullptr));
        pushButton->setText(QCoreApplication::translate("MainWindow", "Bet", nullptr));
        F->setText(QCoreApplication::translate("MainWindow", "Money:", nullptr));
#if QT_CONFIG(whatsthis)
        label->setWhatsThis(QCoreApplication::translate("MainWindow", "<html><head/><body><p><br/></p></body></html>", nullptr));
#endif // QT_CONFIG(whatsthis)
        label->setText(QCoreApplication::translate("MainWindow", "0", nullptr));
        non->setText(QCoreApplication::translate("MainWindow", "NONE", nullptr));
        non2->setText(QCoreApplication::translate("MainWindow", "NONE", nullptr));
        non3AndLast->setText(QCoreApplication::translate("MainWindow", "NONE", nullptr));
        help->setText(QCoreApplication::translate("MainWindow", "Get the same number to win the prize", nullptr));
        lineEdit->setText(QString());
        betamo->setText(QCoreApplication::translate("MainWindow", "Bet amount:", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
