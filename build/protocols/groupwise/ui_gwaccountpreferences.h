#include <kdialog.h>
#include <klocale.h>

/********************************************************************************
** Form generated from reading UI file 'gwaccountpreferences.ui'
**
** Created by: Qt User Interface Compiler version 4.8.7
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_GWACCOUNTPREFERENCES_H
#define UI_GWACCOUNTPREFERENCES_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtGui/QApplication>
#include <QtGui/QButtonGroup>
#include <QtGui/QCheckBox>
#include <QtGui/QFrame>
#include <QtGui/QGroupBox>
#include <QtGui/QHBoxLayout>
#include <QtGui/QHeaderView>
#include <QtGui/QLabel>
#include <QtGui/QLineEdit>
#include <QtGui/QSpacerItem>
#include <QtGui/QSpinBox>
#include <QtGui/QTabWidget>
#include <QtGui/QVBoxLayout>
#include <QtGui/QWidget>
#include "kopetepasswordwidget.h"

QT_BEGIN_NAMESPACE

class Ui_GroupWiseAccountPreferences
{
public:
    QVBoxLayout *vboxLayout;
    QTabWidget *tabWidget11;
    QWidget *tab;
    QVBoxLayout *vboxLayout1;
    QGroupBox *groupBox55;
    QVBoxLayout *vboxLayout2;
    QHBoxLayout *hboxLayout;
    QLabel *textLabel1;
    QLineEdit *userId;
    Kopete::UI::PasswordWidget *password;
    QCheckBox *autoConnect;
    QFrame *line1;
    QHBoxLayout *hboxLayout1;
    QLabel *labelServer;
    QLineEdit *server;
    QLabel *labelPort;
    QSpinBox *port;
    QWidget *TabPage;
    QVBoxLayout *vboxLayout3;
    QCheckBox *alwaysAccept;
    QSpacerItem *spacerItem;
    QLabel *labelStatusMessage;

    void setupUi(QWidget *GroupWiseAccountPreferences)
    {
        if (GroupWiseAccountPreferences->objectName().isEmpty())
            GroupWiseAccountPreferences->setObjectName(QString::fromUtf8("GroupWiseAccountPreferences"));
        GroupWiseAccountPreferences->resize(366, 404);
        vboxLayout = new QVBoxLayout(GroupWiseAccountPreferences);
        vboxLayout->setSpacing(0);
        vboxLayout->setObjectName(QString::fromUtf8("vboxLayout"));
        vboxLayout->setContentsMargins(0, 0, 0, 0);
        tabWidget11 = new QTabWidget(GroupWiseAccountPreferences);
        tabWidget11->setObjectName(QString::fromUtf8("tabWidget11"));
        tab = new QWidget();
        tab->setObjectName(QString::fromUtf8("tab"));
        vboxLayout1 = new QVBoxLayout(tab);
        vboxLayout1->setSpacing(6);
        vboxLayout1->setObjectName(QString::fromUtf8("vboxLayout1"));
        vboxLayout1->setContentsMargins(0, 0, 0, 0);
        groupBox55 = new QGroupBox(tab);
        groupBox55->setObjectName(QString::fromUtf8("groupBox55"));
        vboxLayout2 = new QVBoxLayout(groupBox55);
        vboxLayout2->setSpacing(6);
        vboxLayout2->setObjectName(QString::fromUtf8("vboxLayout2"));
        vboxLayout2->setContentsMargins(0, 0, 0, 0);
        hboxLayout = new QHBoxLayout();
        hboxLayout->setSpacing(6);
        hboxLayout->setObjectName(QString::fromUtf8("hboxLayout"));
        hboxLayout->setContentsMargins(0, 0, 0, 0);
        textLabel1 = new QLabel(groupBox55);
        textLabel1->setObjectName(QString::fromUtf8("textLabel1"));
        textLabel1->setWordWrap(false);

        hboxLayout->addWidget(textLabel1);

        userId = new QLineEdit(groupBox55);
        userId->setObjectName(QString::fromUtf8("userId"));

        hboxLayout->addWidget(userId);


        vboxLayout2->addLayout(hboxLayout);

        password = new Kopete::UI::PasswordWidget(groupBox55);
        password->setObjectName(QString::fromUtf8("password"));

        vboxLayout2->addWidget(password);

        autoConnect = new QCheckBox(groupBox55);
        autoConnect->setObjectName(QString::fromUtf8("autoConnect"));

        vboxLayout2->addWidget(autoConnect);

        line1 = new QFrame(groupBox55);
        line1->setObjectName(QString::fromUtf8("line1"));
        line1->setFrameShape(QFrame::HLine);
        line1->setFrameShadow(QFrame::Sunken);
        line1->setFrameShape(QFrame::HLine);

        vboxLayout2->addWidget(line1);

        hboxLayout1 = new QHBoxLayout();
        hboxLayout1->setSpacing(6);
        hboxLayout1->setObjectName(QString::fromUtf8("hboxLayout1"));
        hboxLayout1->setContentsMargins(0, 0, 0, 0);
        labelServer = new QLabel(groupBox55);
        labelServer->setObjectName(QString::fromUtf8("labelServer"));
        labelServer->setEnabled(true);
        QSizePolicy sizePolicy(QSizePolicy::Preferred, QSizePolicy::Fixed);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(labelServer->sizePolicy().hasHeightForWidth());
        labelServer->setSizePolicy(sizePolicy);
        labelServer->setWordWrap(false);

        hboxLayout1->addWidget(labelServer);

        server = new QLineEdit(groupBox55);
        server->setObjectName(QString::fromUtf8("server"));
        server->setEnabled(true);
        server->setMinimumSize(QSize(180, 0));

        hboxLayout1->addWidget(server);

        labelPort = new QLabel(groupBox55);
        labelPort->setObjectName(QString::fromUtf8("labelPort"));
        labelPort->setEnabled(true);
        sizePolicy.setHeightForWidth(labelPort->sizePolicy().hasHeightForWidth());
        labelPort->setSizePolicy(sizePolicy);
        labelPort->setWordWrap(false);

        hboxLayout1->addWidget(labelPort);

        port = new QSpinBox(groupBox55);
        port->setObjectName(QString::fromUtf8("port"));
        port->setEnabled(true);
        QSizePolicy sizePolicy1(QSizePolicy::Fixed, QSizePolicy::Fixed);
        sizePolicy1.setHorizontalStretch(0);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(port->sizePolicy().hasHeightForWidth());
        port->setSizePolicy(sizePolicy1);
        port->setButtonSymbols(QAbstractSpinBox::UpDownArrows);
        port->setMinimum(1);
        port->setMaximum(65535);
        port->setValue(8300);

        hboxLayout1->addWidget(port);


        vboxLayout2->addLayout(hboxLayout1);


        vboxLayout1->addWidget(groupBox55);

        tabWidget11->addTab(tab, QString());
        TabPage = new QWidget();
        TabPage->setObjectName(QString::fromUtf8("TabPage"));
        vboxLayout3 = new QVBoxLayout(TabPage);
        vboxLayout3->setSpacing(6);
        vboxLayout3->setObjectName(QString::fromUtf8("vboxLayout3"));
        vboxLayout3->setContentsMargins(0, 0, 0, 0);
        alwaysAccept = new QCheckBox(TabPage);
        alwaysAccept->setObjectName(QString::fromUtf8("alwaysAccept"));

        vboxLayout3->addWidget(alwaysAccept);

        spacerItem = new QSpacerItem(20, 91, QSizePolicy::Minimum, QSizePolicy::Expanding);

        vboxLayout3->addItem(spacerItem);

        tabWidget11->addTab(TabPage, QString());

        vboxLayout->addWidget(tabWidget11);

        labelStatusMessage = new QLabel(GroupWiseAccountPreferences);
        labelStatusMessage->setObjectName(QString::fromUtf8("labelStatusMessage"));
        labelStatusMessage->setAlignment(Qt::AlignCenter);
        labelStatusMessage->setWordWrap(false);

        vboxLayout->addWidget(labelStatusMessage);

#ifndef UI_QT_NO_SHORTCUT
        textLabel1->setBuddy(userId);
        labelServer->setBuddy(server);
        labelPort->setBuddy(port);
#endif // QT_NO_SHORTCUT

        retranslateUi(GroupWiseAccountPreferences);

        tabWidget11->setCurrentIndex(0);


        QMetaObject::connectSlotsByName(GroupWiseAccountPreferences);
    } // setupUi

    void retranslateUi(QWidget *GroupWiseAccountPreferences)
    {
        GroupWiseAccountPreferences->setWindowTitle(tr2i18n("Account Preferences - Groupwise", 0));
        groupBox55->setTitle(tr2i18n("Account Information", 0));
#ifndef UI_QT_NO_TOOLTIP
        textLabel1->setToolTip(tr2i18n("The account name of your account.", 0));
#endif // QT_NO_TOOLTIP
#ifndef UI_QT_NO_WHATSTHIS
        textLabel1->setWhatsThis(tr2i18n("The account name of your account.", 0));
#endif // QT_NO_WHATSTHIS
        textLabel1->setText(tr2i18n("&User ID:", 0));
#ifndef UI_QT_NO_TOOLTIP
        userId->setToolTip(tr2i18n("The account name of your account.", 0));
#endif // QT_NO_TOOLTIP
#ifndef UI_QT_NO_WHATSTHIS
        userId->setWhatsThis(tr2i18n("The account name of your account.", 0));
#endif // QT_NO_WHATSTHIS
#ifndef UI_QT_NO_WHATSTHIS
        autoConnect->setWhatsThis(tr2i18n("Check to disable automatic connection.  If checked, you may connect to this account manually using the icon in the bottom of the main Kopete window", 0));
#endif // QT_NO_WHATSTHIS
        autoConnect->setText(tr2i18n("E&xclude from connect all", 0));
#ifndef UI_QT_NO_TOOLTIP
        labelServer->setToolTip(tr2i18n("The IP address or hostname of the server you would like to connect to.", 0));
#endif // QT_NO_TOOLTIP
#ifndef UI_QT_NO_WHATSTHIS
        labelServer->setWhatsThis(tr2i18n("The IP address or hostname of the server you would like to connect to (for example im.yourcorp.com).", 0));
#endif // QT_NO_WHATSTHIS
        labelServer->setText(tr2i18n("Ser&ver:", 0));
#ifndef UI_QT_NO_TOOLTIP
        server->setToolTip(tr2i18n("The IP address or hostname of the server you would like to connect to.", 0));
#endif // QT_NO_TOOLTIP
#ifndef UI_QT_NO_WHATSTHIS
        server->setWhatsThis(tr2i18n("The IP address or hostname of the server you would like to connect to (for example im.yourcorp.com).", 0));
#endif // QT_NO_WHATSTHIS
        server->setText(QString());
#ifndef UI_QT_NO_TOOLTIP
        labelPort->setToolTip(tr2i18n("The port on the server that you would like to connect to.", 0));
#endif // QT_NO_TOOLTIP
#ifndef UI_QT_NO_WHATSTHIS
        labelPort->setWhatsThis(tr2i18n("The port on the server that you would like to connect to (default is 5222).", 0));
#endif // QT_NO_WHATSTHIS
        labelPort->setText(tr2i18n("Po&rt:", 0));
#ifndef UI_QT_NO_TOOLTIP
        port->setToolTip(tr2i18n("The port on the server that you would like to connect to.", 0));
#endif // QT_NO_TOOLTIP
#ifndef UI_QT_NO_WHATSTHIS
        port->setWhatsThis(tr2i18n("The port on the server that you would like to connect to (default is 5222).", 0));
#endif // QT_NO_WHATSTHIS
        tabWidget11->setTabText(tabWidget11->indexOf(tab), tr2i18n("B&asic Setup", 0));
        alwaysAccept->setText(tr2i18n("A&lways accept invitations", 0));
        tabWidget11->setTabText(tabWidget11->indexOf(TabPage), tr2i18n("Advanced &Options", 0));
        labelStatusMessage->setText(QString());
    } // retranslateUi

};

namespace Ui {
    class GroupWiseAccountPreferences: public Ui_GroupWiseAccountPreferences {};
} // namespace Ui

QT_END_NAMESPACE

#endif // GWACCOUNTPREFERENCES_H

