#ifndef PAGE3_H
#define PAGE3_H

#include <QMainWindow>

namespace Ui {
class page3;
}

class page3 : public QMainWindow
{
    Q_OBJECT

public:
    explicit page3(QWidget *parent = nullptr);
    ~page3();

public:
    Ui::page3 *ui;
private slots:
    void on_pushButton_clicked();
};

#endif // PAGE3_H
