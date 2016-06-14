#include <kdialog.h>
#include <klocale.h>

/********************************************************************************
** Form generated from reading UI file 'icqgeneralinfo.ui'
**
** Created by: Qt User Interface Compiler version 4.8.7
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_ICQGENERALINFO_H
#define UI_ICQGENERALINFO_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtGui/QApplication>
#include <QtGui/QButtonGroup>
#include <QtGui/QGridLayout>
#include <QtGui/QGroupBox>
#include <QtGui/QHBoxLayout>
#include <QtGui/QHeaderView>
#include <QtGui/QLabel>
#include <QtGui/QLineEdit>
#include <QtGui/QSpacerItem>
#include <QtGui/QSpinBox>
#include <QtGui/QVBoxLayout>
#include <QtGui/QWidget>
#include "infocombobox.h"

QT_BEGIN_NAMESPACE

class Ui_ICQGeneralInfoWidget
{
public:
    QVBoxLayout *vboxLayout;
    QGroupBox *groupBox;
    QGridLayout *gridLayout;
    QLabel *uinLabel;
    QLineEdit *uinEdit;
    QLabel *ipLabel;
    QLineEdit *ipEdit;
    QLabel *nickNameLabel;
    QLineEdit *nickNameEdit;
    QLabel *aliasLabel;
    QLineEdit *aliasEdit;
    QLabel *firstNameLabel;
    QLineEdit *firstNameEdit;
    QLabel *lastNameLabel;
    QLineEdit *lastNameEdit;
    QLabel *textLabel6;
    InfoComboBox *genderCombo;
    QLabel *maritalLabel;
    InfoComboBox *maritalCombo;
    QSpacerItem *spacerItem;
    QLabel *textLabel7;
    InfoComboBox *timezoneCombo;
    QGroupBox *groupBox_4;
    QHBoxLayout *hboxLayout;
    QHBoxLayout *hboxLayout1;
    QLabel *birthdayDayLabel;
    QSpinBox *birthdayDaySpin;
    QLabel *birthdayMonthLabel;
    QSpinBox *birthdayMonthSpin;
    QLabel *birthdayYearLabel;
    QSpinBox *birthdayYearSpin;
    QSpacerItem *spacerItem1;
    QHBoxLayout *hboxLayout2;
    QLabel *textLabel10;
    QLineEdit *ageEdit;
    QGroupBox *groupBox_2;
    QGridLayout *gridLayout1;
    QLabel *language1Label;
    InfoComboBox *language1Combo;
    QLabel *language2Label;
    InfoComboBox *language2Combo;
    QLabel *language3Label;
    InfoComboBox *language3Combo;
    QSpacerItem *spacerItem2;

    void setupUi(QWidget *ICQGeneralInfoWidget)
    {
        if (ICQGeneralInfoWidget->objectName().isEmpty())
            ICQGeneralInfoWidget->setObjectName(QString::fromUtf8("ICQGeneralInfoWidget"));
        ICQGeneralInfoWidget->resize(500, 381);
        vboxLayout = new QVBoxLayout(ICQGeneralInfoWidget);
        vboxLayout->setObjectName(QString::fromUtf8("vboxLayout"));
        vboxLayout->setContentsMargins(0, 0, 0, 0);
        groupBox = new QGroupBox(ICQGeneralInfoWidget);
        groupBox->setObjectName(QString::fromUtf8("groupBox"));
        gridLayout = new QGridLayout(groupBox);
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        uinLabel = new QLabel(groupBox);
        uinLabel->setObjectName(QString::fromUtf8("uinLabel"));

        gridLayout->addWidget(uinLabel, 0, 0, 1, 1);

        uinEdit = new QLineEdit(groupBox);
        uinEdit->setObjectName(QString::fromUtf8("uinEdit"));
        uinEdit->setReadOnly(true);

        gridLayout->addWidget(uinEdit, 0, 1, 1, 1);

        ipLabel = new QLabel(groupBox);
        ipLabel->setObjectName(QString::fromUtf8("ipLabel"));

        gridLayout->addWidget(ipLabel, 0, 2, 1, 1);

        ipEdit = new QLineEdit(groupBox);
        ipEdit->setObjectName(QString::fromUtf8("ipEdit"));
        ipEdit->setReadOnly(true);

        gridLayout->addWidget(ipEdit, 0, 3, 1, 1);

        nickNameLabel = new QLabel(groupBox);
        nickNameLabel->setObjectName(QString::fromUtf8("nickNameLabel"));

        gridLayout->addWidget(nickNameLabel, 1, 0, 1, 1);

        nickNameEdit = new QLineEdit(groupBox);
        nickNameEdit->setObjectName(QString::fromUtf8("nickNameEdit"));
        nickNameEdit->setReadOnly(true);

        gridLayout->addWidget(nickNameEdit, 1, 1, 1, 1);

        aliasLabel = new QLabel(groupBox);
        aliasLabel->setObjectName(QString::fromUtf8("aliasLabel"));

        gridLayout->addWidget(aliasLabel, 1, 2, 1, 1);

        aliasEdit = new QLineEdit(groupBox);
        aliasEdit->setObjectName(QString::fromUtf8("aliasEdit"));
        aliasEdit->setReadOnly(false);

        gridLayout->addWidget(aliasEdit, 1, 3, 1, 1);

        firstNameLabel = new QLabel(groupBox);
        firstNameLabel->setObjectName(QString::fromUtf8("firstNameLabel"));

        gridLayout->addWidget(firstNameLabel, 2, 0, 1, 1);

        firstNameEdit = new QLineEdit(groupBox);
        firstNameEdit->setObjectName(QString::fromUtf8("firstNameEdit"));
        QSizePolicy sizePolicy(QSizePolicy::Expanding, QSizePolicy::Fixed);
        sizePolicy.setHorizontalStretch(1);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(firstNameEdit->sizePolicy().hasHeightForWidth());
        firstNameEdit->setSizePolicy(sizePolicy);
        firstNameEdit->setReadOnly(true);

        gridLayout->addWidget(firstNameEdit, 2, 1, 1, 1);

        lastNameLabel = new QLabel(groupBox);
        lastNameLabel->setObjectName(QString::fromUtf8("lastNameLabel"));

        gridLayout->addWidget(lastNameLabel, 2, 2, 1, 1);

        lastNameEdit = new QLineEdit(groupBox);
        lastNameEdit->setObjectName(QString::fromUtf8("lastNameEdit"));
        sizePolicy.setHeightForWidth(lastNameEdit->sizePolicy().hasHeightForWidth());
        lastNameEdit->setSizePolicy(sizePolicy);
        lastNameEdit->setReadOnly(true);

        gridLayout->addWidget(lastNameEdit, 2, 3, 1, 1);

        textLabel6 = new QLabel(groupBox);
        textLabel6->setObjectName(QString::fromUtf8("textLabel6"));

        gridLayout->addWidget(textLabel6, 3, 0, 1, 1);

        genderCombo = new InfoComboBox(groupBox);
        genderCombo->setObjectName(QString::fromUtf8("genderCombo"));

        gridLayout->addWidget(genderCombo, 3, 1, 1, 1);

        maritalLabel = new QLabel(groupBox);
        maritalLabel->setObjectName(QString::fromUtf8("maritalLabel"));

        gridLayout->addWidget(maritalLabel, 3, 2, 1, 1);

        maritalCombo = new InfoComboBox(groupBox);
        maritalCombo->setObjectName(QString::fromUtf8("maritalCombo"));

        gridLayout->addWidget(maritalCombo, 3, 3, 1, 1);

        spacerItem = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        gridLayout->addItem(spacerItem, 4, 0, 1, 2);

        textLabel7 = new QLabel(groupBox);
        textLabel7->setObjectName(QString::fromUtf8("textLabel7"));

        gridLayout->addWidget(textLabel7, 4, 2, 1, 1);

        timezoneCombo = new InfoComboBox(groupBox);
        timezoneCombo->setObjectName(QString::fromUtf8("timezoneCombo"));

        gridLayout->addWidget(timezoneCombo, 4, 3, 1, 1);


        vboxLayout->addWidget(groupBox);

        groupBox_4 = new QGroupBox(ICQGeneralInfoWidget);
        groupBox_4->setObjectName(QString::fromUtf8("groupBox_4"));
        hboxLayout = new QHBoxLayout(groupBox_4);
        hboxLayout->setObjectName(QString::fromUtf8("hboxLayout"));
        hboxLayout1 = new QHBoxLayout();
        hboxLayout1->setObjectName(QString::fromUtf8("hboxLayout1"));
        birthdayDayLabel = new QLabel(groupBox_4);
        birthdayDayLabel->setObjectName(QString::fromUtf8("birthdayDayLabel"));

        hboxLayout1->addWidget(birthdayDayLabel);

        birthdayDaySpin = new QSpinBox(groupBox_4);
        birthdayDaySpin->setObjectName(QString::fromUtf8("birthdayDaySpin"));
        birthdayDaySpin->setReadOnly(true);
        birthdayDaySpin->setMaximum(31);

        hboxLayout1->addWidget(birthdayDaySpin);

        birthdayMonthLabel = new QLabel(groupBox_4);
        birthdayMonthLabel->setObjectName(QString::fromUtf8("birthdayMonthLabel"));

        hboxLayout1->addWidget(birthdayMonthLabel);

        birthdayMonthSpin = new QSpinBox(groupBox_4);
        birthdayMonthSpin->setObjectName(QString::fromUtf8("birthdayMonthSpin"));
        birthdayMonthSpin->setReadOnly(true);
        birthdayMonthSpin->setMaximum(12);
        birthdayMonthSpin->setValue(0);

        hboxLayout1->addWidget(birthdayMonthSpin);

        birthdayYearLabel = new QLabel(groupBox_4);
        birthdayYearLabel->setObjectName(QString::fromUtf8("birthdayYearLabel"));

        hboxLayout1->addWidget(birthdayYearLabel);

        birthdayYearSpin = new QSpinBox(groupBox_4);
        birthdayYearSpin->setObjectName(QString::fromUtf8("birthdayYearSpin"));
        birthdayYearSpin->setReadOnly(true);
        birthdayYearSpin->setMaximum(7999);

        hboxLayout1->addWidget(birthdayYearSpin);


        hboxLayout->addLayout(hboxLayout1);

        spacerItem1 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        hboxLayout->addItem(spacerItem1);

        hboxLayout2 = new QHBoxLayout();
        hboxLayout2->setObjectName(QString::fromUtf8("hboxLayout2"));
        textLabel10 = new QLabel(groupBox_4);
        textLabel10->setObjectName(QString::fromUtf8("textLabel10"));
        QSizePolicy sizePolicy1(QSizePolicy::Fixed, QSizePolicy::Preferred);
        sizePolicy1.setHorizontalStretch(0);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(textLabel10->sizePolicy().hasHeightForWidth());
        textLabel10->setSizePolicy(sizePolicy1);

        hboxLayout2->addWidget(textLabel10);

        ageEdit = new QLineEdit(groupBox_4);
        ageEdit->setObjectName(QString::fromUtf8("ageEdit"));
        QSizePolicy sizePolicy2(QSizePolicy::Ignored, QSizePolicy::Fixed);
        sizePolicy2.setHorizontalStretch(0);
        sizePolicy2.setVerticalStretch(0);
        sizePolicy2.setHeightForWidth(ageEdit->sizePolicy().hasHeightForWidth());
        ageEdit->setSizePolicy(sizePolicy2);
        ageEdit->setMinimumSize(QSize(35, 0));
        ageEdit->setMaxLength(3);
        ageEdit->setReadOnly(true);

        hboxLayout2->addWidget(ageEdit);


        hboxLayout->addLayout(hboxLayout2);


        vboxLayout->addWidget(groupBox_4);

        groupBox_2 = new QGroupBox(ICQGeneralInfoWidget);
        groupBox_2->setObjectName(QString::fromUtf8("groupBox_2"));
        gridLayout1 = new QGridLayout(groupBox_2);
        gridLayout1->setObjectName(QString::fromUtf8("gridLayout1"));
        gridLayout1->setHorizontalSpacing(6);
        gridLayout1->setVerticalSpacing(6);
        gridLayout1->setContentsMargins(9, 9, 9, 9);
        language1Label = new QLabel(groupBox_2);
        language1Label->setObjectName(QString::fromUtf8("language1Label"));

        gridLayout1->addWidget(language1Label, 0, 0, 1, 1);

        language1Combo = new InfoComboBox(groupBox_2);
        language1Combo->setObjectName(QString::fromUtf8("language1Combo"));

        gridLayout1->addWidget(language1Combo, 0, 1, 1, 1);

        language2Label = new QLabel(groupBox_2);
        language2Label->setObjectName(QString::fromUtf8("language2Label"));

        gridLayout1->addWidget(language2Label, 1, 0, 1, 1);

        language2Combo = new InfoComboBox(groupBox_2);
        language2Combo->setObjectName(QString::fromUtf8("language2Combo"));

        gridLayout1->addWidget(language2Combo, 1, 1, 1, 1);

        language3Label = new QLabel(groupBox_2);
        language3Label->setObjectName(QString::fromUtf8("language3Label"));

        gridLayout1->addWidget(language3Label, 2, 0, 1, 1);

        language3Combo = new InfoComboBox(groupBox_2);
        language3Combo->setObjectName(QString::fromUtf8("language3Combo"));
        QSizePolicy sizePolicy3(QSizePolicy::Expanding, QSizePolicy::Fixed);
        sizePolicy3.setHorizontalStretch(0);
        sizePolicy3.setVerticalStretch(0);
        sizePolicy3.setHeightForWidth(language3Combo->sizePolicy().hasHeightForWidth());
        language3Combo->setSizePolicy(sizePolicy3);

        gridLayout1->addWidget(language3Combo, 2, 1, 1, 1);


        vboxLayout->addWidget(groupBox_2);

        spacerItem2 = new QSpacerItem(51, 0, QSizePolicy::Minimum, QSizePolicy::Expanding);

        vboxLayout->addItem(spacerItem2);

#ifndef UI_QT_NO_SHORTCUT
        uinLabel->setBuddy(uinEdit);
        ipLabel->setBuddy(ipEdit);
        nickNameLabel->setBuddy(nickNameEdit);
        aliasLabel->setBuddy(lastNameEdit);
        firstNameLabel->setBuddy(firstNameEdit);
        lastNameLabel->setBuddy(lastNameEdit);
        textLabel6->setBuddy(genderCombo);
        maritalLabel->setBuddy(maritalCombo);
        textLabel7->setBuddy(timezoneCombo);
        birthdayDayLabel->setBuddy(birthdayDaySpin);
        birthdayMonthLabel->setBuddy(birthdayMonthSpin);
        birthdayYearLabel->setBuddy(birthdayYearSpin);
        textLabel10->setBuddy(ageEdit);
        language1Label->setBuddy(language1Combo);
        language2Label->setBuddy(language2Combo);
        language3Label->setBuddy(language3Combo);
#endif // QT_NO_SHORTCUT
        QWidget::setTabOrder(uinEdit, ipEdit);
        QWidget::setTabOrder(ipEdit, nickNameEdit);
        QWidget::setTabOrder(nickNameEdit, aliasEdit);
        QWidget::setTabOrder(aliasEdit, firstNameEdit);
        QWidget::setTabOrder(firstNameEdit, lastNameEdit);
        QWidget::setTabOrder(lastNameEdit, genderCombo);
        QWidget::setTabOrder(genderCombo, maritalCombo);
        QWidget::setTabOrder(maritalCombo, timezoneCombo);
        QWidget::setTabOrder(timezoneCombo, birthdayDaySpin);
        QWidget::setTabOrder(birthdayDaySpin, birthdayMonthSpin);
        QWidget::setTabOrder(birthdayMonthSpin, birthdayYearSpin);
        QWidget::setTabOrder(birthdayYearSpin, ageEdit);
        QWidget::setTabOrder(ageEdit, language1Combo);
        QWidget::setTabOrder(language1Combo, language2Combo);
        QWidget::setTabOrder(language2Combo, language3Combo);

        retranslateUi(ICQGeneralInfoWidget);

        QMetaObject::connectSlotsByName(ICQGeneralInfoWidget);
    } // setupUi

    void retranslateUi(QWidget *ICQGeneralInfoWidget)
    {
        groupBox->setTitle(tr2i18n("Personal Information", 0));
        uinLabel->setText(tr2i18n("&UIN #:", 0));
        ipLabel->setText(tr2i18n("&IP:", 0));
        ipEdit->setText(QString());
        nickNameLabel->setText(tr2i18n("&Nickname:", 0));
        aliasLabel->setText(tr2i18n("Alias:", 0));
        firstNameLabel->setText(tr2i18n("&First name:", 0));
        lastNameLabel->setText(tr2i18n("&Last name:", 0));
        textLabel6->setText(tr2i18n("Gen&der:", 0));
        maritalLabel->setText(tr2i18n("Marital status:", 0));
        textLabel7->setText(tr2i18n("&Timezone:", 0));
        groupBox_4->setTitle(tr2i18n("Birthday", 0));
        birthdayDayLabel->setText(tr2i18n("Day:", 0));
        birthdayMonthLabel->setText(tr2i18n("Month:", 0));
        birthdayYearLabel->setText(tr2i18n("Year:", 0));
        textLabel10->setText(tr2i18n("A&ge:", 0));
        groupBox_2->setTitle(tr2i18n("Spoken Languages", 0));
        language1Label->setText(tr2i18n("First:", 0));
        language2Label->setText(tr2i18n("Second:", 0));
        language3Label->setText(tr2i18n("Third:", 0));
        Q_UNUSED(ICQGeneralInfoWidget);
    } // retranslateUi

};

namespace Ui {
    class ICQGeneralInfoWidget: public Ui_ICQGeneralInfoWidget {};
} // namespace Ui

QT_END_NAMESPACE

#endif // ICQGENERALINFO_H

