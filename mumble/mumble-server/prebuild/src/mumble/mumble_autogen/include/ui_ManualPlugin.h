/********************************************************************************
** Form generated from reading UI file 'ManualPlugin.ui'
**
** Created by: Qt User Interface Compiler version 5.12.8
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MANUALPLUGIN_H
#define UI_MANUALPLUGIN_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QCheckBox>
#include <QtWidgets/QDial>
#include <QtWidgets/QDialog>
#include <QtWidgets/QDialogButtonBox>
#include <QtWidgets/QDoubleSpinBox>
#include <QtWidgets/QFormLayout>
#include <QtWidgets/QGraphicsView>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QSpinBox>
#include <QtWidgets/QVBoxLayout>

QT_BEGIN_NAMESPACE

class Ui_Manual
{
public:
    QVBoxLayout *verticalLayout;
    QHBoxLayout *qhlHorizontal;
    QGroupBox *qgbPosition;
    QVBoxLayout *verticalLayout_2;
    QGraphicsView *qgvPosition;
    QGridLayout *gridLayout_2;
    QLabel *qlY;
    QDoubleSpinBox *qdsbZ;
    QDoubleSpinBox *qdsbX;
    QLabel *qlZ;
    QLabel *qlX;
    QDoubleSpinBox *qdsbY;
    QVBoxLayout *qhlVertical;
    QGroupBox *groupBox;
    QFormLayout *formLayout;
    QLabel *qlSilentUserDisplaytime;
    QSpinBox *qsbSilentUserDisplaytime;
    QGroupBox *qgbHeading;
    QGridLayout *gridLayout;
    QSpinBox *qsbAzimuth;
    QLabel *qlAzimuth;
    QDial *qdElevation;
    QSpinBox *qsbElevation;
    QLabel *qlElevation;
    QDial *qdAzimuth;
    QSpacerItem *verticalSpacer;
    QGroupBox *qgbMeta;
    QGridLayout *gridLayout_3;
    QLineEdit *qleContext;
    QLabel *qlContext;
    QLabel *qlIdentity;
    QPushButton *qpbContext;
    QPushButton *qpbIdentity;
    QLineEdit *qleIdentity;
    QGroupBox *qgbState;
    QGridLayout *gridLayout_4;
    QCheckBox *qpbLinked;
    QCheckBox *qpbActivated;
    QPushButton *qpbUnhinge;
    QDialogButtonBox *buttonBox;

    void setupUi(QDialog *Manual)
    {
        if (Manual->objectName().isEmpty())
            Manual->setObjectName(QString::fromUtf8("Manual"));
        Manual->resize(731, 528);
        verticalLayout = new QVBoxLayout(Manual);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        qhlHorizontal = new QHBoxLayout();
        qhlHorizontal->setObjectName(QString::fromUtf8("qhlHorizontal"));
        qgbPosition = new QGroupBox(Manual);
        qgbPosition->setObjectName(QString::fromUtf8("qgbPosition"));
        QSizePolicy sizePolicy(QSizePolicy::Preferred, QSizePolicy::Preferred);
        sizePolicy.setHorizontalStretch(2);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(qgbPosition->sizePolicy().hasHeightForWidth());
        qgbPosition->setSizePolicy(sizePolicy);
        verticalLayout_2 = new QVBoxLayout(qgbPosition);
        verticalLayout_2->setObjectName(QString::fromUtf8("verticalLayout_2"));
        qgvPosition = new QGraphicsView(qgbPosition);
        qgvPosition->setObjectName(QString::fromUtf8("qgvPosition"));
        qgvPosition->setVerticalScrollBarPolicy(Qt::ScrollBarAlwaysOff);
        qgvPosition->setHorizontalScrollBarPolicy(Qt::ScrollBarAlwaysOff);
        QBrush brush(QColor(0, 0, 0, 255));
        brush.setStyle(Qt::NoBrush);
        qgvPosition->setBackgroundBrush(brush);
        QBrush brush1(QColor(0, 0, 0, 255));
        brush1.setStyle(Qt::NoBrush);
        qgvPosition->setForegroundBrush(brush1);
        qgvPosition->setInteractive(true);
        qgvPosition->setSceneRect(QRectF(-50, -50, 100, 100));
        qgvPosition->setRenderHints(QPainter::Antialiasing|QPainter::TextAntialiasing);

        verticalLayout_2->addWidget(qgvPosition);

        gridLayout_2 = new QGridLayout();
        gridLayout_2->setObjectName(QString::fromUtf8("gridLayout_2"));
        qlY = new QLabel(qgbPosition);
        qlY->setObjectName(QString::fromUtf8("qlY"));
        qlY->setAlignment(Qt::AlignCenter);

        gridLayout_2->addWidget(qlY, 1, 1, 1, 1);

        qdsbZ = new QDoubleSpinBox(qgbPosition);
        qdsbZ->setObjectName(QString::fromUtf8("qdsbZ"));

        gridLayout_2->addWidget(qdsbZ, 2, 2, 1, 1);

        qdsbX = new QDoubleSpinBox(qgbPosition);
        qdsbX->setObjectName(QString::fromUtf8("qdsbX"));

        gridLayout_2->addWidget(qdsbX, 2, 0, 1, 1);

        qlZ = new QLabel(qgbPosition);
        qlZ->setObjectName(QString::fromUtf8("qlZ"));
        qlZ->setAlignment(Qt::AlignCenter);

        gridLayout_2->addWidget(qlZ, 1, 2, 1, 1);

        qlX = new QLabel(qgbPosition);
        qlX->setObjectName(QString::fromUtf8("qlX"));
        qlX->setAlignment(Qt::AlignCenter);

        gridLayout_2->addWidget(qlX, 1, 0, 1, 1);

        qdsbY = new QDoubleSpinBox(qgbPosition);
        qdsbY->setObjectName(QString::fromUtf8("qdsbY"));

        gridLayout_2->addWidget(qdsbY, 2, 1, 1, 1);


        verticalLayout_2->addLayout(gridLayout_2);


        qhlHorizontal->addWidget(qgbPosition);

        qhlVertical = new QVBoxLayout();
        qhlVertical->setObjectName(QString::fromUtf8("qhlVertical"));
        groupBox = new QGroupBox(Manual);
        groupBox->setObjectName(QString::fromUtf8("groupBox"));
        formLayout = new QFormLayout(groupBox);
        formLayout->setObjectName(QString::fromUtf8("formLayout"));
        qlSilentUserDisplaytime = new QLabel(groupBox);
        qlSilentUserDisplaytime->setObjectName(QString::fromUtf8("qlSilentUserDisplaytime"));

        formLayout->setWidget(0, QFormLayout::LabelRole, qlSilentUserDisplaytime);

        qsbSilentUserDisplaytime = new QSpinBox(groupBox);
        qsbSilentUserDisplaytime->setObjectName(QString::fromUtf8("qsbSilentUserDisplaytime"));
        QSizePolicy sizePolicy1(QSizePolicy::MinimumExpanding, QSizePolicy::Fixed);
        sizePolicy1.setHorizontalStretch(0);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(qsbSilentUserDisplaytime->sizePolicy().hasHeightForWidth());
        qsbSilentUserDisplaytime->setSizePolicy(sizePolicy1);

        formLayout->setWidget(0, QFormLayout::FieldRole, qsbSilentUserDisplaytime);


        qhlVertical->addWidget(groupBox);

        qgbHeading = new QGroupBox(Manual);
        qgbHeading->setObjectName(QString::fromUtf8("qgbHeading"));
        QSizePolicy sizePolicy2(QSizePolicy::Preferred, QSizePolicy::Preferred);
        sizePolicy2.setHorizontalStretch(0);
        sizePolicy2.setVerticalStretch(0);
        sizePolicy2.setHeightForWidth(qgbHeading->sizePolicy().hasHeightForWidth());
        qgbHeading->setSizePolicy(sizePolicy2);
        gridLayout = new QGridLayout(qgbHeading);
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        qsbAzimuth = new QSpinBox(qgbHeading);
        qsbAzimuth->setObjectName(QString::fromUtf8("qsbAzimuth"));
        qsbAzimuth->setMaximum(360);

        gridLayout->addWidget(qsbAzimuth, 2, 0, 1, 1);

        qlAzimuth = new QLabel(qgbHeading);
        qlAzimuth->setObjectName(QString::fromUtf8("qlAzimuth"));
        QSizePolicy sizePolicy3(QSizePolicy::Preferred, QSizePolicy::Minimum);
        sizePolicy3.setHorizontalStretch(0);
        sizePolicy3.setVerticalStretch(0);
        sizePolicy3.setHeightForWidth(qlAzimuth->sizePolicy().hasHeightForWidth());
        qlAzimuth->setSizePolicy(sizePolicy3);
        qlAzimuth->setAlignment(Qt::AlignCenter);

        gridLayout->addWidget(qlAzimuth, 0, 0, 1, 1);

        qdElevation = new QDial(qgbHeading);
        qdElevation->setObjectName(QString::fromUtf8("qdElevation"));
        qdElevation->setMinimum(-180);
        qdElevation->setMaximum(180);
        qdElevation->setPageStep(30);
        qdElevation->setValue(90);
        qdElevation->setSliderPosition(90);
        qdElevation->setWrapping(true);
        qdElevation->setNotchTarget(6.000000000000000);
        qdElevation->setNotchesVisible(true);

        gridLayout->addWidget(qdElevation, 1, 1, 1, 1);

        qsbElevation = new QSpinBox(qgbHeading);
        qsbElevation->setObjectName(QString::fromUtf8("qsbElevation"));
        qsbElevation->setMinimum(-90);
        qsbElevation->setMaximum(90);

        gridLayout->addWidget(qsbElevation, 2, 1, 1, 1);

        qlElevation = new QLabel(qgbHeading);
        qlElevation->setObjectName(QString::fromUtf8("qlElevation"));
        sizePolicy3.setHeightForWidth(qlElevation->sizePolicy().hasHeightForWidth());
        qlElevation->setSizePolicy(sizePolicy3);
        qlElevation->setAlignment(Qt::AlignCenter);

        gridLayout->addWidget(qlElevation, 0, 1, 1, 1);

        qdAzimuth = new QDial(qgbHeading);
        qdAzimuth->setObjectName(QString::fromUtf8("qdAzimuth"));
        qdAzimuth->setMinimum(0);
        qdAzimuth->setMaximum(360);
        qdAzimuth->setPageStep(30);
        qdAzimuth->setWrapping(true);
        qdAzimuth->setNotchTarget(6.000000000000000);
        qdAzimuth->setNotchesVisible(true);

        gridLayout->addWidget(qdAzimuth, 1, 0, 1, 1);


        qhlVertical->addWidget(qgbHeading);

        verticalSpacer = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        qhlVertical->addItem(verticalSpacer);

        qgbMeta = new QGroupBox(Manual);
        qgbMeta->setObjectName(QString::fromUtf8("qgbMeta"));
        gridLayout_3 = new QGridLayout(qgbMeta);
        gridLayout_3->setObjectName(QString::fromUtf8("gridLayout_3"));
        qleContext = new QLineEdit(qgbMeta);
        qleContext->setObjectName(QString::fromUtf8("qleContext"));

        gridLayout_3->addWidget(qleContext, 0, 1, 1, 1);

        qlContext = new QLabel(qgbMeta);
        qlContext->setObjectName(QString::fromUtf8("qlContext"));

        gridLayout_3->addWidget(qlContext, 0, 0, 1, 1);

        qlIdentity = new QLabel(qgbMeta);
        qlIdentity->setObjectName(QString::fromUtf8("qlIdentity"));

        gridLayout_3->addWidget(qlIdentity, 1, 0, 1, 1);

        qpbContext = new QPushButton(qgbMeta);
        qpbContext->setObjectName(QString::fromUtf8("qpbContext"));

        gridLayout_3->addWidget(qpbContext, 0, 2, 1, 1);

        qpbIdentity = new QPushButton(qgbMeta);
        qpbIdentity->setObjectName(QString::fromUtf8("qpbIdentity"));

        gridLayout_3->addWidget(qpbIdentity, 1, 2, 1, 1);

        qleIdentity = new QLineEdit(qgbMeta);
        qleIdentity->setObjectName(QString::fromUtf8("qleIdentity"));

        gridLayout_3->addWidget(qleIdentity, 1, 1, 1, 1);


        qhlVertical->addWidget(qgbMeta);

        qgbState = new QGroupBox(Manual);
        qgbState->setObjectName(QString::fromUtf8("qgbState"));
        sizePolicy3.setHeightForWidth(qgbState->sizePolicy().hasHeightForWidth());
        qgbState->setSizePolicy(sizePolicy3);
        gridLayout_4 = new QGridLayout(qgbState);
        gridLayout_4->setObjectName(QString::fromUtf8("gridLayout_4"));
        qpbLinked = new QCheckBox(qgbState);
        qpbLinked->setObjectName(QString::fromUtf8("qpbLinked"));
        qpbLinked->setEnabled(true);
        qpbLinked->setCheckable(true);
        qpbLinked->setChecked(false);

        gridLayout_4->addWidget(qpbLinked, 0, 0, 1, 1);

        qpbActivated = new QCheckBox(qgbState);
        qpbActivated->setObjectName(QString::fromUtf8("qpbActivated"));
        qpbActivated->setCheckable(true);
        qpbActivated->setChecked(false);

        gridLayout_4->addWidget(qpbActivated, 0, 1, 1, 1);


        qhlVertical->addWidget(qgbState);

        qpbUnhinge = new QPushButton(Manual);
        qpbUnhinge->setObjectName(QString::fromUtf8("qpbUnhinge"));

        qhlVertical->addWidget(qpbUnhinge);


        qhlHorizontal->addLayout(qhlVertical);


        verticalLayout->addLayout(qhlHorizontal);

        buttonBox = new QDialogButtonBox(Manual);
        buttonBox->setObjectName(QString::fromUtf8("buttonBox"));
        buttonBox->setOrientation(Qt::Horizontal);
        buttonBox->setStandardButtons(QDialogButtonBox::Close|QDialogButtonBox::Reset);
        buttonBox->setCenterButtons(false);

        verticalLayout->addWidget(buttonBox);


        retranslateUi(Manual);
        QObject::connect(buttonBox, SIGNAL(accepted()), Manual, SLOT(accept()));
        QObject::connect(buttonBox, SIGNAL(rejected()), Manual, SLOT(reject()));

        QMetaObject::connectSlotsByName(Manual);
    } // setupUi

    void retranslateUi(QDialog *Manual)
    {
        Manual->setWindowTitle(QApplication::translate("Manual", "Manual Mumble Positional Audio", nullptr));
        qgbPosition->setTitle(QApplication::translate("Manual", "Position", nullptr));
        qlY->setText(QApplication::translate("Manual", "Y", nullptr));
        qdsbZ->setSuffix(QApplication::translate("Manual", "m", nullptr));
        qdsbX->setPrefix(QString());
        qdsbX->setSuffix(QApplication::translate("Manual", "m", nullptr));
        qlZ->setText(QApplication::translate("Manual", "Z", nullptr));
        qlX->setText(QApplication::translate("Manual", "X", nullptr));
        qdsbY->setSuffix(QApplication::translate("Manual", "m", nullptr));
        groupBox->setTitle(QApplication::translate("Manual", "Display", nullptr));
#ifndef QT_NO_TOOLTIP
        qlSilentUserDisplaytime->setToolTip(QApplication::translate("Manual", "How long silent user's positions should stay marked after they have stopped talking (in seconds).", nullptr));
#endif // QT_NO_TOOLTIP
        qlSilentUserDisplaytime->setText(QApplication::translate("Manual", "Silent user displaytime:", nullptr));
#ifndef QT_NO_TOOLTIP
        qsbSilentUserDisplaytime->setToolTip(QApplication::translate("Manual", "How long silent user's positions should stay marked after they have stopped talking (in seconds).", nullptr));
#endif // QT_NO_TOOLTIP
        qgbHeading->setTitle(QApplication::translate("Manual", "Heading", nullptr));
        qsbAzimuth->setSuffix(QApplication::translate("Manual", "\302\260", nullptr));
        qlAzimuth->setText(QApplication::translate("Manual", "Azimuth", nullptr));
        qsbElevation->setSuffix(QApplication::translate("Manual", "\302\260", nullptr));
        qlElevation->setText(QApplication::translate("Manual", "Elevation", nullptr));
        qgbMeta->setTitle(QApplication::translate("Manual", "Meta data", nullptr));
        qlContext->setText(QApplication::translate("Manual", "Context", nullptr));
        qlIdentity->setText(QApplication::translate("Manual", "Identity", nullptr));
        qpbContext->setText(QApplication::translate("Manual", "Set", nullptr));
        qpbIdentity->setText(QApplication::translate("Manual", "Set", nullptr));
        qgbState->setTitle(QApplication::translate("Manual", "State", nullptr));
        qpbLinked->setText(QApplication::translate("Manual", "Link", nullptr));
        qpbActivated->setText(QApplication::translate("Manual", "Activate", nullptr));
        qpbUnhinge->setText(QApplication::translate("Manual", "Unhinge", nullptr));
    } // retranslateUi

};

namespace Ui {
    class Manual: public Ui_Manual {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MANUALPLUGIN_H
