/********************************************************************************
** Form generated from reading UI file 'PositionalAudioViewer.ui'
**
** Created by: Qt User Interface Compiler version 5.12.8
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_POSITIONALAUDIOVIEWER_H
#define UI_POSITIONALAUDIOVIEWER_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QDoubleSpinBox>
#include <QtWidgets/QFormLayout>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPlainTextEdit>
#include <QtWidgets/QVBoxLayout>

QT_BEGIN_NAMESPACE

class Ui_PositionalAudioViewer
{
public:
    QGridLayout *mainLayout;
    QGroupBox *cameraDirGroup;
    QFormLayout *cameraDirLayout;
    QLabel *cameraDirLabelX;
    QDoubleSpinBox *cameraDirX;
    QLabel *cameraDirLabelY;
    QDoubleSpinBox *cameraDirY;
    QLabel *cameraDirLabelZ;
    QDoubleSpinBox *cameraDirZ;
    QGroupBox *playerPosGroup;
    QFormLayout *playerPosLayout;
    QDoubleSpinBox *playerPosX;
    QLabel *playerPosLabelX;
    QDoubleSpinBox *playerPosY;
    QLabel *playerPosLabelY;
    QDoubleSpinBox *playerPosZ;
    QLabel *playerPosLabelZ;
    QGroupBox *playerAxisGroup;
    QFormLayout *playerAxisLayout;
    QLabel *playerAxisLabelX;
    QDoubleSpinBox *playerAxisX;
    QLabel *playerAxisLabelY;
    QDoubleSpinBox *playerAxisY;
    QLabel *playerAxisLabelZ;
    QDoubleSpinBox *playerAxisZ;
    QGroupBox *playerDirGroup;
    QFormLayout *playerDirLayout;
    QLabel *playerDirLabelX;
    QDoubleSpinBox *playerDirX;
    QLabel *playerDirLabelY;
    QDoubleSpinBox *playerDirY;
    QLabel *playerDirLabelZ;
    QDoubleSpinBox *playerDirZ;
    QGroupBox *cameraAxisGroup;
    QFormLayout *cameraAxisLayout;
    QLabel *cameraAxisLabelX;
    QDoubleSpinBox *cameraAxisX;
    QDoubleSpinBox *cameraAxisY;
    QDoubleSpinBox *cameraAxisZ;
    QLabel *cameraAxisLabelY;
    QLabel *cameraAxisLabelZ;
    QGroupBox *cameraPosGroup;
    QFormLayout *cameraPosLayout;
    QLabel *cameraPosLabelX;
    QDoubleSpinBox *cameraPosX;
    QLabel *cameraPosLabelY;
    QDoubleSpinBox *cameraPosY;
    QLabel *cameraPosLabelZ;
    QDoubleSpinBox *cameraPosZ;
    QGroupBox *infoGroup;
    QVBoxLayout *infoLayout;
    QLabel *contextLabel;
    QPlainTextEdit *context;
    QLabel *identityLabel;
    QPlainTextEdit *identity;

    void setupUi(QDialog *PositionalAudioViewer)
    {
        if (PositionalAudioViewer->objectName().isEmpty())
            PositionalAudioViewer->setObjectName(QString::fromUtf8("PositionalAudioViewer"));
        PositionalAudioViewer->resize(600, 600);
        mainLayout = new QGridLayout(PositionalAudioViewer);
        mainLayout->setObjectName(QString::fromUtf8("mainLayout"));
        cameraDirGroup = new QGroupBox(PositionalAudioViewer);
        cameraDirGroup->setObjectName(QString::fromUtf8("cameraDirGroup"));
        cameraDirLayout = new QFormLayout(cameraDirGroup);
        cameraDirLayout->setObjectName(QString::fromUtf8("cameraDirLayout"));
        cameraDirLabelX = new QLabel(cameraDirGroup);
        cameraDirLabelX->setObjectName(QString::fromUtf8("cameraDirLabelX"));

        cameraDirLayout->setWidget(0, QFormLayout::LabelRole, cameraDirLabelX);

        cameraDirX = new QDoubleSpinBox(cameraDirGroup);
        cameraDirX->setObjectName(QString::fromUtf8("cameraDirX"));
        QSizePolicy sizePolicy(QSizePolicy::MinimumExpanding, QSizePolicy::Fixed);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(cameraDirX->sizePolicy().hasHeightForWidth());
        cameraDirX->setSizePolicy(sizePolicy);
        cameraDirX->setReadOnly(true);
        cameraDirX->setButtonSymbols(QAbstractSpinBox::NoButtons);
        cameraDirX->setDecimals(6);
        cameraDirX->setMinimum(-999999999.000000000000000);
        cameraDirX->setMaximum(999999999.000000000000000);

        cameraDirLayout->setWidget(0, QFormLayout::FieldRole, cameraDirX);

        cameraDirLabelY = new QLabel(cameraDirGroup);
        cameraDirLabelY->setObjectName(QString::fromUtf8("cameraDirLabelY"));

        cameraDirLayout->setWidget(1, QFormLayout::LabelRole, cameraDirLabelY);

        cameraDirY = new QDoubleSpinBox(cameraDirGroup);
        cameraDirY->setObjectName(QString::fromUtf8("cameraDirY"));
        sizePolicy.setHeightForWidth(cameraDirY->sizePolicy().hasHeightForWidth());
        cameraDirY->setSizePolicy(sizePolicy);
        cameraDirY->setReadOnly(true);
        cameraDirY->setButtonSymbols(QAbstractSpinBox::NoButtons);
        cameraDirY->setDecimals(6);
        cameraDirY->setMinimum(-999999999.000000000000000);
        cameraDirY->setMaximum(999999999.000000000000000);

        cameraDirLayout->setWidget(1, QFormLayout::FieldRole, cameraDirY);

        cameraDirLabelZ = new QLabel(cameraDirGroup);
        cameraDirLabelZ->setObjectName(QString::fromUtf8("cameraDirLabelZ"));

        cameraDirLayout->setWidget(2, QFormLayout::LabelRole, cameraDirLabelZ);

        cameraDirZ = new QDoubleSpinBox(cameraDirGroup);
        cameraDirZ->setObjectName(QString::fromUtf8("cameraDirZ"));
        sizePolicy.setHeightForWidth(cameraDirZ->sizePolicy().hasHeightForWidth());
        cameraDirZ->setSizePolicy(sizePolicy);
        cameraDirZ->setReadOnly(true);
        cameraDirZ->setButtonSymbols(QAbstractSpinBox::NoButtons);
        cameraDirZ->setDecimals(6);
        cameraDirZ->setMinimum(-999999999.000000000000000);
        cameraDirZ->setMaximum(999999999.000000000000000);

        cameraDirLayout->setWidget(2, QFormLayout::FieldRole, cameraDirZ);


        mainLayout->addWidget(cameraDirGroup, 1, 2, 1, 1);

        playerPosGroup = new QGroupBox(PositionalAudioViewer);
        playerPosGroup->setObjectName(QString::fromUtf8("playerPosGroup"));
        playerPosLayout = new QFormLayout(playerPosGroup);
        playerPosLayout->setObjectName(QString::fromUtf8("playerPosLayout"));
        playerPosX = new QDoubleSpinBox(playerPosGroup);
        playerPosX->setObjectName(QString::fromUtf8("playerPosX"));
        sizePolicy.setHeightForWidth(playerPosX->sizePolicy().hasHeightForWidth());
        playerPosX->setSizePolicy(sizePolicy);
        playerPosX->setReadOnly(true);
        playerPosX->setButtonSymbols(QAbstractSpinBox::NoButtons);
        playerPosX->setDecimals(6);
        playerPosX->setMinimum(-999999999.000000000000000);
        playerPosX->setMaximum(999999999.000000000000000);

        playerPosLayout->setWidget(0, QFormLayout::FieldRole, playerPosX);

        playerPosLabelX = new QLabel(playerPosGroup);
        playerPosLabelX->setObjectName(QString::fromUtf8("playerPosLabelX"));

        playerPosLayout->setWidget(0, QFormLayout::LabelRole, playerPosLabelX);

        playerPosY = new QDoubleSpinBox(playerPosGroup);
        playerPosY->setObjectName(QString::fromUtf8("playerPosY"));
        sizePolicy.setHeightForWidth(playerPosY->sizePolicy().hasHeightForWidth());
        playerPosY->setSizePolicy(sizePolicy);
        playerPosY->setReadOnly(true);
        playerPosY->setButtonSymbols(QAbstractSpinBox::NoButtons);
        playerPosY->setDecimals(6);
        playerPosY->setMinimum(-999999999.000000000000000);
        playerPosY->setMaximum(999999999.000000000000000);

        playerPosLayout->setWidget(1, QFormLayout::FieldRole, playerPosY);

        playerPosLabelY = new QLabel(playerPosGroup);
        playerPosLabelY->setObjectName(QString::fromUtf8("playerPosLabelY"));

        playerPosLayout->setWidget(1, QFormLayout::LabelRole, playerPosLabelY);

        playerPosZ = new QDoubleSpinBox(playerPosGroup);
        playerPosZ->setObjectName(QString::fromUtf8("playerPosZ"));
        sizePolicy.setHeightForWidth(playerPosZ->sizePolicy().hasHeightForWidth());
        playerPosZ->setSizePolicy(sizePolicy);
        playerPosZ->setReadOnly(true);
        playerPosZ->setButtonSymbols(QAbstractSpinBox::NoButtons);
        playerPosZ->setDecimals(6);
        playerPosZ->setMinimum(-999999999.000000000000000);
        playerPosZ->setMaximum(999999999.000000000000000);

        playerPosLayout->setWidget(2, QFormLayout::FieldRole, playerPosZ);

        playerPosLabelZ = new QLabel(playerPosGroup);
        playerPosLabelZ->setObjectName(QString::fromUtf8("playerPosLabelZ"));

        playerPosLayout->setWidget(2, QFormLayout::LabelRole, playerPosLabelZ);


        mainLayout->addWidget(playerPosGroup, 0, 1, 1, 1);

        playerAxisGroup = new QGroupBox(PositionalAudioViewer);
        playerAxisGroup->setObjectName(QString::fromUtf8("playerAxisGroup"));
        playerAxisLayout = new QFormLayout(playerAxisGroup);
        playerAxisLayout->setObjectName(QString::fromUtf8("playerAxisLayout"));
        playerAxisLabelX = new QLabel(playerAxisGroup);
        playerAxisLabelX->setObjectName(QString::fromUtf8("playerAxisLabelX"));

        playerAxisLayout->setWidget(0, QFormLayout::LabelRole, playerAxisLabelX);

        playerAxisX = new QDoubleSpinBox(playerAxisGroup);
        playerAxisX->setObjectName(QString::fromUtf8("playerAxisX"));
        sizePolicy.setHeightForWidth(playerAxisX->sizePolicy().hasHeightForWidth());
        playerAxisX->setSizePolicy(sizePolicy);
        playerAxisX->setReadOnly(true);
        playerAxisX->setButtonSymbols(QAbstractSpinBox::NoButtons);
        playerAxisX->setDecimals(6);
        playerAxisX->setMinimum(-999999999.000000000000000);
        playerAxisX->setMaximum(999999999.000000000000000);

        playerAxisLayout->setWidget(0, QFormLayout::FieldRole, playerAxisX);

        playerAxisLabelY = new QLabel(playerAxisGroup);
        playerAxisLabelY->setObjectName(QString::fromUtf8("playerAxisLabelY"));

        playerAxisLayout->setWidget(1, QFormLayout::LabelRole, playerAxisLabelY);

        playerAxisY = new QDoubleSpinBox(playerAxisGroup);
        playerAxisY->setObjectName(QString::fromUtf8("playerAxisY"));
        sizePolicy.setHeightForWidth(playerAxisY->sizePolicy().hasHeightForWidth());
        playerAxisY->setSizePolicy(sizePolicy);
        playerAxisY->setReadOnly(true);
        playerAxisY->setButtonSymbols(QAbstractSpinBox::NoButtons);
        playerAxisY->setDecimals(6);
        playerAxisY->setMinimum(-999999999.000000000000000);
        playerAxisY->setMaximum(999999999.000000000000000);

        playerAxisLayout->setWidget(1, QFormLayout::FieldRole, playerAxisY);

        playerAxisLabelZ = new QLabel(playerAxisGroup);
        playerAxisLabelZ->setObjectName(QString::fromUtf8("playerAxisLabelZ"));

        playerAxisLayout->setWidget(2, QFormLayout::LabelRole, playerAxisLabelZ);

        playerAxisZ = new QDoubleSpinBox(playerAxisGroup);
        playerAxisZ->setObjectName(QString::fromUtf8("playerAxisZ"));
        sizePolicy.setHeightForWidth(playerAxisZ->sizePolicy().hasHeightForWidth());
        playerAxisZ->setSizePolicy(sizePolicy);
        playerAxisZ->setReadOnly(true);
        playerAxisZ->setButtonSymbols(QAbstractSpinBox::NoButtons);
        playerAxisZ->setDecimals(6);
        playerAxisZ->setMinimum(-999999999.000000000000000);
        playerAxisZ->setMaximum(999999999.000000000000000);

        playerAxisLayout->setWidget(2, QFormLayout::FieldRole, playerAxisZ);


        mainLayout->addWidget(playerAxisGroup, 0, 3, 1, 1);

        playerDirGroup = new QGroupBox(PositionalAudioViewer);
        playerDirGroup->setObjectName(QString::fromUtf8("playerDirGroup"));
        playerDirLayout = new QFormLayout(playerDirGroup);
        playerDirLayout->setObjectName(QString::fromUtf8("playerDirLayout"));
        playerDirLabelX = new QLabel(playerDirGroup);
        playerDirLabelX->setObjectName(QString::fromUtf8("playerDirLabelX"));

        playerDirLayout->setWidget(0, QFormLayout::LabelRole, playerDirLabelX);

        playerDirX = new QDoubleSpinBox(playerDirGroup);
        playerDirX->setObjectName(QString::fromUtf8("playerDirX"));
        sizePolicy.setHeightForWidth(playerDirX->sizePolicy().hasHeightForWidth());
        playerDirX->setSizePolicy(sizePolicy);
        playerDirX->setReadOnly(true);
        playerDirX->setButtonSymbols(QAbstractSpinBox::NoButtons);
        playerDirX->setDecimals(6);
        playerDirX->setMinimum(-999999999.000000000000000);
        playerDirX->setMaximum(999999999.000000000000000);

        playerDirLayout->setWidget(0, QFormLayout::FieldRole, playerDirX);

        playerDirLabelY = new QLabel(playerDirGroup);
        playerDirLabelY->setObjectName(QString::fromUtf8("playerDirLabelY"));

        playerDirLayout->setWidget(1, QFormLayout::LabelRole, playerDirLabelY);

        playerDirY = new QDoubleSpinBox(playerDirGroup);
        playerDirY->setObjectName(QString::fromUtf8("playerDirY"));
        sizePolicy.setHeightForWidth(playerDirY->sizePolicy().hasHeightForWidth());
        playerDirY->setSizePolicy(sizePolicy);
        playerDirY->setReadOnly(true);
        playerDirY->setButtonSymbols(QAbstractSpinBox::NoButtons);
        playerDirY->setDecimals(6);
        playerDirY->setMinimum(-999999999.000000000000000);
        playerDirY->setMaximum(999999999.000000000000000);

        playerDirLayout->setWidget(1, QFormLayout::FieldRole, playerDirY);

        playerDirLabelZ = new QLabel(playerDirGroup);
        playerDirLabelZ->setObjectName(QString::fromUtf8("playerDirLabelZ"));

        playerDirLayout->setWidget(2, QFormLayout::LabelRole, playerDirLabelZ);

        playerDirZ = new QDoubleSpinBox(playerDirGroup);
        playerDirZ->setObjectName(QString::fromUtf8("playerDirZ"));
        sizePolicy.setHeightForWidth(playerDirZ->sizePolicy().hasHeightForWidth());
        playerDirZ->setSizePolicy(sizePolicy);
        playerDirZ->setReadOnly(true);
        playerDirZ->setButtonSymbols(QAbstractSpinBox::NoButtons);
        playerDirZ->setDecimals(6);
        playerDirZ->setMinimum(-999999999.000000000000000);
        playerDirZ->setMaximum(999999999.000000000000000);

        playerDirLayout->setWidget(2, QFormLayout::FieldRole, playerDirZ);


        mainLayout->addWidget(playerDirGroup, 0, 2, 1, 1);

        cameraAxisGroup = new QGroupBox(PositionalAudioViewer);
        cameraAxisGroup->setObjectName(QString::fromUtf8("cameraAxisGroup"));
        cameraAxisLayout = new QFormLayout(cameraAxisGroup);
        cameraAxisLayout->setObjectName(QString::fromUtf8("cameraAxisLayout"));
        cameraAxisLabelX = new QLabel(cameraAxisGroup);
        cameraAxisLabelX->setObjectName(QString::fromUtf8("cameraAxisLabelX"));

        cameraAxisLayout->setWidget(0, QFormLayout::LabelRole, cameraAxisLabelX);

        cameraAxisX = new QDoubleSpinBox(cameraAxisGroup);
        cameraAxisX->setObjectName(QString::fromUtf8("cameraAxisX"));
        sizePolicy.setHeightForWidth(cameraAxisX->sizePolicy().hasHeightForWidth());
        cameraAxisX->setSizePolicy(sizePolicy);
        cameraAxisX->setReadOnly(true);
        cameraAxisX->setButtonSymbols(QAbstractSpinBox::NoButtons);
        cameraAxisX->setDecimals(6);
        cameraAxisX->setMinimum(-999999999.000000000000000);
        cameraAxisX->setMaximum(999999999.000000000000000);

        cameraAxisLayout->setWidget(0, QFormLayout::FieldRole, cameraAxisX);

        cameraAxisY = new QDoubleSpinBox(cameraAxisGroup);
        cameraAxisY->setObjectName(QString::fromUtf8("cameraAxisY"));
        sizePolicy.setHeightForWidth(cameraAxisY->sizePolicy().hasHeightForWidth());
        cameraAxisY->setSizePolicy(sizePolicy);
        cameraAxisY->setReadOnly(true);
        cameraAxisY->setButtonSymbols(QAbstractSpinBox::NoButtons);
        cameraAxisY->setDecimals(6);
        cameraAxisY->setMinimum(-999999999.000000000000000);
        cameraAxisY->setMaximum(999999999.000000000000000);

        cameraAxisLayout->setWidget(1, QFormLayout::FieldRole, cameraAxisY);

        cameraAxisZ = new QDoubleSpinBox(cameraAxisGroup);
        cameraAxisZ->setObjectName(QString::fromUtf8("cameraAxisZ"));
        sizePolicy.setHeightForWidth(cameraAxisZ->sizePolicy().hasHeightForWidth());
        cameraAxisZ->setSizePolicy(sizePolicy);
        cameraAxisZ->setReadOnly(true);
        cameraAxisZ->setButtonSymbols(QAbstractSpinBox::NoButtons);
        cameraAxisZ->setDecimals(6);
        cameraAxisZ->setMinimum(-999999999.000000000000000);
        cameraAxisZ->setMaximum(999999999.000000000000000);

        cameraAxisLayout->setWidget(2, QFormLayout::FieldRole, cameraAxisZ);

        cameraAxisLabelY = new QLabel(cameraAxisGroup);
        cameraAxisLabelY->setObjectName(QString::fromUtf8("cameraAxisLabelY"));

        cameraAxisLayout->setWidget(1, QFormLayout::LabelRole, cameraAxisLabelY);

        cameraAxisLabelZ = new QLabel(cameraAxisGroup);
        cameraAxisLabelZ->setObjectName(QString::fromUtf8("cameraAxisLabelZ"));

        cameraAxisLayout->setWidget(2, QFormLayout::LabelRole, cameraAxisLabelZ);


        mainLayout->addWidget(cameraAxisGroup, 1, 3, 1, 1);

        cameraPosGroup = new QGroupBox(PositionalAudioViewer);
        cameraPosGroup->setObjectName(QString::fromUtf8("cameraPosGroup"));
        cameraPosLayout = new QFormLayout(cameraPosGroup);
        cameraPosLayout->setObjectName(QString::fromUtf8("cameraPosLayout"));
        cameraPosLabelX = new QLabel(cameraPosGroup);
        cameraPosLabelX->setObjectName(QString::fromUtf8("cameraPosLabelX"));

        cameraPosLayout->setWidget(0, QFormLayout::LabelRole, cameraPosLabelX);

        cameraPosX = new QDoubleSpinBox(cameraPosGroup);
        cameraPosX->setObjectName(QString::fromUtf8("cameraPosX"));
        sizePolicy.setHeightForWidth(cameraPosX->sizePolicy().hasHeightForWidth());
        cameraPosX->setSizePolicy(sizePolicy);
        cameraPosX->setReadOnly(true);
        cameraPosX->setButtonSymbols(QAbstractSpinBox::NoButtons);
        cameraPosX->setDecimals(6);
        cameraPosX->setMinimum(-999999999.000000000000000);
        cameraPosX->setMaximum(999999999.000000000000000);

        cameraPosLayout->setWidget(0, QFormLayout::FieldRole, cameraPosX);

        cameraPosLabelY = new QLabel(cameraPosGroup);
        cameraPosLabelY->setObjectName(QString::fromUtf8("cameraPosLabelY"));

        cameraPosLayout->setWidget(1, QFormLayout::LabelRole, cameraPosLabelY);

        cameraPosY = new QDoubleSpinBox(cameraPosGroup);
        cameraPosY->setObjectName(QString::fromUtf8("cameraPosY"));
        sizePolicy.setHeightForWidth(cameraPosY->sizePolicy().hasHeightForWidth());
        cameraPosY->setSizePolicy(sizePolicy);
        cameraPosY->setReadOnly(true);
        cameraPosY->setButtonSymbols(QAbstractSpinBox::NoButtons);
        cameraPosY->setDecimals(6);
        cameraPosY->setMinimum(-999999999.000000000000000);
        cameraPosY->setMaximum(999999999.000000000000000);

        cameraPosLayout->setWidget(1, QFormLayout::FieldRole, cameraPosY);

        cameraPosLabelZ = new QLabel(cameraPosGroup);
        cameraPosLabelZ->setObjectName(QString::fromUtf8("cameraPosLabelZ"));

        cameraPosLayout->setWidget(2, QFormLayout::LabelRole, cameraPosLabelZ);

        cameraPosZ = new QDoubleSpinBox(cameraPosGroup);
        cameraPosZ->setObjectName(QString::fromUtf8("cameraPosZ"));
        sizePolicy.setHeightForWidth(cameraPosZ->sizePolicy().hasHeightForWidth());
        cameraPosZ->setSizePolicy(sizePolicy);
        cameraPosZ->setReadOnly(true);
        cameraPosZ->setButtonSymbols(QAbstractSpinBox::NoButtons);
        cameraPosZ->setDecimals(6);
        cameraPosZ->setMinimum(-999999999.000000000000000);
        cameraPosZ->setMaximum(999999999.000000000000000);

        cameraPosLayout->setWidget(2, QFormLayout::FieldRole, cameraPosZ);


        mainLayout->addWidget(cameraPosGroup, 1, 1, 1, 1);

        infoGroup = new QGroupBox(PositionalAudioViewer);
        infoGroup->setObjectName(QString::fromUtf8("infoGroup"));
        infoLayout = new QVBoxLayout(infoGroup);
        infoLayout->setObjectName(QString::fromUtf8("infoLayout"));
        contextLabel = new QLabel(infoGroup);
        contextLabel->setObjectName(QString::fromUtf8("contextLabel"));

        infoLayout->addWidget(contextLabel);

        context = new QPlainTextEdit(infoGroup);
        context->setObjectName(QString::fromUtf8("context"));
        context->setReadOnly(true);

        infoLayout->addWidget(context);

        identityLabel = new QLabel(infoGroup);
        identityLabel->setObjectName(QString::fromUtf8("identityLabel"));

        infoLayout->addWidget(identityLabel);

        identity = new QPlainTextEdit(infoGroup);
        identity->setObjectName(QString::fromUtf8("identity"));
        identity->setReadOnly(true);

        infoLayout->addWidget(identity);


        mainLayout->addWidget(infoGroup, 2, 1, 1, 3);


        retranslateUi(PositionalAudioViewer);

        QMetaObject::connectSlotsByName(PositionalAudioViewer);
    } // setupUi

    void retranslateUi(QDialog *PositionalAudioViewer)
    {
        PositionalAudioViewer->setWindowTitle(QApplication::translate("PositionalAudioViewer", "Positional Audio Viewer", nullptr));
        cameraDirGroup->setTitle(QApplication::translate("PositionalAudioViewer", "Camera direction", nullptr));
        cameraDirLabelX->setText(QApplication::translate("PositionalAudioViewer", "X", nullptr));
        cameraDirLabelY->setText(QApplication::translate("PositionalAudioViewer", "Y", nullptr));
        cameraDirLabelZ->setText(QApplication::translate("PositionalAudioViewer", "Z", nullptr));
        playerPosGroup->setTitle(QApplication::translate("PositionalAudioViewer", "Player position", nullptr));
        playerPosLabelX->setText(QApplication::translate("PositionalAudioViewer", "X", nullptr));
        playerPosLabelY->setText(QApplication::translate("PositionalAudioViewer", "Y", nullptr));
        playerPosLabelZ->setText(QApplication::translate("PositionalAudioViewer", "Z", nullptr));
        playerAxisGroup->setTitle(QApplication::translate("PositionalAudioViewer", "Player axis", nullptr));
        playerAxisLabelX->setText(QApplication::translate("PositionalAudioViewer", "X", nullptr));
        playerAxisLabelY->setText(QApplication::translate("PositionalAudioViewer", "Y", nullptr));
        playerAxisLabelZ->setText(QApplication::translate("PositionalAudioViewer", "Z", nullptr));
        playerDirGroup->setTitle(QApplication::translate("PositionalAudioViewer", "Player direction", nullptr));
        playerDirLabelX->setText(QApplication::translate("PositionalAudioViewer", "X", nullptr));
        playerDirLabelY->setText(QApplication::translate("PositionalAudioViewer", "Y", nullptr));
        playerDirLabelZ->setText(QApplication::translate("PositionalAudioViewer", "Z", nullptr));
        cameraAxisGroup->setTitle(QApplication::translate("PositionalAudioViewer", "Camera axis", nullptr));
        cameraAxisLabelX->setText(QApplication::translate("PositionalAudioViewer", "X", nullptr));
        cameraAxisLabelY->setText(QApplication::translate("PositionalAudioViewer", "Y", nullptr));
        cameraAxisLabelZ->setText(QApplication::translate("PositionalAudioViewer", "Z", nullptr));
        cameraPosGroup->setTitle(QApplication::translate("PositionalAudioViewer", "Camera position", nullptr));
        cameraPosLabelX->setText(QApplication::translate("PositionalAudioViewer", "X", nullptr));
        cameraPosLabelY->setText(QApplication::translate("PositionalAudioViewer", "Y", nullptr));
        cameraPosLabelZ->setText(QApplication::translate("PositionalAudioViewer", "Z", nullptr));
        infoGroup->setTitle(QApplication::translate("PositionalAudioViewer", "Info", nullptr));
        contextLabel->setText(QApplication::translate("PositionalAudioViewer", "Context", nullptr));
        identityLabel->setText(QApplication::translate("PositionalAudioViewer", "Identity", nullptr));
    } // retranslateUi

};

namespace Ui {
    class PositionalAudioViewer: public Ui_PositionalAudioViewer {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_POSITIONALAUDIOVIEWER_H
