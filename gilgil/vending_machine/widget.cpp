#include "widget.h"
#include "ui_widget.h"
#include <QMessageBox>


Widget::Widget(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::Widget)
{
    ui->setupUi(this);

    ui->pbCoffee->setEnabled(false);
    ui->pbTea->setEnabled(false);
    ui->pbGongcha->setEnabled(false);
}

Widget::~Widget()
{
    delete ui;
}
void Widget::changeMoney(int n){
    money+=n;

    if(money>=100){
        ui->pbCoffee->setEnabled(true);
        if(money>=150){
            ui->pbTea->setEnabled(true);
            if(money>=200){
                ui->pbGongcha->setEnabled(true);
            }
        }
    }
    else if(money<100){
        ui->pbCoffee->setEnabled(false);
        if(money<150){
            ui->pbTea->setEnabled(false);
            if(money<200){
                ui->pbGongcha->setEnabled(false);
            }
        }
    }
    ui->lcdNumber->display(QString::number(money));

}
void Widget::on_pb10_clicked()
{
    changeMoney(10);
}

void Widget::on_pb50_clicked()
{
    changeMoney(50);
}

void Widget::on_pb100_clicked()
{
    changeMoney(100);
}

void Widget::on_pb500_clicked()
{
    changeMoney(500);
}

void Widget::on_pbCoffee_clicked()
{
    changeMoney(-100);
}

void Widget::on_pbTea_clicked()
{
    changeMoney(-150);
}

void Widget::on_pbGongcha_clicked()
{
    changeMoney(-200);
}

void Widget::on_ret_clicked()
{
    QMessageBox msg;

    int num1,num2,num3,num4,a,b,c;
    num1=money/500;
    a=money%500;
    num2=a/100;
    b=money%100;
    num3=b/50;
    c=money%50;
    num4=c/10;
    changeMoney(-money);
    msg.information(nullptr,"Return",QString("500: %1 100: %2 50: %3 10: %4").arg(num1).arg(num2).arg(num3).arg(num4));

}
