#include <kdialog.h>
#include <klocale.h>

/********************************************************************************
** Form generated from reading UI file 'behaviorconfig_chat.ui'
**
** Created by: Qt User Interface Compiler version 4.8.7
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_BEHAVIORCONFIG_CHAT_H
#define UI_BEHAVIORCONFIG_CHAT_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtGui/QApplication>
#include <QtGui/QButtonGroup>
#include <QtGui/QCheckBox>
#include <QtGui/QComboBox>
#include <QtGui/QGroupBox>
#include <QtGui/QHBoxLayout>
#include <QtGui/QHeaderView>
#include <QtGui/QLabel>
#include <QtGui/QSpacerItem>
#include <QtGui/QSpinBox>
#include <QtGui/QVBoxLayout>
#include <QtGui/QWidget>

QT_BEGIN_NAMESPACE

class Ui_BehaviorConfig_Chat
{
public:
    QVBoxLayout *verticalLayout;
    QCheckBox *kcfg_showEvents;
    QCheckBox *kcfg_highlightEnabled;
    QCheckBox *kcfg_spellCheck;
    QCheckBox *kcfg_richTextByDefault;
    QCheckBox *kcfg_AlwaysShowTabs;
    QGroupBox *interfaceGroup;
    QHBoxLayout *hboxLayout;
    QComboBox *viewPlugin;
    QGroupBox *chatWindowGroup;
    QVBoxLayout *vboxLayout;
    QComboBox *kcfg_chatWindowGroupPolicy;
    QCheckBox *kcfg_showDates;
    QHBoxLayout *hboxLayout1;
    QCheckBox *kcfg_truncateContactName;
    QSpacerItem *spacerItem;
    QSpinBox *kcfg_truncateContactNameLength;
    QHBoxLayout *hboxLayout2;
    QLabel *txtChatViewBufferSize;
    QSpacerItem *spacerItem1;
    QSpinBox *kcfg_chatWindowBufferViewSize;
    QSpacerItem *spacerItem2;

    void setupUi(QWidget *BehaviorConfig_Chat)
    {
        if (BehaviorConfig_Chat->objectName().isEmpty())
            BehaviorConfig_Chat->setObjectName(QString::fromUtf8("BehaviorConfig_Chat"));
        BehaviorConfig_Chat->resize(590, 424);
        verticalLayout = new QVBoxLayout(BehaviorConfig_Chat);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        kcfg_showEvents = new QCheckBox(BehaviorConfig_Chat);
        kcfg_showEvents->setObjectName(QString::fromUtf8("kcfg_showEvents"));

        verticalLayout->addWidget(kcfg_showEvents);

        kcfg_highlightEnabled = new QCheckBox(BehaviorConfig_Chat);
        kcfg_highlightEnabled->setObjectName(QString::fromUtf8("kcfg_highlightEnabled"));
        QSizePolicy sizePolicy(QSizePolicy::Expanding, QSizePolicy::Fixed);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(kcfg_highlightEnabled->sizePolicy().hasHeightForWidth());
        kcfg_highlightEnabled->setSizePolicy(sizePolicy);

        verticalLayout->addWidget(kcfg_highlightEnabled);

        kcfg_spellCheck = new QCheckBox(BehaviorConfig_Chat);
        kcfg_spellCheck->setObjectName(QString::fromUtf8("kcfg_spellCheck"));
        sizePolicy.setHeightForWidth(kcfg_spellCheck->sizePolicy().hasHeightForWidth());
        kcfg_spellCheck->setSizePolicy(sizePolicy);

        verticalLayout->addWidget(kcfg_spellCheck);

        kcfg_richTextByDefault = new QCheckBox(BehaviorConfig_Chat);
        kcfg_richTextByDefault->setObjectName(QString::fromUtf8("kcfg_richTextByDefault"));
        sizePolicy.setHeightForWidth(kcfg_richTextByDefault->sizePolicy().hasHeightForWidth());
        kcfg_richTextByDefault->setSizePolicy(sizePolicy);

        verticalLayout->addWidget(kcfg_richTextByDefault);

        kcfg_AlwaysShowTabs = new QCheckBox(BehaviorConfig_Chat);
        kcfg_AlwaysShowTabs->setObjectName(QString::fromUtf8("kcfg_AlwaysShowTabs"));

        verticalLayout->addWidget(kcfg_AlwaysShowTabs);

        interfaceGroup = new QGroupBox(BehaviorConfig_Chat);
        interfaceGroup->setObjectName(QString::fromUtf8("interfaceGroup"));
        hboxLayout = new QHBoxLayout(interfaceGroup);
        hboxLayout->setObjectName(QString::fromUtf8("hboxLayout"));
        viewPlugin = new QComboBox(interfaceGroup);
        viewPlugin->setObjectName(QString::fromUtf8("viewPlugin"));

        hboxLayout->addWidget(viewPlugin);


        verticalLayout->addWidget(interfaceGroup);

        chatWindowGroup = new QGroupBox(BehaviorConfig_Chat);
        chatWindowGroup->setObjectName(QString::fromUtf8("chatWindowGroup"));
        vboxLayout = new QVBoxLayout(chatWindowGroup);
        vboxLayout->setObjectName(QString::fromUtf8("vboxLayout"));
        kcfg_chatWindowGroupPolicy = new QComboBox(chatWindowGroup);
        kcfg_chatWindowGroupPolicy->setObjectName(QString::fromUtf8("kcfg_chatWindowGroupPolicy"));

        vboxLayout->addWidget(kcfg_chatWindowGroupPolicy);


        verticalLayout->addWidget(chatWindowGroup);

        kcfg_showDates = new QCheckBox(BehaviorConfig_Chat);
        kcfg_showDates->setObjectName(QString::fromUtf8("kcfg_showDates"));

        verticalLayout->addWidget(kcfg_showDates);

        hboxLayout1 = new QHBoxLayout();
#ifndef UI_Q_OS_MAC
        hboxLayout1->setSpacing(6);
#endif
        hboxLayout1->setContentsMargins(0, 0, 0, 0);
        hboxLayout1->setObjectName(QString::fromUtf8("hboxLayout1"));
        kcfg_truncateContactName = new QCheckBox(BehaviorConfig_Chat);
        kcfg_truncateContactName->setObjectName(QString::fromUtf8("kcfg_truncateContactName"));

        hboxLayout1->addWidget(kcfg_truncateContactName);

        spacerItem = new QSpacerItem(0, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        hboxLayout1->addItem(spacerItem);

        kcfg_truncateContactNameLength = new QSpinBox(BehaviorConfig_Chat);
        kcfg_truncateContactNameLength->setObjectName(QString::fromUtf8("kcfg_truncateContactNameLength"));
        kcfg_truncateContactNameLength->setEnabled(false);
        kcfg_truncateContactNameLength->setMinimum(5);
        kcfg_truncateContactNameLength->setValue(20);

        hboxLayout1->addWidget(kcfg_truncateContactNameLength);


        verticalLayout->addLayout(hboxLayout1);

        hboxLayout2 = new QHBoxLayout();
#ifndef UI_Q_OS_MAC
        hboxLayout2->setSpacing(6);
#endif
        hboxLayout2->setContentsMargins(0, 0, 0, 0);
        hboxLayout2->setObjectName(QString::fromUtf8("hboxLayout2"));
        txtChatViewBufferSize = new QLabel(BehaviorConfig_Chat);
        txtChatViewBufferSize->setObjectName(QString::fromUtf8("txtChatViewBufferSize"));

        hboxLayout2->addWidget(txtChatViewBufferSize);

        spacerItem1 = new QSpacerItem(0, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        hboxLayout2->addItem(spacerItem1);

        kcfg_chatWindowBufferViewSize = new QSpinBox(BehaviorConfig_Chat);
        kcfg_chatWindowBufferViewSize->setObjectName(QString::fromUtf8("kcfg_chatWindowBufferViewSize"));
        kcfg_chatWindowBufferViewSize->setMinimum(2);
        kcfg_chatWindowBufferViewSize->setMaximum(9000);
        kcfg_chatWindowBufferViewSize->setValue(250);

        hboxLayout2->addWidget(kcfg_chatWindowBufferViewSize);


        verticalLayout->addLayout(hboxLayout2);

        spacerItem2 = new QSpacerItem(30, 0, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout->addItem(spacerItem2);

#ifndef UI_QT_NO_SHORTCUT
        txtChatViewBufferSize->setBuddy(kcfg_chatWindowBufferViewSize);
#endif // QT_NO_SHORTCUT
        QWidget::setTabOrder(kcfg_showEvents, kcfg_highlightEnabled);
        QWidget::setTabOrder(kcfg_highlightEnabled, kcfg_spellCheck);
        QWidget::setTabOrder(kcfg_spellCheck, kcfg_AlwaysShowTabs);
        QWidget::setTabOrder(kcfg_AlwaysShowTabs, viewPlugin);
        QWidget::setTabOrder(viewPlugin, kcfg_chatWindowGroupPolicy);
        QWidget::setTabOrder(kcfg_chatWindowGroupPolicy, kcfg_truncateContactName);
        QWidget::setTabOrder(kcfg_truncateContactName, kcfg_truncateContactNameLength);
        QWidget::setTabOrder(kcfg_truncateContactNameLength, kcfg_chatWindowBufferViewSize);

        retranslateUi(BehaviorConfig_Chat);
        QObject::connect(kcfg_truncateContactName, SIGNAL(toggled(bool)), kcfg_truncateContactNameLength, SLOT(setEnabled(bool)));

        QMetaObject::connectSlotsByName(BehaviorConfig_Chat);
    } // setupUi

    void retranslateUi(QWidget *BehaviorConfig_Chat)
    {
        BehaviorConfig_Chat->setWindowTitle(tr2i18n("Chat", 0));
        kcfg_showEvents->setText(tr2i18n("Show events in chat &window", 0));
        kcfg_highlightEnabled->setText(tr2i18n("High&light messages containing your nickname", 0));
        kcfg_spellCheck->setText(tr2i18n("E&nable automatic spell checking by default", 0));
        kcfg_richTextByDefault->setText(tr2i18n("E&nable rich text by default", 0));
        kcfg_AlwaysShowTabs->setText(tr2i18n("&Always show tabs", 0));
        interfaceGroup->setTitle(tr2i18n("&Interface Preference", 0));
        chatWindowGroup->setTitle(tr2i18n("Chat Window Grouping &Policy", 0));
        kcfg_chatWindowGroupPolicy->clear();
        kcfg_chatWindowGroupPolicy->insertItems(0, QStringList()
         << tr2i18n("Open All Messages in New Chat Window", 0)
         << tr2i18n("Group Messages From Same Account in Same Chat Window", 0)
         << tr2i18n("Group All Messages in Same Chat Window", 0)
         << tr2i18n("Group Messages From Contacts in Same Group in Same Chat Window", 0)
         << tr2i18n("Group Messages From Same Metacontact in Same Chat Window", 0)
        );
#ifndef UI_QT_NO_WHATSTHIS
        kcfg_chatWindowGroupPolicy->setWhatsThis(tr2i18n("Every chat will have its own window.", 0));
#endif // QT_NO_WHATSTHIS
        kcfg_showDates->setText(tr2i18n("Show message dates", 0));
        kcfg_truncateContactName->setText(tr2i18n("&Truncate contact name with more characters than:", 0));
#ifndef UI_QT_NO_WHATSTHIS
        txtChatViewBufferSize->setWhatsThis(tr2i18n("Limit the maximum number of lines visible in a chat window to improve speed for complex layouts.", 0));
#endif // QT_NO_WHATSTHIS
        txtChatViewBufferSize->setText(tr2i18n("Ma&ximum number of chat window lines:", 0));
    } // retranslateUi

};

namespace Ui {
    class BehaviorConfig_Chat: public Ui_BehaviorConfig_Chat {};
} // namespace Ui

QT_END_NAMESPACE

#endif // BEHAVIORCONFIG_CHAT_H

