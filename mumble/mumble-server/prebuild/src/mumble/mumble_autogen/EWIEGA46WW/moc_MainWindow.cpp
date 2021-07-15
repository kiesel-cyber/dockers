/****************************************************************************
** Meta object code from reading C++ file 'MainWindow.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.12.8)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "MainWindow.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'MainWindow.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.12.8. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_MainWindow_t {
    QByteArrayData data[158];
    char stringdata0[3635];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_MainWindow_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_MainWindow_t qt_meta_stringdata_MainWindow = {
    {
QT_MOC_LITERAL(0, 0, 10), // "MainWindow"
QT_MOC_LITERAL(1, 11, 18), // "serverSynchronized"
QT_MOC_LITERAL(2, 30, 0), // ""
QT_MOC_LITERAL(3, 31, 24), // "userAddedChannelListener"
QT_MOC_LITERAL(4, 56, 11), // "ClientUser*"
QT_MOC_LITERAL(5, 68, 4), // "user"
QT_MOC_LITERAL(6, 73, 8), // "Channel*"
QT_MOC_LITERAL(7, 82, 7), // "channel"
QT_MOC_LITERAL(8, 90, 26), // "userRemovedChannelListener"
QT_MOC_LITERAL(9, 117, 23), // "transmissionModeChanged"
QT_MOC_LITERAL(10, 141, 23), // "Settings::AudioTransmit"
QT_MOC_LITERAL(11, 165, 7), // "newMode"
QT_MOC_LITERAL(12, 173, 23), // "on_qmServer_aboutToShow"
QT_MOC_LITERAL(13, 197, 28), // "on_qaServerConnect_triggered"
QT_MOC_LITERAL(14, 226, 11), // "autoconnect"
QT_MOC_LITERAL(15, 238, 31), // "on_qaServerDisconnect_triggered"
QT_MOC_LITERAL(16, 270, 28), // "on_qaServerBanList_triggered"
QT_MOC_LITERAL(17, 299, 29), // "on_qaServerUserList_triggered"
QT_MOC_LITERAL(18, 329, 32), // "on_qaServerInformation_triggered"
QT_MOC_LITERAL(19, 362, 28), // "on_qaServerTexture_triggered"
QT_MOC_LITERAL(20, 391, 34), // "on_qaServerTextureRemove_trig..."
QT_MOC_LITERAL(21, 426, 27), // "on_qaServerTokens_triggered"
QT_MOC_LITERAL(22, 454, 21), // "on_qmSelf_aboutToShow"
QT_MOC_LITERAL(23, 476, 26), // "on_qaSelfComment_triggered"
QT_MOC_LITERAL(24, 503, 27), // "on_qaSelfRegister_triggered"
QT_MOC_LITERAL(25, 531, 25), // "qcbTransmitMode_activated"
QT_MOC_LITERAL(26, 557, 5), // "index"
QT_MOC_LITERAL(27, 563, 26), // "updateTransmitModeComboBox"
QT_MOC_LITERAL(28, 590, 18), // "qmUser_aboutToShow"
QT_MOC_LITERAL(29, 609, 22), // "qmListener_aboutToShow"
QT_MOC_LITERAL(30, 632, 31), // "on_qaUserCommentReset_triggered"
QT_MOC_LITERAL(31, 664, 31), // "on_qaUserTextureReset_triggered"
QT_MOC_LITERAL(32, 696, 30), // "on_qaUserCommentView_triggered"
QT_MOC_LITERAL(33, 727, 23), // "on_qaUserKick_triggered"
QT_MOC_LITERAL(34, 751, 22), // "on_qaUserBan_triggered"
QT_MOC_LITERAL(35, 774, 23), // "on_qaUserMute_triggered"
QT_MOC_LITERAL(36, 798, 23), // "on_qaUserDeaf_triggered"
QT_MOC_LITERAL(37, 822, 34), // "on_qaSelfPrioritySpeaker_trig..."
QT_MOC_LITERAL(38, 857, 34), // "on_qaUserPrioritySpeaker_trig..."
QT_MOC_LITERAL(39, 892, 30), // "on_qaUserLocalIgnore_triggered"
QT_MOC_LITERAL(40, 923, 33), // "on_qaUserLocalIgnoreTTS_trigg..."
QT_MOC_LITERAL(41, 957, 28), // "on_qaUserLocalMute_triggered"
QT_MOC_LITERAL(42, 986, 32), // "on_qaUserLocalNickname_triggered"
QT_MOC_LITERAL(43, 1019, 30), // "on_qaUserLocalVolume_triggered"
QT_MOC_LITERAL(44, 1050, 30), // "on_qaUserTextMessage_triggered"
QT_MOC_LITERAL(45, 1081, 27), // "on_qaUserRegister_triggered"
QT_MOC_LITERAL(46, 1109, 30), // "on_qaUserInformation_triggered"
QT_MOC_LITERAL(47, 1140, 28), // "on_qaUserFriendAdd_triggered"
QT_MOC_LITERAL(48, 1169, 31), // "on_qaUserFriendRemove_triggered"
QT_MOC_LITERAL(49, 1201, 31), // "on_qaUserFriendUpdate_triggered"
QT_MOC_LITERAL(50, 1233, 21), // "qmChannel_aboutToShow"
QT_MOC_LITERAL(51, 1255, 26), // "on_qaChannelJoin_triggered"
QT_MOC_LITERAL(52, 1282, 23), // "on_qaUserJoin_triggered"
QT_MOC_LITERAL(53, 1306, 28), // "on_qaChannelListen_triggered"
QT_MOC_LITERAL(54, 1335, 25), // "on_qaChannelAdd_triggered"
QT_MOC_LITERAL(55, 1361, 28), // "on_qaChannelRemove_triggered"
QT_MOC_LITERAL(56, 1390, 25), // "on_qaChannelACL_triggered"
QT_MOC_LITERAL(57, 1416, 26), // "on_qaChannelLink_triggered"
QT_MOC_LITERAL(58, 1443, 28), // "on_qaChannelUnlink_triggered"
QT_MOC_LITERAL(59, 1472, 31), // "on_qaChannelUnlinkAll_triggered"
QT_MOC_LITERAL(60, 1504, 33), // "on_qaChannelSendMessage_trigg..."
QT_MOC_LITERAL(61, 1538, 28), // "on_qaChannelFilter_triggered"
QT_MOC_LITERAL(62, 1567, 29), // "on_qaChannelCopyURL_triggered"
QT_MOC_LITERAL(63, 1597, 34), // "on_qaListenerLocalVolume_trig..."
QT_MOC_LITERAL(64, 1632, 25), // "on_qaAudioReset_triggered"
QT_MOC_LITERAL(65, 1658, 24), // "on_qaAudioMute_triggered"
QT_MOC_LITERAL(66, 1683, 24), // "on_qaAudioDeaf_triggered"
QT_MOC_LITERAL(67, 1708, 24), // "on_qaRecording_triggered"
QT_MOC_LITERAL(68, 1733, 23), // "on_qaAudioTTS_triggered"
QT_MOC_LITERAL(69, 1757, 26), // "on_qaAudioUnlink_triggered"
QT_MOC_LITERAL(70, 1784, 25), // "on_qaAudioStats_triggered"
QT_MOC_LITERAL(71, 1810, 27), // "on_qaConfigDialog_triggered"
QT_MOC_LITERAL(72, 1838, 30), // "on_qaConfigHideFrame_triggered"
QT_MOC_LITERAL(73, 1869, 23), // "on_qmConfig_aboutToShow"
QT_MOC_LITERAL(74, 1893, 28), // "on_qaConfigMinimal_triggered"
QT_MOC_LITERAL(75, 1922, 25), // "on_qaConfigCert_triggered"
QT_MOC_LITERAL(76, 1948, 26), // "on_qaAudioWizard_triggered"
QT_MOC_LITERAL(77, 1975, 31), // "on_qaDeveloperConsole_triggered"
QT_MOC_LITERAL(78, 2007, 36), // "on_qaPositionalAudioViewer_tr..."
QT_MOC_LITERAL(79, 2044, 28), // "on_qaHelpWhatsThis_triggered"
QT_MOC_LITERAL(80, 2073, 24), // "on_qaHelpAbout_triggered"
QT_MOC_LITERAL(81, 2098, 26), // "on_qaHelpAboutQt_triggered"
QT_MOC_LITERAL(82, 2125, 31), // "on_qaHelpVersionCheck_triggered"
QT_MOC_LITERAL(83, 2157, 19), // "on_qaQuit_triggered"
QT_MOC_LITERAL(84, 2177, 19), // "on_qaHide_triggered"
QT_MOC_LITERAL(85, 2197, 21), // "on_qteChat_tabPressed"
QT_MOC_LITERAL(86, 2219, 25), // "on_qteChat_backtabPressed"
QT_MOC_LITERAL(87, 2245, 27), // "on_qteChat_ctrlSpacePressed"
QT_MOC_LITERAL(88, 2273, 38), // "on_qtvUsers_customContextMenu..."
QT_MOC_LITERAL(89, 2312, 4), // "mpos"
QT_MOC_LITERAL(90, 2317, 28), // "usePositionForGettingContext"
QT_MOC_LITERAL(91, 2346, 36), // "on_qteLog_customContextMenuRe..."
QT_MOC_LITERAL(92, 2383, 3), // "pos"
QT_MOC_LITERAL(93, 2387, 23), // "on_qteLog_anchorClicked"
QT_MOC_LITERAL(94, 2411, 21), // "on_qteLog_highlighted"
QT_MOC_LITERAL(95, 2433, 4), // "link"
QT_MOC_LITERAL(96, 2438, 23), // "on_PushToTalk_triggered"
QT_MOC_LITERAL(97, 2462, 23), // "on_PushToMute_triggered"
QT_MOC_LITERAL(98, 2486, 21), // "on_VolumeUp_triggered"
QT_MOC_LITERAL(99, 2508, 23), // "on_VolumeDown_triggered"
QT_MOC_LITERAL(100, 2532, 18), // "on_gsMuteSelf_down"
QT_MOC_LITERAL(101, 2551, 18), // "on_gsDeafSelf_down"
QT_MOC_LITERAL(102, 2570, 22), // "on_gsWhisper_triggered"
QT_MOC_LITERAL(103, 2593, 9), // "addTarget"
QT_MOC_LITERAL(104, 2603, 15), // "ShortcutTarget*"
QT_MOC_LITERAL(105, 2619, 12), // "removeTarget"
QT_MOC_LITERAL(106, 2632, 32), // "on_gsCycleTransmitMode_triggered"
QT_MOC_LITERAL(107, 2665, 41), // "on_gsToggleMainWindowVisibili..."
QT_MOC_LITERAL(108, 2707, 37), // "on_gsTransmitModePushToTalk_t..."
QT_MOC_LITERAL(109, 2745, 37), // "on_gsTransmitModeContinuous_t..."
QT_MOC_LITERAL(110, 2783, 30), // "on_gsTransmitModeVAD_triggered"
QT_MOC_LITERAL(111, 2814, 30), // "on_gsSendTextMessage_triggered"
QT_MOC_LITERAL(112, 2845, 39), // "on_gsSendClipboardTextMessage..."
QT_MOC_LITERAL(113, 2885, 30), // "on_gsToggleTalkingUI_triggered"
QT_MOC_LITERAL(114, 2916, 27), // "on_gsToggleSearch_triggered"
QT_MOC_LITERAL(115, 2944, 20), // "on_Reconnect_timeout"
QT_MOC_LITERAL(116, 2965, 17), // "on_Icon_activated"
QT_MOC_LITERAL(117, 2983, 33), // "QSystemTrayIcon::ActivationRe..."
QT_MOC_LITERAL(118, 3017, 30), // "on_qaTalkingUIToggle_triggered"
QT_MOC_LITERAL(119, 3048, 28), // "voiceRecorderDialog_finished"
QT_MOC_LITERAL(120, 3077, 21), // "qtvUserCurrentChanged"
QT_MOC_LITERAL(121, 3099, 11), // "QModelIndex"
QT_MOC_LITERAL(122, 3111, 15), // "serverConnected"
QT_MOC_LITERAL(123, 3127, 18), // "serverDisconnected"
QT_MOC_LITERAL(124, 3146, 28), // "QAbstractSocket::SocketError"
QT_MOC_LITERAL(125, 3175, 6), // "reason"
QT_MOC_LITERAL(126, 3182, 13), // "resolverError"
QT_MOC_LITERAL(127, 3196, 15), // "viewCertificate"
QT_MOC_LITERAL(128, 3212, 7), // "openUrl"
QT_MOC_LITERAL(129, 3220, 3), // "url"
QT_MOC_LITERAL(130, 3224, 17), // "context_triggered"
QT_MOC_LITERAL(131, 3242, 12), // "updateTarget"
QT_MOC_LITERAL(132, 3255, 21), // "updateMenuPermissions"
QT_MOC_LITERAL(133, 3277, 16), // "userStateChanged"
QT_MOC_LITERAL(134, 3294, 22), // "destroyUserInformation"
QT_MOC_LITERAL(135, 3317, 15), // "trayAboutToShow"
QT_MOC_LITERAL(136, 3333, 18), // "sendChatbarMessage"
QT_MOC_LITERAL(137, 3352, 3), // "msg"
QT_MOC_LITERAL(138, 3356, 15), // "sendChatbarText"
QT_MOC_LITERAL(139, 3372, 11), // "pttReleased"
QT_MOC_LITERAL(140, 3384, 15), // "whisperReleased"
QT_MOC_LITERAL(141, 3400, 6), // "scdata"
QT_MOC_LITERAL(142, 3407, 12), // "onResetAudio"
QT_MOC_LITERAL(143, 3420, 15), // "showRaiseWindow"
QT_MOC_LITERAL(144, 3436, 27), // "on_qaFilterToggle_triggered"
QT_MOC_LITERAL(145, 3464, 11), // "saveImageAs"
QT_MOC_LITERAL(146, 3476, 12), // "getImagePath"
QT_MOC_LITERAL(147, 3489, 8), // "filename"
QT_MOC_LITERAL(148, 3498, 15), // "updateImagePath"
QT_MOC_LITERAL(149, 3514, 8), // "filepath"
QT_MOC_LITERAL(150, 3523, 19), // "setTransmissionMode"
QT_MOC_LITERAL(151, 3543, 4), // "mode"
QT_MOC_LITERAL(152, 3548, 12), // "setAudioMute"
QT_MOC_LITERAL(153, 3561, 4), // "mute"
QT_MOC_LITERAL(154, 3566, 12), // "setAudioDeaf"
QT_MOC_LITERAL(155, 3579, 4), // "deaf"
QT_MOC_LITERAL(156, 3584, 21), // "on_qaSearch_triggered"
QT_MOC_LITERAL(157, 3606, 28) // "toggleSearchDialogVisibility"

    },
    "MainWindow\0serverSynchronized\0\0"
    "userAddedChannelListener\0ClientUser*\0"
    "user\0Channel*\0channel\0userRemovedChannelListener\0"
    "transmissionModeChanged\0Settings::AudioTransmit\0"
    "newMode\0on_qmServer_aboutToShow\0"
    "on_qaServerConnect_triggered\0autoconnect\0"
    "on_qaServerDisconnect_triggered\0"
    "on_qaServerBanList_triggered\0"
    "on_qaServerUserList_triggered\0"
    "on_qaServerInformation_triggered\0"
    "on_qaServerTexture_triggered\0"
    "on_qaServerTextureRemove_triggered\0"
    "on_qaServerTokens_triggered\0"
    "on_qmSelf_aboutToShow\0on_qaSelfComment_triggered\0"
    "on_qaSelfRegister_triggered\0"
    "qcbTransmitMode_activated\0index\0"
    "updateTransmitModeComboBox\0"
    "qmUser_aboutToShow\0qmListener_aboutToShow\0"
    "on_qaUserCommentReset_triggered\0"
    "on_qaUserTextureReset_triggered\0"
    "on_qaUserCommentView_triggered\0"
    "on_qaUserKick_triggered\0on_qaUserBan_triggered\0"
    "on_qaUserMute_triggered\0on_qaUserDeaf_triggered\0"
    "on_qaSelfPrioritySpeaker_triggered\0"
    "on_qaUserPrioritySpeaker_triggered\0"
    "on_qaUserLocalIgnore_triggered\0"
    "on_qaUserLocalIgnoreTTS_triggered\0"
    "on_qaUserLocalMute_triggered\0"
    "on_qaUserLocalNickname_triggered\0"
    "on_qaUserLocalVolume_triggered\0"
    "on_qaUserTextMessage_triggered\0"
    "on_qaUserRegister_triggered\0"
    "on_qaUserInformation_triggered\0"
    "on_qaUserFriendAdd_triggered\0"
    "on_qaUserFriendRemove_triggered\0"
    "on_qaUserFriendUpdate_triggered\0"
    "qmChannel_aboutToShow\0on_qaChannelJoin_triggered\0"
    "on_qaUserJoin_triggered\0"
    "on_qaChannelListen_triggered\0"
    "on_qaChannelAdd_triggered\0"
    "on_qaChannelRemove_triggered\0"
    "on_qaChannelACL_triggered\0"
    "on_qaChannelLink_triggered\0"
    "on_qaChannelUnlink_triggered\0"
    "on_qaChannelUnlinkAll_triggered\0"
    "on_qaChannelSendMessage_triggered\0"
    "on_qaChannelFilter_triggered\0"
    "on_qaChannelCopyURL_triggered\0"
    "on_qaListenerLocalVolume_triggered\0"
    "on_qaAudioReset_triggered\0"
    "on_qaAudioMute_triggered\0"
    "on_qaAudioDeaf_triggered\0"
    "on_qaRecording_triggered\0"
    "on_qaAudioTTS_triggered\0"
    "on_qaAudioUnlink_triggered\0"
    "on_qaAudioStats_triggered\0"
    "on_qaConfigDialog_triggered\0"
    "on_qaConfigHideFrame_triggered\0"
    "on_qmConfig_aboutToShow\0"
    "on_qaConfigMinimal_triggered\0"
    "on_qaConfigCert_triggered\0"
    "on_qaAudioWizard_triggered\0"
    "on_qaDeveloperConsole_triggered\0"
    "on_qaPositionalAudioViewer_triggered\0"
    "on_qaHelpWhatsThis_triggered\0"
    "on_qaHelpAbout_triggered\0"
    "on_qaHelpAboutQt_triggered\0"
    "on_qaHelpVersionCheck_triggered\0"
    "on_qaQuit_triggered\0on_qaHide_triggered\0"
    "on_qteChat_tabPressed\0on_qteChat_backtabPressed\0"
    "on_qteChat_ctrlSpacePressed\0"
    "on_qtvUsers_customContextMenuRequested\0"
    "mpos\0usePositionForGettingContext\0"
    "on_qteLog_customContextMenuRequested\0"
    "pos\0on_qteLog_anchorClicked\0"
    "on_qteLog_highlighted\0link\0"
    "on_PushToTalk_triggered\0on_PushToMute_triggered\0"
    "on_VolumeUp_triggered\0on_VolumeDown_triggered\0"
    "on_gsMuteSelf_down\0on_gsDeafSelf_down\0"
    "on_gsWhisper_triggered\0addTarget\0"
    "ShortcutTarget*\0removeTarget\0"
    "on_gsCycleTransmitMode_triggered\0"
    "on_gsToggleMainWindowVisibility_triggered\0"
    "on_gsTransmitModePushToTalk_triggered\0"
    "on_gsTransmitModeContinuous_triggered\0"
    "on_gsTransmitModeVAD_triggered\0"
    "on_gsSendTextMessage_triggered\0"
    "on_gsSendClipboardTextMessage_triggered\0"
    "on_gsToggleTalkingUI_triggered\0"
    "on_gsToggleSearch_triggered\0"
    "on_Reconnect_timeout\0on_Icon_activated\0"
    "QSystemTrayIcon::ActivationReason\0"
    "on_qaTalkingUIToggle_triggered\0"
    "voiceRecorderDialog_finished\0"
    "qtvUserCurrentChanged\0QModelIndex\0"
    "serverConnected\0serverDisconnected\0"
    "QAbstractSocket::SocketError\0reason\0"
    "resolverError\0viewCertificate\0openUrl\0"
    "url\0context_triggered\0updateTarget\0"
    "updateMenuPermissions\0userStateChanged\0"
    "destroyUserInformation\0trayAboutToShow\0"
    "sendChatbarMessage\0msg\0sendChatbarText\0"
    "pttReleased\0whisperReleased\0scdata\0"
    "onResetAudio\0showRaiseWindow\0"
    "on_qaFilterToggle_triggered\0saveImageAs\0"
    "getImagePath\0filename\0updateImagePath\0"
    "filepath\0setTransmissionMode\0mode\0"
    "setAudioMute\0mute\0setAudioDeaf\0deaf\0"
    "on_qaSearch_triggered\0"
    "toggleSearchDialogVisibility"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_MainWindow[] = {

 // content:
       8,       // revision
       0,       // classname
       0,    0, // classinfo
     134,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       4,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    0,  684,    2, 0x06 /* Public */,
       3,    2,  685,    2, 0x06 /* Public */,
       8,    2,  690,    2, 0x06 /* Public */,
       9,    1,  695,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
      12,    0,  698,    2, 0x0a /* Public */,
      13,    1,  699,    2, 0x0a /* Public */,
      13,    0,  702,    2, 0x2a /* Public | MethodCloned */,
      15,    0,  703,    2, 0x0a /* Public */,
      16,    0,  704,    2, 0x0a /* Public */,
      17,    0,  705,    2, 0x0a /* Public */,
      18,    0,  706,    2, 0x0a /* Public */,
      19,    0,  707,    2, 0x0a /* Public */,
      20,    0,  708,    2, 0x0a /* Public */,
      21,    0,  709,    2, 0x0a /* Public */,
      22,    0,  710,    2, 0x0a /* Public */,
      23,    0,  711,    2, 0x0a /* Public */,
      24,    0,  712,    2, 0x0a /* Public */,
      25,    1,  713,    2, 0x0a /* Public */,
      27,    1,  716,    2, 0x0a /* Public */,
      28,    0,  719,    2, 0x0a /* Public */,
      29,    0,  720,    2, 0x0a /* Public */,
      30,    0,  721,    2, 0x0a /* Public */,
      31,    0,  722,    2, 0x0a /* Public */,
      32,    0,  723,    2, 0x0a /* Public */,
      33,    0,  724,    2, 0x0a /* Public */,
      34,    0,  725,    2, 0x0a /* Public */,
      35,    0,  726,    2, 0x0a /* Public */,
      36,    0,  727,    2, 0x0a /* Public */,
      37,    0,  728,    2, 0x0a /* Public */,
      38,    0,  729,    2, 0x0a /* Public */,
      39,    0,  730,    2, 0x0a /* Public */,
      40,    0,  731,    2, 0x0a /* Public */,
      41,    0,  732,    2, 0x0a /* Public */,
      42,    0,  733,    2, 0x0a /* Public */,
      43,    0,  734,    2, 0x0a /* Public */,
      44,    0,  735,    2, 0x0a /* Public */,
      45,    0,  736,    2, 0x0a /* Public */,
      46,    0,  737,    2, 0x0a /* Public */,
      47,    0,  738,    2, 0x0a /* Public */,
      48,    0,  739,    2, 0x0a /* Public */,
      49,    0,  740,    2, 0x0a /* Public */,
      50,    0,  741,    2, 0x0a /* Public */,
      51,    0,  742,    2, 0x0a /* Public */,
      52,    0,  743,    2, 0x0a /* Public */,
      53,    0,  744,    2, 0x0a /* Public */,
      54,    0,  745,    2, 0x0a /* Public */,
      55,    0,  746,    2, 0x0a /* Public */,
      56,    0,  747,    2, 0x0a /* Public */,
      57,    0,  748,    2, 0x0a /* Public */,
      58,    0,  749,    2, 0x0a /* Public */,
      59,    0,  750,    2, 0x0a /* Public */,
      60,    0,  751,    2, 0x0a /* Public */,
      61,    0,  752,    2, 0x0a /* Public */,
      62,    0,  753,    2, 0x0a /* Public */,
      63,    0,  754,    2, 0x0a /* Public */,
      64,    0,  755,    2, 0x0a /* Public */,
      65,    0,  756,    2, 0x0a /* Public */,
      66,    0,  757,    2, 0x0a /* Public */,
      67,    0,  758,    2, 0x0a /* Public */,
      68,    0,  759,    2, 0x0a /* Public */,
      69,    0,  760,    2, 0x0a /* Public */,
      70,    0,  761,    2, 0x0a /* Public */,
      71,    0,  762,    2, 0x0a /* Public */,
      72,    0,  763,    2, 0x0a /* Public */,
      73,    0,  764,    2, 0x0a /* Public */,
      74,    0,  765,    2, 0x0a /* Public */,
      75,    0,  766,    2, 0x0a /* Public */,
      76,    0,  767,    2, 0x0a /* Public */,
      77,    0,  768,    2, 0x0a /* Public */,
      78,    0,  769,    2, 0x0a /* Public */,
      79,    0,  770,    2, 0x0a /* Public */,
      80,    0,  771,    2, 0x0a /* Public */,
      81,    0,  772,    2, 0x0a /* Public */,
      82,    0,  773,    2, 0x0a /* Public */,
      83,    0,  774,    2, 0x0a /* Public */,
      84,    0,  775,    2, 0x0a /* Public */,
      85,    0,  776,    2, 0x0a /* Public */,
      86,    0,  777,    2, 0x0a /* Public */,
      87,    0,  778,    2, 0x0a /* Public */,
      88,    2,  779,    2, 0x0a /* Public */,
      88,    1,  784,    2, 0x2a /* Public | MethodCloned */,
      91,    1,  787,    2, 0x0a /* Public */,
      93,    1,  790,    2, 0x0a /* Public */,
      94,    1,  793,    2, 0x0a /* Public */,
      96,    2,  796,    2, 0x0a /* Public */,
      97,    2,  801,    2, 0x0a /* Public */,
      98,    2,  806,    2, 0x0a /* Public */,
      99,    2,  811,    2, 0x0a /* Public */,
     100,    1,  816,    2, 0x0a /* Public */,
     101,    1,  819,    2, 0x0a /* Public */,
     102,    2,  822,    2, 0x0a /* Public */,
     103,    1,  827,    2, 0x0a /* Public */,
     105,    1,  830,    2, 0x0a /* Public */,
     106,    2,  833,    2, 0x0a /* Public */,
     107,    2,  838,    2, 0x0a /* Public */,
     108,    2,  843,    2, 0x0a /* Public */,
     109,    2,  848,    2, 0x0a /* Public */,
     110,    2,  853,    2, 0x0a /* Public */,
     111,    2,  858,    2, 0x0a /* Public */,
     112,    2,  863,    2, 0x0a /* Public */,
     113,    2,  868,    2, 0x0a /* Public */,
     114,    2,  873,    2, 0x0a /* Public */,
     115,    0,  878,    2, 0x0a /* Public */,
     116,    1,  879,    2, 0x0a /* Public */,
     118,    0,  882,    2, 0x0a /* Public */,
     119,    1,  883,    2, 0x0a /* Public */,
     120,    2,  886,    2, 0x0a /* Public */,
     122,    0,  891,    2, 0x0a /* Public */,
     123,    2,  892,    2, 0x0a /* Public */,
     126,    2,  897,    2, 0x0a /* Public */,
     127,    1,  902,    2, 0x0a /* Public */,
     128,    1,  905,    2, 0x0a /* Public */,
     130,    0,  908,    2, 0x0a /* Public */,
     131,    0,  909,    2, 0x0a /* Public */,
     132,    0,  910,    2, 0x0a /* Public */,
     133,    0,  911,    2, 0x0a /* Public */,
     134,    0,  912,    2, 0x0a /* Public */,
     135,    0,  913,    2, 0x0a /* Public */,
     136,    1,  914,    2, 0x0a /* Public */,
     138,    1,  917,    2, 0x0a /* Public */,
     139,    0,  920,    2, 0x0a /* Public */,
     140,    1,  921,    2, 0x0a /* Public */,
     142,    0,  924,    2, 0x0a /* Public */,
     143,    0,  925,    2, 0x0a /* Public */,
     144,    0,  926,    2, 0x0a /* Public */,
     145,    0,  927,    2, 0x0a /* Public */,
     146,    1,  928,    2, 0x0a /* Public */,
     146,    0,  931,    2, 0x2a /* Public | MethodCloned */,
     148,    1,  932,    2, 0x0a /* Public */,
     150,    1,  935,    2, 0x0a /* Public */,
     152,    1,  938,    2, 0x0a /* Public */,
     154,    1,  941,    2, 0x0a /* Public */,
     156,    0,  944,    2, 0x0a /* Public */,
     157,    0,  945,    2, 0x0a /* Public */,

 // signals: parameters
    QMetaType::Void,
    QMetaType::Void, 0x80000000 | 4, 0x80000000 | 6,    5,    7,
    QMetaType::Void, 0x80000000 | 4, 0x80000000 | 6,    5,    7,
    QMetaType::Void, 0x80000000 | 10,   11,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void, QMetaType::Bool,   14,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::Int,   26,
    QMetaType::Void, 0x80000000 | 10,   11,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::QPoint, QMetaType::Bool,   89,   90,
    QMetaType::Void, QMetaType::QPoint,   89,
    QMetaType::Void, QMetaType::QPoint,   92,
    QMetaType::Void, QMetaType::QUrl,    2,
    QMetaType::Void, QMetaType::QUrl,   95,
    QMetaType::Void, QMetaType::Bool, QMetaType::QVariant,    2,    2,
    QMetaType::Void, QMetaType::Bool, QMetaType::QVariant,    2,    2,
    QMetaType::Void, QMetaType::Bool, QMetaType::QVariant,    2,    2,
    QMetaType::Void, QMetaType::Bool, QMetaType::QVariant,    2,    2,
    QMetaType::Void, QMetaType::QVariant,    2,
    QMetaType::Void, QMetaType::QVariant,    2,
    QMetaType::Void, QMetaType::Bool, QMetaType::QVariant,    2,    2,
    QMetaType::Void, 0x80000000 | 104,    2,
    QMetaType::Void, 0x80000000 | 104,    2,
    QMetaType::Void, QMetaType::Bool, QMetaType::QVariant,    2,    2,
    QMetaType::Void, QMetaType::Bool, QMetaType::QVariant,    2,    2,
    QMetaType::Void, QMetaType::Bool, QMetaType::QVariant,    2,    2,
    QMetaType::Void, QMetaType::Bool, QMetaType::QVariant,    2,    2,
    QMetaType::Void, QMetaType::Bool, QMetaType::QVariant,    2,    2,
    QMetaType::Void, QMetaType::Bool, QMetaType::QVariant,    2,    2,
    QMetaType::Void, QMetaType::Bool, QMetaType::QVariant,    2,    2,
    QMetaType::Void, QMetaType::Bool, QMetaType::QVariant,    2,    2,
    QMetaType::Void, QMetaType::Bool, QMetaType::QVariant,    2,    2,
    QMetaType::Void,
    QMetaType::Void, 0x80000000 | 117,    2,
    QMetaType::Void,
    QMetaType::Void, QMetaType::Int,    2,
    QMetaType::Void, 0x80000000 | 121, 0x80000000 | 121,    2,    2,
    QMetaType::Void,
    QMetaType::Void, 0x80000000 | 124, QMetaType::QString,    2,  125,
    QMetaType::Void, 0x80000000 | 124, QMetaType::QString,    2,  125,
    QMetaType::Void, QMetaType::Bool,    2,
    QMetaType::Void, QMetaType::QUrl,  129,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::QString,  137,
    QMetaType::Void, QMetaType::QString,  137,
    QMetaType::Void,
    QMetaType::Void, QMetaType::QVariant,  141,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::QString, QMetaType::QString,  147,
    QMetaType::QString,
    QMetaType::Void, QMetaType::QString,  149,
    QMetaType::Void, 0x80000000 | 10,  151,
    QMetaType::Void, QMetaType::Bool,  153,
    QMetaType::Void, QMetaType::Bool,  155,
    QMetaType::Void,
    QMetaType::Void,

       0        // eod
};

