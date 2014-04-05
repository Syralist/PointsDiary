#include "pointsdiary.h"
#include "ui_pointsdiary.h"

#include <QStandardPaths>
#include <QFile>
#include <QString>
#include <QDate>

PointsDiary::PointsDiary(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::PointsDiary)
{
    ui->setupUi(this);
    ui->tableView->setAttribute(Qt::WA_AcceptTouchEvents);
    QDate today = QDate::currentDate();
    ui->dateEdit->setDate(today);
    QFile file("/sdcard/PointsDiary/test.txt");
    file.open(QIODevice::ReadWrite);
    ui->lineEdit->setText(QString::number(file.exists()));
}

PointsDiary::~PointsDiary()
{
    delete ui;
}
