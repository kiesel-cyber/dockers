/********************************************************************************
** Form generated from reading UI file 'ConfigDialog.ui'
**
** Created by: Qt User Interface Compiler version 5.12.8
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_CONFIGDIALOG_H
#define UI_CONFIGDIALOG_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QDialogButtonBox>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QListWidget>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QStackedWidget>

QT_BEGIN_NAMESPACE

class Ui_ConfigDialog
{
public:
    QGridLayout *gridLayout;
    QListWidget *qlwIcons;
    QHBoxLayout *horizontalLayout;
    QDialogButtonBox *pageButtonBox;
    QSpacerItem *spacerItem;
    QDialogButtonBox *dialogButtonBox;
    QStackedWidget *qswPages;

    void setupUi(QDialog *ConfigDialog)
    {
        if (ConfigDialog->objectName().isEmpty())
            ConfigDialog->setObjectName(QString::fromUtf8("ConfigDialog"));
        ConfigDialog->resize(709, 505);
        ConfigDialog->setSizeGripEnabled(true);
        gridLayout = new QGridLayout(ConfigDialog);
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        qlwIcons = new QListWidget(ConfigDialog);
        qlwIcons->setObjectName(QString::fromUtf8("qlwIcons"));
        QSizePolicy sizePolicy(QSizePolicy::Minimum, QSizePolicy::Expanding);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(qlwIcons->sizePolicy().hasHeightForWidth());
        qlwIcons->setSizePolicy(sizePolicy);
        qlwIcons->setIconSize(QSize(24, 24));
        qlwIcons->setResizeMode(QListView::Adjust);
        qlwIcons->setLayoutMode(QListView::Batched);
        qlwIcons->setUniformItemSizes(true);

        gridLayout->addWidget(qlwIcons, 0, 0, 1, 1);

        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        pageButtonBox = new QDialogButtonBox(ConfigDialog);
        pageButtonBox->setObjectName(QString::fromUtf8("pageButtonBox"));
        pageButtonBox->setOrientation(Qt::Horizontal);

        horizontalLayout->addWidget(pageButtonBox);

        spacerItem = new QSpacerItem(474, 22, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout->addItem(spacerItem);

        dialogButtonBox = new QDialogButtonBox(ConfigDialog);
        dialogButtonBox->setObjectName(QString::fromUtf8("dialogButtonBox"));
        dialogButtonBox->setOrientation(Qt::Horizontal);
        dialogButtonBox->setStandardButtons(QDialogButtonBox::Apply|QDialogButtonBox::Cancel|QDialogButtonBox::Ok);

        horizontalLayout->addWidget(dialogButtonBox);


        gridLayout->addLayout(horizontalLayout, 1, 0, 1, 3);

        qswPages = new QStackedWidget(ConfigDialog);
        qswPages->setObjectName(QString::fromUtf8("qswPages"));
        QSizePolicy sizePolicy1(QSizePolicy::Expanding, QSizePolicy::Expanding);
        sizePolicy1.setHorizontalStretch(1);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(qswPages->sizePolicy().hasHeightForWidth());
        qswPages->setSizePolicy(sizePolicy1);

        gridLayout->addWidget(qswPages, 0, 1, 1, 1);


        retranslateUi(ConfigDialog);
        QObject::connect(dialogButtonBox, SIGNAL(accepted()), ConfigDialog, SLOT(accept()));
        QObject::connect(dialogButtonBox, SIGNAL(rejected()), ConfigDialog, SLOT(reject()));

        QMetaObject::connectSlotsByName(ConfigDialog);
    } // setupUi

    void retranslateUi(QDialog *ConfigDialog)
    {
        ConfigDialog->setWindowTitle(QApplication::translate("ConfigDialog", "Mumble Configuration", nullptr));
    } // retranslateUi

};

namespace Ui {
    class ConfigDialog: public Ui_ConfigDialog {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_CONFIGDIALOG_H
