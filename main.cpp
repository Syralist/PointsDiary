#include "pointsdiary.h"
#include <QApplication>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    PointsDiary w;
    w.show();

    return a.exec();
}
