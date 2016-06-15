#include <kdialog.h>
#include <klocale.h>

/********************************************************************************
** Form generated from reading UI file 'icqorgaffinfowidget.ui'
**
** Created by: Qt User Interface Compiler version 4.8.7
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_ICQORGAFFINFOWIDGET_H
#define UI_ICQORGAFFINFOWIDGET_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtGui/QApplication>
#include <QtGui/QButtonGroup>
#include <QtGui/QGridLayout>
#include <QtGui/QGroupBox>
#include <QtGui/QHeaderView>
#include <QtGui/QLineEdit>
#include <QtGui/QSpacerItem>
#include <QtGui/QVBoxLayout>
#include <QtGui/QWidget>
#include "infocombobox.h"

QT_BEGIN_NAMESPACE

class Ui_ICQOrgAffInfoWidget
{
public:
    QVBoxLayout *vboxLayout;
    QGroupBox *groupBox;
    QGridLayout *gridLayout;
    InfoComboBox *org1CategoryCombo;
    QLineEdit *org1KeywordEdit;
    InfoComboBox *org2CategoryCombo;
    QLineEdit *org2KeywordEdit;
    InfoComboBox *org3CategoryCombo;
    QLineEdit *org3KeywordEdit;
    QGroupBox *groupBox_2;
    QGridLayout *gridLayout1;
    InfoComboBox *aff1CategoryCombo;
    QLineEdit *aff1KeywordEdit;
    InfoComboBox *aff2CategoryCombo;
    QLineEdit *aff2KeywordEdit;
    InfoComboBox *aff3CategoryCombo;
    QLineEdit *aff3KeywordEdit;
    QSpacerItem *spacerItem;

    void setupUi(QWidget *ICQOrgAffInfoWidget)
    {
        if (ICQOrgAffInfoWidget->objectName().isEmpty())
            ICQOrgAffInfoWidget->setObjectName(QString::fromUtf8("ICQOrgAffInfoWidget"));
        ICQOrgAffInfoWidget->resize(394, 262);
        vboxLayout = new QVBoxLayout(ICQOrgAffInfoWidget);
        vboxLayout->setSpacing(6);
        vboxLayout->setObjectName(QString::fromUtf8("vboxLayout"));
        vboxLayout->setContentsMargins(0, 0, 0, 0);
        groupBox = new QGroupBox(ICQOrgAffInfoWidget);
        groupBox->setObjectName(QString::fromUtf8("groupBox"));
        gridLayout = new QGridLayout(groupBox);
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        gridLayout->setHorizontalSpacing(6);
        gridLayout->setVerticalSpacing(6);
        gridLayout->setContentsMargins(9, 9, 9, 9);
        org1CategoryCombo = new InfoComboBox(groupBox);
        org1CategoryCombo->setObjectName(QString::fromUtf8("org1CategoryCombo"));

        gridLayout->addWidget(org1CategoryCombo, 0, 0, 1, 1);

        org1KeywordEdit = new QLineEdit(groupBox);
        org1KeywordEdit->setObjectName(QString::fromUtf8("org1KeywordEdit"));
        org1KeywordEdit->setReadOnly(true);

        gridLayout->addWidget(org1KeywordEdit, 0, 1, 1, 1);

        org2CategoryCombo = new InfoComboBox(groupBox);
        org2CategoryCombo->setObjectName(QString::fromUtf8("org2CategoryCombo"));

        gridLayout->addWidget(org2CategoryCombo, 1, 0, 1, 1);

        org2KeywordEdit = new QLineEdit(groupBox);
        org2KeywordEdit->setObjectName(QString::fromUtf8("org2KeywordEdit"));
        org2KeywordEdit->setReadOnly(true);

        gridLayout->addWidget(org2KeywordEdit, 1, 1, 1, 1);

        org3CategoryCombo = new InfoComboBox(groupBox);
        org3CategoryCombo->setObjectName(QString::fromUtf8("org3CategoryCombo"));

        gridLayout->addWidget(org3CategoryCombo, 2, 0, 1, 1);

        org3KeywordEdit = new QLineEdit(groupBox);
        org3KeywordEdit->setObjectName(QString::fromUtf8("org3KeywordEdit"));
        org3KeywordEdit->setReadOnly(true);

        gridLayout->addWidget(org3KeywordEdit, 2, 1, 1, 1);


        vboxLayout->addWidget(groupBox);

        groupBox_2 = new QGroupBox(ICQOrgAffInfoWidget);
        groupBox_2->setObjectName(QString::fromUtf8("groupBox_2"));
        gridLayout1 = new QGridLayout(groupBox_2);
        gridLayout1->setObjectName(QString::fromUtf8("gridLayout1"));
        gridLayout1->setHorizontalSpacing(6);
        gridLayout1->setVerticalSpacing(6);
        gridLayout1->setContentsMargins(9, 9, 9, 9);
        aff1CategoryCombo = new InfoComboBox(groupBox_2);
        aff1CategoryCombo->setObjectName(QString::fromUtf8("aff1CategoryCombo"));

        gridLayout1->addWidget(aff1CategoryCombo, 0, 0, 1, 1);

        aff1KeywordEdit = new QLineEdit(groupBox_2);
        aff1KeywordEdit->setObjectName(QString::fromUtf8("aff1KeywordEdit"));
        aff1KeywordEdit->setReadOnly(true);

        gridLayout1->addWidget(aff1KeywordEdit, 0, 1, 1, 1);

        aff2CategoryCombo = new InfoComboBox(groupBox_2);
        aff2CategoryCombo->setObjectName(QString::fromUtf8("aff2CategoryCombo"));

        gridLayout1->addWidget(aff2CategoryCombo, 1, 0, 1, 1);

        aff2KeywordEdit = new QLineEdit(groupBox_2);
        aff2KeywordEdit->setObjectName(QString::fromUtf8("aff2KeywordEdit"));
        aff2KeywordEdit->setReadOnly(true);

        gridLayout1->addWidget(aff2KeywordEdit, 1, 1, 1, 1);

        aff3CategoryCombo = new InfoComboBox(groupBox_2);
        aff3CategoryCombo->setObjectName(QString::fromUtf8("aff3CategoryCombo"));

        gridLayout1->addWidget(aff3CategoryCombo, 2, 0, 1, 1);

        aff3KeywordEdit = new QLineEdit(groupBox_2);
        aff3KeywordEdit->setObjectName(QString::fromUtf8("aff3KeywordEdit"));
        aff3KeywordEdit->setReadOnly(true);

        gridLayout1->addWidget(aff3KeywordEdit, 2, 1, 1, 1);


        vboxLayout->addWidget(groupBox_2);

        spacerItem = new QSpacerItem(241, 0, QSizePolicy::Minimum, QSizePolicy::Expanding);

        vboxLayout->addItem(spacerItem);

        QWidget::setTabOrder(org1CategoryCombo, org1KeywordEdit);
        QWidget::setTabOrder(org1KeywordEdit, org2CategoryCombo);
        QWidget::setTabOrder(org2CategoryCombo, org2KeywordEdit);
        QWidget::setTabOrder(org2KeywordEdit, org3CategoryCombo);
        QWidget::setTabOrder(org3CategoryCombo, org3KeywordEdit);
        QWidget::setTabOrder(org3KeywordEdit, aff1CategoryCombo);
        QWidget::setTabOrder(aff1CategoryCombo, aff1KeywordEdit);
        QWidget::setTabOrder(aff1KeywordEdit, aff2CategoryCombo);
        QWidget::setTabOrder(aff2CategoryCombo, aff2KeywordEdit);
        QWidget::setTabOrder(aff2KeywordEdit, aff3CategoryCombo);
        QWidget::setTabOrder(aff3CategoryCombo, aff3KeywordEdit);

        retranslateUi(ICQOrgAffInfoWidget);

        QMetaObject::connectSlotsByName(ICQOrgAffInfoWidget);
    } // setupUi

    void retranslateUi(QWidget *ICQOrgAffInfoWidget)
    {
        groupBox->setTitle(tr2i18n("Organization Type", 0));
        groupBox_2->setTitle(tr2i18n("Past Affiliation", 0));
        Q_UNUSED(ICQOrgAffInfoWidget);
    } // retranslateUi

};

namespace Ui {
    class ICQOrgAffInfoWidget: public Ui_ICQOrgAffInfoWidget {};
} // namespace Ui

QT_END_NAMESPACE

#endif // ICQORGAFFINFOWIDGET_H

