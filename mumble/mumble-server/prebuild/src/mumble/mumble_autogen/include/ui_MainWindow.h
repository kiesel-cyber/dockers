/********************************************************************************
** Form generated from reading UI file 'MainWindow.ui'
**
** Created by: Qt User Interface Compiler version 5.12.8
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDockWidget>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenu>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QToolBar>
#include "CustomElements.h"
#include "UserView.h"

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QAction *qaQuit;
    QAction *qaHide;
    QAction *qaServerConnect;
    QAction *qaServerDisconnect;
    QAction *qaServerBanList;
    QAction *qaServerInformation;
    QAction *qaUserKick;
    QAction *qaUserMute;
    QAction *qaUserBan;
    QAction *qaUserDeaf;
    QAction *qaUserLocalIgnore;
    QAction *qaUserLocalVolume;
    QAction *qaUserLocalMute;
    QAction *qaUserTextMessage;
    QAction *qaUserLocalNickname;
    QAction *qaChannelAdd;
    QAction *qaChannelRemove;
    QAction *qaChannelACL;
    QAction *qaChannelLink;
    QAction *qaChannelUnlink;
    QAction *qaChannelUnlinkAll;
    QAction *qaAudioReset;
    QAction *qaAudioMute;
    QAction *qaAudioDeaf;
    QAction *qaAudioTTS;
    QAction *qaAudioStats;
    QAction *qaAudioUnlink;
    QAction *qaConfigDialog;
    QAction *qaFilterToggle;
    QAction *qaAudioWizard;
    QAction *qaDeveloperConsole;
    QAction *qaPositionalAudioViewer;
    QAction *qaHelpWhatsThis;
    QAction *qaHelpAbout;
    QAction *qaHelpAboutSpeex;
    QAction *qaHelpAboutQt;
    QAction *qaHelpVersionCheck;
    QAction *qaChannelSendMessage;
    QAction *qaChannelCopyURL;
    QAction *qaConfigMinimal;
    QAction *qaConfigHideFrame;
    QAction *qaConfigCert;
    QAction *qaUserRegister;
    QAction *qaUserFriendAdd;
    QAction *qaUserFriendRemove;
    QAction *qaUserFriendUpdate;
    QAction *qaServerUserList;
    QAction *qaServerTexture;
    QAction *qaServerTokens;
    QAction *qaServerTextureRemove;
    QAction *qaUserCommentReset;
    QAction *qaUserTextureReset;
    QAction *qaChannelJoin;
    QAction *qaChannelFilter;
    QAction *qaUserCommentView;
    QAction *qaUserInformation;
    QAction *qaSelfComment;
    QAction *qaSelfRegister;
    QAction *qaUserPrioritySpeaker;
    QAction *qaSelfPrioritySpeaker;
    QAction *qaRecording;
    QAction *qaShow;
    QAction *qaChannelListen;
    QAction *qaListenerLocalVolume;
    QAction *qaTalkingUIToggle;
    QAction *qaUserJoin;
    QAction *qaUserLocalIgnoreTTS;
    QAction *qaSearch;
    UserView *qtvUsers;
    QMenuBar *menubar;
    QMenu *qmConfig;
    QMenu *qmHelp;
    QMenu *qmServer;
    QMenu *qmSelf;
    QDockWidget *qdwLog;
    LogTextBrowser *qteLog;
    QDockWidget *qdwChat;
    ChatbarTextEdit *qteChat;
    QToolBar *qtIconToolbar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName(QString::fromUtf8("MainWindow"));
        MainWindow->resize(735, 435);
        MainWindow->setDockOptions(QMainWindow::AllowNestedDocks|QMainWindow::AnimatedDocks);
        MainWindow->setUnifiedTitleAndToolBarOnMac(true);
        qaQuit = new QAction(MainWindow);
        qaQuit->setObjectName(QString::fromUtf8("qaQuit"));
        qaHide = new QAction(MainWindow);
        qaHide->setObjectName(QString::fromUtf8("qaHide"));
        qaServerConnect = new QAction(MainWindow);
        qaServerConnect->setObjectName(QString::fromUtf8("qaServerConnect"));
        QIcon icon;
        icon.addFile(QString::fromUtf8("skin:categories/applications-internet.svg"), QSize(), QIcon::Normal, QIcon::Off);
        qaServerConnect->setIcon(icon);
        qaServerConnect->setIconVisibleInMenu(false);
        qaServerDisconnect = new QAction(MainWindow);
        qaServerDisconnect->setObjectName(QString::fromUtf8("qaServerDisconnect"));
        qaServerDisconnect->setEnabled(false);
        qaServerBanList = new QAction(MainWindow);
        qaServerBanList->setObjectName(QString::fromUtf8("qaServerBanList"));
        qaServerBanList->setEnabled(false);
        qaServerInformation = new QAction(MainWindow);
        qaServerInformation->setObjectName(QString::fromUtf8("qaServerInformation"));
        qaServerInformation->setEnabled(false);
        QIcon icon1;
        icon1.addFile(QString::fromUtf8("skin:Information_icon.svg"), QSize(), QIcon::Normal, QIcon::Off);
        qaServerInformation->setIcon(icon1);
        qaServerInformation->setIconVisibleInMenu(false);
        qaUserKick = new QAction(MainWindow);
        qaUserKick->setObjectName(QString::fromUtf8("qaUserKick"));
        qaUserMute = new QAction(MainWindow);
        qaUserMute->setObjectName(QString::fromUtf8("qaUserMute"));
        qaUserMute->setCheckable(true);
        qaUserBan = new QAction(MainWindow);
        qaUserBan->setObjectName(QString::fromUtf8("qaUserBan"));
        qaUserDeaf = new QAction(MainWindow);
        qaUserDeaf->setObjectName(QString::fromUtf8("qaUserDeaf"));
        qaUserDeaf->setCheckable(true);
        qaUserLocalIgnore = new QAction(MainWindow);
        qaUserLocalIgnore->setObjectName(QString::fromUtf8("qaUserLocalIgnore"));
        qaUserLocalIgnore->setCheckable(true);
        qaUserLocalVolume = new QAction(MainWindow);
        qaUserLocalVolume->setObjectName(QString::fromUtf8("qaUserLocalVolume"));
        qaUserLocalMute = new QAction(MainWindow);
        qaUserLocalMute->setObjectName(QString::fromUtf8("qaUserLocalMute"));
        qaUserLocalMute->setCheckable(true);
        qaUserTextMessage = new QAction(MainWindow);
        qaUserTextMessage->setObjectName(QString::fromUtf8("qaUserTextMessage"));
        qaUserLocalNickname = new QAction(MainWindow);
        qaUserLocalNickname->setObjectName(QString::fromUtf8("qaUserLocalNickname"));
        qaChannelAdd = new QAction(MainWindow);
        qaChannelAdd->setObjectName(QString::fromUtf8("qaChannelAdd"));
        qaChannelRemove = new QAction(MainWindow);
        qaChannelRemove->setObjectName(QString::fromUtf8("qaChannelRemove"));
        qaChannelACL = new QAction(MainWindow);
        qaChannelACL->setObjectName(QString::fromUtf8("qaChannelACL"));
        qaChannelLink = new QAction(MainWindow);
        qaChannelLink->setObjectName(QString::fromUtf8("qaChannelLink"));
        qaChannelUnlink = new QAction(MainWindow);
        qaChannelUnlink->setObjectName(QString::fromUtf8("qaChannelUnlink"));
        qaChannelUnlinkAll = new QAction(MainWindow);
        qaChannelUnlinkAll->setObjectName(QString::fromUtf8("qaChannelUnlinkAll"));
        qaAudioReset = new QAction(MainWindow);
        qaAudioReset->setObjectName(QString::fromUtf8("qaAudioReset"));
        qaAudioMute = new QAction(MainWindow);
        qaAudioMute->setObjectName(QString::fromUtf8("qaAudioMute"));
        qaAudioMute->setCheckable(true);
        QIcon icon2;
        icon2.addFile(QString::fromUtf8("skin:actions/audio-input-microphone.svg"), QSize(), QIcon::Normal, QIcon::Off);
        icon2.addFile(QString::fromUtf8("skin:actions/audio-input-microphone-muted.svg"), QSize(), QIcon::Normal, QIcon::On);
        icon2.addFile(QString::fromUtf8("skin:actions/audio-input-microphone-muted.svg"), QSize(), QIcon::Active, QIcon::On);
        qaAudioMute->setIcon(icon2);
        qaAudioMute->setIconVisibleInMenu(false);
        qaAudioDeaf = new QAction(MainWindow);
        qaAudioDeaf->setObjectName(QString::fromUtf8("qaAudioDeaf"));
        qaAudioDeaf->setCheckable(true);
        QIcon icon3;
        icon3.addFile(QString::fromUtf8("skin:self_undeafened.svg"), QSize(), QIcon::Normal, QIcon::Off);
        icon3.addFile(QString::fromUtf8("skin:deafened_self.svg"), QSize(), QIcon::Normal, QIcon::On);
        icon3.addFile(QString::fromUtf8("skin:deafened_self.svg"), QSize(), QIcon::Active, QIcon::On);
        qaAudioDeaf->setIcon(icon3);
        qaAudioDeaf->setIconVisibleInMenu(false);
        qaAudioTTS = new QAction(MainWindow);
        qaAudioTTS->setObjectName(QString::fromUtf8("qaAudioTTS"));
        qaAudioTTS->setCheckable(true);
        qaAudioStats = new QAction(MainWindow);
        qaAudioStats->setObjectName(QString::fromUtf8("qaAudioStats"));
        qaAudioUnlink = new QAction(MainWindow);
        qaAudioUnlink->setObjectName(QString::fromUtf8("qaAudioUnlink"));
        qaConfigDialog = new QAction(MainWindow);
        qaConfigDialog->setObjectName(QString::fromUtf8("qaConfigDialog"));
        QIcon icon4;
        icon4.addFile(QString::fromUtf8("skin:config_basic.png"), QSize(), QIcon::Normal, QIcon::Off);
        qaConfigDialog->setIcon(icon4);
        qaConfigDialog->setMenuRole(QAction::PreferencesRole);
        qaConfigDialog->setIconVisibleInMenu(false);
        qaFilterToggle = new QAction(MainWindow);
        qaFilterToggle->setObjectName(QString::fromUtf8("qaFilterToggle"));
        qaFilterToggle->setCheckable(true);
        QIcon icon5;
        icon5.addFile(QString::fromUtf8("skin:filter_off.svg"), QSize(), QIcon::Normal, QIcon::Off);
        icon5.addFile(QString::fromUtf8("skin:filter_on.svg"), QSize(), QIcon::Normal, QIcon::On);
        icon5.addFile(QString::fromUtf8("skin:filter_on.svg"), QSize(), QIcon::Active, QIcon::On);
        qaFilterToggle->setIcon(icon5);
        qaFilterToggle->setIconVisibleInMenu(false);
        qaAudioWizard = new QAction(MainWindow);
        qaAudioWizard->setObjectName(QString::fromUtf8("qaAudioWizard"));
        qaDeveloperConsole = new QAction(MainWindow);
        qaDeveloperConsole->setObjectName(QString::fromUtf8("qaDeveloperConsole"));
        qaPositionalAudioViewer = new QAction(MainWindow);
        qaPositionalAudioViewer->setObjectName(QString::fromUtf8("qaPositionalAudioViewer"));
        qaHelpWhatsThis = new QAction(MainWindow);
        qaHelpWhatsThis->setObjectName(QString::fromUtf8("qaHelpWhatsThis"));
        qaHelpAbout = new QAction(MainWindow);
        qaHelpAbout->setObjectName(QString::fromUtf8("qaHelpAbout"));
        qaHelpAbout->setMenuRole(QAction::AboutRole);
        qaHelpAboutSpeex = new QAction(MainWindow);
        qaHelpAboutSpeex->setObjectName(QString::fromUtf8("qaHelpAboutSpeex"));
        qaHelpAboutSpeex->setMenuRole(QAction::ApplicationSpecificRole);
        qaHelpAboutQt = new QAction(MainWindow);
        qaHelpAboutQt->setObjectName(QString::fromUtf8("qaHelpAboutQt"));
        qaHelpAboutQt->setMenuRole(QAction::AboutQtRole);
        qaHelpVersionCheck = new QAction(MainWindow);
        qaHelpVersionCheck->setObjectName(QString::fromUtf8("qaHelpVersionCheck"));
        qaChannelSendMessage = new QAction(MainWindow);
        qaChannelSendMessage->setObjectName(QString::fromUtf8("qaChannelSendMessage"));
        qaChannelCopyURL = new QAction(MainWindow);
        qaChannelCopyURL->setObjectName(QString::fromUtf8("qaChannelCopyURL"));
        qaConfigMinimal = new QAction(MainWindow);
        qaConfigMinimal->setObjectName(QString::fromUtf8("qaConfigMinimal"));
        qaConfigMinimal->setCheckable(true);
        qaConfigHideFrame = new QAction(MainWindow);
        qaConfigHideFrame->setObjectName(QString::fromUtf8("qaConfigHideFrame"));
        qaConfigHideFrame->setCheckable(true);
        qaConfigCert = new QAction(MainWindow);
        qaConfigCert->setObjectName(QString::fromUtf8("qaConfigCert"));
        qaUserRegister = new QAction(MainWindow);
        qaUserRegister->setObjectName(QString::fromUtf8("qaUserRegister"));
        qaUserFriendAdd = new QAction(MainWindow);
        qaUserFriendAdd->setObjectName(QString::fromUtf8("qaUserFriendAdd"));
        qaUserFriendRemove = new QAction(MainWindow);
        qaUserFriendRemove->setObjectName(QString::fromUtf8("qaUserFriendRemove"));
        qaUserFriendUpdate = new QAction(MainWindow);
        qaUserFriendUpdate->setObjectName(QString::fromUtf8("qaUserFriendUpdate"));
        qaServerUserList = new QAction(MainWindow);
        qaServerUserList->setObjectName(QString::fromUtf8("qaServerUserList"));
        qaServerTexture = new QAction(MainWindow);
        qaServerTexture->setObjectName(QString::fromUtf8("qaServerTexture"));
        qaServerTokens = new QAction(MainWindow);
        qaServerTokens->setObjectName(QString::fromUtf8("qaServerTokens"));
        qaServerTextureRemove = new QAction(MainWindow);
        qaServerTextureRemove->setObjectName(QString::fromUtf8("qaServerTextureRemove"));
        qaUserCommentReset = new QAction(MainWindow);
        qaUserCommentReset->setObjectName(QString::fromUtf8("qaUserCommentReset"));
        qaUserTextureReset = new QAction(MainWindow);
        qaUserTextureReset->setObjectName(QString::fromUtf8("qaUserTextureReset"));
        qaChannelJoin = new QAction(MainWindow);
        qaChannelJoin->setObjectName(QString::fromUtf8("qaChannelJoin"));
        qaChannelFilter = new QAction(MainWindow);
        qaChannelFilter->setObjectName(QString::fromUtf8("qaChannelFilter"));
        qaChannelFilter->setCheckable(true);
        qaUserCommentView = new QAction(MainWindow);
        qaUserCommentView->setObjectName(QString::fromUtf8("qaUserCommentView"));
        qaUserInformation = new QAction(MainWindow);
        qaUserInformation->setObjectName(QString::fromUtf8("qaUserInformation"));
        qaSelfComment = new QAction(MainWindow);
        qaSelfComment->setObjectName(QString::fromUtf8("qaSelfComment"));
        QIcon icon6;
        icon6.addFile(QString::fromUtf8("skin:self_comment.svg"), QSize(), QIcon::Normal, QIcon::Off);
        qaSelfComment->setIcon(icon6);
        qaSelfComment->setIconVisibleInMenu(false);
        qaSelfRegister = new QAction(MainWindow);
        qaSelfRegister->setObjectName(QString::fromUtf8("qaSelfRegister"));
        qaUserPrioritySpeaker = new QAction(MainWindow);
        qaUserPrioritySpeaker->setObjectName(QString::fromUtf8("qaUserPrioritySpeaker"));
        qaUserPrioritySpeaker->setCheckable(true);
        qaSelfPrioritySpeaker = new QAction(MainWindow);
        qaSelfPrioritySpeaker->setObjectName(QString::fromUtf8("qaSelfPrioritySpeaker"));
        qaSelfPrioritySpeaker->setCheckable(true);
        qaRecording = new QAction(MainWindow);
        qaRecording->setObjectName(QString::fromUtf8("qaRecording"));
        QIcon icon7;
        icon7.addFile(QString::fromUtf8("skin:actions/media-record.svg"), QSize(), QIcon::Normal, QIcon::Off);
        qaRecording->setIcon(icon7);
        qaRecording->setIconVisibleInMenu(false);
        qaShow = new QAction(MainWindow);
        qaShow->setObjectName(QString::fromUtf8("qaShow"));
        qaChannelListen = new QAction(MainWindow);
        qaChannelListen->setObjectName(QString::fromUtf8("qaChannelListen"));
        qaChannelListen->setCheckable(true);
        qaListenerLocalVolume = new QAction(MainWindow);
        qaListenerLocalVolume->setObjectName(QString::fromUtf8("qaListenerLocalVolume"));
        qaTalkingUIToggle = new QAction(MainWindow);
        qaTalkingUIToggle->setObjectName(QString::fromUtf8("qaTalkingUIToggle"));
        qaTalkingUIToggle->setCheckable(true);
        qaUserJoin = new QAction(MainWindow);
        qaUserJoin->setObjectName(QString::fromUtf8("qaUserJoin"));
        qaUserLocalIgnoreTTS = new QAction(MainWindow);
        qaUserLocalIgnoreTTS->setObjectName(QString::fromUtf8("qaUserLocalIgnoreTTS"));
        qaUserLocalIgnoreTTS->setCheckable(true);
        qaSearch = new QAction(MainWindow);
        qaSearch->setObjectName(QString::fromUtf8("qaSearch"));
        QIcon icon8;
        icon8.addFile(QString::fromUtf8("skin:magnifier.svg"), QSize(), QIcon::Normal, QIcon::Off);
        qaSearch->setIcon(icon8);
        qtvUsers = new UserView(MainWindow);
        qtvUsers->setObjectName(QString::fromUtf8("qtvUsers"));
        qtvUsers->setContextMenuPolicy(Qt::CustomContextMenu);
        qtvUsers->setAcceptDrops(true);
        qtvUsers->setDragEnabled(true);
        qtvUsers->setRootIsDecorated(false);
        qtvUsers->setUniformRowHeights(true);
        qtvUsers->setHeaderHidden(true);
        MainWindow->setCentralWidget(qtvUsers);
        qtvUsers->header()->setVisible(false);
        menubar = new QMenuBar(MainWindow);
        menubar->setObjectName(QString::fromUtf8("menubar"));
        menubar->setGeometry(QRect(0, 0, 735, 32));
        qmConfig = new QMenu(menubar);
        qmConfig->setObjectName(QString::fromUtf8("qmConfig"));
        qmHelp = new QMenu(menubar);
        qmHelp->setObjectName(QString::fromUtf8("qmHelp"));
        qmServer = new QMenu(menubar);
        qmServer->setObjectName(QString::fromUtf8("qmServer"));
        qmSelf = new QMenu(menubar);
        qmSelf->setObjectName(QString::fromUtf8("qmSelf"));
        MainWindow->setMenuBar(menubar);
        qdwLog = new QDockWidget(MainWindow);
        qdwLog->setObjectName(QString::fromUtf8("qdwLog"));
        qdwLog->setMinimumSize(QSize(250, 121));
        qdwLog->setFeatures(QDockWidget::DockWidgetClosable|QDockWidget::DockWidgetMovable);
        qteLog = new LogTextBrowser();
        qteLog->setObjectName(QString::fromUtf8("qteLog"));
        qteLog->setContextMenuPolicy(Qt::CustomContextMenu);
        qteLog->setOpenLinks(false);
        qdwLog->setWidget(qteLog);
        MainWindow->addDockWidget(static_cast<Qt::DockWidgetArea>(1), qdwLog);
        qdwChat = new QDockWidget(MainWindow);
        qdwChat->setObjectName(QString::fromUtf8("qdwChat"));
        QSizePolicy sizePolicy(QSizePolicy::Preferred, QSizePolicy::Preferred);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(qdwChat->sizePolicy().hasHeightForWidth());
        qdwChat->setSizePolicy(sizePolicy);
        qdwChat->setFeatures(QDockWidget::DockWidgetClosable|QDockWidget::DockWidgetMovable);
        qteChat = new ChatbarTextEdit();
        qteChat->setObjectName(QString::fromUtf8("qteChat"));
        QSizePolicy sizePolicy1(QSizePolicy::Expanding, QSizePolicy::MinimumExpanding);
        sizePolicy1.setHorizontalStretch(0);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(qteChat->sizePolicy().hasHeightForWidth());
        qteChat->setSizePolicy(sizePolicy1);
        qteChat->setMaximumSize(QSize(16777215, 16777215));
        qteChat->setAcceptRichText(false);
        qdwChat->setWidget(qteChat);
        MainWindow->addDockWidget(static_cast<Qt::DockWidgetArea>(1), qdwChat);
        qtIconToolbar = new QToolBar(MainWindow);
        qtIconToolbar->setObjectName(QString::fromUtf8("qtIconToolbar"));
        MainWindow->addToolBar(Qt::TopToolBarArea, qtIconToolbar);

        menubar->addAction(qmServer->menuAction());
        menubar->addAction(qmSelf->menuAction());
        menubar->addAction(qmConfig->menuAction());
        menubar->addAction(qmHelp->menuAction());
        qmConfig->addAction(qaConfigDialog);
        qmHelp->addAction(qaHelpWhatsThis);
        qmHelp->addSeparator();
        qmHelp->addAction(qaHelpAbout);
        qmHelp->addAction(qaHelpAboutQt);
        qmHelp->addSeparator();
        qmHelp->addAction(qaHelpVersionCheck);
        qmSelf->addAction(qaAudioMute);
        qmSelf->addAction(qaAudioDeaf);
        qmSelf->addAction(qaSelfPrioritySpeaker);
        qmSelf->addSeparator();
        qmSelf->addAction(qaRecording);
        qmSelf->addSeparator();
        qmSelf->addAction(qaSelfComment);
        qmSelf->addAction(qaServerTexture);
        qmSelf->addAction(qaServerTextureRemove);
        qmSelf->addSeparator();
        qmSelf->addAction(qaSelfRegister);
        qmSelf->addAction(qaAudioStats);
        qtIconToolbar->addAction(qaServerConnect);
        qtIconToolbar->addAction(qaServerInformation);
        qtIconToolbar->addSeparator();
        qtIconToolbar->addAction(qaAudioMute);
        qtIconToolbar->addAction(qaAudioDeaf);
        qtIconToolbar->addAction(qaRecording);
        qtIconToolbar->addSeparator();
        qtIconToolbar->addAction(qaSelfComment);
        qtIconToolbar->addSeparator();
        qtIconToolbar->addAction(qaConfigDialog);
        qtIconToolbar->addSeparator();
        qtIconToolbar->addAction(qaFilterToggle);
        qtIconToolbar->addSeparator();
        qtIconToolbar->addAction(qaSearch);

        retranslateUi(MainWindow);

        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QApplication::translate("MainWindow", "Mumble", nullptr));
        qaQuit->setText(QApplication::translate("MainWindow", "&Quit Mumble", nullptr));
#ifndef QT_NO_TOOLTIP
        qaQuit->setToolTip(QApplication::translate("MainWindow", "Closes the program", nullptr));
#endif // QT_NO_TOOLTIP
#ifndef QT_NO_WHATSTHIS
        qaQuit->setWhatsThis(QApplication::translate("MainWindow", "Exits the application.", nullptr));
#endif // QT_NO_WHATSTHIS
#ifndef QT_NO_SHORTCUT
        qaQuit->setShortcut(QApplication::translate("MainWindow", "Ctrl+Q", nullptr));
#endif // QT_NO_SHORTCUT
        qaHide->setText(QApplication::translate("MainWindow", "&Hide Mumble", nullptr));
#ifndef QT_NO_TOOLTIP
        qaHide->setToolTip(QApplication::translate("MainWindow", "Hides the main Mumble window.", nullptr));
#endif // QT_NO_TOOLTIP
#ifndef QT_NO_WHATSTHIS
        qaHide->setWhatsThis(QApplication::translate("MainWindow", "Hides the main Mumble window. Restore by clicking on the tray icon or starting Mumble again.", nullptr));
#endif // QT_NO_WHATSTHIS
        qaServerConnect->setText(QApplication::translate("MainWindow", "&Connect...", nullptr));
#ifndef QT_NO_TOOLTIP
        qaServerConnect->setToolTip(QApplication::translate("MainWindow", "Open the server connection dialog", nullptr));
#endif // QT_NO_TOOLTIP
#ifndef QT_NO_WHATSTHIS
        qaServerConnect->setWhatsThis(QApplication::translate("MainWindow", "Shows a dialog of registered servers, and also allows quick-connect.", nullptr));
#endif // QT_NO_WHATSTHIS
        qaServerDisconnect->setText(QApplication::translate("MainWindow", "&Disconnect", nullptr));
#ifndef QT_NO_TOOLTIP
        qaServerDisconnect->setToolTip(QApplication::translate("MainWindow", "Disconnect from server", nullptr));
#endif // QT_NO_TOOLTIP
#ifndef QT_NO_WHATSTHIS
        qaServerDisconnect->setWhatsThis(QApplication::translate("MainWindow", "Disconnects you from the server.", nullptr));
#endif // QT_NO_WHATSTHIS
        qaServerBanList->setText(QApplication::translate("MainWindow", "&Ban list...", nullptr));
#ifndef QT_NO_TOOLTIP
        qaServerBanList->setToolTip(QApplication::translate("MainWindow", "Edit ban list on server", nullptr));
#endif // QT_NO_TOOLTIP
#ifndef QT_NO_WHATSTHIS
        qaServerBanList->setWhatsThis(QApplication::translate("MainWindow", "This lets you edit the server-side IP ban list.", nullptr));
#endif // QT_NO_WHATSTHIS
        qaServerInformation->setText(QApplication::translate("MainWindow", "&Information...", nullptr));
#ifndef QT_NO_TOOLTIP
        qaServerInformation->setToolTip(QApplication::translate("MainWindow", "Show information about the server connection", nullptr));
#endif // QT_NO_TOOLTIP
#ifndef QT_NO_WHATSTHIS
        qaServerInformation->setWhatsThis(QApplication::translate("MainWindow", "This will show extended information about the connection to the server.", nullptr));
#endif // QT_NO_WHATSTHIS
        qaUserKick->setText(QApplication::translate("MainWindow", "&Kick...", nullptr));
#ifndef QT_NO_TOOLTIP
        qaUserKick->setToolTip(QApplication::translate("MainWindow", "Kick user (with reason)", nullptr));
#endif // QT_NO_TOOLTIP
#ifndef QT_NO_WHATSTHIS
        qaUserKick->setWhatsThis(QApplication::translate("MainWindow", "Kick selected user off server. You'll be asked to specify a reason.", nullptr));
#endif // QT_NO_WHATSTHIS
        qaUserMute->setText(QApplication::translate("MainWindow", "&Mute", nullptr));
#ifndef QT_NO_TOOLTIP
        qaUserMute->setToolTip(QApplication::translate("MainWindow", "Mute user", nullptr));
#endif // QT_NO_TOOLTIP
#ifndef QT_NO_WHATSTHIS
        qaUserMute->setWhatsThis(QApplication::translate("MainWindow", "Mute or unmute user on server. Unmuting a deafened user will also undeafen them.", nullptr));
#endif // QT_NO_WHATSTHIS
        qaUserBan->setText(QApplication::translate("MainWindow", "&Ban...", nullptr));
#ifndef QT_NO_TOOLTIP
        qaUserBan->setToolTip(QApplication::translate("MainWindow", "Kick and ban user (with reason)", nullptr));
#endif // QT_NO_TOOLTIP
#ifndef QT_NO_WHATSTHIS
        qaUserBan->setWhatsThis(QApplication::translate("MainWindow", "Kick and ban selected user from server. You'll be asked to specify a reason.", nullptr));
#endif // QT_NO_WHATSTHIS
        qaUserDeaf->setText(QApplication::translate("MainWindow", "&Deafen", nullptr));
#ifndef QT_NO_TOOLTIP
        qaUserDeaf->setToolTip(QApplication::translate("MainWindow", "Deafen user", nullptr));
#endif // QT_NO_TOOLTIP
#ifndef QT_NO_WHATSTHIS
        qaUserDeaf->setWhatsThis(QApplication::translate("MainWindow", "Deafen or undeafen user on server. Deafening a user will also mute them.", nullptr));
#endif // QT_NO_WHATSTHIS
        qaUserLocalIgnore->setText(QApplication::translate("MainWindow", "Ignore Messages", nullptr));
#ifndef QT_NO_TOOLTIP
        qaUserLocalIgnore->setToolTip(QApplication::translate("MainWindow", "Locally ignore user's text chat messages.", nullptr));
#endif // QT_NO_TOOLTIP
#ifndef QT_NO_WHATSTHIS
        qaUserLocalIgnore->setWhatsThis(QApplication::translate("MainWindow", "Silently drops all text messages from the user.", nullptr));
#endif // QT_NO_WHATSTHIS
        qaUserLocalVolume->setText(QApplication::translate("MainWindow", "Local Volume Adjustment...", nullptr));
#ifndef QT_NO_TOOLTIP
        qaUserLocalVolume->setToolTip(QApplication::translate("MainWindow", "Locally adjust the user's speech volume.", nullptr));
#endif // QT_NO_TOOLTIP
#ifndef QT_NO_WHATSTHIS
        qaUserLocalVolume->setWhatsThis(QApplication::translate("MainWindow", "Opens a dialog with a volume slider. Use this on other users in the same room.", nullptr));
#endif // QT_NO_WHATSTHIS
        qaUserLocalMute->setText(QApplication::translate("MainWindow", "&Local Mute", nullptr));
#ifndef QT_NO_TOOLTIP
        qaUserLocalMute->setToolTip(QApplication::translate("MainWindow", "Mute user locally", nullptr));
#endif // QT_NO_TOOLTIP
#ifndef QT_NO_WHATSTHIS
        qaUserLocalMute->setWhatsThis(QApplication::translate("MainWindow", "Mute or unmute user locally. Use this on other users in the same room.", nullptr));
#endif // QT_NO_WHATSTHIS
        qaUserTextMessage->setText(QApplication::translate("MainWindow", "Send &Message...", nullptr));
#ifndef QT_NO_TOOLTIP
        qaUserTextMessage->setToolTip(QApplication::translate("MainWindow", "Send a Text Message", nullptr));
#endif // QT_NO_TOOLTIP
#ifndef QT_NO_WHATSTHIS
        qaUserTextMessage->setWhatsThis(QApplication::translate("MainWindow", "Sends a text message to another user.", nullptr));
#endif // QT_NO_WHATSTHIS
        qaUserLocalNickname->setText(QApplication::translate("MainWindow", "&Set Nickname...", nullptr));
#ifndef QT_NO_TOOLTIP
        qaUserLocalNickname->setToolTip(QApplication::translate("MainWindow", "Set a local nickname", nullptr));
#endif // QT_NO_TOOLTIP
#ifndef QT_NO_WHATSTHIS
        qaUserLocalNickname->setWhatsThis(QApplication::translate("MainWindow", "Sets a local nickname for another user.", nullptr));
#endif // QT_NO_WHATSTHIS
        qaChannelAdd->setText(QApplication::translate("MainWindow", "&Add...", nullptr));
#ifndef QT_NO_TOOLTIP
        qaChannelAdd->setToolTip(QApplication::translate("MainWindow", "Add new channel", nullptr));
#endif // QT_NO_TOOLTIP
#ifndef QT_NO_WHATSTHIS
        qaChannelAdd->setWhatsThis(QApplication::translate("MainWindow", "This adds a new sub-channel to the currently selected channel.", nullptr));
#endif // QT_NO_WHATSTHIS
        qaChannelRemove->setText(QApplication::translate("MainWindow", "&Remove...", nullptr));
#ifndef QT_NO_TOOLTIP
        qaChannelRemove->setToolTip(QApplication::translate("MainWindow", "Remove channel", nullptr));
#endif // QT_NO_TOOLTIP
#ifndef QT_NO_WHATSTHIS
        qaChannelRemove->setWhatsThis(QApplication::translate("MainWindow", "This removes a channel and all sub-channels.", nullptr));
#endif // QT_NO_WHATSTHIS
        qaChannelACL->setText(QApplication::translate("MainWindow", "&Edit...", nullptr));
#ifndef QT_NO_TOOLTIP
        qaChannelACL->setToolTip(QApplication::translate("MainWindow", "Edit Groups and ACL for channel", nullptr));
#endif // QT_NO_TOOLTIP
#ifndef QT_NO_WHATSTHIS
        qaChannelACL->setWhatsThis(QApplication::translate("MainWindow", "This opens the Group and ACL dialog for the channel, to control permissions.", nullptr));
#endif // QT_NO_WHATSTHIS
        qaChannelLink->setText(QApplication::translate("MainWindow", "&Link", nullptr));
#ifndef QT_NO_TOOLTIP
        qaChannelLink->setToolTip(QApplication::translate("MainWindow", "Link your channel to another channel", nullptr));
#endif // QT_NO_TOOLTIP
#ifndef QT_NO_WHATSTHIS
        qaChannelLink->setWhatsThis(QApplication::translate("MainWindow", "This links your current channel to the selected channel. If users in a channel have permission to speak in the other channel, users can now hear each other. This is a permanent link, and will last until manually unlinked or the server is restarted. Please see the shortcuts for push-to-link.", nullptr));
#endif // QT_NO_WHATSTHIS
        qaChannelUnlink->setText(QApplication::translate("MainWindow", "&Unlink", "Channel"));
#ifndef QT_NO_TOOLTIP
        qaChannelUnlink->setToolTip(QApplication::translate("MainWindow", "Unlink your channel from another channel", nullptr));
#endif // QT_NO_TOOLTIP
#ifndef QT_NO_WHATSTHIS
        qaChannelUnlink->setWhatsThis(QApplication::translate("MainWindow", "This unlinks your current channel from the selected channel.", nullptr));
#endif // QT_NO_WHATSTHIS
        qaChannelUnlinkAll->setText(QApplication::translate("MainWindow", "&Unlink All", nullptr));
#ifndef QT_NO_TOOLTIP
        qaChannelUnlinkAll->setToolTip(QApplication::translate("MainWindow", "Unlinks your channel from all linked channels.", nullptr));
#endif // QT_NO_TOOLTIP
#ifndef QT_NO_WHATSTHIS
        qaChannelUnlinkAll->setWhatsThis(QApplication::translate("MainWindow", "This unlinks your current channel (not the selected one) from all linked channels.", nullptr));
#endif // QT_NO_WHATSTHIS
        qaAudioReset->setText(QApplication::translate("MainWindow", "&Reset", nullptr));
#ifndef QT_NO_TOOLTIP
        qaAudioReset->setToolTip(QApplication::translate("MainWindow", "Reset audio preprocessor", nullptr));
#endif // QT_NO_TOOLTIP
#ifndef QT_NO_WHATSTHIS
        qaAudioReset->setWhatsThis(QApplication::translate("MainWindow", "This will reset the audio preprocessor, including noise cancellation, automatic gain and voice activity detection. If something suddenly worsens the audio environment (like dropping the microphone) and it was temporary, use this to avoid having to wait for the preprocessor to readjust.", nullptr));
#endif // QT_NO_WHATSTHIS
        qaAudioMute->setText(QApplication::translate("MainWindow", "&Mute Self", nullptr));
#ifndef QT_NO_WHATSTHIS
        qaAudioMute->setWhatsThis(QApplication::translate("MainWindow", "Mute or unmute yourself. When muted, you will not send any data to the server. Unmuting while deafened will also undeafen.", nullptr));
#endif // QT_NO_WHATSTHIS
        qaAudioDeaf->setText(QApplication::translate("MainWindow", "&Deafen Self", nullptr));
#ifndef QT_NO_WHATSTHIS
        qaAudioDeaf->setWhatsThis(QApplication::translate("MainWindow", "Deafen or undeafen yourself. When deafened, you will not hear anything. Deafening yourself will also mute.", nullptr));
#endif // QT_NO_WHATSTHIS
        qaAudioTTS->setText(QApplication::translate("MainWindow", "&Text-To-Speech", nullptr));
#ifndef QT_NO_TOOLTIP
        qaAudioTTS->setToolTip(QApplication::translate("MainWindow", "Toggle Text-To-Speech", nullptr));
#endif // QT_NO_TOOLTIP
#ifndef QT_NO_WHATSTHIS
        qaAudioTTS->setWhatsThis(QApplication::translate("MainWindow", "Enable or disable the text-to-speech engine. Only messages enabled for TTS in the Configuration dialog will actually be spoken.", nullptr));
#endif // QT_NO_WHATSTHIS
        qaAudioStats->setText(QApplication::translate("MainWindow", "Audio S&tatistics...", nullptr));
#ifndef QT_NO_TOOLTIP
        qaAudioStats->setToolTip(QApplication::translate("MainWindow", "Display audio statistics", nullptr));
#endif // QT_NO_TOOLTIP
#ifndef QT_NO_WHATSTHIS
        qaAudioStats->setWhatsThis(QApplication::translate("MainWindow", "Pops up a small dialog with information about your current audio input.", nullptr));
#endif // QT_NO_WHATSTHIS
        qaAudioUnlink->setText(QApplication::translate("MainWindow", "&Unlink Plugins", nullptr));
#ifndef QT_NO_TOOLTIP
        qaAudioUnlink->setToolTip(QApplication::translate("MainWindow", "Forcibly unlink plugin", nullptr));
#endif // QT_NO_TOOLTIP
#ifndef QT_NO_WHATSTHIS
        qaAudioUnlink->setWhatsThis(QApplication::translate("MainWindow", "This forces the current plugin to unlink, which is handy if it is reading completely wrong data.", nullptr));
#endif // QT_NO_WHATSTHIS
        qaConfigDialog->setText(QApplication::translate("MainWindow", "&Settings...", nullptr));
#ifndef QT_NO_TOOLTIP
        qaConfigDialog->setToolTip(QApplication::translate("MainWindow", "Configure Mumble", nullptr));
#endif // QT_NO_TOOLTIP
#ifndef QT_NO_WHATSTHIS
        qaConfigDialog->setWhatsThis(QApplication::translate("MainWindow", "Allows you to change most settings for Mumble.", nullptr));
#endif // QT_NO_WHATSTHIS
        qaFilterToggle->setText(QApplication::translate("MainWindow", "&Filter on/off", nullptr));
#ifndef QT_NO_TOOLTIP
        qaFilterToggle->setToolTip(QApplication::translate("MainWindow", "Toggle the channel filter (Alt+F)", nullptr));
#endif // QT_NO_TOOLTIP
#ifndef QT_NO_WHATSTHIS
        qaFilterToggle->setWhatsThis(QApplication::translate("MainWindow", "Enable or disable the filtering of select channels.\n"
"By default all empty channels will be filtered.\n"
"You can mark additional channels for filtering from\n"
"the channel's context menu.", nullptr));
#endif // QT_NO_WHATSTHIS
#ifndef QT_NO_SHORTCUT
        qaFilterToggle->setShortcut(QApplication::translate("MainWindow", "Alt+F", nullptr));
#endif // QT_NO_SHORTCUT
        qaAudioWizard->setText(QApplication::translate("MainWindow", "&Audio Wizard...", nullptr));
#ifndef QT_NO_TOOLTIP
        qaAudioWizard->setToolTip(QApplication::translate("MainWindow", "Start the audio configuration wizard", nullptr));
#endif // QT_NO_TOOLTIP
#ifndef QT_NO_WHATSTHIS
        qaAudioWizard->setWhatsThis(QApplication::translate("MainWindow", "This will guide you through the process of configuring your audio hardware.", nullptr));
#endif // QT_NO_WHATSTHIS
        qaDeveloperConsole->setText(QApplication::translate("MainWindow", "Developer &Console...", nullptr));
#ifndef QT_NO_TOOLTIP
        qaDeveloperConsole->setToolTip(QApplication::translate("MainWindow", "Show the Developer Console", nullptr));
#endif // QT_NO_TOOLTIP
#ifndef QT_NO_WHATSTHIS
        qaDeveloperConsole->setWhatsThis(QApplication::translate("MainWindow", "Shows the Mumble Developer Console, where Mumble's log output can be inspected.", nullptr));
#endif // QT_NO_WHATSTHIS
        qaPositionalAudioViewer->setText(QApplication::translate("MainWindow", "Positional &Audio Viewer...", nullptr));
#ifndef QT_NO_TOOLTIP
        qaPositionalAudioViewer->setToolTip(QApplication::translate("MainWindow", "Show the Positional Audio Viewer", nullptr));
#endif // QT_NO_TOOLTIP
#ifndef QT_NO_WHATSTHIS
        qaPositionalAudioViewer->setWhatsThis(QApplication::translate("MainWindow", "Shows the Positional Audio Viewer. In it the current information used for positional audio can be inspected. Context and identity are also shown.", nullptr));
#endif // QT_NO_WHATSTHIS
        qaHelpWhatsThis->setText(QApplication::translate("MainWindow", "&What's This?", nullptr));
#ifndef QT_NO_TOOLTIP
        qaHelpWhatsThis->setToolTip(QApplication::translate("MainWindow", "Enter What's This? mode", nullptr));
#endif // QT_NO_TOOLTIP
#ifndef QT_NO_WHATSTHIS
        qaHelpWhatsThis->setWhatsThis(QApplication::translate("MainWindow", "Click this to enter \"What's This?\" mode. Your cursor will turn into a question mark. Click on any button, menu choice or area to show a description of what it is.", nullptr));
#endif // QT_NO_WHATSTHIS
        qaHelpAbout->setText(QApplication::translate("MainWindow", "&About...", nullptr));
#ifndef QT_NO_TOOLTIP
        qaHelpAbout->setToolTip(QApplication::translate("MainWindow", "Information about Mumble", nullptr));
#endif // QT_NO_TOOLTIP
#ifndef QT_NO_WHATSTHIS
        qaHelpAbout->setWhatsThis(QApplication::translate("MainWindow", "Shows a small dialog with information and license for Mumble.", nullptr));
#endif // QT_NO_WHATSTHIS
        qaHelpAboutSpeex->setText(QApplication::translate("MainWindow", "About &Speex...", nullptr));
#ifndef QT_NO_TOOLTIP
        qaHelpAboutSpeex->setToolTip(QApplication::translate("MainWindow", "Information about Speex", nullptr));
#endif // QT_NO_TOOLTIP
#ifndef QT_NO_WHATSTHIS
        qaHelpAboutSpeex->setWhatsThis(QApplication::translate("MainWindow", "Shows a small dialog with information about Speex.", nullptr));
#endif // QT_NO_WHATSTHIS
        qaHelpAboutQt->setText(QApplication::translate("MainWindow", "About &Qt...", nullptr));
#ifndef QT_NO_TOOLTIP
        qaHelpAboutQt->setToolTip(QApplication::translate("MainWindow", "Information about Qt", nullptr));
#endif // QT_NO_TOOLTIP
#ifndef QT_NO_WHATSTHIS
        qaHelpAboutQt->setWhatsThis(QApplication::translate("MainWindow", "Shows a small dialog with information about Qt.", nullptr));
#endif // QT_NO_WHATSTHIS
        qaHelpVersionCheck->setText(QApplication::translate("MainWindow", "Check for &Updates", nullptr));
#ifndef QT_NO_TOOLTIP
        qaHelpVersionCheck->setToolTip(QApplication::translate("MainWindow", "Check for new version of Mumble", nullptr));
#endif // QT_NO_TOOLTIP
#ifndef QT_NO_WHATSTHIS
        qaHelpVersionCheck->setWhatsThis(QApplication::translate("MainWindow", "Connects to the Mumble webpage to check if a new version is available, and notifies you with an appropriate download URL if this is the case.", nullptr));
#endif // QT_NO_WHATSTHIS
        qaChannelSendMessage->setText(QApplication::translate("MainWindow", "Send &Message...", nullptr));
#ifndef QT_NO_TOOLTIP
        qaChannelSendMessage->setToolTip(QApplication::translate("MainWindow", "Send a Text Message", nullptr));
#endif // QT_NO_TOOLTIP
#ifndef QT_NO_WHATSTHIS
        qaChannelSendMessage->setWhatsThis(QApplication::translate("MainWindow", "Sends a text message to all users in a channel.", nullptr));
#endif // QT_NO_WHATSTHIS
        qaChannelCopyURL->setText(QApplication::translate("MainWindow", "&Copy URL", nullptr));
#ifndef QT_NO_TOOLTIP
        qaChannelCopyURL->setToolTip(QApplication::translate("MainWindow", "Copies a link to this channel to the clipboard.", nullptr));
#endif // QT_NO_TOOLTIP
#ifndef QT_NO_WHATSTHIS
        qaChannelCopyURL->setWhatsThis(QApplication::translate("MainWindow", "Copies a link to this channel to the clipboard.", nullptr));
#endif // QT_NO_WHATSTHIS
        qaConfigMinimal->setText(QApplication::translate("MainWindow", "&Minimal View", nullptr));
#ifndef QT_NO_TOOLTIP
        qaConfigMinimal->setToolTip(QApplication::translate("MainWindow", "Toggle minimal window modes", nullptr));
#endif // QT_NO_TOOLTIP
#ifndef QT_NO_WHATSTHIS
        qaConfigMinimal->setWhatsThis(QApplication::translate("MainWindow", "This will toggle minimal mode, where the log window and menu is hidden.", nullptr));
#endif // QT_NO_WHATSTHIS
        qaConfigHideFrame->setText(QApplication::translate("MainWindow", "Hide Frame", nullptr));
#ifndef QT_NO_TOOLTIP
        qaConfigHideFrame->setToolTip(QApplication::translate("MainWindow", "Toggle showing frame on minimal window", nullptr));
#endif // QT_NO_TOOLTIP
#ifndef QT_NO_WHATSTHIS
        qaConfigHideFrame->setWhatsThis(QApplication::translate("MainWindow", "This will toggle whether the minimal window should have a frame for moving and resizing.", nullptr));
#endif // QT_NO_WHATSTHIS
        qaConfigCert->setText(QApplication::translate("MainWindow", "&Certificate Wizard...", nullptr));
#ifndef QT_NO_TOOLTIP
        qaConfigCert->setToolTip(QApplication::translate("MainWindow", "Configure certificates for strong authentication", nullptr));
#endif // QT_NO_TOOLTIP
#ifndef QT_NO_WHATSTHIS
        qaConfigCert->setWhatsThis(QApplication::translate("MainWindow", "This starts the wizard for creating, importing and exporting certificates for authentication against servers.", nullptr));
#endif // QT_NO_WHATSTHIS
        qaUserRegister->setText(QApplication::translate("MainWindow", "&Register...", nullptr));
#ifndef QT_NO_TOOLTIP
        qaUserRegister->setToolTip(QApplication::translate("MainWindow", "Register user on server", nullptr));
#endif // QT_NO_TOOLTIP
#ifndef QT_NO_WHATSTHIS
        qaUserRegister->setWhatsThis(QApplication::translate("MainWindow", "This will permanently register the user on the server.", nullptr));
#endif // QT_NO_WHATSTHIS
        qaUserFriendAdd->setText(QApplication::translate("MainWindow", "Add &Friend", nullptr));
#ifndef QT_NO_TOOLTIP
        qaUserFriendAdd->setToolTip(QApplication::translate("MainWindow", "Adds a user as your friend.", nullptr));
#endif // QT_NO_TOOLTIP
#ifndef QT_NO_WHATSTHIS
        qaUserFriendAdd->setWhatsThis(QApplication::translate("MainWindow", "This will add the user as a friend, so you can recognize him on this and other servers.", nullptr));
#endif // QT_NO_WHATSTHIS
        qaUserFriendRemove->setText(QApplication::translate("MainWindow", "&Remove Friend", nullptr));
#ifndef QT_NO_TOOLTIP
        qaUserFriendRemove->setToolTip(QApplication::translate("MainWindow", "Removes a user from your friends.", nullptr));
#endif // QT_NO_TOOLTIP
#ifndef QT_NO_WHATSTHIS
        qaUserFriendRemove->setWhatsThis(QApplication::translate("MainWindow", "This will remove a user from your friends list.", nullptr));
#endif // QT_NO_WHATSTHIS
        qaUserFriendUpdate->setText(QApplication::translate("MainWindow", "&Update Friend", nullptr));
#ifndef QT_NO_TOOLTIP
        qaUserFriendUpdate->setToolTip(QApplication::translate("MainWindow", "Update name of your friend.", nullptr));
#endif // QT_NO_TOOLTIP
#ifndef QT_NO_WHATSTHIS
        qaUserFriendUpdate->setWhatsThis(QApplication::translate("MainWindow", "Your friend uses a different name than what is in your database. This will update the name.", nullptr));
#endif // QT_NO_WHATSTHIS
        qaServerUserList->setText(QApplication::translate("MainWindow", "Registered &Users...", nullptr));
#ifndef QT_NO_TOOLTIP
        qaServerUserList->setToolTip(QApplication::translate("MainWindow", "Edit registered users list", nullptr));
#endif // QT_NO_TOOLTIP
#ifndef QT_NO_WHATSTHIS
        qaServerUserList->setWhatsThis(QApplication::translate("MainWindow", "This opens the editor for registered users, which allow you to change their name or unregister them.", nullptr));
#endif // QT_NO_WHATSTHIS
        qaServerTexture->setText(QApplication::translate("MainWindow", "Change &Avatar...", nullptr));
#ifndef QT_NO_TOOLTIP
        qaServerTexture->setToolTip(QApplication::translate("MainWindow", "Change your avatar image on this server", nullptr));
#endif // QT_NO_TOOLTIP
        qaServerTokens->setText(QApplication::translate("MainWindow", "&Access Tokens...", nullptr));
#ifndef QT_NO_TOOLTIP
        qaServerTokens->setToolTip(QApplication::translate("MainWindow", "Add or remove text-based access tokens", nullptr));
#endif // QT_NO_TOOLTIP
        qaServerTextureRemove->setText(QApplication::translate("MainWindow", "&Remove Avatar", nullptr));
#ifndef QT_NO_TOOLTIP
        qaServerTextureRemove->setToolTip(QApplication::translate("MainWindow", "Remove currently defined avatar image.", nullptr));
#endif // QT_NO_TOOLTIP
        qaUserCommentReset->setText(QApplication::translate("MainWindow", "Reset &Comment...", nullptr));
#ifndef QT_NO_TOOLTIP
        qaUserCommentReset->setToolTip(QApplication::translate("MainWindow", "Reset the comment of the selected user.", nullptr));
#endif // QT_NO_TOOLTIP
        qaUserTextureReset->setText(QApplication::translate("MainWindow", "Reset &Avatar...", nullptr));
#ifndef QT_NO_TOOLTIP
        qaUserTextureReset->setToolTip(QApplication::translate("MainWindow", "Reset the avatar of the selected user.", nullptr));
#endif // QT_NO_TOOLTIP
        qaChannelJoin->setText(QApplication::translate("MainWindow", "&Join Channel", nullptr));
        qaChannelFilter->setText(QApplication::translate("MainWindow", "&Hide Channel when Filtering", nullptr));
        qaUserCommentView->setText(QApplication::translate("MainWindow", "View Comment...", nullptr));
#ifndef QT_NO_TOOLTIP
        qaUserCommentView->setToolTip(QApplication::translate("MainWindow", "View comment in editor", nullptr));
#endif // QT_NO_TOOLTIP
        qaUserInformation->setText(QApplication::translate("MainWindow", "&Information...", nullptr));
#ifndef QT_NO_TOOLTIP
        qaUserInformation->setToolTip(QApplication::translate("MainWindow", "Query server for connection information for user", nullptr));
#endif // QT_NO_TOOLTIP
        qaSelfComment->setText(QApplication::translate("MainWindow", "&Change Comment...", nullptr));
#ifndef QT_NO_TOOLTIP
        qaSelfComment->setToolTip(QApplication::translate("MainWindow", "Change your own comment", nullptr));
#endif // QT_NO_TOOLTIP
        qaSelfRegister->setText(QApplication::translate("MainWindow", "R&egister...", nullptr));
#ifndef QT_NO_TOOLTIP
        qaSelfRegister->setToolTip(QApplication::translate("MainWindow", "Register yourself on the server", nullptr));
#endif // QT_NO_TOOLTIP
        qaUserPrioritySpeaker->setText(QApplication::translate("MainWindow", "Priority Speaker", nullptr));
        qaSelfPrioritySpeaker->setText(QApplication::translate("MainWindow", "Priority Speaker", nullptr));
        qaRecording->setText(QApplication::translate("MainWindow", "Recording", nullptr));
        qaShow->setText(QApplication::translate("MainWindow", "Show", nullptr));
#ifndef QT_NO_TOOLTIP
        qaShow->setToolTip(QApplication::translate("MainWindow", "Shows the main Mumble window.", nullptr));
#endif // QT_NO_TOOLTIP
        qaChannelListen->setText(QApplication::translate("MainWindow", "Listen to channel", nullptr));
#ifndef QT_NO_TOOLTIP
        qaChannelListen->setToolTip(QApplication::translate("MainWindow", "Listen to this channel without joining it", nullptr));
#endif // QT_NO_TOOLTIP
        qaListenerLocalVolume->setText(QApplication::translate("MainWindow", "Local Volume Adjustment...", nullptr));
#ifndef QT_NO_TOOLTIP
        qaListenerLocalVolume->setToolTip(QApplication::translate("MainWindow", "Locally adjust the volume for this virtual ear.", nullptr));
#endif // QT_NO_TOOLTIP
        qaTalkingUIToggle->setText(QApplication::translate("MainWindow", "Talking UI", nullptr));
#ifndef QT_NO_TOOLTIP
        qaTalkingUIToggle->setToolTip(QApplication::translate("MainWindow", "Toggles the visibility of the TalkingUI.", nullptr));
#endif // QT_NO_TOOLTIP
        qaUserJoin->setText(QApplication::translate("MainWindow", "Join user's channel", nullptr));
#ifndef QT_NO_TOOLTIP
        qaUserJoin->setToolTip(QApplication::translate("MainWindow", "Joins the channel of this user.", nullptr));
#endif // QT_NO_TOOLTIP
        qaUserLocalIgnoreTTS->setText(QApplication::translate("MainWindow", "Disable Text-To-Speech", nullptr));
#ifndef QT_NO_TOOLTIP
        qaUserLocalIgnoreTTS->setToolTip(QApplication::translate("MainWindow", "Locally disable Text-To-Speech for this user's text chat messages.", nullptr));
#endif // QT_NO_TOOLTIP
#ifndef QT_NO_WHATSTHIS
        qaUserLocalIgnoreTTS->setWhatsThis(QApplication::translate("MainWindow", "Silently disables Text-To-Speech for all text messages from the user.", nullptr));
#endif // QT_NO_WHATSTHIS
        qaSearch->setText(QApplication::translate("MainWindow", "Search", nullptr));
#ifndef QT_NO_TOOLTIP
        qaSearch->setToolTip(QApplication::translate("MainWindow", "Search for a user or channel (Ctrl+F)", nullptr));
#endif // QT_NO_TOOLTIP
#ifndef QT_NO_SHORTCUT
        qaSearch->setShortcut(QApplication::translate("MainWindow", "Ctrl+F", nullptr));
#endif // QT_NO_SHORTCUT
        qmConfig->setTitle(QApplication::translate("MainWindow", "C&onfigure", nullptr));
        qmHelp->setTitle(QApplication::translate("MainWindow", "&Help", nullptr));
        qmServer->setTitle(QApplication::translate("MainWindow", "S&erver", nullptr));
        qmSelf->setTitle(QApplication::translate("MainWindow", "&Self", nullptr));
        qdwLog->setWindowTitle(QApplication::translate("MainWindow", "Log", nullptr));
#ifndef QT_NO_WHATSTHIS
        qteLog->setWhatsThis(QApplication::translate("MainWindow", "This shows all recent activity. Connecting to servers, errors and information messages all show up here.<br />To configure exactly which messages show up here, use the <b>Settings</b> command from the menu.", nullptr));
#endif // QT_NO_WHATSTHIS
#ifndef QT_NO_TOOLTIP
        qdwChat->setToolTip(QString());
#endif // QT_NO_TOOLTIP
#ifndef QT_NO_WHATSTHIS
        qdwChat->setWhatsThis(QApplication::translate("MainWindow", "This is the chatbar<br />If you enter text here and then press enter the text is sent to the user or channel that was selected. If nothing is selected the message is sent to your current channel.", nullptr));
#endif // QT_NO_WHATSTHIS
        qdwChat->setWindowTitle(QApplication::translate("MainWindow", "Chatbar", nullptr));
        qtIconToolbar->setWindowTitle(QApplication::translate("MainWindow", "Icon Toolbar", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
