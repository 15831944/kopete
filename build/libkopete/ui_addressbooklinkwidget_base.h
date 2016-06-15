#include <kdialog.h>
#include <klocale.h>

/********************************************************************************
** Form generated from reading UI file 'addressbooklinkwidget_base.ui'
**
** Created by: Qt User Interface Compiler version 4.8.7
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_ADDRESSBOOKLINKWIDGET_BASE_H
#define UI_ADDRESSBOOKLINKWIDGET_BASE_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtGui/QApplication>
#include <QtGui/QButtonGroup>
#include <QtGui/QHBoxLayout>
#include <QtGui/QHeaderView>
#include <QtGui/QPushButton>
#include <QtGui/QVBoxLayout>
#include <QtGui/QWidget>
#include "klineedit.h"
#include "kpushbutton.h"

QT_BEGIN_NAMESPACE

class Ui_AddressBookLinkWidgetBase
{
public:
    QVBoxLayout *vboxLayout;
    QHBoxLayout *hboxLayout;
    KLineEdit *edtAddressee;
    KPushButton *btnClear;
    QPushButton *btnSelectAddressee;

    void setupUi(QWidget *AddressBookLinkWidgetBase)
    {
        if (AddressBookLinkWidgetBase->objectName().isEmpty())
            AddressBookLinkWidgetBase->setObjectName(QString::fromUtf8("AddressBookLinkWidgetBase"));
        AddressBookLinkWidgetBase->resize(350, 31);
        vboxLayout = new QVBoxLayout(AddressBookLinkWidgetBase);
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
        edtAddressee = new KLineEdit(AddressBookLinkWidgetBase);
        edtAddressee->setObjectName(QString::fromUtf8("edtAddressee"));
        edtAddressee->setReadOnly(true);

        hboxLayout->addWidget(edtAddressee);

        btnClear = new KPushButton(AddressBookLinkWidgetBase);
        btnClear->setObjectName(QString::fromUtf8("btnClear"));

        hboxLayout->addWidget(btnClear);

        btnSelectAddressee = new QPushButton(AddressBookLinkWidgetBase);
        btnSelectAddressee->setObjectName(QString::fromUtf8("btnSelectAddressee"));
        btnSelectAddressee->setEnabled(true);

        hboxLayout->addWidget(btnSelectAddressee);


        vboxLayout->addLayout(hboxLayout);


        retranslateUi(AddressBookLinkWidgetBase);

        QMetaObject::connectSlotsByName(AddressBookLinkWidgetBase);
    } // setupUi

    void retranslateUi(QWidget *AddressBookLinkWidgetBase)
    {
#ifndef UI_QT_NO_TOOLTIP
        edtAddressee->setToolTip(tr2i18n("The KDE Address Book entry associated with this Kopete Contact", 0));
#endif // QT_NO_TOOLTIP
        edtAddressee->setText(QString());
#ifndef UI_QT_NO_TOOLTIP
        btnClear->setToolTip(tr2i18n("Clear", 0));
#endif // QT_NO_TOOLTIP
        btnClear->setText(QString());
#ifndef UI_QT_NO_TOOLTIP
        btnSelectAddressee->setToolTip(tr2i18n("Select an address book entry", 0));
#endif // QT_NO_TOOLTIP
        btnSelectAddressee->setText(tr2i18n("C&hange...", 0));
        Q_UNUSED(AddressBookLinkWidgetBase);
    } // retranslateUi

};

namespace Ui {
    class AddressBookLinkWidgetBase: public Ui_AddressBookLinkWidgetBase {};
} // namespace Ui

QT_END_NAMESPACE

#endif // ADDRESSBOOKLINKWIDGET_BASE_H

