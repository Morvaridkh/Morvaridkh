#include "page2.h"
#include "ui_page2.h"
#include "QMessageBox"
#include "page3.h"
#include "ui_page3.h"
#include <QtSql>
#include <QSqlDatabase>
#include <QSqlDriver>
#include <QSqlQuery>
#include <QSqlQueryModel>

int r;

page2::page2(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::page2)
{
    ui->setupUi(this);
    ui->lineEdit_2->setEchoMode(QLineEdit::Password);
    ui->pushButton_4->setEnabled(false);
    QSqlDatabase database;
    database = QSqlDatabase::addDatabase("SQLLITE");
    database.setDatabaseName("c:\\Users\\Morvarid\\Desktop\\sign in.db");
    database.open();
}

page2::~page2()
{
    delete ui;
}

void page2::on_pushButton_3_clicked()
{
    ui->lineEdit_2->setEchoMode(QLineEdit::Normal);
}

void page2::on_pushButton_clicked()
{
    r = rand()%4;
    switch (r)
    {
     case 0:
        ui->label_6->setStyleSheet("image: url(:/new/prefix1/cap1.jpg)");
        break;
     case 1:
        ui->label_6->setStyleSheet("image: url(:/new/prefix1/cap2.png)");
        break;
     case 2:
        ui->label_6->setStyleSheet("image: url(:/new/prefix1/cap3.webp)");
        break;
    case 3:
        ui->label_6->setStyleSheet("image: url(:/new/prefix1/cap4.png)");
        break;
    }
    ui->groupBox_2->show();
    ui->pushButton->setEnabled(false);
}



void page2::on_pushButton_2_clicked()
{
    if(r==0)
    {
        if(ui->lineEdit_3->text()=="captcha246")
        {
            ui->pushButton_2->show();
        }
        else
        {
            QMessageBox::warning(this ,"wrong information","please enter correct captcha!","tryagain");
        }
    }
    else if(r==1)
    {
        if(ui->lineEdit_3->text()=="Td4eva")
        {
            ui->pushButton_2->show();
        }
        else
        {
            QMessageBox::warning(this ,"wrong information","please enter correct captcha!","tryagain");
        }
    }
    else if(r==2)
    {
        if(ui->lineEdit_3->text()=="qVpXayk")
        {
            ui->pushButton_2->show();
        }
        else
        {
            QMessageBox::warning(this ,"wrong information","please enter correct captcha!","tryagain");
        }
    }
    else if(r==3)
    {
        if(ui->lineEdit_3->text()=="3VP645")
        {
            ui->pushButton_2->show();
        }
        else
        {
            QMessageBox::warning(this ,"wrong information","please enter correct captcha!","tryagain");
        }
    }
    ui->pushButton_4->setEnabled(true);
}


void page2::on_pushButton_4_clicked()
{
    QSqlQuery q;
    QString u , p;
    u = ui->lineEdit->text();
    p = ui->lineEdit_2->text();
    q.exec("INSERT INTO sign in(Email or Phone ,Password) VALUES ('"+u+"', '"+p+"')");

    page3 *w3 = new page3;
    w3->setWindowTitle("Code");
    int random;
    random = rand()%10000;
    w3->ui->lineEdit->setText(QString::number(random));
    w3->show();
}

