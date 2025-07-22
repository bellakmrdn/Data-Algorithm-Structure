/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 6.9.1
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
#include <QtWidgets/QTextEdit>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QWidget *centralwidget;
    QLabel *label;
    QLabel *label_2;
    QPushButton *btnBubble;
    QTextEdit *txtInsert;
    QPushButton *btnMerge;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName("MainWindow");
        MainWindow->resize(678, 495);
        MainWindow->setStyleSheet(QString::fromUtf8("background-color: rgb(251, 242, 255);"));
        centralwidget = new QWidget(MainWindow);
        centralwidget->setObjectName("centralwidget");
        label = new QLabel(centralwidget);
        label->setObjectName("label");
        label->setGeometry(QRect(100, 40, 661, 51));
        QFont font;
        font.setFamilies({QString::fromUtf8("Berlin Sans FB")});
        font.setPointSize(37);
        label->setFont(font);
        label->setStyleSheet(QString::fromUtf8("color: rgb(0, 0, 0);"));
        label_2 = new QLabel(centralwidget);
        label_2->setObjectName("label_2");
        label_2->setGeometry(QRect(90, 140, 161, 41));
        label_2->setStyleSheet(QString::fromUtf8("color: rgb(0, 0, 0);"));
        btnBubble = new QPushButton(centralwidget);
        btnBubble->setObjectName("btnBubble");
        btnBubble->setGeometry(QRect(140, 290, 181, 161));
        QFont font1;
        font1.setPointSize(16);
        font1.setBold(true);
        btnBubble->setFont(font1);
        btnBubble->setCursor(QCursor(Qt::CursorShape::PointingHandCursor));
        btnBubble->setStyleSheet(QString::fromUtf8("color: rgb(0, 0, 0);\n"
"background-color: rgb(204, 194, 207);\n"
"gridline-color: rgb(0, 0, 0);\n"
"border-color: rgb(0, 0, 0);"));
        txtInsert = new QTextEdit(centralwidget);
        txtInsert->setObjectName("txtInsert");
        txtInsert->setGeometry(QRect(240, 150, 231, 31));
        txtInsert->setStyleSheet(QString::fromUtf8("\n"
"background-color: rgb(255, 255, 255);\n"
"color: rgb(0, 0, 0);\n"
"border-color: rgb(255, 255, 255);"));
        btnMerge = new QPushButton(centralwidget);
        btnMerge->setObjectName("btnMerge");
        btnMerge->setGeometry(QRect(380, 290, 181, 161));
        btnMerge->setFont(font1);
        btnMerge->setCursor(QCursor(Qt::CursorShape::ArrowCursor));
        btnMerge->setStyleSheet(QString::fromUtf8("color: rgb(0, 0, 0);\n"
"background-color: rgb(204, 194, 207);\n"
"gridline-color: rgb(0, 0, 0);\n"
"border-color: rgb(0, 0, 0);"));
        MainWindow->setCentralWidget(centralwidget);

        retranslateUi(MainWindow);

        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QCoreApplication::translate("MainWindow", "MainWindow", nullptr));
        label->setText(QCoreApplication::translate("MainWindow", "SORTING APPLICATION", nullptr));
        label_2->setText(QCoreApplication::translate("MainWindow", "INSERT 5 NUMBER : ", nullptr));
        btnBubble->setText(QCoreApplication::translate("MainWindow", "BUBBLE SORT", nullptr));
        btnMerge->setText(QCoreApplication::translate("MainWindow", "MERGE SORT", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
