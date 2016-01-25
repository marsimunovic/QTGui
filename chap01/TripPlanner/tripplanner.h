#ifndef TRIPPLANNER_H
#define TRIPPLANNER_H

#include <QDialog>

namespace Ui {
class TripPlanner;
}

class TripPlanner : public QDialog
{
    Q_OBJECT

public:
    explicit TripPlanner(QWidget *parent = 0);
    ~TripPlanner();

private:
    Ui::TripPlanner *ui;
};

#endif // TRIPPLANNER_H
