/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 5.5.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QSpinBox>
#include <QtWidgets/QTextBrowser>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QWidget *centralWidget;
    QLabel *label_1;
    QLabel *label_2;
    QLabel *label_3;
    QSpinBox *input1;
    QLabel *label_4;
    QSpinBox *input2;
    QLabel *label_5;
    QTextBrowser *output;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName(QStringLiteral("MainWindow"));
        MainWindow->resize(400, 300);
        centralWidget = new QWidget(MainWindow);
        centralWidget->setObjectName(QStringLiteral("centralWidget"));
        label_1 = new QLabel(centralWidget);
        label_1->setObjectName(QStringLiteral("label_1"));
        label_1->setGeometry(QRect(40, 30, 59, 16));
        label_2 = new QLabel(centralWidget);
        label_2->setObjectName(QStringLiteral("label_2"));
        label_2->setGeometry(QRect(150, 30, 59, 16));
        label_3 = new QLabel(centralWidget);
        label_3->setObjectName(QStringLiteral("label_3"));
        label_3->setGeometry(QRect(240, 30, 59, 16));
        input1 = new QSpinBox(centralWidget);
        input1->setObjectName(QStringLiteral("input1"));
        input1->setGeometry(QRect(40, 60, 48, 24));
        label_4 = new QLabel(centralWidget);
        label_4->setObjectName(QStringLiteral("label_4"));
        label_4->setGeometry(QRect(110, 60, 16, 16));
        input2 = new QSpinBox(centralWidget);
        input2->setObjectName(QStringLiteral("input2"));
        input2->setGeometry(QRect(150, 60, 48, 24));
        label_5 = new QLabel(centralWidget);
        label_5->setObjectName(QStringLiteral("label_5"));
        label_5->setGeometry(QRect(210, 60, 21, 16));
        output = new QTextBrowser(centralWidget);
        output->setObjectName(QStringLiteral("output"));
        output->setGeometry(QRect(230, 60, 51, 31));
        MainWindow->setCentralWidget(centralWidget);

        retranslateUi(MainWindow);

        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QApplication::translate("MainWindow", "MainWindow", 0));
        label_1->setText(QApplication::translate("MainWindow", "Input 1", 0));
        label_2->setText(QApplication::translate("MainWindow", "Input 2", 0));
        label_3->setText(QApplication::translate("MainWindow", "Output", 0));
        label_4->setText(QApplication::translate("MainWindow", "+", 0));
        label_5->setText(QApplication::translate("MainWindow", "=", 0));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
