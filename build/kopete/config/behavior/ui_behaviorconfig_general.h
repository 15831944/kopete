#include <kdialog.h>
#include <klocale.h>

/********************************************************************************
** Form generated from reading UI file 'behaviorconfig_general.ui'
**
** Created by: Qt User Interface Compiler version 4.8.7
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_BEHAVIORCONFIG_GENERAL_H
#define UI_BEHAVIORCONFIG_GENERAL_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtGui/QApplication>
#include <QtGui/QButtonGroup>
#include <QtGui/QCheckBox>
#include <QtGui/QComboBox>
#include <QtGui/QGroupBox>
#include <QtGui/QHeaderView>
#include <QtGui/QRadioButton>
#include <QtGui/QSpacerItem>
#include <QtGui/QVBoxLayout>
#include <QtGui/QWidget>

QT_BEGIN_NAMESPACE

class Ui_BehaviorConfig_General
{
public:
    QVBoxLayout *vboxLayout;
    QGroupBox *groupBox;
    QVBoxLayout *vboxLayout1;
    QCheckBox *kcfg_showSystemTray;
    QCheckBox *kcfg_startDocked;
    QGroupBox *groupBox_2;
    QVBoxLayout *vboxLayout2;
    QRadioButton *mInstantMessageOpeningChk;
    QRadioButton *kcfg_useMessageQueue;
    QCheckBox *kcfg_queueUnreadMessages;
    QGroupBox *initialStatusGroup;
    QVBoxLayout *vboxLayout3;
    QComboBox *kcfg_initialStatus;
    QSpacerItem *spacerItem;

    void setupUi(QWidget *BehaviorConfig_General)
    {
        if (BehaviorConfig_General->objectName().isEmpty())
            BehaviorConfig_General->setObjectName(QString::fromUtf8("BehaviorConfig_General"));
        BehaviorConfig_General->resize(364, 333);
        vboxLayout = new QVBoxLayout(BehaviorConfig_General);
        vboxLayout->setObjectName(QString::fromUtf8("vboxLayout"));
        groupBox = new QGroupBox(BehaviorConfig_General);
        groupBox->setObjectName(QString::fromUtf8("groupBox"));
        vboxLayout1 = new QVBoxLayout(groupBox);
        vboxLayout1->setObjectName(QString::fromUtf8("vboxLayout1"));
        kcfg_showSystemTray = new QCheckBox(groupBox);
        kcfg_showSystemTray->setObjectName(QString::fromUtf8("kcfg_showSystemTray"));

        vboxLayout1->addWidget(kcfg_showSystemTray);

        kcfg_startDocked = new QCheckBox(groupBox);
        kcfg_startDocked->setObjectName(QString::fromUtf8("kcfg_startDocked"));
        kcfg_startDocked->setEnabled(false);

        vboxLayout1->addWidget(kcfg_startDocked);


        vboxLayout->addWidget(groupBox);

        groupBox_2 = new QGroupBox(BehaviorConfig_General);
        groupBox_2->setObjectName(QString::fromUtf8("groupBox_2"));
        vboxLayout2 = new QVBoxLayout(groupBox_2);
        vboxLayout2->setObjectName(QString::fromUtf8("vboxLayout2"));
        mInstantMessageOpeningChk = new QRadioButton(groupBox_2);
        mInstantMessageOpeningChk->setObjectName(QString::fromUtf8("mInstantMessageOpeningChk"));

        vboxLayout2->addWidget(mInstantMessageOpeningChk);

        kcfg_useMessageQueue = new QRadioButton(groupBox_2);
        kcfg_useMessageQueue->setObjectName(QString::fromUtf8("kcfg_useMessageQueue"));

        vboxLayout2->addWidget(kcfg_useMessageQueue);

        kcfg_queueUnreadMessages = new QCheckBox(groupBox_2);
        kcfg_queueUnreadMessages->setObjectName(QString::fromUtf8("kcfg_queueUnreadMessages"));
        kcfg_queueUnreadMessages->setEnabled(false);

        vboxLayout2->addWidget(kcfg_queueUnreadMessages);


        vboxLayout->addWidget(groupBox_2);

        initialStatusGroup = new QGroupBox(BehaviorConfig_General);
        initialStatusGroup->setObjectName(QString::fromUtf8("initialStatusGroup"));
        vboxLayout3 = new QVBoxLayout(initialStatusGroup);
        vboxLayout3->setObjectName(QString::fromUtf8("vboxLayout3"));
        kcfg_initialStatus = new QComboBox(initialStatusGroup);
        kcfg_initialStatus->setObjectName(QString::fromUtf8("kcfg_initialStatus"));

        vboxLayout3->addWidget(kcfg_initialStatus);


        vboxLayout->addWidget(initialStatusGroup);

        spacerItem = new QSpacerItem(20, 0, QSizePolicy::Minimum, QSizePolicy::Expanding);

        vboxLayout->addItem(spacerItem);

        QWidget::setTabOrder(kcfg_showSystemTray, kcfg_startDocked);
        QWidget::setTabOrder(kcfg_startDocked, kcfg_useMessageQueue);
        QWidget::setTabOrder(kcfg_useMessageQueue, kcfg_initialStatus);

        retranslateUi(BehaviorConfig_General);
        QObject::connect(kcfg_showSystemTray, SIGNAL(toggled(bool)), kcfg_startDocked, SLOT(setEnabled(bool)));

        QMetaObject::connectSlotsByName(BehaviorConfig_General);
    } // setupUi

    void retranslateUi(QWidget *BehaviorConfig_General)
    {
        BehaviorConfig_General->setWindowTitle(tr2i18n("General", 0));
        groupBox->setTitle(tr2i18n("System Tray", 0));
#ifndef UI_QT_NO_TOOLTIP
        kcfg_showSystemTray->setToolTip(tr2i18n("Show the icon in the system tray", 0));
#endif // QT_NO_TOOLTIP
#ifndef UI_QT_NO_WHATSTHIS
        kcfg_showSystemTray->setWhatsThis(tr2i18n("By default, the system tray icon indicates new incoming messages using an animation. A left or middle mouse click on the icon will open the message in a new chat window. Pressing the \"View\" button in the notification popup has the same effect.", 0));
#endif // QT_NO_WHATSTHIS
        kcfg_showSystemTray->setText(tr2i18n("Show system &tray icon", 0));
#ifndef UI_QT_NO_TOOLTIP
        kcfg_startDocked->setToolTip(tr2i18n("Start with the main window minimized to the system tray", 0));
#endif // QT_NO_TOOLTIP
#ifndef UI_QT_NO_WHATSTHIS
        kcfg_startDocked->setWhatsThis(tr2i18n("Start with the main window hidden. The only visible item is the system tray icon.", 0));
#endif // QT_NO_WHATSTHIS
        kcfg_startDocked->setText(tr2i18n("Start &with hidden main window", 0));
        groupBox_2->setTitle(tr2i18n("Message Handling", 0));
#ifndef UI_QT_NO_TOOLTIP
        mInstantMessageOpeningChk->setToolTip(tr2i18n("Instantly open incoming messages", 0));
#endif // QT_NO_TOOLTIP
#ifndef UI_QT_NO_WHATSTHIS
        mInstantMessageOpeningChk->setWhatsThis(tr2i18n("If there is no chat window open, a new message arriving will cause a new window to open. If there is already a chat window opened for that sender, the message will immediately be displayed there.", 0));
#endif // QT_NO_WHATSTHIS
        mInstantMessageOpeningChk->setText(tr2i18n("Open messages instantl&y", 0));
#ifndef UI_QT_NO_TOOLTIP
        kcfg_useMessageQueue->setToolTip(tr2i18n("Use a message queue to store incoming messages", 0));
#endif // QT_NO_TOOLTIP
#ifndef UI_QT_NO_WHATSTHIS
        kcfg_useMessageQueue->setWhatsThis(tr2i18n("Store new incoming messages in a message queue. New messages are messages that cannot be displayed in an already open chat window. Only queued messages trigger notification via chat window and system tray icon animations.", 0));
#endif // QT_NO_WHATSTHIS
        kcfg_useMessageQueue->setText(tr2i18n("Use message &queue", 0));
#ifndef UI_QT_NO_TOOLTIP
        kcfg_queueUnreadMessages->setToolTip(tr2i18n("Also add unread messages to queue", 0));
#endif // QT_NO_TOOLTIP
#ifndef UI_QT_NO_WHATSTHIS
        kcfg_queueUnreadMessages->setWhatsThis(tr2i18n("Unread messages are messages that will be displayed in an already opened but inactive chat window. Only incoming queued messages trigger notification via chat window and system tray icon animations. With this option disabled only new incoming messages are queued, i.e. messages that cannot be displayed in an already open chat window.", 0));
#endif // QT_NO_WHATSTHIS
        kcfg_queueUnreadMessages->setText(tr2i18n("Queue unrea&d messages", 0));
        initialStatusGroup->setTitle(tr2i18n("Initial Status", 0));
        kcfg_initialStatus->clear();
        kcfg_initialStatus->insertItems(0, QStringList()
         << tr2i18n("Offline", 0)
         << tr2i18n("Online", 0)
         << tr2i18n("Away", 0)
         << tr2i18n("Busy", 0)
         << tr2i18n("Invisible", 0)
        );
#ifndef UI_QT_NO_TOOLTIP
        kcfg_initialStatus->setToolTip(tr2i18n("Set the initial status", 0));
#endif // QT_NO_TOOLTIP
#ifndef UI_QT_NO_WHATSTHIS
        kcfg_initialStatus->setWhatsThis(tr2i18n("When starting Kopete, and whenever your computer is online, all your accounts will go into the status selected here. You can exclude accounts individually in their properties.", 0));
#endif // QT_NO_WHATSTHIS
    } // retranslateUi

};

namespace Ui {
    class BehaviorConfig_General: public Ui_BehaviorConfig_General {};
} // namespace Ui

QT_END_NAMESPACE

#endif // BEHAVIORCONFIG_GENERAL_H