void MainWindow::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<MainWindow *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->serverSynchronized(); break;
        case 1: _t->userAddedChannelListener((*reinterpret_cast< ClientUser*(*)>(_a[1])),(*reinterpret_cast< Channel*(*)>(_a[2]))); break;
        case 2: _t->userRemovedChannelListener((*reinterpret_cast< ClientUser*(*)>(_a[1])),(*reinterpret_cast< Channel*(*)>(_a[2]))); break;
        case 3: _t->transmissionModeChanged((*reinterpret_cast< Settings::AudioTransmit(*)>(_a[1]))); break;
        case 4: _t->on_qmServer_aboutToShow(); break;
        case 5: _t->on_qaServerConnect_triggered((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 6: _t->on_qaServerConnect_triggered(); break;
        case 7: _t->on_qaServerDisconnect_triggered(); break;
        case 8: _t->on_qaServerBanList_triggered(); break;
        case 9: _t->on_qaServerUserList_triggered(); break;
        case 10: _t->on_qaServerInformation_triggered(); break;
        case 11: _t->on_qaServerTexture_triggered(); break;
        case 12: _t->on_qaServerTextureRemove_triggered(); break;
        case 13: _t->on_qaServerTokens_triggered(); break;
        case 14: _t->on_qmSelf_aboutToShow(); break;
        case 15: _t->on_qaSelfComment_triggered(); break;
        case 16: _t->on_qaSelfRegister_triggered(); break;
        case 17: _t->qcbTransmitMode_activated((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 18: _t->updateTransmitModeComboBox((*reinterpret_cast< Settings::AudioTransmit(*)>(_a[1]))); break;
        case 19: _t->qmUser_aboutToShow(); break;
        case 20: _t->qmListener_aboutToShow(); break;
        case 21: _t->on_qaUserCommentReset_triggered(); break;
        case 22: _t->on_qaUserTextureReset_triggered(); break;
        case 23: _t->on_qaUserCommentView_triggered(); break;
        case 24: _t->on_qaUserKick_triggered(); break;
        case 25: _t->on_qaUserBan_triggered(); break;
        case 26: _t->on_qaUserMute_triggered(); break;
        case 27: _t->on_qaUserDeaf_triggered(); break;
        case 28: _t->on_qaSelfPrioritySpeaker_triggered(); break;
        case 29: _t->on_qaUserPrioritySpeaker_triggered(); break;
        case 30: _t->on_qaUserLocalIgnore_triggered(); break;
        case 31: _t->on_qaUserLocalIgnoreTTS_triggered(); break;
        case 32: _t->on_qaUserLocalMute_triggered(); break;
        case 33: _t->on_qaUserLocalNickname_triggered(); break;
        case 34: _t->on_qaUserLocalVolume_triggered(); break;
        case 35: _t->on_qaUserTextMessage_triggered(); break;
        case 36: _t->on_qaUserRegister_triggered(); break;
        case 37: _t->on_qaUserInformation_triggered(); break;
        case 38: _t->on_qaUserFriendAdd_triggered(); break;
        case 39: _t->on_qaUserFriendRemove_triggered(); break;
        case 40: _t->on_qaUserFriendUpdate_triggered(); break;
        case 41: _t->qmChannel_aboutToShow(); break;
        case 42: _t->on_qaChannelJoin_triggered(); break;
        case 43: _t->on_qaUserJoin_triggered(); break;
        case 44: _t->on_qaChannelListen_triggered(); break;
        case 45: _t->on_qaChannelAdd_triggered(); break;
        case 46: _t->on_qaChannelRemove_triggered(); break;
        case 47: _t->on_qaChannelACL_triggered(); break;
        case 48: _t->on_qaChannelLink_triggered(); break;
        case 49: _t->on_qaChannelUnlink_triggered(); break;
        case 50: _t->on_qaChannelUnlinkAll_triggered(); break;
        case 51: _t->on_qaChannelSendMessage_triggered(); break;
        case 52: _t->on_qaChannelFilter_triggered(); break;
        case 53: _t->on_qaChannelCopyURL_triggered(); break;
        case 54: _t->on_qaListenerLocalVolume_triggered(); break;
        case 55: _t->on_qaAudioReset_triggered(); break;
        case 56: _t->on_qaAudioMute_triggered(); break;
        case 57: _t->on_qaAudioDeaf_triggered(); break;
        case 58: _t->on_qaRecording_triggered(); break;
        case 59: _t->on_qaAudioTTS_triggered(); break;
        case 60: _t->on_qaAudioUnlink_triggered(); break;
        case 61: _t->on_qaAudioStats_triggered(); break;
        case 62: _t->on_qaConfigDialog_triggered(); break;
        case 63: _t->on_qaConfigHideFrame_triggered(); break;
        case 64: _t->on_qmConfig_aboutToShow(); break;
        case 65: _t->on_qaConfigMinimal_triggered(); break;
        case 66: _t->on_qaConfigCert_triggered(); break;
        case 67: _t->on_qaAudioWizard_triggered(); break;
        case 68: _t->on_qaDeveloperConsole_triggered(); break;
        case 69: _t->on_qaPositionalAudioViewer_triggered(); break;
        case 70: _t->on_qaHelpWhatsThis_triggered(); break;
        case 71: _t->on_qaHelpAbout_triggered(); break;
        case 72: _t->on_qaHelpAboutQt_triggered(); break;
        case 73: _t->on_qaHelpVersionCheck_triggered(); break;
        case 74: _t->on_qaQuit_triggered(); break;
        case 75: _t->on_qaHide_triggered(); break;
        case 76: _t->on_qteChat_tabPressed(); break;
        case 77: _t->on_qteChat_backtabPressed(); break;
        case 78: _t->on_qteChat_ctrlSpacePressed(); break;
        case 79: _t->on_qtvUsers_customContextMenuRequested((*reinterpret_cast< const QPoint(*)>(_a[1])),(*reinterpret_cast< bool(*)>(_a[2]))); break;
        case 80: _t->on_qtvUsers_customContextMenuRequested((*reinterpret_cast< const QPoint(*)>(_a[1]))); break;
        case 81: _t->on_qteLog_customContextMenuRequested((*reinterpret_cast< const QPoint(*)>(_a[1]))); break;
        case 82: _t->on_qteLog_anchorClicked((*reinterpret_cast< const QUrl(*)>(_a[1]))); break;
        case 83: _t->on_qteLog_highlighted((*reinterpret_cast< const QUrl(*)>(_a[1]))); break;
        case 84: _t->on_PushToTalk_triggered((*reinterpret_cast< bool(*)>(_a[1])),(*reinterpret_cast< QVariant(*)>(_a[2]))); break;
        case 85: _t->on_PushToMute_triggered((*reinterpret_cast< bool(*)>(_a[1])),(*reinterpret_cast< QVariant(*)>(_a[2]))); break;
        case 86: _t->on_VolumeUp_triggered((*reinterpret_cast< bool(*)>(_a[1])),(*reinterpret_cast< QVariant(*)>(_a[2]))); break;
        case 87: _t->on_VolumeDown_triggered((*reinterpret_cast< bool(*)>(_a[1])),(*reinterpret_cast< QVariant(*)>(_a[2]))); break;
        case 88: _t->on_gsMuteSelf_down((*reinterpret_cast< QVariant(*)>(_a[1]))); break;
        case 89: _t->on_gsDeafSelf_down((*reinterpret_cast< QVariant(*)>(_a[1]))); break;
        case 90: _t->on_gsWhisper_triggered((*reinterpret_cast< bool(*)>(_a[1])),(*reinterpret_cast< QVariant(*)>(_a[2]))); break;
        case 91: _t->addTarget((*reinterpret_cast< ShortcutTarget*(*)>(_a[1]))); break;
        case 92: _t->removeTarget((*reinterpret_cast< ShortcutTarget*(*)>(_a[1]))); break;
        case 93: _t->on_gsCycleTransmitMode_triggered((*reinterpret_cast< bool(*)>(_a[1])),(*reinterpret_cast< QVariant(*)>(_a[2]))); break;
        case 94: _t->on_gsToggleMainWindowVisibility_triggered((*reinterpret_cast< bool(*)>(_a[1])),(*reinterpret_cast< QVariant(*)>(_a[2]))); break;
        case 95: _t->on_gsTransmitModePushToTalk_triggered((*reinterpret_cast< bool(*)>(_a[1])),(*reinterpret_cast< QVariant(*)>(_a[2]))); break;
        case 96: _t->on_gsTransmitModeContinuous_triggered((*reinterpret_cast< bool(*)>(_a[1])),(*reinterpret_cast< QVariant(*)>(_a[2]))); break;
        case 97: _t->on_gsTransmitModeVAD_triggered((*reinterpret_cast< bool(*)>(_a[1])),(*reinterpret_cast< QVariant(*)>(_a[2]))); break;
        case 98: _t->on_gsSendTextMessage_triggered((*reinterpret_cast< bool(*)>(_a[1])),(*reinterpret_cast< QVariant(*)>(_a[2]))); break;
        case 99: _t->on_gsSendClipboardTextMessage_triggered((*reinterpret_cast< bool(*)>(_a[1])),(*reinterpret_cast< QVariant(*)>(_a[2]))); break;
        case 100: _t->on_gsToggleTalkingUI_triggered((*reinterpret_cast< bool(*)>(_a[1])),(*reinterpret_cast< QVariant(*)>(_a[2]))); break;
        case 101: _t->on_gsToggleSearch_triggered((*reinterpret_cast< bool(*)>(_a[1])),(*reinterpret_cast< QVariant(*)>(_a[2]))); break;
        case 102: _t->on_Reconnect_timeout(); break;
        case 103: _t->on_Icon_activated((*reinterpret_cast< QSystemTrayIcon::ActivationReason(*)>(_a[1]))); break;
        case 104: _t->on_qaTalkingUIToggle_triggered(); break;
        case 105: _t->voiceRecorderDialog_finished((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 106: _t->qtvUserCurrentChanged((*reinterpret_cast< const QModelIndex(*)>(_a[1])),(*reinterpret_cast< const QModelIndex(*)>(_a[2]))); break;
        case 107: _t->serverConnected(); break;
        case 108: _t->serverDisconnected((*reinterpret_cast< QAbstractSocket::SocketError(*)>(_a[1])),(*reinterpret_cast< QString(*)>(_a[2]))); break;
        case 109: _t->resolverError((*reinterpret_cast< QAbstractSocket::SocketError(*)>(_a[1])),(*reinterpret_cast< QString(*)>(_a[2]))); break;
        case 110: _t->viewCertificate((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 111: _t->openUrl((*reinterpret_cast< const QUrl(*)>(_a[1]))); break;
        case 112: _t->context_triggered(); break;
        case 113: _t->updateTarget(); break;
        case 114: _t->updateMenuPermissions(); break;
        case 115: _t->userStateChanged(); break;
        case 116: _t->destroyUserInformation(); break;
        case 117: _t->trayAboutToShow(); break;
        case 118: _t->sendChatbarMessage((*reinterpret_cast< QString(*)>(_a[1]))); break;
        case 119: _t->sendChatbarText((*reinterpret_cast< QString(*)>(_a[1]))); break;
        case 120: _t->pttReleased(); break;
        case 121: _t->whisperReleased((*reinterpret_cast< QVariant(*)>(_a[1]))); break;
        case 122: _t->onResetAudio(); break;
        case 123: _t->showRaiseWindow(); break;
        case 124: _t->on_qaFilterToggle_triggered(); break;
        case 125: _t->saveImageAs(); break;
        case 126: { QString _r = _t->getImagePath((*reinterpret_cast< QString(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< QString*>(_a[0]) = std::move(_r); }  break;
        case 127: { QString _r = _t->getImagePath();
            if (_a[0]) *reinterpret_cast< QString*>(_a[0]) = std::move(_r); }  break;
        case 128: _t->updateImagePath((*reinterpret_cast< QString(*)>(_a[1]))); break;
        case 129: _t->setTransmissionMode((*reinterpret_cast< Settings::AudioTransmit(*)>(_a[1]))); break;
        case 130: _t->setAudioMute((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 131: _t->setAudioDeaf((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 132: _t->on_qaSearch_triggered(); break;
        case 133: _t->toggleSearchDialogVisibility(); break;
        default: ;
        }
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        switch (_id) {
        default: *reinterpret_cast<int*>(_a[0]) = -1; break;
        case 1:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< ClientUser* >(); break;
            }
            break;
        case 2:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< ClientUser* >(); break;
            }
            break;
        case 108:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< QAbstractSocket::SocketError >(); break;
            }
            break;
        case 109:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< QAbstractSocket::SocketError >(); break;
            }
            break;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            using _t = void (MainWindow::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&MainWindow::serverSynchronized)) {
                *result = 0;
                return;
            }
        }
        {
            using _t = void (MainWindow::*)(ClientUser * , Channel * );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&MainWindow::userAddedChannelListener)) {
                *result = 1;
                return;
            }
        }
        {
            using _t = void (MainWindow::*)(ClientUser * , Channel * );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&MainWindow::userRemovedChannelListener)) {
                *result = 2;
                return;
            }
        }
        {
            using _t = void (MainWindow::*)(Settings::AudioTransmit );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&MainWindow::transmissionModeChanged)) {
                *result = 3;
                return;
            }
        }
    }
}

QT_INIT_METAOBJECT const QMetaObject MainWindow::staticMetaObject = { {
    &QMainWindow::staticMetaObject,
    qt_meta_stringdata_MainWindow.data,
    qt_meta_data_MainWindow,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *MainWindow::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *MainWindow::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_MainWindow.stringdata0))
        return static_cast<void*>(this);
    if (!strcmp(_clname, "MessageHandler"))
        return static_cast< MessageHandler*>(this);
    if (!strcmp(_clname, "Ui::MainWindow"))
        return static_cast< Ui::MainWindow*>(this);
    return QMainWindow::qt_metacast(_clname);
}

int MainWindow::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QMainWindow::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 134)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 134;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 134)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 134;
    }
    return _id;
}

// SIGNAL 0
void MainWindow::serverSynchronized()
{
    QMetaObject::activate(this, &staticMetaObject, 0, nullptr);
}

// SIGNAL 1
void MainWindow::userAddedChannelListener(ClientUser * _t1, Channel * _t2)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)) };
    QMetaObject::activate(this, &staticMetaObject, 1, _a);
}

// SIGNAL 2
void MainWindow::userRemovedChannelListener(ClientUser * _t1, Channel * _t2)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)) };
    QMetaObject::activate(this, &staticMetaObject, 2, _a);
}

// SIGNAL 3
void MainWindow::transmissionModeChanged(Settings::AudioTransmit _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 3, _a);
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
