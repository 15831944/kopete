#include <kdialog.h>
#include <klocale.h>

/********************************************************************************
** Form generated from reading UI file 'wlmaccountpreferences.ui'
**
** Created by: Qt User Interface Compiler version 4.8.7
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_WLMACCOUNTPREFERENCES_H
#define UI_WLMACCOUNTPREFERENCES_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtGui/QApplication>
#include <QtGui/QButtonGroup>
#include <QtGui/QCheckBox>
#include <QtGui/QGridLayout>
#include <QtGui/QGroupBox>
#include <QtGui/QHBoxLayout>
#include <QtGui/QHeaderView>
#include <QtGui/QLabel>
#include <QtGui/QLineEdit>
#include <QtGui/QListWidget>
#include <QtGui/QPushButton>
#include <QtGui/QRadioButton>
#include <QtGui/QSpacerItem>
#include <QtGui/QSpinBox>
#include <QtGui/QTabWidget>
#include <QtGui/QVBoxLayout>
#include <QtGui/QWidget>
#include "klineedit.h"
#include "kopetepasswordwidget.h"

QT_BEGIN_NAMESPACE

class Ui_WlmAccountPreferences
{
public:
    QVBoxLayout *verticalLayout_3;
    QTabWidget *mainTabWidget;
    QWidget *tab;
    QVBoxLayout *verticalLayout_4;
    QGroupBox *groupBox;
    QVBoxLayout *verticalLayout;
    QHBoxLayout *horizontalLayout;
    QLabel *accountLabel;
    KLineEdit *m_passport;
    Kopete::UI::PasswordWidget *m_password;
    QCheckBox *m_autologin;
    QGroupBox *groupBox_2;
    QHBoxLayout *hboxLayout;
    QLabel *textLabel6;
    QPushButton *buttonRegister;
    QSpacerItem *verticalSpacer;
    QWidget *tab_3;
    QVBoxLayout *verticalLayout_5;
    QGridLayout *_6;
    QLabel *textLabel2;
    QVBoxLayout *_7;
    QPushButton *m_blockButton;
    QPushButton *m_allowButton;
    QSpacerItem *spacerItem;
    QLabel *textLabel1;
    QListWidget *m_AL;
    QListWidget *m_BL;
    QLabel *label;
    QLabel *m_warning;
    QWidget *tab_2;
    QVBoxLayout *verticalLayout_6;
    QGroupBox *groupBox_4;
    QVBoxLayout *verticalLayout_2;
    QCheckBox *optionOverrideServer;
    QHBoxLayout *horizontalLayout_3;
    QSpacerItem *spacerItem1;
    QHBoxLayout *horizontalLayout_2;
    QLabel *labelServer;
    QLabel *labelPort;
    KLineEdit *m_serverName;
    QSpinBox *m_serverPort;
    QCheckBox *optionEnableProxy;
    QHBoxLayout *horizontalLayout_8;
    QSpacerItem *horizontalSpacer;
    QHBoxLayout *horizontalLayout_9;
    QLabel *m_labelProxyHost;
    QLabel *m_labelProxyPort;
    QLineEdit *m_proxyHost;
    QSpinBox *m_proxyPort;
    QHBoxLayout *horizontalLayout_4;
    QRadioButton *m_radioProxyHttp;
    QRadioButton *m_radioProxySocks5;
    QLabel *m_labelProxyUsername;
    QLineEdit *m_proxyUsername;
    QLabel *m_labelProxyPassword;
    QLineEdit *m_proxyPassword;
    QSpacerItem *verticalSpacer_2;
    QWidget *tab_4;
    QVBoxLayout *verticalLayout_8;
    QGroupBox *groupBox_3;
    QVBoxLayout *verticalLayout_7;
    QCheckBox *m_doNotSendEmoticons;
    QCheckBox *m_doNotRequestEmoticons;
    QSpacerItem *verticalSpacer_3;
    QLabel *labelStatusMessage;

    void setupUi(QWidget *WlmAccountPreferences)
    {
        if (WlmAccountPreferences->objectName().isEmpty())
            WlmAccountPreferences->setObjectName(QString::fromUtf8("WlmAccountPreferences"));
        WlmAccountPreferences->resize(671, 412);
        verticalLayout_3 = new QVBoxLayout(WlmAccountPreferences);
        verticalLayout_3->setContentsMargins(0, 0, 0, 0);
        verticalLayout_3->setObjectName(QString::fromUtf8("verticalLayout_3"));
        mainTabWidget = new QTabWidget(WlmAccountPreferences);
        mainTabWidget->setObjectName(QString::fromUtf8("mainTabWidget"));
        tab = new QWidget();
        tab->setObjectName(QString::fromUtf8("tab"));
        verticalLayout_4 = new QVBoxLayout(tab);
        verticalLayout_4->setObjectName(QString::fromUtf8("verticalLayout_4"));
        groupBox = new QGroupBox(tab);
        groupBox->setObjectName(QString::fromUtf8("groupBox"));
        verticalLayout = new QVBoxLayout(groupBox);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        accountLabel = new QLabel(groupBox);
        accountLabel->setObjectName(QString::fromUtf8("accountLabel"));
        accountLabel->setWordWrap(false);

        horizontalLayout->addWidget(accountLabel);

        m_passport = new KLineEdit(groupBox);
        m_passport->setObjectName(QString::fromUtf8("m_passport"));

        horizontalLayout->addWidget(m_passport);


        verticalLayout->addLayout(horizontalLayout);

        m_password = new Kopete::UI::PasswordWidget(groupBox);
        m_password->setObjectName(QString::fromUtf8("m_password"));

        verticalLayout->addWidget(m_password);

        m_autologin = new QCheckBox(groupBox);
        m_autologin->setObjectName(QString::fromUtf8("m_autologin"));
        m_autologin->setChecked(false);

        verticalLayout->addWidget(m_autologin);


        verticalLayout_4->addWidget(groupBox);

        groupBox_2 = new QGroupBox(tab);
        groupBox_2->setObjectName(QString::fromUtf8("groupBox_2"));
        hboxLayout = new QHBoxLayout(groupBox_2);
#ifndef UI_Q_OS_MAC
        hboxLayout->setSpacing(6);
#endif
#ifndef UI_Q_OS_MAC
        hboxLayout->setContentsMargins(9, 9, 9, 9);
#endif
        hboxLayout->setObjectName(QString::fromUtf8("hboxLayout"));
        textLabel6 = new QLabel(groupBox_2);
        textLabel6->setObjectName(QString::fromUtf8("textLabel6"));
        QSizePolicy sizePolicy(QSizePolicy::MinimumExpanding, QSizePolicy::Minimum);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(textLabel6->sizePolicy().hasHeightForWidth());
        textLabel6->setSizePolicy(sizePolicy);
        textLabel6->setMinimumSize(QSize(0, 0));
        textLabel6->setAlignment(Qt::AlignVCenter);
        textLabel6->setWordWrap(true);

        hboxLayout->addWidget(textLabel6);

        buttonRegister = new QPushButton(groupBox_2);
        buttonRegister->setObjectName(QString::fromUtf8("buttonRegister"));

        hboxLayout->addWidget(buttonRegister);


        verticalLayout_4->addWidget(groupBox_2);

        verticalSpacer = new QSpacerItem(20, 0, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout_4->addItem(verticalSpacer);

        mainTabWidget->addTab(tab, QString());
        tab_3 = new QWidget();
        tab_3->setObjectName(QString::fromUtf8("tab_3"));
        verticalLayout_5 = new QVBoxLayout(tab_3);
        verticalLayout_5->setObjectName(QString::fromUtf8("verticalLayout_5"));
        _6 = new QGridLayout();
#ifndef UI_Q_OS_MAC
        _6->setSpacing(6);
#endif
#ifndef UI_Q_OS_MAC
        _6->setContentsMargins(0, 0, 0, 0);
#endif
        _6->setObjectName(QString::fromUtf8("_6"));
        textLabel2 = new QLabel(tab_3);
        textLabel2->setObjectName(QString::fromUtf8("textLabel2"));

        _6->addWidget(textLabel2, 0, 4, 1, 1);

        _7 = new QVBoxLayout();
#ifndef UI_Q_OS_MAC
        _7->setSpacing(6);
#endif
        _7->setContentsMargins(0, 0, 0, 0);
        _7->setObjectName(QString::fromUtf8("_7"));
        m_blockButton = new QPushButton(tab_3);
        m_blockButton->setObjectName(QString::fromUtf8("m_blockButton"));

        _7->addWidget(m_blockButton);

        m_allowButton = new QPushButton(tab_3);
        m_allowButton->setObjectName(QString::fromUtf8("m_allowButton"));

        _7->addWidget(m_allowButton);

        spacerItem = new QSpacerItem(20, 20, QSizePolicy::Minimum, QSizePolicy::Expanding);

        _7->addItem(spacerItem);


        _6->addLayout(_7, 2, 2, 1, 1);

        textLabel1 = new QLabel(tab_3);
        textLabel1->setObjectName(QString::fromUtf8("textLabel1"));

        _6->addWidget(textLabel1, 0, 0, 1, 1);

        m_AL = new QListWidget(tab_3);
        m_AL->setObjectName(QString::fromUtf8("m_AL"));
        m_AL->setContextMenuPolicy(Qt::ActionsContextMenu);

        _6->addWidget(m_AL, 2, 0, 1, 1);

        m_BL = new QListWidget(tab_3);
        m_BL->setObjectName(QString::fromUtf8("m_BL"));
        m_BL->setContextMenuPolicy(Qt::ActionsContextMenu);

        _6->addWidget(m_BL, 2, 4, 1, 1);


        verticalLayout_5->addLayout(_6);

        label = new QLabel(tab_3);
        label->setObjectName(QString::fromUtf8("label"));

        verticalLayout_5->addWidget(label);

        m_warning = new QLabel(tab_3);
        m_warning->setObjectName(QString::fromUtf8("m_warning"));
        QFont font;
        font.setFamily(QString::fromUtf8("Sans Serif"));
        font.setPointSize(9);
        font.setBold(true);
        font.setItalic(false);
        font.setUnderline(false);
        font.setWeight(75);
        font.setStrikeOut(false);
        m_warning->setFont(font);
        m_warning->setAlignment(Qt::AlignVCenter);

        verticalLayout_5->addWidget(m_warning);

        mainTabWidget->addTab(tab_3, QString());
        tab_2 = new QWidget();
        tab_2->setObjectName(QString::fromUtf8("tab_2"));
        verticalLayout_6 = new QVBoxLayout(tab_2);
        verticalLayout_6->setObjectName(QString::fromUtf8("verticalLayout_6"));
        groupBox_4 = new QGroupBox(tab_2);
        groupBox_4->setObjectName(QString::fromUtf8("groupBox_4"));
        verticalLayout_2 = new QVBoxLayout(groupBox_4);
        verticalLayout_2->setObjectName(QString::fromUtf8("verticalLayout_2"));
        optionOverrideServer = new QCheckBox(groupBox_4);
        optionOverrideServer->setObjectName(QString::fromUtf8("optionOverrideServer"));

        verticalLayout_2->addWidget(optionOverrideServer);

        horizontalLayout_3 = new QHBoxLayout();
        horizontalLayout_3->setObjectName(QString::fromUtf8("horizontalLayout_3"));
        spacerItem1 = new QSpacerItem(16, 20, QSizePolicy::Fixed, QSizePolicy::Minimum);

        horizontalLayout_3->addItem(spacerItem1);

        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setObjectName(QString::fromUtf8("horizontalLayout_2"));
        labelServer = new QLabel(groupBox_4);
        labelServer->setObjectName(QString::fromUtf8("labelServer"));
        labelServer->setEnabled(false);

        horizontalLayout_2->addWidget(labelServer);

        labelPort = new QLabel(groupBox_4);
        labelPort->setObjectName(QString::fromUtf8("labelPort"));
        labelPort->setEnabled(false);

        horizontalLayout_2->addWidget(labelPort);


        horizontalLayout_3->addLayout(horizontalLayout_2);

        m_serverName = new KLineEdit(groupBox_4);
        m_serverName->setObjectName(QString::fromUtf8("m_serverName"));
        m_serverName->setEnabled(false);
        QSizePolicy sizePolicy1(QSizePolicy::MinimumExpanding, QSizePolicy::Fixed);
        sizePolicy1.setHorizontalStretch(0);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(m_serverName->sizePolicy().hasHeightForWidth());
        m_serverName->setSizePolicy(sizePolicy1);

        horizontalLayout_3->addWidget(m_serverName);

        m_serverPort = new QSpinBox(groupBox_4);
        m_serverPort->setObjectName(QString::fromUtf8("m_serverPort"));
        m_serverPort->setEnabled(false);
        m_serverPort->setMinimum(1);
        m_serverPort->setMaximum(65535);
        m_serverPort->setValue(1863);

        horizontalLayout_3->addWidget(m_serverPort);


        verticalLayout_2->addLayout(horizontalLayout_3);

        optionEnableProxy = new QCheckBox(groupBox_4);
        optionEnableProxy->setObjectName(QString::fromUtf8("optionEnableProxy"));

        verticalLayout_2->addWidget(optionEnableProxy);

        horizontalLayout_8 = new QHBoxLayout();
        horizontalLayout_8->setObjectName(QString::fromUtf8("horizontalLayout_8"));
        horizontalSpacer = new QSpacerItem(28, 20, QSizePolicy::Fixed, QSizePolicy::Minimum);

        horizontalLayout_8->addItem(horizontalSpacer);

        horizontalLayout_9 = new QHBoxLayout();
        horizontalLayout_9->setObjectName(QString::fromUtf8("horizontalLayout_9"));
        m_labelProxyHost = new QLabel(groupBox_4);
        m_labelProxyHost->setObjectName(QString::fromUtf8("m_labelProxyHost"));
        m_labelProxyHost->setEnabled(false);

        horizontalLayout_9->addWidget(m_labelProxyHost);

        m_labelProxyPort = new QLabel(groupBox_4);
        m_labelProxyPort->setObjectName(QString::fromUtf8("m_labelProxyPort"));
        m_labelProxyPort->setEnabled(false);

        horizontalLayout_9->addWidget(m_labelProxyPort);


        horizontalLayout_8->addLayout(horizontalLayout_9);

        m_proxyHost = new QLineEdit(groupBox_4);
        m_proxyHost->setObjectName(QString::fromUtf8("m_proxyHost"));
        m_proxyHost->setEnabled(false);
        sizePolicy1.setHeightForWidth(m_proxyHost->sizePolicy().hasHeightForWidth());
        m_proxyHost->setSizePolicy(sizePolicy1);
        m_proxyHost->setCursorPosition(0);

        horizontalLayout_8->addWidget(m_proxyHost);

        m_proxyPort = new QSpinBox(groupBox_4);
        m_proxyPort->setObjectName(QString::fromUtf8("m_proxyPort"));
        m_proxyPort->setEnabled(false);
        m_proxyPort->setMinimum(1);
        m_proxyPort->setMaximum(65535);
        m_proxyPort->setValue(8080);

        horizontalLayout_8->addWidget(m_proxyPort);


        verticalLayout_2->addLayout(horizontalLayout_8);

        horizontalLayout_4 = new QHBoxLayout();
        horizontalLayout_4->setObjectName(QString::fromUtf8("horizontalLayout_4"));
        m_radioProxyHttp = new QRadioButton(groupBox_4);
        m_radioProxyHttp->setObjectName(QString::fromUtf8("m_radioProxyHttp"));
        m_radioProxyHttp->setEnabled(false);
        m_radioProxyHttp->setChecked(true);

        horizontalLayout_4->addWidget(m_radioProxyHttp);

        m_radioProxySocks5 = new QRadioButton(groupBox_4);
        m_radioProxySocks5->setObjectName(QString::fromUtf8("m_radioProxySocks5"));
        m_radioProxySocks5->setEnabled(false);

        horizontalLayout_4->addWidget(m_radioProxySocks5);

        m_labelProxyUsername = new QLabel(groupBox_4);
        m_labelProxyUsername->setObjectName(QString::fromUtf8("m_labelProxyUsername"));
        m_labelProxyUsername->setEnabled(false);

        horizontalLayout_4->addWidget(m_labelProxyUsername);

        m_proxyUsername = new QLineEdit(groupBox_4);
        m_proxyUsername->setObjectName(QString::fromUtf8("m_proxyUsername"));
        m_proxyUsername->setEnabled(false);

        horizontalLayout_4->addWidget(m_proxyUsername);

        m_labelProxyPassword = new QLabel(groupBox_4);
        m_labelProxyPassword->setObjectName(QString::fromUtf8("m_labelProxyPassword"));
        m_labelProxyPassword->setEnabled(false);

        horizontalLayout_4->addWidget(m_labelProxyPassword);

        m_proxyPassword = new QLineEdit(groupBox_4);
        m_proxyPassword->setObjectName(QString::fromUtf8("m_proxyPassword"));
        m_proxyPassword->setEnabled(false);
        m_proxyPassword->setEchoMode(QLineEdit::Password);
        m_proxyPassword->setAlignment(Qt::AlignLeading|Qt::AlignLeft|Qt::AlignVCenter);

        horizontalLayout_4->addWidget(m_proxyPassword);


        verticalLayout_2->addLayout(horizontalLayout_4);


        verticalLayout_6->addWidget(groupBox_4);

        verticalSpacer_2 = new QSpacerItem(20, 0, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout_6->addItem(verticalSpacer_2);

        mainTabWidget->addTab(tab_2, QString());
        tab_4 = new QWidget();
        tab_4->setObjectName(QString::fromUtf8("tab_4"));
        verticalLayout_8 = new QVBoxLayout(tab_4);
        verticalLayout_8->setObjectName(QString::fromUtf8("verticalLayout_8"));
        groupBox_3 = new QGroupBox(tab_4);
        groupBox_3->setObjectName(QString::fromUtf8("groupBox_3"));
        verticalLayout_7 = new QVBoxLayout(groupBox_3);
        verticalLayout_7->setObjectName(QString::fromUtf8("verticalLayout_7"));
        m_doNotSendEmoticons = new QCheckBox(groupBox_3);
        m_doNotSendEmoticons->setObjectName(QString::fromUtf8("m_doNotSendEmoticons"));

        verticalLayout_7->addWidget(m_doNotSendEmoticons);

        m_doNotRequestEmoticons = new QCheckBox(groupBox_3);
        m_doNotRequestEmoticons->setObjectName(QString::fromUtf8("m_doNotRequestEmoticons"));

        verticalLayout_7->addWidget(m_doNotRequestEmoticons);


        verticalLayout_8->addWidget(groupBox_3);

        verticalSpacer_3 = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout_8->addItem(verticalSpacer_3);

        mainTabWidget->addTab(tab_4, QString());

        verticalLayout_3->addWidget(mainTabWidget);

        labelStatusMessage = new QLabel(WlmAccountPreferences);
        labelStatusMessage->setObjectName(QString::fromUtf8("labelStatusMessage"));
        labelStatusMessage->setAlignment(Qt::AlignCenter);
        labelStatusMessage->setWordWrap(false);

        verticalLayout_3->addWidget(labelStatusMessage);

#ifndef UI_QT_NO_SHORTCUT
        accountLabel->setBuddy(m_passport);
        labelServer->setBuddy(m_serverName);
        labelPort->setBuddy(m_serverPort);
#endif // QT_NO_SHORTCUT

        retranslateUi(WlmAccountPreferences);
        QObject::connect(optionOverrideServer, SIGNAL(toggled(bool)), labelServer, SLOT(setEnabled(bool)));
        QObject::connect(optionOverrideServer, SIGNAL(toggled(bool)), labelPort, SLOT(setEnabled(bool)));
        QObject::connect(optionOverrideServer, SIGNAL(toggled(bool)), m_serverName, SLOT(setEnabled(bool)));
        QObject::connect(optionOverrideServer, SIGNAL(toggled(bool)), m_serverPort, SLOT(setEnabled(bool)));
        QObject::connect(optionEnableProxy, SIGNAL(toggled(bool)), m_labelProxyHost, SLOT(setEnabled(bool)));
        QObject::connect(optionEnableProxy, SIGNAL(toggled(bool)), m_labelProxyPort, SLOT(setEnabled(bool)));
        QObject::connect(optionEnableProxy, SIGNAL(toggled(bool)), m_proxyHost, SLOT(setEnabled(bool)));
        QObject::connect(optionEnableProxy, SIGNAL(toggled(bool)), m_proxyPort, SLOT(setEnabled(bool)));
        QObject::connect(optionEnableProxy, SIGNAL(toggled(bool)), m_radioProxyHttp, SLOT(setEnabled(bool)));
        QObject::connect(optionEnableProxy, SIGNAL(toggled(bool)), m_radioProxySocks5, SLOT(setEnabled(bool)));
        QObject::connect(optionEnableProxy, SIGNAL(toggled(bool)), m_proxyUsername, SLOT(setEnabled(bool)));
        QObject::connect(optionEnableProxy, SIGNAL(toggled(bool)), m_proxyPassword, SLOT(setEnabled(bool)));
        QObject::connect(optionEnableProxy, SIGNAL(toggled(bool)), m_labelProxyUsername, SLOT(setEnabled(bool)));
        QObject::connect(optionEnableProxy, SIGNAL(toggled(bool)), m_labelProxyPassword, SLOT(setEnabled(bool)));

        mainTabWidget->setCurrentIndex(3);


        QMetaObject::connectSlotsByName(WlmAccountPreferences);
    } // setupUi

    void retranslateUi(QWidget *WlmAccountPreferences)
    {
        WlmAccountPreferences->setWindowTitle(tr2i18n("Account Preferences - Wlm", 0));
        groupBox->setTitle(tr2i18n("Account Information", 0));
#ifndef UI_QT_NO_TOOLTIP
        accountLabel->setToolTip(tr2i18n("The account name of your account.", 0));
#endif // QT_NO_TOOLTIP
#ifndef UI_QT_NO_WHATSTHIS
        accountLabel->setWhatsThis(tr2i18n("The account name of your account.", 0));
#endif // QT_NO_WHATSTHIS
        accountLabel->setText(tr2i18n("WLM passport:", 0));
#ifndef UI_QT_NO_TOOLTIP
        m_passport->setToolTip(tr2i18n("The account name of your account.", 0));
#endif // QT_NO_TOOLTIP
#ifndef UI_QT_NO_WHATSTHIS
        m_passport->setWhatsThis(tr2i18n("The account name of your account.", 0));
#endif // QT_NO_WHATSTHIS
#ifndef UI_QT_NO_WHATSTHIS
        m_autologin->setWhatsThis(tr2i18n("If you check this checkbox, the account will not be connected when you press the \"Connect All\" button, or at startup when automatic connection at startup is enabled.", 0));
#endif // QT_NO_WHATSTHIS
        m_autologin->setText(tr2i18n("E&xclude from connect all", 0));
        groupBox_2->setTitle(tr2i18n("Registration", 0));
        textLabel6->setText(tr2i18n("To connect to the Microsoft network, you will need a Microsoft Passport.<br><br>If you do not currently have a Passport, please click the button to create one.", 0));
        buttonRegister->setText(tr2i18n("Re&gister New Account", 0));
        mainTabWidget->setTabText(mainTabWidget->indexOf(tab), tr2i18n("B&asic Setup", 0));
        textLabel2->setText(tr2i18n("Blocked contacts:", 0));
        m_blockButton->setText(QString());
        m_allowButton->setText(QString());
        textLabel1->setText(tr2i18n("Allowed contacts:", 0));
        label->setText(tr2i18n("<!DOCTYPE HTML PUBLIC \"-//W3C//DTD HTML 4.0//EN\" \"http://www.w3.org/TR/REC-html40/strict.dtd\">\n"
"<html><head><meta name=\"qrichtext\" content=\"1\" /></head><body>\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-style:italic;\">Italics</span> contacts are not on your contact list.</p></body></html>", 0));
        m_warning->setText(tr2i18n("WARNING: You need to be connected to modify this page", 0));
        mainTabWidget->setTabText(mainTabWidget->indexOf(tab_3), tr2i18n("Privacy", 0));
        groupBox_4->setTitle(tr2i18n("Connection Preferences (for advanced users)", 0));
        optionOverrideServer->setText(tr2i18n("&Override default server information", 0));
        labelServer->setText(tr2i18n("Ser&ver /", 0));
        labelPort->setText(tr2i18n("po&rt:", 0));
#ifndef UI_QT_NO_TOOLTIP
        m_serverName->setToolTip(tr2i18n("Only modify these values if you want to use a special IM proxy server, like SIMP", 0));
#endif // QT_NO_TOOLTIP
#ifndef UI_QT_NO_WHATSTHIS
        m_serverName->setWhatsThis(tr2i18n("Only modify these values if you want to use a special IM proxy server, like SIMP", 0));
#endif // QT_NO_WHATSTHIS
        m_serverName->setText(tr2i18n("messenger.hotmail.com", 0));
#ifndef UI_QT_NO_TOOLTIP
        m_serverPort->setToolTip(tr2i18n("Only modify these values if you want to use a special IM proxy server, like SIMP", 0));
#endif // QT_NO_TOOLTIP
#ifndef UI_QT_NO_WHATSTHIS
        m_serverPort->setWhatsThis(tr2i18n("Only modify these values if you want to use a special IM proxy server, like SIMP", 0));
#endif // QT_NO_WHATSTHIS
        optionEnableProxy->setText(tr2i18n("Enable Proxy", 0));
        m_labelProxyHost->setText(tr2i18n("Host /", 0));
        m_labelProxyPort->setText(tr2i18n("port:", 0));
        m_radioProxyHttp->setText(tr2i18n("HTTP", 0));
        m_radioProxySocks5->setText(tr2i18n("Socks5", 0));
        m_labelProxyUsername->setText(tr2i18n("Username:", 0));
        m_labelProxyPassword->setText(tr2i18n("Password:", 0));
        mainTabWidget->setTabText(mainTabWidget->indexOf(tab_2), tr2i18n("Co&nnection", 0));
        groupBox_3->setTitle(tr2i18n("General Options", 0));
        m_doNotSendEmoticons->setText(tr2i18n("Do not send custom emoticons to other contacts", 0));
        m_doNotRequestEmoticons->setText(tr2i18n("Do not show custom emoticons from other contacts", 0));
        mainTabWidget->setTabText(mainTabWidget->indexOf(tab_4), tr2i18n("General", 0));
        labelStatusMessage->setText(QString());
    } // retranslateUi

};

namespace Ui {
    class WlmAccountPreferences: public Ui_WlmAccountPreferences {};
} // namespace Ui

QT_END_NAMESPACE

#endif // WLMACCOUNTPREFERENCES_H

