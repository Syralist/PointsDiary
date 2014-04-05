#ifndef POINTSDIARY_H
#define POINTSDIARY_H

#include <QMainWindow>

namespace Ui {
class PointsDiary;
}

class PointsDiary : public QMainWindow
{
    Q_OBJECT

public:
    explicit PointsDiary(QWidget *parent = 0);
    ~PointsDiary();

private:
    Ui::PointsDiary *ui;
};

#endif // POINTSDIARY_H
