#include "pointsdiary.h"
#include <QApplication>
#include <QFile>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    PointsDiary w;
    QFile StyleFile(":/Style/Sytlesheet");
    StyleFile.open(QFile::ReadOnly);
    QString StyleString = QLatin1String(StyleFile.readAll());
    a.setStyleSheet(StyleString);
    w.show();

    return a.exec();
}
