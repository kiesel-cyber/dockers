/********************************************************************************
** Form generated from reading UI file 'GlobalShortcutTarget.ui'
**
** Created by: Qt User Interface Compiler version 5.12.8
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_GLOBALSHORTCUTTARGET_H
#define UI_GLOBALSHORTCUTTARGET_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QCheckBox>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QDialog>
#include <QtWidgets/QDialogButtonBox>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QListWidget>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QStackedWidget>
#include <QtWidgets/QTreeWidget>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>
#include "widgets/MUComboBox.h"

QT_BEGIN_NAMESPACE

class Ui_GlobalShortcutTarget
{
public:
    QGridLayout *gridLayout;
    QLabel *qlTarget;
    QStackedWidget *qswStack;
    QWidget *qwSelectionPage;
    QHBoxLayout *horizontalLayout_3;
    QGroupBox *qgbSelection;
    QVBoxLayout *verticalLayout_5;
    QLabel *qlWhenShouting;
    QWidget *widget;
    QVBoxLayout *verticalLayout_6;
    QCheckBox *qcbShoutLinks;
    QCheckBox *qcbShoutSubchans;
    QSpacerItem *verticalSpacer_3;
    QWidget *qwUserPage;
    QVBoxLayout *verticalLayout;
    QGroupBox *qgbUser;
    QGridLayout *gridLayout_2;
    QListWidget *qlwUsers;
    MUComboBox *qcbUser;
    QPushButton *qpbAdd;
    QPushButton *qpbRemove;
    QSpacerItem *verticalSpacer;
    QWidget *qwChannelPage;
    QVBoxLayout *verticalLayout_2;
    QGroupBox *qgbChannel;
    QVBoxLayout *verticalLayout_3;
    QTreeWidget *qtwChannels;
    QHBoxLayout *horizontalLayout;
    QLabel *qlGroup;
    QLineEdit *qleGroup;
    QHBoxLayout *horizontalLayout_2;
    QCheckBox *qcbLinks;
    QCheckBox *qcbChildren;
    QGroupBox *qgbModifiers;
    QVBoxLayout *verticalLayout_4;
    QCheckBox *qcbForceCenter;
    QComboBox *qcbTarget;
    QDialogButtonBox *qbbButtons;

    void setupUi(QDialog *GlobalShortcutTarget)
    {
        if (GlobalShortcutTarget->objectName().isEmpty())
            GlobalShortcutTarget->setObjectName(QString::fromUtf8("GlobalShortcutTarget"));
        GlobalShortcutTarget->resize(421, 542);
        gridLayout = new QGridLayout(GlobalShortcutTarget);
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        qlTarget = new QLabel(GlobalShortcutTarget);
        qlTarget->setObjectName(QString::fromUtf8("qlTarget"));

        gridLayout->addWidget(qlTarget, 0, 0, 1, 1);

        qswStack = new QStackedWidget(GlobalShortcutTarget);
        qswStack->setObjectName(QString::fromUtf8("qswStack"));
        qwSelectionPage = new QWidget();
        qwSelectionPage->setObjectName(QString::fromUtf8("qwSelectionPage"));
        horizontalLayout_3 = new QHBoxLayout(qwSelectionPage);
        horizontalLayout_3->setObjectName(QString::fromUtf8("horizontalLayout_3"));
        qgbSelection = new QGroupBox(qwSelectionPage);
        qgbSelection->setObjectName(QString::fromUtf8("qgbSelection"));
        verticalLayout_5 = new QVBoxLayout(qgbSelection);
        verticalLayout_5->setObjectName(QString::fromUtf8("verticalLayout_5"));
        qlWhenShouting = new QLabel(qgbSelection);
        qlWhenShouting->setObjectName(QString::fromUtf8("qlWhenShouting"));

        verticalLayout_5->addWidget(qlWhenShouting);

        widget = new QWidget(qgbSelection);
        widget->setObjectName(QString::fromUtf8("widget"));
        QSizePolicy sizePolicy(QSizePolicy::Preferred, QSizePolicy::Preferred);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(widget->sizePolicy().hasHeightForWidth());
        widget->setSizePolicy(sizePolicy);
        verticalLayout_6 = new QVBoxLayout(widget);
        verticalLayout_6->setObjectName(QString::fromUtf8("verticalLayout_6"));
        qcbShoutLinks = new QCheckBox(widget);
        qcbShoutLinks->setObjectName(QString::fromUtf8("qcbShoutLinks"));

        verticalLayout_6->addWidget(qcbShoutLinks);

        qcbShoutSubchans = new QCheckBox(widget);
        qcbShoutSubchans->setObjectName(QString::fromUtf8("qcbShoutSubchans"));

        verticalLayout_6->addWidget(qcbShoutSubchans);


        verticalLayout_5->addWidget(widget);

        verticalSpacer_3 = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout_5->addItem(verticalSpacer_3);


        horizontalLayout_3->addWidget(qgbSelection);

        qswStack->addWidget(qwSelectionPage);
        qwUserPage = new QWidget();
        qwUserPage->setObjectName(QString::fromUtf8("qwUserPage"));
        verticalLayout = new QVBoxLayout(qwUserPage);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        qgbUser = new QGroupBox(qwUserPage);
        qgbUser->setObjectName(QString::fromUtf8("qgbUser"));
        gridLayout_2 = new QGridLayout(qgbUser);
        gridLayout_2->setObjectName(QString::fromUtf8("gridLayout_2"));
        qlwUsers = new QListWidget(qgbUser);
        qlwUsers->setObjectName(QString::fromUtf8("qlwUsers"));

        gridLayout_2->addWidget(qlwUsers, 0, 0, 4, 1);

        qcbUser = new MUComboBox(qgbUser);
        qcbUser->setObjectName(QString::fromUtf8("qcbUser"));

        gridLayout_2->addWidget(qcbUser, 0, 1, 1, 1);

        qpbAdd = new QPushButton(qgbUser);
        qpbAdd->setObjectName(QString::fromUtf8("qpbAdd"));

        gridLayout_2->addWidget(qpbAdd, 1, 1, 1, 1);

        qpbRemove = new QPushButton(qgbUser);
        qpbRemove->setObjectName(QString::fromUtf8("qpbRemove"));

        gridLayout_2->addWidget(qpbRemove, 2, 1, 1, 1);

        verticalSpacer = new QSpacerItem(20, 94, QSizePolicy::Minimum, QSizePolicy::Expanding);

        gridLayout_2->addItem(verticalSpacer, 3, 1, 1, 1);


        verticalLayout->addWidget(qgbUser);

        qswStack->addWidget(qwUserPage);
        qwChannelPage = new QWidget();
        qwChannelPage->setObjectName(QString::fromUtf8("qwChannelPage"));
        verticalLayout_2 = new QVBoxLayout(qwChannelPage);
        verticalLayout_2->setObjectName(QString::fromUtf8("verticalLayout_2"));
        qgbChannel = new QGroupBox(qwChannelPage);
        qgbChannel->setObjectName(QString::fromUtf8("qgbChannel"));
        verticalLayout_3 = new QVBoxLayout(qgbChannel);
        verticalLayout_3->setObjectName(QString::fromUtf8("verticalLayout_3"));
        qtwChannels = new QTreeWidget(qgbChannel);
        QTreeWidgetItem *__qtreewidgetitem = new QTreeWidgetItem();
        __qtreewidgetitem->setText(0, QString::fromUtf8("Name"));
        qtwChannels->setHeaderItem(__qtreewidgetitem);
        qtwChannels->setObjectName(QString::fromUtf8("qtwChannels"));
        qtwChannels->setIndentation(10);
        qtwChannels->setRootIsDecorated(true);
        qtwChannels->setSortingEnabled(true);
        qtwChannels->setHeaderHidden(true);

        verticalLayout_3->addWidget(qtwChannels);

        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        qlGroup = new QLabel(qgbChannel);
        qlGroup->setObjectName(QString::fromUtf8("qlGroup"));

        horizontalLayout->addWidget(qlGroup);

        qleGroup = new QLineEdit(qgbChannel);
        qleGroup->setObjectName(QString::fromUtf8("qleGroup"));

        horizontalLayout->addWidget(qleGroup);


        verticalLayout_3->addLayout(horizontalLayout);

        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setObjectName(QString::fromUtf8("horizontalLayout_2"));
        qcbLinks = new QCheckBox(qgbChannel);
        qcbLinks->setObjectName(QString::fromUtf8("qcbLinks"));

        horizontalLayout_2->addWidget(qcbLinks);

        qcbChildren = new QCheckBox(qgbChannel);
        qcbChildren->setObjectName(QString::fromUtf8("qcbChildren"));

        horizontalLayout_2->addWidget(qcbChildren);


        verticalLayout_3->addLayout(horizontalLayout_2);


        verticalLayout_2->addWidget(qgbChannel);

        qswStack->addWidget(qwChannelPage);

        gridLayout->addWidget(qswStack, 1, 0, 1, 2);

        qgbModifiers = new QGroupBox(GlobalShortcutTarget);
        qgbModifiers->setObjectName(QString::fromUtf8("qgbModifiers"));
        verticalLayout_4 = new QVBoxLayout(qgbModifiers);
        verticalLayout_4->setObjectName(QString::fromUtf8("verticalLayout_4"));
        qcbForceCenter = new QCheckBox(qgbModifiers);
        qcbForceCenter->setObjectName(QString::fromUtf8("qcbForceCenter"));

        verticalLayout_4->addWidget(qcbForceCenter);


        gridLayout->addWidget(qgbModifiers, 2, 0, 1, 2);

        qcbTarget = new QComboBox(GlobalShortcutTarget);
        qcbTarget->addItem(QString());
        qcbTarget->addItem(QString());
        qcbTarget->addItem(QString());
        qcbTarget->setObjectName(QString::fromUtf8("qcbTarget"));
        QSizePolicy sizePolicy1(QSizePolicy::MinimumExpanding, QSizePolicy::Fixed);
        sizePolicy1.setHorizontalStretch(0);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(qcbTarget->sizePolicy().hasHeightForWidth());
        qcbTarget->setSizePolicy(sizePolicy1);
        qcbTarget->setFrame(true);

        gridLayout->addWidget(qcbTarget, 0, 1, 1, 1);

        qbbButtons = new QDialogButtonBox(GlobalShortcutTarget);
        qbbButtons->setObjectName(QString::fromUtf8("qbbButtons"));
        qbbButtons->setOrientation(Qt::Horizontal);
        qbbButtons->setStandardButtons(QDialogButtonBox::Cancel|QDialogButtonBox::Ok);

        gridLayout->addWidget(qbbButtons, 3, 0, 1, 2);

        QWidget::setTabOrder(qlwUsers, qcbUser);
        QWidget::setTabOrder(qcbUser, qpbAdd);
        QWidget::setTabOrder(qpbAdd, qpbRemove);
        QWidget::setTabOrder(qpbRemove, qtwChannels);
        QWidget::setTabOrder(qtwChannels, qleGroup);
        QWidget::setTabOrder(qleGroup, qcbLinks);
        QWidget::setTabOrder(qcbLinks, qcbChildren);
        QWidget::setTabOrder(qcbChildren, qcbForceCenter);
        QWidget::setTabOrder(qcbForceCenter, qbbButtons);

        retranslateUi(GlobalShortcutTarget);
        QObject::connect(qbbButtons, SIGNAL(accepted()), GlobalShortcutTarget, SLOT(accept()));
        QObject::connect(qbbButtons, SIGNAL(rejected()), GlobalShortcutTarget, SLOT(reject()));

        qswStack->setCurrentIndex(0);


        QMetaObject::connectSlotsByName(GlobalShortcutTarget);
    } // setupUi

    void retranslateUi(QDialog *GlobalShortcutTarget)
    {
        GlobalShortcutTarget->setWindowTitle(QApplication::translate("GlobalShortcutTarget", "Whisper Target", nullptr));
        qlTarget->setText(QApplication::translate("GlobalShortcutTarget", "Shout/Whisper to:", nullptr));
        qgbSelection->setTitle(QApplication::translate("GlobalShortcutTarget", "Current selection", nullptr));
        qlWhenShouting->setText(QApplication::translate("GlobalShortcutTarget", "When shouting to channel:", nullptr));
#ifndef QT_NO_TOOLTIP
        qcbShoutLinks->setToolTip(QApplication::translate("GlobalShortcutTarget", "The whisper will also be transmitted to linked channels.", nullptr));
#endif // QT_NO_TOOLTIP
        qcbShoutLinks->setText(QApplication::translate("GlobalShortcutTarget", "Shout to linked channels", nullptr));
#ifndef QT_NO_TOOLTIP
        qcbShoutSubchans->setToolTip(QApplication::translate("GlobalShortcutTarget", "The whisper will also be sent to the subchannels of the channel target.", nullptr));
#endif // QT_NO_TOOLTIP
        qcbShoutSubchans->setText(QApplication::translate("GlobalShortcutTarget", "Shout to subchannels", nullptr));
        qgbUser->setTitle(QApplication::translate("GlobalShortcutTarget", "List of users", nullptr));
        qpbAdd->setText(QApplication::translate("GlobalShortcutTarget", "Add", nullptr));
        qpbRemove->setText(QApplication::translate("GlobalShortcutTarget", "Remove", nullptr));
        qgbChannel->setTitle(QApplication::translate("GlobalShortcutTarget", "Channel Target", nullptr));
        qlGroup->setText(QApplication::translate("GlobalShortcutTarget", "Restrict to Group", nullptr));
#ifndef QT_NO_TOOLTIP
        qleGroup->setToolTip(QApplication::translate("GlobalShortcutTarget", "If specified, only members of this group will receive the whisper.", nullptr));
#endif // QT_NO_TOOLTIP
#ifndef QT_NO_TOOLTIP
        qcbLinks->setToolTip(QApplication::translate("GlobalShortcutTarget", "The whisper will also be transmitted to linked channels.", nullptr));
#endif // QT_NO_TOOLTIP
        qcbLinks->setText(QApplication::translate("GlobalShortcutTarget", "Shout to Linked channels", nullptr));
#ifndef QT_NO_TOOLTIP
        qcbChildren->setToolTip(QApplication::translate("GlobalShortcutTarget", "The whisper will also be sent to the subchannels of the channel target.", nullptr));
#endif // QT_NO_TOOLTIP
        qcbChildren->setText(QApplication::translate("GlobalShortcutTarget", "Shout to subchannels", nullptr));
        qgbModifiers->setTitle(QApplication::translate("GlobalShortcutTarget", "Modifiers", nullptr));
#ifndef QT_NO_TOOLTIP
        qcbForceCenter->setToolTip(QApplication::translate("GlobalShortcutTarget", "Do not send positional audio information when using this whisper shortcut.", nullptr));
#endif // QT_NO_TOOLTIP
        qcbForceCenter->setText(QApplication::translate("GlobalShortcutTarget", "Ignore positional audio", nullptr));
        qcbTarget->setItemText(0, QApplication::translate("GlobalShortcutTarget", "Current selection", nullptr));
        qcbTarget->setItemText(1, QApplication::translate("GlobalShortcutTarget", "List of users", nullptr));
        qcbTarget->setItemText(2, QApplication::translate("GlobalShortcutTarget", "Channel", nullptr));

    } // retranslateUi

};

namespace Ui {
    class GlobalShortcutTarget: public Ui_GlobalShortcutTarget {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_GLOBALSHORTCUTTARGET_H
