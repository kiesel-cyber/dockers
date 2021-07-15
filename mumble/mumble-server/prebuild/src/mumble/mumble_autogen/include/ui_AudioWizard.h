/********************************************************************************
** Form generated from reading UI file 'AudioWizard.ui'
**
** Created by: Qt User Interface Compiler version 5.12.8
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_AUDIOWIZARD_H
#define UI_AUDIOWIZARD_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QCheckBox>
#include <QtWidgets/QFormLayout>
#include <QtWidgets/QGraphicsView>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QRadioButton>
#include <QtWidgets/QSlider>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>
#include <QtWidgets/QWizard>
#include "AudioStats.h"
#include "CompletablePage.h"
#include "widgets/MUComboBox.h"

QT_BEGIN_NAMESPACE

class Ui_AudioWizard
{
public:
    CompletablePage *qwpIntro;
    QVBoxLayout *verticalLayout;
    QLabel *label;
    QSpacerItem *verticalSpacer_3;
    CompletablePage *qwpDevice;
    QVBoxLayout *verticalLayout_2;
    QGroupBox *qgbInput;
    QGridLayout *gridLayout_2;
    QLabel *qliInputText;
    QLabel *qliInput;
    MUComboBox *qcbInput;
    QLabel *qliInputDevice;
    MUComboBox *qcbInputDevice;
    QCheckBox *qcbEcho;
    QGroupBox *qgbOutput;
    QGridLayout *gridLayout;
    QLabel *qliOutputText;
    QLabel *qliOutput;
    MUComboBox *qcbOutput;
    QLabel *qliOutputDevice;
    MUComboBox *qcbOutputDevice;
    QCheckBox *qcbPositional;
    QCheckBox *qcbAttenuateOthers;
    QSpacerItem *verticalSpacer;
    CompletablePage *qwpDeviceTuning;
    QGridLayout *gridLayout_3;
    QLabel *qliDeviceTuningText;
    QSlider *qsOutputDelay;
    QLabel *qlOutputDelay;
    QSpacerItem *verticalSpacer_2;
    CompletablePage *qwpVolume;
    QVBoxLayout *verticalLayout_3;
    QLabel *qliVolumeTuningText;
    QLabel *qliVolumeTuningTextHC;
    AudioBar *abAmplify;
    QLabel *qliAmpTuningText;
    QLabel *qliAmpTuningTextHC;
    QSlider *qsMaxAmp;
    QSpacerItem *verticalSpacer_4;
    QHBoxLayout *horizontalLayout_2;
    QSpacerItem *horizontalSpacer;
    QCheckBox *qcbHighContrast;
    CompletablePage *qwpTrigger;
    QGridLayout *gridLayout_4;
    QLabel *qliVADText;
    QLabel *qlTalkIcon;
    QWidget *qwVAD;
    QVBoxLayout *verticalLayout_6;
    AudioBar *abVAD;
    QLabel *qliVadTuningText;
    QLabel *qliVadTuningTextHC;
    QSlider *qsVAD;
    QSpacerItem *verticalSpacer_7;
    QVBoxLayout *verticalLayout_7;
    QHBoxLayout *horizontalLayout;
    QRadioButton *qrPTT;
    QPushButton *qpbPTT;
    QRadioButton *qrAmplitude;
    QRadioButton *qrSNR;
    CompletablePage *qwpSettings;
    QVBoxLayout *verticalLayout_9;
    QGroupBox *qgbQuality;
    QFormLayout *formLayout;
    QRadioButton *qrbQualityLow;
    QLabel *qlQualityLow;
    QRadioButton *qrbQualityBalanced;
    QLabel *qlQualityBalanced;
    QRadioButton *qrbQualityUltra;
    QLabel *qlQualityUltra;
    QRadioButton *qrbQualityCustom;
    QLabel *qlQualityCustom;
    QGroupBox *qgbNotifications;
    QVBoxLayout *verticalLayout_10;
    QRadioButton *qrbNotificationTTS;
    QRadioButton *qrbNotificationSounds;
    QRadioButton *qrbNotificationCustom;
    QSpacerItem *verticalSpacer_8;
    CompletablePage *qwpPositional;
    QVBoxLayout *verticalLayout_5;
    QLabel *qliPositionalText;
    QCheckBox *qcbHeadphone;
    QGraphicsView *qgvView;
    QSpacerItem *verticalSpacer_6;
    CompletablePage *qwpDone;
    QVBoxLayout *verticalLayout_4;
    QLabel *qlDone;
    QCheckBox *qcbUsage;
    QSpacerItem *verticalSpacer_5;

    void setupUi(QWizard *AudioWizard)
    {
        if (AudioWizard->objectName().isEmpty())
            AudioWizard->setObjectName(QString::fromUtf8("AudioWizard"));
        AudioWizard->resize(757, 823);
        AudioWizard->setWizardStyle(QWizard::ClassicStyle);
        qwpIntro = new CompletablePage();
        qwpIntro->setObjectName(QString::fromUtf8("qwpIntro"));
        verticalLayout = new QVBoxLayout(qwpIntro);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        label = new QLabel(qwpIntro);
        label->setObjectName(QString::fromUtf8("label"));
        label->setWordWrap(true);
        label->setTextInteractionFlags(Qt::LinksAccessibleByMouse|Qt::TextSelectableByMouse);

        verticalLayout->addWidget(label);

        verticalSpacer_3 = new QSpacerItem(20, 291, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout->addItem(verticalSpacer_3);

        AudioWizard->addPage(qwpIntro);
        qwpDevice = new CompletablePage();
        qwpDevice->setObjectName(QString::fromUtf8("qwpDevice"));
        verticalLayout_2 = new QVBoxLayout(qwpDevice);
        verticalLayout_2->setObjectName(QString::fromUtf8("verticalLayout_2"));
        qgbInput = new QGroupBox(qwpDevice);
        qgbInput->setObjectName(QString::fromUtf8("qgbInput"));
        gridLayout_2 = new QGridLayout(qgbInput);
        gridLayout_2->setObjectName(QString::fromUtf8("gridLayout_2"));
        qliInputText = new QLabel(qgbInput);
        qliInputText->setObjectName(QString::fromUtf8("qliInputText"));
        qliInputText->setWordWrap(true);

        gridLayout_2->addWidget(qliInputText, 0, 0, 1, 2);

        qliInput = new QLabel(qgbInput);
        qliInput->setObjectName(QString::fromUtf8("qliInput"));

        gridLayout_2->addWidget(qliInput, 1, 0, 1, 1);

        qcbInput = new MUComboBox(qgbInput);
        qcbInput->setObjectName(QString::fromUtf8("qcbInput"));

        gridLayout_2->addWidget(qcbInput, 1, 1, 1, 1);

        qliInputDevice = new QLabel(qgbInput);
        qliInputDevice->setObjectName(QString::fromUtf8("qliInputDevice"));

        gridLayout_2->addWidget(qliInputDevice, 2, 0, 1, 1);

        qcbInputDevice = new MUComboBox(qgbInput);
        qcbInputDevice->setObjectName(QString::fromUtf8("qcbInputDevice"));

        gridLayout_2->addWidget(qcbInputDevice, 2, 1, 1, 1);

        qcbEcho = new QCheckBox(qgbInput);
        qcbEcho->setObjectName(QString::fromUtf8("qcbEcho"));

        gridLayout_2->addWidget(qcbEcho, 3, 1, 1, 1);


        verticalLayout_2->addWidget(qgbInput);

        qgbOutput = new QGroupBox(qwpDevice);
        qgbOutput->setObjectName(QString::fromUtf8("qgbOutput"));
        gridLayout = new QGridLayout(qgbOutput);
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        qliOutputText = new QLabel(qgbOutput);
        qliOutputText->setObjectName(QString::fromUtf8("qliOutputText"));
        qliOutputText->setWordWrap(true);

        gridLayout->addWidget(qliOutputText, 0, 0, 1, 2);

        qliOutput = new QLabel(qgbOutput);
        qliOutput->setObjectName(QString::fromUtf8("qliOutput"));

        gridLayout->addWidget(qliOutput, 1, 0, 1, 1);

        qcbOutput = new MUComboBox(qgbOutput);
        qcbOutput->setObjectName(QString::fromUtf8("qcbOutput"));

        gridLayout->addWidget(qcbOutput, 1, 1, 1, 1);

        qliOutputDevice = new QLabel(qgbOutput);
        qliOutputDevice->setObjectName(QString::fromUtf8("qliOutputDevice"));

        gridLayout->addWidget(qliOutputDevice, 2, 0, 1, 1);

        qcbOutputDevice = new MUComboBox(qgbOutput);
        qcbOutputDevice->setObjectName(QString::fromUtf8("qcbOutputDevice"));

        gridLayout->addWidget(qcbOutputDevice, 2, 1, 1, 1);

        qcbPositional = new QCheckBox(qgbOutput);
        qcbPositional->setObjectName(QString::fromUtf8("qcbPositional"));

        gridLayout->addWidget(qcbPositional, 3, 1, 1, 1);

        qcbAttenuateOthers = new QCheckBox(qgbOutput);
        qcbAttenuateOthers->setObjectName(QString::fromUtf8("qcbAttenuateOthers"));

        gridLayout->addWidget(qcbAttenuateOthers, 4, 1, 1, 1);


        verticalLayout_2->addWidget(qgbOutput);

        verticalSpacer = new QSpacerItem(20, 105, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout_2->addItem(verticalSpacer);

        AudioWizard->addPage(qwpDevice);
        qwpDeviceTuning = new CompletablePage();
        qwpDeviceTuning->setObjectName(QString::fromUtf8("qwpDeviceTuning"));
        gridLayout_3 = new QGridLayout(qwpDeviceTuning);
        gridLayout_3->setObjectName(QString::fromUtf8("gridLayout_3"));
        qliDeviceTuningText = new QLabel(qwpDeviceTuning);
        qliDeviceTuningText->setObjectName(QString::fromUtf8("qliDeviceTuningText"));
        qliDeviceTuningText->setWordWrap(true);
        qliDeviceTuningText->setTextInteractionFlags(Qt::LinksAccessibleByMouse|Qt::TextSelectableByMouse);

        gridLayout_3->addWidget(qliDeviceTuningText, 0, 0, 1, 3);

        qsOutputDelay = new QSlider(qwpDeviceTuning);
        qsOutputDelay->setObjectName(QString::fromUtf8("qsOutputDelay"));
        QSizePolicy sizePolicy(QSizePolicy::Expanding, QSizePolicy::Fixed);
        sizePolicy.setHorizontalStretch(1);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(qsOutputDelay->sizePolicy().hasHeightForWidth());
        qsOutputDelay->setSizePolicy(sizePolicy);
        qsOutputDelay->setMinimum(1);
        qsOutputDelay->setMaximum(6);
        qsOutputDelay->setPageStep(2);
        qsOutputDelay->setOrientation(Qt::Horizontal);

        gridLayout_3->addWidget(qsOutputDelay, 1, 0, 1, 1);

        qlOutputDelay = new QLabel(qwpDeviceTuning);
        qlOutputDelay->setObjectName(QString::fromUtf8("qlOutputDelay"));
        qlOutputDelay->setMinimumSize(QSize(30, 0));

        gridLayout_3->addWidget(qlOutputDelay, 1, 1, 1, 1);

        verticalSpacer_2 = new QSpacerItem(20, 431, QSizePolicy::Minimum, QSizePolicy::Expanding);

        gridLayout_3->addItem(verticalSpacer_2, 2, 0, 1, 2);

        AudioWizard->addPage(qwpDeviceTuning);
        qwpVolume = new CompletablePage();
        qwpVolume->setObjectName(QString::fromUtf8("qwpVolume"));
        verticalLayout_3 = new QVBoxLayout(qwpVolume);
        verticalLayout_3->setObjectName(QString::fromUtf8("verticalLayout_3"));
        qliVolumeTuningText = new QLabel(qwpVolume);
        qliVolumeTuningText->setObjectName(QString::fromUtf8("qliVolumeTuningText"));
        qliVolumeTuningText->setWordWrap(true);
        qliVolumeTuningText->setTextInteractionFlags(Qt::LinksAccessibleByMouse|Qt::TextSelectableByMouse);

        verticalLayout_3->addWidget(qliVolumeTuningText);

        qliVolumeTuningTextHC = new QLabel(qwpVolume);
        qliVolumeTuningTextHC->setObjectName(QString::fromUtf8("qliVolumeTuningTextHC"));
        qliVolumeTuningTextHC->setWordWrap(true);
        qliVolumeTuningTextHC->setTextInteractionFlags(Qt::LinksAccessibleByMouse|Qt::TextSelectableByMouse);

        verticalLayout_3->addWidget(qliVolumeTuningTextHC);

        abAmplify = new AudioBar(qwpVolume);
        abAmplify->setObjectName(QString::fromUtf8("abAmplify"));
        abAmplify->setMinimumSize(QSize(0, 30));

        verticalLayout_3->addWidget(abAmplify);

        qliAmpTuningText = new QLabel(qwpVolume);
        qliAmpTuningText->setObjectName(QString::fromUtf8("qliAmpTuningText"));
        qliAmpTuningText->setWordWrap(true);
        qliAmpTuningText->setTextInteractionFlags(Qt::LinksAccessibleByMouse|Qt::TextSelectableByMouse);

        verticalLayout_3->addWidget(qliAmpTuningText);

        qliAmpTuningTextHC = new QLabel(qwpVolume);
        qliAmpTuningTextHC->setObjectName(QString::fromUtf8("qliAmpTuningTextHC"));
        qliAmpTuningTextHC->setEnabled(true);
        qliAmpTuningTextHC->setWordWrap(true);
        qliAmpTuningTextHC->setTextInteractionFlags(Qt::LinksAccessibleByMouse|Qt::TextSelectableByMouse);

        verticalLayout_3->addWidget(qliAmpTuningTextHC);

        qsMaxAmp = new QSlider(qwpVolume);
        qsMaxAmp->setObjectName(QString::fromUtf8("qsMaxAmp"));
        qsMaxAmp->setMaximum(32767);
        qsMaxAmp->setSingleStep(100);
        qsMaxAmp->setPageStep(1000);
        qsMaxAmp->setOrientation(Qt::Horizontal);

        verticalLayout_3->addWidget(qsMaxAmp);

        verticalSpacer_4 = new QSpacerItem(20, 552, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout_3->addItem(verticalSpacer_4);

        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setObjectName(QString::fromUtf8("horizontalLayout_2"));
        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_2->addItem(horizontalSpacer);

        qcbHighContrast = new QCheckBox(qwpVolume);
        qcbHighContrast->setObjectName(QString::fromUtf8("qcbHighContrast"));

        horizontalLayout_2->addWidget(qcbHighContrast);


        verticalLayout_3->addLayout(horizontalLayout_2);

        AudioWizard->addPage(qwpVolume);
        qwpTrigger = new CompletablePage();
        qwpTrigger->setObjectName(QString::fromUtf8("qwpTrigger"));
        gridLayout_4 = new QGridLayout(qwpTrigger);
        gridLayout_4->setObjectName(QString::fromUtf8("gridLayout_4"));
        qliVADText = new QLabel(qwpTrigger);
        qliVADText->setObjectName(QString::fromUtf8("qliVADText"));
        qliVADText->setWordWrap(true);
        qliVADText->setTextInteractionFlags(Qt::LinksAccessibleByMouse|Qt::TextSelectableByMouse);

        gridLayout_4->addWidget(qliVADText, 0, 0, 1, 2);

        qlTalkIcon = new QLabel(qwpTrigger);
        qlTalkIcon->setObjectName(QString::fromUtf8("qlTalkIcon"));
        qlTalkIcon->setMinimumSize(QSize(64, 64));

        gridLayout_4->addWidget(qlTalkIcon, 1, 1, 4, 1);

        qwVAD = new QWidget(qwpTrigger);
        qwVAD->setObjectName(QString::fromUtf8("qwVAD"));
        verticalLayout_6 = new QVBoxLayout(qwVAD);
        verticalLayout_6->setObjectName(QString::fromUtf8("verticalLayout_6"));
        verticalLayout_6->setContentsMargins(0, 0, 0, 0);
        abVAD = new AudioBar(qwVAD);
        abVAD->setObjectName(QString::fromUtf8("abVAD"));
        abVAD->setMinimumSize(QSize(0, 30));

        verticalLayout_6->addWidget(abVAD);

        qliVadTuningText = new QLabel(qwVAD);
        qliVadTuningText->setObjectName(QString::fromUtf8("qliVadTuningText"));
        qliVadTuningText->setWordWrap(true);
        qliVadTuningText->setTextInteractionFlags(Qt::LinksAccessibleByMouse|Qt::TextSelectableByMouse);

        verticalLayout_6->addWidget(qliVadTuningText);

        qliVadTuningTextHC = new QLabel(qwVAD);
        qliVadTuningTextHC->setObjectName(QString::fromUtf8("qliVadTuningTextHC"));
        qliVadTuningTextHC->setWordWrap(true);
        qliVadTuningTextHC->setTextInteractionFlags(Qt::LinksAccessibleByMouse|Qt::TextSelectableByMouse);

        verticalLayout_6->addWidget(qliVadTuningTextHC);

        qsVAD = new QSlider(qwVAD);
        qsVAD->setObjectName(QString::fromUtf8("qsVAD"));
        qsVAD->setMinimum(1);
        qsVAD->setMaximum(32767);
        qsVAD->setSingleStep(100);
        qsVAD->setPageStep(1000);
        qsVAD->setOrientation(Qt::Horizontal);

        verticalLayout_6->addWidget(qsVAD);


        gridLayout_4->addWidget(qwVAD, 5, 0, 1, 2);

        verticalSpacer_7 = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        gridLayout_4->addItem(verticalSpacer_7, 6, 0, 1, 1);

        verticalLayout_7 = new QVBoxLayout();
        verticalLayout_7->setObjectName(QString::fromUtf8("verticalLayout_7"));
        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        qrPTT = new QRadioButton(qwpTrigger);
        qrPTT->setObjectName(QString::fromUtf8("qrPTT"));
        QSizePolicy sizePolicy1(QSizePolicy::Maximum, QSizePolicy::Fixed);
        sizePolicy1.setHorizontalStretch(0);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(qrPTT->sizePolicy().hasHeightForWidth());
        qrPTT->setSizePolicy(sizePolicy1);

        horizontalLayout->addWidget(qrPTT);

        qpbPTT = new QPushButton(qwpTrigger);
        qpbPTT->setObjectName(QString::fromUtf8("qpbPTT"));

        horizontalLayout->addWidget(qpbPTT);


        verticalLayout_7->addLayout(horizontalLayout);

        qrAmplitude = new QRadioButton(qwpTrigger);
        qrAmplitude->setObjectName(QString::fromUtf8("qrAmplitude"));
        sizePolicy1.setHeightForWidth(qrAmplitude->sizePolicy().hasHeightForWidth());
        qrAmplitude->setSizePolicy(sizePolicy1);

        verticalLayout_7->addWidget(qrAmplitude);

        qrSNR = new QRadioButton(qwpTrigger);
        qrSNR->setObjectName(QString::fromUtf8("qrSNR"));
        sizePolicy1.setHeightForWidth(qrSNR->sizePolicy().hasHeightForWidth());
        qrSNR->setSizePolicy(sizePolicy1);

        verticalLayout_7->addWidget(qrSNR);


        gridLayout_4->addLayout(verticalLayout_7, 4, 0, 1, 1);

        AudioWizard->addPage(qwpTrigger);
        qwpSettings = new CompletablePage();
        qwpSettings->setObjectName(QString::fromUtf8("qwpSettings"));
        verticalLayout_9 = new QVBoxLayout(qwpSettings);
        verticalLayout_9->setObjectName(QString::fromUtf8("verticalLayout_9"));
        qgbQuality = new QGroupBox(qwpSettings);
        qgbQuality->setObjectName(QString::fromUtf8("qgbQuality"));
        QSizePolicy sizePolicy2(QSizePolicy::Preferred, QSizePolicy::Preferred);
        sizePolicy2.setHorizontalStretch(0);
        sizePolicy2.setVerticalStretch(0);
        sizePolicy2.setHeightForWidth(qgbQuality->sizePolicy().hasHeightForWidth());
        qgbQuality->setSizePolicy(sizePolicy2);
        formLayout = new QFormLayout(qgbQuality);
        formLayout->setObjectName(QString::fromUtf8("formLayout"));
        formLayout->setFieldGrowthPolicy(QFormLayout::AllNonFixedFieldsGrow);
        formLayout->setLabelAlignment(Qt::AlignLeading|Qt::AlignLeft|Qt::AlignVCenter);
        qrbQualityLow = new QRadioButton(qgbQuality);
        qrbQualityLow->setObjectName(QString::fromUtf8("qrbQualityLow"));
        QSizePolicy sizePolicy3(QSizePolicy::Preferred, QSizePolicy::Fixed);
        sizePolicy3.setHorizontalStretch(0);
        sizePolicy3.setVerticalStretch(0);
        sizePolicy3.setHeightForWidth(qrbQualityLow->sizePolicy().hasHeightForWidth());
        qrbQualityLow->setSizePolicy(sizePolicy3);

        formLayout->setWidget(0, QFormLayout::LabelRole, qrbQualityLow);

        qlQualityLow = new QLabel(qgbQuality);
        qlQualityLow->setObjectName(QString::fromUtf8("qlQualityLow"));
        qlQualityLow->setWordWrap(true);
        qlQualityLow->setTextInteractionFlags(Qt::LinksAccessibleByMouse|Qt::TextSelectableByMouse);

        formLayout->setWidget(0, QFormLayout::FieldRole, qlQualityLow);

        qrbQualityBalanced = new QRadioButton(qgbQuality);
        qrbQualityBalanced->setObjectName(QString::fromUtf8("qrbQualityBalanced"));
        sizePolicy3.setHeightForWidth(qrbQualityBalanced->sizePolicy().hasHeightForWidth());
        qrbQualityBalanced->setSizePolicy(sizePolicy3);
        qrbQualityBalanced->setChecked(true);

        formLayout->setWidget(1, QFormLayout::LabelRole, qrbQualityBalanced);

        qlQualityBalanced = new QLabel(qgbQuality);
        qlQualityBalanced->setObjectName(QString::fromUtf8("qlQualityBalanced"));
        qlQualityBalanced->setWordWrap(true);
        qlQualityBalanced->setTextInteractionFlags(Qt::LinksAccessibleByMouse|Qt::TextSelectableByMouse);

        formLayout->setWidget(1, QFormLayout::FieldRole, qlQualityBalanced);

        qrbQualityUltra = new QRadioButton(qgbQuality);
        qrbQualityUltra->setObjectName(QString::fromUtf8("qrbQualityUltra"));
        sizePolicy3.setHeightForWidth(qrbQualityUltra->sizePolicy().hasHeightForWidth());
        qrbQualityUltra->setSizePolicy(sizePolicy3);

        formLayout->setWidget(2, QFormLayout::LabelRole, qrbQualityUltra);

        qlQualityUltra = new QLabel(qgbQuality);
        qlQualityUltra->setObjectName(QString::fromUtf8("qlQualityUltra"));
        qlQualityUltra->setWordWrap(true);
        qlQualityUltra->setTextInteractionFlags(Qt::LinksAccessibleByMouse|Qt::TextSelectableByMouse);

        formLayout->setWidget(2, QFormLayout::FieldRole, qlQualityUltra);

        qrbQualityCustom = new QRadioButton(qgbQuality);
        qrbQualityCustom->setObjectName(QString::fromUtf8("qrbQualityCustom"));

        formLayout->setWidget(3, QFormLayout::LabelRole, qrbQualityCustom);

        qlQualityCustom = new QLabel(qgbQuality);
        qlQualityCustom->setObjectName(QString::fromUtf8("qlQualityCustom"));
        qlQualityCustom->setTextInteractionFlags(Qt::LinksAccessibleByMouse|Qt::TextSelectableByMouse);

        formLayout->setWidget(3, QFormLayout::FieldRole, qlQualityCustom);


        verticalLayout_9->addWidget(qgbQuality);

        qgbNotifications = new QGroupBox(qwpSettings);
        qgbNotifications->setObjectName(QString::fromUtf8("qgbNotifications"));
        verticalLayout_10 = new QVBoxLayout(qgbNotifications);
        verticalLayout_10->setObjectName(QString::fromUtf8("verticalLayout_10"));
        qrbNotificationTTS = new QRadioButton(qgbNotifications);
        qrbNotificationTTS->setObjectName(QString::fromUtf8("qrbNotificationTTS"));
        qrbNotificationTTS->setChecked(true);

        verticalLayout_10->addWidget(qrbNotificationTTS);

        qrbNotificationSounds = new QRadioButton(qgbNotifications);
        qrbNotificationSounds->setObjectName(QString::fromUtf8("qrbNotificationSounds"));

        verticalLayout_10->addWidget(qrbNotificationSounds);

        qrbNotificationCustom = new QRadioButton(qgbNotifications);
        qrbNotificationCustom->setObjectName(QString::fromUtf8("qrbNotificationCustom"));

        verticalLayout_10->addWidget(qrbNotificationCustom);


        verticalLayout_9->addWidget(qgbNotifications);

        verticalSpacer_8 = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout_9->addItem(verticalSpacer_8);

        AudioWizard->addPage(qwpSettings);
        qwpPositional = new CompletablePage();
        qwpPositional->setObjectName(QString::fromUtf8("qwpPositional"));
        verticalLayout_5 = new QVBoxLayout(qwpPositional);
        verticalLayout_5->setObjectName(QString::fromUtf8("verticalLayout_5"));
        qliPositionalText = new QLabel(qwpPositional);
        qliPositionalText->setObjectName(QString::fromUtf8("qliPositionalText"));
        qliPositionalText->setWordWrap(true);
        qliPositionalText->setTextInteractionFlags(Qt::LinksAccessibleByMouse|Qt::TextSelectableByMouse);

        verticalLayout_5->addWidget(qliPositionalText);

        qcbHeadphone = new QCheckBox(qwpPositional);
        qcbHeadphone->setObjectName(QString::fromUtf8("qcbHeadphone"));

        verticalLayout_5->addWidget(qcbHeadphone);

        qgvView = new QGraphicsView(qwpPositional);
        qgvView->setObjectName(QString::fromUtf8("qgvView"));

        verticalLayout_5->addWidget(qgvView);

        verticalSpacer_6 = new QSpacerItem(20, 41, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout_5->addItem(verticalSpacer_6);

        AudioWizard->addPage(qwpPositional);
        qwpDone = new CompletablePage();
        qwpDone->setObjectName(QString::fromUtf8("qwpDone"));
        verticalLayout_4 = new QVBoxLayout(qwpDone);
        verticalLayout_4->setObjectName(QString::fromUtf8("verticalLayout_4"));
        qlDone = new QLabel(qwpDone);
        qlDone->setObjectName(QString::fromUtf8("qlDone"));
        qlDone->setWordWrap(true);
        qlDone->setTextInteractionFlags(Qt::LinksAccessibleByMouse|Qt::TextSelectableByMouse);

        verticalLayout_4->addWidget(qlDone);

        qcbUsage = new QCheckBox(qwpDone);
        qcbUsage->setObjectName(QString::fromUtf8("qcbUsage"));

        verticalLayout_4->addWidget(qcbUsage);

        verticalSpacer_5 = new QSpacerItem(20, 267, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout_4->addItem(verticalSpacer_5);

        AudioWizard->addPage(qwpDone);
#ifndef QT_NO_SHORTCUT
        qliInput->setBuddy(qcbInput);
        qliInputDevice->setBuddy(qcbInputDevice);
        qliOutput->setBuddy(qcbOutput);
        qliOutputDevice->setBuddy(qcbOutputDevice);
        qlOutputDelay->setBuddy(qsOutputDelay);
#endif // QT_NO_SHORTCUT

        retranslateUi(AudioWizard);

        QMetaObject::connectSlotsByName(AudioWizard);
    } // setupUi

    void retranslateUi(QWizard *AudioWizard)
    {
        AudioWizard->setWindowTitle(QApplication::translate("AudioWizard", "Audio Tuning Wizard", nullptr));
        qwpIntro->setTitle(QApplication::translate("AudioWizard", "Introduction", nullptr));
        qwpIntro->setSubTitle(QApplication::translate("AudioWizard", "Welcome to the Mumble Audio Wizard", nullptr));
        label->setText(QApplication::translate("AudioWizard", "<html><head/><body><p>This is the audio tuning wizard for Mumble. This will help you correctly set the input levels of your sound card, and also set the correct parameters for sound processing in Mumble. </p><p>Please be aware that as long as this wizard is active, audio will be looped locally to allow you to listen to it, and no audio will be sent to the server. </p><p>Note that you can cancel this wizard at any time without it having an effect on your current audio systems. The settings are only once this wizard has been completed.</p></body></html>", nullptr));
        qwpDevice->setTitle(QApplication::translate("AudioWizard", "Device selection", nullptr));
        qwpDevice->setSubTitle(QApplication::translate("AudioWizard", "Selecting the input and output device to use with Mumble.", nullptr));
        qgbInput->setTitle(QApplication::translate("AudioWizard", "Input Device", nullptr));
        qliInputText->setText(QApplication::translate("AudioWizard", "This is the device your microphone is connected to.", nullptr));
        qliInput->setText(QApplication::translate("AudioWizard", "System", nullptr));
#ifndef QT_NO_TOOLTIP
        qcbInput->setToolTip(QApplication::translate("AudioWizard", "Input method for audio", nullptr));
#endif // QT_NO_TOOLTIP
#ifndef QT_NO_WHATSTHIS
        qcbInput->setWhatsThis(QApplication::translate("AudioWizard", "<b>This is the input method to use for audio.</b>", nullptr));
#endif // QT_NO_WHATSTHIS
        qliInputDevice->setText(QApplication::translate("AudioWizard", "Device", nullptr));
#ifndef QT_NO_TOOLTIP
        qcbInputDevice->setToolTip(QApplication::translate("AudioWizard", "Input device to use", nullptr));
#endif // QT_NO_TOOLTIP
#ifndef QT_NO_WHATSTHIS
        qcbInputDevice->setWhatsThis(QApplication::translate("AudioWizard", "<b>Selects which sound card to use for audio input.</b>", nullptr));
#endif // QT_NO_WHATSTHIS
#ifndef QT_NO_TOOLTIP
        qcbEcho->setToolTip(QApplication::translate("AudioWizard", "Cancel echo from headset or speakers", nullptr));
#endif // QT_NO_TOOLTIP
#ifndef QT_NO_WHATSTHIS
        qcbEcho->setWhatsThis(QApplication::translate("AudioWizard", "This enables echo cancellation of outgoing audio, which helps both on speakers and on headsets.", nullptr));
#endif // QT_NO_WHATSTHIS
        qcbEcho->setText(QApplication::translate("AudioWizard", "Use echo cancellation", nullptr));
        qgbOutput->setTitle(QApplication::translate("AudioWizard", "Output Device", nullptr));
        qliOutputText->setText(QApplication::translate("AudioWizard", "This is the device your speakers or headphones are connected to.", nullptr));
        qliOutput->setText(QApplication::translate("AudioWizard", "System", nullptr));
#ifndef QT_NO_TOOLTIP
        qcbOutput->setToolTip(QApplication::translate("AudioWizard", "Output method for audio", nullptr));
#endif // QT_NO_TOOLTIP
#ifndef QT_NO_WHATSTHIS
        qcbOutput->setWhatsThis(QApplication::translate("AudioWizard", "<b>This is the Output method to use for audio.</b>", nullptr));
#endif // QT_NO_WHATSTHIS
        qliOutputDevice->setText(QApplication::translate("AudioWizard", "Device", nullptr));
#ifndef QT_NO_TOOLTIP
        qcbOutputDevice->setToolTip(QApplication::translate("AudioWizard", "Output device to use", nullptr));
#endif // QT_NO_TOOLTIP
#ifndef QT_NO_WHATSTHIS
        qcbOutputDevice->setWhatsThis(QApplication::translate("AudioWizard", "<b>Selects which sound card to use for audio Output.</b>", nullptr));
#endif // QT_NO_WHATSTHIS
#ifndef QT_NO_TOOLTIP
        qcbPositional->setToolTip(QApplication::translate("AudioWizard", "Allows positioning of sound", nullptr));
#endif // QT_NO_TOOLTIP
#ifndef QT_NO_WHATSTHIS
        qcbPositional->setWhatsThis(QApplication::translate("AudioWizard", "This allows Mumble to use positional audio to place voices.", nullptr));
#endif // QT_NO_WHATSTHIS
        qcbPositional->setText(QApplication::translate("AudioWizard", "Enable positional audio", nullptr));
#ifndef QT_NO_TOOLTIP
        qcbAttenuateOthers->setToolTip(QApplication::translate("AudioWizard", "Enables attenuation of other applications while users talk to you", nullptr));
#endif // QT_NO_TOOLTIP
#ifndef QT_NO_WHATSTHIS
        qcbAttenuateOthers->setWhatsThis(QApplication::translate("AudioWizard", "Enables attenuation of other applications while users talk to you. This means that as soon someone starts to speak to you in Mumble, the sound of all other applications (like audio players) will get attenuated so you can hear them more clearly.", nullptr));
#endif // QT_NO_WHATSTHIS
        qcbAttenuateOthers->setText(QApplication::translate("AudioWizard", "Attenuate applications while other users talk", nullptr));
        qwpDeviceTuning->setTitle(QApplication::translate("AudioWizard", "Device tuning", nullptr));
        qwpDeviceTuning->setSubTitle(QApplication::translate("AudioWizard", "Changing hardware output delays to their minimum value.", nullptr));
        qliDeviceTuningText->setText(QApplication::translate("AudioWizard", "<p>\n"
"To keep latency to an absolute minimum, it's important to buffer as little audio as possible on the soundcard. However, many soundcards report that they require a much smaller buffer than what they can actually work with, so the only way to set this value is to try and fail.\n"
"</p>\n"
"<p>\n"
"You should hear a voice sample. Change the slider below to the lowest value which gives <b>no</b> interruptions or jitter in the sound. Please note that local echo is disabled during this test.\n"
"</p>\n"
"", nullptr));
#ifndef QT_NO_TOOLTIP
        qsOutputDelay->setToolTip(QApplication::translate("AudioWizard", "Amount of data to buffer", nullptr));
#endif // QT_NO_TOOLTIP
#ifndef QT_NO_WHATSTHIS
        qsOutputDelay->setWhatsThis(QApplication::translate("AudioWizard", "This sets the amount of data to pre-buffer in the output buffer. Experiment with different values and set it to the lowest which doesn't cause rapid jitter in the sound.", nullptr));
#endif // QT_NO_WHATSTHIS
        qlOutputDelay->setText(QString());
        qwpVolume->setTitle(QApplication::translate("AudioWizard", "Volume tuning", nullptr));
        qwpVolume->setSubTitle(QApplication::translate("AudioWizard", "Tuning microphone hardware volume to optimal settings.", nullptr));
        qliVolumeTuningText->setText(QApplication::translate("AudioWizard", "<p>\n"
"Open your sound control panel and go to the recording settings. Make sure the microphone is selected as active input with maximum recording volume. If there's an option to enable a \"Microphone boost\" make sure it's checked.\n"
"</p>\n"
"<p>\n"
"Speak loudly, as when you are annoyed or excited. Decrease the volume in the sound control panel until the bar below stays as high as possible in the blue and green but <b>not</b> the red zone while you speak.\n"
"</p>\n"
"", nullptr));
        qliVolumeTuningTextHC->setText(QApplication::translate("AudioWizard", "<p>\n"
"Open your sound control panel and go to the recording settings. Make sure the microphone is selected as active input with maximum recording volume. If there's an option to enable a \"Microphone boost\" make sure it's checked.\n"
"</p>\n"
"<p>\n"
"Speak loudly, as when you are annoyed or excited. Decrease the volume in the sound control panel until the bar below stays as high as possible in the striped and the empty but <b>not</b> the crisscrossed zone while you speak.\n"
"</p>\n"
"", "For high contrast mode"));
        qliAmpTuningText->setText(QApplication::translate("AudioWizard", "Now talk softly, as you would when talking late at night and you don't want to disturb anyone. Adjust the slider below so that the bar moves into green when you talk, but stays blue while you're silent.", nullptr));
        qliAmpTuningTextHC->setText(QApplication::translate("AudioWizard", "Now talk softly, as you would when talking late at night and you don't want to disturb anyone. Adjust the slider below so that the bar moves into empty zone when you talk, but stays in the striped one while you're silent.", "For high contrast mode"));
#ifndef QT_NO_TOOLTIP
        qcbHighContrast->setToolTip(QApplication::translate("AudioWizard", "Apply some high contrast optimizations for visually impaired users", nullptr));
#endif // QT_NO_TOOLTIP
        qcbHighContrast->setText(QApplication::translate("AudioWizard", "Use high contrast graphics", nullptr));
        qwpTrigger->setTitle(QApplication::translate("AudioWizard", "Voice Activity Detection", nullptr));
        qwpTrigger->setSubTitle(QApplication::translate("AudioWizard", "Letting Mumble figure out when you're talking and when you're silent.", nullptr));
        qliVADText->setText(QApplication::translate("AudioWizard", "This will help Mumble figure out when you are talking. The first step is selecting which data value to use.", nullptr));
        qlTalkIcon->setText(QString());
        qliVadTuningText->setText(QApplication::translate("AudioWizard", "Next you need to adjust the following slider. The first few utterances you say should end up in the green area (definitive speech). While talking, you should stay inside the yellow (might be speech) and when you're not talking, everything should be in the red (definitively not speech).", nullptr));
        qliVadTuningTextHC->setText(QApplication::translate("AudioWizard", "Next you need to adjust the following slider. The first few utterances you say should end up in the empty area (definitive speech). While talking, you should stay inside the striped (might be speech) and when you're not talking, everything should be in the crisscrossed (definitively not speech).", "For high contrast mode"));
        qrPTT->setText(QApplication::translate("AudioWizard", "Push To Talk:", nullptr));
#ifndef QT_NO_ACCESSIBILITY
        qpbPTT->setAccessibleName(QApplication::translate("AudioWizard", "PTT shortcut", nullptr));
#endif // QT_NO_ACCESSIBILITY
        qrAmplitude->setText(QApplication::translate("AudioWizard", "Raw amplitude from input", nullptr));
        qrSNR->setText(QApplication::translate("AudioWizard", "Signal-To-Noise ratio", nullptr));
        qwpSettings->setTitle(QApplication::translate("AudioWizard", "Quality & Notifications", nullptr));
        qwpSettings->setSubTitle(QApplication::translate("AudioWizard", "Adjust quality and notification settings.", nullptr));
        qgbQuality->setTitle(QApplication::translate("AudioWizard", "Quality settings", nullptr));
        qrbQualityLow->setText(QApplication::translate("AudioWizard", "Low", nullptr));
        qlQualityLow->setText(QApplication::translate("AudioWizard", "In this configuration Mumble will use a <b>low amount of bandwidth</b>. This will inevitably result in high latency and poor quality. Choose this only if your connection cannot handle the other settings. (16kbit/s, 60ms per packet)", nullptr));
        qrbQualityBalanced->setText(QApplication::translate("AudioWizard", "Balanced", nullptr));
        qlQualityBalanced->setText(QApplication::translate("AudioWizard", "This is the <b>recommended default</b> configuration. It provides a good balance between quality, latency, and bandwidth usage. (40kbit/s, 20ms per packet)", nullptr));
        qrbQualityUltra->setText(QApplication::translate("AudioWizard", "High", nullptr));
        qlQualityUltra->setText(QApplication::translate("AudioWizard", "This configuration is only recommended for use in setups where bandwidth is not an issue, like a LAN. It provides the lowest latency supported by Mumble and <b>high quality</b>. (72kbit/s, 10ms per packet)", nullptr));
        qrbQualityCustom->setText(QApplication::translate("AudioWizard", "Custom", nullptr));
        qlQualityCustom->setText(QApplication::translate("AudioWizard", "You already set a customized quality configuration in Mumble. Select this setting to keep it.", nullptr));
        qgbNotifications->setTitle(QApplication::translate("AudioWizard", "Notification settings", nullptr));
        qrbNotificationTTS->setText(QApplication::translate("AudioWizard", "Use Text-To-Speech to read notifications and messages to you.", nullptr));
        qrbNotificationSounds->setText(QApplication::translate("AudioWizard", "Disable Text-To-Speech and use sounds instead.", nullptr));
        qrbNotificationCustom->setText(QApplication::translate("AudioWizard", "Keep custom Text-To-Speech settings.", nullptr));
        qwpPositional->setTitle(QApplication::translate("AudioWizard", "Positional Audio", nullptr));
        qwpPositional->setSubTitle(QApplication::translate("AudioWizard", "Adjusting attenuation of positional audio.", nullptr));
        qliPositionalText->setText(QApplication::translate("AudioWizard", "<html><head/><body><p>Mumble supports positional audio for some games, and will position the voice of other users relative to their position in game. Depending on their position, the volume of the voice will be changed between the speakers to simulate the direction and distance the other user is at. Such positioning depends on your speaker configuration being correct in your operating system, so a test is done here. </p><p>The graph below shows the position of <span style=\" color:#56b4e9;\">you</span>, the <span style=\" color:#d55e00;\">speakers</span> and a <span style=\" color:#009e73;\">moving sound source</span> as if seen from above. You should hear the audio move between the channels. </p><p>You can also use your mouse to position the <span style=\" color:#009e73;\">sound source</span> manually.</p></body></html>", nullptr));
#ifndef QT_NO_TOOLTIP
        qcbHeadphone->setToolTip(QApplication::translate("AudioWizard", "Use headphones instead of speakers", nullptr));
#endif // QT_NO_TOOLTIP
#ifndef QT_NO_WHATSTHIS
        qcbHeadphone->setWhatsThis(QApplication::translate("AudioWizard", "This ignores the OS speaker configuration and configures the positioning for headphones instead.", nullptr));
#endif // QT_NO_WHATSTHIS
        qcbHeadphone->setText(QApplication::translate("AudioWizard", "Use headphones", nullptr));
        qwpDone->setTitle(QApplication::translate("AudioWizard", "Finished", nullptr));
        qwpDone->setSubTitle(QApplication::translate("AudioWizard", "Enjoy using Mumble", nullptr));
        qlDone->setText(QApplication::translate("AudioWizard", "<p>\n"
"Congratulations. You should now be ready to enjoy a richer sound experience with Mumble.\n"
"</p>\n"
"<p>\n"
"Mumble is under continuous development, and the development team wants to focus on the features that benefit the most users. To this end, Mumble supports submitting anonymous statistics about your configuration to the developers. These statistics are essential for future development, and also make sure the features you use aren't deprecated.\n"
"</p>\n"
"", nullptr));
        qcbUsage->setText(QApplication::translate("AudioWizard", "Submit anonymous statistics to the Mumble project", nullptr));
    } // retranslateUi

};

namespace Ui {
    class AudioWizard: public Ui_AudioWizard {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_AUDIOWIZARD_H
