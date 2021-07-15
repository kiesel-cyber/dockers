/********************************************************************************
** Form generated from reading UI file 'AudioOutput.ui'
**
** Created by: Qt User Interface Compiler version 5.12.8
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_AUDIOOUTPUT_H
#define UI_AUDIOOUTPUT_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QCheckBox>
#include <QtWidgets/QDoubleSpinBox>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QSlider>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QSpinBox>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>
#include "widgets/MUComboBox.h"

QT_BEGIN_NAMESPACE

class Ui_AudioOutput
{
public:
    QVBoxLayout *verticalLayout;
    QGroupBox *qgbInterfaces;
    QGridLayout *gridLayout_3;
    QLabel *qliSystem;
    MUComboBox *qcbSystem;
    QSpacerItem *spacerItem;
    QLabel *qliDevice;
    MUComboBox *qcbDevice;
    QCheckBox *qcbExclusive;
    QGroupBox *qgbOutput;
    QGridLayout *gridLayout;
    QLabel *qlVolume;
    QSlider *qsDelay;
    QLabel *qlJitter;
    QLabel *qliDelay;
    QSlider *qsVolume;
    QLabel *qliVolume;
    QLabel *qlDelay;
    QSlider *qsJitter;
    QLabel *qliJitter;
    QGroupBox *qgbAttenuation;
    QGridLayout *gridLayout_4;
    QCheckBox *qcbOnlyAttenuateSameOutput;
    QLabel *qliOtherVolume;
    QCheckBox *qcbAttenuateLoopbacks;
    QHBoxLayout *horizontalLayout_2;
    QSpacerItem *horizontalSpacer;
    QCheckBox *qcbAttenuateOthers;
    QSpacerItem *horizontalSpacer_3;
    QCheckBox *qcbAttenuateOthersOnTalk;
    QSpacerItem *horizontalSpacer_2;
    QSlider *qsOtherVolume;
    QLabel *qlOtherVolume;
    QCheckBox *qcbAttenuateUsersOnPrioritySpeak;
    QGroupBox *qgbPositionalAudio;
    QGridLayout *gridLayout_2;
    QCheckBox *qcbHeadphones;
    QSlider *qsMinimumVolume;
    QSlider *qsMinDistance;
    QSlider *qsMaxDistance;
    QCheckBox *qcbPositional;
    QSpinBox *qsbBloom;
    QLabel *qlMaxDistance;
    QSpinBox *qsbMinimumVolume;
    QSlider *qsBloom;
    QLabel *qlBloom;
    QDoubleSpinBox *qsbMaximumDistance;
    QLabel *qlMinimumVolume;
    QLabel *qlMinDistance;
    QDoubleSpinBox *qsbMinimumDistance;
    QGroupBox *qgbLoopback;
    QGridLayout *gridLayout1;
    QLabel *qliPacketDelay;
    QSlider *qsPacketDelay;
    QLabel *qlPacketDelay;
    QLabel *qliPacketLoss;
    QSlider *qsPacketLoss;
    QLabel *qlPacketLoss;
    QLabel *qliLoopback;
    MUComboBox *qcbLoopback;
    QSpacerItem *spacer;

    void setupUi(QWidget *AudioOutput)
    {
        if (AudioOutput->objectName().isEmpty())
            AudioOutput->setObjectName(QString::fromUtf8("AudioOutput"));
        AudioOutput->resize(546, 813);
        verticalLayout = new QVBoxLayout(AudioOutput);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        qgbInterfaces = new QGroupBox(AudioOutput);
        qgbInterfaces->setObjectName(QString::fromUtf8("qgbInterfaces"));
        gridLayout_3 = new QGridLayout(qgbInterfaces);
        gridLayout_3->setObjectName(QString::fromUtf8("gridLayout_3"));
        qliSystem = new QLabel(qgbInterfaces);
        qliSystem->setObjectName(QString::fromUtf8("qliSystem"));

        gridLayout_3->addWidget(qliSystem, 0, 0, 1, 1);

        qcbSystem = new MUComboBox(qgbInterfaces);
        qcbSystem->setObjectName(QString::fromUtf8("qcbSystem"));
        QSizePolicy sizePolicy(QSizePolicy::MinimumExpanding, QSizePolicy::Fixed);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(qcbSystem->sizePolicy().hasHeightForWidth());
        qcbSystem->setSizePolicy(sizePolicy);

        gridLayout_3->addWidget(qcbSystem, 0, 1, 1, 1);

        spacerItem = new QSpacerItem(24, 16, QSizePolicy::Maximum, QSizePolicy::Minimum);

        gridLayout_3->addItem(spacerItem, 0, 2, 1, 1);

        qliDevice = new QLabel(qgbInterfaces);
        qliDevice->setObjectName(QString::fromUtf8("qliDevice"));

        gridLayout_3->addWidget(qliDevice, 0, 3, 1, 1);

        qcbDevice = new MUComboBox(qgbInterfaces);
        qcbDevice->setObjectName(QString::fromUtf8("qcbDevice"));
        QSizePolicy sizePolicy1(QSizePolicy::MinimumExpanding, QSizePolicy::Fixed);
        sizePolicy1.setHorizontalStretch(1);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(qcbDevice->sizePolicy().hasHeightForWidth());
        qcbDevice->setSizePolicy(sizePolicy1);
        qcbDevice->setSizeAdjustPolicy(QComboBox::AdjustToContents);
        qcbDevice->setMinimumContentsLength(16);

        gridLayout_3->addWidget(qcbDevice, 0, 4, 1, 1);

        qcbExclusive = new QCheckBox(qgbInterfaces);
        qcbExclusive->setObjectName(QString::fromUtf8("qcbExclusive"));
        qcbExclusive->setEnabled(true);
        qcbExclusive->setMinimumSize(QSize(0, 27));

        gridLayout_3->addWidget(qcbExclusive, 1, 1, 1, 1);


        verticalLayout->addWidget(qgbInterfaces);

        qgbOutput = new QGroupBox(AudioOutput);
        qgbOutput->setObjectName(QString::fromUtf8("qgbOutput"));
        gridLayout = new QGridLayout(qgbOutput);
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        qlVolume = new QLabel(qgbOutput);
        qlVolume->setObjectName(QString::fromUtf8("qlVolume"));
        qlVolume->setText(QString::fromUtf8("vol"));

        gridLayout->addWidget(qlVolume, 1, 2, 1, 1);

        qsDelay = new QSlider(qgbOutput);
        qsDelay->setObjectName(QString::fromUtf8("qsDelay"));
        qsDelay->setMinimum(1);
        qsDelay->setMaximum(10);
        qsDelay->setPageStep(3);
        qsDelay->setOrientation(Qt::Horizontal);

        gridLayout->addWidget(qsDelay, 2, 1, 1, 1);

        qlJitter = new QLabel(qgbOutput);
        qlJitter->setObjectName(QString::fromUtf8("qlJitter"));
        qlJitter->setMinimumSize(QSize(40, 0));
        qlJitter->setText(QString::fromUtf8("jb"));

        gridLayout->addWidget(qlJitter, 0, 2, 1, 1);

        qliDelay = new QLabel(qgbOutput);
        qliDelay->setObjectName(QString::fromUtf8("qliDelay"));

        gridLayout->addWidget(qliDelay, 2, 0, 1, 1);

        qsVolume = new QSlider(qgbOutput);
        qsVolume->setObjectName(QString::fromUtf8("qsVolume"));
        qsVolume->setMinimum(0);
        qsVolume->setMaximum(200);
        qsVolume->setValue(100);
        qsVolume->setOrientation(Qt::Horizontal);

        gridLayout->addWidget(qsVolume, 1, 1, 1, 1);

        qliVolume = new QLabel(qgbOutput);
        qliVolume->setObjectName(QString::fromUtf8("qliVolume"));

        gridLayout->addWidget(qliVolume, 1, 0, 1, 1);

        qlDelay = new QLabel(qgbOutput);
        qlDelay->setObjectName(QString::fromUtf8("qlDelay"));
        qlDelay->setText(QString::fromUtf8("od"));

        gridLayout->addWidget(qlDelay, 2, 2, 1, 1);

        qsJitter = new QSlider(qgbOutput);
        qsJitter->setObjectName(QString::fromUtf8("qsJitter"));
        qsJitter->setMinimum(1);
        qsJitter->setMaximum(5);
        qsJitter->setPageStep(2);
        qsJitter->setOrientation(Qt::Horizontal);

        gridLayout->addWidget(qsJitter, 0, 1, 1, 1);

        qliJitter = new QLabel(qgbOutput);
        qliJitter->setObjectName(QString::fromUtf8("qliJitter"));

        gridLayout->addWidget(qliJitter, 0, 0, 1, 1);


        verticalLayout->addWidget(qgbOutput);

        qgbAttenuation = new QGroupBox(AudioOutput);
        qgbAttenuation->setObjectName(QString::fromUtf8("qgbAttenuation"));
        gridLayout_4 = new QGridLayout(qgbAttenuation);
        gridLayout_4->setObjectName(QString::fromUtf8("gridLayout_4"));
        qcbOnlyAttenuateSameOutput = new QCheckBox(qgbAttenuation);
        qcbOnlyAttenuateSameOutput->setObjectName(QString::fromUtf8("qcbOnlyAttenuateSameOutput"));

        gridLayout_4->addWidget(qcbOnlyAttenuateSameOutput, 6, 0, 1, 3);

        qliOtherVolume = new QLabel(qgbAttenuation);
        qliOtherVolume->setObjectName(QString::fromUtf8("qliOtherVolume"));
        qliOtherVolume->setAlignment(Qt::AlignLeading|Qt::AlignLeft|Qt::AlignTop);
        qliOtherVolume->setWordWrap(true);

        gridLayout_4->addWidget(qliOtherVolume, 0, 0, 3, 1);

        qcbAttenuateLoopbacks = new QCheckBox(qgbAttenuation);
        qcbAttenuateLoopbacks->setObjectName(QString::fromUtf8("qcbAttenuateLoopbacks"));

        gridLayout_4->addWidget(qcbAttenuateLoopbacks, 7, 0, 1, 3);

        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setObjectName(QString::fromUtf8("horizontalLayout_2"));
        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Maximum, QSizePolicy::Minimum);

        horizontalLayout_2->addItem(horizontalSpacer);

        qcbAttenuateOthers = new QCheckBox(qgbAttenuation);
        qcbAttenuateOthers->setObjectName(QString::fromUtf8("qcbAttenuateOthers"));

        horizontalLayout_2->addWidget(qcbAttenuateOthers);

        horizontalSpacer_3 = new QSpacerItem(20, 20, QSizePolicy::Fixed, QSizePolicy::Minimum);

        horizontalLayout_2->addItem(horizontalSpacer_3);

        qcbAttenuateOthersOnTalk = new QCheckBox(qgbAttenuation);
        qcbAttenuateOthersOnTalk->setObjectName(QString::fromUtf8("qcbAttenuateOthersOnTalk"));

        horizontalLayout_2->addWidget(qcbAttenuateOthersOnTalk);

        horizontalSpacer_2 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_2->addItem(horizontalSpacer_2);


        gridLayout_4->addLayout(horizontalLayout_2, 2, 1, 1, 1);

        qsOtherVolume = new QSlider(qgbAttenuation);
        qsOtherVolume->setObjectName(QString::fromUtf8("qsOtherVolume"));
        qsOtherVolume->setMinimum(0);
        qsOtherVolume->setMaximum(100);
        qsOtherVolume->setValue(0);
        qsOtherVolume->setOrientation(Qt::Horizontal);

        gridLayout_4->addWidget(qsOtherVolume, 0, 1, 1, 1);

        qlOtherVolume = new QLabel(qgbAttenuation);
        qlOtherVolume->setObjectName(QString::fromUtf8("qlOtherVolume"));
        qlOtherVolume->setText(QString::fromUtf8("at"));

        gridLayout_4->addWidget(qlOtherVolume, 0, 2, 1, 1);

        qcbAttenuateUsersOnPrioritySpeak = new QCheckBox(qgbAttenuation);
        qcbAttenuateUsersOnPrioritySpeak->setObjectName(QString::fromUtf8("qcbAttenuateUsersOnPrioritySpeak"));

        gridLayout_4->addWidget(qcbAttenuateUsersOnPrioritySpeak, 5, 0, 1, 3);


        verticalLayout->addWidget(qgbAttenuation);

        qgbPositionalAudio = new QGroupBox(AudioOutput);
        qgbPositionalAudio->setObjectName(QString::fromUtf8("qgbPositionalAudio"));
        qgbPositionalAudio->setEnabled(true);
        gridLayout_2 = new QGridLayout(qgbPositionalAudio);
        gridLayout_2->setObjectName(QString::fromUtf8("gridLayout_2"));
        qcbHeadphones = new QCheckBox(qgbPositionalAudio);
        qcbHeadphones->setObjectName(QString::fromUtf8("qcbHeadphones"));

        gridLayout_2->addWidget(qcbHeadphones, 0, 2, 1, 1);

        qsMinimumVolume = new QSlider(qgbPositionalAudio);
        qsMinimumVolume->setObjectName(QString::fromUtf8("qsMinimumVolume"));
        qsMinimumVolume->setOrientation(Qt::Horizontal);

        gridLayout_2->addWidget(qsMinimumVolume, 7, 2, 1, 1);

        qsMinDistance = new QSlider(qgbPositionalAudio);
        qsMinDistance->setObjectName(QString::fromUtf8("qsMinDistance"));
        qsMinDistance->setOrientation(Qt::Horizontal);

        gridLayout_2->addWidget(qsMinDistance, 3, 2, 1, 1);

        qsMaxDistance = new QSlider(qgbPositionalAudio);
        qsMaxDistance->setObjectName(QString::fromUtf8("qsMaxDistance"));
        qsMaxDistance->setOrientation(Qt::Horizontal);

        gridLayout_2->addWidget(qsMaxDistance, 6, 2, 1, 1);

        qcbPositional = new QCheckBox(qgbPositionalAudio);
        qcbPositional->setObjectName(QString::fromUtf8("qcbPositional"));

        gridLayout_2->addWidget(qcbPositional, 0, 1, 1, 1);

        qsbBloom = new QSpinBox(qgbPositionalAudio);
        qsbBloom->setObjectName(QString::fromUtf8("qsbBloom"));

        gridLayout_2->addWidget(qsbBloom, 8, 3, 1, 1);

        qlMaxDistance = new QLabel(qgbPositionalAudio);
        qlMaxDistance->setObjectName(QString::fromUtf8("qlMaxDistance"));

        gridLayout_2->addWidget(qlMaxDistance, 6, 1, 1, 1);

        qsbMinimumVolume = new QSpinBox(qgbPositionalAudio);
        qsbMinimumVolume->setObjectName(QString::fromUtf8("qsbMinimumVolume"));

        gridLayout_2->addWidget(qsbMinimumVolume, 7, 3, 1, 1);

        qsBloom = new QSlider(qgbPositionalAudio);
        qsBloom->setObjectName(QString::fromUtf8("qsBloom"));
        qsBloom->setOrientation(Qt::Horizontal);

        gridLayout_2->addWidget(qsBloom, 8, 2, 1, 1);

        qlBloom = new QLabel(qgbPositionalAudio);
        qlBloom->setObjectName(QString::fromUtf8("qlBloom"));

        gridLayout_2->addWidget(qlBloom, 8, 1, 1, 1);

        qsbMaximumDistance = new QDoubleSpinBox(qgbPositionalAudio);
        qsbMaximumDistance->setObjectName(QString::fromUtf8("qsbMaximumDistance"));
        qsbMaximumDistance->setDecimals(1);

        gridLayout_2->addWidget(qsbMaximumDistance, 6, 3, 1, 1);

        qlMinimumVolume = new QLabel(qgbPositionalAudio);
        qlMinimumVolume->setObjectName(QString::fromUtf8("qlMinimumVolume"));

        gridLayout_2->addWidget(qlMinimumVolume, 7, 1, 1, 1);

        qlMinDistance = new QLabel(qgbPositionalAudio);
        qlMinDistance->setObjectName(QString::fromUtf8("qlMinDistance"));

        gridLayout_2->addWidget(qlMinDistance, 3, 1, 1, 1);

        qsbMinimumDistance = new QDoubleSpinBox(qgbPositionalAudio);
        qsbMinimumDistance->setObjectName(QString::fromUtf8("qsbMinimumDistance"));
        qsbMinimumDistance->setDecimals(1);

        gridLayout_2->addWidget(qsbMinimumDistance, 3, 3, 1, 1);


        verticalLayout->addWidget(qgbPositionalAudio);

        qgbLoopback = new QGroupBox(AudioOutput);
        qgbLoopback->setObjectName(QString::fromUtf8("qgbLoopback"));
        gridLayout1 = new QGridLayout(qgbLoopback);
        gridLayout1->setObjectName(QString::fromUtf8("gridLayout1"));
        qliPacketDelay = new QLabel(qgbLoopback);
        qliPacketDelay->setObjectName(QString::fromUtf8("qliPacketDelay"));

        gridLayout1->addWidget(qliPacketDelay, 1, 0, 1, 1);

        qsPacketDelay = new QSlider(qgbLoopback);
        qsPacketDelay->setObjectName(QString::fromUtf8("qsPacketDelay"));
        qsPacketDelay->setMaximum(100);
        qsPacketDelay->setOrientation(Qt::Horizontal);

        gridLayout1->addWidget(qsPacketDelay, 1, 1, 1, 1);

        qlPacketDelay = new QLabel(qgbLoopback);
        qlPacketDelay->setObjectName(QString::fromUtf8("qlPacketDelay"));
        qlPacketDelay->setMinimumSize(QSize(40, 0));
        qlPacketDelay->setText(QString::fromUtf8("dv"));

        gridLayout1->addWidget(qlPacketDelay, 1, 2, 1, 1);

        qliPacketLoss = new QLabel(qgbLoopback);
        qliPacketLoss->setObjectName(QString::fromUtf8("qliPacketLoss"));

        gridLayout1->addWidget(qliPacketLoss, 2, 0, 1, 1);

        qsPacketLoss = new QSlider(qgbLoopback);
        qsPacketLoss->setObjectName(QString::fromUtf8("qsPacketLoss"));
        qsPacketLoss->setMaximum(50);
        qsPacketLoss->setSingleStep(5);
        qsPacketLoss->setPageStep(20);
        qsPacketLoss->setOrientation(Qt::Horizontal);

        gridLayout1->addWidget(qsPacketLoss, 2, 1, 1, 1);

        qlPacketLoss = new QLabel(qgbLoopback);
        qlPacketLoss->setObjectName(QString::fromUtf8("qlPacketLoss"));
        qlPacketLoss->setMinimumSize(QSize(40, 0));
        qlPacketLoss->setText(QString::fromUtf8("pl"));

        gridLayout1->addWidget(qlPacketLoss, 2, 2, 1, 1);

        qliLoopback = new QLabel(qgbLoopback);
        qliLoopback->setObjectName(QString::fromUtf8("qliLoopback"));

        gridLayout1->addWidget(qliLoopback, 0, 0, 1, 1);

        qcbLoopback = new MUComboBox(qgbLoopback);
        qcbLoopback->setObjectName(QString::fromUtf8("qcbLoopback"));

        gridLayout1->addWidget(qcbLoopback, 0, 1, 1, 2);


        verticalLayout->addWidget(qgbLoopback);

        spacer = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout->addItem(spacer);

#ifndef QT_NO_SHORTCUT
        qliSystem->setBuddy(qcbSystem);
        qliDevice->setBuddy(qcbDevice);
        qliDelay->setBuddy(qsDelay);
        qliVolume->setBuddy(qsVolume);
        qliJitter->setBuddy(qsJitter);
        qliOtherVolume->setBuddy(qsOtherVolume);
        qlMaxDistance->setBuddy(qsMaxDistance);
        qlBloom->setBuddy(qsMinimumVolume);
        qlMinimumVolume->setBuddy(qsMaxDistance);
        qlMinDistance->setBuddy(qsMinDistance);
        qliPacketDelay->setBuddy(qsPacketDelay);
        qliPacketLoss->setBuddy(qsPacketLoss);
        qliLoopback->setBuddy(qcbLoopback);
#endif // QT_NO_SHORTCUT
        QWidget::setTabOrder(qcbSystem, qcbDevice);
        QWidget::setTabOrder(qcbDevice, qsJitter);
        QWidget::setTabOrder(qsJitter, qsVolume);
        QWidget::setTabOrder(qsVolume, qsDelay);
        QWidget::setTabOrder(qsDelay, qsMinDistance);
        QWidget::setTabOrder(qsMinDistance, qsBloom);
        QWidget::setTabOrder(qsBloom, qcbLoopback);
        QWidget::setTabOrder(qcbLoopback, qsPacketDelay);
        QWidget::setTabOrder(qsPacketDelay, qsPacketLoss);

        retranslateUi(AudioOutput);

        QMetaObject::connectSlotsByName(AudioOutput);
    } // setupUi

    void retranslateUi(QWidget *AudioOutput)
    {
        AudioOutput->setWindowTitle(QApplication::translate("AudioOutput", "Audio output", nullptr));
        qgbInterfaces->setTitle(QApplication::translate("AudioOutput", "Interface", nullptr));
        qliSystem->setText(QApplication::translate("AudioOutput", "System", nullptr));
#ifndef QT_NO_TOOLTIP
        qcbSystem->setToolTip(QApplication::translate("AudioOutput", "Output method for audio", nullptr));
#endif // QT_NO_TOOLTIP
#ifndef QT_NO_WHATSTHIS
        qcbSystem->setWhatsThis(QApplication::translate("AudioOutput", "<b>This is the output method to use for audio.</b>", nullptr));
#endif // QT_NO_WHATSTHIS
        qliDevice->setText(QApplication::translate("AudioOutput", "Device", nullptr));
#ifndef QT_NO_TOOLTIP
        qcbDevice->setToolTip(QApplication::translate("AudioOutput", "Output device for audio", nullptr));
#endif // QT_NO_TOOLTIP
#ifndef QT_NO_WHATSTHIS
        qcbDevice->setWhatsThis(QApplication::translate("AudioOutput", "<b>This is the output device to use for audio.</b>", nullptr));
#endif // QT_NO_WHATSTHIS
#ifndef QT_NO_TOOLTIP
        qcbExclusive->setToolTip(QApplication::translate("AudioOutput", "Exclusive mode, not recommended.", nullptr));
#endif // QT_NO_TOOLTIP
#ifndef QT_NO_WHATSTHIS
        qcbExclusive->setWhatsThis(QApplication::translate("AudioOutput", "<b>This opens the device in exclusive mode.</b><br />No other application will be able to use the device.", nullptr));
#endif // QT_NO_WHATSTHIS
        qcbExclusive->setText(QApplication::translate("AudioOutput", "Exclusive", nullptr));
        qgbOutput->setTitle(QApplication::translate("AudioOutput", "Audio Output", nullptr));
#ifndef QT_NO_TOOLTIP
        qsDelay->setToolTip(QApplication::translate("AudioOutput", "Amount of data to buffer", nullptr));
#endif // QT_NO_TOOLTIP
#ifndef QT_NO_WHATSTHIS
        qsDelay->setWhatsThis(QApplication::translate("AudioOutput", "This sets the amount of data to pre-buffer in the output buffer. Experiment with different values and set it to the lowest which doesn't cause rapid jitter in the sound.", nullptr));
#endif // QT_NO_WHATSTHIS
        qliDelay->setText(QApplication::translate("AudioOutput", "Output Delay", nullptr));
#ifndef QT_NO_TOOLTIP
        qsVolume->setToolTip(QApplication::translate("AudioOutput", "Volume of incoming speech", nullptr));
#endif // QT_NO_TOOLTIP
#ifndef QT_NO_WHATSTHIS
        qsVolume->setWhatsThis(QApplication::translate("AudioOutput", "<b>This adjusts the volume of incoming speech.</b><br />Note that if you increase this beyond 100%, audio will be distorted.", nullptr));
#endif // QT_NO_WHATSTHIS
        qliVolume->setText(QApplication::translate("AudioOutput", "Volume", nullptr));
#ifndef QT_NO_TOOLTIP
        qsJitter->setToolTip(QApplication::translate("AudioOutput", "Safety margin for jitter buffer", nullptr));
#endif // QT_NO_TOOLTIP
#ifndef QT_NO_WHATSTHIS
        qsJitter->setWhatsThis(QApplication::translate("AudioOutput", "<b>This sets the minimum safety margin for the jitter buffer.</b><br />All incoming audio is buffered, and the jitter buffer continually tries to push the buffer to the minimum sustainable by your network, so latency can be as low as possible. This sets the minimum buffer size to use. If the start of sentences you hear is very jittery, increase this value.", nullptr));
#endif // QT_NO_WHATSTHIS
        qliJitter->setText(QApplication::translate("AudioOutput", "Default &Jitter Buffer", nullptr));
#ifndef QT_NO_TOOLTIP
        qgbAttenuation->setToolTip(QString());
#endif // QT_NO_TOOLTIP
        qgbAttenuation->setTitle(QApplication::translate("AudioOutput", "Attenuation", nullptr));
#ifndef QT_NO_TOOLTIP
        qcbOnlyAttenuateSameOutput->setToolTip(QApplication::translate("AudioOutput", "If checked, Mumble will only attenuate applications that are using the same output source as Mumble", nullptr));
#endif // QT_NO_TOOLTIP
#ifndef QT_NO_WHATSTHIS
        qcbOnlyAttenuateSameOutput->setWhatsThis(QApplication::translate("AudioOutput", "<b>Attenuate only applications using the same output as Mumble</b><br />If checked, applications that use a different output than Mumble will not be attenuated.", nullptr));
#endif // QT_NO_WHATSTHIS
        qcbOnlyAttenuateSameOutput->setText(QApplication::translate("AudioOutput", "Only attenuate applications using the same output device", nullptr));
        qliOtherVolume->setText(QApplication::translate("AudioOutput", "Attenuate applications by...", nullptr));
#ifndef QT_NO_TOOLTIP
        qcbAttenuateLoopbacks->setToolTip(QApplication::translate("AudioOutput", "If checked, PulseAudio loopback modules will be attenuated", nullptr));
#endif // QT_NO_TOOLTIP
#ifndef QT_NO_WHATSTHIS
        qcbAttenuateLoopbacks->setWhatsThis(QApplication::translate("AudioOutput", "<b>Attenuate PulseAudio loopback modules</b><br />If loopback modules are linked to Mumble's output device/sink, they will also be attenuated.", nullptr));
#endif // QT_NO_WHATSTHIS
        qcbAttenuateLoopbacks->setText(QApplication::translate("AudioOutput", "Attenuate PulseAudio loopback modules", nullptr));
#ifndef QT_NO_TOOLTIP
        qcbAttenuateOthers->setToolTip(QApplication::translate("AudioOutput", "If checked Mumble lowers the volume of other applications while other users talk", nullptr));
#endif // QT_NO_TOOLTIP
#ifndef QT_NO_WHATSTHIS
        qcbAttenuateOthers->setWhatsThis(QApplication::translate("AudioOutput", "<b>Attenuate applications while other users talk</b><br />Mumble supports decreasing the volume of other applications during incoming and/or outgoing speech. This makes mumble activate the feature while other users talk to you.", nullptr));
#endif // QT_NO_WHATSTHIS
        qcbAttenuateOthers->setText(QApplication::translate("AudioOutput", "while other users talk", nullptr));
#ifndef QT_NO_TOOLTIP
        qcbAttenuateOthersOnTalk->setToolTip(QApplication::translate("AudioOutput", "If checked Mumble lowers the volume of other applications while you talk", nullptr));
#endif // QT_NO_TOOLTIP
#ifndef QT_NO_WHATSTHIS
        qcbAttenuateOthersOnTalk->setWhatsThis(QApplication::translate("AudioOutput", "<b>Attenuate applications while you talk</b><br />Mumble supports decreasing the volume of other applications during incoming and/or outgoing speech. This makes mumble activate the feature while you talk.", nullptr));
#endif // QT_NO_WHATSTHIS
        qcbAttenuateOthersOnTalk->setText(QApplication::translate("AudioOutput", "while you talk", nullptr));
#ifndef QT_NO_TOOLTIP
        qsOtherVolume->setToolTip(QApplication::translate("AudioOutput", "Attenuation of other applications during speech", nullptr));
#endif // QT_NO_TOOLTIP
#ifndef QT_NO_WHATSTHIS
        qsOtherVolume->setWhatsThis(QApplication::translate("AudioOutput", "<b>Attenuate volume of other applications during speech</b><br />Mumble supports decreasing the volume of other applications during incoming and/or outgoing speech. This sets the attenuation of other applications if the feature is enabled.", nullptr));
#endif // QT_NO_WHATSTHIS
#ifndef QT_NO_TOOLTIP
        qcbAttenuateUsersOnPrioritySpeak->setToolTip(QApplication::translate("AudioOutput", "If checked Mumble lowers the volume of other users while you talk if you have the \"Priority Speaker\" status.", nullptr));
#endif // QT_NO_TOOLTIP
#ifndef QT_NO_WHATSTHIS
        qcbAttenuateUsersOnPrioritySpeak->setWhatsThis(QApplication::translate("AudioOutput", "<b>Attenuate other users while talking as Priority Speaker</b><br />Mumble supports decreasing the volume of other users while you talk as the <i>Priority Speaker</i> to avoid getting disturbed. Checking this checkbox will enable this feature.", nullptr));
#endif // QT_NO_WHATSTHIS
        qcbAttenuateUsersOnPrioritySpeak->setText(QApplication::translate("AudioOutput", "Attenuate other users while talking as Priority Speaker", nullptr));
        qgbPositionalAudio->setTitle(QApplication::translate("AudioOutput", "Positional Audio", nullptr));
#ifndef QT_NO_TOOLTIP
        qcbHeadphones->setToolTip(QApplication::translate("AudioOutput", "The connected \"speakers\" are actually headphones", nullptr));
#endif // QT_NO_TOOLTIP
#ifndef QT_NO_WHATSTHIS
        qcbHeadphones->setWhatsThis(QApplication::translate("AudioOutput", "Checking this indicates that you don't have speakers connected, just headphones. This is important, as speakers are usually in front of you, while headphones are directly to your left/right.", nullptr));
#endif // QT_NO_WHATSTHIS
        qcbHeadphones->setText(QApplication::translate("AudioOutput", "Headphones", nullptr));
#ifndef QT_NO_TOOLTIP
        qsMinimumVolume->setToolTip(QString());
#endif // QT_NO_TOOLTIP
#ifndef QT_NO_WHATSTHIS
        qsMinimumVolume->setWhatsThis(QApplication::translate("AudioOutput", "What should the volume be at the maximum distance?", nullptr));
#endif // QT_NO_WHATSTHIS
#ifndef QT_NO_TOOLTIP
        qsMinDistance->setToolTip(QString());
#endif // QT_NO_TOOLTIP
#ifndef QT_NO_STATUSTIP
        qsMinDistance->setStatusTip(QString());
#endif // QT_NO_STATUSTIP
#ifndef QT_NO_WHATSTHIS
        qsMinDistance->setWhatsThis(QApplication::translate("AudioOutput", "This sets the minimum distance for sound calculations. The volume of other users' speech will not decrease until they are at least this far away from you.", nullptr));
#endif // QT_NO_WHATSTHIS
#ifndef QT_NO_TOOLTIP
        qsMaxDistance->setToolTip(QString());
#endif // QT_NO_TOOLTIP
#ifndef QT_NO_WHATSTHIS
        qsMaxDistance->setWhatsThis(QApplication::translate("AudioOutput", "This sets the maximum distance for sound calculations. When farther away than this, other users' speech volume will not decrease any further.", nullptr));
#endif // QT_NO_WHATSTHIS
        qcbPositional->setText(QApplication::translate("AudioOutput", "Enable", nullptr));
        qsbBloom->setSuffix(QApplication::translate("AudioOutput", " %", nullptr));
        qlMaxDistance->setText(QApplication::translate("AudioOutput", "Maximum Distance", nullptr));
        qsbMinimumVolume->setSuffix(QApplication::translate("AudioOutput", " %", nullptr));
#ifndef QT_NO_TOOLTIP
        qsBloom->setToolTip(QApplication::translate("AudioOutput", "Factor for sound volume increase", nullptr));
#endif // QT_NO_TOOLTIP
#ifndef QT_NO_WHATSTHIS
        qsBloom->setWhatsThis(QApplication::translate("AudioOutput", "How much should sound volume increase for sources that are really close?", nullptr));
#endif // QT_NO_WHATSTHIS
        qlBloom->setText(QApplication::translate("AudioOutput", "Bloom", nullptr));
        qsbMaximumDistance->setSuffix(QApplication::translate("AudioOutput", " m", nullptr));
        qlMinimumVolume->setText(QApplication::translate("AudioOutput", "Minimum Volume", nullptr));
        qlMinDistance->setText(QApplication::translate("AudioOutput", "Minimum Distance", nullptr));
        qsbMinimumDistance->setSuffix(QApplication::translate("AudioOutput", " m", nullptr));
        qgbLoopback->setTitle(QApplication::translate("AudioOutput", "Loopback Test", nullptr));
        qliPacketDelay->setText(QApplication::translate("AudioOutput", "Delay Variance", nullptr));
#ifndef QT_NO_TOOLTIP
        qsPacketDelay->setToolTip(QApplication::translate("AudioOutput", "Variance in packet latency", nullptr));
#endif // QT_NO_TOOLTIP
#ifndef QT_NO_WHATSTHIS
        qsPacketDelay->setWhatsThis(QApplication::translate("AudioOutput", "<b>This sets the packet latency variance for loopback testing.</b><br />Most audio paths contain some variable latency. This allows you to set that variance for loopback mode testing. For example, if you set this to 15ms, this will emulate a network with 20-35ms ping latency or one with 80-95ms latency. Most domestic net connections have a variance of about 5ms.", nullptr));
#endif // QT_NO_WHATSTHIS
        qliPacketLoss->setText(QApplication::translate("AudioOutput", "Packet Loss", nullptr));
#ifndef QT_NO_TOOLTIP
        qsPacketLoss->setToolTip(QApplication::translate("AudioOutput", "Packet loss for loopback mode", nullptr));
#endif // QT_NO_TOOLTIP
#ifndef QT_NO_WHATSTHIS
        qsPacketLoss->setWhatsThis(QApplication::translate("AudioOutput", "<b>This sets the packet loss for loopback mode.</b><br />This will be the ratio of packets lost. Unless your outgoing bandwidth is peaked or there's something wrong with your network connection, this will be 0%", nullptr));
#endif // QT_NO_WHATSTHIS
        qliLoopback->setText(QApplication::translate("AudioOutput", "&Loopback", nullptr));
#ifndef QT_NO_TOOLTIP
        qcbLoopback->setToolTip(QApplication::translate("AudioOutput", "Desired loopback mode", nullptr));
#endif // QT_NO_TOOLTIP
#ifndef QT_NO_WHATSTHIS
        qcbLoopback->setWhatsThis(QApplication::translate("AudioOutput", "<b>This enables one of the loopback test modes.</b><br /><i>None</i> - Loopback disabled<br /><i>Local</i> - Emulate a local server.<br /><i>Server</i> - Request loopback from server.<br />Please note than when loopback is enabled, no other users will hear your voice. This setting is not saved on application exit.", nullptr));
#endif // QT_NO_WHATSTHIS
    } // retranslateUi

};

namespace Ui {
    class AudioOutput: public Ui_AudioOutput {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_AUDIOOUTPUT_H
