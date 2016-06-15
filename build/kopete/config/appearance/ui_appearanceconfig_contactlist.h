#include <kdialog.h>
#include <klocale.h>

/********************************************************************************
** Form generated from reading UI file 'appearanceconfig_contactlist.ui'
**
** Created by: Qt User Interface Compiler version 4.8.7
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_APPEARANCECONFIG_CONTACTLIST_H
#define UI_APPEARANCECONFIG_CONTACTLIST_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtGui/QApplication>
#include <QtGui/QButtonGroup>
#include <QtGui/QCheckBox>
#include <QtGui/QComboBox>
#include <QtGui/QGridLayout>
#include <QtGui/QHBoxLayout>
#include <QtGui/QHeaderView>
#include <QtGui/QLabel>
#include <QtGui/QPushButton>
#include <QtGui/QSpacerItem>
#include <QtGui/QVBoxLayout>
#include <QtGui/QWidget>

QT_BEGIN_NAMESPACE

class Ui_AppearanceConfig_ContactList
{
public:
    QVBoxLayout *verticalLayout;
    QGridLayout *gridLayout;
    QLabel *label_2;
    QComboBox *kcfg_contactListGroupSorting;
    QSpacerItem *horizontalSpacer;
    QLabel *label_3;
    QComboBox *kcfg_contactListMetaContactSorting;
    QCheckBox *kcfg_contactListIconMode;
    QHBoxLayout *horizontalLayout_6;
    QSpacerItem *horizontalSpacer_2;
    QCheckBox *kcfg_contactListIconBorders;
    QHBoxLayout *horizontalLayout_4;
    QSpacerItem *horizontalSpacer1;
    QCheckBox *kcfg_contactListIconRounded;
    QCheckBox *kcfg_groupContactByGroup;
    QCheckBox *kcfg_showOfflineGrouped;
    QCheckBox *kcfg_contactListTreeView;
    QHBoxLayout *horizontalLayout_2;
    QSpacerItem *spacerItem;
    QCheckBox *kcfg_contactListIndentContact;
    QCheckBox *kcfg_contactListHideVerticalScrollBar;
    QCheckBox *kcfg_showIdentityIcons;
    QHBoxLayout *horizontalLayout_3;
    QPushButton *mEditTooltips;
    QSpacerItem *spacerItem1;
    QSpacerItem *verticalSpacer;

    void setupUi(QWidget *AppearanceConfig_ContactList)
    {
        if (AppearanceConfig_ContactList->objectName().isEmpty())
            AppearanceConfig_ContactList->setObjectName(QString::fromUtf8("AppearanceConfig_ContactList"));
        AppearanceConfig_ContactList->resize(454, 347);
        verticalLayout = new QVBoxLayout(AppearanceConfig_ContactList);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        gridLayout = new QGridLayout();
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        label_2 = new QLabel(AppearanceConfig_ContactList);
        label_2->setObjectName(QString::fromUtf8("label_2"));
        QSizePolicy sizePolicy(QSizePolicy::Preferred, QSizePolicy::Preferred);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(label_2->sizePolicy().hasHeightForWidth());
        label_2->setSizePolicy(sizePolicy);

        gridLayout->addWidget(label_2, 0, 0, 1, 1);

        kcfg_contactListGroupSorting = new QComboBox(AppearanceConfig_ContactList);
        kcfg_contactListGroupSorting->setObjectName(QString::fromUtf8("kcfg_contactListGroupSorting"));
        QSizePolicy sizePolicy1(QSizePolicy::Expanding, QSizePolicy::Fixed);
        sizePolicy1.setHorizontalStretch(0);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(kcfg_contactListGroupSorting->sizePolicy().hasHeightForWidth());
        kcfg_contactListGroupSorting->setSizePolicy(sizePolicy1);

        gridLayout->addWidget(kcfg_contactListGroupSorting, 0, 1, 1, 1);

        horizontalSpacer = new QSpacerItem(0, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        gridLayout->addItem(horizontalSpacer, 0, 2, 2, 1);

        label_3 = new QLabel(AppearanceConfig_ContactList);
        label_3->setObjectName(QString::fromUtf8("label_3"));
        sizePolicy.setHeightForWidth(label_3->sizePolicy().hasHeightForWidth());
        label_3->setSizePolicy(sizePolicy);

        gridLayout->addWidget(label_3, 1, 0, 1, 1);

        kcfg_contactListMetaContactSorting = new QComboBox(AppearanceConfig_ContactList);
        kcfg_contactListMetaContactSorting->setObjectName(QString::fromUtf8("kcfg_contactListMetaContactSorting"));
        sizePolicy1.setHeightForWidth(kcfg_contactListMetaContactSorting->sizePolicy().hasHeightForWidth());
        kcfg_contactListMetaContactSorting->setSizePolicy(sizePolicy1);

        gridLayout->addWidget(kcfg_contactListMetaContactSorting, 1, 1, 1, 1);


        verticalLayout->addLayout(gridLayout);

        kcfg_contactListIconMode = new QCheckBox(AppearanceConfig_ContactList);
        kcfg_contactListIconMode->setObjectName(QString::fromUtf8("kcfg_contactListIconMode"));
        QSizePolicy sizePolicy2(QSizePolicy::Preferred, QSizePolicy::Fixed);
        sizePolicy2.setHorizontalStretch(0);
        sizePolicy2.setVerticalStretch(0);
        sizePolicy2.setHeightForWidth(kcfg_contactListIconMode->sizePolicy().hasHeightForWidth());
        kcfg_contactListIconMode->setSizePolicy(sizePolicy2);

        verticalLayout->addWidget(kcfg_contactListIconMode);

        horizontalLayout_6 = new QHBoxLayout();
        horizontalLayout_6->setObjectName(QString::fromUtf8("horizontalLayout_6"));
        horizontalSpacer_2 = new QSpacerItem(16, 16, QSizePolicy::Fixed, QSizePolicy::Minimum);

        horizontalLayout_6->addItem(horizontalSpacer_2);

        kcfg_contactListIconBorders = new QCheckBox(AppearanceConfig_ContactList);
        kcfg_contactListIconBorders->setObjectName(QString::fromUtf8("kcfg_contactListIconBorders"));
        kcfg_contactListIconBorders->setEnabled(true);

        horizontalLayout_6->addWidget(kcfg_contactListIconBorders);


        verticalLayout->addLayout(horizontalLayout_6);

        horizontalLayout_4 = new QHBoxLayout();
        horizontalLayout_4->setObjectName(QString::fromUtf8("horizontalLayout_4"));
        horizontalSpacer1 = new QSpacerItem(16, 16, QSizePolicy::Fixed, QSizePolicy::Minimum);

        horizontalLayout_4->addItem(horizontalSpacer1);

        kcfg_contactListIconRounded = new QCheckBox(AppearanceConfig_ContactList);
        kcfg_contactListIconRounded->setObjectName(QString::fromUtf8("kcfg_contactListIconRounded"));
        kcfg_contactListIconRounded->setEnabled(true);

        horizontalLayout_4->addWidget(kcfg_contactListIconRounded);


        verticalLayout->addLayout(horizontalLayout_4);

        kcfg_groupContactByGroup = new QCheckBox(AppearanceConfig_ContactList);
        kcfg_groupContactByGroup->setObjectName(QString::fromUtf8("kcfg_groupContactByGroup"));
        sizePolicy2.setHeightForWidth(kcfg_groupContactByGroup->sizePolicy().hasHeightForWidth());
        kcfg_groupContactByGroup->setSizePolicy(sizePolicy2);

        verticalLayout->addWidget(kcfg_groupContactByGroup);

        kcfg_showOfflineGrouped = new QCheckBox(AppearanceConfig_ContactList);
        kcfg_showOfflineGrouped->setObjectName(QString::fromUtf8("kcfg_showOfflineGrouped"));
        sizePolicy2.setHeightForWidth(kcfg_showOfflineGrouped->sizePolicy().hasHeightForWidth());
        kcfg_showOfflineGrouped->setSizePolicy(sizePolicy2);

        verticalLayout->addWidget(kcfg_showOfflineGrouped);

        kcfg_contactListTreeView = new QCheckBox(AppearanceConfig_ContactList);
        kcfg_contactListTreeView->setObjectName(QString::fromUtf8("kcfg_contactListTreeView"));
        sizePolicy2.setHeightForWidth(kcfg_contactListTreeView->sizePolicy().hasHeightForWidth());
        kcfg_contactListTreeView->setSizePolicy(sizePolicy2);

        verticalLayout->addWidget(kcfg_contactListTreeView);

        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setObjectName(QString::fromUtf8("horizontalLayout_2"));
        spacerItem = new QSpacerItem(16, 16, QSizePolicy::Fixed, QSizePolicy::Minimum);

        horizontalLayout_2->addItem(spacerItem);

        kcfg_contactListIndentContact = new QCheckBox(AppearanceConfig_ContactList);
        kcfg_contactListIndentContact->setObjectName(QString::fromUtf8("kcfg_contactListIndentContact"));
        kcfg_contactListIndentContact->setEnabled(true);
        QSizePolicy sizePolicy3(QSizePolicy::Minimum, QSizePolicy::Fixed);
        sizePolicy3.setHorizontalStretch(0);
        sizePolicy3.setVerticalStretch(0);
        sizePolicy3.setHeightForWidth(kcfg_contactListIndentContact->sizePolicy().hasHeightForWidth());
        kcfg_contactListIndentContact->setSizePolicy(sizePolicy3);

        horizontalLayout_2->addWidget(kcfg_contactListIndentContact);


        verticalLayout->addLayout(horizontalLayout_2);

        kcfg_contactListHideVerticalScrollBar = new QCheckBox(AppearanceConfig_ContactList);
        kcfg_contactListHideVerticalScrollBar->setObjectName(QString::fromUtf8("kcfg_contactListHideVerticalScrollBar"));
        sizePolicy2.setHeightForWidth(kcfg_contactListHideVerticalScrollBar->sizePolicy().hasHeightForWidth());
        kcfg_contactListHideVerticalScrollBar->setSizePolicy(sizePolicy2);

        verticalLayout->addWidget(kcfg_contactListHideVerticalScrollBar);

        kcfg_showIdentityIcons = new QCheckBox(AppearanceConfig_ContactList);
        kcfg_showIdentityIcons->setObjectName(QString::fromUtf8("kcfg_showIdentityIcons"));

        verticalLayout->addWidget(kcfg_showIdentityIcons);

        horizontalLayout_3 = new QHBoxLayout();
        horizontalLayout_3->setObjectName(QString::fromUtf8("horizontalLayout_3"));
        mEditTooltips = new QPushButton(AppearanceConfig_ContactList);
        mEditTooltips->setObjectName(QString::fromUtf8("mEditTooltips"));
        QSizePolicy sizePolicy4(QSizePolicy::Maximum, QSizePolicy::Fixed);
        sizePolicy4.setHorizontalStretch(0);
        sizePolicy4.setVerticalStretch(0);
        sizePolicy4.setHeightForWidth(mEditTooltips->sizePolicy().hasHeightForWidth());
        mEditTooltips->setSizePolicy(sizePolicy4);

        horizontalLayout_3->addWidget(mEditTooltips);

        spacerItem1 = new QSpacerItem(0, 16, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_3->addItem(spacerItem1);


        verticalLayout->addLayout(horizontalLayout_3);

        verticalSpacer = new QSpacerItem(20, 0, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout->addItem(verticalSpacer);

        QWidget::setTabOrder(kcfg_contactListIconMode, kcfg_groupContactByGroup);
        QWidget::setTabOrder(kcfg_groupContactByGroup, kcfg_contactListTreeView);
        QWidget::setTabOrder(kcfg_contactListTreeView, kcfg_contactListIndentContact);
        QWidget::setTabOrder(kcfg_contactListIndentContact, kcfg_contactListHideVerticalScrollBar);
        QWidget::setTabOrder(kcfg_contactListHideVerticalScrollBar, kcfg_showIdentityIcons);
        QWidget::setTabOrder(kcfg_showIdentityIcons, mEditTooltips);

        retranslateUi(AppearanceConfig_ContactList);
        QObject::connect(kcfg_contactListTreeView, SIGNAL(toggled(bool)), kcfg_contactListIndentContact, SLOT(setDisabled(bool)));
        QObject::connect(kcfg_contactListIconMode, SIGNAL(toggled(bool)), kcfg_contactListIconBorders, SLOT(setEnabled(bool)));
        QObject::connect(kcfg_contactListIconMode, SIGNAL(toggled(bool)), kcfg_contactListIconRounded, SLOT(setEnabled(bool)));

        QMetaObject::connectSlotsByName(AppearanceConfig_ContactList);
    } // setupUi

    void retranslateUi(QWidget *AppearanceConfig_ContactList)
    {
        AppearanceConfig_ContactList->setWindowTitle(tr2i18n("Contact List Appearance", 0));
        label_2->setText(tr2i18n("Group sorting:", 0));
        kcfg_contactListGroupSorting->clear();
        kcfg_contactListGroupSorting->insertItems(0, QStringList()
         << tr2i18n("Manual", 0)
         << tr2i18n("Name", 0)
        );
        label_3->setText(tr2i18n("Contact sorting:", 0));
        kcfg_contactListMetaContactSorting->clear();
        kcfg_contactListMetaContactSorting->insertItems(0, QStringList()
         << tr2i18n("Manual", 0)
         << tr2i18n("Name", 0)
         << tr2i18n("Status", 0)
        );
        kcfg_contactListIconMode->setText(tr2i18n("Use contact photos &when available", 0));
        kcfg_contactListIconBorders->setText(tr2i18n("Borders", 0));
        kcfg_contactListIconRounded->setText(tr2i18n("Rounded corners", 0));
        kcfg_groupContactByGroup->setText(tr2i18n("Arrange metacontacts by &group", 0));
        kcfg_showOfflineGrouped->setText(tr2i18n("Show offline contacts in a &separate group", 0));
        kcfg_contactListTreeView->setText(tr2i18n("Show tree &branch lines", 0));
        kcfg_contactListIndentContact->setText(tr2i18n("In&dent contacts", 0));
#ifndef UI_QT_NO_WHATSTHIS
        kcfg_contactListHideVerticalScrollBar->setWhatsThis(tr2i18n("<b>Always</b> disables the vertical scrollbar", 0));
#endif // QT_NO_WHATSTHIS
        kcfg_contactListHideVerticalScrollBar->setText(tr2i18n("&Hide vertical scrollbar", 0));
        kcfg_showIdentityIcons->setText(tr2i18n("Show identities in status bar instead of accounts", 0));
        mEditTooltips->setText(tr2i18n("Change &Tooltip Contents...", 0));
    } // retranslateUi

};

namespace Ui {
    class AppearanceConfig_ContactList: public Ui_AppearanceConfig_ContactList {};
} // namespace Ui

QT_END_NAMESPACE

#endif // APPEARANCECONFIG_CONTACTLIST_H

