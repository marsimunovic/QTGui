/********************************************************************************
** Form generated from reading UI file 'sortdialog_.ui'
**
** Created by: Qt User Interface Compiler version 5.5.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_SORTDIALOG__H
#define UI_SORTDIALOG__H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QDialog>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QVBoxLayout>

QT_BEGIN_NAMESPACE

class Ui_SortDialog_
{
public:
    QHBoxLayout *horizontalLayout;
    QGridLayout *gridLayout_4;
    QGroupBox *primaryGroupBox;
    QGridLayout *gridLayout;
    QLabel *label;
    QComboBox *primaryColumnCombo;
    QSpacerItem *horizontalSpacer;
    QLabel *label_2;
    QComboBox *primaryOrderCombo;
    QVBoxLayout *verticalLayout;
    QPushButton *okButton;
    QPushButton *cancelButton;
    QSpacerItem *verticalSpacer;
    QPushButton *moreButton;
    QSpacerItem *verticalSpacer_2;
    QGroupBox *secondaryGroupBox;
    QGridLayout *gridLayout_2;
    QLabel *label_3;
    QComboBox *secondaryColumnCombo;
    QSpacerItem *horizontalSpacer_2;
    QLabel *label_4;
    QComboBox *secondaryOrderCombo;
    QGroupBox *tertiaryGroupBox;
    QGridLayout *gridLayout_3;
    QLabel *label_5;
    QComboBox *tertiaryColumnCombo;
    QSpacerItem *horizontalSpacer_3;
    QLabel *label_6;
    QComboBox *tertiaryOrderCombo;

    void setupUi(QDialog *SortDialog_)
    {
        if (SortDialog_->objectName().isEmpty())
            SortDialog_->setObjectName(QStringLiteral("SortDialog_"));
        SortDialog_->resize(337, 342);
        horizontalLayout = new QHBoxLayout(SortDialog_);
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        gridLayout_4 = new QGridLayout();
        gridLayout_4->setObjectName(QStringLiteral("gridLayout_4"));
        primaryGroupBox = new QGroupBox(SortDialog_);
        primaryGroupBox->setObjectName(QStringLiteral("primaryGroupBox"));
        gridLayout = new QGridLayout(primaryGroupBox);
        gridLayout->setObjectName(QStringLiteral("gridLayout"));
        label = new QLabel(primaryGroupBox);
        label->setObjectName(QStringLiteral("label"));

        gridLayout->addWidget(label, 0, 0, 1, 1);

        primaryColumnCombo = new QComboBox(primaryGroupBox);
        primaryColumnCombo->setObjectName(QStringLiteral("primaryColumnCombo"));

        gridLayout->addWidget(primaryColumnCombo, 0, 1, 1, 1);

        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        gridLayout->addItem(horizontalSpacer, 0, 2, 1, 1);

        label_2 = new QLabel(primaryGroupBox);
        label_2->setObjectName(QStringLiteral("label_2"));

        gridLayout->addWidget(label_2, 1, 0, 1, 1);

        primaryOrderCombo = new QComboBox(primaryGroupBox);
        primaryOrderCombo->setObjectName(QStringLiteral("primaryOrderCombo"));

        gridLayout->addWidget(primaryOrderCombo, 1, 1, 1, 2);


        gridLayout_4->addWidget(primaryGroupBox, 0, 0, 1, 1);

        verticalLayout = new QVBoxLayout();
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        okButton = new QPushButton(SortDialog_);
        okButton->setObjectName(QStringLiteral("okButton"));

        verticalLayout->addWidget(okButton);

        cancelButton = new QPushButton(SortDialog_);
        cancelButton->setObjectName(QStringLiteral("cancelButton"));

        verticalLayout->addWidget(cancelButton);

        verticalSpacer = new QSpacerItem(20, 0, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout->addItem(verticalSpacer);

        moreButton = new QPushButton(SortDialog_);
        moreButton->setObjectName(QStringLiteral("moreButton"));
        moreButton->setCheckable(true);
        moreButton->setAutoDefault(true);

        verticalLayout->addWidget(moreButton);


        gridLayout_4->addLayout(verticalLayout, 0, 1, 2, 1);

        verticalSpacer_2 = new QSpacerItem(20, 7, QSizePolicy::Minimum, QSizePolicy::Expanding);

        gridLayout_4->addItem(verticalSpacer_2, 1, 0, 1, 1);

        secondaryGroupBox = new QGroupBox(SortDialog_);
        secondaryGroupBox->setObjectName(QStringLiteral("secondaryGroupBox"));
        gridLayout_2 = new QGridLayout(secondaryGroupBox);
        gridLayout_2->setObjectName(QStringLiteral("gridLayout_2"));
        label_3 = new QLabel(secondaryGroupBox);
        label_3->setObjectName(QStringLiteral("label_3"));

        gridLayout_2->addWidget(label_3, 0, 0, 1, 1);

        secondaryColumnCombo = new QComboBox(secondaryGroupBox);
        secondaryColumnCombo->setObjectName(QStringLiteral("secondaryColumnCombo"));

        gridLayout_2->addWidget(secondaryColumnCombo, 0, 1, 1, 1);

        horizontalSpacer_2 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        gridLayout_2->addItem(horizontalSpacer_2, 0, 2, 1, 1);

        label_4 = new QLabel(secondaryGroupBox);
        label_4->setObjectName(QStringLiteral("label_4"));

        gridLayout_2->addWidget(label_4, 1, 0, 1, 1);

        secondaryOrderCombo = new QComboBox(secondaryGroupBox);
        secondaryOrderCombo->setObjectName(QStringLiteral("secondaryOrderCombo"));

        gridLayout_2->addWidget(secondaryOrderCombo, 1, 1, 1, 2);


        gridLayout_4->addWidget(secondaryGroupBox, 2, 0, 1, 1);

        tertiaryGroupBox = new QGroupBox(SortDialog_);
        tertiaryGroupBox->setObjectName(QStringLiteral("tertiaryGroupBox"));
        gridLayout_3 = new QGridLayout(tertiaryGroupBox);
        gridLayout_3->setObjectName(QStringLiteral("gridLayout_3"));
        label_5 = new QLabel(tertiaryGroupBox);
        label_5->setObjectName(QStringLiteral("label_5"));

        gridLayout_3->addWidget(label_5, 0, 0, 1, 1);

        tertiaryColumnCombo = new QComboBox(tertiaryGroupBox);
        tertiaryColumnCombo->setObjectName(QStringLiteral("tertiaryColumnCombo"));

        gridLayout_3->addWidget(tertiaryColumnCombo, 0, 1, 1, 1);

        horizontalSpacer_3 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        gridLayout_3->addItem(horizontalSpacer_3, 0, 2, 1, 1);

        label_6 = new QLabel(tertiaryGroupBox);
        label_6->setObjectName(QStringLiteral("label_6"));

        gridLayout_3->addWidget(label_6, 1, 0, 1, 1);

        tertiaryOrderCombo = new QComboBox(tertiaryGroupBox);
        tertiaryOrderCombo->setObjectName(QStringLiteral("tertiaryOrderCombo"));

        gridLayout_3->addWidget(tertiaryOrderCombo, 1, 1, 1, 2);


        gridLayout_4->addWidget(tertiaryGroupBox, 3, 0, 1, 1);


        horizontalLayout->addLayout(gridLayout_4);


        retranslateUi(SortDialog_);
        QObject::connect(okButton, SIGNAL(clicked()), SortDialog_, SLOT(accept()));
        QObject::connect(cancelButton, SIGNAL(clicked()), SortDialog_, SLOT(reject()));
        QObject::connect(moreButton, SIGNAL(toggled(bool)), secondaryGroupBox, SLOT(setVisible(bool)));
        QObject::connect(moreButton, SIGNAL(toggled(bool)), tertiaryGroupBox, SLOT(setVisible(bool)));

        okButton->setDefault(true);


        QMetaObject::connectSlotsByName(SortDialog_);
    } // setupUi

    void retranslateUi(QDialog *SortDialog_)
    {
        SortDialog_->setWindowTitle(QApplication::translate("SortDialog_", "Dialog", 0));
        primaryGroupBox->setTitle(QApplication::translate("SortDialog_", "&PrimaryKey", 0));
        label->setText(QApplication::translate("SortDialog_", "Column:", 0));
        primaryColumnCombo->clear();
        primaryColumnCombo->insertItems(0, QStringList()
         << QApplication::translate("SortDialog_", "None", 0)
        );
        label_2->setText(QApplication::translate("SortDialog_", "Order:", 0));
        primaryOrderCombo->clear();
        primaryOrderCombo->insertItems(0, QStringList()
         << QApplication::translate("SortDialog_", "Ascending", 0)
         << QApplication::translate("SortDialog_", "Descending", 0)
        );
        okButton->setText(QApplication::translate("SortDialog_", "OK", 0));
        cancelButton->setText(QApplication::translate("SortDialog_", "Cancel", 0));
        moreButton->setText(QApplication::translate("SortDialog_", "&More", 0));
        secondaryGroupBox->setTitle(QApplication::translate("SortDialog_", "&SecondaryKey", 0));
        label_3->setText(QApplication::translate("SortDialog_", "Column:", 0));
        secondaryColumnCombo->clear();
        secondaryColumnCombo->insertItems(0, QStringList()
         << QApplication::translate("SortDialog_", "None", 0)
        );
        label_4->setText(QApplication::translate("SortDialog_", "Order:", 0));
        secondaryOrderCombo->clear();
        secondaryOrderCombo->insertItems(0, QStringList()
         << QApplication::translate("SortDialog_", "Ascending", 0)
         << QApplication::translate("SortDialog_", "Descending", 0)
        );
        tertiaryGroupBox->setTitle(QApplication::translate("SortDialog_", "&TertiaryKey", 0));
        label_5->setText(QApplication::translate("SortDialog_", "Column:", 0));
        tertiaryColumnCombo->clear();
        tertiaryColumnCombo->insertItems(0, QStringList()
         << QApplication::translate("SortDialog_", "None", 0)
        );
        label_6->setText(QApplication::translate("SortDialog_", "Order:", 0));
        tertiaryOrderCombo->clear();
        tertiaryOrderCombo->insertItems(0, QStringList()
         << QApplication::translate("SortDialog_", "Ascending", 0)
         << QApplication::translate("SortDialog_", "Descending", 0)
        );
    } // retranslateUi

};

namespace Ui {
    class SortDialog_: public Ui_SortDialog_ {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_SORTDIALOG__H
