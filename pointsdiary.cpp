#include "pointsdiary.h"
#include "ui_pointsdiary.h"

#include <QStandardPaths>
#include <QFile>
#include <QString>

PointsDiary::PointsDiary(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::PointsDiary)
{
    ui->setupUi(this);
    QFile file("/sdcard/PointsDiary/test.txt");
    file.open(QIODevice::ReadWrite);
    ui->lineEdit->setText(QString::number(file.exists()));
}

PointsDiary::~PointsDiary()
{
    delete ui;
}
