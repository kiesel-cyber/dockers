/********************************************************************************
** Form generated from reading UI file 'Log.ui'
**
** Created by: Qt User Interface Compiler version 5.12.8
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_LOG_H
#define UI_LOG_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QCheckBox>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QSlider>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QSpinBox>
#include <QtWidgets/QTreeWidget>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_LogConfig
{
public:
    QVBoxLayout *vboxLayout;
    QTreeWidget *qtwMessages;
    QGroupBox *qgbTTS;
    QGridLayout *gridLayout;
    QLabel *qlVolume;
    QSlider *qsVolume;
    QLabel *qlThreshold;
    QSpinBox *qsbThreshold;
    QCheckBox *qcbReadBackOwn;
    QCheckBox *qcbNoScope;
    QCheckBox *qcbNoAuthor;
    QGroupBox *qgbMisc;
    QVBoxLayout *verticalLayout;
    QCheckBox *qcbWhisperFriends;
    QHBoxLayout *horizontalLayout;
    QLabel *label_2;
    QSpinBox *qsbMessageLimitUsers;
    QLabel *label;
    QGroupBox *qgbMaxBlocks;
    QGridLayout *_2;
    QCheckBox *qcb24HourClock;
    QSpinBox *qsbMaxBlocks;
    QLabel *qlMaxBlocks;
    QSpacerItem *horizontalSpacer;
    QLabel *qlChatMessageMargins;
    QSpinBox *qsbChatMessageMargins;

    void setupUi(QWidget *LogConfig)
    {
        if (LogConfig->objectName().isEmpty())
            LogConfig->setObjectName(QString::fromUtf8("LogConfig"));
        LogConfig->resize(580, 496);
        vboxLayout = new QVBoxLayout(LogConfig);
        vboxLayout->setObjectName(QString::fromUtf8("vboxLayout"));
        qtwMessages = new QTreeWidget(LogConfig);
        qtwMessages->setObjectName(QString::fromUtf8("qtwMessages"));
        qtwMessages->setAlternatingRowColors(true);
        qtwMessages->setSelectionMode(QAbstractItemView::SingleSelection);
        qtwMessages->setRootIsDecorated(false);
        qtwMessages->setUniformRowHeights(true);
        qtwMessages->setItemsExpandable(false);

        vboxLayout->addWidget(qtwMessages);

        qgbTTS = new QGroupBox(LogConfig);
        qgbTTS->setObjectName(QString::fromUtf8("qgbTTS"));
        gridLayout = new QGridLayout(qgbTTS);
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        qlVolume = new QLabel(qgbTTS);
        qlVolume->setObjectName(QString::fromUtf8("qlVolume"));

        gridLayout->addWidget(qlVolume, 0, 0, 1, 1);

        qsVolume = new QSlider(qgbTTS);
        qsVolume->setObjectName(QString::fromUtf8("qsVolume"));
        qsVolume->setMaximum(100);
        qsVolume->setSingleStep(5);
        qsVolume->setPageStep(20);
        qsVolume->setOrientation(Qt::Horizontal);
        qsVolume->setTickPosition(QSlider::TicksBelow);
        qsVolume->setTickInterval(5);

        gridLayout->addWidget(qsVolume, 0, 1, 1, 3);

        qlThreshold = new QLabel(qgbTTS);
        qlThreshold->setObjectName(QString::fromUtf8("qlThreshold"));

        gridLayout->addWidget(qlThreshold, 1, 0, 1, 1);

        qsbThreshold = new QSpinBox(qgbTTS);
        qsbThreshold->setObjectName(QString::fromUtf8("qsbThreshold"));
        qsbThreshold->setButtonSymbols(QAbstractSpinBox::PlusMinus);
        qsbThreshold->setMaximum(5000);
        qsbThreshold->setSingleStep(10);

        gridLayout->addWidget(qsbThreshold, 1, 1, 1, 1);

        qcbReadBackOwn = new QCheckBox(qgbTTS);
        qcbReadBackOwn->setObjectName(QString::fromUtf8("qcbReadBackOwn"));

        gridLayout->addWidget(qcbReadBackOwn, 1, 3, 1, 1);

        qcbNoScope = new QCheckBox(qgbTTS);
        qcbNoScope->setObjectName(QString::fromUtf8("qcbNoScope"));

        gridLayout->addWidget(qcbNoScope, 2, 0, 1, 1);

        qcbNoAuthor = new QCheckBox(qgbTTS);
        qcbNoAuthor->setObjectName(QString::fromUtf8("qcbNoAuthor"));

        gridLayout->addWidget(qcbNoAuthor, 2, 1, 1, 1);


        vboxLayout->addWidget(qgbTTS);

        qgbMisc = new QGroupBox(LogConfig);
        qgbMisc->setObjectName(QString::fromUtf8("qgbMisc"));
        verticalLayout = new QVBoxLayout(qgbMisc);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        qcbWhisperFriends = new QCheckBox(qgbMisc);
        qcbWhisperFriends->setObjectName(QString::fromUtf8("qcbWhisperFriends"));

        verticalLayout->addWidget(qcbWhisperFriends);

        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        label_2 = new QLabel(qgbMisc);
        label_2->setObjectName(QString::fromUtf8("label_2"));

        horizontalLayout->addWidget(label_2);

        qsbMessageLimitUsers = new QSpinBox(qgbMisc);
        qsbMessageLimitUsers->setObjectName(QString::fromUtf8("qsbMessageLimitUsers"));
        qsbMessageLimitUsers->setEnabled(true);
        qsbMessageLimitUsers->setMaximumSize(QSize(40, 20));
        qsbMessageLimitUsers->setFrame(true);

        horizontalLayout->addWidget(qsbMessageLimitUsers);

        label = new QLabel(qgbMisc);
        label->setObjectName(QString::fromUtf8("label"));

        horizontalLayout->addWidget(label);


        verticalLayout->addLayout(horizontalLayout);


        vboxLayout->addWidget(qgbMisc);

        qgbMaxBlocks = new QGroupBox(LogConfig);
        qgbMaxBlocks->setObjectName(QString::fromUtf8("qgbMaxBlocks"));
        _2 = new QGridLayout(qgbMaxBlocks);
        _2->setObjectName(QString::fromUtf8("_2"));
        qcb24HourClock = new QCheckBox(qgbMaxBlocks);
        qcb24HourClock->setObjectName(QString::fromUtf8("qcb24HourClock"));

        _2->addWidget(qcb24HourClock, 1, 0, 1, 1);

        qsbMaxBlocks = new QSpinBox(qgbMaxBlocks);
        qsbMaxBlocks->setObjectName(QString::fromUtf8("qsbMaxBlocks"));
        qsbMaxBlocks->setButtonSymbols(QAbstractSpinBox::PlusMinus);
        qsbMaxBlocks->setMaximum(1000000);
        qsbMaxBlocks->setSingleStep(100);

        _2->addWidget(qsbMaxBlocks, 0, 1, 1, 1);

        qlMaxBlocks = new QLabel(qgbMaxBlocks);
        qlMaxBlocks->setObjectName(QString::fromUtf8("qlMaxBlocks"));

        _2->addWidget(qlMaxBlocks, 0, 0, 1, 1);

        horizontalSpacer = new QSpacerItem(8, 16, QSizePolicy::Expanding, QSizePolicy::Minimum);

        _2->addItem(horizontalSpacer, 0, 2, 1, 1);

        qlChatMessageMargins = new QLabel(qgbMaxBlocks);
        qlChatMessageMargins->setObjectName(QString::fromUtf8("qlChatMessageMargins"));

        _2->addWidget(qlChatMessageMargins, 2, 0, 1, 1);

        qsbChatMessageMargins = new QSpinBox(qgbMaxBlocks);
        qsbChatMessageMargins->setObjectName(QString::fromUtf8("qsbChatMessageMargins"));
        qsbChatMessageMargins->setFrame(true);

        _2->addWidget(qsbChatMessageMargins, 2, 1, 1, 1);


        vboxLayout->addWidget(qgbMaxBlocks);

#ifndef QT_NO_SHORTCUT
        qlVolume->setBuddy(qsVolume);
        qlThreshold->setBuddy(qsbThreshold);
        label->setBuddy(qsbMessageLimitUsers);
#endif // QT_NO_SHORTCUT

        retranslateUi(LogConfig);

        QMetaObject::connectSlotsByName(LogConfig);
    } // setupUi

    void retranslateUi(QWidget *LogConfig)
    {
        LogConfig->setWindowTitle(QApplication::translate("LogConfig", "Messages", nullptr));
        QTreeWidgetItem *___qtreewidgetitem = qtwMessages->headerItem();
        ___qtreewidgetitem->setText(7, QApplication::translate("LogConfig", "Soundfile", nullptr));
        ___qtreewidgetitem->setText(6, QApplication::translate("LogConfig", "Path", nullptr));
        ___qtreewidgetitem->setText(5, QApplication::translate("LogConfig", "Limit", nullptr));
        ___qtreewidgetitem->setText(4, QApplication::translate("LogConfig", "Text-To-Speech", nullptr));
        ___qtreewidgetitem->setText(3, QApplication::translate("LogConfig", "Highlight", nullptr));
        ___qtreewidgetitem->setText(2, QApplication::translate("LogConfig", "Notification", nullptr));
        ___qtreewidgetitem->setText(1, QApplication::translate("LogConfig", "Console", nullptr));
        ___qtreewidgetitem->setText(0, QApplication::translate("LogConfig", "Message", nullptr));
        qgbTTS->setTitle(QApplication::translate("LogConfig", "Text To Speech", nullptr));
        qlVolume->setText(QApplication::translate("LogConfig", "Volume", nullptr));
#ifndef QT_NO_TOOLTIP
        qsVolume->setToolTip(QApplication::translate("LogConfig", "Volume of Text-To-Speech Engine", nullptr));
#endif // QT_NO_TOOLTIP
#ifndef QT_NO_WHATSTHIS
        qsVolume->setWhatsThis(QApplication::translate("LogConfig", "<b>This is the volume used for the speech synthesis.</b>", nullptr));
#endif // QT_NO_WHATSTHIS
        qlThreshold->setText(QApplication::translate("LogConfig", "Length threshold", nullptr));
#ifndef QT_NO_TOOLTIP
        qsbThreshold->setToolTip(QApplication::translate("LogConfig", "Message length threshold for Text-To-Speech Engine", nullptr));
#endif // QT_NO_TOOLTIP
#ifndef QT_NO_WHATSTHIS
        qsbThreshold->setWhatsThis(QApplication::translate("LogConfig", "<b>This is the length threshold used for the Text-To-Speech Engine.</b><br />Messages longer than this limit will not be read aloud in their full length.", nullptr));
#endif // QT_NO_WHATSTHIS
        qsbThreshold->setSuffix(QApplication::translate("LogConfig", " Characters", nullptr));
#ifndef QT_NO_TOOLTIP
        qcbReadBackOwn->setToolTip(QApplication::translate("LogConfig", "If enabled text messages you send will be read back to you with TTS", nullptr));
#endif // QT_NO_TOOLTIP
        qcbReadBackOwn->setText(QApplication::translate("LogConfig", "Read back own messages", nullptr));
#ifndef QT_NO_TOOLTIP
        qcbNoScope->setToolTip(QApplication::translate("LogConfig", "If enabled, TTS will not dictate the message scope.", nullptr));
#endif // QT_NO_TOOLTIP
        qcbNoScope->setText(QApplication::translate("LogConfig", "Omit Message Scope", nullptr));
#ifndef QT_NO_TOOLTIP
        qcbNoAuthor->setToolTip(QApplication::translate("LogConfig", "If enabled, TTS will not dictate the message author.", nullptr));
#endif // QT_NO_TOOLTIP
        qcbNoAuthor->setText(QApplication::translate("LogConfig", "Omit Message Author", nullptr));
        qgbMisc->setTitle(QApplication::translate("LogConfig", "Misc.", nullptr));
#ifndef QT_NO_TOOLTIP
        qcbWhisperFriends->setToolTip(QApplication::translate("LogConfig", "If checked you will only hear whispers from users you added to your friend list.", nullptr));
#endif // QT_NO_TOOLTIP
        qcbWhisperFriends->setText(QApplication::translate("LogConfig", "Only accept whispers from friends", nullptr));
        label_2->setText(QApplication::translate("LogConfig", "Limit notifications when there are more than", nullptr));
#ifndef QT_NO_TOOLTIP
        qsbMessageLimitUsers->setToolTip(QApplication::translate("LogConfig", "Number of users that will trigger message limiting functionality.", nullptr));
#endif // QT_NO_TOOLTIP
        label->setText(QApplication::translate("LogConfig", "users on the server.", nullptr));
        qgbMaxBlocks->setTitle(QApplication::translate("LogConfig", "Chat Log", nullptr));
#ifndef QT_NO_TOOLTIP
        qcb24HourClock->setToolTip(QApplication::translate("LogConfig", "If checked the time at the beginning of a message will be displayed in the 24-hour format.\n"
"\n"
"The setting only applies for new messages, the already shown ones will retain the previous time format.", nullptr));
#endif // QT_NO_TOOLTIP
        qcb24HourClock->setText(QApplication::translate("LogConfig", "Use 24-hour clock", nullptr));
        qsbMaxBlocks->setSpecialValueText(QApplication::translate("LogConfig", "Unlimited", nullptr));
        qsbMaxBlocks->setSuffix(QApplication::translate("LogConfig", " Lines", nullptr));
        qlMaxBlocks->setText(QApplication::translate("LogConfig", "Maximum chat length", nullptr));
#ifndef QT_NO_TOOLTIP
        qlChatMessageMargins->setToolTip(QApplication::translate("LogConfig", "How far individual messages are spaced out from one another.", nullptr));
#endif // QT_NO_TOOLTIP
        qlChatMessageMargins->setText(QApplication::translate("LogConfig", "Message margins", nullptr));
#ifndef QT_NO_TOOLTIP
        qsbChatMessageMargins->setToolTip(QApplication::translate("LogConfig", "How far individual messages are spaced out from one another.", nullptr));
#endif // QT_NO_TOOLTIP
    } // retranslateUi

};

namespace Ui {
    class LogConfig: public Ui_LogConfig {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_LOG_H
