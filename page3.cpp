#include "page3.h"
#include "ui_page3.h"
#include "page4.h"

page3::page3(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::page3)
{
    ui->setupUi(this);
}

page3::~page3()
{
    delete ui;
}

void page3::on_pushButton_clicked()
{
    page4 *w4 = new page4;
    w4->show();
}

