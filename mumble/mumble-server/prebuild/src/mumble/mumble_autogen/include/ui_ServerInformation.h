/********************************************************************************
** Form generated from reading UI file 'ServerInformation.ui'
**
** Created by: Qt User Interface Compiler version 5.12.8
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_SERVERINFORMATION_H
#define UI_SERVERINFORMATION_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QFormLayout>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QScrollArea>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QTabWidget>
#include <QtWidgets/QTableWidget>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_ServerInformation
{
public:
    QVBoxLayout *verticalLayout_3;
    QScrollArea *scrollArea;
    QWidget *scrollAreaWidgetContents;
    QVBoxLayout *verticalLayout_2;
    QGroupBox *qgbServerInformation;
    QFormLayout *formLayout;
    QLabel *label;
    QLabel *serverInfo_host;
    QLabel *label_2;
    QLabel *serverInfo_port;
    QLabel *label_3;
    QLabel *serverInfo_users;
    QLabel *label_9;
    QLabel *serverInfo_protocol;
    QLabel *label_4;
    QLabel *serverInfo_release;
    QLabel *label_5;
    QLabel *serverInfo_os;
    QGroupBox *qgbAudioBandwidth;
    QFormLayout *formLayout_4;
    QLabel *label_31;
    QLabel *audio_allowed;
    QLabel *label_32;
    QLabel *audio_current;
    QLabel *label_33;
    QLabel *audio_codec;
    QGroupBox *qgbConnectionDetails;
    QVBoxLayout *verticalLayout;
    QTabWidget *tabWidget;
    QWidget *tab_2;
    QFormLayout *formLayout_3;
    QLabel *connection_udp_encryptionLabel;
    QLabel *connection_udp_encryption;
    QLabel *connection_udp_latencyLabel;
    QLabel *connection_udp_latency;
    QGroupBox *connection_udp_statisticsGroup;
    QHBoxLayout *horizontalLayout_4;
    QTableWidget *connection_udp_statisticsTable;
    QSpacerItem *horizontalSpacer_2;
    QLabel *connection_udp_infoMessage;
    QSpacerItem *verticalSpacer_2;
    QWidget *tab;
    QFormLayout *formLayout_2;
    QLabel *label_11;
    QLabel *connection_tcp_tls;
    QLabel *label_13;
    QLabel *connection_tcp_cipher;
    QLabel *label_15;
    QLabel *connection_tcp_latency;
    QLabel *connection_tcp_forwardSecrecy;
    QSpacerItem *verticalSpacer_3;
    QSpacerItem *verticalSpacer;
    QHBoxLayout *horizontalLayout;
    QSpacerItem *horizontalSpacer;
    QPushButton *viewCertButton;
    QPushButton *okButton;

    void setupUi(QDialog *ServerInformation)
    {
        if (ServerInformation->objectName().isEmpty())
            ServerInformation->setObjectName(QString::fromUtf8("ServerInformation"));
        ServerInformation->resize(578, 585);
        verticalLayout_3 = new QVBoxLayout(ServerInformation);
        verticalLayout_3->setObjectName(QString::fromUtf8("verticalLayout_3"));
        scrollArea = new QScrollArea(ServerInformation);
        scrollArea->setObjectName(QString::fromUtf8("scrollArea"));
        scrollArea->setWidgetResizable(true);
        scrollAreaWidgetContents = new QWidget();
        scrollAreaWidgetContents->setObjectName(QString::fromUtf8("scrollAreaWidgetContents"));
        scrollAreaWidgetContents->setGeometry(QRect(0, -203, 541, 731));
        verticalLayout_2 = new QVBoxLayout(scrollAreaWidgetContents);
        verticalLayout_2->setObjectName(QString::fromUtf8("verticalLayout_2"));
        qgbServerInformation = new QGroupBox(scrollAreaWidgetContents);
        qgbServerInformation->setObjectName(QString::fromUtf8("qgbServerInformation"));
        QSizePolicy sizePolicy(QSizePolicy::Expanding, QSizePolicy::Preferred);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(qgbServerInformation->sizePolicy().hasHeightForWidth());
        qgbServerInformation->setSizePolicy(sizePolicy);
        formLayout = new QFormLayout(qgbServerInformation);
        formLayout->setObjectName(QString::fromUtf8("formLayout"));
        label = new QLabel(qgbServerInformation);
        label->setObjectName(QString::fromUtf8("label"));

        formLayout->setWidget(0, QFormLayout::LabelRole, label);

        serverInfo_host = new QLabel(qgbServerInformation);
        serverInfo_host->setObjectName(QString::fromUtf8("serverInfo_host"));
        sizePolicy.setHeightForWidth(serverInfo_host->sizePolicy().hasHeightForWidth());
        serverInfo_host->setSizePolicy(sizePolicy);
        serverInfo_host->setText(QString::fromUtf8("<host>"));
        serverInfo_host->setTextInteractionFlags(Qt::LinksAccessibleByMouse|Qt::TextSelectableByMouse);

        formLayout->setWidget(0, QFormLayout::FieldRole, serverInfo_host);

        label_2 = new QLabel(qgbServerInformation);
        label_2->setObjectName(QString::fromUtf8("label_2"));

        formLayout->setWidget(1, QFormLayout::LabelRole, label_2);

        serverInfo_port = new QLabel(qgbServerInformation);
        serverInfo_port->setObjectName(QString::fromUtf8("serverInfo_port"));
        sizePolicy.setHeightForWidth(serverInfo_port->sizePolicy().hasHeightForWidth());
        serverInfo_port->setSizePolicy(sizePolicy);
        serverInfo_port->setText(QString::fromUtf8("<port>"));
        serverInfo_port->setTextInteractionFlags(Qt::LinksAccessibleByMouse|Qt::TextSelectableByMouse);

        formLayout->setWidget(1, QFormLayout::FieldRole, serverInfo_port);

        label_3 = new QLabel(qgbServerInformation);
        label_3->setObjectName(QString::fromUtf8("label_3"));

        formLayout->setWidget(2, QFormLayout::LabelRole, label_3);

        serverInfo_users = new QLabel(qgbServerInformation);
        serverInfo_users->setObjectName(QString::fromUtf8("serverInfo_users"));
        sizePolicy.setHeightForWidth(serverInfo_users->sizePolicy().hasHeightForWidth());
        serverInfo_users->setSizePolicy(sizePolicy);
        serverInfo_users->setText(QString::fromUtf8("<users>"));
        serverInfo_users->setTextInteractionFlags(Qt::LinksAccessibleByMouse|Qt::TextSelectableByMouse);

        formLayout->setWidget(2, QFormLayout::FieldRole, serverInfo_users);

        label_9 = new QLabel(qgbServerInformation);
        label_9->setObjectName(QString::fromUtf8("label_9"));

        formLayout->setWidget(3, QFormLayout::LabelRole, label_9);

        serverInfo_protocol = new QLabel(qgbServerInformation);
        serverInfo_protocol->setObjectName(QString::fromUtf8("serverInfo_protocol"));
        sizePolicy.setHeightForWidth(serverInfo_protocol->sizePolicy().hasHeightForWidth());
        serverInfo_protocol->setSizePolicy(sizePolicy);
        serverInfo_protocol->setText(QString::fromUtf8("<protocol>"));
        serverInfo_protocol->setTextInteractionFlags(Qt::LinksAccessibleByMouse|Qt::TextSelectableByMouse);

        formLayout->setWidget(3, QFormLayout::FieldRole, serverInfo_protocol);

        label_4 = new QLabel(qgbServerInformation);
        label_4->setObjectName(QString::fromUtf8("label_4"));

        formLayout->setWidget(4, QFormLayout::LabelRole, label_4);

        serverInfo_release = new QLabel(qgbServerInformation);
        serverInfo_release->setObjectName(QString::fromUtf8("serverInfo_release"));
        sizePolicy.setHeightForWidth(serverInfo_release->sizePolicy().hasHeightForWidth());
        serverInfo_release->setSizePolicy(sizePolicy);
        serverInfo_release->setText(QString::fromUtf8("<release>"));
        serverInfo_release->setWordWrap(true);
        serverInfo_release->setTextInteractionFlags(Qt::LinksAccessibleByMouse|Qt::TextSelectableByMouse);

        formLayout->setWidget(4, QFormLayout::FieldRole, serverInfo_release);

        label_5 = new QLabel(qgbServerInformation);
        label_5->setObjectName(QString::fromUtf8("label_5"));

        formLayout->setWidget(5, QFormLayout::LabelRole, label_5);

        serverInfo_os = new QLabel(qgbServerInformation);
        serverInfo_os->setObjectName(QString::fromUtf8("serverInfo_os"));
        sizePolicy.setHeightForWidth(serverInfo_os->sizePolicy().hasHeightForWidth());
        serverInfo_os->setSizePolicy(sizePolicy);
        serverInfo_os->setText(QString::fromUtf8("<os>"));
        serverInfo_os->setWordWrap(true);
        serverInfo_os->setTextInteractionFlags(Qt::LinksAccessibleByMouse|Qt::TextSelectableByMouse);

        formLayout->setWidget(5, QFormLayout::FieldRole, serverInfo_os);


        verticalLayout_2->addWidget(qgbServerInformation);

        qgbAudioBandwidth = new QGroupBox(scrollAreaWidgetContents);
        qgbAudioBandwidth->setObjectName(QString::fromUtf8("qgbAudioBandwidth"));
        sizePolicy.setHeightForWidth(qgbAudioBandwidth->sizePolicy().hasHeightForWidth());
        qgbAudioBandwidth->setSizePolicy(sizePolicy);
        formLayout_4 = new QFormLayout(qgbAudioBandwidth);
        formLayout_4->setObjectName(QString::fromUtf8("formLayout_4"));
        label_31 = new QLabel(qgbAudioBandwidth);
        label_31->setObjectName(QString::fromUtf8("label_31"));

        formLayout_4->setWidget(1, QFormLayout::LabelRole, label_31);

        audio_allowed = new QLabel(qgbAudioBandwidth);
        audio_allowed->setObjectName(QString::fromUtf8("audio_allowed"));
        sizePolicy.setHeightForWidth(audio_allowed->sizePolicy().hasHeightForWidth());
        audio_allowed->setSizePolicy(sizePolicy);
        audio_allowed->setText(QString::fromUtf8("<allowed>"));
        audio_allowed->setWordWrap(true);
        audio_allowed->setTextInteractionFlags(Qt::LinksAccessibleByMouse|Qt::TextSelectableByMouse);

        formLayout_4->setWidget(1, QFormLayout::FieldRole, audio_allowed);

        label_32 = new QLabel(qgbAudioBandwidth);
        label_32->setObjectName(QString::fromUtf8("label_32"));

        formLayout_4->setWidget(0, QFormLayout::LabelRole, label_32);

        audio_current = new QLabel(qgbAudioBandwidth);
        audio_current->setObjectName(QString::fromUtf8("audio_current"));
        sizePolicy.setHeightForWidth(audio_current->sizePolicy().hasHeightForWidth());
        audio_current->setSizePolicy(sizePolicy);
        audio_current->setText(QString::fromUtf8("<current>"));
        audio_current->setWordWrap(true);
        audio_current->setTextInteractionFlags(Qt::LinksAccessibleByMouse|Qt::TextSelectableByMouse);

        formLayout_4->setWidget(0, QFormLayout::FieldRole, audio_current);

        label_33 = new QLabel(qgbAudioBandwidth);
        label_33->setObjectName(QString::fromUtf8("label_33"));

        formLayout_4->setWidget(2, QFormLayout::LabelRole, label_33);

        audio_codec = new QLabel(qgbAudioBandwidth);
        audio_codec->setObjectName(QString::fromUtf8("audio_codec"));
        sizePolicy.setHeightForWidth(audio_codec->sizePolicy().hasHeightForWidth());
        audio_codec->setSizePolicy(sizePolicy);
        audio_codec->setText(QString::fromUtf8("<codec>"));
        audio_codec->setWordWrap(true);
        audio_codec->setTextInteractionFlags(Qt::LinksAccessibleByMouse|Qt::TextSelectableByMouse);

        formLayout_4->setWidget(2, QFormLayout::FieldRole, audio_codec);


        verticalLayout_2->addWidget(qgbAudioBandwidth);

        qgbConnectionDetails = new QGroupBox(scrollAreaWidgetContents);
        qgbConnectionDetails->setObjectName(QString::fromUtf8("qgbConnectionDetails"));
        sizePolicy.setHeightForWidth(qgbConnectionDetails->sizePolicy().hasHeightForWidth());
        qgbConnectionDetails->setSizePolicy(sizePolicy);
        verticalLayout = new QVBoxLayout(qgbConnectionDetails);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        tabWidget = new QTabWidget(qgbConnectionDetails);
        tabWidget->setObjectName(QString::fromUtf8("tabWidget"));
        tabWidget->setTabPosition(QTabWidget::North);
        tabWidget->setTabShape(QTabWidget::Rounded);
        tab_2 = new QWidget();
        tab_2->setObjectName(QString::fromUtf8("tab_2"));
        formLayout_3 = new QFormLayout(tab_2);
        formLayout_3->setObjectName(QString::fromUtf8("formLayout_3"));
        connection_udp_encryptionLabel = new QLabel(tab_2);
        connection_udp_encryptionLabel->setObjectName(QString::fromUtf8("connection_udp_encryptionLabel"));

        formLayout_3->setWidget(1, QFormLayout::LabelRole, connection_udp_encryptionLabel);

        connection_udp_encryption = new QLabel(tab_2);
        connection_udp_encryption->setObjectName(QString::fromUtf8("connection_udp_encryption"));
        sizePolicy.setHeightForWidth(connection_udp_encryption->sizePolicy().hasHeightForWidth());
        connection_udp_encryption->setSizePolicy(sizePolicy);
        connection_udp_encryption->setText(QString::fromUtf8("<encryption>"));
        connection_udp_encryption->setTextInteractionFlags(Qt::LinksAccessibleByMouse|Qt::TextSelectableByMouse);

        formLayout_3->setWidget(1, QFormLayout::FieldRole, connection_udp_encryption);

        connection_udp_latencyLabel = new QLabel(tab_2);
        connection_udp_latencyLabel->setObjectName(QString::fromUtf8("connection_udp_latencyLabel"));

        formLayout_3->setWidget(2, QFormLayout::LabelRole, connection_udp_latencyLabel);

        connection_udp_latency = new QLabel(tab_2);
        connection_udp_latency->setObjectName(QString::fromUtf8("connection_udp_latency"));
        sizePolicy.setHeightForWidth(connection_udp_latency->sizePolicy().hasHeightForWidth());
        connection_udp_latency->setSizePolicy(sizePolicy);
        connection_udp_latency->setText(QString::fromUtf8("<latency>"));
        connection_udp_latency->setTextInteractionFlags(Qt::LinksAccessibleByMouse|Qt::TextSelectableByMouse);

        formLayout_3->setWidget(2, QFormLayout::FieldRole, connection_udp_latency);

        connection_udp_statisticsGroup = new QGroupBox(tab_2);
        connection_udp_statisticsGroup->setObjectName(QString::fromUtf8("connection_udp_statisticsGroup"));
        sizePolicy.setHeightForWidth(connection_udp_statisticsGroup->sizePolicy().hasHeightForWidth());
        connection_udp_statisticsGroup->setSizePolicy(sizePolicy);
        horizontalLayout_4 = new QHBoxLayout(connection_udp_statisticsGroup);
        horizontalLayout_4->setObjectName(QString::fromUtf8("horizontalLayout_4"));
        horizontalLayout_4->setSizeConstraint(QLayout::SetDefaultConstraint);
        connection_udp_statisticsTable = new QTableWidget(connection_udp_statisticsGroup);
        if (connection_udp_statisticsTable->columnCount() < 2)
            connection_udp_statisticsTable->setColumnCount(2);
        QTableWidgetItem *__qtablewidgetitem = new QTableWidgetItem();
        connection_udp_statisticsTable->setHorizontalHeaderItem(0, __qtablewidgetitem);
        QTableWidgetItem *__qtablewidgetitem1 = new QTableWidgetItem();
        connection_udp_statisticsTable->setHorizontalHeaderItem(1, __qtablewidgetitem1);
        if (connection_udp_statisticsTable->rowCount() < 4)
            connection_udp_statisticsTable->setRowCount(4);
        QTableWidgetItem *__qtablewidgetitem2 = new QTableWidgetItem();
        connection_udp_statisticsTable->setVerticalHeaderItem(0, __qtablewidgetitem2);
        QTableWidgetItem *__qtablewidgetitem3 = new QTableWidgetItem();
        connection_udp_statisticsTable->setVerticalHeaderItem(1, __qtablewidgetitem3);
        QTableWidgetItem *__qtablewidgetitem4 = new QTableWidgetItem();
        connection_udp_statisticsTable->setVerticalHeaderItem(2, __qtablewidgetitem4);
        QTableWidgetItem *__qtablewidgetitem5 = new QTableWidgetItem();
        connection_udp_statisticsTable->setVerticalHeaderItem(3, __qtablewidgetitem5);
        connection_udp_statisticsTable->setObjectName(QString::fromUtf8("connection_udp_statisticsTable"));
        QSizePolicy sizePolicy1(QSizePolicy::Fixed, QSizePolicy::Fixed);
        sizePolicy1.setHorizontalStretch(0);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(connection_udp_statisticsTable->sizePolicy().hasHeightForWidth());
        connection_udp_statisticsTable->setSizePolicy(sizePolicy1);
        connection_udp_statisticsTable->setVerticalScrollBarPolicy(Qt::ScrollBarAlwaysOff);
        connection_udp_statisticsTable->setHorizontalScrollBarPolicy(Qt::ScrollBarAlwaysOff);
        connection_udp_statisticsTable->setSizeAdjustPolicy(QAbstractScrollArea::AdjustToContents);
        connection_udp_statisticsTable->setEditTriggers(QAbstractItemView::NoEditTriggers);
        connection_udp_statisticsTable->setSelectionMode(QAbstractItemView::SingleSelection);
        connection_udp_statisticsTable->setVerticalScrollMode(QAbstractItemView::ScrollPerPixel);
        connection_udp_statisticsTable->setHorizontalScrollMode(QAbstractItemView::ScrollPerPixel);
        connection_udp_statisticsTable->setShowGrid(true);
        connection_udp_statisticsTable->setCornerButtonEnabled(false);

        horizontalLayout_4->addWidget(connection_udp_statisticsTable);

        horizontalSpacer_2 = new QSpacerItem(0, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_4->addItem(horizontalSpacer_2);


        formLayout_3->setWidget(4, QFormLayout::SpanningRole, connection_udp_statisticsGroup);

        connection_udp_infoMessage = new QLabel(tab_2);
        connection_udp_infoMessage->setObjectName(QString::fromUtf8("connection_udp_infoMessage"));
        connection_udp_infoMessage->setTextInteractionFlags(Qt::LinksAccessibleByMouse|Qt::TextSelectableByMouse);

        formLayout_3->setWidget(0, QFormLayout::SpanningRole, connection_udp_infoMessage);

        verticalSpacer_2 = new QSpacerItem(20, 5, QSizePolicy::Minimum, QSizePolicy::Expanding);

        formLayout_3->setItem(3, QFormLayout::FieldRole, verticalSpacer_2);

        tabWidget->addTab(tab_2, QString());
        tab = new QWidget();
        tab->setObjectName(QString::fromUtf8("tab"));
        formLayout_2 = new QFormLayout(tab);
        formLayout_2->setObjectName(QString::fromUtf8("formLayout_2"));
        label_11 = new QLabel(tab);
        label_11->setObjectName(QString::fromUtf8("label_11"));

        formLayout_2->setWidget(0, QFormLayout::LabelRole, label_11);

        connection_tcp_tls = new QLabel(tab);
        connection_tcp_tls->setObjectName(QString::fromUtf8("connection_tcp_tls"));
        sizePolicy.setHeightForWidth(connection_tcp_tls->sizePolicy().hasHeightForWidth());
        connection_tcp_tls->setSizePolicy(sizePolicy);
        connection_tcp_tls->setText(QString::fromUtf8("<TLS>"));
        connection_tcp_tls->setTextInteractionFlags(Qt::LinksAccessibleByMouse|Qt::TextSelectableByMouse);

        formLayout_2->setWidget(0, QFormLayout::FieldRole, connection_tcp_tls);

        label_13 = new QLabel(tab);
        label_13->setObjectName(QString::fromUtf8("label_13"));

        formLayout_2->setWidget(1, QFormLayout::LabelRole, label_13);

        connection_tcp_cipher = new QLabel(tab);
        connection_tcp_cipher->setObjectName(QString::fromUtf8("connection_tcp_cipher"));
        sizePolicy.setHeightForWidth(connection_tcp_cipher->sizePolicy().hasHeightForWidth());
        connection_tcp_cipher->setSizePolicy(sizePolicy);
        connection_tcp_cipher->setText(QString::fromUtf8("<Cipher>"));
        connection_tcp_cipher->setTextInteractionFlags(Qt::LinksAccessibleByMouse|Qt::TextSelectableByMouse);

        formLayout_2->setWidget(1, QFormLayout::FieldRole, connection_tcp_cipher);

        label_15 = new QLabel(tab);
        label_15->setObjectName(QString::fromUtf8("label_15"));

        formLayout_2->setWidget(2, QFormLayout::LabelRole, label_15);

        connection_tcp_latency = new QLabel(tab);
        connection_tcp_latency->setObjectName(QString::fromUtf8("connection_tcp_latency"));
        sizePolicy.setHeightForWidth(connection_tcp_latency->sizePolicy().hasHeightForWidth());
        connection_tcp_latency->setSizePolicy(sizePolicy);
        connection_tcp_latency->setText(QString::fromUtf8("<latency>"));
        connection_tcp_latency->setTextInteractionFlags(Qt::LinksAccessibleByMouse|Qt::TextSelectableByMouse);

        formLayout_2->setWidget(2, QFormLayout::FieldRole, connection_tcp_latency);

        connection_tcp_forwardSecrecy = new QLabel(tab);
        connection_tcp_forwardSecrecy->setObjectName(QString::fromUtf8("connection_tcp_forwardSecrecy"));
        connection_tcp_forwardSecrecy->setWordWrap(true);
        connection_tcp_forwardSecrecy->setTextInteractionFlags(Qt::LinksAccessibleByMouse|Qt::TextSelectableByMouse);

        formLayout_2->setWidget(4, QFormLayout::SpanningRole, connection_tcp_forwardSecrecy);

        verticalSpacer_3 = new QSpacerItem(20, 5, QSizePolicy::Minimum, QSizePolicy::Maximum);

        formLayout_2->setItem(3, QFormLayout::SpanningRole, verticalSpacer_3);

        tabWidget->addTab(tab, QString());

        verticalLayout->addWidget(tabWidget);


        verticalLayout_2->addWidget(qgbConnectionDetails);

        verticalSpacer = new QSpacerItem(20, 0, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout_2->addItem(verticalSpacer);

        scrollArea->setWidget(scrollAreaWidgetContents);

        verticalLayout_3->addWidget(scrollArea);

        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout->addItem(horizontalSpacer);

        viewCertButton = new QPushButton(ServerInformation);
        viewCertButton->setObjectName(QString::fromUtf8("viewCertButton"));

        horizontalLayout->addWidget(viewCertButton);

        okButton = new QPushButton(ServerInformation);
        okButton->setObjectName(QString::fromUtf8("okButton"));

        horizontalLayout->addWidget(okButton);


        verticalLayout_3->addLayout(horizontalLayout);


        retranslateUi(ServerInformation);

        tabWidget->setCurrentIndex(0);


        QMetaObject::connectSlotsByName(ServerInformation);
    } // setupUi

    void retranslateUi(QDialog *ServerInformation)
    {
        ServerInformation->setWindowTitle(QApplication::translate("ServerInformation", "Server information", nullptr));
        qgbServerInformation->setTitle(QApplication::translate("ServerInformation", "Server Information", nullptr));
        label->setText(QApplication::translate("ServerInformation", "<b>Host:</b>", nullptr));
        label_2->setText(QApplication::translate("ServerInformation", "<html><head/><body><p><span style=\" font-weight:600;\">Port:</span></p></body></html>", nullptr));
        label_3->setText(QApplication::translate("ServerInformation", "<b>Users</b>:", nullptr));
        label_9->setText(QApplication::translate("ServerInformation", "<html><head/><body><p><span style=\" font-weight:600;\">Protocol:</span></p></body></html>", nullptr));
        label_4->setText(QApplication::translate("ServerInformation", "<html><head/><body><p><span style=\" font-weight:600;\">Release:</span></p></body></html>", nullptr));
        label_5->setText(QApplication::translate("ServerInformation", "<html><head/><body><p><span style=\" font-weight:600;\">OS:</span></p></body></html>", nullptr));
        qgbAudioBandwidth->setTitle(QApplication::translate("ServerInformation", "Audio", nullptr));
        label_31->setText(QApplication::translate("ServerInformation", "<html><head/><body><p><span style=\" font-weight:600;\">Allowed:</span></p></body></html>", nullptr));
        label_32->setText(QApplication::translate("ServerInformation", "<b>Current:</b>", nullptr));
        label_33->setText(QApplication::translate("ServerInformation", "<b>Codec:</b>", nullptr));
        qgbConnectionDetails->setTitle(QApplication::translate("ServerInformation", "Connection details", nullptr));
        connection_udp_encryptionLabel->setText(QApplication::translate("ServerInformation", "<b>Encryption:</b>", nullptr));
        connection_udp_latencyLabel->setText(QApplication::translate("ServerInformation", "<b>Avg. latency:</b>", nullptr));
        connection_udp_statisticsGroup->setTitle(QApplication::translate("ServerInformation", "Statistics", nullptr));
        QTableWidgetItem *___qtablewidgetitem = connection_udp_statisticsTable->horizontalHeaderItem(0);
        ___qtablewidgetitem->setText(QApplication::translate("ServerInformation", "Outgoing", nullptr));
        QTableWidgetItem *___qtablewidgetitem1 = connection_udp_statisticsTable->horizontalHeaderItem(1);
        ___qtablewidgetitem1->setText(QApplication::translate("ServerInformation", "Incoming", nullptr));
        QTableWidgetItem *___qtablewidgetitem2 = connection_udp_statisticsTable->verticalHeaderItem(0);
        ___qtablewidgetitem2->setText(QApplication::translate("ServerInformation", "Good", nullptr));
        QTableWidgetItem *___qtablewidgetitem3 = connection_udp_statisticsTable->verticalHeaderItem(1);
        ___qtablewidgetitem3->setText(QApplication::translate("ServerInformation", "Late", nullptr));
        QTableWidgetItem *___qtablewidgetitem4 = connection_udp_statisticsTable->verticalHeaderItem(2);
        ___qtablewidgetitem4->setText(QApplication::translate("ServerInformation", "Lost", nullptr));
        QTableWidgetItem *___qtablewidgetitem5 = connection_udp_statisticsTable->verticalHeaderItem(3);
        ___qtablewidgetitem5->setText(QApplication::translate("ServerInformation", "Resync", nullptr));
        connection_udp_infoMessage->setText(QApplication::translate("ServerInformation", "Voice packets is currently sent over TCP.", nullptr));
        tabWidget->setTabText(tabWidget->indexOf(tab_2), QApplication::translate("ServerInformation", "UDP (Voice)", nullptr));
        label_11->setText(QApplication::translate("ServerInformation", "<b>TLS version:</b>", nullptr));
        label_13->setText(QApplication::translate("ServerInformation", "<b>Cipher suite:</b>", nullptr));
        label_15->setText(QApplication::translate("ServerInformation", "<b>Avg. latency:</b>", nullptr));
        connection_tcp_forwardSecrecy->setText(QApplication::translate("ServerInformation", "<forward secrecy>", nullptr));
        tabWidget->setTabText(tabWidget->indexOf(tab), QApplication::translate("ServerInformation", "TCP (Control)", nullptr));
        viewCertButton->setText(QApplication::translate("ServerInformation", "&View certificate", nullptr));
        okButton->setText(QApplication::translate("ServerInformation", "&Ok", nullptr));
    } // retranslateUi

};

namespace Ui {
    class ServerInformation: public Ui_ServerInformation {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_SERVERINFORMATION_H
