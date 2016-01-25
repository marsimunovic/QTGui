#include "tripplanner.h"
#include <QApplication>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    TripPlanner w;
    w.show();

    return a.exec();
}
