#include <kdialog.h>
#include <klocale.h>

/********************************************************************************
** Form generated from reading UI file 'kopetemetalvipropswidget.ui'
**
** Created by: Qt User Interface Compiler version 4.8.7
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_KOPETEMETALVIPROPSWIDGET_H
#define UI_KOPETEMETALVIPROPSWIDGET_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtGui/QApplication>
#include <QtGui/QButtonGroup>
#include <QtGui/QCheckBox>
#include <QtGui/QComboBox>
#include <QtGui/QGridLayout>
#include <QtGui/QGroupBox>
#include <QtGui/QHBoxLayout>
#include <QtGui/QHeaderView>
#include <QtGui/QLabel>
#include <QtGui/QLineEdit>
#include <QtGui/QPushButton>
#include <QtGui/QRadioButton>
#include <QtGui/QSpacerItem>
#include <QtGui/QTabWidget>
#include <QtGui/QVBoxLayout>
#include <QtGui/QWidget>
#include "addressbooklinkwidget.h"
#include "kpushbutton.h"

QT_BEGIN_NAMESPACE

class Ui_KopeteMetaLVIPropsWidget
{
public:
    QVBoxLayout *vboxLayout;
    QTabWidget *tabWidget;
    QWidget *tab;
    QVBoxLayout *vboxLayout1;
    QGroupBox *grpAddressbook;
    QVBoxLayout *vboxLayout2;
    Kopete::UI::AddressBookLinkWidget *widAddresseeLink;
    QHBoxLayout *hboxLayout;
    QPushButton *btnExportKABC;
    QSpacerItem *spacerItem;
    QPushButton *btnImportKABC;
    QGroupBox *buttonGroup1;
    QGridLayout *gridLayout;
    QRadioButton *radioNameKABC;
    QRadioButton *radioNameContact;
    QSpacerItem *spacerItem1;
    QComboBox *cmbAccountName;
    QRadioButton *radioNameCustom;
    QSpacerItem *spacerItem2;
    QLineEdit *edtDisplayName;
    QGroupBox *buttonGroup2;
    QGridLayout *gridLayout1;
    QRadioButton *radioPhotoKABC;
    QLabel *photoLabel;
    QHBoxLayout *hboxLayout1;
    QRadioButton *radioPhotoContact;
    QSpacerItem *spacerItem3;
    QComboBox *cmbAccountPhoto;
    QHBoxLayout *hboxLayout2;
    QRadioButton *radioPhotoCustom;
    QSpacerItem *spacerItem4;
    QPushButton *btnChoosePhoto;
    KPushButton *btnClearPhoto;
    QCheckBox *chkSyncPhoto;
    QSpacerItem *spacerItem5;
    QWidget *TabPage;
    QVBoxLayout *vboxLayout3;
    QGroupBox *grpIcons;
    QGridLayout *gridLayout2;
    QCheckBox *chkUseCustomIcons;
    QLabel *lblOnline;
    QPushButton *icnbOnline;
    QLabel *lblOffline;
    QPushButton *icnbOffline;
    QSpacerItem *spacerItem6;
    QLabel *lblAway;
    QPushButton *icnbAway;
    QLabel *lblUnknown;
    QPushButton *icnbUnknown;
    QSpacerItem *spacerItem7;

    void setupUi(QWidget *KopeteMetaLVIPropsWidget)
    {
        if (KopeteMetaLVIPropsWidget->objectName().isEmpty())
            KopeteMetaLVIPropsWidget->setObjectName(QString::fromUtf8("KopeteMetaLVIPropsWidget"));
        KopeteMetaLVIPropsWidget->resize(536, 441);
        vboxLayout = new QVBoxLayout(KopeteMetaLVIPropsWidget);
        vboxLayout->setObjectName(QString::fromUtf8("vboxLayout"));
        vboxLayout->setContentsMargins(0, 0, 0, 0);
        tabWidget = new QTabWidget(KopeteMetaLVIPropsWidget);
        tabWidget->setObjectName(QString::fromUtf8("tabWidget"));
        tab = new QWidget();
        tab->setObjectName(QString::fromUtf8("tab"));
        vboxLayout1 = new QVBoxLayout(tab);
        vboxLayout1->setObjectName(QString::fromUtf8("vboxLayout1"));
        grpAddressbook = new QGroupBox(tab);
        grpAddressbook->setObjectName(QString::fromUtf8("grpAddressbook"));
        QSizePolicy sizePolicy(QSizePolicy::Minimum, QSizePolicy::Minimum);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(grpAddressbook->sizePolicy().hasHeightForWidth());
        grpAddressbook->setSizePolicy(sizePolicy);
        vboxLayout2 = new QVBoxLayout(grpAddressbook);
        vboxLayout2->setSpacing(6);
        vboxLayout2->setObjectName(QString::fromUtf8("vboxLayout2"));
        vboxLayout2->setContentsMargins(11, 11, 11, 11);
        widAddresseeLink = new Kopete::UI::AddressBookLinkWidget(grpAddressbook);
        widAddresseeLink->setObjectName(QString::fromUtf8("widAddresseeLink"));

        vboxLayout2->addWidget(widAddresseeLink);

        hboxLayout = new QHBoxLayout();
        hboxLayout->setSpacing(6);
        hboxLayout->setObjectName(QString::fromUtf8("hboxLayout"));
        hboxLayout->setContentsMargins(0, 0, 0, 0);
        btnExportKABC = new QPushButton(grpAddressbook);
        btnExportKABC->setObjectName(QString::fromUtf8("btnExportKABC"));
        btnExportKABC->setEnabled(false);

        hboxLayout->addWidget(btnExportKABC);

        spacerItem = new QSpacerItem(107, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        hboxLayout->addItem(spacerItem);

        btnImportKABC = new QPushButton(grpAddressbook);
        btnImportKABC->setObjectName(QString::fromUtf8("btnImportKABC"));
        btnImportKABC->setEnabled(false);

        hboxLayout->addWidget(btnImportKABC);


        vboxLayout2->addLayout(hboxLayout);


        vboxLayout1->addWidget(grpAddressbook);

        buttonGroup1 = new QGroupBox(tab);
        buttonGroup1->setObjectName(QString::fromUtf8("buttonGroup1"));
        gridLayout = new QGridLayout(buttonGroup1);
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        radioNameKABC = new QRadioButton(buttonGroup1);
        radioNameKABC->setObjectName(QString::fromUtf8("radioNameKABC"));

        gridLayout->addWidget(radioNameKABC, 0, 0, 1, 4);

        radioNameContact = new QRadioButton(buttonGroup1);
        radioNameContact->setObjectName(QString::fromUtf8("radioNameContact"));

        gridLayout->addWidget(radioNameContact, 1, 0, 1, 2);

        spacerItem1 = new QSpacerItem(16, 20, QSizePolicy::Fixed, QSizePolicy::Minimum);

        gridLayout->addItem(spacerItem1, 1, 2, 1, 1);

        cmbAccountName = new QComboBox(buttonGroup1);
        cmbAccountName->setObjectName(QString::fromUtf8("cmbAccountName"));
        QSizePolicy sizePolicy1(QSizePolicy::Expanding, QSizePolicy::Fixed);
        sizePolicy1.setHorizontalStretch(0);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(cmbAccountName->sizePolicy().hasHeightForWidth());
        cmbAccountName->setSizePolicy(sizePolicy1);

        gridLayout->addWidget(cmbAccountName, 1, 3, 1, 1);

        radioNameCustom = new QRadioButton(buttonGroup1);
        radioNameCustom->setObjectName(QString::fromUtf8("radioNameCustom"));

        gridLayout->addWidget(radioNameCustom, 2, 0, 1, 1);

        spacerItem2 = new QSpacerItem(51, 20, QSizePolicy::Fixed, QSizePolicy::Minimum);

        gridLayout->addItem(spacerItem2, 2, 1, 1, 2);

        edtDisplayName = new QLineEdit(buttonGroup1);
        edtDisplayName->setObjectName(QString::fromUtf8("edtDisplayName"));

        gridLayout->addWidget(edtDisplayName, 2, 3, 1, 1);


        vboxLayout1->addWidget(buttonGroup1);

        buttonGroup2 = new QGroupBox(tab);
        buttonGroup2->setObjectName(QString::fromUtf8("buttonGroup2"));
        gridLayout1 = new QGridLayout(buttonGroup2);
        gridLayout1->setObjectName(QString::fromUtf8("gridLayout1"));
        radioPhotoKABC = new QRadioButton(buttonGroup2);
        radioPhotoKABC->setObjectName(QString::fromUtf8("radioPhotoKABC"));

        gridLayout1->addWidget(radioPhotoKABC, 0, 0, 1, 1);

        photoLabel = new QLabel(buttonGroup2);
        photoLabel->setObjectName(QString::fromUtf8("photoLabel"));
        photoLabel->setMinimumSize(QSize(96, 96));
        photoLabel->setMaximumSize(QSize(96, 96));
        photoLabel->setBaseSize(QSize(96, 96));
        photoLabel->setFrameShape(QFrame::Box);
        photoLabel->setLineWidth(1);
        photoLabel->setScaledContents(false);
        photoLabel->setAlignment(Qt::AlignCenter);

        gridLayout1->addWidget(photoLabel, 0, 1, 3, 1);

        hboxLayout1 = new QHBoxLayout();
        hboxLayout1->setObjectName(QString::fromUtf8("hboxLayout1"));
        radioPhotoContact = new QRadioButton(buttonGroup2);
        radioPhotoContact->setObjectName(QString::fromUtf8("radioPhotoContact"));

        hboxLayout1->addWidget(radioPhotoContact);

        spacerItem3 = new QSpacerItem(21, 20, QSizePolicy::Fixed, QSizePolicy::Minimum);

        hboxLayout1->addItem(spacerItem3);

        cmbAccountPhoto = new QComboBox(buttonGroup2);
        cmbAccountPhoto->setObjectName(QString::fromUtf8("cmbAccountPhoto"));
        sizePolicy1.setHeightForWidth(cmbAccountPhoto->sizePolicy().hasHeightForWidth());
        cmbAccountPhoto->setSizePolicy(sizePolicy1);

        hboxLayout1->addWidget(cmbAccountPhoto);


        gridLayout1->addLayout(hboxLayout1, 1, 0, 1, 1);

        hboxLayout2 = new QHBoxLayout();
        hboxLayout2->setObjectName(QString::fromUtf8("hboxLayout2"));
        radioPhotoCustom = new QRadioButton(buttonGroup2);
        radioPhotoCustom->setObjectName(QString::fromUtf8("radioPhotoCustom"));

        hboxLayout2->addWidget(radioPhotoCustom);

        spacerItem4 = new QSpacerItem(181, 20, QSizePolicy::Fixed, QSizePolicy::Minimum);

        hboxLayout2->addItem(spacerItem4);

        btnChoosePhoto = new QPushButton(buttonGroup2);
        btnChoosePhoto->setObjectName(QString::fromUtf8("btnChoosePhoto"));

        hboxLayout2->addWidget(btnChoosePhoto);

        btnClearPhoto = new KPushButton(buttonGroup2);
        btnClearPhoto->setObjectName(QString::fromUtf8("btnClearPhoto"));
        btnClearPhoto->setMaximumSize(QSize(32, 32));

        hboxLayout2->addWidget(btnClearPhoto);


        gridLayout1->addLayout(hboxLayout2, 2, 0, 1, 1);


        vboxLayout1->addWidget(buttonGroup2);

        chkSyncPhoto = new QCheckBox(tab);
        chkSyncPhoto->setObjectName(QString::fromUtf8("chkSyncPhoto"));

        vboxLayout1->addWidget(chkSyncPhoto);

        spacerItem5 = new QSpacerItem(20, 0, QSizePolicy::Minimum, QSizePolicy::Expanding);

        vboxLayout1->addItem(spacerItem5);

        tabWidget->addTab(tab, QString());
        TabPage = new QWidget();
        TabPage->setObjectName(QString::fromUtf8("TabPage"));
        vboxLayout3 = new QVBoxLayout(TabPage);
        vboxLayout3->setObjectName(QString::fromUtf8("vboxLayout3"));
        grpIcons = new QGroupBox(TabPage);
        grpIcons->setObjectName(QString::fromUtf8("grpIcons"));
        gridLayout2 = new QGridLayout(grpIcons);
        gridLayout2->setObjectName(QString::fromUtf8("gridLayout2"));
        chkUseCustomIcons = new QCheckBox(grpIcons);
        chkUseCustomIcons->setObjectName(QString::fromUtf8("chkUseCustomIcons"));

        gridLayout2->addWidget(chkUseCustomIcons, 0, 0, 1, 5);

        lblOnline = new QLabel(grpIcons);
        lblOnline->setObjectName(QString::fromUtf8("lblOnline"));

        gridLayout2->addWidget(lblOnline, 1, 0, 1, 1);

        icnbOnline = new QPushButton(grpIcons);
        icnbOnline->setObjectName(QString::fromUtf8("icnbOnline"));

        gridLayout2->addWidget(icnbOnline, 1, 1, 1, 1);

        lblOffline = new QLabel(grpIcons);
        lblOffline->setObjectName(QString::fromUtf8("lblOffline"));

        gridLayout2->addWidget(lblOffline, 1, 2, 1, 1);

        icnbOffline = new QPushButton(grpIcons);
        icnbOffline->setObjectName(QString::fromUtf8("icnbOffline"));

        gridLayout2->addWidget(icnbOffline, 1, 3, 1, 1);

        spacerItem6 = new QSpacerItem(16, 16, QSizePolicy::Expanding, QSizePolicy::Minimum);

        gridLayout2->addItem(spacerItem6, 1, 4, 1, 1);

        lblAway = new QLabel(grpIcons);
        lblAway->setObjectName(QString::fromUtf8("lblAway"));

        gridLayout2->addWidget(lblAway, 2, 0, 1, 1);

        icnbAway = new QPushButton(grpIcons);
        icnbAway->setObjectName(QString::fromUtf8("icnbAway"));

        gridLayout2->addWidget(icnbAway, 2, 1, 1, 1);

        lblUnknown = new QLabel(grpIcons);
        lblUnknown->setObjectName(QString::fromUtf8("lblUnknown"));

        gridLayout2->addWidget(lblUnknown, 2, 2, 1, 1);

        icnbUnknown = new QPushButton(grpIcons);
        icnbUnknown->setObjectName(QString::fromUtf8("icnbUnknown"));

        gridLayout2->addWidget(icnbUnknown, 2, 3, 1, 1);


        vboxLayout3->addWidget(grpIcons);

        spacerItem7 = new QSpacerItem(91, 0, QSizePolicy::Minimum, QSizePolicy::Expanding);

        vboxLayout3->addItem(spacerItem7);

        tabWidget->addTab(TabPage, QString());

        vboxLayout->addWidget(tabWidget);

#ifndef UI_QT_NO_SHORTCUT
        lblOnline->setBuddy(icnbOnline);
        lblOffline->setBuddy(icnbOffline);
        lblAway->setBuddy(icnbAway);
        lblUnknown->setBuddy(icnbUnknown);
#endif // QT_NO_SHORTCUT
        QWidget::setTabOrder(tabWidget, btnExportKABC);
        QWidget::setTabOrder(btnExportKABC, btnImportKABC);
        QWidget::setTabOrder(btnImportKABC, radioNameKABC);
        QWidget::setTabOrder(radioNameKABC, radioNameContact);
        QWidget::setTabOrder(radioNameContact, cmbAccountName);
        QWidget::setTabOrder(cmbAccountName, radioNameCustom);
        QWidget::setTabOrder(radioNameCustom, edtDisplayName);
        QWidget::setTabOrder(edtDisplayName, radioPhotoKABC);
        QWidget::setTabOrder(radioPhotoKABC, radioPhotoContact);
        QWidget::setTabOrder(radioPhotoContact, cmbAccountPhoto);
        QWidget::setTabOrder(cmbAccountPhoto, radioPhotoCustom);
        QWidget::setTabOrder(radioPhotoCustom, btnChoosePhoto);
        QWidget::setTabOrder(btnChoosePhoto, btnClearPhoto);
        QWidget::setTabOrder(btnClearPhoto, chkSyncPhoto);
        QWidget::setTabOrder(chkSyncPhoto, chkUseCustomIcons);
        QWidget::setTabOrder(chkUseCustomIcons, icnbOnline);
        QWidget::setTabOrder(icnbOnline, icnbOffline);
        QWidget::setTabOrder(icnbOffline, icnbAway);
        QWidget::setTabOrder(icnbAway, icnbUnknown);

        retranslateUi(KopeteMetaLVIPropsWidget);

        tabWidget->setCurrentIndex(0);


        QMetaObject::connectSlotsByName(KopeteMetaLVIPropsWidget);
    } // setupUi

    void retranslateUi(QWidget *KopeteMetaLVIPropsWidget)
    {
#ifndef UI_QT_NO_TOOLTIP
        KopeteMetaLVIPropsWidget->setToolTip(QString());
#endif // QT_NO_TOOLTIP
        grpAddressbook->setTitle(tr2i18n("Address Book Link", 0));
#ifndef UI_QT_NO_TOOLTIP
        btnExportKABC->setToolTip(tr2i18n("Export contact's details to the KDE Address Book", 0));
#endif // QT_NO_TOOLTIP
        btnExportKABC->setText(tr2i18n("E&xport Details...", 0));
#ifndef UI_QT_NO_TOOLTIP
        btnImportKABC->setToolTip(tr2i18n("Import contacts from the KDE Address Book", 0));
#endif // QT_NO_TOOLTIP
        btnImportKABC->setText(tr2i18n("&Import Contacts", 0));
        buttonGroup1->setTitle(tr2i18n("Display Name Source", 0));
        radioNameKABC->setText(tr2i18n("Use address book &name (needs address book link)", 0));
        radioNameContact->setText(tr2i18n("From contact:", 0));
#ifndef UI_QT_NO_TOOLTIP
        cmbAccountName->setToolTip(tr2i18n("Contact with which to synchronize the displayname.", 0));
#endif // QT_NO_TOOLTIP
        radioNameCustom->setText(tr2i18n("Cus&tom:", 0));
        buttonGroup2->setTitle(tr2i18n("Photo Source", 0));
        radioPhotoKABC->setText(tr2i18n("U&se address book photo (needs address book link)", 0));
        photoLabel->setText(tr2i18n("Photo", 0));
        radioPhotoContact->setText(tr2i18n("From contact:", 0));
#ifndef UI_QT_NO_TOOLTIP
        cmbAccountPhoto->setToolTip(tr2i18n("Contact with which to synchronize the displayname.", 0));
#endif // QT_NO_TOOLTIP
        radioPhotoCustom->setText(tr2i18n("Custom:", 0));
        btnChoosePhoto->setText(tr2i18n("Choose...", 0));
        btnClearPhoto->setText(QString());
        chkSyncPhoto->setText(tr2i18n("S&ync photo to address book", 0));
        tabWidget->setTabText(tabWidget->indexOf(tab), tr2i18n("&General", 0));
        grpIcons->setTitle(tr2i18n("Icons", 0));
#ifndef UI_QT_NO_TOOLTIP
        chkUseCustomIcons->setToolTip(tr2i18n("Check to set custom icons for this contact", 0));
#endif // QT_NO_TOOLTIP
        chkUseCustomIcons->setText(tr2i18n("Use custom status &icons", 0));
        lblOnline->setText(tr2i18n("&Online:", 0));
        icnbOnline->setText(QString());
        lblOffline->setText(tr2i18n("O&ffline:", 0));
        icnbOffline->setText(QString());
        lblAway->setText(tr2i18n("Awa&y:", 0));
        icnbAway->setText(QString());
        lblUnknown->setText(tr2i18n("Un&known:", 0));
        icnbUnknown->setText(QString());
        tabWidget->setTabText(tabWidget->indexOf(TabPage), tr2i18n("Ad&vanced", 0));
    } // retranslateUi

};

namespace Ui {
    class KopeteMetaLVIPropsWidget: public Ui_KopeteMetaLVIPropsWidget {};
} // namespace Ui

QT_END_NAMESPACE

#endif // KOPETEMETALVIPROPSWIDGET_H

