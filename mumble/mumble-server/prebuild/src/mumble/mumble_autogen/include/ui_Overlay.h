/********************************************************************************
** Form generated from reading UI file 'Overlay.ui'
**
** Created by: Qt User Interface Compiler version 5.12.8
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_OVERLAY_H
#define UI_OVERLAY_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QCheckBox>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QFormLayout>
#include <QtWidgets/QFrame>
#include <QtWidgets/QGraphicsView>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QStackedWidget>
#include <QtWidgets/QTabWidget>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>
#include "PathListWidget.h"

QT_BEGIN_NAMESPACE

class Ui_OverlayConfig
{
public:
    QVBoxLayout *vboxLayout;
    QStackedWidget *qswOverlayPage;
    QWidget *qwOverlayConfig;
    QVBoxLayout *verticalLayout_4;
    QWidget *widget;
    QHBoxLayout *horizontalLayout_9;
    QGroupBox *qgbOptions;
    QVBoxLayout *verticalLayout_15;
    QCheckBox *qcbEnable;
    QSpacerItem *horizontalSpacer_6;
    QVBoxLayout *verticalLayout_14;
    QPushButton *qpbLoadPreset;
    QPushButton *qpbSavePreset;
    QPushButton *qpbUninstall;
    QGroupBox *qgpFps;
    QHBoxLayout *horizontalLayout_8;
    QVBoxLayout *verticalLayout_9;
    QCheckBox *qcbShowFps;
    QCheckBox *qcbShowTime;
    QPushButton *qpbFpsFont;
    QPushButton *qpbFpsColor;
    QSpacerItem *verticalSpacer_3;
    QGraphicsView *qgvFpsPreview;
    QTabWidget *qtwSetup;
    QWidget *qwLayoutTab;
    QVBoxLayout *verticalLayout_13;
    QGraphicsView *qgvView;
    QWidget *qwExceptions;
    QVBoxLayout *verticalLayout_2;
    QHBoxLayout *horizontalLayout_3;
    QLabel *label;
    QComboBox *qcbOverlayExclusionMode;
    QSpacerItem *horizontalSpacer;
    QFrame *line;
    QHBoxLayout *horizontalLayout;
    QWidget *qwLaunchers;
    QVBoxLayout *qvblLaunchers;
    QLabel *qlLaunchersLabel;
    PathListWidget *qlwLaunchers;
    QHBoxLayout *horizontalLayout_2;
    QPushButton *qpbLaunchersAdd;
    QPushButton *qpbLaunchersRemove;
    QWidget *qwWhitelist;
    QVBoxLayout *qvblWhitelist;
    QLabel *qlWhitelistLabel;
    PathListWidget *qlwWhitelist;
    QHBoxLayout *horizontalLayout_5;
    QPushButton *qpbWhitelistAdd;
    QPushButton *qpbWhitelistRemove;
    QWidget *qwPaths;
    QVBoxLayout *qvblPaths;
    QLabel *qlPathsLabel;
    PathListWidget *qlwPaths;
    QHBoxLayout *horizontalLayout_7;
    QPushButton *qpbPathsAdd;
    QPushButton *qpbPathsRemove;
    QWidget *qwBlacklist;
    QVBoxLayout *qvblBlacklist;
    QLabel *qlvBlacklistLabel;
    PathListWidget *qlwBlacklist;
    QHBoxLayout *horizontalLayout_10;
    QPushButton *qpbBlacklistAdd;
    QPushButton *qpbBlacklistRemove;
    QWidget *qwOverlayInstall;
    QVBoxLayout *verticalLayout_5;
    QGroupBox *groupBox;
    QVBoxLayout *verticalLayout_11;
    QFormLayout *formLayout;
    QLabel *qlInstallIcon;
    QLabel *qlInstallText;
    QHBoxLayout *horizontalLayout_4;
    QSpacerItem *horizontalSpacer_3;
    QPushButton *qpbInstall;
    QSpacerItem *horizontalSpacer_2;
    QSpacerItem *verticalSpacer_2;
    QWidget *qwOverlayUpgrade;
    QVBoxLayout *verticalLayout_7;
    QGroupBox *groupBox_2;
    QVBoxLayout *verticalLayout_12;
    QFormLayout *formLayout_4;
    QLabel *qlUpgradeIcon;
    QLabel *qlUpgradeText;
    QHBoxLayout *horizontalLayout_6;
    QSpacerItem *horizontalSpacer_4;
    QPushButton *qpbUpgrade;
    QSpacerItem *horizontalSpacer_5;
    QSpacerItem *verticalSpacer;

    void setupUi(QWidget *OverlayConfig)
    {
        if (OverlayConfig->objectName().isEmpty())
            OverlayConfig->setObjectName(QString::fromUtf8("OverlayConfig"));
        OverlayConfig->resize(649, 526);
        OverlayConfig->setWindowTitle(QString::fromUtf8("Form"));
        vboxLayout = new QVBoxLayout(OverlayConfig);
        vboxLayout->setContentsMargins(0, 0, 0, 0);
        vboxLayout->setObjectName(QString::fromUtf8("vboxLayout"));
        qswOverlayPage = new QStackedWidget(OverlayConfig);
        qswOverlayPage->setObjectName(QString::fromUtf8("qswOverlayPage"));
        qwOverlayConfig = new QWidget();
        qwOverlayConfig->setObjectName(QString::fromUtf8("qwOverlayConfig"));
        verticalLayout_4 = new QVBoxLayout(qwOverlayConfig);
        verticalLayout_4->setObjectName(QString::fromUtf8("verticalLayout_4"));
        widget = new QWidget(qwOverlayConfig);
        widget->setObjectName(QString::fromUtf8("widget"));
        QSizePolicy sizePolicy(QSizePolicy::Preferred, QSizePolicy::Maximum);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(widget->sizePolicy().hasHeightForWidth());
        widget->setSizePolicy(sizePolicy);
        horizontalLayout_9 = new QHBoxLayout(widget);
#ifndef Q_OS_MAC
        horizontalLayout_9->setSpacing(6);
#endif
        horizontalLayout_9->setContentsMargins(0, 0, 0, 0);
        horizontalLayout_9->setObjectName(QString::fromUtf8("horizontalLayout_9"));
        horizontalLayout_9->setSizeConstraint(QLayout::SetDefaultConstraint);
        qgbOptions = new QGroupBox(widget);
        qgbOptions->setObjectName(QString::fromUtf8("qgbOptions"));
        QSizePolicy sizePolicy1(QSizePolicy::Preferred, QSizePolicy::Preferred);
        sizePolicy1.setHorizontalStretch(0);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(qgbOptions->sizePolicy().hasHeightForWidth());
        qgbOptions->setSizePolicy(sizePolicy1);
        qgbOptions->setAlignment(Qt::AlignLeading|Qt::AlignLeft|Qt::AlignTop);
        verticalLayout_15 = new QVBoxLayout(qgbOptions);
        verticalLayout_15->setObjectName(QString::fromUtf8("verticalLayout_15"));
        qcbEnable = new QCheckBox(qgbOptions);
        qcbEnable->setObjectName(QString::fromUtf8("qcbEnable"));

        verticalLayout_15->addWidget(qcbEnable);

        horizontalSpacer_6 = new QSpacerItem(40, 0, QSizePolicy::Expanding, QSizePolicy::Minimum);

        verticalLayout_15->addItem(horizontalSpacer_6);

        verticalLayout_14 = new QVBoxLayout();
        verticalLayout_14->setObjectName(QString::fromUtf8("verticalLayout_14"));
        verticalLayout_14->setSizeConstraint(QLayout::SetDefaultConstraint);
        qpbLoadPreset = new QPushButton(qgbOptions);
        qpbLoadPreset->setObjectName(QString::fromUtf8("qpbLoadPreset"));

        verticalLayout_14->addWidget(qpbLoadPreset);

        qpbSavePreset = new QPushButton(qgbOptions);
        qpbSavePreset->setObjectName(QString::fromUtf8("qpbSavePreset"));

        verticalLayout_14->addWidget(qpbSavePreset);

        qpbUninstall = new QPushButton(qgbOptions);
        qpbUninstall->setObjectName(QString::fromUtf8("qpbUninstall"));

        verticalLayout_14->addWidget(qpbUninstall);


        verticalLayout_15->addLayout(verticalLayout_14);


        horizontalLayout_9->addWidget(qgbOptions);

        qgpFps = new QGroupBox(widget);
        qgpFps->setObjectName(QString::fromUtf8("qgpFps"));
        qgpFps->setEnabled(true);
        sizePolicy1.setHeightForWidth(qgpFps->sizePolicy().hasHeightForWidth());
        qgpFps->setSizePolicy(sizePolicy1);
        horizontalLayout_8 = new QHBoxLayout(qgpFps);
        horizontalLayout_8->setObjectName(QString::fromUtf8("horizontalLayout_8"));
        verticalLayout_9 = new QVBoxLayout();
        verticalLayout_9->setObjectName(QString::fromUtf8("verticalLayout_9"));
        verticalLayout_9->setSizeConstraint(QLayout::SetDefaultConstraint);
        qcbShowFps = new QCheckBox(qgpFps);
        qcbShowFps->setObjectName(QString::fromUtf8("qcbShowFps"));

        verticalLayout_9->addWidget(qcbShowFps);

        qcbShowTime = new QCheckBox(qgpFps);
        qcbShowTime->setObjectName(QString::fromUtf8("qcbShowTime"));

        verticalLayout_9->addWidget(qcbShowTime);

        qpbFpsFont = new QPushButton(qgpFps);
        qpbFpsFont->setObjectName(QString::fromUtf8("qpbFpsFont"));

        verticalLayout_9->addWidget(qpbFpsFont);

        qpbFpsColor = new QPushButton(qgpFps);
        qpbFpsColor->setObjectName(QString::fromUtf8("qpbFpsColor"));

        verticalLayout_9->addWidget(qpbFpsColor);

        verticalSpacer_3 = new QSpacerItem(20, 0, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout_9->addItem(verticalSpacer_3);


        horizontalLayout_8->addLayout(verticalLayout_9);

        qgvFpsPreview = new QGraphicsView(qgpFps);
        qgvFpsPreview->setObjectName(QString::fromUtf8("qgvFpsPreview"));
        qgvFpsPreview->setEnabled(true);
        QSizePolicy sizePolicy2(QSizePolicy::Expanding, QSizePolicy::Expanding);
        sizePolicy2.setHorizontalStretch(0);
        sizePolicy2.setVerticalStretch(0);
        sizePolicy2.setHeightForWidth(qgvFpsPreview->sizePolicy().hasHeightForWidth());
        qgvFpsPreview->setSizePolicy(sizePolicy2);
        qgvFpsPreview->setMinimumSize(QSize(256, 100));
        qgvFpsPreview->setMaximumSize(QSize(16777215, 100));
        qgvFpsPreview->setBaseSize(QSize(0, 40));
        qgvFpsPreview->setVerticalScrollBarPolicy(Qt::ScrollBarAlwaysOff);
        qgvFpsPreview->setHorizontalScrollBarPolicy(Qt::ScrollBarAlwaysOff);
        QBrush brush(QColor(128, 128, 128, 255));
        brush.setStyle(Qt::SolidPattern);
        qgvFpsPreview->setBackgroundBrush(brush);
        QBrush brush1(QColor(0, 0, 0, 255));
        brush1.setStyle(Qt::NoBrush);
        qgvFpsPreview->setForegroundBrush(brush1);
        qgvFpsPreview->setRenderHints(QPainter::Antialiasing|QPainter::TextAntialiasing);

        horizontalLayout_8->addWidget(qgvFpsPreview);


        horizontalLayout_9->addWidget(qgpFps);


        verticalLayout_4->addWidget(widget);

        qtwSetup = new QTabWidget(qwOverlayConfig);
        qtwSetup->setObjectName(QString::fromUtf8("qtwSetup"));
        qwLayoutTab = new QWidget();
        qwLayoutTab->setObjectName(QString::fromUtf8("qwLayoutTab"));
        verticalLayout_13 = new QVBoxLayout(qwLayoutTab);
        verticalLayout_13->setObjectName(QString::fromUtf8("verticalLayout_13"));
        qgvView = new QGraphicsView(qwLayoutTab);
        qgvView->setObjectName(QString::fromUtf8("qgvView"));
        QSizePolicy sizePolicy3(QSizePolicy::Expanding, QSizePolicy::Expanding);
        sizePolicy3.setHorizontalStretch(1);
        sizePolicy3.setVerticalStretch(1);
        sizePolicy3.setHeightForWidth(qgvView->sizePolicy().hasHeightForWidth());
        qgvView->setSizePolicy(sizePolicy3);
        qgvView->setVerticalScrollBarPolicy(Qt::ScrollBarAlwaysOff);
        qgvView->setHorizontalScrollBarPolicy(Qt::ScrollBarAlwaysOff);
        qgvView->setBackgroundBrush(brush);
        qgvView->setRenderHints(QPainter::Antialiasing|QPainter::SmoothPixmapTransform|QPainter::TextAntialiasing);

        verticalLayout_13->addWidget(qgvView);

        qtwSetup->addTab(qwLayoutTab, QString());
        qwExceptions = new QWidget();
        qwExceptions->setObjectName(QString::fromUtf8("qwExceptions"));
        verticalLayout_2 = new QVBoxLayout(qwExceptions);
        verticalLayout_2->setObjectName(QString::fromUtf8("verticalLayout_2"));
        horizontalLayout_3 = new QHBoxLayout();
        horizontalLayout_3->setObjectName(QString::fromUtf8("horizontalLayout_3"));
        label = new QLabel(qwExceptions);
        label->setObjectName(QString::fromUtf8("label"));

        horizontalLayout_3->addWidget(label);

        qcbOverlayExclusionMode = new QComboBox(qwExceptions);
        qcbOverlayExclusionMode->setObjectName(QString::fromUtf8("qcbOverlayExclusionMode"));

        horizontalLayout_3->addWidget(qcbOverlayExclusionMode);

        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_3->addItem(horizontalSpacer);


        verticalLayout_2->addLayout(horizontalLayout_3);

        line = new QFrame(qwExceptions);
        line->setObjectName(QString::fromUtf8("line"));
        line->setFrameShape(QFrame::HLine);
        line->setFrameShadow(QFrame::Sunken);

        verticalLayout_2->addWidget(line);

        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        qwLaunchers = new QWidget(qwExceptions);
        qwLaunchers->setObjectName(QString::fromUtf8("qwLaunchers"));
        qvblLaunchers = new QVBoxLayout(qwLaunchers);
        qvblLaunchers->setObjectName(QString::fromUtf8("qvblLaunchers"));
        qlLaunchersLabel = new QLabel(qwLaunchers);
        qlLaunchersLabel->setObjectName(QString::fromUtf8("qlLaunchersLabel"));

        qvblLaunchers->addWidget(qlLaunchersLabel);

        qlwLaunchers = new PathListWidget(qwLaunchers);
        qlwLaunchers->setObjectName(QString::fromUtf8("qlwLaunchers"));

        qvblLaunchers->addWidget(qlwLaunchers);

        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setObjectName(QString::fromUtf8("horizontalLayout_2"));
        qpbLaunchersAdd = new QPushButton(qwLaunchers);
        qpbLaunchersAdd->setObjectName(QString::fromUtf8("qpbLaunchersAdd"));

        horizontalLayout_2->addWidget(qpbLaunchersAdd);

        qpbLaunchersRemove = new QPushButton(qwLaunchers);
        qpbLaunchersRemove->setObjectName(QString::fromUtf8("qpbLaunchersRemove"));
        qpbLaunchersRemove->setEnabled(false);

        horizontalLayout_2->addWidget(qpbLaunchersRemove);


        qvblLaunchers->addLayout(horizontalLayout_2);


        horizontalLayout->addWidget(qwLaunchers);

        qwWhitelist = new QWidget(qwExceptions);
        qwWhitelist->setObjectName(QString::fromUtf8("qwWhitelist"));
        qvblWhitelist = new QVBoxLayout(qwWhitelist);
        qvblWhitelist->setObjectName(QString::fromUtf8("qvblWhitelist"));
        qlWhitelistLabel = new QLabel(qwWhitelist);
        qlWhitelistLabel->setObjectName(QString::fromUtf8("qlWhitelistLabel"));

        qvblWhitelist->addWidget(qlWhitelistLabel);

        qlwWhitelist = new PathListWidget(qwWhitelist);
        qlwWhitelist->setObjectName(QString::fromUtf8("qlwWhitelist"));

        qvblWhitelist->addWidget(qlwWhitelist);

        horizontalLayout_5 = new QHBoxLayout();
        horizontalLayout_5->setObjectName(QString::fromUtf8("horizontalLayout_5"));
        qpbWhitelistAdd = new QPushButton(qwWhitelist);
        qpbWhitelistAdd->setObjectName(QString::fromUtf8("qpbWhitelistAdd"));

        horizontalLayout_5->addWidget(qpbWhitelistAdd);

        qpbWhitelistRemove = new QPushButton(qwWhitelist);
        qpbWhitelistRemove->setObjectName(QString::fromUtf8("qpbWhitelistRemove"));
        qpbWhitelistRemove->setEnabled(false);

        horizontalLayout_5->addWidget(qpbWhitelistRemove);


        qvblWhitelist->addLayout(horizontalLayout_5);


        horizontalLayout->addWidget(qwWhitelist);

        qwPaths = new QWidget(qwExceptions);
        qwPaths->setObjectName(QString::fromUtf8("qwPaths"));
        qvblPaths = new QVBoxLayout(qwPaths);
        qvblPaths->setObjectName(QString::fromUtf8("qvblPaths"));
        qlPathsLabel = new QLabel(qwPaths);
        qlPathsLabel->setObjectName(QString::fromUtf8("qlPathsLabel"));

        qvblPaths->addWidget(qlPathsLabel);

        qlwPaths = new PathListWidget(qwPaths);
        qlwPaths->setObjectName(QString::fromUtf8("qlwPaths"));

        qvblPaths->addWidget(qlwPaths);

        horizontalLayout_7 = new QHBoxLayout();
        horizontalLayout_7->setObjectName(QString::fromUtf8("horizontalLayout_7"));
        qpbPathsAdd = new QPushButton(qwPaths);
        qpbPathsAdd->setObjectName(QString::fromUtf8("qpbPathsAdd"));

        horizontalLayout_7->addWidget(qpbPathsAdd);

        qpbPathsRemove = new QPushButton(qwPaths);
        qpbPathsRemove->setObjectName(QString::fromUtf8("qpbPathsRemove"));
        qpbPathsRemove->setEnabled(false);

        horizontalLayout_7->addWidget(qpbPathsRemove);


        qvblPaths->addLayout(horizontalLayout_7);


        horizontalLayout->addWidget(qwPaths);

        qwBlacklist = new QWidget(qwExceptions);
        qwBlacklist->setObjectName(QString::fromUtf8("qwBlacklist"));
        qvblBlacklist = new QVBoxLayout(qwBlacklist);
        qvblBlacklist->setObjectName(QString::fromUtf8("qvblBlacklist"));
        qlvBlacklistLabel = new QLabel(qwBlacklist);
        qlvBlacklistLabel->setObjectName(QString::fromUtf8("qlvBlacklistLabel"));

        qvblBlacklist->addWidget(qlvBlacklistLabel);

        qlwBlacklist = new PathListWidget(qwBlacklist);
        qlwBlacklist->setObjectName(QString::fromUtf8("qlwBlacklist"));

        qvblBlacklist->addWidget(qlwBlacklist);

        horizontalLayout_10 = new QHBoxLayout();
        horizontalLayout_10->setObjectName(QString::fromUtf8("horizontalLayout_10"));
        qpbBlacklistAdd = new QPushButton(qwBlacklist);
        qpbBlacklistAdd->setObjectName(QString::fromUtf8("qpbBlacklistAdd"));

        horizontalLayout_10->addWidget(qpbBlacklistAdd);

        qpbBlacklistRemove = new QPushButton(qwBlacklist);
        qpbBlacklistRemove->setObjectName(QString::fromUtf8("qpbBlacklistRemove"));
        qpbBlacklistRemove->setEnabled(false);

        horizontalLayout_10->addWidget(qpbBlacklistRemove);


        qvblBlacklist->addLayout(horizontalLayout_10);


        horizontalLayout->addWidget(qwBlacklist);


        verticalLayout_2->addLayout(horizontalLayout);

        qtwSetup->addTab(qwExceptions, QString());

        verticalLayout_4->addWidget(qtwSetup);

        qswOverlayPage->addWidget(qwOverlayConfig);
        qwOverlayInstall = new QWidget();
        qwOverlayInstall->setObjectName(QString::fromUtf8("qwOverlayInstall"));
        verticalLayout_5 = new QVBoxLayout(qwOverlayInstall);
        verticalLayout_5->setObjectName(QString::fromUtf8("verticalLayout_5"));
        groupBox = new QGroupBox(qwOverlayInstall);
        groupBox->setObjectName(QString::fromUtf8("groupBox"));
        verticalLayout_11 = new QVBoxLayout(groupBox);
        verticalLayout_11->setObjectName(QString::fromUtf8("verticalLayout_11"));
        formLayout = new QFormLayout();
        formLayout->setObjectName(QString::fromUtf8("formLayout"));
        qlInstallIcon = new QLabel(groupBox);
        qlInstallIcon->setObjectName(QString::fromUtf8("qlInstallIcon"));
        QSizePolicy sizePolicy4(QSizePolicy::Minimum, QSizePolicy::Minimum);
        sizePolicy4.setHorizontalStretch(0);
        sizePolicy4.setVerticalStretch(0);
        sizePolicy4.setHeightForWidth(qlInstallIcon->sizePolicy().hasHeightForWidth());
        qlInstallIcon->setSizePolicy(sizePolicy4);
        qlInstallIcon->setPixmap(QPixmap(QString::fromUtf8(":/config_osd.png")));

        formLayout->setWidget(0, QFormLayout::LabelRole, qlInstallIcon);

        qlInstallText = new QLabel(groupBox);
        qlInstallText->setObjectName(QString::fromUtf8("qlInstallText"));
        QSizePolicy sizePolicy5(QSizePolicy::Expanding, QSizePolicy::Minimum);
        sizePolicy5.setHorizontalStretch(0);
        sizePolicy5.setVerticalStretch(0);
        sizePolicy5.setHeightForWidth(qlInstallText->sizePolicy().hasHeightForWidth());
        qlInstallText->setSizePolicy(sizePolicy5);
        qlInstallText->setAlignment(Qt::AlignLeading|Qt::AlignLeft|Qt::AlignVCenter);
        qlInstallText->setWordWrap(true);

        formLayout->setWidget(0, QFormLayout::FieldRole, qlInstallText);


        verticalLayout_11->addLayout(formLayout);

        horizontalLayout_4 = new QHBoxLayout();
        horizontalLayout_4->setObjectName(QString::fromUtf8("horizontalLayout_4"));
        horizontalSpacer_3 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_4->addItem(horizontalSpacer_3);

        qpbInstall = new QPushButton(groupBox);
        qpbInstall->setObjectName(QString::fromUtf8("qpbInstall"));

        horizontalLayout_4->addWidget(qpbInstall);

        horizontalSpacer_2 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_4->addItem(horizontalSpacer_2);


        verticalLayout_11->addLayout(horizontalLayout_4);


        verticalLayout_5->addWidget(groupBox);

        verticalSpacer_2 = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout_5->addItem(verticalSpacer_2);

        qswOverlayPage->addWidget(qwOverlayInstall);
        qwOverlayUpgrade = new QWidget();
        qwOverlayUpgrade->setObjectName(QString::fromUtf8("qwOverlayUpgrade"));
        verticalLayout_7 = new QVBoxLayout(qwOverlayUpgrade);
        verticalLayout_7->setObjectName(QString::fromUtf8("verticalLayout_7"));
        groupBox_2 = new QGroupBox(qwOverlayUpgrade);
        groupBox_2->setObjectName(QString::fromUtf8("groupBox_2"));
        verticalLayout_12 = new QVBoxLayout(groupBox_2);
        verticalLayout_12->setObjectName(QString::fromUtf8("verticalLayout_12"));
        formLayout_4 = new QFormLayout();
        formLayout_4->setObjectName(QString::fromUtf8("formLayout_4"));
        formLayout_4->setFieldGrowthPolicy(QFormLayout::ExpandingFieldsGrow);
        qlUpgradeIcon = new QLabel(groupBox_2);
        qlUpgradeIcon->setObjectName(QString::fromUtf8("qlUpgradeIcon"));
        qlUpgradeIcon->setPixmap(QPixmap(QString::fromUtf8(":/config_osd.png")));

        formLayout_4->setWidget(0, QFormLayout::LabelRole, qlUpgradeIcon);

        qlUpgradeText = new QLabel(groupBox_2);
        qlUpgradeText->setObjectName(QString::fromUtf8("qlUpgradeText"));
        qlUpgradeText->setWordWrap(true);

        formLayout_4->setWidget(0, QFormLayout::FieldRole, qlUpgradeText);


        verticalLayout_12->addLayout(formLayout_4);

        horizontalLayout_6 = new QHBoxLayout();
        horizontalLayout_6->setObjectName(QString::fromUtf8("horizontalLayout_6"));
        horizontalSpacer_4 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_6->addItem(horizontalSpacer_4);

        qpbUpgrade = new QPushButton(groupBox_2);
        qpbUpgrade->setObjectName(QString::fromUtf8("qpbUpgrade"));

        horizontalLayout_6->addWidget(qpbUpgrade);

        horizontalSpacer_5 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_6->addItem(horizontalSpacer_5);


        verticalLayout_12->addLayout(horizontalLayout_6);


        verticalLayout_7->addWidget(groupBox_2);

        verticalSpacer = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout_7->addItem(verticalSpacer);

        qswOverlayPage->addWidget(qwOverlayUpgrade);

        vboxLayout->addWidget(qswOverlayPage);


        retranslateUi(OverlayConfig);

        qswOverlayPage->setCurrentIndex(1);
        qtwSetup->setCurrentIndex(0);


        QMetaObject::connectSlotsByName(OverlayConfig);
    } // setupUi

    void retranslateUi(QWidget *OverlayConfig)
    {
        qgbOptions->setTitle(QApplication::translate("OverlayConfig", "Options", nullptr));
#ifndef QT_NO_TOOLTIP
        qcbEnable->setToolTip(QApplication::translate("OverlayConfig", "Enable overlay.", nullptr));
#endif // QT_NO_TOOLTIP
#ifndef QT_NO_WHATSTHIS
        qcbEnable->setWhatsThis(QApplication::translate("OverlayConfig", "This sets whether the overlay is enabled or not. This setting is only checked when applications are started, so make sure Mumble is running and this option is on before you start the application.<br />Please note that if you start Mumble after starting the application, or if you disable the overlay while the application is running, there is no safe way to restart the overlay without also restarting the application.", nullptr));
#endif // QT_NO_WHATSTHIS
        qcbEnable->setText(QApplication::translate("OverlayConfig", "Enable Overlay", nullptr));
#ifndef QT_NO_TOOLTIP
        qpbLoadPreset->setToolTip(QApplication::translate("OverlayConfig", "Load an overlay preset from file", nullptr));
#endif // QT_NO_TOOLTIP
        qpbLoadPreset->setText(QApplication::translate("OverlayConfig", "Load\342\200\246", nullptr));
#ifndef QT_NO_TOOLTIP
        qpbSavePreset->setToolTip(QApplication::translate("OverlayConfig", "Save your overlay settings to file", nullptr));
#endif // QT_NO_TOOLTIP
        qpbSavePreset->setText(QApplication::translate("OverlayConfig", "Save\342\200\246", nullptr));
        qpbUninstall->setText(QApplication::translate("OverlayConfig", "Uninstall Overlay", nullptr));
        qgpFps->setTitle(QApplication::translate("OverlayConfig", "FPS and Clock Display", nullptr));
#ifndef QT_NO_TOOLTIP
        qcbShowFps->setToolTip(QApplication::translate("OverlayConfig", "Display a frame counter in the overlay", nullptr));
#endif // QT_NO_TOOLTIP
        qcbShowFps->setText(QApplication::translate("OverlayConfig", "Show FPS counter", nullptr));
#ifndef QT_NO_TOOLTIP
        qcbShowTime->setToolTip(QApplication::translate("OverlayConfig", "Display a clock in the overlay showing the current local time (system time).", nullptr));
#endif // QT_NO_TOOLTIP
        qcbShowTime->setText(QApplication::translate("OverlayConfig", "Show Clock", nullptr));
#ifndef QT_NO_TOOLTIP
        qpbFpsFont->setToolTip(QApplication::translate("OverlayConfig", "Set the overlay font.", nullptr));
#endif // QT_NO_TOOLTIP
#ifndef QT_NO_WHATSTHIS
        qpbFpsFont->setWhatsThis(QString());
#endif // QT_NO_WHATSTHIS
        qpbFpsFont->setText(QApplication::translate("OverlayConfig", "Font", nullptr));
#ifndef QT_NO_TOOLTIP
        qpbFpsColor->setToolTip(QApplication::translate("OverlayConfig", "Set the overlay text color.", nullptr));
#endif // QT_NO_TOOLTIP
#ifndef QT_NO_WHATSTHIS
        qpbFpsColor->setWhatsThis(QString());
#endif // QT_NO_WHATSTHIS
        qpbFpsColor->setText(QApplication::translate("OverlayConfig", "Color", nullptr));
        qtwSetup->setTabText(qtwSetup->indexOf(qwLayoutTab), QApplication::translate("OverlayConfig", "Layout", nullptr));
        label->setText(QApplication::translate("OverlayConfig", "Overlay Exception Mode", nullptr));
        qlLaunchersLabel->setText(QApplication::translate("OverlayConfig", "Allowed launchers", nullptr));
        qpbLaunchersAdd->setText(QApplication::translate("OverlayConfig", "Add", nullptr));
        qpbLaunchersRemove->setText(QApplication::translate("OverlayConfig", "Remove", nullptr));
        qlWhitelistLabel->setText(QApplication::translate("OverlayConfig", "Allowed programs", nullptr));
        qpbWhitelistAdd->setText(QApplication::translate("OverlayConfig", "Add", nullptr));
        qpbWhitelistRemove->setText(QApplication::translate("OverlayConfig", "Remove", nullptr));
        qlPathsLabel->setText(QApplication::translate("OverlayConfig", "Allowed paths", nullptr));
        qpbPathsAdd->setText(QApplication::translate("OverlayConfig", "Add", nullptr));
        qpbPathsRemove->setText(QApplication::translate("OverlayConfig", "Remove", nullptr));
        qlvBlacklistLabel->setText(QApplication::translate("OverlayConfig", "Blacklisted programs", nullptr));
        qpbBlacklistAdd->setText(QApplication::translate("OverlayConfig", "Add", nullptr));
        qpbBlacklistRemove->setText(QApplication::translate("OverlayConfig", "Remove", nullptr));
        qtwSetup->setTabText(qtwSetup->indexOf(qwExceptions), QApplication::translate("OverlayConfig", "Overlay Exceptions", nullptr));
        groupBox->setTitle(QApplication::translate("OverlayConfig", "Overlay Installation", nullptr));
        qlInstallIcon->setText(QString());
        qlInstallText->setText(QApplication::translate("OverlayConfig", "Mumble has detected that you do not have the Mumble Overlay installed.\n"
"\n"
"Click the button below to install the overlay.", nullptr));
        qpbInstall->setText(QApplication::translate("OverlayConfig", "Install Mumble Overlay", nullptr));
        groupBox_2->setTitle(QApplication::translate("OverlayConfig", "Overlay Upgrade", nullptr));
        qlUpgradeIcon->setText(QString());
        qlUpgradeText->setText(QApplication::translate("OverlayConfig", "Mumble has detected an old version of the overlay support files installed on your computer.\n"
"\n"
"To upgrade these files to their latest versions, click the button below.", nullptr));
        qpbUpgrade->setText(QApplication::translate("OverlayConfig", "Upgrade Mumble Overlay", nullptr));
        Q_UNUSED(OverlayConfig);
    } // retranslateUi

};

namespace Ui {
    class OverlayConfig: public Ui_OverlayConfig {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_OVERLAY_H
