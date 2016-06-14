#include <kdialog.h>
#include <klocale.h>

/********************************************************************************
** Form generated from reading UI file 'kopeteaddrbookexportui.ui'
**
** Created by: Qt User Interface Compiler version 4.8.7
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_KOPETEADDRBOOKEXPORTUI_H
#define UI_KOPETEADDRBOOKEXPORTUI_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtGui/QApplication>
#include <QtGui/QButtonGroup>
#include <QtGui/QComboBox>
#include <QtGui/QGridLayout>
#include <QtGui/QHeaderView>
#include <QtGui/QLabel>
#include <QtGui/QWidget>
#include "k3listbox.h"

QT_BEGIN_NAMESPACE

class Ui_AddressBookExportUI
{
public:
    QGridLayout *gridLayout;
    QLabel *mLblFirstName;
    QLabel *mLblHomePhone;
    K3ListBox *mWorkPhones;
    K3ListBox *mMobilePhones;
    K3ListBox *mHomePhones;
    QLabel *mLblWorkPhone;
    QLabel *mLblMobilePhone;
    QLabel *mLblUrl;
    QComboBox *mUrl;
    QComboBox *mFirstName;
    QComboBox *mLastName;
    QLabel *mLblLastName;
    K3ListBox *mEmails;
    QLabel *mLblEmail;

    void setupUi(QWidget *AddressBookExportUI)
    {
        if (AddressBookExportUI->objectName().isEmpty())
            AddressBookExportUI->setObjectName(QString::fromUtf8("AddressBookExportUI"));
        AddressBookExportUI->resize(598, 651);
        gridLayout = new QGridLayout(AddressBookExportUI);
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        gridLayout->setHorizontalSpacing(6);
        gridLayout->setVerticalSpacing(6);
        gridLayout->setContentsMargins(11, 11, 11, 11);
        mLblFirstName = new QLabel(AddressBookExportUI);
        mLblFirstName->setObjectName(QString::fromUtf8("mLblFirstName"));

        gridLayout->addWidget(mLblFirstName, 0, 0, 1, 1);

        mLblHomePhone = new QLabel(AddressBookExportUI);
        mLblHomePhone->setObjectName(QString::fromUtf8("mLblHomePhone"));

        gridLayout->addWidget(mLblHomePhone, 4, 0, 1, 1);

        mWorkPhones = new K3ListBox(AddressBookExportUI);
        mWorkPhones->setObjectName(QString::fromUtf8("mWorkPhones"));
        mWorkPhones->setSelectionMode(Q3ListBox::Extended);

        gridLayout->addWidget(mWorkPhones, 5, 1, 1, 1);

        mMobilePhones = new K3ListBox(AddressBookExportUI);
        mMobilePhones->setObjectName(QString::fromUtf8("mMobilePhones"));
        mMobilePhones->setSelectionMode(Q3ListBox::Extended);

        gridLayout->addWidget(mMobilePhones, 6, 1, 1, 1);

        mHomePhones = new K3ListBox(AddressBookExportUI);
        mHomePhones->setObjectName(QString::fromUtf8("mHomePhones"));
        mHomePhones->setSelectionMode(Q3ListBox::Extended);

        gridLayout->addWidget(mHomePhones, 4, 1, 1, 1);

        mLblWorkPhone = new QLabel(AddressBookExportUI);
        mLblWorkPhone->setObjectName(QString::fromUtf8("mLblWorkPhone"));

        gridLayout->addWidget(mLblWorkPhone, 5, 0, 1, 1);

        mLblMobilePhone = new QLabel(AddressBookExportUI);
        mLblMobilePhone->setObjectName(QString::fromUtf8("mLblMobilePhone"));

        gridLayout->addWidget(mLblMobilePhone, 6, 0, 1, 1);

        mLblUrl = new QLabel(AddressBookExportUI);
        mLblUrl->setObjectName(QString::fromUtf8("mLblUrl"));

        gridLayout->addWidget(mLblUrl, 3, 0, 1, 1);

        mUrl = new QComboBox(AddressBookExportUI);
        mUrl->setObjectName(QString::fromUtf8("mUrl"));

        gridLayout->addWidget(mUrl, 3, 1, 1, 1);

        mFirstName = new QComboBox(AddressBookExportUI);
        mFirstName->setObjectName(QString::fromUtf8("mFirstName"));

        gridLayout->addWidget(mFirstName, 0, 1, 1, 1);

        mLastName = new QComboBox(AddressBookExportUI);
        mLastName->setObjectName(QString::fromUtf8("mLastName"));

        gridLayout->addWidget(mLastName, 1, 1, 1, 1);

        mLblLastName = new QLabel(AddressBookExportUI);
        mLblLastName->setObjectName(QString::fromUtf8("mLblLastName"));

        gridLayout->addWidget(mLblLastName, 1, 0, 1, 1);

        mEmails = new K3ListBox(AddressBookExportUI);
        mEmails->setObjectName(QString::fromUtf8("mEmails"));
        mEmails->setSelectionMode(Q3ListBox::Extended);

        gridLayout->addWidget(mEmails, 2, 1, 1, 1);

        mLblEmail = new QLabel(AddressBookExportUI);
        mLblEmail->setObjectName(QString::fromUtf8("mLblEmail"));

        gridLayout->addWidget(mLblEmail, 2, 0, 1, 1);

#ifndef UI_QT_NO_SHORTCUT
        mLblEmail->setBuddy(mEmails);
#endif // QT_NO_SHORTCUT
        QWidget::setTabOrder(mFirstName, mLastName);
        QWidget::setTabOrder(mLastName, mEmails);
        QWidget::setTabOrder(mEmails, mUrl);
        QWidget::setTabOrder(mUrl, mHomePhones);
        QWidget::setTabOrder(mHomePhones, mWorkPhones);
        QWidget::setTabOrder(mWorkPhones, mMobilePhones);

        retranslateUi(AddressBookExportUI);

        QMetaObject::connectSlotsByName(AddressBookExportUI);
    } // setupUi

    void retranslateUi(QWidget *AddressBookExportUI)
    {
        AddressBookExportUI->setWindowTitle(tr2i18n("Merge with Address Book", 0));
        mLblFirstName->setText(tr2i18n("First name:", 0));
        mLblHomePhone->setText(tr2i18n("Home phone:", 0));
        mLblWorkPhone->setText(tr2i18n("Work phone:", 0));
        mLblMobilePhone->setText(tr2i18n("Mobile phone:", 0));
        mLblUrl->setText(tr2i18n("URL:", 0));
        mLblLastName->setText(tr2i18n("Last name:", 0));
        mLblEmail->setText(tr2i18n("Email:", 0));
    } // retranslateUi

};

namespace Ui {
    class AddressBookExportUI: public Ui_AddressBookExportUI {};
} // namespace Ui

QT_END_NAMESPACE

#endif // KOPETEADDRBOOKEXPORTUI_H

