/********************************************************************************
** Form generated from reading UI file 'hexspinbox.ui'
**
** Created by: Qt User Interface Compiler version 5.5.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_HEXSPINBOX_H
#define UI_HEXSPINBOX_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_QSpinBox
{
public:

    void setupUi(QWidget *QSpinBox)
    {
        if (QSpinBox->objectName().isEmpty())
            QSpinBox->setObjectName(QStringLiteral("QSpinBox"));
        QSpinBox->resize(400, 300);

        retranslateUi(QSpinBox);

        QMetaObject::connectSlotsByName(QSpinBox);
    } // setupUi

    void retranslateUi(QWidget *QSpinBox)
    {
        QSpinBox->setWindowTitle(QApplication::translate("QSpinBox", "QSpinBox", 0));
    } // retranslateUi

};

namespace Ui {
    class QSpinBox: public Ui_QSpinBox {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_HEXSPINBOX_H
