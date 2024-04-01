#include "page4.h"
#include "ui_page4.h"

page4::page4(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::page4)
{
    ui->setupUi(this);
    ui->spinBox->setMinimum(16);
    ui->spinBox->setMaximum(55);
    QStringList monthes = (QStringList()
                           <<" "
                           <<"January"
                           <<"Feburary"
                           <<"March"
                           <<"April"
                           <<"May"
                           <<"June"
                           <<"July"
                           <<"August"
                           <<"September"
                           <<"October"
                           <<"November"
                           <<"December");
    ui->comboBox->addItems(monthes);

    QStringList years = (QStringList()
                         <<" "
                         <<"1969"
                         <<"1970"
                         <<"1971"
                         <<"1972"
                         <<"1973"
                         <<"1974"
                         <<"1975"
                         <<"1976"
                         <<"1977"
                         <<"1978"
                         <<"1979"
                         <<"1980"
                         <<"1981"
                         <<"1982"
                         <<"1983"
                         <<"1984"
                         <<"1985"
                         <<"1986"
                         <<"1987"
                         <<"1988"
                         <<"1989"
                         <<"1990"
                         <<"1991"
                         <<"1992"
                         <<"1993"
                         <<"1994"
                         <<"1995"
                         <<"1996"
                         <<"1997"
                         <<"1998"
                         <<"1999"
                         <<"2000"
                         <<"2001"
                         <<"2002"
                         <<"2003"
                         <<"2004"
                         <<"2005"
                         <<"2006"
                         <<"2007"
                         <<"2008");
    ui->comboBox_2->addItems(years);
    QStringList jobs = (QStringList()
                        <<" "
                        <<"Data Science"
                        <<"Blockchain"
                        <<"Programming"
                        <<"Mobile Application"
                        <<"Artificial Intelligence (AI)"
                        <<"Machine Learning"
                        <<"Computer Science"
                        <<"Mechanical Engineering"
                        <<"Web Development"
                        <<"Software Development"
                        <<"Network Security"
                        );
    ui->comboBox_3->addItems(jobs);
    QStringList type = (QStringList()
                        <<" "
                        <<"Full-time"
                        <<"Part-time"
                        <<"Contract"
                        <<"Temporary"
                        <<"Volunteer"
                        );
    ui->comboBox_4->addItems(type);
    QStringList company =(QStringList()
                         <<" "
                         <<"PART AVA Software Development"
                         <<"Softdesk Technologies"
                         <<"Part Sofware Group"
                         <<"Aucema"
                          );
    ui->comboBox_5->addItems(company);
}

page4::~page4()
{
    delete ui;
}


