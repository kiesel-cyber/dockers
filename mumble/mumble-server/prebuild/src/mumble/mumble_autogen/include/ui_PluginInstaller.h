/********************************************************************************
** Form generated from reading UI file 'PluginInstaller.ui'
**
** Created by: Qt User Interface Compiler version 5.12.8
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_PLUGININSTALLER_H
#define UI_PLUGININSTALLER_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QFormLayout>
#include <QtWidgets/QFrame>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QScrollArea>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_PluginInstaller
{
public:
    QVBoxLayout *verticalLayout;
    QLabel *qlPrompt;
    QFrame *line;
    QScrollArea *scrollArea;
    QWidget *qwPluginInfo;
    QFormLayout *formLayout;
    QLabel *qlName_label;
    QLabel *qlName;
    QLabel *qlVersion_label;
    QLabel *qlVersion;
    QLabel *qlAuthor_label;
    QLabel *qlAuthor;
    QLabel *qlDescription_label;
    QLabel *qlDescription;
    QFrame *line_2;
    QFrame *frame;
    QHBoxLayout *horizontalLayout;
    QPushButton *qpbNo;
    QSpacerItem *horizontalSpacer;
    QPushButton *qpbYes;

    void setupUi(QDialog *PluginInstaller)
    {
        if (PluginInstaller->objectName().isEmpty())
            PluginInstaller->setObjectName(QString::fromUtf8("PluginInstaller"));
        PluginInstaller->resize(360, 332);
        PluginInstaller->setSizeGripEnabled(false);
        PluginInstaller->setModal(false);
        verticalLayout = new QVBoxLayout(PluginInstaller);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        qlPrompt = new QLabel(PluginInstaller);
        qlPrompt->setObjectName(QString::fromUtf8("qlPrompt"));
        QSizePolicy sizePolicy(QSizePolicy::Expanding, QSizePolicy::Minimum);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(qlPrompt->sizePolicy().hasHeightForWidth());
        qlPrompt->setSizePolicy(sizePolicy);
        qlPrompt->setFrameShape(QFrame::NoFrame);
        qlPrompt->setWordWrap(true);

        verticalLayout->addWidget(qlPrompt);

        line = new QFrame(PluginInstaller);
        line->setObjectName(QString::fromUtf8("line"));
        line->setFrameShape(QFrame::HLine);
        line->setFrameShadow(QFrame::Sunken);

        verticalLayout->addWidget(line);

        scrollArea = new QScrollArea(PluginInstaller);
        scrollArea->setObjectName(QString::fromUtf8("scrollArea"));
        scrollArea->setFrameShape(QFrame::NoFrame);
        scrollArea->setWidgetResizable(true);
        qwPluginInfo = new QWidget();
        qwPluginInfo->setObjectName(QString::fromUtf8("qwPluginInfo"));
        qwPluginInfo->setGeometry(QRect(0, 0, 348, 208));
        formLayout = new QFormLayout(qwPluginInfo);
        formLayout->setObjectName(QString::fromUtf8("formLayout"));
        formLayout->setLabelAlignment(Qt::AlignLeading|Qt::AlignLeft|Qt::AlignTop);
        formLayout->setVerticalSpacing(12);
        qlName_label = new QLabel(qwPluginInfo);
        qlName_label->setObjectName(QString::fromUtf8("qlName_label"));

        formLayout->setWidget(0, QFormLayout::LabelRole, qlName_label);

        qlName = new QLabel(qwPluginInfo);
        qlName->setObjectName(QString::fromUtf8("qlName"));
        QSizePolicy sizePolicy1(QSizePolicy::Expanding, QSizePolicy::Preferred);
        sizePolicy1.setHorizontalStretch(0);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(qlName->sizePolicy().hasHeightForWidth());
        qlName->setSizePolicy(sizePolicy1);
        qlName->setText(QString::fromUtf8(""));
        qlName->setWordWrap(true);

        formLayout->setWidget(0, QFormLayout::FieldRole, qlName);

        qlVersion_label = new QLabel(qwPluginInfo);
        qlVersion_label->setObjectName(QString::fromUtf8("qlVersion_label"));

        formLayout->setWidget(1, QFormLayout::LabelRole, qlVersion_label);

        qlVersion = new QLabel(qwPluginInfo);
        qlVersion->setObjectName(QString::fromUtf8("qlVersion"));
        sizePolicy1.setHeightForWidth(qlVersion->sizePolicy().hasHeightForWidth());
        qlVersion->setSizePolicy(sizePolicy1);
        qlVersion->setText(QString::fromUtf8(""));
        qlVersion->setWordWrap(true);

        formLayout->setWidget(1, QFormLayout::FieldRole, qlVersion);

        qlAuthor_label = new QLabel(qwPluginInfo);
        qlAuthor_label->setObjectName(QString::fromUtf8("qlAuthor_label"));

        formLayout->setWidget(2, QFormLayout::LabelRole, qlAuthor_label);

        qlAuthor = new QLabel(qwPluginInfo);
        qlAuthor->setObjectName(QString::fromUtf8("qlAuthor"));
        sizePolicy1.setHeightForWidth(qlAuthor->sizePolicy().hasHeightForWidth());
        qlAuthor->setSizePolicy(sizePolicy1);
        qlAuthor->setText(QString::fromUtf8(""));
        qlAuthor->setWordWrap(true);

        formLayout->setWidget(2, QFormLayout::FieldRole, qlAuthor);

        qlDescription_label = new QLabel(qwPluginInfo);
        qlDescription_label->setObjectName(QString::fromUtf8("qlDescription_label"));

        formLayout->setWidget(3, QFormLayout::LabelRole, qlDescription_label);

        qlDescription = new QLabel(qwPluginInfo);
        qlDescription->setObjectName(QString::fromUtf8("qlDescription"));
        QSizePolicy sizePolicy2(QSizePolicy::Expanding, QSizePolicy::Expanding);
        sizePolicy2.setHorizontalStretch(0);
        sizePolicy2.setVerticalStretch(0);
        sizePolicy2.setHeightForWidth(qlDescription->sizePolicy().hasHeightForWidth());
        qlDescription->setSizePolicy(sizePolicy2);
        qlDescription->setText(QString::fromUtf8(""));
        qlDescription->setAlignment(Qt::AlignLeading|Qt::AlignLeft|Qt::AlignTop);
        qlDescription->setWordWrap(true);

        formLayout->setWidget(3, QFormLayout::FieldRole, qlDescription);

        scrollArea->setWidget(qwPluginInfo);

        verticalLayout->addWidget(scrollArea);

        line_2 = new QFrame(PluginInstaller);
        line_2->setObjectName(QString::fromUtf8("line_2"));
        line_2->setFrameShape(QFrame::HLine);
        line_2->setFrameShadow(QFrame::Sunken);

        verticalLayout->addWidget(line_2);

        frame = new QFrame(PluginInstaller);
        frame->setObjectName(QString::fromUtf8("frame"));
        horizontalLayout = new QHBoxLayout(frame);
        horizontalLayout->setSpacing(0);
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        horizontalLayout->setContentsMargins(-1, 6, -1, 6);
        qpbNo = new QPushButton(frame);
        qpbNo->setObjectName(QString::fromUtf8("qpbNo"));
        qpbNo->setMinimumSize(QSize(80, 30));

        horizontalLayout->addWidget(qpbNo);

        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout->addItem(horizontalSpacer);

        qpbYes = new QPushButton(frame);
        qpbYes->setObjectName(QString::fromUtf8("qpbYes"));
        QSizePolicy sizePolicy3(QSizePolicy::Maximum, QSizePolicy::Fixed);
        sizePolicy3.setHorizontalStretch(0);
        sizePolicy3.setVerticalStretch(0);
        sizePolicy3.setHeightForWidth(qpbYes->sizePolicy().hasHeightForWidth());
        qpbYes->setSizePolicy(sizePolicy3);
        qpbYes->setMinimumSize(QSize(80, 30));

        horizontalLayout->addWidget(qpbYes);


        verticalLayout->addWidget(frame);


        retranslateUi(PluginInstaller);

        QMetaObject::connectSlotsByName(PluginInstaller);
    } // setupUi

    void retranslateUi(QDialog *PluginInstaller)
    {
        PluginInstaller->setWindowTitle(QApplication::translate("PluginInstaller", "PluginInstaller", nullptr));
        qlPrompt->setText(QApplication::translate("PluginInstaller", "You are about to install the plugin listed below. Do you wish to proceed?", nullptr));
        qlName_label->setText(QApplication::translate("PluginInstaller", "<html><head/><body><p><span style=\" font-weight:600;\">Name:</span></p></body></html>", nullptr));
        qlVersion_label->setText(QApplication::translate("PluginInstaller", "<html><head/><body><p><span style=\" font-weight:600;\">Version:</span></p></body></html>", nullptr));
        qlAuthor_label->setText(QApplication::translate("PluginInstaller", "<html><head/><body><p><span style=\" font-weight:600;\">Author(s):</span></p></body></html>", nullptr));
        qlDescription_label->setText(QApplication::translate("PluginInstaller", "<html><head/><body><p><span style=\" font-weight:600;\">Description:</span></p></body></html>", nullptr));
        qpbNo->setText(QApplication::translate("PluginInstaller", "&No", nullptr));
        qpbYes->setText(QApplication::translate("PluginInstaller", "&Yes", nullptr));
    } // retranslateUi

};

namespace Ui {
    class PluginInstaller: public Ui_PluginInstaller {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_PLUGININSTALLER_H
