/********************************************************************************
** Form generated from reading UI file 'form2.ui'
**
** Created by: Qt User Interface Compiler version 6.9.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_FORM2_H
#define UI_FORM2_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_form2
{
public:
    QLabel *lbl1Bubble;
    QLabel *lbl3Bubble;
    QLabel *lbl2Bubble;
    QLabel *lbl5Bubble;
    QPushButton *btnShowSteps;
    QLabel *LblBubble;
    QLabel *lbl4Bubble;

    void setupUi(QWidget *form2)
    {
        if (form2->objectName().isEmpty())
            form2->setObjectName("form2");
        form2->resize(678, 495);
        form2->setStyleSheet(QString::fromUtf8("\n"
"background-color: rgb(251, 242, 255);\n"
""));
        lbl1Bubble = new QLabel(form2);
        lbl1Bubble->setObjectName("lbl1Bubble");
        lbl1Bubble->setGeometry(QRect(70, 160, 101, 91));
        QFont font;
        font.setFamilies({QString::fromUtf8("Verdana")});
        font.setPointSize(36);
        font.setBold(false);
        lbl1Bubble->setFont(font);
        lbl1Bubble->setAutoFillBackground(false);
        lbl1Bubble->setStyleSheet(QString::fromUtf8("background-color: white;\n"
"border: 1px solid black;\n"
"color: black;\n"
"padding: 3px;\n"
""));
        lbl1Bubble->setFrameShape(QFrame::Shape::Panel);
        lbl1Bubble->setAlignment(Qt::AlignmentFlag::AlignCenter);
        lbl3Bubble = new QLabel(form2);
        lbl3Bubble->setObjectName("lbl3Bubble");
        lbl3Bubble->setGeometry(QRect(290, 160, 101, 91));
        QFont font1;
        font1.setFamilies({QString::fromUtf8("Verdana")});
        font1.setPointSize(36);
        lbl3Bubble->setFont(font1);
        lbl3Bubble->setAutoFillBackground(false);
        lbl3Bubble->setStyleSheet(QString::fromUtf8("background-color: white;\n"
"border: 1px solid black;\n"
"color: black;\n"
"padding: 3px;\n"
""));
        lbl3Bubble->setFrameShape(QFrame::Shape::Panel);
        lbl3Bubble->setAlignment(Qt::AlignmentFlag::AlignCenter);
        lbl2Bubble = new QLabel(form2);
        lbl2Bubble->setObjectName("lbl2Bubble");
        lbl2Bubble->setGeometry(QRect(180, 160, 101, 91));
        lbl2Bubble->setFont(font1);
        lbl2Bubble->setAutoFillBackground(false);
        lbl2Bubble->setStyleSheet(QString::fromUtf8("background-color: white;\n"
"border: 1px solid black;\n"
"color: black;\n"
"padding: 3px;\n"
""));
        lbl2Bubble->setFrameShape(QFrame::Shape::Panel);
        lbl2Bubble->setAlignment(Qt::AlignmentFlag::AlignCenter);
        lbl5Bubble = new QLabel(form2);
        lbl5Bubble->setObjectName("lbl5Bubble");
        lbl5Bubble->setGeometry(QRect(510, 160, 101, 91));
        lbl5Bubble->setFont(font1);
        lbl5Bubble->setAutoFillBackground(false);
        lbl5Bubble->setStyleSheet(QString::fromUtf8("background-color: white;\n"
"border: 1px solid black;\n"
"color: black;\n"
"padding: 3px;\n"
""));
        lbl5Bubble->setFrameShape(QFrame::Shape::Panel);
        lbl5Bubble->setAlignment(Qt::AlignmentFlag::AlignCenter);
        btnShowSteps = new QPushButton(form2);
        btnShowSteps->setObjectName("btnShowSteps");
        btnShowSteps->setGeometry(QRect(250, 340, 181, 51));
        QFont font2;
        font2.setFamilies({QString::fromUtf8("Segoe UI")});
        font2.setPointSize(16);
        font2.setBold(true);
        btnShowSteps->setFont(font2);
        btnShowSteps->setStyleSheet(QString::fromUtf8("color: rgb(0, 0, 0);\n"
"background-color: rgb(204, 194, 207);\n"
"gridline-color: rgb(0, 0, 0);\n"
"border-color: rgb(0, 0, 0);"));
        LblBubble = new QLabel(form2);
        LblBubble->setObjectName("LblBubble");
        LblBubble->setGeometry(QRect(160, 60, 461, 61));
        QFont font3;
        font3.setFamilies({QString::fromUtf8("Berlin Sans FB")});
        font3.setPointSize(45);
        font3.setBold(false);
        LblBubble->setFont(font3);
        LblBubble->setStyleSheet(QString::fromUtf8("color: rgb(0, 0, 0);"));
        lbl4Bubble = new QLabel(form2);
        lbl4Bubble->setObjectName("lbl4Bubble");
        lbl4Bubble->setGeometry(QRect(400, 160, 101, 91));
        lbl4Bubble->setFont(font1);
        lbl4Bubble->setAutoFillBackground(false);
        lbl4Bubble->setStyleSheet(QString::fromUtf8("background-color: white;\n"
"border: 1px solid black;\n"
"color: black;\n"
"padding: 3px;\n"
""));
        lbl4Bubble->setFrameShape(QFrame::Shape::Panel);
        lbl4Bubble->setAlignment(Qt::AlignmentFlag::AlignCenter);

        retranslateUi(form2);

        QMetaObject::connectSlotsByName(form2);
    } // setupUi

    void retranslateUi(QWidget *form2)
    {
        form2->setWindowTitle(QCoreApplication::translate("form2", "Form", nullptr));
        lbl1Bubble->setText(QString());
        lbl3Bubble->setText(QString());
        lbl2Bubble->setText(QString());
        lbl5Bubble->setText(QString());
        btnShowSteps->setText(QCoreApplication::translate("form2", "SHOW STEPS", nullptr));
        LblBubble->setText(QCoreApplication::translate("form2", "BUBBLE SORT", nullptr));
        lbl4Bubble->setText(QString());
    } // retranslateUi

};

namespace Ui {
    class form2: public Ui_form2 {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_FORM2_H
