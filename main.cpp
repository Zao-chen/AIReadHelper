#include "framelessWidget.h"

#include <QApplication>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    framelessWidget w;
    w.setWindowFlag(Qt::FramelessWindowHint);
    w.setAttribute(Qt::WA_TranslucentBackground);
    w.show();
    return a.exec();
}
