/********************************************************************************
** Form generated from reading UI file 'ACLEditor.ui'
**
** Created by: Qt User Interface Compiler version 5.12.8
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_ACLEDITOR_H
#define UI_ACLEDITOR_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QCheckBox>
#include <QtWidgets/QDialog>
#include <QtWidgets/QDialogButtonBox>
#include <QtWidgets/QFormLayout>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QListWidget>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QSpinBox>
#include <QtWidgets/QTabWidget>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>
#include "RichTextEditor.h"
#include "widgets/MUComboBox.h"

QT_BEGIN_NAMESPACE

class Ui_ACLEditor
{
public:
    QVBoxLayout *vboxLayout;
    QTabWidget *qtwTab;
    QWidget *qwChannel;
    QFormLayout *formLayout;
    QLabel *qlChannelPassword;
    QLineEdit *qleChannelPassword;
    QLabel *qlChannelPosition;
    QSpinBox *qsbChannelPosition;
    QLabel *qlChannelMaxUsers;
    QSpinBox *qsbChannelMaxUsers;
    QCheckBox *qcbChannelTemporary;
    QHBoxLayout *qwChannelProperties;
    QLineEdit *qleChannelName;
    QLabel *qlChannelID;
    QLabel *qlChannelName;
    RichTextEditor *rteChannelDescription;
    QLabel *qlChannelDescription;
    QWidget *qwGroups;
    QVBoxLayout *vboxLayout1;
    QGroupBox *qgbGroups;
    QHBoxLayout *hboxLayout;
    MUComboBox *qcbGroupList;
    QPushButton *qpbGroupAdd;
    QPushButton *qpbGroupRemove;
    QCheckBox *qcbGroupInherit;
    QCheckBox *qcbGroupInheritable;
    QCheckBox *qcbGroupInherited;
    QSpacerItem *horizontalSpacer;
    QGroupBox *qgbGroupMembers;
    QHBoxLayout *horizontalLayout_3;
    QWidget *qwMembersContainer;
    QGridLayout *gridLayout;
    QListWidget *qlwGroupAdd;
    MUComboBox *qcbGroupAdd;
    QPushButton *qpbGroupAddAdd;
    QLabel *qliGroupAdd;
    QPushButton *qpbGroupAddRemove;
    QWidget *qwExcludedMembersContainer;
    QGridLayout *gridLayout_2;
    QListWidget *qlwGroupRemove;
    MUComboBox *qcbGroupRemove;
    QPushButton *qpbGroupRemoveAdd;
    QPushButton *qpbGroupRemoveRemove;
    QLabel *qliGroupRemove;
    QWidget *qwInheritedMembersContainer;
    QGridLayout *gridLayout_3;
    QLabel *qliGroupInherit;
    QListWidget *qlwGroupInherit;
    QPushButton *qpbGroupInheritRemove;
    QWidget *qwACL;
    QHBoxLayout *horizontalLayout;
    QVBoxLayout *qlVerticalACL;
    QGroupBox *qgbACLs;
    QGridLayout *gridLayout1;
    QListWidget *qlwACLs;
    QCheckBox *qcbACLInherit;
    QPushButton *qpbACLUp;
    QPushButton *qpbACLDown;
    QPushButton *qpbACLAdd;
    QPushButton *qpbACLRemove;
    QGroupBox *qgbACLapply;
    QHBoxLayout *horizontalLayout_2;
    QCheckBox *qcbACLApplySubs;
    QCheckBox *qcbACLApplyHere;
    QGroupBox *qgbACLugroup;
    QGridLayout *gridLayout2;
    QLabel *qliACLGroup;
    MUComboBox *qcbACLGroup;
    QLabel *qliACLUser;
    MUComboBox *qcbACLUser;
    QGroupBox *qgbACLpermissions;
    QDialogButtonBox *qdbbButtons;

    void setupUi(QDialog *ACLEditor)
    {
        if (ACLEditor->objectName().isEmpty())
            ACLEditor->setObjectName(QString::fromUtf8("ACLEditor"));
        ACLEditor->resize(881, 503);
        vboxLayout = new QVBoxLayout(ACLEditor);
        vboxLayout->setObjectName(QString::fromUtf8("vboxLayout"));
        qtwTab = new QTabWidget(ACLEditor);
        qtwTab->setObjectName(QString::fromUtf8("qtwTab"));
        qwChannel = new QWidget();
        qwChannel->setObjectName(QString::fromUtf8("qwChannel"));
        formLayout = new QFormLayout(qwChannel);
        formLayout->setObjectName(QString::fromUtf8("formLayout"));
        formLayout->setFieldGrowthPolicy(QFormLayout::AllNonFixedFieldsGrow);
        qlChannelPassword = new QLabel(qwChannel);
        qlChannelPassword->setObjectName(QString::fromUtf8("qlChannelPassword"));

        formLayout->setWidget(6, QFormLayout::LabelRole, qlChannelPassword);

        qleChannelPassword = new QLineEdit(qwChannel);
        qleChannelPassword->setObjectName(QString::fromUtf8("qleChannelPassword"));

        formLayout->setWidget(6, QFormLayout::FieldRole, qleChannelPassword);

        qlChannelPosition = new QLabel(qwChannel);
        qlChannelPosition->setObjectName(QString::fromUtf8("qlChannelPosition"));

        formLayout->setWidget(7, QFormLayout::LabelRole, qlChannelPosition);

        qsbChannelPosition = new QSpinBox(qwChannel);
        qsbChannelPosition->setObjectName(QString::fromUtf8("qsbChannelPosition"));
        qsbChannelPosition->setMaximumSize(QSize(16777215, 16777215));
        qsbChannelPosition->setMaximum(99);

        formLayout->setWidget(7, QFormLayout::FieldRole, qsbChannelPosition);

        qlChannelMaxUsers = new QLabel(qwChannel);
        qlChannelMaxUsers->setObjectName(QString::fromUtf8("qlChannelMaxUsers"));

        formLayout->setWidget(8, QFormLayout::LabelRole, qlChannelMaxUsers);

        qsbChannelMaxUsers = new QSpinBox(qwChannel);
        qsbChannelMaxUsers->setObjectName(QString::fromUtf8("qsbChannelMaxUsers"));
        qsbChannelMaxUsers->setMaximumSize(QSize(16777215, 16777215));

        formLayout->setWidget(8, QFormLayout::FieldRole, qsbChannelMaxUsers);

        qcbChannelTemporary = new QCheckBox(qwChannel);
        qcbChannelTemporary->setObjectName(QString::fromUtf8("qcbChannelTemporary"));

        formLayout->setWidget(10, QFormLayout::FieldRole, qcbChannelTemporary);

        qwChannelProperties = new QHBoxLayout();
        qwChannelProperties->setObjectName(QString::fromUtf8("qwChannelProperties"));
        qleChannelName = new QLineEdit(qwChannel);
        qleChannelName->setObjectName(QString::fromUtf8("qleChannelName"));

        qwChannelProperties->addWidget(qleChannelName);

        qlChannelID = new QLabel(qwChannel);
        qlChannelID->setObjectName(QString::fromUtf8("qlChannelID"));
        qlChannelID->setText(QString::fromUtf8("ChannelID"));

        qwChannelProperties->addWidget(qlChannelID);


        formLayout->setLayout(3, QFormLayout::FieldRole, qwChannelProperties);

        qlChannelName = new QLabel(qwChannel);
        qlChannelName->setObjectName(QString::fromUtf8("qlChannelName"));

        formLayout->setWidget(3, QFormLayout::LabelRole, qlChannelName);

        rteChannelDescription = new RichTextEditor(qwChannel);
        rteChannelDescription->setObjectName(QString::fromUtf8("rteChannelDescription"));
        QSizePolicy sizePolicy(QSizePolicy::Preferred, QSizePolicy::Preferred);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(1);
        sizePolicy.setHeightForWidth(rteChannelDescription->sizePolicy().hasHeightForWidth());
        rteChannelDescription->setSizePolicy(sizePolicy);

        formLayout->setWidget(4, QFormLayout::FieldRole, rteChannelDescription);

        qlChannelDescription = new QLabel(qwChannel);
        qlChannelDescription->setObjectName(QString::fromUtf8("qlChannelDescription"));

        formLayout->setWidget(4, QFormLayout::LabelRole, qlChannelDescription);

        qtwTab->addTab(qwChannel, QString());
        qwGroups = new QWidget();
        qwGroups->setObjectName(QString::fromUtf8("qwGroups"));
        vboxLayout1 = new QVBoxLayout(qwGroups);
        vboxLayout1->setObjectName(QString::fromUtf8("vboxLayout1"));
        qgbGroups = new QGroupBox(qwGroups);
        qgbGroups->setObjectName(QString::fromUtf8("qgbGroups"));
        hboxLayout = new QHBoxLayout(qgbGroups);
        hboxLayout->setObjectName(QString::fromUtf8("hboxLayout"));
        qcbGroupList = new MUComboBox(qgbGroups);
        qcbGroupList->setObjectName(QString::fromUtf8("qcbGroupList"));
        QSizePolicy sizePolicy1(QSizePolicy::MinimumExpanding, QSizePolicy::Fixed);
        sizePolicy1.setHorizontalStretch(0);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(qcbGroupList->sizePolicy().hasHeightForWidth());
        qcbGroupList->setSizePolicy(sizePolicy1);
        qcbGroupList->setMaximumSize(QSize(300, 16777215));
        qcbGroupList->setSizeIncrement(QSize(0, 0));
        qcbGroupList->setEditable(true);

        hboxLayout->addWidget(qcbGroupList);

        qpbGroupAdd = new QPushButton(qgbGroups);
        qpbGroupAdd->setObjectName(QString::fromUtf8("qpbGroupAdd"));

        hboxLayout->addWidget(qpbGroupAdd);

        qpbGroupRemove = new QPushButton(qgbGroups);
        qpbGroupRemove->setObjectName(QString::fromUtf8("qpbGroupRemove"));
        qpbGroupRemove->setAutoDefault(false);

        hboxLayout->addWidget(qpbGroupRemove);

        qcbGroupInherit = new QCheckBox(qgbGroups);
        qcbGroupInherit->setObjectName(QString::fromUtf8("qcbGroupInherit"));

        hboxLayout->addWidget(qcbGroupInherit);

        qcbGroupInheritable = new QCheckBox(qgbGroups);
        qcbGroupInheritable->setObjectName(QString::fromUtf8("qcbGroupInheritable"));

        hboxLayout->addWidget(qcbGroupInheritable);

        qcbGroupInherited = new QCheckBox(qgbGroups);
        qcbGroupInherited->setObjectName(QString::fromUtf8("qcbGroupInherited"));
        qcbGroupInherited->setEnabled(false);

        hboxLayout->addWidget(qcbGroupInherited);

        horizontalSpacer = new QSpacerItem(0, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        hboxLayout->addItem(horizontalSpacer);


        vboxLayout1->addWidget(qgbGroups);

        qgbGroupMembers = new QGroupBox(qwGroups);
        qgbGroupMembers->setObjectName(QString::fromUtf8("qgbGroupMembers"));
        horizontalLayout_3 = new QHBoxLayout(qgbGroupMembers);
        horizontalLayout_3->setObjectName(QString::fromUtf8("horizontalLayout_3"));
        qwMembersContainer = new QWidget(qgbGroupMembers);
        qwMembersContainer->setObjectName(QString::fromUtf8("qwMembersContainer"));
        gridLayout = new QGridLayout(qwMembersContainer);
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        gridLayout->setContentsMargins(0, 0, 0, 0);
        qlwGroupAdd = new QListWidget(qwMembersContainer);
        qlwGroupAdd->setObjectName(QString::fromUtf8("qlwGroupAdd"));

        gridLayout->addWidget(qlwGroupAdd, 1, 0, 1, 2);

        qcbGroupAdd = new MUComboBox(qwMembersContainer);
        qcbGroupAdd->setObjectName(QString::fromUtf8("qcbGroupAdd"));
        QSizePolicy sizePolicy2(QSizePolicy::Expanding, QSizePolicy::Fixed);
        sizePolicy2.setHorizontalStretch(0);
        sizePolicy2.setVerticalStretch(0);
        sizePolicy2.setHeightForWidth(qcbGroupAdd->sizePolicy().hasHeightForWidth());
        qcbGroupAdd->setSizePolicy(sizePolicy2);
        qcbGroupAdd->setEditable(true);
        qcbGroupAdd->setInsertPolicy(QComboBox::NoInsert);
        qcbGroupAdd->setSizeAdjustPolicy(QComboBox::AdjustToContents);

        gridLayout->addWidget(qcbGroupAdd, 2, 0, 1, 1);

        qpbGroupAddAdd = new QPushButton(qwMembersContainer);
        qpbGroupAddAdd->setObjectName(QString::fromUtf8("qpbGroupAddAdd"));

        gridLayout->addWidget(qpbGroupAddAdd, 2, 1, 1, 1);

        qliGroupAdd = new QLabel(qwMembersContainer);
        qliGroupAdd->setObjectName(QString::fromUtf8("qliGroupAdd"));

        gridLayout->addWidget(qliGroupAdd, 0, 0, 1, 2);

        qpbGroupAddRemove = new QPushButton(qwMembersContainer);
        qpbGroupAddRemove->setObjectName(QString::fromUtf8("qpbGroupAddRemove"));

        gridLayout->addWidget(qpbGroupAddRemove, 3, 0, 1, 2);


        horizontalLayout_3->addWidget(qwMembersContainer);

        qwExcludedMembersContainer = new QWidget(qgbGroupMembers);
        qwExcludedMembersContainer->setObjectName(QString::fromUtf8("qwExcludedMembersContainer"));
        gridLayout_2 = new QGridLayout(qwExcludedMembersContainer);
        gridLayout_2->setObjectName(QString::fromUtf8("gridLayout_2"));
        gridLayout_2->setContentsMargins(0, 0, 0, 0);
        qlwGroupRemove = new QListWidget(qwExcludedMembersContainer);
        qlwGroupRemove->setObjectName(QString::fromUtf8("qlwGroupRemove"));

        gridLayout_2->addWidget(qlwGroupRemove, 1, 0, 1, 2);

        qcbGroupRemove = new MUComboBox(qwExcludedMembersContainer);
        qcbGroupRemove->setObjectName(QString::fromUtf8("qcbGroupRemove"));
        sizePolicy2.setHeightForWidth(qcbGroupRemove->sizePolicy().hasHeightForWidth());
        qcbGroupRemove->setSizePolicy(sizePolicy2);
        qcbGroupRemove->setEditable(true);
        qcbGroupRemove->setInsertPolicy(QComboBox::NoInsert);
        qcbGroupRemove->setSizeAdjustPolicy(QComboBox::AdjustToContents);

        gridLayout_2->addWidget(qcbGroupRemove, 2, 0, 1, 1);

        qpbGroupRemoveAdd = new QPushButton(qwExcludedMembersContainer);
        qpbGroupRemoveAdd->setObjectName(QString::fromUtf8("qpbGroupRemoveAdd"));

        gridLayout_2->addWidget(qpbGroupRemoveAdd, 2, 1, 1, 1);

        qpbGroupRemoveRemove = new QPushButton(qwExcludedMembersContainer);
        qpbGroupRemoveRemove->setObjectName(QString::fromUtf8("qpbGroupRemoveRemove"));

        gridLayout_2->addWidget(qpbGroupRemoveRemove, 3, 0, 1, 2);

        qliGroupRemove = new QLabel(qwExcludedMembersContainer);
        qliGroupRemove->setObjectName(QString::fromUtf8("qliGroupRemove"));

        gridLayout_2->addWidget(qliGroupRemove, 0, 0, 1, 2);


        horizontalLayout_3->addWidget(qwExcludedMembersContainer);

        qwInheritedMembersContainer = new QWidget(qgbGroupMembers);
        qwInheritedMembersContainer->setObjectName(QString::fromUtf8("qwInheritedMembersContainer"));
        gridLayout_3 = new QGridLayout(qwInheritedMembersContainer);
        gridLayout_3->setObjectName(QString::fromUtf8("gridLayout_3"));
        gridLayout_3->setContentsMargins(0, 0, 0, 0);
        qliGroupInherit = new QLabel(qwInheritedMembersContainer);
        qliGroupInherit->setObjectName(QString::fromUtf8("qliGroupInherit"));

        gridLayout_3->addWidget(qliGroupInherit, 0, 0, 1, 1);

        qlwGroupInherit = new QListWidget(qwInheritedMembersContainer);
        qlwGroupInherit->setObjectName(QString::fromUtf8("qlwGroupInherit"));

        gridLayout_3->addWidget(qlwGroupInherit, 1, 0, 1, 1);

        qpbGroupInheritRemove = new QPushButton(qwInheritedMembersContainer);
        qpbGroupInheritRemove->setObjectName(QString::fromUtf8("qpbGroupInheritRemove"));

        gridLayout_3->addWidget(qpbGroupInheritRemove, 2, 0, 1, 1);


        horizontalLayout_3->addWidget(qwInheritedMembersContainer);


        vboxLayout1->addWidget(qgbGroupMembers);

        qtwTab->addTab(qwGroups, QString());
        qwACL = new QWidget();
        qwACL->setObjectName(QString::fromUtf8("qwACL"));
        horizontalLayout = new QHBoxLayout(qwACL);
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        qlVerticalACL = new QVBoxLayout();
        qlVerticalACL->setObjectName(QString::fromUtf8("qlVerticalACL"));
        qgbACLs = new QGroupBox(qwACL);
        qgbACLs->setObjectName(QString::fromUtf8("qgbACLs"));
        gridLayout1 = new QGridLayout(qgbACLs);
        gridLayout1->setObjectName(QString::fromUtf8("gridLayout1"));
        qlwACLs = new QListWidget(qgbACLs);
        qlwACLs->setObjectName(QString::fromUtf8("qlwACLs"));

        gridLayout1->addWidget(qlwACLs, 0, 0, 2, 5);

        qcbACLInherit = new QCheckBox(qgbACLs);
        qcbACLInherit->setObjectName(QString::fromUtf8("qcbACLInherit"));

        gridLayout1->addWidget(qcbACLInherit, 2, 0, 1, 1);

        qpbACLUp = new QPushButton(qgbACLs);
        qpbACLUp->setObjectName(QString::fromUtf8("qpbACLUp"));
        qpbACLUp->setAutoDefault(false);

        gridLayout1->addWidget(qpbACLUp, 2, 1, 1, 1);

        qpbACLDown = new QPushButton(qgbACLs);
        qpbACLDown->setObjectName(QString::fromUtf8("qpbACLDown"));
        qpbACLDown->setAutoDefault(false);

        gridLayout1->addWidget(qpbACLDown, 2, 2, 1, 1);

        qpbACLAdd = new QPushButton(qgbACLs);
        qpbACLAdd->setObjectName(QString::fromUtf8("qpbACLAdd"));
        qpbACLAdd->setAutoDefault(false);

        gridLayout1->addWidget(qpbACLAdd, 2, 3, 1, 1);

        qpbACLRemove = new QPushButton(qgbACLs);
        qpbACLRemove->setObjectName(QString::fromUtf8("qpbACLRemove"));
        qpbACLRemove->setAutoDefault(false);

        gridLayout1->addWidget(qpbACLRemove, 2, 4, 1, 1);


        qlVerticalACL->addWidget(qgbACLs);

        qgbACLapply = new QGroupBox(qwACL);
        qgbACLapply->setObjectName(QString::fromUtf8("qgbACLapply"));
        QSizePolicy sizePolicy3(QSizePolicy::Expanding, QSizePolicy::Preferred);
        sizePolicy3.setHorizontalStretch(0);
        sizePolicy3.setVerticalStretch(0);
        sizePolicy3.setHeightForWidth(qgbACLapply->sizePolicy().hasHeightForWidth());
        qgbACLapply->setSizePolicy(sizePolicy3);
        horizontalLayout_2 = new QHBoxLayout(qgbACLapply);
        horizontalLayout_2->setObjectName(QString::fromUtf8("horizontalLayout_2"));
        qcbACLApplySubs = new QCheckBox(qgbACLapply);
        qcbACLApplySubs->setObjectName(QString::fromUtf8("qcbACLApplySubs"));

        horizontalLayout_2->addWidget(qcbACLApplySubs);

        qcbACLApplyHere = new QCheckBox(qgbACLapply);
        qcbACLApplyHere->setObjectName(QString::fromUtf8("qcbACLApplyHere"));

        horizontalLayout_2->addWidget(qcbACLApplyHere);


        qlVerticalACL->addWidget(qgbACLapply);

        qgbACLugroup = new QGroupBox(qwACL);
        qgbACLugroup->setObjectName(QString::fromUtf8("qgbACLugroup"));
        sizePolicy3.setHeightForWidth(qgbACLugroup->sizePolicy().hasHeightForWidth());
        qgbACLugroup->setSizePolicy(sizePolicy3);
        gridLayout2 = new QGridLayout(qgbACLugroup);
        gridLayout2->setObjectName(QString::fromUtf8("gridLayout2"));
        qliACLGroup = new QLabel(qgbACLugroup);
        qliACLGroup->setObjectName(QString::fromUtf8("qliACLGroup"));

        gridLayout2->addWidget(qliACLGroup, 0, 0, 1, 1);

        qcbACLGroup = new MUComboBox(qgbACLugroup);
        qcbACLGroup->setObjectName(QString::fromUtf8("qcbACLGroup"));
        sizePolicy2.setHeightForWidth(qcbACLGroup->sizePolicy().hasHeightForWidth());
        qcbACLGroup->setSizePolicy(sizePolicy2);
        qcbACLGroup->setEditable(true);

        gridLayout2->addWidget(qcbACLGroup, 0, 1, 1, 1);

        qliACLUser = new QLabel(qgbACLugroup);
        qliACLUser->setObjectName(QString::fromUtf8("qliACLUser"));

        gridLayout2->addWidget(qliACLUser, 1, 0, 1, 1);

        qcbACLUser = new MUComboBox(qgbACLugroup);
        qcbACLUser->setObjectName(QString::fromUtf8("qcbACLUser"));
        sizePolicy2.setHeightForWidth(qcbACLUser->sizePolicy().hasHeightForWidth());
        qcbACLUser->setSizePolicy(sizePolicy2);
        qcbACLUser->setEditable(true);
        qcbACLUser->setSizeAdjustPolicy(QComboBox::AdjustToContents);

        gridLayout2->addWidget(qcbACLUser, 1, 1, 1, 1);


        qlVerticalACL->addWidget(qgbACLugroup);


        horizontalLayout->addLayout(qlVerticalACL);

        qgbACLpermissions = new QGroupBox(qwACL);
        qgbACLpermissions->setObjectName(QString::fromUtf8("qgbACLpermissions"));

        horizontalLayout->addWidget(qgbACLpermissions);

        qtwTab->addTab(qwACL, QString());

        vboxLayout->addWidget(qtwTab);

        qdbbButtons = new QDialogButtonBox(ACLEditor);
        qdbbButtons->setObjectName(QString::fromUtf8("qdbbButtons"));
        qdbbButtons->setOrientation(Qt::Horizontal);
        qdbbButtons->setStandardButtons(QDialogButtonBox::Cancel|QDialogButtonBox::Ok);

        vboxLayout->addWidget(qdbbButtons);

#ifndef QT_NO_SHORTCUT
        qliGroupAdd->setBuddy(qlwGroupAdd);
        qliGroupRemove->setBuddy(qlwGroupRemove);
        qliGroupInherit->setBuddy(qlwGroupInherit);
        qliACLGroup->setBuddy(qcbACLGroup);
        qliACLUser->setBuddy(qcbACLUser);
#endif // QT_NO_SHORTCUT
        QWidget::setTabOrder(qleChannelPassword, qsbChannelPosition);
        QWidget::setTabOrder(qsbChannelPosition, qsbChannelMaxUsers);
        QWidget::setTabOrder(qsbChannelMaxUsers, qcbChannelTemporary);
        QWidget::setTabOrder(qcbChannelTemporary, qcbGroupList);
        QWidget::setTabOrder(qcbGroupList, qpbGroupAdd);
        QWidget::setTabOrder(qpbGroupAdd, qpbGroupRemove);
        QWidget::setTabOrder(qpbGroupRemove, qcbGroupInherit);
        QWidget::setTabOrder(qcbGroupInherit, qcbGroupInheritable);
        QWidget::setTabOrder(qcbGroupInheritable, qcbGroupInherited);
        QWidget::setTabOrder(qcbGroupInherited, qlwGroupAdd);
        QWidget::setTabOrder(qlwGroupAdd, qcbGroupAdd);
        QWidget::setTabOrder(qcbGroupAdd, qpbGroupAddAdd);
        QWidget::setTabOrder(qpbGroupAddAdd, qpbGroupAddRemove);
        QWidget::setTabOrder(qpbGroupAddRemove, qlwGroupRemove);
        QWidget::setTabOrder(qlwGroupRemove, qcbGroupRemove);
        QWidget::setTabOrder(qcbGroupRemove, qpbGroupRemoveAdd);
        QWidget::setTabOrder(qpbGroupRemoveAdd, qpbGroupRemoveRemove);
        QWidget::setTabOrder(qpbGroupRemoveRemove, qlwGroupInherit);
        QWidget::setTabOrder(qlwGroupInherit, qpbGroupInheritRemove);
        QWidget::setTabOrder(qpbGroupInheritRemove, qlwACLs);
        QWidget::setTabOrder(qlwACLs, qcbACLInherit);
        QWidget::setTabOrder(qcbACLInherit, qpbACLUp);
        QWidget::setTabOrder(qpbACLUp, qpbACLDown);
        QWidget::setTabOrder(qpbACLDown, qpbACLAdd);
        QWidget::setTabOrder(qpbACLAdd, qpbACLRemove);
        QWidget::setTabOrder(qpbACLRemove, qcbACLApplySubs);
        QWidget::setTabOrder(qcbACLApplySubs, qcbACLApplyHere);
        QWidget::setTabOrder(qcbACLApplyHere, qcbACLGroup);
        QWidget::setTabOrder(qcbACLGroup, qcbACLUser);
        QWidget::setTabOrder(qcbACLUser, qdbbButtons);

        retranslateUi(ACLEditor);
        QObject::connect(qdbbButtons, SIGNAL(accepted()), ACLEditor, SLOT(accept()));
        QObject::connect(qdbbButtons, SIGNAL(rejected()), ACLEditor, SLOT(reject()));
        QObject::connect(qlwGroupInherit, SIGNAL(doubleClicked(QModelIndex)), qpbGroupInheritRemove, SLOT(animateClick()));
        QObject::connect(qleChannelName, SIGNAL(returnPressed()), ACLEditor, SLOT(accept()));
        QObject::connect(qleChannelPassword, SIGNAL(returnPressed()), ACLEditor, SLOT(accept()));

        qtwTab->setCurrentIndex(1);


        QMetaObject::connectSlotsByName(ACLEditor);
    } // setupUi

    void retranslateUi(QDialog *ACLEditor)
    {
        ACLEditor->setWindowTitle(QApplication::translate("ACLEditor", "Dialog", nullptr));
        qlChannelPassword->setText(QApplication::translate("ACLEditor", "Password", nullptr));
#ifndef QT_NO_TOOLTIP
        qleChannelPassword->setToolTip(QApplication::translate("ACLEditor", "Enter the channel password here.", nullptr));
#endif // QT_NO_TOOLTIP
#ifndef QT_NO_WHATSTHIS
        qleChannelPassword->setWhatsThis(QApplication::translate("ACLEditor", "<b>Password</b><br />This field allows you to easily set and change the password of a channel. It uses Mumble's access tokens feature in the background. Use ACLs and groups if you need more fine grained and powerful access control.", nullptr));
#endif // QT_NO_WHATSTHIS
        qlChannelPosition->setText(QApplication::translate("ACLEditor", "Position", nullptr));
#ifndef QT_NO_TOOLTIP
        qsbChannelPosition->setToolTip(QApplication::translate("ACLEditor", "This is the sort order for the channel.", nullptr));
#endif // QT_NO_TOOLTIP
#ifndef QT_NO_WHATSTHIS
        qsbChannelPosition->setWhatsThis(QApplication::translate("ACLEditor", "<b>Position</b><br/>\n"
"This value enables you to change the way Mumble arranges the channels in the tree. A channel with a higher <i>Position</i> value will always be placed below one with a lower value and the other way around. If the <i>Position</i> value of two channels is equal they will get sorted alphabetically by their name.", nullptr));
#endif // QT_NO_WHATSTHIS
        qlChannelMaxUsers->setText(QApplication::translate("ACLEditor", "Maximum Users", nullptr));
#ifndef QT_NO_TOOLTIP
        qsbChannelMaxUsers->setToolTip(QApplication::translate("ACLEditor", "Maximum number of users allowed in the channel", nullptr));
#endif // QT_NO_TOOLTIP
#ifndef QT_NO_WHATSTHIS
        qsbChannelMaxUsers->setWhatsThis(QApplication::translate("ACLEditor", "<b>Maximum Users</b><br />\n"
"This value allows you to set the maximum number of users allowed in the channel. If the value is above zero, only that number of users will be allowed to enter the channel. If the value is zero, the maximum number of users in the channel is given by the server's default limit.", nullptr));
#endif // QT_NO_WHATSTHIS
#ifndef QT_NO_TOOLTIP
        qcbChannelTemporary->setToolTip(QApplication::translate("ACLEditor", "Check to create a temporary channel.", nullptr));
#endif // QT_NO_TOOLTIP
#ifndef QT_NO_WHATSTHIS
        qcbChannelTemporary->setWhatsThis(QApplication::translate("ACLEditor", "<b>Temporary</b><br />\n"
"When checked the channel created will be marked as temporary. This means when the last player leaves it the channel will be automatically deleted by the server.", nullptr));
#endif // QT_NO_WHATSTHIS
        qcbChannelTemporary->setText(QApplication::translate("ACLEditor", "Temporary", nullptr));
#ifndef QT_NO_TOOLTIP
        qleChannelName->setToolTip(QApplication::translate("ACLEditor", "Enter the channel name here.", nullptr));
#endif // QT_NO_TOOLTIP
#ifndef QT_NO_WHATSTHIS
        qleChannelName->setWhatsThis(QApplication::translate("ACLEditor", "<b>Name</b><br />Enter the channel name in this field. The name has to comply with the restriction imposed by the server you are connected to.", nullptr));
#endif // QT_NO_WHATSTHIS
#ifndef QT_NO_TOOLTIP
        qlChannelID->setToolTip(QApplication::translate("ACLEditor", "ID of the channel.", nullptr));
#endif // QT_NO_TOOLTIP
        qlChannelName->setText(QApplication::translate("ACLEditor", "Name", nullptr));
        qlChannelDescription->setText(QApplication::translate("ACLEditor", "Description", nullptr));
        qtwTab->setTabText(qtwTab->indexOf(qwChannel), QApplication::translate("ACLEditor", "&Properties", nullptr));
        qgbGroups->setTitle(QApplication::translate("ACLEditor", "Group", nullptr));
#ifndef QT_NO_TOOLTIP
        qcbGroupList->setToolTip(QApplication::translate("ACLEditor", "List of groups", nullptr));
#endif // QT_NO_TOOLTIP
#ifndef QT_NO_WHATSTHIS
        qcbGroupList->setWhatsThis(QApplication::translate("ACLEditor", "<b>Group</b><br />\n"
"These are all the groups currently defined for the channel. To create a new group, just type in the name and press enter.", nullptr));
#endif // QT_NO_WHATSTHIS
#ifndef QT_NO_TOOLTIP
        qpbGroupAdd->setToolTip(QApplication::translate("ACLEditor", "Add new group", nullptr));
#endif // QT_NO_TOOLTIP
#ifndef QT_NO_WHATSTHIS
        qpbGroupAdd->setWhatsThis(QApplication::translate("ACLEditor", "<b>Add</b><br/>\n"
"Add a new group.", nullptr));
#endif // QT_NO_WHATSTHIS
        qpbGroupAdd->setText(QApplication::translate("ACLEditor", "Add", nullptr));
#ifndef QT_NO_TOOLTIP
        qpbGroupRemove->setToolTip(QApplication::translate("ACLEditor", "Remove selected group", nullptr));
#endif // QT_NO_TOOLTIP
#ifndef QT_NO_WHATSTHIS
        qpbGroupRemove->setWhatsThis(QApplication::translate("ACLEditor", "<b>Remove</b><br />This removes the currently selected group. If the group was inherited, it will not be removed from the list, but all local information about the group will be cleared.", nullptr));
#endif // QT_NO_WHATSTHIS
        qpbGroupRemove->setText(QApplication::translate("ACLEditor", "Remove", nullptr));
#ifndef QT_NO_TOOLTIP
        qcbGroupInherit->setToolTip(QApplication::translate("ACLEditor", "Inherit group members from parent", nullptr));
#endif // QT_NO_TOOLTIP
#ifndef QT_NO_WHATSTHIS
        qcbGroupInherit->setWhatsThis(QApplication::translate("ACLEditor", "<b>Inherit</b><br />This inherits all the members in the group from the parent, if the group is marked as <i>Inheritable</i> in the parent channel.", nullptr));
#endif // QT_NO_WHATSTHIS
        qcbGroupInherit->setText(QApplication::translate("ACLEditor", "Inherit", nullptr));
#ifndef QT_NO_TOOLTIP
        qcbGroupInheritable->setToolTip(QApplication::translate("ACLEditor", "Make group inheritable to sub-channels", nullptr));
#endif // QT_NO_TOOLTIP
#ifndef QT_NO_WHATSTHIS
        qcbGroupInheritable->setWhatsThis(QApplication::translate("ACLEditor", "<b>Inheritable</b><br />This makes this group inheritable to sub-channels. If the group is non-inheritable, sub-channels are still free to create a new group with the same name.", nullptr));
#endif // QT_NO_WHATSTHIS
        qcbGroupInheritable->setText(QApplication::translate("ACLEditor", "Inheritable", nullptr));
#ifndef QT_NO_TOOLTIP
        qcbGroupInherited->setToolTip(QApplication::translate("ACLEditor", "Group was inherited from parent channel", nullptr));
#endif // QT_NO_TOOLTIP
#ifndef QT_NO_WHATSTHIS
        qcbGroupInherited->setWhatsThis(QApplication::translate("ACLEditor", "<b>Inherited</b><br />This indicates that the group was inherited from the parent channel. You cannot edit this flag, it's just for information.", nullptr));
#endif // QT_NO_WHATSTHIS
        qcbGroupInherited->setText(QApplication::translate("ACLEditor", "Inherited", nullptr));
        qgbGroupMembers->setTitle(QApplication::translate("ACLEditor", "Members", nullptr));
#ifndef QT_NO_TOOLTIP
        qlwGroupAdd->setToolTip(QApplication::translate("ACLEditor", "Contains the list of members added to the group by this channel.", nullptr));
#endif // QT_NO_TOOLTIP
#ifndef QT_NO_WHATSTHIS
        qlwGroupAdd->setWhatsThis(QApplication::translate("ACLEditor", "<b>Members</b><br />\n"
"This list contains all members that were added to the group by the current channel. Be aware that this does not include members inherited by higher levels of the channel tree. These can be found in the <i>Inherited members</i> list. To prevent this list to be inherited by lower level channels uncheck <i>Inheritable</i> or manually add the members to the <i>Excluded members</i> list.", nullptr));
#endif // QT_NO_WHATSTHIS
#ifndef QT_NO_TOOLTIP
        qcbGroupAdd->setToolTip(QApplication::translate("ACLEditor", "Add member to group", nullptr));
#endif // QT_NO_TOOLTIP
#ifndef QT_NO_WHATSTHIS
        qcbGroupAdd->setWhatsThis(QApplication::translate("ACLEditor", "Type in the name of a user you wish to add to the group and click Add.", nullptr));
#endif // QT_NO_WHATSTHIS
        qpbGroupAddAdd->setText(QApplication::translate("ACLEditor", "Add", nullptr));
        qliGroupAdd->setText(QApplication::translate("ACLEditor", "Members", nullptr));
        qpbGroupAddRemove->setText(QApplication::translate("ACLEditor", "Remove", nullptr));
#ifndef QT_NO_TOOLTIP
        qlwGroupRemove->setToolTip(QApplication::translate("ACLEditor", "Contains a list of members whose group membership will not be inherited from the parent channel.", nullptr));
#endif // QT_NO_TOOLTIP
#ifndef QT_NO_WHATSTHIS
        qlwGroupRemove->setWhatsThis(QApplication::translate("ACLEditor", "<b>Excluded members</b><br />\n"
"Contains a list of members whose group membership will not be inherited from the parent channel.", nullptr));
#endif // QT_NO_WHATSTHIS
#ifndef QT_NO_TOOLTIP
        qcbGroupRemove->setToolTip(QApplication::translate("ACLEditor", "Remove member from group", nullptr));
#endif // QT_NO_TOOLTIP
#ifndef QT_NO_WHATSTHIS
        qcbGroupRemove->setWhatsThis(QApplication::translate("ACLEditor", "Type in the name of a user you wish to remove from the group and click Add.", nullptr));
#endif // QT_NO_WHATSTHIS
        qpbGroupRemoveAdd->setText(QApplication::translate("ACLEditor", "Add", nullptr));
        qpbGroupRemoveRemove->setText(QApplication::translate("ACLEditor", "Remove", nullptr));
        qliGroupRemove->setText(QApplication::translate("ACLEditor", "Excluded members", nullptr));
        qliGroupInherit->setText(QApplication::translate("ACLEditor", "Inherited members", nullptr));
#ifndef QT_NO_TOOLTIP
        qlwGroupInherit->setToolTip(QApplication::translate("ACLEditor", "Contains the list of members inherited by other channels.", nullptr));
#endif // QT_NO_TOOLTIP
#ifndef QT_NO_WHATSTHIS
        qlwGroupInherit->setWhatsThis(QApplication::translate("ACLEditor", "<b>Inherited members</b><br />\n"
"Contains the list of members inherited by the current channel. Uncheck <i>Inherit</i> to prevent inheritance from higher level channels.", nullptr));
#endif // QT_NO_WHATSTHIS
        qpbGroupInheritRemove->setText(QApplication::translate("ACLEditor", "Exclude", nullptr));
        qtwTab->setTabText(qtwTab->indexOf(qwGroups), QApplication::translate("ACLEditor", "&Groups", nullptr));
        qgbACLs->setTitle(QApplication::translate("ACLEditor", "Active ACLs", nullptr));
#ifndef QT_NO_TOOLTIP
        qlwACLs->setToolTip(QApplication::translate("ACLEditor", "List of entries", nullptr));
#endif // QT_NO_TOOLTIP
#ifndef QT_NO_WHATSTHIS
        qlwACLs->setWhatsThis(QApplication::translate("ACLEditor", "This shows all the entries active on this channel. Entries inherited from parent channels will be shown in italics.<br />ACLs are evaluated top to bottom, meaning priority increases as you move down the list.", nullptr));
#endif // QT_NO_WHATSTHIS
#ifndef QT_NO_TOOLTIP
        qcbACLInherit->setToolTip(QApplication::translate("ACLEditor", "Inherit ACL of parent?", nullptr));
#endif // QT_NO_TOOLTIP
#ifndef QT_NO_WHATSTHIS
        qcbACLInherit->setWhatsThis(QApplication::translate("ACLEditor", "This sets whether or not the ACL up the chain of parent channels are applied to this object. Only those entries that are marked in the parent as \"Apply to sub-channels\" will be inherited.", nullptr));
#endif // QT_NO_WHATSTHIS
        qcbACLInherit->setText(QApplication::translate("ACLEditor", "Inherit ACLs", nullptr));
#ifndef QT_NO_TOOLTIP
        qpbACLUp->setToolTip(QApplication::translate("ACLEditor", "Move entry up", nullptr));
#endif // QT_NO_TOOLTIP
#ifndef QT_NO_WHATSTHIS
        qpbACLUp->setWhatsThis(QApplication::translate("ACLEditor", "This moves the entry up in the list. As entries are evaluated in order, this may change the effective permissions of users. You cannot move an entry above an inherited entry, if you really need that you'll have to duplicate the inherited entry.", nullptr));
#endif // QT_NO_WHATSTHIS
        qpbACLUp->setText(QApplication::translate("ACLEditor", "&Up", nullptr));
#ifndef QT_NO_TOOLTIP
        qpbACLDown->setToolTip(QApplication::translate("ACLEditor", "Move entry down", nullptr));
#endif // QT_NO_TOOLTIP
#ifndef QT_NO_WHATSTHIS
        qpbACLDown->setWhatsThis(QApplication::translate("ACLEditor", "This moves the entry down in the list. As entries are evaluated in order, this may change the effective permissions of users.", nullptr));
#endif // QT_NO_WHATSTHIS
        qpbACLDown->setText(QApplication::translate("ACLEditor", "&Down", nullptr));
#ifndef QT_NO_TOOLTIP
        qpbACLAdd->setToolTip(QApplication::translate("ACLEditor", "Add new entry", nullptr));
#endif // QT_NO_TOOLTIP
#ifndef QT_NO_WHATSTHIS
        qpbACLAdd->setWhatsThis(QApplication::translate("ACLEditor", "This adds a new entry, initially set with no permissions and applying to all.", nullptr));
#endif // QT_NO_WHATSTHIS
        qpbACLAdd->setText(QApplication::translate("ACLEditor", "&Add", nullptr));
#ifndef QT_NO_TOOLTIP
        qpbACLRemove->setToolTip(QApplication::translate("ACLEditor", "Remove entry", nullptr));
#endif // QT_NO_TOOLTIP
#ifndef QT_NO_WHATSTHIS
        qpbACLRemove->setWhatsThis(QApplication::translate("ACLEditor", "This removes the currently selected entry.", nullptr));
#endif // QT_NO_WHATSTHIS
        qpbACLRemove->setText(QApplication::translate("ACLEditor", "&Remove", nullptr));
        qgbACLapply->setTitle(QApplication::translate("ACLEditor", "Context", nullptr));
#ifndef QT_NO_TOOLTIP
        qcbACLApplySubs->setToolTip(QApplication::translate("ACLEditor", "Entry should apply to sub-channels.", nullptr));
#endif // QT_NO_TOOLTIP
#ifndef QT_NO_WHATSTHIS
        qcbACLApplySubs->setWhatsThis(QApplication::translate("ACLEditor", "This makes the entry apply to sub-channels of this channel.", nullptr));
#endif // QT_NO_WHATSTHIS
        qcbACLApplySubs->setText(QApplication::translate("ACLEditor", "Applies to sub-channels", nullptr));
#ifndef QT_NO_TOOLTIP
        qcbACLApplyHere->setToolTip(QApplication::translate("ACLEditor", "Entry should apply to this channel.", nullptr));
#endif // QT_NO_TOOLTIP
#ifndef QT_NO_WHATSTHIS
        qcbACLApplyHere->setWhatsThis(QApplication::translate("ACLEditor", "This makes the entry apply to this channel.", nullptr));
#endif // QT_NO_WHATSTHIS
        qcbACLApplyHere->setText(QApplication::translate("ACLEditor", "Applies to this channel", nullptr));
        qgbACLugroup->setTitle(QApplication::translate("ACLEditor", "User/Group", nullptr));
        qliACLGroup->setText(QApplication::translate("ACLEditor", "Group", nullptr));
#ifndef QT_NO_TOOLTIP
        qcbACLGroup->setToolTip(QApplication::translate("ACLEditor", "Group this entry applies to", nullptr));
#endif // QT_NO_TOOLTIP
#ifndef QT_NO_WHATSTHIS
        qcbACLGroup->setWhatsThis(QApplication::translate("ACLEditor", "This controls which group of users this entry applies to.<br />Note that the group is evaluated in the context of the channel the entry is used in. For example, the default ACL on the Root channel gives <i>Write</i> permission to the <i>admin</i> group. This entry, if inherited by a channel, will give a user write privileges if he belongs to the <i>admin</i> group in that channel, even if he doesn't belong to the <i>admin</i> group in the channel where the ACL originated.<br />If a group name starts with '!', its membership is negated, and if it starts with '~', it is evaluated in the channel the ACL was defined in, rather than the channel the ACL is active in.<br />If a group name starts with '#', it is interpreted as an access token. Users must have entered whatever follows the '#' in their list of access tokens to match. This can be used for very simple password access to channels for non-authenticated users.<br />If a group name starts with '$', it will only match users whose certificate hash matches what "
                        "follows the '$'.<br />A few special predefined groups are:<br /><b>all</b> - Everyone will match.<br /><b>auth</b> - All authenticated users will match.<br /><b>sub,a,b,c</b> - User currently in a sub-channel minimum <i>a</i> common parents, and between <i>b</i> and <i>c</i> channels down the chain. See the website for more extensive documentation on this one.<br /><b>in</b> - Users currently in the channel will match (convenience for '<i>sub,0,0,0</i>').<br /><b>out</b> - Users outside the channel will match (convenience for '<i>!sub,0,0,0</i>').<br />Note that an entry applies to either a user or a group, not both.", nullptr));
#endif // QT_NO_WHATSTHIS
        qliACLUser->setText(QApplication::translate("ACLEditor", "User ID", nullptr));
#ifndef QT_NO_TOOLTIP
        qcbACLUser->setToolTip(QApplication::translate("ACLEditor", "User this entry applies to", nullptr));
#endif // QT_NO_TOOLTIP
#ifndef QT_NO_WHATSTHIS
        qcbACLUser->setWhatsThis(QApplication::translate("ACLEditor", "This controls which user this entry applies to. Just type in the user name and hit enter to query the server for a match.", nullptr));
#endif // QT_NO_WHATSTHIS
        qgbACLpermissions->setTitle(QApplication::translate("ACLEditor", "Permissions", nullptr));
        qtwTab->setTabText(qtwTab->indexOf(qwACL), QApplication::translate("ACLEditor", "&ACL", nullptr));
    } // retranslateUi

};

namespace Ui {
    class ACLEditor: public Ui_ACLEditor {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_ACLEDITOR_H
