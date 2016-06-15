#include <kdialog.h>
#include <klocale.h>

/********************************************************************************
** Form generated from reading UI file 'kopeteaccountconfigbase.ui'
**
** Created by: Qt User Interface Compiler version 4.8.7
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_KOPETEACCOUNTCONFIGBASE_H
#define UI_KOPETEACCOUNTCONFIGBASE_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtGui/QApplication>
#include <QtGui/QButtonGroup>
#include <QtGui/QGroupBox>
#include <QtGui/QHBoxLayout>
#include <QtGui/QHeaderView>
#include <QtGui/QLabel>
#include <QtGui/QPushButton>
#include <QtGui/QSpacerItem>
#include <QtGui/QVBoxLayout>
#include <QtGui/QWidget>
#include "accounttreewidget.h"

QT_BEGIN_NAMESPACE

class Ui_KopeteAccountConfigBase
{
public:
    QHBoxLayout *hboxLayout;
    QVBoxLayout *vboxLayout;
    AccountTreeWidget *mAccountList;
    QLabel *label;
    QLabel *label_2;
    QVBoxLayout *vboxLayout1;
    QGroupBox *mGroupBoxAccounts;
    QVBoxLayout *vboxLayout2;
    QPushButton *mButtonAccountAdd;
    QPushButton *mButtonAccountRemove;
    QPushButton *mButtonAccountModify;
    QPushButton *mButtonAccountSwitchIdentity;
    QPushButton *mButtonAccountSetColor;
    QSpacerItem *spacerItem;
    QGroupBox *mGroupBoxIdentities;
    QVBoxLayout *vboxLayout3;
    QPushButton *mButtonIdentityAdd;
    QPushButton *mButtonIdentityCopy;
    QPushButton *mButtonIdentityRemove;
    QPushButton *mButtonIdentityModify;
    QPushButton *mButtonIdentitySetDefault;

    void setupUi(QWidget *KopeteAccountConfigBase)
    {
        if (KopeteAccountConfigBase->objectName().isEmpty())
            KopeteAccountConfigBase->setObjectName(QString::fromUtf8("KopeteAccountConfigBase"));
        KopeteAccountConfigBase->resize(550, 505);
        hboxLayout = new QHBoxLayout(KopeteAccountConfigBase);
        hboxLayout->setObjectName(QString::fromUtf8("hboxLayout"));
        vboxLayout = new QVBoxLayout();
        vboxLayout->setSpacing(4);
        vboxLayout->setObjectName(QString::fromUtf8("vboxLayout"));
        mAccountList = new AccountTreeWidget(KopeteAccountConfigBase);
        mAccountList->setObjectName(QString::fromUtf8("mAccountList"));
        QSizePolicy sizePolicy(QSizePolicy::MinimumExpanding, QSizePolicy::MinimumExpanding);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(mAccountList->sizePolicy().hasHeightForWidth());
        mAccountList->setSizePolicy(sizePolicy);
        mAccountList->setAcceptDrops(true);
        mAccountList->setDragEnabled(true);
        mAccountList->setDragDropMode(QAbstractItemView::InternalMove);
        mAccountList->setAlternatingRowColors(true);
        mAccountList->setSelectionBehavior(QAbstractItemView::SelectRows);
        mAccountList->setIconSize(QSize(32, 32));
        mAccountList->setRootIsDecorated(false);
        mAccountList->setAllColumnsShowFocus(true);

        vboxLayout->addWidget(mAccountList);

        label = new QLabel(KopeteAccountConfigBase);
        label->setObjectName(QString::fromUtf8("label"));

        vboxLayout->addWidget(label);

        label_2 = new QLabel(KopeteAccountConfigBase);
        label_2->setObjectName(QString::fromUtf8("label_2"));

        vboxLayout->addWidget(label_2);


        hboxLayout->addLayout(vboxLayout);

        vboxLayout1 = new QVBoxLayout();
        vboxLayout1->setObjectName(QString::fromUtf8("vboxLayout1"));
        mGroupBoxAccounts = new QGroupBox(KopeteAccountConfigBase);
        mGroupBoxAccounts->setObjectName(QString::fromUtf8("mGroupBoxAccounts"));
        vboxLayout2 = new QVBoxLayout(mGroupBoxAccounts);
        vboxLayout2->setObjectName(QString::fromUtf8("vboxLayout2"));
        mButtonAccountAdd = new QPushButton(mGroupBoxAccounts);
        mButtonAccountAdd->setObjectName(QString::fromUtf8("mButtonAccountAdd"));

        vboxLayout2->addWidget(mButtonAccountAdd);

        mButtonAccountRemove = new QPushButton(mGroupBoxAccounts);
        mButtonAccountRemove->setObjectName(QString::fromUtf8("mButtonAccountRemove"));

        vboxLayout2->addWidget(mButtonAccountRemove);

        mButtonAccountModify = new QPushButton(mGroupBoxAccounts);
        mButtonAccountModify->setObjectName(QString::fromUtf8("mButtonAccountModify"));

        vboxLayout2->addWidget(mButtonAccountModify);

        mButtonAccountSwitchIdentity = new QPushButton(mGroupBoxAccounts);
        mButtonAccountSwitchIdentity->setObjectName(QString::fromUtf8("mButtonAccountSwitchIdentity"));

        vboxLayout2->addWidget(mButtonAccountSwitchIdentity);

        mButtonAccountSetColor = new QPushButton(mGroupBoxAccounts);
        mButtonAccountSetColor->setObjectName(QString::fromUtf8("mButtonAccountSetColor"));

        vboxLayout2->addWidget(mButtonAccountSetColor);


        vboxLayout1->addWidget(mGroupBoxAccounts);

        spacerItem = new QSpacerItem(20, 0, QSizePolicy::Minimum, QSizePolicy::Expanding);

        vboxLayout1->addItem(spacerItem);

        mGroupBoxIdentities = new QGroupBox(KopeteAccountConfigBase);
        mGroupBoxIdentities->setObjectName(QString::fromUtf8("mGroupBoxIdentities"));
        vboxLayout3 = new QVBoxLayout(mGroupBoxIdentities);
        vboxLayout3->setObjectName(QString::fromUtf8("vboxLayout3"));
        mButtonIdentityAdd = new QPushButton(mGroupBoxIdentities);
        mButtonIdentityAdd->setObjectName(QString::fromUtf8("mButtonIdentityAdd"));

        vboxLayout3->addWidget(mButtonIdentityAdd);

        mButtonIdentityCopy = new QPushButton(mGroupBoxIdentities);
        mButtonIdentityCopy->setObjectName(QString::fromUtf8("mButtonIdentityCopy"));

        vboxLayout3->addWidget(mButtonIdentityCopy);

        mButtonIdentityRemove = new QPushButton(mGroupBoxIdentities);
        mButtonIdentityRemove->setObjectName(QString::fromUtf8("mButtonIdentityRemove"));

        vboxLayout3->addWidget(mButtonIdentityRemove);

        mButtonIdentityModify = new QPushButton(mGroupBoxIdentities);
        mButtonIdentityModify->setObjectName(QString::fromUtf8("mButtonIdentityModify"));

        vboxLayout3->addWidget(mButtonIdentityModify);

        mButtonIdentitySetDefault = new QPushButton(mGroupBoxIdentities);
        mButtonIdentitySetDefault->setObjectName(QString::fromUtf8("mButtonIdentitySetDefault"));

        vboxLayout3->addWidget(mButtonIdentitySetDefault);


        vboxLayout1->addWidget(mGroupBoxIdentities);


        hboxLayout->addLayout(vboxLayout1);


        retranslateUi(KopeteAccountConfigBase);

        QMetaObject::connectSlotsByName(KopeteAccountConfigBase);
    } // setupUi

    void retranslateUi(QWidget *KopeteAccountConfigBase)
    {
        KopeteAccountConfigBase->setWindowTitle(tr2i18n("Manage Accounts", 0));
        QTreeWidgetItem *___qtreewidgetitem = mAccountList->headerItem();
        ___qtreewidgetitem->setText(1, tr2i18n("Status", 0));
        ___qtreewidgetitem->setText(0, tr2i18n("Account ID", 0));
#ifndef UI_QT_NO_WHATSTHIS
        mAccountList->setWhatsThis(tr2i18n("This widget shows your identities and accounts in a hierarchical view. Each configured identity shows its associated accounts.", 0));
#endif // QT_NO_WHATSTHIS
        label->setText(tr2i18n("<span style=\" font-style:italic;\">Check to Include in Global Connection</span>", "second-person command"));
#ifndef UI_QT_NO_WHATSTHIS
        label_2->setWhatsThis(tr2i18n("Use drag & drop to increase or decrease the priority of accounts, accounts at the top of the list have highest priority.\n"
"\n"
"The priority is used to determine which contact to use when you click on a metacontact: Kopete will use the contact of the account with the greatest priority (if all contacts have the same online status).", 0));
#endif // QT_NO_WHATSTHIS
        label_2->setText(tr2i18n("<span style=\" font-style:italic;\">Accounts at the top of the list have highest priority</span>", 0));
        mGroupBoxAccounts->setTitle(tr2i18n("Accounts", 0));
#ifndef UI_QT_NO_TOOLTIP
        mButtonAccountAdd->setToolTip(tr2i18n("Add a new account", 0));
#endif // QT_NO_TOOLTIP
        mButtonAccountAdd->setText(tr2i18n("Add Account\n"
"KAction replaces\n"
"these labels!", 0));
#ifndef UI_QT_NO_TOOLTIP
        mButtonAccountRemove->setToolTip(tr2i18n("Remove selected account", 0));
#endif // QT_NO_TOOLTIP
#ifndef UI_QT_NO_WHATSTHIS
        mButtonAccountRemove->setWhatsThis(tr2i18n("Remove selected account", 0));
#endif // QT_NO_WHATSTHIS
        mButtonAccountRemove->setText(tr2i18n("&Remove Account", 0));
#ifndef UI_QT_NO_TOOLTIP
        mButtonAccountModify->setToolTip(tr2i18n("Modify selected account", 0));
#endif // QT_NO_TOOLTIP
#ifndef UI_QT_NO_WHATSTHIS
        mButtonAccountModify->setWhatsThis(tr2i18n("Lets you edit the account's properties.", 0));
#endif // QT_NO_WHATSTHIS
        mButtonAccountModify->setText(tr2i18n("&Modify Account...", 0));
#ifndef UI_QT_NO_TOOLTIP
        mButtonAccountSwitchIdentity->setToolTip(tr2i18n("Associate the selected account with another identity", 0));
#endif // QT_NO_TOOLTIP
#ifndef UI_QT_NO_WHATSTHIS
        mButtonAccountSwitchIdentity->setWhatsThis(tr2i18n("Each account is associated with exactly one identity. You can use this button to change the association and switch an account to a different identity", 0));
#endif // QT_NO_WHATSTHIS
        mButtonAccountSwitchIdentity->setText(tr2i18n("Switch &Identity...", 0));
#ifndef UI_QT_NO_TOOLTIP
        mButtonAccountSetColor->setToolTip(tr2i18n("Set a custom color for this account", 0));
#endif // QT_NO_TOOLTIP
#ifndef UI_QT_NO_WHATSTHIS
        mButtonAccountSetColor->setWhatsThis(tr2i18n("Account are often differentiated by the protocol icon. But if you have severals accounts of the same protocol, you may apply a color filter to that icon to differentiate accounts from the same protocols.", 0));
#endif // QT_NO_WHATSTHIS
        mButtonAccountSetColor->setText(tr2i18n("Set C&olor...", 0));
        mGroupBoxIdentities->setTitle(tr2i18n("Identities", 0));
#ifndef UI_QT_NO_TOOLTIP
        mButtonIdentityAdd->setToolTip(tr2i18n("Add a new identity", 0));
#endif // QT_NO_TOOLTIP
        mButtonIdentityAdd->setText(tr2i18n("A&dd Identity...", 0));
#ifndef UI_QT_NO_TOOLTIP
        mButtonIdentityCopy->setToolTip(tr2i18n("Create a new identity based on an existing one", 0));
#endif // QT_NO_TOOLTIP
        mButtonIdentityCopy->setText(tr2i18n("&Copy Identity...", 0));
#ifndef UI_QT_NO_TOOLTIP
        mButtonIdentityRemove->setToolTip(tr2i18n("Remove selected identity", 0));
#endif // QT_NO_TOOLTIP
#ifndef UI_QT_NO_WHATSTHIS
        mButtonIdentityRemove->setWhatsThis(tr2i18n("Remove selected identity", 0));
#endif // QT_NO_WHATSTHIS
        mButtonIdentityRemove->setText(tr2i18n("R&emove", 0));
#ifndef UI_QT_NO_TOOLTIP
        mButtonIdentityModify->setToolTip(tr2i18n("Modify selected identity", 0));
#endif // QT_NO_TOOLTIP
#ifndef UI_QT_NO_WHATSTHIS
        mButtonIdentityModify->setWhatsThis(tr2i18n("Let you edit the account's properties.", 0));
#endif // QT_NO_WHATSTHIS
        mButtonIdentityModify->setText(tr2i18n("M&odify Identity...", 0));
#ifndef UI_QT_NO_TOOLTIP
        mButtonIdentitySetDefault->setToolTip(tr2i18n("Set the selected identity as default identity", 0));
#endif // QT_NO_TOOLTIP
        mButtonIdentitySetDefault->setText(tr2i18n("&Set Default", 0));
    } // retranslateUi

};

namespace Ui {
    class KopeteAccountConfigBase: public Ui_KopeteAccountConfigBase {};
} // namespace Ui

QT_END_NAMESPACE

#endif // KOPETEACCOUNTCONFIGBASE_H

