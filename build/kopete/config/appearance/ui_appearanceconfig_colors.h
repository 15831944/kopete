#include <kdialog.h>
#include <klocale.h>

/********************************************************************************
** Form generated from reading UI file 'appearanceconfig_colors.ui'
**
** Created by: Qt User Interface Compiler version 4.8.7
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_APPEARANCECONFIG_COLORS_H
#define UI_APPEARANCECONFIG_COLORS_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtGui/QApplication>
#include <QtGui/QButtonGroup>
#include <QtGui/QCheckBox>
#include <QtGui/QGridLayout>
#include <QtGui/QGroupBox>
#include <QtGui/QHeaderView>
#include <QtGui/QLabel>
#include <QtGui/QSpacerItem>
#include <QtGui/QVBoxLayout>
#include <QtGui/QWidget>
#include "kbuttongroup.h"
#include "kcolorbutton.h"
#include "kfontrequester.h"

QT_BEGIN_NAMESPACE

class Ui_AppearanceConfig_Colors
{
public:
    QVBoxLayout *verticalLayout;
    QGroupBox *kcfg_contactListUseCustomFont;
    QGridLayout *gridLayout_2;
    QLabel *mNormalFontLabel;
    KFontRequester *kcfg_contactListNormalFont;
    QLabel *mSmallFontLabel;
    KFontRequester *kcfg_contactListSmallFont;
    KButtonGroup *kbuttongroup;
    QGridLayout *gridLayout;
    QCheckBox *kcfg_greyIdleMetaContacts;
    KColorButton *kcfg_idleContactColor;
    QSpacerItem *horizontalSpacer;
    QLabel *textLabel1_4;
    KColorButton *kcfg_groupNameColor;
    QSpacerItem *spacerItem;

    void setupUi(QWidget *AppearanceConfig_Colors)
    {
        if (AppearanceConfig_Colors->objectName().isEmpty())
            AppearanceConfig_Colors->setObjectName(QString::fromUtf8("AppearanceConfig_Colors"));
        AppearanceConfig_Colors->resize(405, 269);
        verticalLayout = new QVBoxLayout(AppearanceConfig_Colors);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        kcfg_contactListUseCustomFont = new QGroupBox(AppearanceConfig_Colors);
        kcfg_contactListUseCustomFont->setObjectName(QString::fromUtf8("kcfg_contactListUseCustomFont"));
        kcfg_contactListUseCustomFont->setCheckable(true);
        kcfg_contactListUseCustomFont->setChecked(false);
        gridLayout_2 = new QGridLayout(kcfg_contactListUseCustomFont);
        gridLayout_2->setObjectName(QString::fromUtf8("gridLayout_2"));
        mNormalFontLabel = new QLabel(kcfg_contactListUseCustomFont);
        mNormalFontLabel->setObjectName(QString::fromUtf8("mNormalFontLabel"));
        QSizePolicy sizePolicy(QSizePolicy::Maximum, QSizePolicy::Preferred);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(mNormalFontLabel->sizePolicy().hasHeightForWidth());
        mNormalFontLabel->setSizePolicy(sizePolicy);

        gridLayout_2->addWidget(mNormalFontLabel, 0, 0, 1, 1);

        kcfg_contactListNormalFont = new KFontRequester(kcfg_contactListUseCustomFont);
        kcfg_contactListNormalFont->setObjectName(QString::fromUtf8("kcfg_contactListNormalFont"));
        QSizePolicy sizePolicy1(QSizePolicy::Expanding, QSizePolicy::Maximum);
        sizePolicy1.setHorizontalStretch(0);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(kcfg_contactListNormalFont->sizePolicy().hasHeightForWidth());
        kcfg_contactListNormalFont->setSizePolicy(sizePolicy1);

        gridLayout_2->addWidget(kcfg_contactListNormalFont, 0, 1, 1, 1);

        mSmallFontLabel = new QLabel(kcfg_contactListUseCustomFont);
        mSmallFontLabel->setObjectName(QString::fromUtf8("mSmallFontLabel"));
        sizePolicy.setHeightForWidth(mSmallFontLabel->sizePolicy().hasHeightForWidth());
        mSmallFontLabel->setSizePolicy(sizePolicy);

        gridLayout_2->addWidget(mSmallFontLabel, 1, 0, 1, 1);

        kcfg_contactListSmallFont = new KFontRequester(kcfg_contactListUseCustomFont);
        kcfg_contactListSmallFont->setObjectName(QString::fromUtf8("kcfg_contactListSmallFont"));
        sizePolicy1.setHeightForWidth(kcfg_contactListSmallFont->sizePolicy().hasHeightForWidth());
        kcfg_contactListSmallFont->setSizePolicy(sizePolicy1);

        gridLayout_2->addWidget(kcfg_contactListSmallFont, 1, 1, 1, 1);


        verticalLayout->addWidget(kcfg_contactListUseCustomFont);

        kbuttongroup = new KButtonGroup(AppearanceConfig_Colors);
        kbuttongroup->setObjectName(QString::fromUtf8("kbuttongroup"));
        gridLayout = new QGridLayout(kbuttongroup);
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        kcfg_greyIdleMetaContacts = new QCheckBox(kbuttongroup);
        kcfg_greyIdleMetaContacts->setObjectName(QString::fromUtf8("kcfg_greyIdleMetaContacts"));
        QSizePolicy sizePolicy2(QSizePolicy::Expanding, QSizePolicy::Fixed);
        sizePolicy2.setHorizontalStretch(0);
        sizePolicy2.setVerticalStretch(0);
        sizePolicy2.setHeightForWidth(kcfg_greyIdleMetaContacts->sizePolicy().hasHeightForWidth());
        kcfg_greyIdleMetaContacts->setSizePolicy(sizePolicy2);

        gridLayout->addWidget(kcfg_greyIdleMetaContacts, 0, 0, 1, 2);

        kcfg_idleContactColor = new KColorButton(kbuttongroup);
        kcfg_idleContactColor->setObjectName(QString::fromUtf8("kcfg_idleContactColor"));
        kcfg_idleContactColor->setEnabled(false);
        QSizePolicy sizePolicy3(QSizePolicy::Expanding, QSizePolicy::Preferred);
        sizePolicy3.setHorizontalStretch(5);
        sizePolicy3.setVerticalStretch(0);
        sizePolicy3.setHeightForWidth(kcfg_idleContactColor->sizePolicy().hasHeightForWidth());
        kcfg_idleContactColor->setSizePolicy(sizePolicy3);

        gridLayout->addWidget(kcfg_idleContactColor, 0, 2, 1, 1);

        horizontalSpacer = new QSpacerItem(38, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        gridLayout->addItem(horizontalSpacer, 1, 0, 1, 1);

        textLabel1_4 = new QLabel(kbuttongroup);
        textLabel1_4->setObjectName(QString::fromUtf8("textLabel1_4"));
        QSizePolicy sizePolicy4(QSizePolicy::Expanding, QSizePolicy::Preferred);
        sizePolicy4.setHorizontalStretch(0);
        sizePolicy4.setVerticalStretch(0);
        sizePolicy4.setHeightForWidth(textLabel1_4->sizePolicy().hasHeightForWidth());
        textLabel1_4->setSizePolicy(sizePolicy4);

        gridLayout->addWidget(textLabel1_4, 1, 1, 1, 1);

        kcfg_groupNameColor = new KColorButton(kbuttongroup);
        kcfg_groupNameColor->setObjectName(QString::fromUtf8("kcfg_groupNameColor"));
        QSizePolicy sizePolicy5(QSizePolicy::Expanding, QSizePolicy::Fixed);
        sizePolicy5.setHorizontalStretch(5);
        sizePolicy5.setVerticalStretch(0);
        sizePolicy5.setHeightForWidth(kcfg_groupNameColor->sizePolicy().hasHeightForWidth());
        kcfg_groupNameColor->setSizePolicy(sizePolicy5);

        gridLayout->addWidget(kcfg_groupNameColor, 1, 2, 1, 1);


        verticalLayout->addWidget(kbuttongroup);

        spacerItem = new QSpacerItem(20, 0, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout->addItem(spacerItem);

#ifndef UI_QT_NO_SHORTCUT
        textLabel1_4->setBuddy(kcfg_groupNameColor);
#endif // QT_NO_SHORTCUT

        retranslateUi(AppearanceConfig_Colors);
        QObject::connect(kcfg_greyIdleMetaContacts, SIGNAL(toggled(bool)), kcfg_idleContactColor, SLOT(setEnabled(bool)));

        QMetaObject::connectSlotsByName(AppearanceConfig_Colors);
    } // setupUi

    void retranslateUi(QWidget *AppearanceConfig_Colors)
    {
        kcfg_contactListUseCustomFont->setTitle(tr2i18n("C&ustom Fonts", 0));
        mNormalFontLabel->setText(tr2i18n("Base font:", 0));
        mSmallFontLabel->setText(tr2i18n("Small font:", 0));
        kbuttongroup->setTitle(tr2i18n("Colors", 0));
        kcfg_greyIdleMetaContacts->setText(tr2i18n("Tint &idle contacts:", 0));
        kcfg_idleContactColor->setText(QString());
        textLabel1_4->setText(tr2i18n("&Group names:", 0));
        kcfg_groupNameColor->setText(QString());
        Q_UNUSED(AppearanceConfig_Colors);
    } // retranslateUi

};

namespace Ui {
    class AppearanceConfig_Colors: public Ui_AppearanceConfig_Colors {};
} // namespace Ui

QT_END_NAMESPACE

#endif // APPEARANCECONFIG_COLORS_H

