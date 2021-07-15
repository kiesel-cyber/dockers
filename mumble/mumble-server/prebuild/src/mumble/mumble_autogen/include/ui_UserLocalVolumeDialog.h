/********************************************************************************
** Form generated from reading UI file 'UserLocalVolumeDialog.ui'
**
** Created by: Qt User Interface Compiler version 5.12.8
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_USERLOCALVOLUMEDIALOG_H
#define UI_USERLOCALVOLUMEDIALOG_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QDialogButtonBox>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QSlider>
#include <QtWidgets/QSpinBox>

QT_BEGIN_NAMESPACE

class Ui_UserLocalVolumeDialog
{
public:
    QGridLayout *gridLayout;
    QSlider *qsUserLocalVolume;
    QDialogButtonBox *qbbUserLocalVolume;
    QSpinBox *qsbUserLocalVolume;
    QLabel *qlUserLocalVolume;

    void setupUi(QDialog *UserLocalVolumeDialog)
    {
        if (UserLocalVolumeDialog->objectName().isEmpty())
            UserLocalVolumeDialog->setObjectName(QString::fromUtf8("UserLocalVolumeDialog"));
        UserLocalVolumeDialog->resize(500, 224);
        UserLocalVolumeDialog->setMinimumSize(QSize(500, 224));
        UserLocalVolumeDialog->setMaximumSize(QSize(16777215, 224));
        gridLayout = new QGridLayout(UserLocalVolumeDialog);
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        qsUserLocalVolume = new QSlider(UserLocalVolumeDialog);
        qsUserLocalVolume->setObjectName(QString::fromUtf8("qsUserLocalVolume"));
        qsUserLocalVolume->setStyleSheet(QString::fromUtf8(""));
        qsUserLocalVolume->setMinimum(-60);
        qsUserLocalVolume->setMaximum(30);
        qsUserLocalVolume->setValue(0);
        qsUserLocalVolume->setOrientation(Qt::Horizontal);
        qsUserLocalVolume->setTickPosition(QSlider::TicksBelow);
        qsUserLocalVolume->setTickInterval(10);

        gridLayout->addWidget(qsUserLocalVolume, 0, 0, 1, 1);

        qbbUserLocalVolume = new QDialogButtonBox(UserLocalVolumeDialog);
        qbbUserLocalVolume->setObjectName(QString::fromUtf8("qbbUserLocalVolume"));
        qbbUserLocalVolume->setOrientation(Qt::Horizontal);
        qbbUserLocalVolume->setStandardButtons(QDialogButtonBox::Cancel|QDialogButtonBox::Ok|QDialogButtonBox::Reset);
        qbbUserLocalVolume->setCenterButtons(false);

        gridLayout->addWidget(qbbUserLocalVolume, 2, 0, 1, 2, Qt::AlignBottom);

        qsbUserLocalVolume = new QSpinBox(UserLocalVolumeDialog);
        qsbUserLocalVolume->setObjectName(QString::fromUtf8("qsbUserLocalVolume"));
        qsbUserLocalVolume->setMinimum(-60);
        qsbUserLocalVolume->setMaximum(30);

        gridLayout->addWidget(qsbUserLocalVolume, 0, 1, 1, 1);

        qlUserLocalVolume = new QLabel(UserLocalVolumeDialog);
        qlUserLocalVolume->setObjectName(QString::fromUtf8("qlUserLocalVolume"));
        qlUserLocalVolume->setAlignment(Qt::AlignLeading|Qt::AlignLeft|Qt::AlignVCenter);
        qlUserLocalVolume->setWordWrap(true);

        gridLayout->addWidget(qlUserLocalVolume, 1, 0, 1, 2);


        retranslateUi(UserLocalVolumeDialog);

        QMetaObject::connectSlotsByName(UserLocalVolumeDialog);
    } // setupUi

    void retranslateUi(QDialog *UserLocalVolumeDialog)
    {
#ifndef QT_NO_TOOLTIP
        qsUserLocalVolume->setToolTip(QApplication::translate("UserLocalVolumeDialog", "Local volume for other users", nullptr));
#endif // QT_NO_TOOLTIP
#ifndef QT_NO_WHATSTHIS
        qsUserLocalVolume->setWhatsThis(QApplication::translate("UserLocalVolumeDialog", "<b>Adjust the volume of other users locally</b><br />Mumble supports adjusting the volume of other users locally.", nullptr));
#endif // QT_NO_WHATSTHIS
#ifndef QT_NO_TOOLTIP
        qsbUserLocalVolume->setToolTip(QApplication::translate("UserLocalVolumeDialog", "Local volume for other users", nullptr));
#endif // QT_NO_TOOLTIP
#ifndef QT_NO_WHATSTHIS
        qsbUserLocalVolume->setWhatsThis(QApplication::translate("UserLocalVolumeDialog", "<b>Adjust the volume of other users locally</b><br />Mumble supports adjusting the volume of other users locally.", nullptr));
#endif // QT_NO_WHATSTHIS
        qsbUserLocalVolume->setSuffix(QApplication::translate("UserLocalVolumeDialog", " dB", nullptr));
        qlUserLocalVolume->setText(QApplication::translate("UserLocalVolumeDialog", "<html><head/><body><p>Use the slider or the text box to change the volume of the user.</p><p><span style=\"font-weight:600;\">Attention!</span></p><p>Increasing the volume of a user too much can permanently damage your hearing. It may also increase the background noise of the user.</p></body></html>", nullptr));
        Q_UNUSED(UserLocalVolumeDialog);
    } // retranslateUi

};

namespace Ui {
    class UserLocalVolumeDialog: public Ui_UserLocalVolumeDialog {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_USERLOCALVOLUMEDIALOG_H
