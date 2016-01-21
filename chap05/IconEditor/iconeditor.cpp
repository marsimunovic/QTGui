#include "iconeditor.h"
#include "ui_iconeditor.h"

IconEditor::IconEditor(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::IconEditor)
{
    ui->setupUi(this);
}

IconEditor::~IconEditor()
{
    delete ui;
}
