#include <kdialog.h>
#include <klocale.h>

/********************************************************************************
** Form generated from reading UI file 'meanwhileeditaccount.ui'
**
** Created by: Qt User Interface Compiler version 4.8.7
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MEANWHILEEDITACCOUNT_H
#define UI_MEANWHILEEDITACCOUNT_H

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

class Ui_MeanwhileEditAccount
{
public:
    QVBoxLayout *vboxLayout;
    QTabWidget *tabWidget11;
    QWidget *tab;
    QVBoxLayout *vboxLayout1;
    QGroupBox *groupBox53;
    QVBoxLayout *vboxLayout2;
    QHBoxLayout *hboxLayout;
    QLabel *label1;
    QLineEdit *mScreenName;
    Kopete::UI::PasswordWidget *mPasswordWidget;
    QCheckBox *mAutoConnect;
    QWidget *tab1;
    QVBoxLayout *vboxLayout3;
    QGroupBox *groupBox54;
    QVBoxLayout *verticalLayout_3;
    QHBoxLayout *hboxLayout1;
    QHBoxLayout *hboxLayout2;
    QLabel *lblServer;
    QLineEdit *mServerName;
    QHBoxLayout *hboxLayout3;
    QLabel *lblPort;
    QSpinBox *mServerPort;
    QGroupBox *groupBox5;
    QVBoxLayout *_2;
    QCheckBox *chkCustomClientID;
    QGridLayout *_3;
    QComboBox *mClientID;
    QLabel *lblClientIdentifier;
    QHBoxLayout *_4;
    QSpinBox *mClientVersionMajor;
    QLabel *lblVersionSeparator;
    QSpinBox *mClientVersionMinor;
    QLabel *lblClientVersion;
    QPushButton *btnServerDefaults;
    QSpacerItem *verticalSpacer;

    void setupUi(QWidget *MeanwhileEditAccount)
    {
        if (MeanwhileEditAccount->objectName().isEmpty())
            MeanwhileEditAccount->setObjectName(QString::fromUtf8("MeanwhileEditAccount"));
        MeanwhileEditAccount->resize(669, 414);
        QSizePolicy sizePolicy(QSizePolicy::Expanding, QSizePolicy::Minimum);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(MeanwhileEditAccount->sizePolicy().hasHeightForWidth());
        MeanwhileEditAccount->setSizePolicy(sizePolicy);
        vboxLayout = new QVBoxLayout(MeanwhileEditAccount);
#ifndef UI_Q_OS_MAC
        vboxLayout->setSpacing(6);
#endif
        vboxLayout->setContentsMargins(0, 0, 0, 0);
        vboxLayout->setObjectName(QString::fromUtf8("vboxLayout"));
        tabWidget11 = new QTabWidget(MeanwhileEditAccount);
        tabWidget11->setObjectName(QString::fromUtf8("tabWidget11"));
        tab = new QWidget();
        tab->setObjectName(QString::fromUtf8("tab"));
        vboxLayout1 = new QVBoxLayout(tab);
        vboxLayout1->setObjectName(QString::fromUtf8("vboxLayout1"));
        groupBox53 = new QGroupBox(tab);
        groupBox53->setObjectName(QString::fromUtf8("groupBox53"));
        vboxLayout2 = new QVBoxLayout(groupBox53);
        vboxLayout2->setObjectName(QString::fromUtf8("vboxLayout2"));
        hboxLayout = new QHBoxLayout();
        hboxLayout->setObjectName(QString::fromUtf8("hboxLayout"));
        label1 = new QLabel(groupBox53);
        label1->setObjectName(QString::fromUtf8("label1"));
        label1->setWordWrap(false);

        hboxLayout->addWidget(label1);

        mScreenName = new QLineEdit(groupBox53);
        mScreenName->setObjectName(QString::fromUtf8("mScreenName"));

        hboxLayout->addWidget(mScreenName);


        vboxLayout2->addLayout(hboxLayout);

        mPasswordWidget = new Kopete::UI::PasswordWidget(groupBox53);
        mPasswordWidget->setObjectName(QString::fromUtf8("mPasswordWidget"));

        vboxLayout2->addWidget(mPasswordWidget);

        mAutoConnect = new QCheckBox(groupBox53);
        mAutoConnect->setObjectName(QString::fromUtf8("mAutoConnect"));

        vboxLayout2->addWidget(mAutoConnect);


        vboxLayout1->addWidget(groupBox53);

        tabWidget11->addTab(tab, QString());
        tab1 = new QWidget();
        tab1->setObjectName(QString::fromUtf8("tab1"));
        vboxLayout3 = new QVBoxLayout(tab1);
        vboxLayout3->setObjectName(QString::fromUtf8("vboxLayout3"));
        groupBox54 = new QGroupBox(tab1);
        groupBox54->setObjectName(QString::fromUtf8("groupBox54"));
        sizePolicy.setHeightForWidth(groupBox54->sizePolicy().hasHeightForWidth());
        groupBox54->setSizePolicy(sizePolicy);
        verticalLayout_3 = new QVBoxLayout(groupBox54);
        verticalLayout_3->setObjectName(QString::fromUtf8("verticalLayout_3"));
        hboxLayout1 = new QHBoxLayout();
        hboxLayout1->setObjectName(QString::fromUtf8("hboxLayout1"));
        hboxLayout2 = new QHBoxLayout();
        hboxLayout2->setObjectName(QString::fromUtf8("hboxLayout2"));
        lblServer = new QLabel(groupBox54);
        lblServer->setObjectName(QString::fromUtf8("lblServer"));
        lblServer->setWordWrap(false);

        hboxLayout2->addWidget(lblServer);

        mServerName = new QLineEdit(groupBox54);
        mServerName->setObjectName(QString::fromUtf8("mServerName"));

        hboxLayout2->addWidget(mServerName);


        hboxLayout1->addLayout(hboxLayout2);

        hboxLayout3 = new QHBoxLayout();
        hboxLayout3->setObjectName(QString::fromUtf8("hboxLayout3"));
        lblPort = new QLabel(groupBox54);
        lblPort->setObjectName(QString::fromUtf8("lblPort"));
        lblPort->setWordWrap(false);

        hboxLayout3->addWidget(lblPort);

        mServerPort = new QSpinBox(groupBox54);
        mServerPort->setObjectName(QString::fromUtf8("mServerPort"));
        mServerPort->setMinimum(1);
        mServerPort->setMaximum(65534);
        mServerPort->setValue(1533);

        hboxLayout3->addWidget(mServerPort);


        hboxLayout1->addLayout(hboxLayout3);


        verticalLayout_3->addLayout(hboxLayout1);


        vboxLayout3->addWidget(groupBox54);

        groupBox5 = new QGroupBox(tab1);
        groupBox5->setObjectName(QString::fromUtf8("groupBox5"));
        sizePolicy.setHeightForWidth(groupBox5->sizePolicy().hasHeightForWidth());
        groupBox5->setSizePolicy(sizePolicy);
        _2 = new QVBoxLayout(groupBox5);
        _2->setObjectName(QString::fromUtf8("_2"));
        chkCustomClientID = new QCheckBox(groupBox5);
        chkCustomClientID->setObjectName(QString::fromUtf8("chkCustomClientID"));
        QSizePolicy sizePolicy1(QSizePolicy::Expanding, QSizePolicy::Fixed);
        sizePolicy1.setHorizontalStretch(0);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(chkCustomClientID->sizePolicy().hasHeightForWidth());
        chkCustomClientID->setSizePolicy(sizePolicy1);

        _2->addWidget(chkCustomClientID);

        _3 = new QGridLayout();
        _3->setObjectName(QString::fromUtf8("_3"));
        mClientID = new QComboBox(groupBox5);
        mClientID->setObjectName(QString::fromUtf8("mClientID"));
        mClientID->setEnabled(false);

        _3->addWidget(mClientID, 0, 1, 1, 1);

        lblClientIdentifier = new QLabel(groupBox5);
        lblClientIdentifier->setObjectName(QString::fromUtf8("lblClientIdentifier"));
        lblClientIdentifier->setEnabled(false);
        lblClientIdentifier->setWordWrap(false);

        _3->addWidget(lblClientIdentifier, 0, 0, 1, 1);

        _4 = new QHBoxLayout();
        _4->setObjectName(QString::fromUtf8("_4"));
        mClientVersionMajor = new QSpinBox(groupBox5);
        mClientVersionMajor->setObjectName(QString::fromUtf8("mClientVersionMajor"));
        mClientVersionMajor->setEnabled(false);
        mClientVersionMajor->setMaximum(65535);

        _4->addWidget(mClientVersionMajor);

        lblVersionSeparator = new QLabel(groupBox5);
        lblVersionSeparator->setObjectName(QString::fromUtf8("lblVersionSeparator"));
        lblVersionSeparator->setEnabled(false);
        lblVersionSeparator->setAlignment(Qt::AlignCenter);
        lblVersionSeparator->setWordWrap(false);

        _4->addWidget(lblVersionSeparator);

        mClientVersionMinor = new QSpinBox(groupBox5);
        mClientVersionMinor->setObjectName(QString::fromUtf8("mClientVersionMinor"));
        mClientVersionMinor->setEnabled(false);
        mClientVersionMinor->setMaximum(65535);

        _4->addWidget(mClientVersionMinor);


        _3->addLayout(_4, 1, 1, 1, 1);

        lblClientVersion = new QLabel(groupBox5);
        lblClientVersion->setObjectName(QString::fromUtf8("lblClientVersion"));
        lblClientVersion->setEnabled(false);
        lblClientVersion->setWordWrap(false);

        _3->addWidget(lblClientVersion, 1, 0, 1, 1);


        _2->addLayout(_3);


        vboxLayout3->addWidget(groupBox5);

        btnServerDefaults = new QPushButton(tab1);
        btnServerDefaults->setObjectName(QString::fromUtf8("btnServerDefaults"));
        QSizePolicy sizePolicy2(QSizePolicy::Expanding, QSizePolicy::Preferred);
        sizePolicy2.setHorizontalStretch(0);
        sizePolicy2.setVerticalStretch(0);
        sizePolicy2.setHeightForWidth(btnServerDefaults->sizePolicy().hasHeightForWidth());
        btnServerDefaults->setSizePolicy(sizePolicy2);

        vboxLayout3->addWidget(btnServerDefaults);

        verticalSpacer = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        vboxLayout3->addItem(verticalSpacer);

        tabWidget11->addTab(tab1, QString());

        vboxLayout->addWidget(tabWidget11);

#ifndef UI_QT_NO_SHORTCUT
        label1->setBuddy(mScreenName);
        lblServer->setBuddy(mServerName);
        lblPort->setBuddy(mServerPort);
        lblClientIdentifier->setBuddy(mClientID);
        lblClientVersion->setBuddy(mClientVersionMajor);
#endif // QT_NO_SHORTCUT

        retranslateUi(MeanwhileEditAccount);
        QObject::connect(chkCustomClientID, SIGNAL(toggled(bool)), mClientID, SLOT(setEnabled(bool)));
        QObject::connect(chkCustomClientID, SIGNAL(toggled(bool)), mClientVersionMajor, SLOT(setEnabled(bool)));
        QObject::connect(chkCustomClientID, SIGNAL(toggled(bool)), mClientVersionMinor, SLOT(setEnabled(bool)));
        QObject::connect(chkCustomClientID, SIGNAL(toggled(bool)), lblClientIdentifier, SLOT(setEnabled(bool)));
        QObject::connect(chkCustomClientID, SIGNAL(toggled(bool)), lblClientVersion, SLOT(setEnabled(bool)));
        QObject::connect(chkCustomClientID, SIGNAL(toggled(bool)), lblVersionSeparator, SLOT(setEnabled(bool)));

        tabWidget11->setCurrentIndex(0);


        QMetaObject::connectSlotsByName(MeanwhileEditAccount);
    } // setupUi

    void retranslateUi(QWidget *MeanwhileEditAccount)
    {
        MeanwhileEditAccount->setWindowTitle(tr2i18n("Edit Meanwhile Account", 0));
        groupBox53->setTitle(tr2i18n("Account Information", 0));
#ifndef UI_QT_NO_TOOLTIP
        label1->setToolTip(tr2i18n("Your Sametime user ID", 0));
#endif // QT_NO_TOOLTIP
#ifndef UI_QT_NO_WHATSTHIS
        label1->setWhatsThis(tr2i18n("Your Sametime user ID", 0));
#endif // QT_NO_WHATSTHIS
        label1->setText(tr2i18n("Meanwhile &username:", 0));
#ifndef UI_QT_NO_TOOLTIP
        mScreenName->setToolTip(tr2i18n("Your Sametime user ID", 0));
#endif // QT_NO_TOOLTIP
#ifndef UI_QT_NO_WHATSTHIS
        mScreenName->setWhatsThis(tr2i18n("Your Sametime user ID", 0));
#endif // QT_NO_WHATSTHIS
#ifndef UI_QT_NO_WHATSTHIS
        mAutoConnect->setWhatsThis(tr2i18n("Check to disable automatic connection.  If checked, you can connect manually to this account, using the icon at the bottom of the main Kopete window", 0));
#endif // QT_NO_WHATSTHIS
        mAutoConnect->setText(tr2i18n("E&xclude from connect all", 0));
        tabWidget11->setTabText(tabWidget11->indexOf(tab), tr2i18n("B&asic Setup", 0));
        groupBox54->setTitle(tr2i18n("Connection Preferences", 0));
#ifndef UI_QT_NO_TOOLTIP
        lblServer->setToolTip(tr2i18n("The IP address or hostname of the Sametime server you wish to connect to.", 0));
#endif // QT_NO_TOOLTIP
#ifndef UI_QT_NO_WHATSTHIS
        lblServer->setWhatsThis(tr2i18n("The IP address or hostname of the Sametime server you wish to connect to.", 0));
#endif // QT_NO_WHATSTHIS
        lblServer->setText(tr2i18n("Ser&ver:", 0));
#ifndef UI_QT_NO_TOOLTIP
        mServerName->setToolTip(tr2i18n("The IP address or hostname of the Sametime server you wish to connect to.", 0));
#endif // QT_NO_TOOLTIP
#ifndef UI_QT_NO_WHATSTHIS
        mServerName->setWhatsThis(tr2i18n("The IP address or hostname of the Sametime server you wish to connect to.", 0));
#endif // QT_NO_WHATSTHIS
#ifndef UI_QT_NO_TOOLTIP
        lblPort->setToolTip(tr2i18n("The port on the Sametime server that you would like to connect to.", 0));
#endif // QT_NO_TOOLTIP
#ifndef UI_QT_NO_WHATSTHIS
        lblPort->setWhatsThis(tr2i18n("The port on the Sametime server that you would like to connect to.  Usually this is 1533.", 0));
#endif // QT_NO_WHATSTHIS
        lblPort->setText(tr2i18n("Po&rt:", 0));
#ifndef UI_QT_NO_TOOLTIP
        mServerPort->setToolTip(tr2i18n("The port on the Sametime server that you would like to connect to.", 0));
#endif // QT_NO_TOOLTIP
#ifndef UI_QT_NO_WHATSTHIS
        mServerPort->setWhatsThis(tr2i18n("The port on the Sametime server that you would like to connect to.  Usually this is 1533.", 0));
#endif // QT_NO_WHATSTHIS
        groupBox5->setTitle(tr2i18n("Client Identifier", 0));
        chkCustomClientID->setText(tr2i18n("Use custom client identifier", 0));
        lblClientIdentifier->setText(tr2i18n("Client identifier:", 0));
        lblVersionSeparator->setText(tr2i18n(".", 0));
        lblClientVersion->setText(tr2i18n("Client version (major.minor):", 0));
#ifndef UI_QT_NO_TOOLTIP
        btnServerDefaults->setToolTip(tr2i18n("Restore the server and port values to their defaults.", 0));
#endif // QT_NO_TOOLTIP
#ifndef UI_QT_NO_WHATSTHIS
        btnServerDefaults->setWhatsThis(tr2i18n("Restore the server and port values to their defaults.", 0));
#endif // QT_NO_WHATSTHIS
        btnServerDefaults->setText(tr2i18n("Restore &Defaults", 0));
        tabWidget11->setTabText(tabWidget11->indexOf(tab1), tr2i18n("Connection", 0));
    } // retranslateUi

};

namespace Ui {
    class MeanwhileEditAccount: public Ui_MeanwhileEditAccount {};
} // namespace Ui

QT_END_NAMESPACE

#endif // MEANWHILEEDITACCOUNT_H

