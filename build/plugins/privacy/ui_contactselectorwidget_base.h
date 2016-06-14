#include <kdialog.h>
#include <klocale.h>

/********************************************************************************
** Form generated from reading UI file 'contactselectorwidget_base.ui'
**
** Created by: Qt User Interface Compiler version 4.8.7
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_CONTACTSELECTORWIDGET_BASE_H
#define UI_CONTACTSELECTORWIDGET_BASE_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtGui/QApplication>
#include <QtGui/QButtonGroup>
#include <QtGui/QComboBox>
#include <QtGui/QHBoxLayout>
#include <QtGui/QHeaderView>
#include <QtGui/QLineEdit>
#include <QtGui/QRadioButton>
#include <QtGui/QVBoxLayout>
#include <QtGui/QWidget>
#include "metacontactselectorwidget.h"

QT_BEGIN_NAMESPACE

class Ui_ContactSelectorWidget_Base
{
public:
    QVBoxLayout *vboxLayout;
    QRadioButton *radioAddExistingMetaContact;
    Kopete::UI::MetaContactSelectorWidget *metaContactSelector;
    QRadioButton *radioAnotherContact;
    QHBoxLayout *hboxLayout;
    QLineEdit *editContact;
    QComboBox *comboProtocol;

    void setupUi(QWidget *ContactSelectorWidget_Base)
    {
        if (ContactSelectorWidget_Base->objectName().isEmpty())
            ContactSelectorWidget_Base->setObjectName(QString::fromUtf8("ContactSelectorWidget_Base"));
        ContactSelectorWidget_Base->resize(449, 382);
        QSizePolicy sizePolicy(static_cast<QSizePolicy::Policy>(5), static_cast<QSizePolicy::Policy>(1));
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(ContactSelectorWidget_Base->sizePolicy().hasHeightForWidth());
        ContactSelectorWidget_Base->setSizePolicy(sizePolicy);
        vboxLayout = new QVBoxLayout(ContactSelectorWidget_Base);
#ifndef UI_Q_OS_MAC
        vboxLayout->setSpacing(6);
#endif
#ifndef UI_Q_OS_MAC
        vboxLayout->setContentsMargins(9, 9, 9, 9);
#endif
        vboxLayout->setObjectName(QString::fromUtf8("vboxLayout"));
        radioAddExistingMetaContact = new QRadioButton(ContactSelectorWidget_Base);
        radioAddExistingMetaContact->setObjectName(QString::fromUtf8("radioAddExistingMetaContact"));
        radioAddExistingMetaContact->setChecked(true);

        vboxLayout->addWidget(radioAddExistingMetaContact);

        metaContactSelector = new Kopete::UI::MetaContactSelectorWidget(ContactSelectorWidget_Base);
        metaContactSelector->setObjectName(QString::fromUtf8("metaContactSelector"));

        vboxLayout->addWidget(metaContactSelector);

        radioAnotherContact = new QRadioButton(ContactSelectorWidget_Base);
        radioAnotherContact->setObjectName(QString::fromUtf8("radioAnotherContact"));

        vboxLayout->addWidget(radioAnotherContact);

        hboxLayout = new QHBoxLayout();
#ifndef UI_Q_OS_MAC
        hboxLayout->setSpacing(6);
#endif
        hboxLayout->setContentsMargins(0, 0, 0, 0);
        hboxLayout->setObjectName(QString::fromUtf8("hboxLayout"));
        editContact = new QLineEdit(ContactSelectorWidget_Base);
        editContact->setObjectName(QString::fromUtf8("editContact"));
        editContact->setEnabled(false);

        hboxLayout->addWidget(editContact);

        comboProtocol = new QComboBox(ContactSelectorWidget_Base);
        comboProtocol->setObjectName(QString::fromUtf8("comboProtocol"));
        comboProtocol->setEnabled(false);

        hboxLayout->addWidget(comboProtocol);


        vboxLayout->addLayout(hboxLayout);


        retranslateUi(ContactSelectorWidget_Base);

        QMetaObject::connectSlotsByName(ContactSelectorWidget_Base);
    } // setupUi

    void retranslateUi(QWidget *ContactSelectorWidget_Base)
    {
        ContactSelectorWidget_Base->setWindowTitle(tr2i18n("Select Contact", 0));
        radioAddExistingMetaContact->setText(tr2i18n("Add an existing metacontact:", 0));
        radioAnotherContact->setText(tr2i18n("Specify another contact:", 0));
    } // retranslateUi

};

namespace Ui {
    class ContactSelectorWidget_Base: public Ui_ContactSelectorWidget_Base {};
} // namespace Ui

QT_END_NAMESPACE

#endif // CONTACTSELECTORWIDGET_BASE_H

