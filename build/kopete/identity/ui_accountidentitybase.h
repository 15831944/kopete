#include <kdialog.h>
#include <klocale.h>

/********************************************************************************
** Form generated from reading UI file 'accountidentitybase.ui'
**
** Created by: Qt User Interface Compiler version 4.8.7
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_ACCOUNTIDENTITYBASE_H
#define UI_ACCOUNTIDENTITYBASE_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtGui/QApplication>
#include <QtGui/QButtonGroup>
#include <QtGui/QHBoxLayout>
#include <QtGui/QHeaderView>
#include <QtGui/QLabel>
#include <QtGui/QSpacerItem>
#include <QtGui/QTreeWidget>
#include <QtGui/QVBoxLayout>
#include <QtGui/QWidget>
#include "ktitlewidget.h"

QT_BEGIN_NAMESPACE

class Ui_AccountIdentityBase
{
public:
    QVBoxLayout *vboxLayout;
    KTitleWidget *title;
    QLabel *selectText;
    QHBoxLayout *hboxLayout;
    QSpacerItem *spacerItem;
    QLabel *accounts;
    QTreeWidget *identityList;

    void setupUi(QWidget *AccountIdentityBase)
    {
        if (AccountIdentityBase->objectName().isEmpty())
            AccountIdentityBase->setObjectName(QString::fromUtf8("AccountIdentityBase"));
        AccountIdentityBase->resize(400, 315);
        vboxLayout = new QVBoxLayout(AccountIdentityBase);
        vboxLayout->setObjectName(QString::fromUtf8("vboxLayout"));
        title = new KTitleWidget(AccountIdentityBase);
        title->setObjectName(QString::fromUtf8("title"));
        QSizePolicy sizePolicy(QSizePolicy::Preferred, QSizePolicy::Fixed);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(6);
        sizePolicy.setHeightForWidth(title->sizePolicy().hasHeightForWidth());
        title->setSizePolicy(sizePolicy);
        title->setMinimumSize(QSize(0, 42));

        vboxLayout->addWidget(title);

        selectText = new QLabel(AccountIdentityBase);
        selectText->setObjectName(QString::fromUtf8("selectText"));

        vboxLayout->addWidget(selectText);

        hboxLayout = new QHBoxLayout();
        hboxLayout->setObjectName(QString::fromUtf8("hboxLayout"));
        spacerItem = new QSpacerItem(20, 20, QSizePolicy::Fixed, QSizePolicy::Minimum);

        hboxLayout->addItem(spacerItem);

        accounts = new QLabel(AccountIdentityBase);
        accounts->setObjectName(QString::fromUtf8("accounts"));
        QSizePolicy sizePolicy1(QSizePolicy::Expanding, QSizePolicy::Preferred);
        sizePolicy1.setHorizontalStretch(0);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(accounts->sizePolicy().hasHeightForWidth());
        accounts->setSizePolicy(sizePolicy1);
        accounts->setTextFormat(Qt::RichText);
        accounts->setScaledContents(false);
        accounts->setWordWrap(true);

        hboxLayout->addWidget(accounts);


        vboxLayout->addLayout(hboxLayout);

        identityList = new QTreeWidget(AccountIdentityBase);
        identityList->setObjectName(QString::fromUtf8("identityList"));
        identityList->setAlternatingRowColors(true);
        identityList->setIconSize(QSize(32, 32));
        identityList->setRootIsDecorated(false);

        vboxLayout->addWidget(identityList);


        retranslateUi(AccountIdentityBase);

        QMetaObject::connectSlotsByName(AccountIdentityBase);
    } // setupUi

    void retranslateUi(QWidget *AccountIdentityBase)
    {
        AccountIdentityBase->setWindowTitle(tr2i18n("Account Identity", 0));
        title->setText(tr2i18n("Account Identity", 0));
        selectText->setText(tr2i18n("Select the identity to be used by the accounts:", 0));
        accounts->setText(tr2i18n("<img name=foobar> My Account", 0));
        QTreeWidgetItem *___qtreewidgetitem = identityList->headerItem();
        ___qtreewidgetitem->setText(0, tr2i18n("Identity", 0));
    } // retranslateUi

};

namespace Ui {
    class AccountIdentityBase: public Ui_AccountIdentityBase {};
} // namespace Ui

QT_END_NAMESPACE

#endif // ACCOUNTIDENTITYBASE_H

