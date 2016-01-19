#ifndef GOTOCELL_H
#define GOTOCELL_H

#include <QDialog>
#include "ui_gotocelldialog.h"


class GoToCell : public QDialog, public Ui::gotocelldialog
{
    Q_OBJECT
public:
    GoToCell(QWidget *parent = 0);
private slots:
    void on_lineEdit_textChanged();
};

#endif // GOTOCELL_H
