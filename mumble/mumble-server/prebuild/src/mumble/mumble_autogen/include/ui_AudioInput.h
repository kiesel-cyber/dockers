/********************************************************************************
** Form generated from reading UI file 'AudioInput.ui'
**
** Created by: Qt User Interface Compiler version 5.12.8
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_AUDIOINPUT_H
#define UI_AUDIOINPUT_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QCheckBox>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QRadioButton>
#include <QtWidgets/QSlider>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QSpinBox>
#include <QtWidgets/QStackedWidget>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>
#include "AudioStats.h"
#include "widgets/MUComboBox.h"

QT_BEGIN_NAMESPACE

class Ui_AudioInput
{
public:
    QVBoxLayout *vboxLayout;
    QGroupBox *qgbInterfaces;
    QGridLayout *gridLayout;
    QLabel *qliDevice;
    MUComboBox *qcbSystem;
    QLabel *qliSystem;
    MUComboBox *qcbDevice;
    QCheckBox *qcbExclusive;
    QSpacerItem *spacerItem;
    QLabel *qlInputHelp;
    QGroupBox *qgbTransmission;
    QGridLayout *gridLayout1;
    QLabel *qliTransmit;
    MUComboBox *qcbTransmit;
    QStackedWidget *qswTransmit;
    QWidget *qwPTT;
    QGridLayout *gridLayout2;
    QLabel *qliDoublePush;
    QLabel *qlDoublePush;
    QCheckBox *qcbPushWindow;
    QSpacerItem *verticalSpacer;
    QSlider *qsDoublePush;
    QLabel *qliPTTHold;
    QLabel *qlPTTHold;
    QSlider *qsPTTHold;
    QWidget *qwVAD;
    QGridLayout *gridLayout3;
    QLabel *qlTransmitHold;
    QLabel *qliTransmitMin;
    QSlider *qsTransmitHold;
    AudioBar *abSpeech;
    QLabel *qliTransmitHold;
    QHBoxLayout *hboxLayout;
    QRadioButton *qrbAmplitude;
    QRadioButton *qrbSNR;
    QLabel *qliTransmitMax;
    QSlider *qsTransmitMin;
    QSlider *qsTransmitMax;
    QWidget *qwContinuous;
    QGroupBox *qgbCompression;
    QGridLayout *gridLayout4;
    QLabel *qliFrames;
    QSlider *qsFrames;
    QLabel *qlQuality;
    QLabel *qlFrames;
    QSlider *qsQuality;
    QLabel *qlBitrate;
    QLabel *qliQuality;
    QCheckBox *qcbAllowLowDelay;
    QGroupBox *qgbAudio;
    QGridLayout *gridLayout5;
    QSlider *qsAmp;
    QLabel *qliAmp;
    QLabel *qlAmp;
    QLabel *qliEcho;
    QGroupBox *groupBox;
    QVBoxLayout *verticalLayout;
    QHBoxLayout *horizontalLayout_2;
    QRadioButton *qrbNoiseSupDeactivated;
    QRadioButton *qrbNoiseSupSpeex;
    QRadioButton *qrbNoiseSupRNNoise;
    QRadioButton *qrbNoiseSupBoth;
    QHBoxLayout *horizontalLayout_3;
    QLabel *qlSpeexNoiseSup;
    QSlider *qsSpeexNoiseSupStrength;
    QLabel *qlSpeexNoiseSupStrength;
    MUComboBox *qcbEcho;
    QGroupBox *qgbMisc;
    QGridLayout *_2;
    QLabel *qlPushClickOn;
    QLineEdit *qlePushClickPathOn;
    QLabel *qliIdle;
    QPushButton *qpbPushClickPreview;
    QLineEdit *qlePushClickPathOff;
    QHBoxLayout *horizontalLayout;
    QSpinBox *qsbIdle;
    QLabel *qlIdle;
    MUComboBox *qcbIdleAction;
    QSpacerItem *horizontalSpacer;
    QCheckBox *qcbPushClick;
    QCheckBox *qcbUndoIdleAction;
    QLabel *qlPushClickOff;
    QPushButton *qpbPushClickBrowseOff;
    QLabel *qlIdle2;
    QPushButton *qpbPushClickReset;
    QPushButton *qpbPushClickBrowseOn;
    QCheckBox *qcbMuteCue;
    QLineEdit *qleMuteCuePath;
    QPushButton *qpbMuteCueBrowse;
    QPushButton *qpbMuteCuePreview;
    QSpacerItem *spacerItem1;

    void setupUi(QWidget *AudioInput)
    {
        if (AudioInput->objectName().isEmpty())
            AudioInput->setObjectName(QString::fromUtf8("AudioInput"));
        AudioInput->resize(588, 953);
        vboxLayout = new QVBoxLayout(AudioInput);
        vboxLayout->setObjectName(QString::fromUtf8("vboxLayout"));
        qgbInterfaces = new QGroupBox(AudioInput);
        qgbInterfaces->setObjectName(QString::fromUtf8("qgbInterfaces"));
        gridLayout = new QGridLayout(qgbInterfaces);
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        qliDevice = new QLabel(qgbInterfaces);
        qliDevice->setObjectName(QString::fromUtf8("qliDevice"));

        gridLayout->addWidget(qliDevice, 0, 3, 1, 1);

        qcbSystem = new MUComboBox(qgbInterfaces);
        qcbSystem->setObjectName(QString::fromUtf8("qcbSystem"));
        QSizePolicy sizePolicy(QSizePolicy::MinimumExpanding, QSizePolicy::Fixed);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(qcbSystem->sizePolicy().hasHeightForWidth());
        qcbSystem->setSizePolicy(sizePolicy);

        gridLayout->addWidget(qcbSystem, 0, 1, 1, 1);

        qliSystem = new QLabel(qgbInterfaces);
        qliSystem->setObjectName(QString::fromUtf8("qliSystem"));

        gridLayout->addWidget(qliSystem, 0, 0, 1, 1);

        qcbDevice = new MUComboBox(qgbInterfaces);
        qcbDevice->setObjectName(QString::fromUtf8("qcbDevice"));
        QSizePolicy sizePolicy1(QSizePolicy::MinimumExpanding, QSizePolicy::Fixed);
        sizePolicy1.setHorizontalStretch(1);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(qcbDevice->sizePolicy().hasHeightForWidth());
        qcbDevice->setSizePolicy(sizePolicy1);
        qcbDevice->setSizeAdjustPolicy(QComboBox::AdjustToContents);
        qcbDevice->setMinimumContentsLength(16);

        gridLayout->addWidget(qcbDevice, 0, 4, 1, 1);

        qcbExclusive = new QCheckBox(qgbInterfaces);
        qcbExclusive->setObjectName(QString::fromUtf8("qcbExclusive"));
        qcbExclusive->setMinimumSize(QSize(0, 27));

        gridLayout->addWidget(qcbExclusive, 2, 4, 1, 1);

        spacerItem = new QSpacerItem(24, 16, QSizePolicy::Maximum, QSizePolicy::Minimum);

        gridLayout->addItem(spacerItem, 0, 2, 1, 1);

        qlInputHelp = new QLabel(qgbInterfaces);
        qlInputHelp->setObjectName(QString::fromUtf8("qlInputHelp"));
        qlInputHelp->setEnabled(true);
        QSizePolicy sizePolicy2(QSizePolicy::Minimum, QSizePolicy::Preferred);
        sizePolicy2.setHorizontalStretch(0);
        sizePolicy2.setVerticalStretch(0);
        sizePolicy2.setHeightForWidth(qlInputHelp->sizePolicy().hasHeightForWidth());
        qlInputHelp->setSizePolicy(sizePolicy2);
        qlInputHelp->setWordWrap(true);

        gridLayout->addWidget(qlInputHelp, 3, 0, 1, 5);


        vboxLayout->addWidget(qgbInterfaces);

        qgbTransmission = new QGroupBox(AudioInput);
        qgbTransmission->setObjectName(QString::fromUtf8("qgbTransmission"));
        QSizePolicy sizePolicy3(QSizePolicy::Preferred, QSizePolicy::Minimum);
        sizePolicy3.setHorizontalStretch(0);
        sizePolicy3.setVerticalStretch(0);
        sizePolicy3.setHeightForWidth(qgbTransmission->sizePolicy().hasHeightForWidth());
        qgbTransmission->setSizePolicy(sizePolicy3);
        gridLayout1 = new QGridLayout(qgbTransmission);
        gridLayout1->setObjectName(QString::fromUtf8("gridLayout1"));
        qliTransmit = new QLabel(qgbTransmission);
        qliTransmit->setObjectName(QString::fromUtf8("qliTransmit"));

        gridLayout1->addWidget(qliTransmit, 0, 0, 1, 1);

        qcbTransmit = new MUComboBox(qgbTransmission);
        qcbTransmit->setObjectName(QString::fromUtf8("qcbTransmit"));

        gridLayout1->addWidget(qcbTransmit, 0, 1, 1, 2);

        qswTransmit = new QStackedWidget(qgbTransmission);
        qswTransmit->setObjectName(QString::fromUtf8("qswTransmit"));
        QSizePolicy sizePolicy4(QSizePolicy::Preferred, QSizePolicy::MinimumExpanding);
        sizePolicy4.setHorizontalStretch(0);
        sizePolicy4.setVerticalStretch(0);
        sizePolicy4.setHeightForWidth(qswTransmit->sizePolicy().hasHeightForWidth());
        qswTransmit->setSizePolicy(sizePolicy4);
        qwPTT = new QWidget();
        qwPTT->setObjectName(QString::fromUtf8("qwPTT"));
        gridLayout2 = new QGridLayout(qwPTT);
        gridLayout2->setObjectName(QString::fromUtf8("gridLayout2"));
        qliDoublePush = new QLabel(qwPTT);
        qliDoublePush->setObjectName(QString::fromUtf8("qliDoublePush"));

        gridLayout2->addWidget(qliDoublePush, 0, 0, 1, 1);

        qlDoublePush = new QLabel(qwPTT);
        qlDoublePush->setObjectName(QString::fromUtf8("qlDoublePush"));
        sizePolicy2.setHeightForWidth(qlDoublePush->sizePolicy().hasHeightForWidth());
        qlDoublePush->setSizePolicy(sizePolicy2);
        qlDoublePush->setText(QString::fromUtf8("TextLabel"));

        gridLayout2->addWidget(qlDoublePush, 0, 3, 1, 1);

        qcbPushWindow = new QCheckBox(qwPTT);
        qcbPushWindow->setObjectName(QString::fromUtf8("qcbPushWindow"));

        gridLayout2->addWidget(qcbPushWindow, 2, 1, 1, 1);

        verticalSpacer = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        gridLayout2->addItem(verticalSpacer, 3, 1, 1, 1);

        qsDoublePush = new QSlider(qwPTT);
        qsDoublePush->setObjectName(QString::fromUtf8("qsDoublePush"));
        qsDoublePush->setMaximum(1000);
        qsDoublePush->setSingleStep(10);
        qsDoublePush->setPageStep(100);
        qsDoublePush->setOrientation(Qt::Horizontal);

        gridLayout2->addWidget(qsDoublePush, 0, 1, 1, 2);

        qliPTTHold = new QLabel(qwPTT);
        qliPTTHold->setObjectName(QString::fromUtf8("qliPTTHold"));

        gridLayout2->addWidget(qliPTTHold, 1, 0, 1, 1);

        qlPTTHold = new QLabel(qwPTT);
        qlPTTHold->setObjectName(QString::fromUtf8("qlPTTHold"));
        qlPTTHold->setText(QString::fromUtf8("TextLabel"));

        gridLayout2->addWidget(qlPTTHold, 1, 3, 1, 1);

        qsPTTHold = new QSlider(qwPTT);
        qsPTTHold->setObjectName(QString::fromUtf8("qsPTTHold"));
        qsPTTHold->setMaximum(5000);
        qsPTTHold->setSingleStep(10);
        qsPTTHold->setOrientation(Qt::Horizontal);

        gridLayout2->addWidget(qsPTTHold, 1, 1, 1, 1);

        gridLayout2->setColumnStretch(1, 1);
        qswTransmit->addWidget(qwPTT);
        qwVAD = new QWidget();
        qwVAD->setObjectName(QString::fromUtf8("qwVAD"));
        gridLayout3 = new QGridLayout(qwVAD);
        gridLayout3->setObjectName(QString::fromUtf8("gridLayout3"));
        qlTransmitHold = new QLabel(qwVAD);
        qlTransmitHold->setObjectName(QString::fromUtf8("qlTransmitHold"));
        qlTransmitHold->setMinimumSize(QSize(40, 0));

        gridLayout3->addWidget(qlTransmitHold, 1, 2, 1, 1);

        qliTransmitMin = new QLabel(qwVAD);
        qliTransmitMin->setObjectName(QString::fromUtf8("qliTransmitMin"));

        gridLayout3->addWidget(qliTransmitMin, 3, 0, 1, 1);

        qsTransmitHold = new QSlider(qwVAD);
        qsTransmitHold->setObjectName(QString::fromUtf8("qsTransmitHold"));
        qsTransmitHold->setMinimum(20);
        qsTransmitHold->setMaximum(250);
        qsTransmitHold->setOrientation(Qt::Horizontal);

        gridLayout3->addWidget(qsTransmitHold, 1, 1, 1, 1);

        abSpeech = new AudioBar(qwVAD);
        abSpeech->setObjectName(QString::fromUtf8("abSpeech"));
        abSpeech->setMaximumSize(QSize(16777215, 10));

        gridLayout3->addWidget(abSpeech, 2, 1, 1, 1);

        qliTransmitHold = new QLabel(qwVAD);
        qliTransmitHold->setObjectName(QString::fromUtf8("qliTransmitHold"));

        gridLayout3->addWidget(qliTransmitHold, 1, 0, 1, 1);

        hboxLayout = new QHBoxLayout();
        hboxLayout->setObjectName(QString::fromUtf8("hboxLayout"));
        qrbAmplitude = new QRadioButton(qwVAD);
        qrbAmplitude->setObjectName(QString::fromUtf8("qrbAmplitude"));

        hboxLayout->addWidget(qrbAmplitude);

        qrbSNR = new QRadioButton(qwVAD);
        qrbSNR->setObjectName(QString::fromUtf8("qrbSNR"));

        hboxLayout->addWidget(qrbSNR);


        gridLayout3->addLayout(hboxLayout, 0, 0, 1, 3);

        qliTransmitMax = new QLabel(qwVAD);
        qliTransmitMax->setObjectName(QString::fromUtf8("qliTransmitMax"));

        gridLayout3->addWidget(qliTransmitMax, 4, 0, 1, 1);

        qsTransmitMin = new QSlider(qwVAD);
        qsTransmitMin->setObjectName(QString::fromUtf8("qsTransmitMin"));
        qsTransmitMin->setMinimum(1);
        qsTransmitMin->setMaximum(32767);
        qsTransmitMin->setSingleStep(100);
        qsTransmitMin->setPageStep(1000);
        qsTransmitMin->setOrientation(Qt::Horizontal);

        gridLayout3->addWidget(qsTransmitMin, 3, 1, 1, 1);

        qsTransmitMax = new QSlider(qwVAD);
        qsTransmitMax->setObjectName(QString::fromUtf8("qsTransmitMax"));
        qsTransmitMax->setMinimum(1);
        qsTransmitMax->setMaximum(32767);
        qsTransmitMax->setSingleStep(100);
        qsTransmitMax->setPageStep(1000);
        qsTransmitMax->setOrientation(Qt::Horizontal);

        gridLayout3->addWidget(qsTransmitMax, 4, 1, 1, 1);

        qswTransmit->addWidget(qwVAD);
        qwContinuous = new QWidget();
        qwContinuous->setObjectName(QString::fromUtf8("qwContinuous"));
        qswTransmit->addWidget(qwContinuous);

        gridLayout1->addWidget(qswTransmit, 1, 0, 1, 3);


        vboxLayout->addWidget(qgbTransmission);

        qgbCompression = new QGroupBox(AudioInput);
        qgbCompression->setObjectName(QString::fromUtf8("qgbCompression"));
        gridLayout4 = new QGridLayout(qgbCompression);
        gridLayout4->setObjectName(QString::fromUtf8("gridLayout4"));
        qliFrames = new QLabel(qgbCompression);
        qliFrames->setObjectName(QString::fromUtf8("qliFrames"));

        gridLayout4->addWidget(qliFrames, 1, 0, 1, 1);

        qsFrames = new QSlider(qgbCompression);
        qsFrames->setObjectName(QString::fromUtf8("qsFrames"));
        qsFrames->setMinimum(1);
        qsFrames->setMaximum(4);
        qsFrames->setPageStep(2);
        qsFrames->setOrientation(Qt::Horizontal);

        gridLayout4->addWidget(qsFrames, 1, 1, 1, 1);

        qlQuality = new QLabel(qgbCompression);
        qlQuality->setObjectName(QString::fromUtf8("qlQuality"));
        qlQuality->setMinimumSize(QSize(30, 0));

        gridLayout4->addWidget(qlQuality, 0, 2, 1, 1);

        qlFrames = new QLabel(qgbCompression);
        qlFrames->setObjectName(QString::fromUtf8("qlFrames"));
        qlFrames->setMinimumSize(QSize(40, 0));

        gridLayout4->addWidget(qlFrames, 1, 2, 1, 1);

        qsQuality = new QSlider(qgbCompression);
        qsQuality->setObjectName(QString::fromUtf8("qsQuality"));
        qsQuality->setMinimum(8000);
        qsQuality->setMaximum(192000);
        qsQuality->setSingleStep(1000);
        qsQuality->setPageStep(5000);
        qsQuality->setValue(32000);
        qsQuality->setOrientation(Qt::Horizontal);

        gridLayout4->addWidget(qsQuality, 0, 1, 1, 1);

        qlBitrate = new QLabel(qgbCompression);
        qlBitrate->setObjectName(QString::fromUtf8("qlBitrate"));
        QFont font;
        font.setItalic(true);
        qlBitrate->setFont(font);
        qlBitrate->setAlignment(Qt::AlignCenter);

        gridLayout4->addWidget(qlBitrate, 3, 0, 1, 3);

        qliQuality = new QLabel(qgbCompression);
        qliQuality->setObjectName(QString::fromUtf8("qliQuality"));

        gridLayout4->addWidget(qliQuality, 0, 0, 1, 1);

        qcbAllowLowDelay = new QCheckBox(qgbCompression);
        qcbAllowLowDelay->setObjectName(QString::fromUtf8("qcbAllowLowDelay"));

        gridLayout4->addWidget(qcbAllowLowDelay, 2, 0, 1, 2);


        vboxLayout->addWidget(qgbCompression);

        qgbAudio = new QGroupBox(AudioInput);
        qgbAudio->setObjectName(QString::fromUtf8("qgbAudio"));
        gridLayout5 = new QGridLayout(qgbAudio);
        gridLayout5->setObjectName(QString::fromUtf8("gridLayout5"));
        qsAmp = new QSlider(qgbAudio);
        qsAmp->setObjectName(QString::fromUtf8("qsAmp"));
        qsAmp->setMaximum(19500);
        qsAmp->setSingleStep(500);
        qsAmp->setPageStep(2000);
        qsAmp->setOrientation(Qt::Horizontal);

        gridLayout5->addWidget(qsAmp, 2, 1, 1, 1);

        qliAmp = new QLabel(qgbAudio);
        qliAmp->setObjectName(QString::fromUtf8("qliAmp"));

        gridLayout5->addWidget(qliAmp, 2, 0, 1, 1);

        qlAmp = new QLabel(qgbAudio);
        qlAmp->setObjectName(QString::fromUtf8("qlAmp"));
        qlAmp->setMinimumSize(QSize(30, 0));

        gridLayout5->addWidget(qlAmp, 2, 2, 1, 1);

        qliEcho = new QLabel(qgbAudio);
        qliEcho->setObjectName(QString::fromUtf8("qliEcho"));

        gridLayout5->addWidget(qliEcho, 3, 0, 1, 1);

        groupBox = new QGroupBox(qgbAudio);
        groupBox->setObjectName(QString::fromUtf8("groupBox"));
        verticalLayout = new QVBoxLayout(groupBox);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setObjectName(QString::fromUtf8("horizontalLayout_2"));
        qrbNoiseSupDeactivated = new QRadioButton(groupBox);
        qrbNoiseSupDeactivated->setObjectName(QString::fromUtf8("qrbNoiseSupDeactivated"));

        horizontalLayout_2->addWidget(qrbNoiseSupDeactivated);

        qrbNoiseSupSpeex = new QRadioButton(groupBox);
        qrbNoiseSupSpeex->setObjectName(QString::fromUtf8("qrbNoiseSupSpeex"));
        qrbNoiseSupSpeex->setText(QString::fromUtf8("Speex"));

        horizontalLayout_2->addWidget(qrbNoiseSupSpeex);

        qrbNoiseSupRNNoise = new QRadioButton(groupBox);
        qrbNoiseSupRNNoise->setObjectName(QString::fromUtf8("qrbNoiseSupRNNoise"));
        qrbNoiseSupRNNoise->setText(QString::fromUtf8("RNNoise"));

        horizontalLayout_2->addWidget(qrbNoiseSupRNNoise);

        qrbNoiseSupBoth = new QRadioButton(groupBox);
        qrbNoiseSupBoth->setObjectName(QString::fromUtf8("qrbNoiseSupBoth"));

        horizontalLayout_2->addWidget(qrbNoiseSupBoth);


        verticalLayout->addLayout(horizontalLayout_2);

        horizontalLayout_3 = new QHBoxLayout();
        horizontalLayout_3->setObjectName(QString::fromUtf8("horizontalLayout_3"));
        qlSpeexNoiseSup = new QLabel(groupBox);
        qlSpeexNoiseSup->setObjectName(QString::fromUtf8("qlSpeexNoiseSup"));

        horizontalLayout_3->addWidget(qlSpeexNoiseSup);

        qsSpeexNoiseSupStrength = new QSlider(groupBox);
        qsSpeexNoiseSupStrength->setObjectName(QString::fromUtf8("qsSpeexNoiseSupStrength"));
        qsSpeexNoiseSupStrength->setMinimum(15);
        qsSpeexNoiseSupStrength->setMaximum(60);
        qsSpeexNoiseSupStrength->setPageStep(5);
        qsSpeexNoiseSupStrength->setOrientation(Qt::Horizontal);

        horizontalLayout_3->addWidget(qsSpeexNoiseSupStrength);

        qlSpeexNoiseSupStrength = new QLabel(groupBox);
        qlSpeexNoiseSupStrength->setObjectName(QString::fromUtf8("qlSpeexNoiseSupStrength"));
        QSizePolicy sizePolicy5(QSizePolicy::Fixed, QSizePolicy::Fixed);
        sizePolicy5.setHorizontalStretch(0);
        sizePolicy5.setVerticalStretch(0);
        sizePolicy5.setHeightForWidth(qlSpeexNoiseSupStrength->sizePolicy().hasHeightForWidth());
        qlSpeexNoiseSupStrength->setSizePolicy(sizePolicy5);
        qlSpeexNoiseSupStrength->setMinimumSize(QSize(30, 0));

        horizontalLayout_3->addWidget(qlSpeexNoiseSupStrength);


        verticalLayout->addLayout(horizontalLayout_3);


        gridLayout5->addWidget(groupBox, 4, 0, 1, 3);

        qcbEcho = new MUComboBox(qgbAudio);
        qcbEcho->setObjectName(QString::fromUtf8("qcbEcho"));

        gridLayout5->addWidget(qcbEcho, 3, 1, 1, 2);


        vboxLayout->addWidget(qgbAudio);

        qgbMisc = new QGroupBox(AudioInput);
        qgbMisc->setObjectName(QString::fromUtf8("qgbMisc"));
        _2 = new QGridLayout(qgbMisc);
        _2->setObjectName(QString::fromUtf8("_2"));
        qlPushClickOn = new QLabel(qgbMisc);
        qlPushClickOn->setObjectName(QString::fromUtf8("qlPushClickOn"));
        qlPushClickOn->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);

        _2->addWidget(qlPushClickOn, 1, 3, 1, 1);

        qlePushClickPathOn = new QLineEdit(qgbMisc);
        qlePushClickPathOn->setObjectName(QString::fromUtf8("qlePushClickPathOn"));

        _2->addWidget(qlePushClickPathOn, 1, 4, 1, 1);

        qliIdle = new QLabel(qgbMisc);
        qliIdle->setObjectName(QString::fromUtf8("qliIdle"));

        _2->addWidget(qliIdle, 4, 0, 1, 2);

        qpbPushClickPreview = new QPushButton(qgbMisc);
        qpbPushClickPreview->setObjectName(QString::fromUtf8("qpbPushClickPreview"));

        _2->addWidget(qpbPushClickPreview, 1, 6, 1, 1);

        qlePushClickPathOff = new QLineEdit(qgbMisc);
        qlePushClickPathOff->setObjectName(QString::fromUtf8("qlePushClickPathOff"));

        _2->addWidget(qlePushClickPathOff, 2, 4, 1, 1);

        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        qsbIdle = new QSpinBox(qgbMisc);
        qsbIdle->setObjectName(QString::fromUtf8("qsbIdle"));
        qsbIdle->setMinimum(1);
        qsbIdle->setMaximum(5000);
        qsbIdle->setValue(5);

        horizontalLayout->addWidget(qsbIdle);

        qlIdle = new QLabel(qgbMisc);
        qlIdle->setObjectName(QString::fromUtf8("qlIdle"));
        qlIdle->setMinimumSize(QSize(30, 0));

        horizontalLayout->addWidget(qlIdle);

        qcbIdleAction = new MUComboBox(qgbMisc);
        qcbIdleAction->addItem(QString());
        qcbIdleAction->addItem(QString());
        qcbIdleAction->addItem(QString());
        qcbIdleAction->setObjectName(QString::fromUtf8("qcbIdleAction"));

        horizontalLayout->addWidget(qcbIdleAction);

        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout->addItem(horizontalSpacer);


        _2->addLayout(horizontalLayout, 4, 4, 1, 1);

        qcbPushClick = new QCheckBox(qgbMisc);
        qcbPushClick->setObjectName(QString::fromUtf8("qcbPushClick"));

        _2->addWidget(qcbPushClick, 1, 0, 1, 1);

        qcbUndoIdleAction = new QCheckBox(qgbMisc);
        qcbUndoIdleAction->setObjectName(QString::fromUtf8("qcbUndoIdleAction"));

        _2->addWidget(qcbUndoIdleAction, 5, 4, 1, 1);

        qlPushClickOff = new QLabel(qgbMisc);
        qlPushClickOff->setObjectName(QString::fromUtf8("qlPushClickOff"));
        qlPushClickOff->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);

        _2->addWidget(qlPushClickOff, 2, 3, 1, 1);

        qpbPushClickBrowseOff = new QPushButton(qgbMisc);
        qpbPushClickBrowseOff->setObjectName(QString::fromUtf8("qpbPushClickBrowseOff"));

        _2->addWidget(qpbPushClickBrowseOff, 2, 5, 1, 1);

        qlIdle2 = new QLabel(qgbMisc);
        qlIdle2->setObjectName(QString::fromUtf8("qlIdle2"));

        _2->addWidget(qlIdle2, 4, 3, 1, 1);

        qpbPushClickReset = new QPushButton(qgbMisc);
        qpbPushClickReset->setObjectName(QString::fromUtf8("qpbPushClickReset"));

        _2->addWidget(qpbPushClickReset, 2, 6, 1, 1);

        qpbPushClickBrowseOn = new QPushButton(qgbMisc);
        qpbPushClickBrowseOn->setObjectName(QString::fromUtf8("qpbPushClickBrowseOn"));

        _2->addWidget(qpbPushClickBrowseOn, 1, 5, 1, 1);

        qcbMuteCue = new QCheckBox(qgbMisc);
        qcbMuteCue->setObjectName(QString::fromUtf8("qcbMuteCue"));

        _2->addWidget(qcbMuteCue, 3, 0, 1, 1);

        qleMuteCuePath = new QLineEdit(qgbMisc);
        qleMuteCuePath->setObjectName(QString::fromUtf8("qleMuteCuePath"));

        _2->addWidget(qleMuteCuePath, 3, 4, 1, 1);

        qpbMuteCueBrowse = new QPushButton(qgbMisc);
        qpbMuteCueBrowse->setObjectName(QString::fromUtf8("qpbMuteCueBrowse"));

        _2->addWidget(qpbMuteCueBrowse, 3, 5, 1, 1);

        qpbMuteCuePreview = new QPushButton(qgbMisc);
        qpbMuteCuePreview->setObjectName(QString::fromUtf8("qpbMuteCuePreview"));

        _2->addWidget(qpbMuteCuePreview, 3, 6, 1, 1);


        vboxLayout->addWidget(qgbMisc);

        spacerItem1 = new QSpacerItem(1, 151, QSizePolicy::Minimum, QSizePolicy::Expanding);

        vboxLayout->addItem(spacerItem1);

#ifndef QT_NO_SHORTCUT
        qliDevice->setBuddy(qcbDevice);
        qliSystem->setBuddy(qcbSystem);
        qliTransmit->setBuddy(qcbTransmit);
        qliDoublePush->setBuddy(qsDoublePush);
        qliTransmitHold->setBuddy(qsTransmitHold);
        qliFrames->setBuddy(qsFrames);
        qliQuality->setBuddy(qsQuality);
        qliAmp->setBuddy(qsAmp);
#endif // QT_NO_SHORTCUT
        QWidget::setTabOrder(qcbSystem, qcbDevice);
        QWidget::setTabOrder(qcbDevice, qcbTransmit);
        QWidget::setTabOrder(qcbTransmit, qsDoublePush);
        QWidget::setTabOrder(qsDoublePush, qrbSNR);
        QWidget::setTabOrder(qrbSNR, qsTransmitHold);
        QWidget::setTabOrder(qsTransmitHold, qsTransmitMin);
        QWidget::setTabOrder(qsTransmitMin, qsTransmitMax);
        QWidget::setTabOrder(qsTransmitMax, qsQuality);
        QWidget::setTabOrder(qsQuality, qsFrames);
        QWidget::setTabOrder(qsFrames, qsAmp);

        retranslateUi(AudioInput);

        qswTransmit->setCurrentIndex(1);


        QMetaObject::connectSlotsByName(AudioInput);
    } // setupUi

    void retranslateUi(QWidget *AudioInput)
    {
        AudioInput->setWindowTitle(QApplication::translate("AudioInput", "Audio input", nullptr));
        qgbInterfaces->setTitle(QApplication::translate("AudioInput", "Interface", nullptr));
        qliDevice->setText(QApplication::translate("AudioInput", "Device", nullptr));
#ifndef QT_NO_TOOLTIP
        qcbSystem->setToolTip(QApplication::translate("AudioInput", "Input method for audio", nullptr));
#endif // QT_NO_TOOLTIP
#ifndef QT_NO_WHATSTHIS
        qcbSystem->setWhatsThis(QApplication::translate("AudioInput", "<b>This is the input method to use for audio.</b>", nullptr));
#endif // QT_NO_WHATSTHIS
        qliSystem->setText(QApplication::translate("AudioInput", "System", nullptr));
#ifndef QT_NO_TOOLTIP
        qcbDevice->setToolTip(QApplication::translate("AudioInput", "Input device for audio", nullptr));
#endif // QT_NO_TOOLTIP
#ifndef QT_NO_WHATSTHIS
        qcbDevice->setWhatsThis(QApplication::translate("AudioInput", "<b>This is the input device to use for audio.</b>", nullptr));
#endif // QT_NO_WHATSTHIS
#ifndef QT_NO_TOOLTIP
        qcbExclusive->setToolTip(QApplication::translate("AudioInput", "Exclusive mode", nullptr));
#endif // QT_NO_TOOLTIP
#ifndef QT_NO_WHATSTHIS
        qcbExclusive->setWhatsThis(QApplication::translate("AudioInput", "<b>This opens the device in exclusive mode.</b><br />No other application will be able to use the device.", nullptr));
#endif // QT_NO_WHATSTHIS
        qcbExclusive->setText(QApplication::translate("AudioInput", "Exclusive", nullptr));
        qlInputHelp->setText(QString());
        qgbTransmission->setTitle(QApplication::translate("AudioInput", "Transmission", nullptr));
        qliTransmit->setText(QApplication::translate("AudioInput", "&Transmit", nullptr));
#ifndef QT_NO_TOOLTIP
        qcbTransmit->setToolTip(QApplication::translate("AudioInput", "When to transmit your speech", nullptr));
#endif // QT_NO_TOOLTIP
#ifndef QT_NO_WHATSTHIS
        qcbTransmit->setWhatsThis(QApplication::translate("AudioInput", "<b>This sets when speech should be transmitted.</b><br /><i>Continuous</i> - All the time<br /><i>Voice Activity</i> - When you are speaking clearly.<br /><i>Push To Talk</i> - When you hold down the hotkey set under <i>Shortcuts</i>.", nullptr));
#endif // QT_NO_WHATSTHIS
        qliDoublePush->setText(QApplication::translate("AudioInput", "DoublePush Time", nullptr));
#ifndef QT_NO_TOOLTIP
        qcbPushWindow->setToolTip(QApplication::translate("AudioInput", "Displays an always on top window with a push to talk button in it", nullptr));
#endif // QT_NO_TOOLTIP
        qcbPushWindow->setText(QApplication::translate("AudioInput", "Display push to talk window", nullptr));
#ifndef QT_NO_TOOLTIP
        qsDoublePush->setToolTip(QApplication::translate("AudioInput", "If you press the PTT key twice in this time it will get locked.", nullptr));
#endif // QT_NO_TOOLTIP
#ifndef QT_NO_WHATSTHIS
        qsDoublePush->setWhatsThis(QApplication::translate("AudioInput", "<b>DoublePush Time</b><br />If you press the push-to-talk key twice during the configured interval of time it will be locked. Mumble will keep transmitting until you hit the key once more to unlock PTT again.", nullptr));
#endif // QT_NO_WHATSTHIS
        qliPTTHold->setText(QApplication::translate("AudioInput", "Hold Time", nullptr));
#ifndef QT_NO_TOOLTIP
        qsPTTHold->setToolTip(QApplication::translate("AudioInput", "Time the microphone stays open after the PTT key is released", nullptr));
#endif // QT_NO_TOOLTIP
        qlTransmitHold->setText(QString());
        qliTransmitMin->setText(QApplication::translate("AudioInput", "Silence Below", nullptr));
#ifndef QT_NO_TOOLTIP
        qsTransmitHold->setToolTip(QApplication::translate("AudioInput", "How long to keep transmitting after silence", nullptr));
#endif // QT_NO_TOOLTIP
#ifndef QT_NO_WHATSTHIS
        qsTransmitHold->setWhatsThis(QApplication::translate("AudioInput", "<b>This selects how long after a perceived stop in speech transmission should continue.</b><br />Set this higher if your voice breaks up when you speak (seen by a rapidly blinking voice icon next to your name).", nullptr));
#endif // QT_NO_WHATSTHIS
#ifndef QT_NO_TOOLTIP
        abSpeech->setToolTip(QApplication::translate("AudioInput", "Current speech detection chance", nullptr));
#endif // QT_NO_TOOLTIP
#ifndef QT_NO_WHATSTHIS
        abSpeech->setWhatsThis(QApplication::translate("AudioInput", "<b>This shows the current speech detection settings.</b><br />You can change the settings from the Settings dialog or from the Audio Wizard.", nullptr));
#endif // QT_NO_WHATSTHIS
        qliTransmitHold->setText(QApplication::translate("AudioInput", "Voice &Hold", nullptr));
#ifndef QT_NO_TOOLTIP
        qrbAmplitude->setToolTip(QApplication::translate("AudioInput", "Use Amplitude based speech detection", nullptr));
#endif // QT_NO_TOOLTIP
#ifndef QT_NO_WHATSTHIS
        qrbAmplitude->setWhatsThis(QApplication::translate("AudioInput", "<b>This sets speech detection to use Amplitude.</b><br />In this mode, the raw strength of the input signal is used to detect speech.", nullptr));
#endif // QT_NO_WHATSTHIS
        qrbAmplitude->setText(QApplication::translate("AudioInput", "Amplitude", nullptr));
#ifndef QT_NO_TOOLTIP
        qrbSNR->setToolTip(QApplication::translate("AudioInput", "Use SNR based speech detection", nullptr));
#endif // QT_NO_TOOLTIP
#ifndef QT_NO_WHATSTHIS
        qrbSNR->setWhatsThis(QApplication::translate("AudioInput", "<b>This sets speech detection to use Signal to Noise ratio.</b><br />In this mode, the input is analyzed for something resembling a clear signal, and the clarity of that signal is used to trigger speech detection.", nullptr));
#endif // QT_NO_WHATSTHIS
        qrbSNR->setText(QApplication::translate("AudioInput", "Signal to Noise", nullptr));
        qliTransmitMax->setText(QApplication::translate("AudioInput", "Speech Above", nullptr));
#ifndef QT_NO_TOOLTIP
        qsTransmitMin->setToolTip(QApplication::translate("AudioInput", "Signal values below this count as silence", nullptr));
#endif // QT_NO_TOOLTIP
#ifndef QT_NO_WHATSTHIS
        qsTransmitMin->setWhatsThis(QApplication::translate("AudioInput", "<b>This sets the trigger values for voice detection.</b><br />Use this together with the Audio Statistics window to manually tune the trigger values for detecting speech. Input values below \"Silence Below\" always count as silence. Values above \"Speech Above\" always count as voice. Values in between will count as voice if you're already talking, but will not trigger a new detection.", nullptr));
#endif // QT_NO_WHATSTHIS
#ifndef QT_NO_TOOLTIP
        qsTransmitMax->setToolTip(QApplication::translate("AudioInput", "Signal values above this count as voice", nullptr));
#endif // QT_NO_TOOLTIP
#ifndef QT_NO_WHATSTHIS
        qsTransmitMax->setWhatsThis(QApplication::translate("AudioInput", "<b>This sets the trigger values for voice detection.</b><br />Use this together with the Audio Statistics window to manually tune the trigger values for detecting speech. Input values below \"Silence Below\" always count as silence. Values above \"Speech Above\" always count as voice. Values in between will count as voice if you're already talking, but will not trigger a new detection.", nullptr));
#endif // QT_NO_WHATSTHIS
        qgbCompression->setTitle(QApplication::translate("AudioInput", "Compression", nullptr));
        qliFrames->setText(QApplication::translate("AudioInput", "Audio per packet", nullptr));
#ifndef QT_NO_TOOLTIP
        qsFrames->setToolTip(QApplication::translate("AudioInput", "How many audio frames to send per packet", nullptr));
#endif // QT_NO_TOOLTIP
#ifndef QT_NO_WHATSTHIS
        qsFrames->setWhatsThis(QApplication::translate("AudioInput", "<b>This selects how many audio frames should be put in one packet.</b><br />Increasing this will increase the latency of your voice, but will also reduce bandwidth requirements.", nullptr));
#endif // QT_NO_WHATSTHIS
        qlQuality->setText(QString());
        qlFrames->setText(QString());
#ifndef QT_NO_TOOLTIP
        qsQuality->setToolTip(QApplication::translate("AudioInput", "Quality of compression (peak bandwidth)", nullptr));
#endif // QT_NO_TOOLTIP
#ifndef QT_NO_WHATSTHIS
        qsQuality->setWhatsThis(QApplication::translate("AudioInput", "<b>This sets the quality of compression.</b><br />This determines how much bandwidth Mumble is allowed to use for outgoing audio.", nullptr));
#endif // QT_NO_WHATSTHIS
#ifndef QT_NO_TOOLTIP
        qlBitrate->setToolTip(QApplication::translate("AudioInput", "Maximum bandwidth used for sending audio", nullptr));
#endif // QT_NO_TOOLTIP
#ifndef QT_NO_WHATSTHIS
        qlBitrate->setWhatsThis(QApplication::translate("AudioInput", "<b>This shows peak outgoing bandwidth used.</b><br />This shows the peak amount of bandwidth sent out from your machine. Audio bitrate is the maximum bitrate (as we use VBR) for the audio data alone. Position is the bitrate used for positional information. Overhead is our framing and the IP packet headers (IP and UDP is 75% of this overhead).", nullptr));
#endif // QT_NO_WHATSTHIS
        qlBitrate->setText(QString());
        qliQuality->setText(QApplication::translate("AudioInput", "&Quality", nullptr));
#ifndef QT_NO_TOOLTIP
        qcbAllowLowDelay->setToolTip(QApplication::translate("AudioInput", "Enable Opus' low-delay mode when the quality is set to <b>64 kb/s</b> or higher. ", nullptr));
#endif // QT_NO_TOOLTIP
#ifndef QT_NO_WHATSTHIS
        qcbAllowLowDelay->setWhatsThis(QApplication::translate("AudioInput", "If checked, Mumble will enable Opus' low-delay mode when the quality is set to <b>64 kbit/s</b> or higher. Low-delay mode decreases latency by <b>~15 milliseconds</b> in the round trip. This mode may require an higher bitrate to preserve the same quality, in comparison with the music and VOIP modes.", nullptr));
#endif // QT_NO_WHATSTHIS
        qcbAllowLowDelay->setText(QApplication::translate("AudioInput", "Allow low delay mode", nullptr));
        qgbAudio->setTitle(QApplication::translate("AudioInput", "Audio Processing", nullptr));
#ifndef QT_NO_TOOLTIP
        qsAmp->setToolTip(QApplication::translate("AudioInput", "Maximum amplification of input sound", nullptr));
#endif // QT_NO_TOOLTIP
#ifndef QT_NO_WHATSTHIS
        qsAmp->setWhatsThis(QApplication::translate("AudioInput", "<b>Maximum amplification of input.</b><br />Mumble normalizes the input volume before compressing, and this sets how much it's allowed to amplify.<br />The actual level is continually updated based on your current speech pattern, but it will never go above the level specified here.<br />If the <i>Microphone loudness</i> level of the audio statistics hover around 100%, you probably want to set this to 2.0 or so, but if, like most people, you are unable to reach 100%, set this to something much higher.<br />Ideally, set it so <i>Microphone Loudness * Amplification Factor >= 100</i>, even when you're speaking really soft.<br /><br />Note that there is no harm in setting this to maximum, but Mumble will start picking up other conversations if you leave it to auto-tune to that level.", nullptr));
#endif // QT_NO_WHATSTHIS
        qliAmp->setText(QApplication::translate("AudioInput", "Max. Amplification", nullptr));
        qlAmp->setText(QString());
#ifndef QT_NO_TOOLTIP
        qliEcho->setToolTip(QString());
#endif // QT_NO_TOOLTIP
        qliEcho->setText(QApplication::translate("AudioInput", "Echo Cancellation", nullptr));
        groupBox->setTitle(QApplication::translate("AudioInput", "Noise suppression", nullptr));
#ifndef QT_NO_TOOLTIP
        qrbNoiseSupDeactivated->setToolTip(QApplication::translate("AudioInput", "Don't use noise suppression.", nullptr));
#endif // QT_NO_TOOLTIP
        qrbNoiseSupDeactivated->setText(QApplication::translate("AudioInput", "Disabled", nullptr));
#ifndef QT_NO_TOOLTIP
        qrbNoiseSupSpeex->setToolTip(QApplication::translate("AudioInput", "Use the noise suppression algorithm provided by Speex.", nullptr));
#endif // QT_NO_TOOLTIP
#ifndef QT_NO_TOOLTIP
        qrbNoiseSupRNNoise->setToolTip(QApplication::translate("AudioInput", "Use the noise suppression algorithm provided by RNNoise.", nullptr));
#endif // QT_NO_TOOLTIP
#ifndef QT_NO_TOOLTIP
        qrbNoiseSupBoth->setToolTip(QApplication::translate("AudioInput", "Use a combination of Speex and RNNoise to do noise suppression.", nullptr));
#endif // QT_NO_TOOLTIP
        qrbNoiseSupBoth->setText(QApplication::translate("AudioInput", "Both", nullptr));
#ifndef QT_NO_TOOLTIP
        qlSpeexNoiseSup->setToolTip(QApplication::translate("AudioInput", "This controls the amount by which Speex will suppress noise.", nullptr));
#endif // QT_NO_TOOLTIP
        qlSpeexNoiseSup->setText(QApplication::translate("AudioInput", "Speex suppression strength", nullptr));
#ifndef QT_NO_TOOLTIP
        qsSpeexNoiseSupStrength->setToolTip(QApplication::translate("AudioInput", "This controls the amount by which Speex will suppress noise.", nullptr));
#endif // QT_NO_TOOLTIP
#ifndef QT_NO_WHATSTHIS
        qsSpeexNoiseSupStrength->setWhatsThis(QApplication::translate("AudioInput", "<b>This sets the amount of noise suppression to apply.</b><br />The higher this value, the more aggressively stationary noise will be suppressed.", nullptr));
#endif // QT_NO_WHATSTHIS
#ifndef QT_NO_TOOLTIP
        qlSpeexNoiseSupStrength->setToolTip(QApplication::translate("AudioInput", "This controls the amount by which Speex will suppress noise.", nullptr));
#endif // QT_NO_TOOLTIP
        qlSpeexNoiseSupStrength->setText(QString());
#ifndef QT_NO_TOOLTIP
        qcbEcho->setToolTip(QString());
#endif // QT_NO_TOOLTIP
#ifndef QT_NO_WHATSTHIS
        qcbEcho->setWhatsThis(QApplication::translate("AudioInput", "Enabling this will cancel the echo from your speakers. Mixed has low CPU impact, but only works well if your speakers are equally loud and equidistant from the microphone. Multichannel echo cancellation provides much better echo cancellation, but at a higher CPU cost.", nullptr));
#endif // QT_NO_WHATSTHIS
        qgbMisc->setTitle(QApplication::translate("AudioInput", "Misc", nullptr));
        qlPushClickOn->setText(QApplication::translate("AudioInput", "On", nullptr));
#ifndef QT_NO_TOOLTIP
        qlePushClickPathOn->setToolTip(QApplication::translate("AudioInput", "Gets played when starting to transmit", nullptr));
#endif // QT_NO_TOOLTIP
        qliIdle->setText(QApplication::translate("AudioInput", "Idle action", nullptr));
#ifndef QT_NO_TOOLTIP
        qpbPushClickPreview->setToolTip(QApplication::translate("AudioInput", "Preview the audio cues", nullptr));
#endif // QT_NO_TOOLTIP
#ifndef QT_NO_WHATSTHIS
        qpbPushClickPreview->setWhatsThis(QApplication::translate("AudioInput", "<b>Preview</b><br/>Plays the current <i>on</i> sound followed by the current <i>off</i> sound.", nullptr));
#endif // QT_NO_WHATSTHIS
        qpbPushClickPreview->setText(QApplication::translate("AudioInput", "&Preview", nullptr));
#ifndef QT_NO_TOOLTIP
        qlePushClickPathOff->setToolTip(QApplication::translate("AudioInput", "Gets played when stopping to transmit", nullptr));
#endif // QT_NO_TOOLTIP
        qlIdle->setText(QApplication::translate("AudioInput", "minutes do", nullptr));
        qcbIdleAction->setItemText(0, QApplication::translate("AudioInput", "nothing", nullptr));
        qcbIdleAction->setItemText(1, QApplication::translate("AudioInput", "deafen", nullptr));
        qcbIdleAction->setItemText(2, QApplication::translate("AudioInput", "mute", nullptr));

#ifndef QT_NO_TOOLTIP
        qcbPushClick->setToolTip(QApplication::translate("AudioInput", "Audible audio cue when starting or stopping to transmit", nullptr));
#endif // QT_NO_TOOLTIP
#ifndef QT_NO_WHATSTHIS
        qcbPushClick->setWhatsThis(QApplication::translate("AudioInput", "<b>This enables transmission audio cues.</b><br />Setting this will give you a short audio beep when you start and stop transmitting.", nullptr));
#endif // QT_NO_WHATSTHIS
        qcbPushClick->setText(QApplication::translate("AudioInput", "Audio cue", nullptr));
#ifndef QT_NO_TOOLTIP
        qcbUndoIdleAction->setToolTip(QApplication::translate("AudioInput", "The idle action will be reversed upon any key or mouse button input", nullptr));
#endif // QT_NO_TOOLTIP
        qcbUndoIdleAction->setText(QApplication::translate("AudioInput", "Undo Idle action upon activity", nullptr));
        qlPushClickOff->setText(QApplication::translate("AudioInput", "Off", nullptr));
#ifndef QT_NO_TOOLTIP
        qpbPushClickBrowseOff->setToolTip(QApplication::translate("AudioInput", "Browse for off audio file", nullptr));
#endif // QT_NO_TOOLTIP
        qpbPushClickBrowseOff->setText(QApplication::translate("AudioInput", "B&rowse...", nullptr));
        qlIdle2->setText(QApplication::translate("AudioInput", "after", nullptr));
#ifndef QT_NO_TOOLTIP
        qpbPushClickReset->setToolTip(QApplication::translate("AudioInput", "Reset audio cue to default", nullptr));
#endif // QT_NO_TOOLTIP
#ifndef QT_NO_WHATSTHIS
        qpbPushClickReset->setWhatsThis(QApplication::translate("AudioInput", "<b>Reset</b><br/>Reset the paths for the files to their default.", nullptr));
#endif // QT_NO_WHATSTHIS
        qpbPushClickReset->setText(QApplication::translate("AudioInput", "R&eset", nullptr));
#ifndef QT_NO_TOOLTIP
        qpbPushClickBrowseOn->setToolTip(QApplication::translate("AudioInput", "Browse for on audio file", nullptr));
#endif // QT_NO_TOOLTIP
        qpbPushClickBrowseOn->setText(QApplication::translate("AudioInput", "&Browse...", nullptr));
        qcbMuteCue->setText(QApplication::translate("AudioInput", "Mute cue", nullptr));
        qpbMuteCueBrowse->setText(QApplication::translate("AudioInput", "Br&owse...", nullptr));
        qpbMuteCuePreview->setText(QApplication::translate("AudioInput", "Pre&view", nullptr));
    } // retranslateUi

};

namespace Ui {
    class AudioInput: public Ui_AudioInput {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_AUDIOINPUT_H
