/********************************************************************************
** Form generated from reading UI file 'PTTButtonWidget.ui'
**
** Created by: Qt User Interface Compiler version 5.12.8
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_PTTBUTTONWIDGET_H
#define UI_PTTBUTTONWIDGET_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_qwPTTButtonWidget
{
public:
    QVBoxLayout *verticalLayout;
    QPushButton *qpbPushToTalk;

    void setupUi(QWidget *qwPTTButtonWidget)
    {
        if (qwPTTButtonWidget->objectName().isEmpty())
            qwPTTButtonWidget->setObjectName(QString::fromUtf8("qwPTTButtonWidget"));
        qwPTTButtonWidget->resize(100, 100);
        verticalLayout = new QVBoxLayout(qwPTTButtonWidget);
        verticalLayout->setContentsMargins(0, 0, 0, 0);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        qpbPushToTalk = new QPushButton(qwPTTButtonWidget);
        qpbPushToTalk->setObjectName(QString::fromUtf8("qpbPushToTalk"));
        QSizePolicy sizePolicy(QSizePolicy::Expanding, QSizePolicy::Expanding);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(qpbPushToTalk->sizePolicy().hasHeightForWidth());
        qpbPushToTalk->setSizePolicy(sizePolicy);

        verticalLayout->addWidget(qpbPushToTalk);


        retranslateUi(qwPTTButtonWidget);

        qpbPushToTalk->setDefault(true);


        QMetaObject::connectSlotsByName(qwPTTButtonWidget);
    } // setupUi

    void retranslateUi(QWidget *qwPTTButtonWidget)
    {
        qwPTTButtonWidget->setWindowTitle(QApplication::translate("qwPTTButtonWidget", "Mumble PTT", nullptr));
        qpbPushToTalk->setText(QApplication::translate("qwPTTButtonWidget", "Push to talk", nullptr));
    } // retranslateUi

};

namespace Ui {
    class qwPTTButtonWidget: public Ui_qwPTTButtonWidget {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_PTTBUTTONWIDGET_H
