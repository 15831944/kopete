#include <kdialog.h>
#include <klocale.h>

/********************************************************************************
** Form generated from reading UI file 'contactaddednotifywidget.ui'
**
** Created by: Qt User Interface Compiler version 4.8.7
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_CONTACTADDEDNOTIFYWIDGET_H
#define UI_CONTACTADDEDNOTIFYWIDGET_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtGui/QApplication>
#include <QtGui/QButtonGroup>
#include <QtGui/QCheckBox>
#include <QtGui/QGroupBox>
#include <QtGui/QHBoxLayout>
#include <QtGui/QHeaderView>
#include <QtGui/QLabel>
#include <QtGui/QSpacerItem>
#include <QtGui/QVBoxLayout>
#include <QtGui/QWidget>
#include "addressbooklinkwidget.h"
#include "kcombobox.h"
#include "klineedit.h"
#include "kpushbutton.h"

QT_BEGIN_NAMESPACE

class Ui_ContactAddedNotifyWidget
{
public:
    QVBoxLayout *vboxLayout;
    QLabel *m_label;
    QHBoxLayout *hboxLayout;
    QSpacerItem *spacerItem;
    KPushButton *m_infoButton;
    QCheckBox *m_authorizeCb;
    QCheckBox *m_addCb;
    QGroupBox *m_contactInfoBox;
    QVBoxLayout *vboxLayout1;
    QHBoxLayout *hboxLayout1;
    QLabel *textLabel7;
    KLineEdit *m_displayNameEdit;
    QHBoxLayout *hboxLayout2;
    QLabel *textLabel5;
    KComboBox *m_groupList;
    QLabel *textLabel6;
    QHBoxLayout *hboxLayout3;
    QSpacerItem *spacerItem1;
    Kopete::UI::AddressBookLinkWidget *widAddresseeLink;
    QSpacerItem *spacerItem2;

    void setupUi(QWidget *ContactAddedNotifyWidget)
    {
        if (ContactAddedNotifyWidget->objectName().isEmpty())
            ContactAddedNotifyWidget->setObjectName(QString::fromUtf8("ContactAddedNotifyWidget"));
        ContactAddedNotifyWidget->resize(466, 342);
        vboxLayout = new QVBoxLayout(ContactAddedNotifyWidget);
#ifndef UI_Q_OS_MAC
        vboxLayout->setSpacing(6);
#endif
        vboxLayout->setContentsMargins(11, 11, 11, 11);
        vboxLayout->setObjectName(QString::fromUtf8("vboxLayout"));
        m_label = new QLabel(ContactAddedNotifyWidget);
        m_label->setObjectName(QString::fromUtf8("m_label"));
        m_label->setAlignment(Qt::AlignVCenter);

        vboxLayout->addWidget(m_label);

        hboxLayout = new QHBoxLayout();
#ifndef UI_Q_OS_MAC
        hboxLayout->setSpacing(6);
#endif
        hboxLayout->setContentsMargins(0, 0, 0, 0);
        hboxLayout->setObjectName(QString::fromUtf8("hboxLayout"));
        spacerItem = new QSpacerItem(151, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        hboxLayout->addItem(spacerItem);

        m_infoButton = new KPushButton(ContactAddedNotifyWidget);
        m_infoButton->setObjectName(QString::fromUtf8("m_infoButton"));

        hboxLayout->addWidget(m_infoButton);


        vboxLayout->addLayout(hboxLayout);

        m_authorizeCb = new QCheckBox(ContactAddedNotifyWidget);
        m_authorizeCb->setObjectName(QString::fromUtf8("m_authorizeCb"));
        m_authorizeCb->setChecked(true);

        vboxLayout->addWidget(m_authorizeCb);

        m_addCb = new QCheckBox(ContactAddedNotifyWidget);
        m_addCb->setObjectName(QString::fromUtf8("m_addCb"));
        m_addCb->setChecked(true);

        vboxLayout->addWidget(m_addCb);

        m_contactInfoBox = new QGroupBox(ContactAddedNotifyWidget);
        m_contactInfoBox->setObjectName(QString::fromUtf8("m_contactInfoBox"));
        vboxLayout1 = new QVBoxLayout(m_contactInfoBox);
#ifndef UI_Q_OS_MAC
        vboxLayout1->setSpacing(6);
#endif
        vboxLayout1->setContentsMargins(11, 11, 11, 11);
        vboxLayout1->setObjectName(QString::fromUtf8("vboxLayout1"));
        hboxLayout1 = new QHBoxLayout();
#ifndef UI_Q_OS_MAC
        hboxLayout1->setSpacing(6);
#endif
#ifndef UI_Q_OS_MAC
        hboxLayout1->setContentsMargins(0, 0, 0, 0);
#endif
        hboxLayout1->setObjectName(QString::fromUtf8("hboxLayout1"));
        textLabel7 = new QLabel(m_contactInfoBox);
        textLabel7->setObjectName(QString::fromUtf8("textLabel7"));

        hboxLayout1->addWidget(textLabel7);

        m_displayNameEdit = new KLineEdit(m_contactInfoBox);
        m_displayNameEdit->setObjectName(QString::fromUtf8("m_displayNameEdit"));

        hboxLayout1->addWidget(m_displayNameEdit);


        vboxLayout1->addLayout(hboxLayout1);

        hboxLayout2 = new QHBoxLayout();
#ifndef UI_Q_OS_MAC
        hboxLayout2->setSpacing(6);
#endif
        hboxLayout2->setContentsMargins(0, 0, 0, 0);
        hboxLayout2->setObjectName(QString::fromUtf8("hboxLayout2"));
        textLabel5 = new QLabel(m_contactInfoBox);
        textLabel5->setObjectName(QString::fromUtf8("textLabel5"));

        hboxLayout2->addWidget(textLabel5);

        m_groupList = new KComboBox(m_contactInfoBox);
        m_groupList->setObjectName(QString::fromUtf8("m_groupList"));
        QSizePolicy sizePolicy(static_cast<QSizePolicy::Policy>(3), static_cast<QSizePolicy::Policy>(0));
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(m_groupList->sizePolicy().hasHeightForWidth());
        m_groupList->setSizePolicy(sizePolicy);
        m_groupList->setEditable(true);

        hboxLayout2->addWidget(m_groupList);


        vboxLayout1->addLayout(hboxLayout2);

        textLabel6 = new QLabel(m_contactInfoBox);
        textLabel6->setObjectName(QString::fromUtf8("textLabel6"));

        vboxLayout1->addWidget(textLabel6);

        hboxLayout3 = new QHBoxLayout();
#ifndef UI_Q_OS_MAC
        hboxLayout3->setSpacing(6);
#endif
        hboxLayout3->setContentsMargins(0, 0, 0, 0);
        hboxLayout3->setObjectName(QString::fromUtf8("hboxLayout3"));
        spacerItem1 = new QSpacerItem(51, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        hboxLayout3->addItem(spacerItem1);

        widAddresseeLink = new Kopete::UI::AddressBookLinkWidget(m_contactInfoBox);
        widAddresseeLink->setObjectName(QString::fromUtf8("widAddresseeLink"));

        hboxLayout3->addWidget(widAddresseeLink);


        vboxLayout1->addLayout(hboxLayout3);


        vboxLayout->addWidget(m_contactInfoBox);

        spacerItem2 = new QSpacerItem(21, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        vboxLayout->addItem(spacerItem2);


        retranslateUi(ContactAddedNotifyWidget);

        QMetaObject::connectSlotsByName(ContactAddedNotifyWidget);
    } // setupUi

    void retranslateUi(QWidget *ContactAddedNotifyWidget)
    {
        m_label->setText(tr2i18n("The contact XXX has added you to his/her contactlist", 0));
        m_infoButton->setText(tr2i18n("Read More Info About This Contact", 0));
        m_authorizeCb->setText(tr2i18n("Authorize this contact to see my status", 0));
        m_addCb->setText(tr2i18n("Add this contact in my contactlist", 0));
        m_contactInfoBox->setTitle(QString());
#ifndef UI_QT_NO_TOOLTIP
        textLabel7->setToolTip(tr2i18n("The display name of the contact.  Leave it empty to use the contact's nickname.", 0));
#endif // QT_NO_TOOLTIP
#ifndef UI_QT_NO_WHATSTHIS
        textLabel7->setWhatsThis(tr2i18n("Enter the contact's display name. This is how the contact will appear in the contact list.\n"
"Leave it empty if you want to see the contact's nickname as their display name.", 0));
#endif // QT_NO_WHATSTHIS
        textLabel7->setText(tr2i18n("Display name:", 0));
#ifndef UI_QT_NO_TOOLTIP
        m_displayNameEdit->setToolTip(tr2i18n("The display name of the contact.  Leave it empty to use the contact's nickname.", 0));
#endif // QT_NO_TOOLTIP
#ifndef UI_QT_NO_WHATSTHIS
        m_displayNameEdit->setWhatsThis(tr2i18n("Enter the contact's display name. This is how the contact will appear in the contact list.\n"
"Leave it empty if you want to see the contact's nickname as their display name.", 0));
#endif // QT_NO_WHATSTHIS
#ifndef UI_QT_NO_WHATSTHIS
        textLabel5->setWhatsThis(tr2i18n("Enter the group where the contact should be added. Leave it empty to add it in the top level group.", 0));
#endif // QT_NO_WHATSTHIS
        textLabel5->setText(tr2i18n("In the group:", 0));
#ifndef UI_QT_NO_WHATSTHIS
        m_groupList->setWhatsThis(tr2i18n("Enter the group where the contact should be added. Leave it empty to add it to the top level group.", 0));
#endif // QT_NO_WHATSTHIS
        textLabel6->setText(tr2i18n("Address book link:", 0));
        Q_UNUSED(ContactAddedNotifyWidget);
    } // retranslateUi

};

namespace Ui {
    class ContactAddedNotifyWidget: public Ui_ContactAddedNotifyWidget {};
} // namespace Ui

QT_END_NAMESPACE

#endif // CONTACTADDEDNOTIFYWIDGET_H

