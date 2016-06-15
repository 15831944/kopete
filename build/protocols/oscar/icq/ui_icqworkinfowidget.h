#include <kdialog.h>
#include <klocale.h>

/********************************************************************************
** Form generated from reading UI file 'icqworkinfowidget.ui'
**
** Created by: Qt User Interface Compiler version 4.8.7
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_ICQWORKINFOWIDGET_H
#define UI_ICQWORKINFOWIDGET_H

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

class Ui_ICQWorkInfoWidget
{
public:
    QVBoxLayout *vboxLayout;
    QGroupBox *groupBox_2;
    QGridLayout *gridLayout;
    QLabel *textLabel1;
    QLineEdit *companyEdit;
    QLabel *textLabel2;
    QLineEdit *addressEdit;
    QLabel *textLabel3;
    QLineEdit *cityEdit;
    QLabel *textLabel5;
    QLineEdit *stateEdit;
    QLabel *textLabel4;
    QLineEdit *zipEdit;
    QLabel *textLabel9;
    InfoComboBox *countryCombo;
    QLabel *textLabel8;
    QLineEdit *homepageEdit;
    QGroupBox *groupBox;
    QGridLayout *gridLayout1;
    QLabel *textLabel6;
    QLineEdit *departmentEdit;
    QLabel *textLabel7;
    QLineEdit *positionEdit;
    QLabel *occupationLabel;
    InfoComboBox *occupationCombo;
    QLabel *textLabel10;
    QLineEdit *phoneEdit;
    QLabel *textLabel11;
    QLineEdit *faxEdit;
    QSpacerItem *spacerItem;

    void setupUi(QWidget *ICQWorkInfoWidget)
    {
        if (ICQWorkInfoWidget->objectName().isEmpty())
            ICQWorkInfoWidget->setObjectName(QString::fromUtf8("ICQWorkInfoWidget"));
        ICQWorkInfoWidget->resize(500, 310);
        vboxLayout = new QVBoxLayout(ICQWorkInfoWidget);
        vboxLayout->setObjectName(QString::fromUtf8("vboxLayout"));
        vboxLayout->setContentsMargins(0, 0, 0, 0);
        groupBox_2 = new QGroupBox(ICQWorkInfoWidget);
        groupBox_2->setObjectName(QString::fromUtf8("groupBox_2"));
        gridLayout = new QGridLayout(groupBox_2);
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        textLabel1 = new QLabel(groupBox_2);
        textLabel1->setObjectName(QString::fromUtf8("textLabel1"));

        gridLayout->addWidget(textLabel1, 0, 0, 1, 1);

        companyEdit = new QLineEdit(groupBox_2);
        companyEdit->setObjectName(QString::fromUtf8("companyEdit"));
        companyEdit->setReadOnly(true);

        gridLayout->addWidget(companyEdit, 0, 1, 1, 3);

        textLabel2 = new QLabel(groupBox_2);
        textLabel2->setObjectName(QString::fromUtf8("textLabel2"));

        gridLayout->addWidget(textLabel2, 1, 0, 1, 1);

        addressEdit = new QLineEdit(groupBox_2);
        addressEdit->setObjectName(QString::fromUtf8("addressEdit"));
        addressEdit->setReadOnly(true);

        gridLayout->addWidget(addressEdit, 1, 1, 1, 3);

        textLabel3 = new QLabel(groupBox_2);
        textLabel3->setObjectName(QString::fromUtf8("textLabel3"));

        gridLayout->addWidget(textLabel3, 2, 0, 1, 1);

        cityEdit = new QLineEdit(groupBox_2);
        cityEdit->setObjectName(QString::fromUtf8("cityEdit"));
        QSizePolicy sizePolicy(QSizePolicy::Expanding, QSizePolicy::Fixed);
        sizePolicy.setHorizontalStretch(1);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(cityEdit->sizePolicy().hasHeightForWidth());
        cityEdit->setSizePolicy(sizePolicy);
        cityEdit->setReadOnly(true);

        gridLayout->addWidget(cityEdit, 2, 1, 1, 1);

        textLabel5 = new QLabel(groupBox_2);
        textLabel5->setObjectName(QString::fromUtf8("textLabel5"));

        gridLayout->addWidget(textLabel5, 2, 2, 1, 1);

        stateEdit = new QLineEdit(groupBox_2);
        stateEdit->setObjectName(QString::fromUtf8("stateEdit"));
        sizePolicy.setHeightForWidth(stateEdit->sizePolicy().hasHeightForWidth());
        stateEdit->setSizePolicy(sizePolicy);
        stateEdit->setReadOnly(true);

        gridLayout->addWidget(stateEdit, 2, 3, 1, 1);

        textLabel4 = new QLabel(groupBox_2);
        textLabel4->setObjectName(QString::fromUtf8("textLabel4"));

        gridLayout->addWidget(textLabel4, 3, 0, 1, 1);

        zipEdit = new QLineEdit(groupBox_2);
        zipEdit->setObjectName(QString::fromUtf8("zipEdit"));
        zipEdit->setReadOnly(true);

        gridLayout->addWidget(zipEdit, 3, 1, 1, 1);

        textLabel9 = new QLabel(groupBox_2);
        textLabel9->setObjectName(QString::fromUtf8("textLabel9"));
        QSizePolicy sizePolicy1(QSizePolicy::Preferred, QSizePolicy::Preferred);
        sizePolicy1.setHorizontalStretch(0);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(textLabel9->sizePolicy().hasHeightForWidth());
        textLabel9->setSizePolicy(sizePolicy1);

        gridLayout->addWidget(textLabel9, 3, 2, 1, 1);

        countryCombo = new InfoComboBox(groupBox_2);
        countryCombo->setObjectName(QString::fromUtf8("countryCombo"));

        gridLayout->addWidget(countryCombo, 3, 3, 1, 1);

        textLabel8 = new QLabel(groupBox_2);
        textLabel8->setObjectName(QString::fromUtf8("textLabel8"));

        gridLayout->addWidget(textLabel8, 4, 0, 1, 1);

        homepageEdit = new QLineEdit(groupBox_2);
        homepageEdit->setObjectName(QString::fromUtf8("homepageEdit"));
        homepageEdit->setReadOnly(true);

        gridLayout->addWidget(homepageEdit, 4, 1, 1, 3);


        vboxLayout->addWidget(groupBox_2);

        groupBox = new QGroupBox(ICQWorkInfoWidget);
        groupBox->setObjectName(QString::fromUtf8("groupBox"));
        gridLayout1 = new QGridLayout(groupBox);
        gridLayout1->setObjectName(QString::fromUtf8("gridLayout1"));
        gridLayout1->setHorizontalSpacing(6);
        gridLayout1->setVerticalSpacing(6);
        gridLayout1->setContentsMargins(9, 9, 9, 9);
        textLabel6 = new QLabel(groupBox);
        textLabel6->setObjectName(QString::fromUtf8("textLabel6"));

        gridLayout1->addWidget(textLabel6, 0, 0, 1, 1);

        departmentEdit = new QLineEdit(groupBox);
        departmentEdit->setObjectName(QString::fromUtf8("departmentEdit"));
        departmentEdit->setReadOnly(true);

        gridLayout1->addWidget(departmentEdit, 0, 1, 1, 1);

        textLabel7 = new QLabel(groupBox);
        textLabel7->setObjectName(QString::fromUtf8("textLabel7"));

        gridLayout1->addWidget(textLabel7, 0, 2, 1, 1);

        positionEdit = new QLineEdit(groupBox);
        positionEdit->setObjectName(QString::fromUtf8("positionEdit"));
        positionEdit->setReadOnly(true);

        gridLayout1->addWidget(positionEdit, 0, 3, 1, 1);

        occupationLabel = new QLabel(groupBox);
        occupationLabel->setObjectName(QString::fromUtf8("occupationLabel"));

        gridLayout1->addWidget(occupationLabel, 1, 0, 1, 1);

        occupationCombo = new InfoComboBox(groupBox);
        occupationCombo->setObjectName(QString::fromUtf8("occupationCombo"));
        QSizePolicy sizePolicy2(QSizePolicy::Expanding, QSizePolicy::Fixed);
        sizePolicy2.setHorizontalStretch(0);
        sizePolicy2.setVerticalStretch(0);
        sizePolicy2.setHeightForWidth(occupationCombo->sizePolicy().hasHeightForWidth());
        occupationCombo->setSizePolicy(sizePolicy2);

        gridLayout1->addWidget(occupationCombo, 1, 1, 1, 3);

        textLabel10 = new QLabel(groupBox);
        textLabel10->setObjectName(QString::fromUtf8("textLabel10"));

        gridLayout1->addWidget(textLabel10, 2, 0, 1, 1);

        phoneEdit = new QLineEdit(groupBox);
        phoneEdit->setObjectName(QString::fromUtf8("phoneEdit"));
        phoneEdit->setReadOnly(true);

        gridLayout1->addWidget(phoneEdit, 2, 1, 1, 1);

        textLabel11 = new QLabel(groupBox);
        textLabel11->setObjectName(QString::fromUtf8("textLabel11"));

        gridLayout1->addWidget(textLabel11, 2, 2, 1, 1);

        faxEdit = new QLineEdit(groupBox);
        faxEdit->setObjectName(QString::fromUtf8("faxEdit"));
        faxEdit->setReadOnly(true);

        gridLayout1->addWidget(faxEdit, 2, 3, 1, 1);


        vboxLayout->addWidget(groupBox);

        spacerItem = new QSpacerItem(391, 0, QSizePolicy::Minimum, QSizePolicy::Expanding);

        vboxLayout->addItem(spacerItem);

#ifndef UI_QT_NO_SHORTCUT
        textLabel1->setBuddy(companyEdit);
        textLabel2->setBuddy(addressEdit);
        textLabel3->setBuddy(cityEdit);
        textLabel5->setBuddy(stateEdit);
        textLabel4->setBuddy(zipEdit);
        textLabel9->setBuddy(countryCombo);
        textLabel8->setBuddy(homepageEdit);
        textLabel6->setBuddy(departmentEdit);
        textLabel7->setBuddy(positionEdit);
        occupationLabel->setBuddy(occupationCombo);
        textLabel10->setBuddy(phoneEdit);
        textLabel11->setBuddy(faxEdit);
#endif // QT_NO_SHORTCUT
        QWidget::setTabOrder(companyEdit, addressEdit);
        QWidget::setTabOrder(addressEdit, cityEdit);
        QWidget::setTabOrder(cityEdit, stateEdit);
        QWidget::setTabOrder(stateEdit, zipEdit);
        QWidget::setTabOrder(zipEdit, countryCombo);
        QWidget::setTabOrder(countryCombo, homepageEdit);
        QWidget::setTabOrder(homepageEdit, departmentEdit);
        QWidget::setTabOrder(departmentEdit, positionEdit);
        QWidget::setTabOrder(positionEdit, occupationCombo);
        QWidget::setTabOrder(occupationCombo, phoneEdit);
        QWidget::setTabOrder(phoneEdit, faxEdit);

        retranslateUi(ICQWorkInfoWidget);

        QMetaObject::connectSlotsByName(ICQWorkInfoWidget);
    } // setupUi

    void retranslateUi(QWidget *ICQWorkInfoWidget)
    {
        groupBox_2->setTitle(tr2i18n("Company Location Information", 0));
        textLabel1->setText(tr2i18n("Name:", 0));
        textLabel2->setText(tr2i18n("Address:", 0));
        textLabel3->setText(tr2i18n("City:", 0));
        textLabel5->setText(tr2i18n("State:", 0));
        textLabel4->setText(tr2i18n("Zip:", 0));
        textLabel9->setText(tr2i18n("Country:", 0));
        textLabel8->setText(tr2i18n("Homepage:", 0));
        groupBox->setTitle(tr2i18n("Personal Work Information", 0));
        textLabel6->setText(tr2i18n("Department:", 0));
        textLabel7->setText(tr2i18n("Position:", 0));
        occupationLabel->setText(tr2i18n("Occupation:", 0));
        textLabel10->setText(tr2i18n("Phone:", 0));
        textLabel11->setText(tr2i18n("Fax:", 0));
        Q_UNUSED(ICQWorkInfoWidget);
    } // retranslateUi

};

namespace Ui {
    class ICQWorkInfoWidget: public Ui_ICQWorkInfoWidget {};
} // namespace Ui

QT_END_NAMESPACE

#endif // ICQWORKINFOWIDGET_H

