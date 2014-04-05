#include "pointsdiary.h"
#include "ui_pointsdiary.h"

PointsDiary::PointsDiary(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::PointsDiary)
{
    ui->setupUi(this);
}

PointsDiary::~PointsDiary()
{
    delete ui;
}
