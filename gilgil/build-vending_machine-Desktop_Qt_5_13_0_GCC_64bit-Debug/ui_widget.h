/********************************************************************************
** Form generated from reading UI file 'widget.ui'
**
** Created by: Qt User Interface Compiler version 5.13.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_WIDGET_H
#define UI_WIDGET_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QLCDNumber>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_Widget
{
public:
    QLCDNumber *lcdNumber;
    QPushButton *pb10;
    QPushButton *pb50;
    QPushButton *pb100;
    QPushButton *pb500;
    QPushButton *pbCoffee;
    QPushButton *pbTea;
    QPushButton *pbGongcha;
    QPushButton *ret;

    void setupUi(QWidget *Widget)
    {
        if (Widget->objectName().isEmpty())
            Widget->setObjectName(QString::fromUtf8("Widget"));
        Widget->resize(400, 300);
        lcdNumber = new QLCDNumber(Widget);
        lcdNumber->setObjectName(QString::fromUtf8("lcdNumber"));
        lcdNumber->setGeometry(QRect(23, 20, 351, 81));
        pb10 = new QPushButton(Widget);
        pb10->setObjectName(QString::fromUtf8("pb10"));
        pb10->setGeometry(QRect(50, 140, 89, 25));
        pb50 = new QPushButton(Widget);
        pb50->setObjectName(QString::fromUtf8("pb50"));
        pb50->setGeometry(QRect(50, 170, 89, 25));
        pb100 = new QPushButton(Widget);
        pb100->setObjectName(QString::fromUtf8("pb100"));
        pb100->setGeometry(QRect(50, 200, 89, 25));
        pb500 = new QPushButton(Widget);
        pb500->setObjectName(QString::fromUtf8("pb500"));
        pb500->setGeometry(QRect(50, 230, 89, 25));
        pbCoffee = new QPushButton(Widget);
        pbCoffee->setObjectName(QString::fromUtf8("pbCoffee"));
        pbCoffee->setGeometry(QRect(260, 140, 111, 25));
        pbTea = new QPushButton(Widget);
        pbTea->setObjectName(QString::fromUtf8("pbTea"));
        pbTea->setGeometry(QRect(260, 170, 111, 25));
        pbGongcha = new QPushButton(Widget);
        pbGongcha->setObjectName(QString::fromUtf8("pbGongcha"));
        pbGongcha->setGeometry(QRect(260, 200, 111, 25));
        ret = new QPushButton(Widget);
        ret->setObjectName(QString::fromUtf8("ret"));
        ret->setGeometry(QRect(260, 230, 111, 25));

        retranslateUi(Widget);

        QMetaObject::connectSlotsByName(Widget);
    } // setupUi

    void retranslateUi(QWidget *Widget)
    {
        Widget->setWindowTitle(QCoreApplication::translate("Widget", "Widget", nullptr));
        pb10->setText(QCoreApplication::translate("Widget", "10won", nullptr));
        pb50->setText(QCoreApplication::translate("Widget", "50won", nullptr));
        pb100->setText(QCoreApplication::translate("Widget", "100won", nullptr));
        pb500->setText(QCoreApplication::translate("Widget", "500won", nullptr));
        pbCoffee->setText(QCoreApplication::translate("Widget", "coffee(100)", nullptr));
        pbTea->setText(QCoreApplication::translate("Widget", "tea(150)", nullptr));
        pbGongcha->setText(QCoreApplication::translate("Widget", "Gongcha(200)", nullptr));
        ret->setText(QCoreApplication::translate("Widget", "return", nullptr));
    } // retranslateUi

};

namespace Ui {
    class Widget: public Ui_Widget {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_WIDGET_H
