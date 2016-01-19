#include <QApplication>
#include "gotocell.h"

int main(int argc, char *argv[])
{
    QApplication app(argc, argv);
    GoToCell *dialog = new GoToCell;
    dialog->show();
    return app.exec();
}
