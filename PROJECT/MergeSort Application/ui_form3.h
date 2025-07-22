/********************************************************************************
** Form generated from reading UI file 'form3.ui'
**
** Created by: Qt User Interface Compiler version 6.9.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_FORM3_H
#define UI_FORM3_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_form3
{
public:
    QLabel *LblMerge;
    QPushButton *btnShowSteps;
    QLabel *lbl1Merge;
    QLabel *lbl2Merge;
    QLabel *lbl3Merge;
    QLabel *lbl4Merge;
    QLabel *lbl5Merge;

    void setupUi(QWidget *form3)
    {
        if (form3->objectName().isEmpty())
            form3->setObjectName("form3");
        form3->resize(678, 495);
        QFont font;
        font.setFamilies({QString::fromUtf8("Verdana")});
        font.setPointSize(14);
        form3->setFont(font);
        form3->setStyleSheet(QString::fromUtf8("background-color: rgb(251, 242, 255);"));
        LblMerge = new QLabel(form3);
        LblMerge->setObjectName("LblMerge");
        LblMerge->setGeometry(QRect(160, 60, 461, 61));
        QFont font1;
        font1.setFamilies({QString::fromUtf8("Berlin Sans FB")});
        font1.setPointSize(48);
        font1.setBold(false);
        LblMerge->setFont(font1);
        LblMerge->setStyleSheet(QString::fromUtf8("color: rgb(0, 0, 0);"));
        btnShowSteps = new QPushButton(form3);
        btnShowSteps->setObjectName("btnShowSteps");
        btnShowSteps->setGeometry(QRect(250, 340, 181, 51));
        QFont font2;
        font2.setFamilies({QString::fromUtf8("Segoe UI")});
        font2.setPointSize(14);
        font2.setBold(true);
        btnShowSteps->setFont(font2);
        btnShowSteps->setStyleSheet(QString::fromUtf8("color: rgb(0, 0, 0);\n"
"background-color: rgb(204, 194, 207);\n"
"gridline-color: rgb(0, 0, 0);\n"
"border-color: rgb(0, 0, 0);"));
        lbl1Merge = new QLabel(form3);
        lbl1Merge->setObjectName("lbl1Merge");
        lbl1Merge->setGeometry(QRect(70, 160, 101, 91));
        QFont font3;
        font3.setFamilies({QString::fromUtf8("Verdana")});
        font3.setPointSize(36);
        font3.setBold(false);
        lbl1Merge->setFont(font3);
        lbl1Merge->setAutoFillBackground(false);
        lbl1Merge->setStyleSheet(QString::fromUtf8("background-color: white;\n"
"border: 1px solid black;\n"
"color: black;\n"
"padding: 3px;\n"
""));
        lbl1Merge->setFrameShape(QFrame::Shape::Panel);
        lbl2Merge = new QLabel(form3);
        lbl2Merge->setObjectName("lbl2Merge");
        lbl2Merge->setGeometry(QRect(180, 160, 101, 91));
        QFont font4;
        font4.setFamilies({QString::fromUtf8("Verdana")});
        font4.setPointSize(36);
        lbl2Merge->setFont(font4);
        lbl2Merge->setAutoFillBackground(false);
        lbl2Merge->setStyleSheet(QString::fromUtf8("background-color: white;\n"
"border: 1px solid black;\n"
"color: black;\n"
"padding: 3px;\n"
""));
        lbl2Merge->setFrameShape(QFrame::Shape::Panel);
        lbl3Merge = new QLabel(form3);
        lbl3Merge->setObjectName("lbl3Merge");
        lbl3Merge->setGeometry(QRect(290, 160, 101, 91));
        lbl3Merge->setFont(font4);
        lbl3Merge->setAutoFillBackground(false);
        lbl3Merge->setStyleSheet(QString::fromUtf8("background-color: white;\n"
"border: 1px solid black;\n"
"color: black;\n"
"padding: 3px;\n"
""));
        lbl3Merge->setFrameShape(QFrame::Shape::Panel);
        lbl4Merge = new QLabel(form3);
        lbl4Merge->setObjectName("lbl4Merge");
        lbl4Merge->setGeometry(QRect(400, 160, 101, 91));
        lbl4Merge->setFont(font4);
        lbl4Merge->setAutoFillBackground(false);
        lbl4Merge->setStyleSheet(QString::fromUtf8("background-color: white;\n"
"border: 1px solid black;\n"
"color: black;\n"
"padding: 3px;\n"
""));
        lbl4Merge->setFrameShape(QFrame::Shape::Panel);
        lbl5Merge = new QLabel(form3);
        lbl5Merge->setObjectName("lbl5Merge");
        lbl5Merge->setGeometry(QRect(510, 160, 101, 91));
        lbl5Merge->setFont(font4);
        lbl5Merge->setAutoFillBackground(false);
        lbl5Merge->setStyleSheet(QString::fromUtf8("background-color: white;\n"
"border: 1px solid black;\n"
"color: black;\n"
"padding: 3px;\n"
""));
        lbl5Merge->setFrameShape(QFrame::Shape::Panel);
        lbl5Merge->setAlignment(Qt::AlignmentFlag::AlignCenter);

        retranslateUi(form3);

        QMetaObject::connectSlotsByName(form3);
    } // setupUi

    void retranslateUi(QWidget *form3)
    {
        form3->setWindowTitle(QCoreApplication::translate("form3", "Form", nullptr));
        LblMerge->setText(QCoreApplication::translate("form3", "MERGE SORT", nullptr));
        btnShowSteps->setText(QCoreApplication::translate("form3", "SHOW STEPS", nullptr));
        lbl1Merge->setText(QString());
        lbl2Merge->setText(QString());
        lbl3Merge->setText(QString());
        lbl4Merge->setText(QString());
        lbl5Merge->setText(QString());
    } // retranslateUi

};

namespace Ui {
    class form3: public Ui_form3 {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_FORM3_H
