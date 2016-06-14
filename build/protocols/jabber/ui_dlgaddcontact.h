#include <kdialog.h>
#include <klocale.h>

/********************************************************************************
** Form generated from reading UI file 'dlgaddcontact.ui'
**
** Created by: Qt User Interface Compiler version 4.8.7
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_DLGADDCONTACT_H
#define UI_DLGADDCONTACT_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtGui/QApplication>
#include <QtGui/QButtonGroup>
#include <QtGui/QHBoxLayout>
#include <QtGui/QHeaderView>
#include <QtGui/QLabel>
#include <QtGui/QSpacerItem>
#include <QtGui/QVBoxLayout>
#include <QtGui/QWidget>
#include "klineedit.h"

QT_BEGIN_NAMESPACE

class Ui_dlgAddContact
{
public:
    QVBoxLayout *vboxLayout;
    QHBoxLayout *hboxLayout;
    QLabel *lblID;
    KLineEdit *addID;
    QLabel *textLabel1;
    QSpacerItem *spacerItem;

    void setupUi(QWidget *dlgAddContact)
    {
        if (dlgAddContact->objectName().isEmpty())
            dlgAddContact->setObjectName(QString::fromUtf8("dlgAddContact"));
        dlgAddContact->resize(384, 94);
        vboxLayout = new QVBoxLayout(dlgAddContact);
#ifndef UI_Q_OS_MAC
        vboxLayout->setSpacing(6);
#endif
        vboxLayout->setContentsMargins(0, 0, 0, 0);
        vboxLayout->setObjectName(QString::fromUtf8("vboxLayout"));
        hboxLayout = new QHBoxLayout();
#ifndef UI_Q_OS_MAC
        hboxLayout->setSpacing(6);
#endif
#ifndef UI_Q_OS_MAC
        hboxLayout->setContentsMargins(0, 0, 0, 0);
#endif
        hboxLayout->setObjectName(QString::fromUtf8("hboxLayout"));
        lblID = new QLabel(dlgAddContact);
        lblID->setObjectName(QString::fromUtf8("lblID"));
        lblID->setAlignment(Qt::AlignTop);

        hboxLayout->addWidget(lblID);

        addID = new KLineEdit(dlgAddContact);
        addID->setObjectName(QString::fromUtf8("addID"));

        hboxLayout->addWidget(addID);


        vboxLayout->addLayout(hboxLayout);

        textLabel1 = new QLabel(dlgAddContact);
        textLabel1->setObjectName(QString::fromUtf8("textLabel1"));
        textLabel1->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);

        vboxLayout->addWidget(textLabel1);

        spacerItem = new QSpacerItem(20, 0, QSizePolicy::Minimum, QSizePolicy::Expanding);

        vboxLayout->addItem(spacerItem);

#ifndef UI_QT_NO_SHORTCUT
        lblID->setBuddy(addID);
#endif // QT_NO_SHORTCUT

        retranslateUi(dlgAddContact);

        QMetaObject::connectSlotsByName(dlgAddContact);
    } // setupUi

    void retranslateUi(QWidget *dlgAddContact)
    {
        dlgAddContact->setWindowTitle(tr2i18n("Add Contacts", 0));
#ifndef UI_QT_NO_TOOLTIP
        lblID->setToolTip(tr2i18n("The Jabber ID for the account you would like to add.", 0));
#endif // QT_NO_TOOLTIP
#ifndef UI_QT_NO_WHATSTHIS
        lblID->setWhatsThis(tr2i18n("The Jabber ID for the account you would like to add.  Note that this must include the username and the domain (like an E-mail address), as there are many Jabber servers.", 0));
#endif // QT_NO_WHATSTHIS
        lblID->setText(tr2i18n("&Jabber ID:", 0));
#ifndef UI_QT_NO_TOOLTIP
        addID->setToolTip(tr2i18n("The Jabber ID for the account you would like to add.", 0));
#endif // QT_NO_TOOLTIP
#ifndef UI_QT_NO_WHATSTHIS
        addID->setWhatsThis(tr2i18n("The Jabber ID for the account you would like to add.  Note that this must include the username and the domain (like an E-mail address), as there are many Jabber servers.", 0));
#endif // QT_NO_WHATSTHIS
        textLabel1->setText(tr2i18n("<i>(for example: joe@jabber.org)</i>", 0));
    } // retranslateUi

};

namespace Ui {
    class dlgAddContact: public Ui_dlgAddContact {};
} // namespace Ui

QT_END_NAMESPACE

#endif // DLGADDCONTACT_H

