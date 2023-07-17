/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 6.4.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QWidget *centralwidget;
    QMenuBar *menubar;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName("MainWindow");
        MainWindow->resize(800, 600);
        MainWindow->setStyleSheet(QString::fromUtf8("QWidget{\n"
"background-color:rgba(0,0,0,0.5);\n"
"border: none;\n"
"border-radius:20%;\n"
"}\n"
"\n"
"QStackedWidget{\n"
"background-color:rgba(0,0,0,0.5);\n"
"border: none;\n"
"border-radius:20%;\n"
"}\n"
"\n"
"QMainWindow{\n"
"border-radius:none;\n"
"}\n"
"\n"
"QWidget#centralwidget{\n"
"background-image: url(:/image/main.jpg);\n"
"border-radius:0;\n"
"}\n"
"\n"
"QPushButton{\n"
"background:none;\n"
"border-radius:10px;\n"
"color:#fff;\n"
"font-weight:bold;\n"
"font-size:25px;\n"
"min-height:50;\n"
"border:2px solid #000;\n"
"}\n"
"\n"
"QPushButton:hover{\n"
"background-color:#C1DCCB;\n"
"color:#1847A7;\n"
"qproperty-text: 1;\n"
"}\n"
"\n"
"QPushButton:pressed{\n"
"background-color:#829389;\n"
"}\n"
"\n"
"QLineEdit{\n"
"background-color:rgb(135, 207, 225);\n"
"border-radius:10px;\n"
"color:#000;\n"
"font-weight:bold;\n"
"font-size:25px;\n"
"min-height:40;\n"
"qproperty-alignment: AlignCenter;\n"
"}\n"
"\n"
"QLabel{\n"
"background-color:none;\n"
"border-radius:10px;\n"
"color:#fff;\n"
"font-weight:bold;\n"
""
                        "font-size:25px;\n"
"min-height:40;\n"
"max-height:40;\n"
"qproperty-alignment: AlignCenter;\n"
"}\n"
"\n"
"QToolButton{\n"
"background-color:rgb(193, 220, 203);\n"
"border-radius:10px;\n"
"color:#000;\n"
"font-weight:bold;\n"
"font-size:25px;\n"
"min-height:30;\n"
"min-width:30;\n"
"max-width:30;\n"
"max-height:30;\n"
"}\n"
"\n"
"QToolButton:hover{\n"
"background-color: rgb(85, 87, 83);\n"
"}\n"
"\n"
"QListWidget{\n"
"color:#fff;\n"
"font-size:25px;\n"
"padding:10%;\n"
"background-color:rgba(32, 74, 135,0.95);\n"
"}\n"
"\n"
"QTextEdit{\n"
"font-size:35px;\n"
"color:#fff;\n"
"}\n"
"\n"
"QTextBrowser{\n"
"font-size:35px;\n"
"}\n"
""));
        centralwidget = new QWidget(MainWindow);
        centralwidget->setObjectName("centralwidget");
        centralwidget->setStyleSheet(QString::fromUtf8(""));
        MainWindow->setCentralWidget(centralwidget);
        menubar = new QMenuBar(MainWindow);
        menubar->setObjectName("menubar");
        menubar->setGeometry(QRect(0, 0, 800, 30));
        MainWindow->setMenuBar(menubar);
        statusbar = new QStatusBar(MainWindow);
        statusbar->setObjectName("statusbar");
        MainWindow->setStatusBar(statusbar);

        retranslateUi(MainWindow);

        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QCoreApplication::translate("MainWindow", "MainWindow", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
