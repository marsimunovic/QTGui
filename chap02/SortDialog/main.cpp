#include "sortdialog_.h"
#include <QApplication>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    SortDialog_ *dialog = new SortDialog_;
    dialog->setColumnRange('C', 'F');
    dialog->show();

    return a.exec();
}
