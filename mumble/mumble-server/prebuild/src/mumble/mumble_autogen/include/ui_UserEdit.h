/********************************************************************************
** Form generated from reading UI file 'UserEdit.ui'
**
** Created by: Qt User Interface Compiler version 5.12.8
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_USEREDIT_H
#define UI_USEREDIT_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QDialogButtonBox>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QSpinBox>
#include <QtWidgets/QTreeView>
#include "widgets/MUComboBox.h"

QT_BEGIN_NAMESPACE

class Ui_UserEdit
{
public:
    QGridLayout *gridLayout_2;
    QDialogButtonBox *qbbButtons;
    QGroupBox *qgbUserList;
    QGridLayout *gridLayout;
    QPushButton *qpbRename;
    QPushButton *qpbRemove;
    QLineEdit *qlSearch;
    MUComboBox *qcbInactive;
    QSpacerItem *horizontalSpacer;
    QSpinBox *qsbInactive;
    QLabel *qlInactive;
    QTreeView *qtvUserList;

    void setupUi(QDialog *UserEdit)
    {
        if (UserEdit->objectName().isEmpty())
            UserEdit->setObjectName(QString::fromUtf8("UserEdit"));
        UserEdit->resize(542, 470);
        UserEdit->setMinimumSize(QSize(381, 470));
        gridLayout_2 = new QGridLayout(UserEdit);
        gridLayout_2->setObjectName(QString::fromUtf8("gridLayout_2"));
        qbbButtons = new QDialogButtonBox(UserEdit);
        qbbButtons->setObjectName(QString::fromUtf8("qbbButtons"));
        QSizePolicy sizePolicy(QSizePolicy::Expanding, QSizePolicy::Minimum);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(qbbButtons->sizePolicy().hasHeightForWidth());
        qbbButtons->setSizePolicy(sizePolicy);
        qbbButtons->setOrientation(Qt::Horizontal);
        qbbButtons->setStandardButtons(QDialogButtonBox::Cancel|QDialogButtonBox::Ok);

        gridLayout_2->addWidget(qbbButtons, 1, 0, 1, 1);

        qgbUserList = new QGroupBox(UserEdit);
        qgbUserList->setObjectName(QString::fromUtf8("qgbUserList"));
        gridLayout = new QGridLayout(qgbUserList);
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        qpbRename = new QPushButton(qgbUserList);
        qpbRename->setObjectName(QString::fromUtf8("qpbRename"));
        qpbRename->setEnabled(false);
        QSizePolicy sizePolicy1(QSizePolicy::Minimum, QSizePolicy::Fixed);
        sizePolicy1.setHorizontalStretch(0);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(qpbRename->sizePolicy().hasHeightForWidth());
        qpbRename->setSizePolicy(sizePolicy1);

        gridLayout->addWidget(qpbRename, 2, 0, 1, 1);

        qpbRemove = new QPushButton(qgbUserList);
        qpbRemove->setObjectName(QString::fromUtf8("qpbRemove"));
        qpbRemove->setEnabled(false);
        qpbRemove->setFlat(false);

        gridLayout->addWidget(qpbRemove, 2, 1, 1, 1);

        qlSearch = new QLineEdit(qgbUserList);
        qlSearch->setObjectName(QString::fromUtf8("qlSearch"));
        QFont font;
        font.setItalic(true);
        qlSearch->setFont(font);
        qlSearch->setAlignment(Qt::AlignCenter);

        gridLayout->addWidget(qlSearch, 1, 0, 1, 6);

        qcbInactive = new MUComboBox(qgbUserList);
        qcbInactive->addItem(QString());
        qcbInactive->addItem(QString());
        qcbInactive->addItem(QString());
        qcbInactive->addItem(QString());
        qcbInactive->setObjectName(QString::fromUtf8("qcbInactive"));
        sizePolicy1.setHeightForWidth(qcbInactive->sizePolicy().hasHeightForWidth());
        qcbInactive->setSizePolicy(sizePolicy1);

        gridLayout->addWidget(qcbInactive, 2, 5, 1, 1);

        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        gridLayout->addItem(horizontalSpacer, 2, 2, 1, 1);

        qsbInactive = new QSpinBox(qgbUserList);
        qsbInactive->setObjectName(QString::fromUtf8("qsbInactive"));
        QSizePolicy sizePolicy2(QSizePolicy::MinimumExpanding, QSizePolicy::Fixed);
        sizePolicy2.setHorizontalStretch(0);
        sizePolicy2.setVerticalStretch(0);
        sizePolicy2.setHeightForWidth(qsbInactive->sizePolicy().hasHeightForWidth());
        qsbInactive->setSizePolicy(sizePolicy2);
        qsbInactive->setMaximumSize(QSize(48, 16777215));
        qsbInactive->setFrame(true);
        qsbInactive->setMaximum(9999);

        gridLayout->addWidget(qsbInactive, 2, 4, 1, 1);

        qlInactive = new QLabel(qgbUserList);
        qlInactive->setObjectName(QString::fromUtf8("qlInactive"));
        QSizePolicy sizePolicy3(QSizePolicy::Minimum, QSizePolicy::Preferred);
        sizePolicy3.setHorizontalStretch(0);
        sizePolicy3.setVerticalStretch(0);
        sizePolicy3.setHeightForWidth(qlInactive->sizePolicy().hasHeightForWidth());
        qlInactive->setSizePolicy(sizePolicy3);

        gridLayout->addWidget(qlInactive, 2, 3, 1, 1);

        qtvUserList = new QTreeView(qgbUserList);
        qtvUserList->setObjectName(QString::fromUtf8("qtvUserList"));
        qtvUserList->setAlternatingRowColors(true);
        qtvUserList->setSelectionMode(QAbstractItemView::ExtendedSelection);
        qtvUserList->setRootIsDecorated(false);
        qtvUserList->setItemsExpandable(false);
        qtvUserList->setSortingEnabled(true);

        gridLayout->addWidget(qtvUserList, 0, 0, 1, 6);


        gridLayout_2->addWidget(qgbUserList, 0, 0, 1, 1);


        retranslateUi(UserEdit);
        QObject::connect(qbbButtons, SIGNAL(accepted()), UserEdit, SLOT(accept()));
        QObject::connect(qbbButtons, SIGNAL(rejected()), UserEdit, SLOT(reject()));

        QMetaObject::connectSlotsByName(UserEdit);
    } // setupUi

    void retranslateUi(QDialog *UserEdit)
    {
        UserEdit->setWindowTitle(QString());
        qgbUserList->setTitle(QApplication::translate("UserEdit", "Registered Users", nullptr));
        qpbRename->setText(QApplication::translate("UserEdit", "Rename", nullptr));
        qpbRemove->setText(QApplication::translate("UserEdit", "Remove", nullptr));
        qlSearch->setText(QString());
        qlSearch->setPlaceholderText(QApplication::translate("UserEdit", "Who are you looking for?", nullptr));
        qcbInactive->setItemText(0, QApplication::translate("UserEdit", "Days", nullptr));
        qcbInactive->setItemText(1, QApplication::translate("UserEdit", "Weeks", nullptr));
        qcbInactive->setItemText(2, QApplication::translate("UserEdit", "Months", nullptr));
        qcbInactive->setItemText(3, QApplication::translate("UserEdit", "Years", nullptr));

        qlInactive->setText(QApplication::translate("UserEdit", "Inactive for", nullptr));
    } // retranslateUi

};

namespace Ui {
    class UserEdit: public Ui_UserEdit {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_USEREDIT_H
