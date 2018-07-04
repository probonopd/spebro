#include <QApplication>
#include "mainwindow.h"
#include "utils.h"

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);

    MainWindow w;
    w.show();

    w.setStyleSheet(Utils::getQssContent(":/qss/style.qss"));
    
    return a.exec();
}

