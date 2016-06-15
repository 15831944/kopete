#include <kdialog.h>
#include <klocale.h>

/********************************************************************************
** Form generated from reading UI file 'behaviorconfig_events.ui'
**
** Created by: Qt User Interface Compiler version 4.8.7
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_BEHAVIORCONFIG_EVENTS_H
#define UI_BEHAVIORCONFIG_EVENTS_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtGui/QApplication>
#include <QtGui/QButtonGroup>
#include <QtGui/QCheckBox>
#include <QtGui/QGroupBox>
#include <QtGui/QHBoxLayout>
#include <QtGui/QHeaderView>
#include <QtGui/QSpacerItem>
#include <QtGui/QVBoxLayout>
#include <QtGui/QWidget>

QT_BEGIN_NAMESPACE

class Ui_BehaviorConfig_Events
{
public:
    QVBoxLayout *verticalLayout_2;
    QGroupBox *notifyGroupBox;
    QVBoxLayout *verticalLayout;
    QCheckBox *kcfg_trayflashNotify;
    QHBoxLayout *hboxLayout;
    QSpacerItem *spacerItem;
    QCheckBox *kcfg_trayflashNotifyLeftClickOpensMessage;
    QCheckBox *kcfg_animateOnMessageWithOpenChat;
    QCheckBox *kcfg_balloonGroupMessageNotificationsPerSender;
    QCheckBox *kcfg_balloonNotifyIgnoreClosesChatView;
    QCheckBox *kcfg_queueOnlyHighlightedMessagesInGroupChats;
    QCheckBox *kcfg_queueOnlyMessagesOnAnotherDesktop;
    QGroupBox *groupBox;
    QVBoxLayout *vboxLayout;
    QCheckBox *kcfg_enableEventsWhileAway;
    QCheckBox *kcfg_trayflashNotifySetCurrentDesktopToChatView;
    QCheckBox *kcfg_raiseMessageWindow;
    QSpacerItem *spacerItem1;

    void setupUi(QWidget *BehaviorConfig_Events)
    {
        if (BehaviorConfig_Events->objectName().isEmpty())
            BehaviorConfig_Events->setObjectName(QString::fromUtf8("BehaviorConfig_Events"));
        BehaviorConfig_Events->resize(487, 412);
        verticalLayout_2 = new QVBoxLayout(BehaviorConfig_Events);
        verticalLayout_2->setObjectName(QString::fromUtf8("verticalLayout_2"));
        notifyGroupBox = new QGroupBox(BehaviorConfig_Events);
        notifyGroupBox->setObjectName(QString::fromUtf8("notifyGroupBox"));
        verticalLayout = new QVBoxLayout(notifyGroupBox);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        kcfg_trayflashNotify = new QCheckBox(notifyGroupBox);
        kcfg_trayflashNotify->setObjectName(QString::fromUtf8("kcfg_trayflashNotify"));

        verticalLayout->addWidget(kcfg_trayflashNotify);

        hboxLayout = new QHBoxLayout();
#ifndef UI_Q_OS_MAC
        hboxLayout->setSpacing(6);
#endif
        hboxLayout->setContentsMargins(0, 0, 0, 0);
        hboxLayout->setObjectName(QString::fromUtf8("hboxLayout"));
        spacerItem = new QSpacerItem(16, 16, QSizePolicy::Fixed, QSizePolicy::Minimum);

        hboxLayout->addItem(spacerItem);

        kcfg_trayflashNotifyLeftClickOpensMessage = new QCheckBox(notifyGroupBox);
        kcfg_trayflashNotifyLeftClickOpensMessage->setObjectName(QString::fromUtf8("kcfg_trayflashNotifyLeftClickOpensMessage"));
        kcfg_trayflashNotifyLeftClickOpensMessage->setEnabled(false);

        hboxLayout->addWidget(kcfg_trayflashNotifyLeftClickOpensMessage);


        verticalLayout->addLayout(hboxLayout);

        kcfg_animateOnMessageWithOpenChat = new QCheckBox(notifyGroupBox);
        kcfg_animateOnMessageWithOpenChat->setObjectName(QString::fromUtf8("kcfg_animateOnMessageWithOpenChat"));

        verticalLayout->addWidget(kcfg_animateOnMessageWithOpenChat);

        kcfg_balloonGroupMessageNotificationsPerSender = new QCheckBox(notifyGroupBox);
        kcfg_balloonGroupMessageNotificationsPerSender->setObjectName(QString::fromUtf8("kcfg_balloonGroupMessageNotificationsPerSender"));

        verticalLayout->addWidget(kcfg_balloonGroupMessageNotificationsPerSender);

        kcfg_balloonNotifyIgnoreClosesChatView = new QCheckBox(notifyGroupBox);
        kcfg_balloonNotifyIgnoreClosesChatView->setObjectName(QString::fromUtf8("kcfg_balloonNotifyIgnoreClosesChatView"));

        verticalLayout->addWidget(kcfg_balloonNotifyIgnoreClosesChatView);

        kcfg_queueOnlyHighlightedMessagesInGroupChats = new QCheckBox(notifyGroupBox);
        kcfg_queueOnlyHighlightedMessagesInGroupChats->setObjectName(QString::fromUtf8("kcfg_queueOnlyHighlightedMessagesInGroupChats"));

        verticalLayout->addWidget(kcfg_queueOnlyHighlightedMessagesInGroupChats);

        kcfg_queueOnlyMessagesOnAnotherDesktop = new QCheckBox(notifyGroupBox);
        kcfg_queueOnlyMessagesOnAnotherDesktop->setObjectName(QString::fromUtf8("kcfg_queueOnlyMessagesOnAnotherDesktop"));

        verticalLayout->addWidget(kcfg_queueOnlyMessagesOnAnotherDesktop);


        verticalLayout_2->addWidget(notifyGroupBox);

        groupBox = new QGroupBox(BehaviorConfig_Events);
        groupBox->setObjectName(QString::fromUtf8("groupBox"));
        vboxLayout = new QVBoxLayout(groupBox);
        vboxLayout->setObjectName(QString::fromUtf8("vboxLayout"));
        kcfg_enableEventsWhileAway = new QCheckBox(groupBox);
        kcfg_enableEventsWhileAway->setObjectName(QString::fromUtf8("kcfg_enableEventsWhileAway"));

        vboxLayout->addWidget(kcfg_enableEventsWhileAway);

        kcfg_trayflashNotifySetCurrentDesktopToChatView = new QCheckBox(groupBox);
        kcfg_trayflashNotifySetCurrentDesktopToChatView->setObjectName(QString::fromUtf8("kcfg_trayflashNotifySetCurrentDesktopToChatView"));

        vboxLayout->addWidget(kcfg_trayflashNotifySetCurrentDesktopToChatView);

        kcfg_raiseMessageWindow = new QCheckBox(groupBox);
        kcfg_raiseMessageWindow->setObjectName(QString::fromUtf8("kcfg_raiseMessageWindow"));

        vboxLayout->addWidget(kcfg_raiseMessageWindow);


        verticalLayout_2->addWidget(groupBox);

        spacerItem1 = new QSpacerItem(20, 0, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout_2->addItem(spacerItem1);

        QWidget::setTabOrder(kcfg_trayflashNotify, kcfg_trayflashNotifyLeftClickOpensMessage);
        QWidget::setTabOrder(kcfg_trayflashNotifyLeftClickOpensMessage, kcfg_animateOnMessageWithOpenChat);
        QWidget::setTabOrder(kcfg_animateOnMessageWithOpenChat, kcfg_balloonGroupMessageNotificationsPerSender);
        QWidget::setTabOrder(kcfg_balloonGroupMessageNotificationsPerSender, kcfg_balloonNotifyIgnoreClosesChatView);
        QWidget::setTabOrder(kcfg_balloonNotifyIgnoreClosesChatView, kcfg_queueOnlyHighlightedMessagesInGroupChats);
        QWidget::setTabOrder(kcfg_queueOnlyHighlightedMessagesInGroupChats, kcfg_queueOnlyMessagesOnAnotherDesktop);
        QWidget::setTabOrder(kcfg_queueOnlyMessagesOnAnotherDesktop, kcfg_enableEventsWhileAway);
        QWidget::setTabOrder(kcfg_enableEventsWhileAway, kcfg_trayflashNotifySetCurrentDesktopToChatView);
        QWidget::setTabOrder(kcfg_trayflashNotifySetCurrentDesktopToChatView, kcfg_raiseMessageWindow);

        retranslateUi(BehaviorConfig_Events);
        QObject::connect(kcfg_trayflashNotify, SIGNAL(toggled(bool)), kcfg_trayflashNotifyLeftClickOpensMessage, SLOT(setEnabled(bool)));

        QMetaObject::connectSlotsByName(BehaviorConfig_Events);
    } // setupUi

    void retranslateUi(QWidget *BehaviorConfig_Events)
    {
        BehaviorConfig_Events->setWindowTitle(tr2i18n("Events", 0));
        notifyGroupBox->setTitle(tr2i18n("Notifications", 0));
#ifndef UI_QT_NO_TOOLTIP
        kcfg_trayflashNotify->setToolTip(tr2i18n("Animate the system tray icon on an incoming message", 0));
#endif // QT_NO_TOOLTIP
#ifndef UI_QT_NO_WHATSTHIS
        kcfg_trayflashNotify->setWhatsThis(tr2i18n("Animate the system tray icon whenever a message comes in.", 0));
#endif // QT_NO_WHATSTHIS
        kcfg_trayflashNotify->setText(tr2i18n("Animate s&ystem tray icon", 0));
#ifndef UI_QT_NO_TOOLTIP
        kcfg_trayflashNotifyLeftClickOpensMessage->setToolTip(tr2i18n("Left mouse click on flashing system tray opens message instead of restoring/minimizing contact list", 0));
#endif // QT_NO_TOOLTIP
#ifndef UI_QT_NO_WHATSTHIS
        kcfg_trayflashNotifyLeftClickOpensMessage->setWhatsThis(tr2i18n("A left mouse click on the flashing system tray icon opens the incoming message instead of restoring/minimizing the contact list (e.g. to check who is sending messages). A middle click always opens this message.", 0));
#endif // QT_NO_WHATSTHIS
        kcfg_trayflashNotifyLeftClickOpensMessage->setText(tr2i18n("&Left mouse click opens message", 0));
#ifndef UI_QT_NO_TOOLTIP
        kcfg_animateOnMessageWithOpenChat->setToolTip(tr2i18n("Animate the contact list or the system tray icon on an incoming message with open chat", 0));
#endif // QT_NO_TOOLTIP
        kcfg_animateOnMessageWithOpenChat->setText(tr2i18n("Animate on message with open chat", 0));
#ifndef UI_QT_NO_TOOLTIP
        kcfg_balloonGroupMessageNotificationsPerSender->setToolTip(tr2i18n("Use a single notification for messages from the same sender", 0));
#endif // QT_NO_TOOLTIP
#ifndef UI_QT_NO_WHATSTHIS
        kcfg_balloonGroupMessageNotificationsPerSender->setWhatsThis(tr2i18n("When a message arrives from a user who already has a message for which a notification is still active, then that notification is updated to indicate a new message has arrived, instead of creating a new notification.", 0));
#endif // QT_NO_WHATSTHIS
        kcfg_balloonGroupMessageNotificationsPerSender->setText(tr2i18n("Use a single notification for messages from the same sender", 0));
#ifndef UI_QT_NO_TOOLTIP
        kcfg_balloonNotifyIgnoreClosesChatView->setToolTip(tr2i18n("The \"Ignore\" button of the new message popup closes the chat window for the sender", 0));
#endif // QT_NO_TOOLTIP
#ifndef UI_QT_NO_WHATSTHIS
        kcfg_balloonNotifyIgnoreClosesChatView->setWhatsThis(tr2i18n("If there is already a chat window opened for the sender of the message displayed in the new message popup the \"Ignore\" button will close this chat window.", 0));
#endif // QT_NO_WHATSTHIS
        kcfg_balloonNotifyIgnoreClosesChatView->setText(tr2i18n("Button \"I&gnore\" in new message popups closes chat", 0));
#ifndef UI_QT_NO_TOOLTIP
        kcfg_queueOnlyHighlightedMessagesInGroupChats->setToolTip(tr2i18n("Notify only highlighted messages in group chats", 0));
#endif // QT_NO_TOOLTIP
#ifndef UI_QT_NO_WHATSTHIS
        kcfg_queueOnlyHighlightedMessagesInGroupChats->setWhatsThis(tr2i18n("In very active group chats, important messages can be singled out by preventing notifications for non-highlighted messages.", 0));
#endif // QT_NO_WHATSTHIS
        kcfg_queueOnlyHighlightedMessagesInGroupChats->setText(tr2i18n("Exclude non-&highlighted messages in group chats", 0));
#ifndef UI_QT_NO_TOOLTIP
        kcfg_queueOnlyMessagesOnAnotherDesktop->setToolTip(tr2i18n("Use the same notifications for events in the active chat window and other chat windows on the current desktop (usually less intrusive)", 0));
#endif // QT_NO_TOOLTIP
#ifndef UI_QT_NO_WHATSTHIS
        kcfg_queueOnlyMessagesOnAnotherDesktop->setWhatsThis(tr2i18n("If activated, events for chat windows that are on the current desktop will be handled like events in the active chat window: The system tray icon and the sender icon in the contact list are not animated and the \"Incoming Message for Active Chat\" event is used for the notification. Chat windows on other desktops will trigger notifications.\n"
"If not activated, all chat windows except the active one will notify you that an event has occurred using animations (if activated) and the \"Incoming Message\" event.", 0));
#endif // QT_NO_WHATSTHIS
        kcfg_queueOnlyMessagesOnAnotherDesktop->setText(tr2i18n("Treat all chats on the current des&ktop like active chats", 0));
        groupBox->setTitle(tr2i18n("Miscellaneous", 0));
#ifndef UI_QT_NO_TOOLTIP
        kcfg_enableEventsWhileAway->setToolTip(tr2i18n("Enable events if your account status is \"Away\"", 0));
#endif // QT_NO_TOOLTIP
#ifndef UI_QT_NO_WHATSTHIS
        kcfg_enableEventsWhileAway->setWhatsThis(tr2i18n("Enable notification events even if your account status is \"Away\" or less available, e.g. \"Not Available\" or \"Do not Disturb\". Note: This does not affect the flashing of the system tray icon.", 0));
#endif // QT_NO_WHATSTHIS
        kcfg_enableEventsWhileAway->setText(tr2i18n("E&nable events while away", 0));
#ifndef UI_QT_NO_TOOLTIP
        kcfg_trayflashNotifySetCurrentDesktopToChatView->setToolTip(tr2i18n("Switch to the desktop which contains the chat window for the sender when opening his/her message", 0));
#endif // QT_NO_TOOLTIP
#ifndef UI_QT_NO_WHATSTHIS
        kcfg_trayflashNotifySetCurrentDesktopToChatView->setWhatsThis(tr2i18n("If there is already a chat window open for the sender of the message, opening his/her message will cause a switch to the desktop which contains this chat window.", 0));
#endif // QT_NO_WHATSTHIS
        kcfg_trayflashNotifySetCurrentDesktopToChatView->setText(tr2i18n("Switch &to desktop containing chat on opening message", 0));
#ifndef UI_QT_NO_TOOLTIP
        kcfg_raiseMessageWindow->setToolTip(tr2i18n("Raise the chat window/tab on an incoming message", 0));
#endif // QT_NO_TOOLTIP
#ifndef UI_QT_NO_WHATSTHIS
        kcfg_raiseMessageWindow->setWhatsThis(tr2i18n("If there is already a chat window opened for the sender of an incoming message this window will be put on the current desktop and in front of all other windows.", 0));
#endif // QT_NO_WHATSTHIS
        kcfg_raiseMessageWindow->setText(tr2i18n("&Raise window on incoming message", 0));
    } // retranslateUi

};

namespace Ui {
    class BehaviorConfig_Events: public Ui_BehaviorConfig_Events {};
} // namespace Ui

QT_END_NAMESPACE

#endif // BEHAVIORCONFIG_EVENTS_H

