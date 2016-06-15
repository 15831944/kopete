#include <kdialog.h>
#include <klocale.h>

/********************************************************************************
** Form generated from reading UI file 'addressbookselectorwidget_base.ui'
**
** Created by: Qt User Interface Compiler version 4.8.7
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_ADDRESSBOOKSELECTORWIDGET_BASE_H
#define UI_ADDRESSBOOKSELECTORWIDGET_BASE_H

#include <Qt3Support/Q3Header>
#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtGui/QApplication>
#include <QtGui/QButtonGroup>
#include <QtGui/QGridLayout>
#include <QtGui/QHBoxLayout>
#include <QtGui/QHeaderView>
#include <QtGui/QLabel>
#include <QtGui/QPushButton>
#include <QtGui/QSpacerItem>
#include <QtGui/QWidget>
#include <k3listviewsearchline.h>
#include "k3listview.h"
#include "k3listviewsearchline.h"

QT_BEGIN_NAMESPACE

class Ui_AddressBookSelectorWidget_Base
{
public:
    QGridLayout *gridLayout;
    QSpacerItem *spacerItem;
    QPushButton *addAddresseeButton;
    QLabel *lblHeader;
    K3ListView *addresseeListView;
    QHBoxLayout *hboxLayout;
    QLabel *lblSearch;
    K3ListViewSearchLine *kListViewSearchLine;

    void setupUi(QWidget *AddressBookSelectorWidget_Base)
    {
        if (AddressBookSelectorWidget_Base->objectName().isEmpty())
            AddressBookSelectorWidget_Base->setObjectName(QString::fromUtf8("AddressBookSelectorWidget_Base"));
        AddressBookSelectorWidget_Base->resize(596, 572);
        QSizePolicy sizePolicy(QSizePolicy::Preferred, QSizePolicy::Minimum);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(AddressBookSelectorWidget_Base->sizePolicy().hasHeightForWidth());
        AddressBookSelectorWidget_Base->setSizePolicy(sizePolicy);
        gridLayout = new QGridLayout(AddressBookSelectorWidget_Base);
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        gridLayout->setHorizontalSpacing(6);
        gridLayout->setVerticalSpacing(6);
        gridLayout->setContentsMargins(0, 0, 0, 0);
        spacerItem = new QSpacerItem(405, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        gridLayout->addItem(spacerItem, 3, 1, 1, 1);

        addAddresseeButton = new QPushButton(AddressBookSelectorWidget_Base);
        addAddresseeButton->setObjectName(QString::fromUtf8("addAddresseeButton"));

        gridLayout->addWidget(addAddresseeButton, 3, 0, 1, 1);

        lblHeader = new QLabel(AddressBookSelectorWidget_Base);
        lblHeader->setObjectName(QString::fromUtf8("lblHeader"));
        QSizePolicy sizePolicy1(QSizePolicy::Expanding, QSizePolicy::Maximum);
        sizePolicy1.setHorizontalStretch(0);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(lblHeader->sizePolicy().hasHeightForWidth());
        lblHeader->setSizePolicy(sizePolicy1);

        gridLayout->addWidget(lblHeader, 0, 0, 1, 2);

        addresseeListView = new K3ListView(AddressBookSelectorWidget_Base);
        addresseeListView->addColumn(tr2i18n("Photo", 0));
        addresseeListView->addColumn(tr2i18n("Name", 0));
        addresseeListView->addColumn(tr2i18n("Email", 0));
        addresseeListView->setObjectName(QString::fromUtf8("addresseeListView"));
        QSizePolicy sizePolicy2(QSizePolicy::Expanding, QSizePolicy::Expanding);
        sizePolicy2.setHorizontalStretch(0);
        sizePolicy2.setVerticalStretch(10);
        sizePolicy2.setHeightForWidth(addresseeListView->sizePolicy().hasHeightForWidth());
        addresseeListView->setSizePolicy(sizePolicy2);
        addresseeListView->setAllColumnsShowFocus(true);
        addresseeListView->setResizeMode(Q3ListView::LastColumn);

        gridLayout->addWidget(addresseeListView, 2, 0, 1, 2);

        hboxLayout = new QHBoxLayout();
        hboxLayout->setSpacing(6);
        hboxLayout->setObjectName(QString::fromUtf8("hboxLayout"));
        hboxLayout->setContentsMargins(0, 0, 0, 0);
        lblSearch = new QLabel(AddressBookSelectorWidget_Base);
        lblSearch->setObjectName(QString::fromUtf8("lblSearch"));
        QSizePolicy sizePolicy3(QSizePolicy::Minimum, QSizePolicy::Preferred);
        sizePolicy3.setHorizontalStretch(0);
        sizePolicy3.setVerticalStretch(0);
        sizePolicy3.setHeightForWidth(lblSearch->sizePolicy().hasHeightForWidth());
        lblSearch->setSizePolicy(sizePolicy3);

        hboxLayout->addWidget(lblSearch);

        kListViewSearchLine = new K3ListViewSearchLine(AddressBookSelectorWidget_Base);
        kListViewSearchLine->setObjectName(QString::fromUtf8("kListViewSearchLine"));

        hboxLayout->addWidget(kListViewSearchLine);


        gridLayout->addLayout(hboxLayout, 1, 0, 1, 2);

#ifndef UI_QT_NO_SHORTCUT
        lblSearch->setBuddy(kListViewSearchLine);
#endif // QT_NO_SHORTCUT
        QWidget::setTabOrder(addresseeListView, addAddresseeButton);

        retranslateUi(AddressBookSelectorWidget_Base);

        QMetaObject::connectSlotsByName(AddressBookSelectorWidget_Base);
    } // setupUi

    void retranslateUi(QWidget *AddressBookSelectorWidget_Base)
    {
        AddressBookSelectorWidget_Base->setWindowTitle(tr2i18n("Select Contact", 0));
#ifndef UI_QT_NO_TOOLTIP
        addAddresseeButton->setToolTip(tr2i18n("Create a new entry in your address book", 0));
#endif // QT_NO_TOOLTIP
        addAddresseeButton->setText(tr2i18n("Create New Entr&y...", 0));
        addresseeListView->header()->setLabel(0, tr2i18n("Photo", 0));
        addresseeListView->header()->setLabel(1, tr2i18n("Name", 0));
        addresseeListView->header()->setLabel(2, tr2i18n("Email", 0));
#ifndef UI_QT_NO_TOOLTIP
        addresseeListView->setToolTip(tr2i18n("Select the contact you want to communicate with via Instant Messaging", 0));
#endif // QT_NO_TOOLTIP
        lblSearch->setText(tr2i18n("S&earch:", 0));
    } // retranslateUi

};

namespace Ui {
    class AddressBookSelectorWidget_Base: public Ui_AddressBookSelectorWidget_Base {};
} // namespace Ui

QT_END_NAMESPACE

#endif // ADDRESSBOOKSELECTORWIDGET_BASE_H

