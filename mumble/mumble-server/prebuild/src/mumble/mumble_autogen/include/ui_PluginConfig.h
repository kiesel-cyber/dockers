/********************************************************************************
** Form generated from reading UI file 'PluginConfig.ui'
**
** Created by: Qt User Interface Compiler version 5.12.8
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_PLUGINCONFIG_H
#define UI_PLUGINCONFIG_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QCheckBox>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QTreeWidget>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_PluginConfig
{
public:
    QVBoxLayout *verticalLayout;
    QGroupBox *qgbOptions;
    QVBoxLayout *vboxLayout;
    QCheckBox *qcbTransmit;
    QGroupBox *qgbPlugins;
    QVBoxLayout *vboxLayout1;
    QTreeWidget *qtwPlugins;
    QHBoxLayout *hboxLayout;
    QPushButton *qpbReload;
    QPushButton *qpbInstallPlugin;
    QSpacerItem *spacerItem;
    QPushButton *qpbAbout;
    QPushButton *qpbConfig;
    QPushButton *qpbUnload;

    void setupUi(QWidget *PluginConfig)
    {
        if (PluginConfig->objectName().isEmpty())
            PluginConfig->setObjectName(QString::fromUtf8("PluginConfig"));
        PluginConfig->resize(570, 289);
        verticalLayout = new QVBoxLayout(PluginConfig);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        qgbOptions = new QGroupBox(PluginConfig);
        qgbOptions->setObjectName(QString::fromUtf8("qgbOptions"));
        vboxLayout = new QVBoxLayout(qgbOptions);
        vboxLayout->setObjectName(QString::fromUtf8("vboxLayout"));
        qcbTransmit = new QCheckBox(qgbOptions);
        qcbTransmit->setObjectName(QString::fromUtf8("qcbTransmit"));

        vboxLayout->addWidget(qcbTransmit);


        verticalLayout->addWidget(qgbOptions);

        qgbPlugins = new QGroupBox(PluginConfig);
        qgbPlugins->setObjectName(QString::fromUtf8("qgbPlugins"));
        vboxLayout1 = new QVBoxLayout(qgbPlugins);
        vboxLayout1->setObjectName(QString::fromUtf8("vboxLayout1"));
        qtwPlugins = new QTreeWidget(qgbPlugins);
        qtwPlugins->setObjectName(QString::fromUtf8("qtwPlugins"));
        qtwPlugins->setRootIsDecorated(false);
        qtwPlugins->setHeaderHidden(false);
        qtwPlugins->header()->setStretchLastSection(false);

        vboxLayout1->addWidget(qtwPlugins);

        hboxLayout = new QHBoxLayout();
        hboxLayout->setObjectName(QString::fromUtf8("hboxLayout"));
        qpbReload = new QPushButton(qgbPlugins);
        qpbReload->setObjectName(QString::fromUtf8("qpbReload"));

        hboxLayout->addWidget(qpbReload);

        qpbInstallPlugin = new QPushButton(qgbPlugins);
        qpbInstallPlugin->setObjectName(QString::fromUtf8("qpbInstallPlugin"));

        hboxLayout->addWidget(qpbInstallPlugin);

        spacerItem = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        hboxLayout->addItem(spacerItem);

        qpbAbout = new QPushButton(qgbPlugins);
        qpbAbout->setObjectName(QString::fromUtf8("qpbAbout"));

        hboxLayout->addWidget(qpbAbout);

        qpbConfig = new QPushButton(qgbPlugins);
        qpbConfig->setObjectName(QString::fromUtf8("qpbConfig"));

        hboxLayout->addWidget(qpbConfig);

        qpbUnload = new QPushButton(qgbPlugins);
        qpbUnload->setObjectName(QString::fromUtf8("qpbUnload"));

        hboxLayout->addWidget(qpbUnload);


        vboxLayout1->addLayout(hboxLayout);


        verticalLayout->addWidget(qgbPlugins);


        retranslateUi(PluginConfig);

        QMetaObject::connectSlotsByName(PluginConfig);
    } // setupUi

    void retranslateUi(QWidget *PluginConfig)
    {
        PluginConfig->setWindowTitle(QApplication::translate("PluginConfig", "Plugins", nullptr));
        qgbOptions->setTitle(QApplication::translate("PluginConfig", "Options", nullptr));
#ifndef QT_NO_TOOLTIP
        qcbTransmit->setToolTip(QApplication::translate("PluginConfig", "Enable plugins and transmit positional information", nullptr));
#endif // QT_NO_TOOLTIP
#ifndef QT_NO_WHATSTHIS
        qcbTransmit->setWhatsThis(QApplication::translate("PluginConfig", "This allows plugins for supported games to fetch your in-game position and transmit it with each voice packet. This enables other users to hear your voice in-game from the direction your character is in relation to their own.", nullptr));
#endif // QT_NO_WHATSTHIS
        qcbTransmit->setText(QApplication::translate("PluginConfig", "Link to Game and Transmit Position", nullptr));
        qgbPlugins->setTitle(QApplication::translate("PluginConfig", "Plugins", nullptr));
        QTreeWidgetItem *___qtreewidgetitem = qtwPlugins->headerItem();
        ___qtreewidgetitem->setText(3, QApplication::translate("PluginConfig", "KeyEvents", nullptr));
        ___qtreewidgetitem->setText(2, QApplication::translate("PluginConfig", "PA", nullptr));
        ___qtreewidgetitem->setText(1, QApplication::translate("PluginConfig", "Enable", nullptr));
        ___qtreewidgetitem->setText(0, QApplication::translate("PluginConfig", "Name", nullptr));
#ifndef QT_NO_TOOLTIP
        qpbReload->setToolTip(QApplication::translate("PluginConfig", "Reloads all plugins", nullptr));
#endif // QT_NO_TOOLTIP
#ifndef QT_NO_WHATSTHIS
        qpbReload->setWhatsThis(QApplication::translate("PluginConfig", "This rescans and reloads plugins. Use this if you just added or changed a plugin to the plugins directory.", nullptr));
#endif // QT_NO_WHATSTHIS
        qpbReload->setText(QApplication::translate("PluginConfig", "&Reload plugins", nullptr));
#ifndef QT_NO_TOOLTIP
        qpbInstallPlugin->setToolTip(QApplication::translate("PluginConfig", "Install a plugin from a local file", nullptr));
#endif // QT_NO_TOOLTIP
        qpbInstallPlugin->setText(QApplication::translate("PluginConfig", "Install plugin...", nullptr));
#ifndef QT_NO_TOOLTIP
        qpbAbout->setToolTip(QApplication::translate("PluginConfig", "Information about plugin", nullptr));
#endif // QT_NO_TOOLTIP
#ifndef QT_NO_WHATSTHIS
        qpbAbout->setWhatsThis(QApplication::translate("PluginConfig", "This shows a small information message about the plugin.", nullptr));
#endif // QT_NO_WHATSTHIS
        qpbAbout->setText(QApplication::translate("PluginConfig", "&About", nullptr));
#ifndef QT_NO_TOOLTIP
        qpbConfig->setToolTip(QApplication::translate("PluginConfig", "Show configuration page of plugin", nullptr));
#endif // QT_NO_TOOLTIP
#ifndef QT_NO_WHATSTHIS
        qpbConfig->setWhatsThis(QApplication::translate("PluginConfig", "This shows the configuration page of the plugin, if any.", nullptr));
#endif // QT_NO_WHATSTHIS
        qpbConfig->setText(QApplication::translate("PluginConfig", "&Configure", nullptr));
#ifndef QT_NO_TOOLTIP
        qpbUnload->setToolTip(QApplication::translate("PluginConfig", "Unload the currently selected plugin. This will remove it from the plugin list for the current session.", nullptr));
#endif // QT_NO_TOOLTIP
        qpbUnload->setText(QApplication::translate("PluginConfig", "Unload", nullptr));
    } // retranslateUi

};

namespace Ui {
    class PluginConfig: public Ui_PluginConfig {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_PLUGINCONFIG_H
