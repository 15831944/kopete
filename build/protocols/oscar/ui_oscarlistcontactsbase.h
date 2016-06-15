#include <kdialog.h>
#include <klocale.h>

/********************************************************************************
** Form generated from reading UI file 'oscarlistcontactsbase.ui'
**
** Created by: Qt User Interface Compiler version 4.8.7
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_OSCARLISTCONTACTSBASE_H
#define UI_OSCARLISTCONTACTSBASE_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtGui/QApplication>
#include <QtGui/QButtonGroup>
#include <QtGui/QCheckBox>
#include <QtGui/QHeaderView>
#include <QtGui/QLabel>
#include <QtGui/QListWidget>
#include <QtGui/QVBoxLayout>
#include <QtGui/QWidget>

QT_BEGIN_NAMESPACE

class Ui_OscarListContactsBase
{
public:
    QVBoxLayout *vboxLayout;
    QLabel *textLabel1;
    QListWidget *notServerContacts;
    QCheckBox *doNotShowAgain;

    void setupUi(QWidget *OscarListContactsBase)
    {
        if (OscarListContactsBase->objectName().isEmpty())
            OscarListContactsBase->setObjectName(QString::fromUtf8("OscarListContactsBase"));
        OscarListContactsBase->resize(478, 361);
        vboxLayout = new QVBoxLayout(OscarListContactsBase);
#ifndef UI_Q_OS_MAC
        vboxLayout->setSpacing(6);
#endif
        vboxLayout->setContentsMargins(11, 11, 11, 11);
        vboxLayout->setObjectName(QString::fromUtf8("vboxLayout"));
        textLabel1 = new QLabel(OscarListContactsBase);
        textLabel1->setObjectName(QString::fromUtf8("textLabel1"));

        vboxLayout->addWidget(textLabel1);

        notServerContacts = new QListWidget(OscarListContactsBase);
        notServerContacts->setObjectName(QString::fromUtf8("notServerContacts"));

        vboxLayout->addWidget(notServerContacts);

        doNotShowAgain = new QCheckBox(OscarListContactsBase);
        doNotShowAgain->setObjectName(QString::fromUtf8("doNotShowAgain"));

        vboxLayout->addWidget(doNotShowAgain);


        retranslateUi(OscarListContactsBase);

        QMetaObject::connectSlotsByName(OscarListContactsBase);
    } // setupUi

    void retranslateUi(QWidget *OscarListContactsBase)
    {
        textLabel1->setText(tr2i18n("The following contacts are not on your contact list. Would you like to add them?", 0));
        doNotShowAgain->setText(tr2i18n("Do &not ask again", 0));
        Q_UNUSED(OscarListContactsBase);
    } // retranslateUi

};

namespace Ui {
    class OscarListContactsBase: public Ui_OscarListContactsBase {};
} // namespace Ui

QT_END_NAMESPACE

#endif // OSCARLISTCONTACTSBASE_H

