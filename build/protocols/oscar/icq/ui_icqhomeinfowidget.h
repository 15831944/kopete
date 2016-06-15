#include <kdialog.h>
#include <klocale.h>

/********************************************************************************
** Form generated from reading UI file 'icqhomeinfowidget.ui'
**
** Created by: Qt User Interface Compiler version 4.8.7
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_ICQHOMEINFOWIDGET_H
#define UI_ICQHOMEINFOWIDGET_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtGui/QApplication>
#include <QtGui/QButtonGroup>
#include <QtGui/QGridLayout>
#include <QtGui/QGroupBox>
#include <QtGui/QHeaderView>
#include <QtGui/QLabel>
#include <QtGui/QLineEdit>
#include <QtGui/QSpacerItem>
#include <QtGui/QVBoxLayout>
#include <QtGui/QWidget>
#include "infocombobox.h"

QT_BEGIN_NAMESPACE

class Ui_ICQHomeInfoWidget
{
public:
    QVBoxLayout *vboxLayout;
    QGroupBox *groupBox_2;
    QGridLayout *gridLayout;
    QLabel *textLabel1;
    QLineEdit *addressEdit;
    QLabel *textLabel2;
    QLineEdit *cityEdit;
    QLabel *textLabel4;
    QLineEdit *stateEdit;
    QLabel *textLabel3;
    QLineEdit *zipEdit;
    QLabel *textLabel8;
    InfoComboBox *countryCombo;
    QLabel *textLabel5;
    QLineEdit *phoneEdit;
    QLabel *textLabel6_2;
    QLineEdit *cellEdit;
    QLabel *textLabel7_2;
    QLineEdit *faxEdit;
    QLabel *textLabel10_2;
    QLineEdit *homepageEdit;
    QGroupBox *groupBox_3;
    QGridLayout *gridLayout1;
    QLabel *textLabel2_2;
    QLineEdit *oCityEdit;
    QLabel *textLabel1_2;
    QLineEdit *oStateEdit;
    QLabel *textLabel3_2;
    InfoComboBox *oCountryCombo;
    QSpacerItem *spacerItem;

    void setupUi(QWidget *ICQHomeInfoWidget)
    {
        if (ICQHomeInfoWidget->objectName().isEmpty())
            ICQHomeInfoWidget->setObjectName(QString::fromUtf8("ICQHomeInfoWidget"));
        ICQHomeInfoWidget->resize(500, 324);
        vboxLayout = new QVBoxLayout(ICQHomeInfoWidget);
        vboxLayout->setSpacing(6);
        vboxLayout->setObjectName(QString::fromUtf8("vboxLayout"));
        vboxLayout->setContentsMargins(0, 0, 0, 0);
        groupBox_2 = new QGroupBox(ICQHomeInfoWidget);
        groupBox_2->setObjectName(QString::fromUtf8("groupBox_2"));
        gridLayout = new QGridLayout(groupBox_2);
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        gridLayout->setHorizontalSpacing(6);
        gridLayout->setVerticalSpacing(6);
        gridLayout->setContentsMargins(9, 9, 9, 9);
        textLabel1 = new QLabel(groupBox_2);
        textLabel1->setObjectName(QString::fromUtf8("textLabel1"));

        gridLayout->addWidget(textLabel1, 0, 0, 1, 1);

        addressEdit = new QLineEdit(groupBox_2);
        addressEdit->setObjectName(QString::fromUtf8("addressEdit"));
        QSizePolicy sizePolicy(QSizePolicy::MinimumExpanding, QSizePolicy::Fixed);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(addressEdit->sizePolicy().hasHeightForWidth());
        addressEdit->setSizePolicy(sizePolicy);
        addressEdit->setReadOnly(true);

        gridLayout->addWidget(addressEdit, 0, 1, 1, 3);

        textLabel2 = new QLabel(groupBox_2);
        textLabel2->setObjectName(QString::fromUtf8("textLabel2"));

        gridLayout->addWidget(textLabel2, 1, 0, 1, 1);

        cityEdit = new QLineEdit(groupBox_2);
        cityEdit->setObjectName(QString::fromUtf8("cityEdit"));
        QSizePolicy sizePolicy1(QSizePolicy::Expanding, QSizePolicy::Fixed);
        sizePolicy1.setHorizontalStretch(1);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(cityEdit->sizePolicy().hasHeightForWidth());
        cityEdit->setSizePolicy(sizePolicy1);
        cityEdit->setReadOnly(true);

        gridLayout->addWidget(cityEdit, 1, 1, 1, 1);

        textLabel4 = new QLabel(groupBox_2);
        textLabel4->setObjectName(QString::fromUtf8("textLabel4"));

        gridLayout->addWidget(textLabel4, 1, 2, 1, 1);

        stateEdit = new QLineEdit(groupBox_2);
        stateEdit->setObjectName(QString::fromUtf8("stateEdit"));
        sizePolicy1.setHeightForWidth(stateEdit->sizePolicy().hasHeightForWidth());
        stateEdit->setSizePolicy(sizePolicy1);
        stateEdit->setReadOnly(true);

        gridLayout->addWidget(stateEdit, 1, 3, 1, 1);

        textLabel3 = new QLabel(groupBox_2);
        textLabel3->setObjectName(QString::fromUtf8("textLabel3"));

        gridLayout->addWidget(textLabel3, 2, 0, 1, 1);

        zipEdit = new QLineEdit(groupBox_2);
        zipEdit->setObjectName(QString::fromUtf8("zipEdit"));
        QSizePolicy sizePolicy2(QSizePolicy::Expanding, QSizePolicy::Fixed);
        sizePolicy2.setHorizontalStretch(0);
        sizePolicy2.setVerticalStretch(0);
        sizePolicy2.setHeightForWidth(zipEdit->sizePolicy().hasHeightForWidth());
        zipEdit->setSizePolicy(sizePolicy2);
        zipEdit->setReadOnly(true);

        gridLayout->addWidget(zipEdit, 2, 1, 1, 1);

        textLabel8 = new QLabel(groupBox_2);
        textLabel8->setObjectName(QString::fromUtf8("textLabel8"));

        gridLayout->addWidget(textLabel8, 2, 2, 1, 1);

        countryCombo = new InfoComboBox(groupBox_2);
        countryCombo->setObjectName(QString::fromUtf8("countryCombo"));

        gridLayout->addWidget(countryCombo, 2, 3, 1, 1);

        textLabel5 = new QLabel(groupBox_2);
        textLabel5->setObjectName(QString::fromUtf8("textLabel5"));

        gridLayout->addWidget(textLabel5, 3, 0, 1, 1);

        phoneEdit = new QLineEdit(groupBox_2);
        phoneEdit->setObjectName(QString::fromUtf8("phoneEdit"));
        phoneEdit->setReadOnly(true);

        gridLayout->addWidget(phoneEdit, 3, 1, 1, 1);

        textLabel6_2 = new QLabel(groupBox_2);
        textLabel6_2->setObjectName(QString::fromUtf8("textLabel6_2"));

        gridLayout->addWidget(textLabel6_2, 3, 2, 1, 1);

        cellEdit = new QLineEdit(groupBox_2);
        cellEdit->setObjectName(QString::fromUtf8("cellEdit"));
        sizePolicy2.setHeightForWidth(cellEdit->sizePolicy().hasHeightForWidth());
        cellEdit->setSizePolicy(sizePolicy2);
        cellEdit->setReadOnly(true);

        gridLayout->addWidget(cellEdit, 3, 3, 1, 1);

        textLabel7_2 = new QLabel(groupBox_2);
        textLabel7_2->setObjectName(QString::fromUtf8("textLabel7_2"));

        gridLayout->addWidget(textLabel7_2, 4, 0, 1, 1);

        faxEdit = new QLineEdit(groupBox_2);
        faxEdit->setObjectName(QString::fromUtf8("faxEdit"));
        faxEdit->setReadOnly(true);

        gridLayout->addWidget(faxEdit, 4, 1, 1, 1);

        textLabel10_2 = new QLabel(groupBox_2);
        textLabel10_2->setObjectName(QString::fromUtf8("textLabel10_2"));

        gridLayout->addWidget(textLabel10_2, 5, 0, 1, 1);

        homepageEdit = new QLineEdit(groupBox_2);
        homepageEdit->setObjectName(QString::fromUtf8("homepageEdit"));
        sizePolicy.setHeightForWidth(homepageEdit->sizePolicy().hasHeightForWidth());
        homepageEdit->setSizePolicy(sizePolicy);
        homepageEdit->setReadOnly(true);

        gridLayout->addWidget(homepageEdit, 5, 1, 1, 3);


        vboxLayout->addWidget(groupBox_2);

        groupBox_3 = new QGroupBox(ICQHomeInfoWidget);
        groupBox_3->setObjectName(QString::fromUtf8("groupBox_3"));
        gridLayout1 = new QGridLayout(groupBox_3);
        gridLayout1->setObjectName(QString::fromUtf8("gridLayout1"));
        gridLayout1->setHorizontalSpacing(6);
        gridLayout1->setVerticalSpacing(6);
        gridLayout1->setContentsMargins(9, 9, 9, 9);
        textLabel2_2 = new QLabel(groupBox_3);
        textLabel2_2->setObjectName(QString::fromUtf8("textLabel2_2"));

        gridLayout1->addWidget(textLabel2_2, 0, 0, 1, 1);

        oCityEdit = new QLineEdit(groupBox_3);
        oCityEdit->setObjectName(QString::fromUtf8("oCityEdit"));
        oCityEdit->setReadOnly(true);

        gridLayout1->addWidget(oCityEdit, 0, 1, 1, 1);

        textLabel1_2 = new QLabel(groupBox_3);
        textLabel1_2->setObjectName(QString::fromUtf8("textLabel1_2"));

        gridLayout1->addWidget(textLabel1_2, 1, 0, 1, 1);

        oStateEdit = new QLineEdit(groupBox_3);
        oStateEdit->setObjectName(QString::fromUtf8("oStateEdit"));
        oStateEdit->setReadOnly(true);

        gridLayout1->addWidget(oStateEdit, 1, 1, 1, 1);

        textLabel3_2 = new QLabel(groupBox_3);
        textLabel3_2->setObjectName(QString::fromUtf8("textLabel3_2"));

        gridLayout1->addWidget(textLabel3_2, 2, 0, 1, 1);

        oCountryCombo = new InfoComboBox(groupBox_3);
        oCountryCombo->setObjectName(QString::fromUtf8("oCountryCombo"));
        sizePolicy2.setHeightForWidth(oCountryCombo->sizePolicy().hasHeightForWidth());
        oCountryCombo->setSizePolicy(sizePolicy2);

        gridLayout1->addWidget(oCountryCombo, 2, 1, 1, 1);


        vboxLayout->addWidget(groupBox_3);

        spacerItem = new QSpacerItem(51, 0, QSizePolicy::Minimum, QSizePolicy::Expanding);

        vboxLayout->addItem(spacerItem);

#ifndef UI_QT_NO_SHORTCUT
        textLabel1->setBuddy(addressEdit);
        textLabel2->setBuddy(cityEdit);
        textLabel4->setBuddy(stateEdit);
        textLabel3->setBuddy(zipEdit);
        textLabel8->setBuddy(countryCombo);
        textLabel5->setBuddy(phoneEdit);
        textLabel6_2->setBuddy(cellEdit);
        textLabel7_2->setBuddy(faxEdit);
        textLabel10_2->setBuddy(homepageEdit);
        textLabel2_2->setBuddy(oCityEdit);
        textLabel1_2->setBuddy(oStateEdit);
        textLabel3_2->setBuddy(oCountryCombo);
#endif // QT_NO_SHORTCUT
        QWidget::setTabOrder(addressEdit, cityEdit);
        QWidget::setTabOrder(cityEdit, stateEdit);
        QWidget::setTabOrder(stateEdit, zipEdit);
        QWidget::setTabOrder(zipEdit, countryCombo);
        QWidget::setTabOrder(countryCombo, phoneEdit);
        QWidget::setTabOrder(phoneEdit, cellEdit);
        QWidget::setTabOrder(cellEdit, faxEdit);
        QWidget::setTabOrder(faxEdit, homepageEdit);

        retranslateUi(ICQHomeInfoWidget);

        QMetaObject::connectSlotsByName(ICQHomeInfoWidget);
    } // setupUi

    void retranslateUi(QWidget *ICQHomeInfoWidget)
    {
        groupBox_2->setTitle(tr2i18n("Location && Contact Information", 0));
        textLabel1->setText(tr2i18n("&Address:", 0));
        textLabel2->setText(tr2i18n("&City:", 0));
        textLabel4->setText(tr2i18n("&State:", 0));
        textLabel3->setText(tr2i18n("&Zip:", 0));
        zipEdit->setText(QString());
        textLabel8->setText(tr2i18n("Countr&y:", 0));
        textLabel5->setText(tr2i18n("&Phone:", 0));
        phoneEdit->setText(QString());
        textLabel6_2->setText(tr2i18n("Ce&ll:", 0));
        textLabel7_2->setText(tr2i18n("Fa&x:", 0));
        textLabel10_2->setText(tr2i18n("&Homepage:", 0));
        groupBox_3->setTitle(tr2i18n("Origin", 0));
        textLabel2_2->setText(tr2i18n("City:", 0));
        textLabel1_2->setText(tr2i18n("State:", 0));
        textLabel3_2->setText(tr2i18n("Country:", 0));
        Q_UNUSED(ICQHomeInfoWidget);
    } // retranslateUi

};

namespace Ui {
    class ICQHomeInfoWidget: public Ui_ICQHomeInfoWidget {};
} // namespace Ui

QT_END_NAMESPACE

#endif // ICQHOMEINFOWIDGET_H

