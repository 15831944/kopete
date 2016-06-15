#include <kdialog.h>
#include <klocale.h>

/********************************************************************************
** Form generated from reading UI file 'qqeditaccountui.ui'
**
** Created by: Qt User Interface Compiler version 4.8.7
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_QQEDITACCOUNTUI_H
#define UI_QQEDITACCOUNTUI_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtGui/QApplication>
#include <QtGui/QButtonGroup>
#include <QtGui/QCheckBox>
#include <QtGui/QComboBox>
#include <QtGui/QGridLayout>
#include <QtGui/QGroupBox>
#include <QtGui/QHBoxLayout>
#include <QtGui/QHeaderView>
#include <QtGui/QLabel>
#include <QtGui/QLineEdit>
#include <QtGui/QPushButton>
#include <QtGui/QSpacerItem>
#include <QtGui/QSpinBox>
#include <QtGui/QTabWidget>
#include <QtGui/QVBoxLayout>
#include <QtGui/QWidget>
#include "kopetepasswordwidget.h"

QT_BEGIN_NAMESPACE

class Ui_QQEditAccountUI
{
public:
    QVBoxLayout *vboxLayout;
    QTabWidget *tabWidget3;
    QWidget *tab_connection;
    QVBoxLayout *vboxLayout1;
    QGroupBox *m_accountInfo;
    QVBoxLayout *vboxLayout2;
    QHBoxLayout *hboxLayout;
    QLabel *TextLabel1_3;
    QLineEdit *m_login;
    Kopete::UI::PasswordWidget *m_password;
    QHBoxLayout *hboxLayout1;
    QVBoxLayout *vboxLayout3;
    QCheckBox *m_autologin;
    QSpacerItem *spacerItem;
    QPushButton *buttonVCard;
    QGroupBox *groupBox;
    QHBoxLayout *hboxLayout2;
    QLabel *textLabel6;
    QPushButton *buttonRegister;
    QSpacerItem *spacerItem1;
    QWidget *TabPage;
    QVBoxLayout *vboxLayout4;
    QGroupBox *groupBox_2;
    QVBoxLayout *vboxLayout5;
    QCheckBox *optionOverrideServer;
    QGridLayout *gridLayout;
    QHBoxLayout *hboxLayout3;
    QLabel *labelServer;
    QLabel *labelPort;
    QSpacerItem *spacerItem2;
    QSpinBox *m_serverPort;
    QLineEdit *m_serverName;
    QGroupBox *global_settings_page;
    QVBoxLayout *vboxLayout6;
    QLabel *textLabel1_3;
    QCheckBox *NotifyNewChat;
    QHBoxLayout *hboxLayout4;
    QLabel *textLabel1_4;
    QComboBox *DownloadPicture;
    QCheckBox *useCustomEmoticons;
    QCheckBox *exportEmoticons;
    QSpacerItem *spacerItem3;
    QLabel *labelStatusMessage;

    void setupUi(QWidget *QQEditAccountUI)
    {
        if (QQEditAccountUI->objectName().isEmpty())
            QQEditAccountUI->setObjectName(QString::fromUtf8("QQEditAccountUI"));
        QQEditAccountUI->resize(856, 611);
        vboxLayout = new QVBoxLayout(QQEditAccountUI);
        vboxLayout->setSpacing(6);
        vboxLayout->setObjectName(QString::fromUtf8("vboxLayout"));
        vboxLayout->setContentsMargins(9, 9, 9, 9);
        tabWidget3 = new QTabWidget(QQEditAccountUI);
        tabWidget3->setObjectName(QString::fromUtf8("tabWidget3"));
        tabWidget3->setTabShape(QTabWidget::Rounded);
        tab_connection = new QWidget();
        tab_connection->setObjectName(QString::fromUtf8("tab_connection"));
        vboxLayout1 = new QVBoxLayout(tab_connection);
        vboxLayout1->setSpacing(6);
        vboxLayout1->setObjectName(QString::fromUtf8("vboxLayout1"));
        vboxLayout1->setContentsMargins(9, 9, 9, 9);
        m_accountInfo = new QGroupBox(tab_connection);
        m_accountInfo->setObjectName(QString::fromUtf8("m_accountInfo"));
        vboxLayout2 = new QVBoxLayout(m_accountInfo);
        vboxLayout2->setSpacing(6);
        vboxLayout2->setObjectName(QString::fromUtf8("vboxLayout2"));
        vboxLayout2->setContentsMargins(9, 9, 9, 9);
        hboxLayout = new QHBoxLayout();
        hboxLayout->setSpacing(6);
        hboxLayout->setObjectName(QString::fromUtf8("hboxLayout"));
        hboxLayout->setContentsMargins(0, 0, 0, 0);
        TextLabel1_3 = new QLabel(m_accountInfo);
        TextLabel1_3->setObjectName(QString::fromUtf8("TextLabel1_3"));
        QSizePolicy sizePolicy(QSizePolicy::Minimum, QSizePolicy::Preferred);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(TextLabel1_3->sizePolicy().hasHeightForWidth());
        TextLabel1_3->setSizePolicy(sizePolicy);

        hboxLayout->addWidget(TextLabel1_3);

        m_login = new QLineEdit(m_accountInfo);
        m_login->setObjectName(QString::fromUtf8("m_login"));

        hboxLayout->addWidget(m_login);


        vboxLayout2->addLayout(hboxLayout);

        m_password = new Kopete::UI::PasswordWidget(m_accountInfo);
        m_password->setObjectName(QString::fromUtf8("m_password"));

        vboxLayout2->addWidget(m_password);

        hboxLayout1 = new QHBoxLayout();
        hboxLayout1->setSpacing(6);
        hboxLayout1->setObjectName(QString::fromUtf8("hboxLayout1"));
        hboxLayout1->setContentsMargins(0, 0, 0, 0);
        vboxLayout3 = new QVBoxLayout();
        vboxLayout3->setSpacing(6);
        vboxLayout3->setObjectName(QString::fromUtf8("vboxLayout3"));
        vboxLayout3->setContentsMargins(0, 0, 0, 0);
        m_autologin = new QCheckBox(m_accountInfo);
        m_autologin->setObjectName(QString::fromUtf8("m_autologin"));
        m_autologin->setChecked(false);

        vboxLayout3->addWidget(m_autologin);


        hboxLayout1->addLayout(vboxLayout3);

        spacerItem = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        hboxLayout1->addItem(spacerItem);

        buttonVCard = new QPushButton(m_accountInfo);
        buttonVCard->setObjectName(QString::fromUtf8("buttonVCard"));

        hboxLayout1->addWidget(buttonVCard);


        vboxLayout2->addLayout(hboxLayout1);


        vboxLayout1->addWidget(m_accountInfo);

        groupBox = new QGroupBox(tab_connection);
        groupBox->setObjectName(QString::fromUtf8("groupBox"));
        hboxLayout2 = new QHBoxLayout(groupBox);
        hboxLayout2->setSpacing(6);
        hboxLayout2->setObjectName(QString::fromUtf8("hboxLayout2"));
        hboxLayout2->setContentsMargins(9, 9, 9, 9);
        textLabel6 = new QLabel(groupBox);
        textLabel6->setObjectName(QString::fromUtf8("textLabel6"));
        QSizePolicy sizePolicy1(QSizePolicy::MinimumExpanding, QSizePolicy::Minimum);
        sizePolicy1.setHorizontalStretch(0);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(textLabel6->sizePolicy().hasHeightForWidth());
        textLabel6->setSizePolicy(sizePolicy1);
        textLabel6->setMinimumSize(QSize(0, 0));
        textLabel6->setAlignment(Qt::AlignVCenter);

        hboxLayout2->addWidget(textLabel6);

        buttonRegister = new QPushButton(groupBox);
        buttonRegister->setObjectName(QString::fromUtf8("buttonRegister"));

        hboxLayout2->addWidget(buttonRegister);


        vboxLayout1->addWidget(groupBox);

        spacerItem1 = new QSpacerItem(20, 146, QSizePolicy::Minimum, QSizePolicy::Expanding);

        vboxLayout1->addItem(spacerItem1);

        tabWidget3->addTab(tab_connection, QString());
        TabPage = new QWidget();
        TabPage->setObjectName(QString::fromUtf8("TabPage"));
        vboxLayout4 = new QVBoxLayout(TabPage);
        vboxLayout4->setSpacing(6);
        vboxLayout4->setObjectName(QString::fromUtf8("vboxLayout4"));
        vboxLayout4->setContentsMargins(9, 9, 9, 9);
        groupBox_2 = new QGroupBox(TabPage);
        groupBox_2->setObjectName(QString::fromUtf8("groupBox_2"));
        vboxLayout5 = new QVBoxLayout(groupBox_2);
        vboxLayout5->setSpacing(6);
        vboxLayout5->setObjectName(QString::fromUtf8("vboxLayout5"));
        vboxLayout5->setContentsMargins(9, 9, 9, 9);
        optionOverrideServer = new QCheckBox(groupBox_2);
        optionOverrideServer->setObjectName(QString::fromUtf8("optionOverrideServer"));

        vboxLayout5->addWidget(optionOverrideServer);

        gridLayout = new QGridLayout();
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        gridLayout->setHorizontalSpacing(6);
        gridLayout->setVerticalSpacing(6);
        gridLayout->setContentsMargins(0, 0, 0, 0);
        hboxLayout3 = new QHBoxLayout();
        hboxLayout3->setSpacing(3);
        hboxLayout3->setObjectName(QString::fromUtf8("hboxLayout3"));
        hboxLayout3->setContentsMargins(0, 0, 0, 0);
        labelServer = new QLabel(groupBox_2);
        labelServer->setObjectName(QString::fromUtf8("labelServer"));
        labelServer->setEnabled(false);

        hboxLayout3->addWidget(labelServer);

        labelPort = new QLabel(groupBox_2);
        labelPort->setObjectName(QString::fromUtf8("labelPort"));
        labelPort->setEnabled(false);

        hboxLayout3->addWidget(labelPort);


        gridLayout->addLayout(hboxLayout3, 0, 1, 1, 1);

        spacerItem2 = new QSpacerItem(16, 20, QSizePolicy::Fixed, QSizePolicy::Minimum);

        gridLayout->addItem(spacerItem2, 0, 0, 1, 1);

        m_serverPort = new QSpinBox(groupBox_2);
        m_serverPort->setObjectName(QString::fromUtf8("m_serverPort"));
        m_serverPort->setEnabled(false);
        m_serverPort->setMinimum(1);
        m_serverPort->setMaximum(65535);
        m_serverPort->setValue(80);

        gridLayout->addWidget(m_serverPort, 0, 3, 1, 1);

        m_serverName = new QLineEdit(groupBox_2);
        m_serverName->setObjectName(QString::fromUtf8("m_serverName"));
        m_serverName->setEnabled(false);
        QSizePolicy sizePolicy2(QSizePolicy::MinimumExpanding, QSizePolicy::Fixed);
        sizePolicy2.setHorizontalStretch(0);
        sizePolicy2.setVerticalStretch(0);
        sizePolicy2.setHeightForWidth(m_serverName->sizePolicy().hasHeightForWidth());
        m_serverName->setSizePolicy(sizePolicy2);

        gridLayout->addWidget(m_serverName, 0, 2, 1, 1);


        vboxLayout5->addLayout(gridLayout);


        vboxLayout4->addWidget(groupBox_2);

        global_settings_page = new QGroupBox(TabPage);
        global_settings_page->setObjectName(QString::fromUtf8("global_settings_page"));
        vboxLayout6 = new QVBoxLayout(global_settings_page);
        vboxLayout6->setSpacing(6);
        vboxLayout6->setObjectName(QString::fromUtf8("vboxLayout6"));
        vboxLayout6->setContentsMargins(9, 9, 9, 9);
        textLabel1_3 = new QLabel(global_settings_page);
        textLabel1_3->setObjectName(QString::fromUtf8("textLabel1_3"));
        textLabel1_3->setAlignment(Qt::AlignCenter);

        vboxLayout6->addWidget(textLabel1_3);

        NotifyNewChat = new QCheckBox(global_settings_page);
        NotifyNewChat->setObjectName(QString::fromUtf8("NotifyNewChat"));
        QSizePolicy sizePolicy3(QSizePolicy::Minimum, QSizePolicy::Fixed);
        sizePolicy3.setHorizontalStretch(0);
        sizePolicy3.setVerticalStretch(0);
        sizePolicy3.setHeightForWidth(NotifyNewChat->sizePolicy().hasHeightForWidth());
        NotifyNewChat->setSizePolicy(sizePolicy3);

        vboxLayout6->addWidget(NotifyNewChat);

        hboxLayout4 = new QHBoxLayout();
        hboxLayout4->setSpacing(6);
        hboxLayout4->setObjectName(QString::fromUtf8("hboxLayout4"));
        hboxLayout4->setContentsMargins(0, 0, 0, 0);
        textLabel1_4 = new QLabel(global_settings_page);
        textLabel1_4->setObjectName(QString::fromUtf8("textLabel1_4"));

        hboxLayout4->addWidget(textLabel1_4);

        DownloadPicture = new QComboBox(global_settings_page);
        DownloadPicture->setObjectName(QString::fromUtf8("DownloadPicture"));
        sizePolicy2.setHeightForWidth(DownloadPicture->sizePolicy().hasHeightForWidth());
        DownloadPicture->setSizePolicy(sizePolicy2);

        hboxLayout4->addWidget(DownloadPicture);


        vboxLayout6->addLayout(hboxLayout4);

        useCustomEmoticons = new QCheckBox(global_settings_page);
        useCustomEmoticons->setObjectName(QString::fromUtf8("useCustomEmoticons"));
        useCustomEmoticons->setChecked(true);

        vboxLayout6->addWidget(useCustomEmoticons);

        exportEmoticons = new QCheckBox(global_settings_page);
        exportEmoticons->setObjectName(QString::fromUtf8("exportEmoticons"));

        vboxLayout6->addWidget(exportEmoticons);


        vboxLayout4->addWidget(global_settings_page);

        spacerItem3 = new QSpacerItem(21, 20, QSizePolicy::Minimum, QSizePolicy::Expanding);

        vboxLayout4->addItem(spacerItem3);

        tabWidget3->addTab(TabPage, QString());

        vboxLayout->addWidget(tabWidget3);

        labelStatusMessage = new QLabel(QQEditAccountUI);
        labelStatusMessage->setObjectName(QString::fromUtf8("labelStatusMessage"));
        labelStatusMessage->setAlignment(Qt::AlignCenter);

        vboxLayout->addWidget(labelStatusMessage);

#ifndef UI_QT_NO_SHORTCUT
        TextLabel1_3->setBuddy(m_login);
        labelServer->setBuddy(m_serverName);
        labelPort->setBuddy(m_serverPort);
#endif // QT_NO_SHORTCUT
        QWidget::setTabOrder(tabWidget3, m_login);
        QWidget::setTabOrder(m_login, m_autologin);
        QWidget::setTabOrder(m_autologin, buttonVCard);
        QWidget::setTabOrder(buttonVCard, buttonRegister);
        QWidget::setTabOrder(buttonRegister, optionOverrideServer);
        QWidget::setTabOrder(optionOverrideServer, m_serverName);
        QWidget::setTabOrder(m_serverName, m_serverPort);
        QWidget::setTabOrder(m_serverPort, NotifyNewChat);
        QWidget::setTabOrder(NotifyNewChat, DownloadPicture);
        QWidget::setTabOrder(DownloadPicture, useCustomEmoticons);
        QWidget::setTabOrder(useCustomEmoticons, exportEmoticons);

        retranslateUi(QQEditAccountUI);
        QObject::connect(optionOverrideServer, SIGNAL(clicked(bool)), m_serverName, SLOT(setEnabled(bool)));
        QObject::connect(optionOverrideServer, SIGNAL(clicked(bool)), m_serverPort, SLOT(setEnabled(bool)));

        tabWidget3->setCurrentIndex(0);
        DownloadPicture->setCurrentIndex(1);


        QMetaObject::connectSlotsByName(QQEditAccountUI);
    } // setupUi

    void retranslateUi(QWidget *QQEditAccountUI)
    {
        QQEditAccountUI->setWindowTitle(tr2i18n("Account Preferences - QQ", 0));
        m_accountInfo->setTitle(tr2i18n("Account Information", 0));
#ifndef UI_QT_NO_TOOLTIP
        TextLabel1_3->setToolTip(tr2i18n("The user ID of the QQ contact you would like to use.", 0));
#endif // QT_NO_TOOLTIP
#ifndef UI_QT_NO_WHATSTHIS
        TextLabel1_3->setWhatsThis(tr2i18n("The user ID of the QQ contact you would like to use.  This should be in the form of a valid E-mail address.", 0));
#endif // QT_NO_WHATSTHIS
        TextLabel1_3->setText(tr2i18n("&QQ ID:", 0));
#ifndef UI_QT_NO_TOOLTIP
        m_login->setToolTip(tr2i18n("The user ID of the QQ contact you would like to use.", 0));
#endif // QT_NO_TOOLTIP
#ifndef UI_QT_NO_WHATSTHIS
        m_login->setWhatsThis(tr2i18n("The user ID of the QQ contact you would like to use.  This should be in the form of a valid E-mail address.", 0));
#endif // QT_NO_WHATSTHIS
        m_login->setText(QString());
#ifndef UI_QT_NO_WHATSTHIS
        m_autologin->setWhatsThis(tr2i18n("If you check this checkbox, the account will not be connected when you press the \"Connect All\" button, or at startup when automatic connection at startup is enabled.", 0));
#endif // QT_NO_WHATSTHIS
        m_autologin->setText(tr2i18n("E&xclude from connect all", 0));
        buttonVCard->setText(tr2i18n("View && Update my vCard", 0));
        groupBox->setTitle(tr2i18n("Registration", 0));
        textLabel6->setText(tr2i18n("To connect to the QQ network, you will need a QQ ID.\n"
"\n"
"If you do not currently have an ID, please create one.", 0));
        buttonRegister->setText(tr2i18n("Re&gister New Account", 0));
        tabWidget3->setTabText(tabWidget3->indexOf(tab_connection), tr2i18n("&Basic Setup", 0));
        groupBox_2->setTitle(tr2i18n("Connection Preferences", 0));
        optionOverrideServer->setText(tr2i18n("&Override default server information", 0));
        labelServer->setText(tr2i18n("Ser&ver /", 0));
        labelPort->setText(tr2i18n("po&rt:", 0));
#ifndef UI_QT_NO_TOOLTIP
        m_serverPort->setToolTip(tr2i18n("Only modify these values if you want to use a special IM proxy server, like SIMP", 0));
#endif // QT_NO_TOOLTIP
#ifndef UI_QT_NO_WHATSTHIS
        m_serverPort->setWhatsThis(tr2i18n("Only modify these values if you want to use a special IM proxy server, like SIMP", 0));
#endif // QT_NO_WHATSTHIS
#ifndef UI_QT_NO_TOOLTIP
        m_serverName->setToolTip(tr2i18n("Only modify these values if you want to use a special IM proxy server, like SIMP", 0));
#endif // QT_NO_TOOLTIP
#ifndef UI_QT_NO_WHATSTHIS
        m_serverName->setWhatsThis(tr2i18n("Only modify these values if you want to use a special IM proxy server, like SIMP", 0));
#endif // QT_NO_WHATSTHIS
        m_serverName->setText(tr2i18n("tcpconn.tencent.com", 0));
        global_settings_page->setTitle(tr2i18n("Global QQ Options", 0));
        textLabel1_3->setText(tr2i18n("<qt><b>Note:</b> These settings are applicable to all QQ accounts", 0));
#ifndef UI_QT_NO_WHATSTHIS
        NotifyNewChat->setWhatsThis(tr2i18n("This option will notify you when a contact starts typing their message, before the message is sent or finished.", 0));
#endif // QT_NO_WHATSTHIS
        NotifyNewChat->setText(tr2i18n("Au&tomatically open a chat window when someone starts a conversation", 0));
#ifndef UI_QT_NO_WHATSTHIS
        textLabel1_4->setWhatsThis(tr2i18n("<qt><p>Indicate when Kopete will download the display pictures of contacts</p>\n"
"<dl><dt>Only manually</dt><dd>The picture is not downloaded automatically. It is only downloaded when the user requests it</dd>\n"
"<dt>When a chat is open</dt><dd>The picture is downloaded when a conversation socket is opened, i.e. when you open a chat window</dd>\n"
"<dt>Automatically</dt><dd>Always try to download the picture if the contact has one.  <b>Note:</b> this will open a socket, and let the user know you are downloading their picture.</dd></dl>", 0));
#endif // QT_NO_WHATSTHIS
        textLabel1_4->setText(tr2i18n("Download the QQ picture:", 0));
        DownloadPicture->clear();
        DownloadPicture->insertItems(0, QStringList()
         << tr2i18n("Only Manually", 0)
         << tr2i18n("When a Chat is Open (default)", 0)
         << tr2i18n("Automatically (read help)", 0)
        );
#ifndef UI_QT_NO_WHATSTHIS
        DownloadPicture->setWhatsThis(tr2i18n("<qt><p>Indicate when Kopete will download the pictures of contacts</p>\n"
"<dl><dt>Only manually</dt><dd>The picture is not downloaded automatically. It is only downloaded when the user requests it</dd>\n"
"<dt>When a chat is open</dt><dd>The picture is downloaded when a conversation socket is opened, i.e. when you open a chat window</dd>\n"
"<dt>Automatically</dt><dd>Always try to download the picture if the contact has one.  <b>Note:</b> this will open a socket, and let the user know you are downloading their picture.</dd></dl>", 0));
#endif // QT_NO_WHATSTHIS
#ifndef UI_QT_NO_WHATSTHIS
        useCustomEmoticons->setWhatsThis(tr2i18n("QQ Messenger allows users to download and use custom emoticons. If this option is enabled, Kopete will download and display such emoticons.", 0));
#endif // QT_NO_WHATSTHIS
        useCustomEmoticons->setText(tr2i18n("&Download and show custom emoticons", 0));
#ifndef UI_QT_NO_WHATSTHIS
        exportEmoticons->setWhatsThis(tr2i18n("Export all the emoticon themes as custom emoticons (only works for emoticons in the PNG format).", 0));
#endif // QT_NO_WHATSTHIS
        exportEmoticons->setText(tr2i18n("E&xport the current emoticon theme to users", 0));
        tabWidget3->setTabText(tabWidget3->indexOf(TabPage), tr2i18n("Accou&nt Preferences", 0));
        labelStatusMessage->setText(QString());
    } // retranslateUi

};

namespace Ui {
    class QQEditAccountUI: public Ui_QQEditAccountUI {};
} // namespace Ui

QT_END_NAMESPACE

#endif // QQEDITACCOUNTUI_H

