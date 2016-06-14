#include <kdialog.h>
#include <klocale.h>

/********************************************************************************
** Form generated from reading UI file 'dlgjabberregisteraccount.ui'
**
** Created by: Qt User Interface Compiler version 4.8.7
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_DLGJABBERREGISTERACCOUNT_H
#define UI_DLGJABBERREGISTERACCOUNT_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtGui/QApplication>
#include <QtGui/QButtonGroup>
#include <QtGui/QCheckBox>
#include <QtGui/QGridLayout>
#include <QtGui/QHBoxLayout>
#include <QtGui/QHeaderView>
#include <QtGui/QLabel>
#include <QtGui/QLineEdit>
#include <QtGui/QSpacerItem>
#include <QtGui/QVBoxLayout>
#include <QtGui/QWidget>
#include "klineedit.h"
#include "knuminput.h"
#include "kpushbutton.h"

QT_BEGIN_NAMESPACE

class Ui_DlgJabberRegisterAccount
{
public:
    QGridLayout *gridLayout;
    QHBoxLayout *hboxLayout;
    QLineEdit *leJID;
    KPushButton *btnChooseServer;
    KIntSpinBox *sbPort;
    QVBoxLayout *vboxLayout;
    QLabel *lblJIDInformation;
    QSpacerItem *spacerItem;
    QLabel *lblStatusMessage;
    QLabel *lblJID;
    QLabel *lblPassword;
    KLineEdit *lePassword;
    QLabel *pixPassword;
    QLabel *lblPasswordVerify;
    QLabel *pixPasswordVerify;
    KLineEdit *lePasswordVerify;
    QLineEdit *leServer;
    QLabel *lblPort;
    QLabel *pixJID;
    QLabel *lblServer;
    QCheckBox *cbUseSSL;
    QCheckBox *cbOverrideHost;

    void setupUi(QWidget *DlgJabberRegisterAccount)
    {
        if (DlgJabberRegisterAccount->objectName().isEmpty())
            DlgJabberRegisterAccount->setObjectName(QString::fromUtf8("DlgJabberRegisterAccount"));
        DlgJabberRegisterAccount->resize(300, 350);
        DlgJabberRegisterAccount->setMinimumSize(QSize(300, 350));
        gridLayout = new QGridLayout(DlgJabberRegisterAccount);
#ifndef UI_Q_OS_MAC
        gridLayout->setSpacing(6);
#endif
        gridLayout->setContentsMargins(11, 11, 11, 11);
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        hboxLayout = new QHBoxLayout();
#ifndef UI_Q_OS_MAC
        hboxLayout->setSpacing(6);
#endif
#ifndef UI_Q_OS_MAC
        hboxLayout->setContentsMargins(0, 0, 0, 0);
#endif
        hboxLayout->setObjectName(QString::fromUtf8("hboxLayout"));
        leJID = new QLineEdit(DlgJabberRegisterAccount);
        leJID->setObjectName(QString::fromUtf8("leJID"));

        hboxLayout->addWidget(leJID);

        btnChooseServer = new KPushButton(DlgJabberRegisterAccount);
        btnChooseServer->setObjectName(QString::fromUtf8("btnChooseServer"));

        hboxLayout->addWidget(btnChooseServer);


        gridLayout->addLayout(hboxLayout, 0, 2, 1, 1);

        sbPort = new KIntSpinBox(DlgJabberRegisterAccount);
        sbPort->setObjectName(QString::fromUtf8("sbPort"));
        sbPort->setEnabled(false);
        QSizePolicy sizePolicy(QSizePolicy::Expanding, QSizePolicy::Fixed);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(sbPort->sizePolicy().hasHeightForWidth());
        sbPort->setSizePolicy(sizePolicy);
        sbPort->setMaximum(65535);

        gridLayout->addWidget(sbPort, 8, 2, 1, 1);

        vboxLayout = new QVBoxLayout();
#ifndef UI_Q_OS_MAC
        vboxLayout->setSpacing(6);
#endif
        vboxLayout->setContentsMargins(0, 0, 0, 0);
        vboxLayout->setObjectName(QString::fromUtf8("vboxLayout"));
        lblJIDInformation = new QLabel(DlgJabberRegisterAccount);
        lblJIDInformation->setObjectName(QString::fromUtf8("lblJIDInformation"));
        lblJIDInformation->setMinimumSize(QSize(0, 100));
        lblJIDInformation->setAlignment(Qt::AlignVCenter);
        lblJIDInformation->setWordWrap(true);

        vboxLayout->addWidget(lblJIDInformation);

        spacerItem = new QSpacerItem(20, 16, QSizePolicy::Minimum, QSizePolicy::Expanding);

        vboxLayout->addItem(spacerItem);

        lblStatusMessage = new QLabel(DlgJabberRegisterAccount);
        lblStatusMessage->setObjectName(QString::fromUtf8("lblStatusMessage"));
        lblStatusMessage->setAlignment(Qt::AlignCenter);

        vboxLayout->addWidget(lblStatusMessage);


        gridLayout->addLayout(vboxLayout, 9, 0, 1, 3);

        lblJID = new QLabel(DlgJabberRegisterAccount);
        lblJID->setObjectName(QString::fromUtf8("lblJID"));

        gridLayout->addWidget(lblJID, 0, 1, 1, 1);

        lblPassword = new QLabel(DlgJabberRegisterAccount);
        lblPassword->setObjectName(QString::fromUtf8("lblPassword"));

        gridLayout->addWidget(lblPassword, 2, 1, 1, 1);

        lePassword = new KLineEdit(DlgJabberRegisterAccount);
        lePassword->setObjectName(QString::fromUtf8("lePassword"));
        lePassword->setEchoMode(QLineEdit::Password);

        gridLayout->addWidget(lePassword, 2, 2, 1, 1);

        pixPassword = new QLabel(DlgJabberRegisterAccount);
        pixPassword->setObjectName(QString::fromUtf8("pixPassword"));
        pixPassword->setMinimumSize(QSize(16, 16));
        pixPassword->setMaximumSize(QSize(32767, 32767));

        gridLayout->addWidget(pixPassword, 2, 0, 1, 1);

        lblPasswordVerify = new QLabel(DlgJabberRegisterAccount);
        lblPasswordVerify->setObjectName(QString::fromUtf8("lblPasswordVerify"));
        lblPasswordVerify->setEnabled(true);

        gridLayout->addWidget(lblPasswordVerify, 3, 1, 1, 1);

        pixPasswordVerify = new QLabel(DlgJabberRegisterAccount);
        pixPasswordVerify->setObjectName(QString::fromUtf8("pixPasswordVerify"));
        pixPasswordVerify->setMinimumSize(QSize(16, 16));
        pixPasswordVerify->setMaximumSize(QSize(32767, 32767));

        gridLayout->addWidget(pixPasswordVerify, 3, 0, 1, 1);

        lePasswordVerify = new KLineEdit(DlgJabberRegisterAccount);
        lePasswordVerify->setObjectName(QString::fromUtf8("lePasswordVerify"));
        lePasswordVerify->setEnabled(true);
        lePasswordVerify->setEchoMode(QLineEdit::Password);

        gridLayout->addWidget(lePasswordVerify, 3, 2, 1, 1);

        leServer = new QLineEdit(DlgJabberRegisterAccount);
        leServer->setObjectName(QString::fromUtf8("leServer"));
        leServer->setEnabled(false);

        gridLayout->addWidget(leServer, 7, 2, 1, 1);

        lblPort = new QLabel(DlgJabberRegisterAccount);
        lblPort->setObjectName(QString::fromUtf8("lblPort"));
        lblPort->setEnabled(false);

        gridLayout->addWidget(lblPort, 8, 1, 1, 1);

        pixJID = new QLabel(DlgJabberRegisterAccount);
        pixJID->setObjectName(QString::fromUtf8("pixJID"));
        pixJID->setMinimumSize(QSize(16, 16));
        pixJID->setMaximumSize(QSize(32767, 32767));

        gridLayout->addWidget(pixJID, 0, 0, 1, 1);

        lblServer = new QLabel(DlgJabberRegisterAccount);
        lblServer->setObjectName(QString::fromUtf8("lblServer"));
        lblServer->setEnabled(false);

        gridLayout->addWidget(lblServer, 7, 1, 1, 1);

        cbUseSSL = new QCheckBox(DlgJabberRegisterAccount);
        cbUseSSL->setObjectName(QString::fromUtf8("cbUseSSL"));
        sizePolicy.setHeightForWidth(cbUseSSL->sizePolicy().hasHeightForWidth());
        cbUseSSL->setSizePolicy(sizePolicy);
        cbUseSSL->setChecked(false);

        gridLayout->addWidget(cbUseSSL, 5, 1, 1, 2);

        cbOverrideHost = new QCheckBox(DlgJabberRegisterAccount);
        cbOverrideHost->setObjectName(QString::fromUtf8("cbOverrideHost"));
        sizePolicy.setHeightForWidth(cbOverrideHost->sizePolicy().hasHeightForWidth());
        cbOverrideHost->setSizePolicy(sizePolicy);

        gridLayout->addWidget(cbOverrideHost, 6, 1, 1, 2);

#ifndef UI_QT_NO_SHORTCUT
        lblJID->setBuddy(leJID);
        lblPassword->setBuddy(lePassword);
        lblPasswordVerify->setBuddy(lePasswordVerify);
        lblPort->setBuddy(sbPort);
        lblServer->setBuddy(leServer);
#endif // QT_NO_SHORTCUT
        QWidget::setTabOrder(leJID, btnChooseServer);
        QWidget::setTabOrder(btnChooseServer, lePassword);
        QWidget::setTabOrder(lePassword, lePasswordVerify);

        retranslateUi(DlgJabberRegisterAccount);

        QMetaObject::connectSlotsByName(DlgJabberRegisterAccount);
    } // setupUi

    void retranslateUi(QWidget *DlgJabberRegisterAccount)
    {
        DlgJabberRegisterAccount->setWindowTitle(tr2i18n("Register Account - Jabber", 0));
        leJID->setText(QString());
        btnChooseServer->setText(tr2i18n("C&hoose...", 0));
        lblJIDInformation->setText(QString());
        lblStatusMessage->setText(QString());
        lblJID->setText(tr2i18n("Desired Jabber &ID:", 0));
        lblPassword->setText(tr2i18n("Pass&word:", 0));
        lblPasswordVerify->setText(tr2i18n("&Repeat password:", 0));
        leServer->setText(QString());
        lblPort->setText(tr2i18n("&Port:", 0));
        lblServer->setText(tr2i18n("&Server:", 0));
#ifndef UI_QT_NO_TOOLTIP
        cbUseSSL->setToolTip(tr2i18n("Check this box to enable legacy SSL encrypted communication with the server. This is needed only for old servers.", 0));
#endif // QT_NO_TOOLTIP
#ifndef UI_QT_NO_WHATSTHIS
        cbUseSSL->setWhatsThis(tr2i18n("Check this box to enable legacy SSL encrypted communication with the server. This is needed only for old servers.", 0));
#endif // QT_NO_WHATSTHIS
        cbUseSSL->setText(tr2i18n("Use legacy SSL encr&yption", 0));
        cbOverrideHost->setText(tr2i18n("&Override default server information", 0));
    } // retranslateUi

};

namespace Ui {
    class DlgJabberRegisterAccount: public Ui_DlgJabberRegisterAccount {};
} // namespace Ui

QT_END_NAMESPACE

#endif // DLGJABBERREGISTERACCOUNT_H

