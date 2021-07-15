/********************************************************************************
** Form generated from reading UI file 'PluginUpdater.ui'
**
** Created by: Qt User Interface Compiler version 5.12.8
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_PLUGINUPDATER_H
#define UI_PLUGINUPDATER_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QCheckBox>
#include <QtWidgets/QDialog>
#include <QtWidgets/QDialogButtonBox>
#include <QtWidgets/QFormLayout>
#include <QtWidgets/QFrame>
#include <QtWidgets/QLabel>
#include <QtWidgets/QScrollArea>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_PluginUpdater
{
public:
    QVBoxLayout *verticalLayout;
    QLabel *qlTitleText;
    QSpacerItem *verticalSpacer;
    QFrame *line_2;
    QCheckBox *qcbSelectAll;
    QScrollArea *scrollArea;
    QWidget *qwContent;
    QFormLayout *formLayout;
    QLabel *qlPlugin;
    QLabel *qlURL;
    QFrame *line;
    QSpacerItem *verticalSpacer_2;
    QLabel *qlUpdateSelected;
    QDialogButtonBox *buttonBox;

    void setupUi(QDialog *PluginUpdater)
    {
        if (PluginUpdater->objectName().isEmpty())
            PluginUpdater->setObjectName(QString::fromUtf8("PluginUpdater"));
        PluginUpdater->resize(616, 460);
        PluginUpdater->setSizeGripEnabled(false);
        PluginUpdater->setModal(false);
        verticalLayout = new QVBoxLayout(PluginUpdater);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        qlTitleText = new QLabel(PluginUpdater);
        qlTitleText->setObjectName(QString::fromUtf8("qlTitleText"));
        QSizePolicy sizePolicy(QSizePolicy::Expanding, QSizePolicy::Maximum);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(qlTitleText->sizePolicy().hasHeightForWidth());
        qlTitleText->setSizePolicy(sizePolicy);
        qlTitleText->setWordWrap(true);

        verticalLayout->addWidget(qlTitleText);

        verticalSpacer = new QSpacerItem(20, 7, QSizePolicy::Minimum, QSizePolicy::Fixed);

        verticalLayout->addItem(verticalSpacer);

        line_2 = new QFrame(PluginUpdater);
        line_2->setObjectName(QString::fromUtf8("line_2"));
        line_2->setStyleSheet(QString::fromUtf8("background-color: rgb(94, 94, 94);"));
        line_2->setLineWidth(1);
        line_2->setMidLineWidth(0);
        line_2->setFrameShape(QFrame::HLine);
        line_2->setFrameShadow(QFrame::Sunken);

        verticalLayout->addWidget(line_2);

        qcbSelectAll = new QCheckBox(PluginUpdater);
        qcbSelectAll->setObjectName(QString::fromUtf8("qcbSelectAll"));

        verticalLayout->addWidget(qcbSelectAll);

        scrollArea = new QScrollArea(PluginUpdater);
        scrollArea->setObjectName(QString::fromUtf8("scrollArea"));
        scrollArea->setAutoFillBackground(false);
        scrollArea->setStyleSheet(QString::fromUtf8(""));
        scrollArea->setFrameShadow(QFrame::Sunken);
        scrollArea->setWidgetResizable(true);
        qwContent = new QWidget();
        qwContent->setObjectName(QString::fromUtf8("qwContent"));
        qwContent->setGeometry(QRect(0, 0, 600, 284));
        qwContent->setStyleSheet(QString::fromUtf8(""));
        formLayout = new QFormLayout(qwContent);
        formLayout->setObjectName(QString::fromUtf8("formLayout"));
        formLayout->setLabelAlignment(Qt::AlignLeading|Qt::AlignLeft|Qt::AlignVCenter);
        formLayout->setHorizontalSpacing(15);
        qlPlugin = new QLabel(qwContent);
        qlPlugin->setObjectName(QString::fromUtf8("qlPlugin"));
        qlPlugin->setStyleSheet(QString::fromUtf8("font-weight: bold;"));

        formLayout->setWidget(0, QFormLayout::LabelRole, qlPlugin);

        qlURL = new QLabel(qwContent);
        qlURL->setObjectName(QString::fromUtf8("qlURL"));
        qlURL->setStyleSheet(QString::fromUtf8("font-weight: bold;"));

        formLayout->setWidget(0, QFormLayout::FieldRole, qlURL);

        scrollArea->setWidget(qwContent);

        verticalLayout->addWidget(scrollArea);

        line = new QFrame(PluginUpdater);
        line->setObjectName(QString::fromUtf8("line"));
        line->setStyleSheet(QString::fromUtf8("background-color: rgb(94, 94, 94);"));
        line->setLineWidth(1);
        line->setMidLineWidth(0);
        line->setFrameShape(QFrame::HLine);
        line->setFrameShadow(QFrame::Sunken);

        verticalLayout->addWidget(line);

        verticalSpacer_2 = new QSpacerItem(20, 7, QSizePolicy::Minimum, QSizePolicy::Fixed);

        verticalLayout->addItem(verticalSpacer_2);

        qlUpdateSelected = new QLabel(PluginUpdater);
        qlUpdateSelected->setObjectName(QString::fromUtf8("qlUpdateSelected"));
        qlUpdateSelected->setWordWrap(true);

        verticalLayout->addWidget(qlUpdateSelected);

        buttonBox = new QDialogButtonBox(PluginUpdater);
        buttonBox->setObjectName(QString::fromUtf8("buttonBox"));
        buttonBox->setOrientation(Qt::Horizontal);
        buttonBox->setStandardButtons(QDialogButtonBox::No|QDialogButtonBox::Yes);

        verticalLayout->addWidget(buttonBox);


        retranslateUi(PluginUpdater);
        QObject::connect(buttonBox, SIGNAL(accepted()), PluginUpdater, SLOT(accept()));
        QObject::connect(buttonBox, SIGNAL(rejected()), PluginUpdater, SLOT(reject()));

        QMetaObject::connectSlotsByName(PluginUpdater);
    } // setupUi

    void retranslateUi(QDialog *PluginUpdater)
    {
        PluginUpdater->setWindowTitle(QApplication::translate("PluginUpdater", "PluginUpdater", nullptr));
        qlTitleText->setText(QApplication::translate("PluginUpdater", "The following plugins can be updated.", nullptr));
        qcbSelectAll->setText(QApplication::translate("PluginUpdater", "Select all", nullptr));
        qlPlugin->setText(QApplication::translate("PluginUpdater", "Plugin", nullptr));
        qlURL->setText(QApplication::translate("PluginUpdater", "Download-URL", nullptr));
        qlUpdateSelected->setText(QApplication::translate("PluginUpdater", "Do you want to update the selected plugins?", nullptr));
    } // retranslateUi

};

namespace Ui {
    class PluginUpdater: public Ui_PluginUpdater {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_PLUGINUPDATER_H
