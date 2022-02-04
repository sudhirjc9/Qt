#include "mainwindow.h"
#include<QLabel>
#include <QApplication>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    MainWindow w;
    QLabel *label=new QLabel("<h>Hello World""</h>");
    label->show();
    w.show();
    return a.exec();
}
