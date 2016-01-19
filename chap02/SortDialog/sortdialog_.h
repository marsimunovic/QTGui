#ifndef SORTDIALOG__H
#define SORTDIALOG__H

#include <QDialog>
#include <ui_sortdialog_.h>

namespace Ui {
class SortDialog_;
}

class SortDialog_ : public QDialog, public Ui::SortDialog_
{
    Q_OBJECT

public:
    explicit SortDialog_(QWidget *parent = 0);

    void setColumnRange(QChar first, QChar last);

    ~SortDialog_();

private:
//    Ui::SortDialog_ *ui;
};

#endif // SORTDIALOG__H
