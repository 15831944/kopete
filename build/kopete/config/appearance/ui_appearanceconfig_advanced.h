#include <kdialog.h>
#include <klocale.h>

/********************************************************************************
** Form generated from reading UI file 'appearanceconfig_advanced.ui'
**
** Created by: Qt User Interface Compiler version 4.8.7
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_APPEARANCECONFIG_ADVANCED_H
#define UI_APPEARANCECONFIG_ADVANCED_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtGui/QApplication>
#include <QtGui/QButtonGroup>
#include <QtGui/QCheckBox>
#include <QtGui/QFormLayout>
#include <QtGui/QGroupBox>
#include <QtGui/QHBoxLayout>
#include <QtGui/QHeaderView>
#include <QtGui/QLabel>
#include <QtGui/QRadioButton>
#include <QtGui/QSpacerItem>
#include <QtGui/QSpinBox>
#include <QtGui/QVBoxLayout>
#include <QtGui/QWidget>
#include "kbuttongroup.h"

QT_BEGIN_NAMESPACE

class Ui_AppearanceConfig_Advanced
{
public:
    QVBoxLayout *verticalLayout_3;
    QGroupBox *groupBox_3;
    QFormLayout *formLayout;
    QCheckBox *kcfg_contactListAnimateChange;
    QCheckBox *kcfg_contactListFading;
    QCheckBox *kcfg_contactListFolding;
    QGroupBox *groupBox_4;
    QFormLayout *formLayout_2;
    QCheckBox *kcfg_contactListAutoHide;
    QCheckBox *kcfg_contactListAutoHideVScroll;
    QHBoxLayout *hboxLayout;
    QSpacerItem *spacerItem;
    QSpinBox *kcfg_contactListAutoHideTimeout;
    QLabel *textLabel1;
    KButtonGroup *kcfg_contactListResizeAnchor;
    QVBoxLayout *verticalLayout;
    QRadioButton *top;
    QRadioButton *bottom;
    QSpacerItem *spacerItem1;

    void setupUi(QWidget *AppearanceConfig_Advanced)
    {
        if (AppearanceConfig_Advanced->objectName().isEmpty())
            AppearanceConfig_Advanced->setObjectName(QString::fromUtf8("AppearanceConfig_Advanced"));
        AppearanceConfig_Advanced->resize(585, 396);
        verticalLayout_3 = new QVBoxLayout(AppearanceConfig_Advanced);
        verticalLayout_3->setObjectName(QString::fromUtf8("verticalLayout_3"));
        groupBox_3 = new QGroupBox(AppearanceConfig_Advanced);
        groupBox_3->setObjectName(QString::fromUtf8("groupBox_3"));
        QSizePolicy sizePolicy(QSizePolicy::Preferred, QSizePolicy::Preferred);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(groupBox_3->sizePolicy().hasHeightForWidth());
        groupBox_3->setSizePolicy(sizePolicy);
        formLayout = new QFormLayout(groupBox_3);
        formLayout->setObjectName(QString::fromUtf8("formLayout"));
        kcfg_contactListAnimateChange = new QCheckBox(groupBox_3);
        kcfg_contactListAnimateChange->setObjectName(QString::fromUtf8("kcfg_contactListAnimateChange"));
        QSizePolicy sizePolicy1(QSizePolicy::Preferred, QSizePolicy::Fixed);
        sizePolicy1.setHorizontalStretch(0);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(kcfg_contactListAnimateChange->sizePolicy().hasHeightForWidth());
        kcfg_contactListAnimateChange->setSizePolicy(sizePolicy1);

        formLayout->setWidget(0, QFormLayout::LabelRole, kcfg_contactListAnimateChange);

        kcfg_contactListFading = new QCheckBox(groupBox_3);
        kcfg_contactListFading->setObjectName(QString::fromUtf8("kcfg_contactListFading"));
        sizePolicy1.setHeightForWidth(kcfg_contactListFading->sizePolicy().hasHeightForWidth());
        kcfg_contactListFading->setSizePolicy(sizePolicy1);

        formLayout->setWidget(1, QFormLayout::LabelRole, kcfg_contactListFading);

        kcfg_contactListFolding = new QCheckBox(groupBox_3);
        kcfg_contactListFolding->setObjectName(QString::fromUtf8("kcfg_contactListFolding"));
        sizePolicy1.setHeightForWidth(kcfg_contactListFolding->sizePolicy().hasHeightForWidth());
        kcfg_contactListFolding->setSizePolicy(sizePolicy1);

        formLayout->setWidget(2, QFormLayout::LabelRole, kcfg_contactListFolding);


        verticalLayout_3->addWidget(groupBox_3);

        groupBox_4 = new QGroupBox(AppearanceConfig_Advanced);
        groupBox_4->setObjectName(QString::fromUtf8("groupBox_4"));
        formLayout_2 = new QFormLayout(groupBox_4);
        formLayout_2->setObjectName(QString::fromUtf8("formLayout_2"));
        kcfg_contactListAutoHide = new QCheckBox(groupBox_4);
        kcfg_contactListAutoHide->setObjectName(QString::fromUtf8("kcfg_contactListAutoHide"));
        sizePolicy1.setHeightForWidth(kcfg_contactListAutoHide->sizePolicy().hasHeightForWidth());
        kcfg_contactListAutoHide->setSizePolicy(sizePolicy1);

        formLayout_2->setWidget(0, QFormLayout::LabelRole, kcfg_contactListAutoHide);

        kcfg_contactListAutoHideVScroll = new QCheckBox(groupBox_4);
        kcfg_contactListAutoHideVScroll->setObjectName(QString::fromUtf8("kcfg_contactListAutoHideVScroll"));
        sizePolicy1.setHeightForWidth(kcfg_contactListAutoHideVScroll->sizePolicy().hasHeightForWidth());
        kcfg_contactListAutoHideVScroll->setSizePolicy(sizePolicy1);

        formLayout_2->setWidget(1, QFormLayout::LabelRole, kcfg_contactListAutoHideVScroll);

        hboxLayout = new QHBoxLayout();
#ifndef UI_Q_OS_MAC
        hboxLayout->setSpacing(6);
#endif
        hboxLayout->setContentsMargins(0, 0, 0, 0);
        hboxLayout->setObjectName(QString::fromUtf8("hboxLayout"));
        spacerItem = new QSpacerItem(16, 16, QSizePolicy::Fixed, QSizePolicy::Minimum);

        hboxLayout->addItem(spacerItem);

        kcfg_contactListAutoHideTimeout = new QSpinBox(groupBox_4);
        kcfg_contactListAutoHideTimeout->setObjectName(QString::fromUtf8("kcfg_contactListAutoHideTimeout"));
        kcfg_contactListAutoHideTimeout->setEnabled(true);
        QSizePolicy sizePolicy2(QSizePolicy::Maximum, QSizePolicy::Fixed);
        sizePolicy2.setHorizontalStretch(0);
        sizePolicy2.setVerticalStretch(0);
        sizePolicy2.setHeightForWidth(kcfg_contactListAutoHideTimeout->sizePolicy().hasHeightForWidth());
        kcfg_contactListAutoHideTimeout->setSizePolicy(sizePolicy2);
        kcfg_contactListAutoHideTimeout->setMinimum(3);
        kcfg_contactListAutoHideTimeout->setMaximum(300);
        kcfg_contactListAutoHideTimeout->setValue(30);

        hboxLayout->addWidget(kcfg_contactListAutoHideTimeout);

        textLabel1 = new QLabel(groupBox_4);
        textLabel1->setObjectName(QString::fromUtf8("textLabel1"));
        textLabel1->setEnabled(true);

        hboxLayout->addWidget(textLabel1);


        formLayout_2->setLayout(2, QFormLayout::LabelRole, hboxLayout);


        verticalLayout_3->addWidget(groupBox_4);

        kcfg_contactListResizeAnchor = new KButtonGroup(AppearanceConfig_Advanced);
        kcfg_contactListResizeAnchor->setObjectName(QString::fromUtf8("kcfg_contactListResizeAnchor"));
        kcfg_contactListResizeAnchor->setCheckable(true);
        verticalLayout = new QVBoxLayout(kcfg_contactListResizeAnchor);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        top = new QRadioButton(kcfg_contactListResizeAnchor);
        top->setObjectName(QString::fromUtf8("top"));

        verticalLayout->addWidget(top);

        bottom = new QRadioButton(kcfg_contactListResizeAnchor);
        bottom->setObjectName(QString::fromUtf8("bottom"));

        verticalLayout->addWidget(bottom);


        verticalLayout_3->addWidget(kcfg_contactListResizeAnchor);

        spacerItem1 = new QSpacerItem(20, 0, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout_3->addItem(spacerItem1);

        QWidget::setTabOrder(kcfg_contactListAnimateChange, kcfg_contactListFading);
        QWidget::setTabOrder(kcfg_contactListFading, kcfg_contactListFolding);
        QWidget::setTabOrder(kcfg_contactListFolding, kcfg_contactListAutoHide);
        QWidget::setTabOrder(kcfg_contactListAutoHide, kcfg_contactListAutoHideVScroll);
        QWidget::setTabOrder(kcfg_contactListAutoHideVScroll, kcfg_contactListAutoHideTimeout);

        retranslateUi(AppearanceConfig_Advanced);

        QMetaObject::connectSlotsByName(AppearanceConfig_Advanced);
    } // setupUi

    void retranslateUi(QWidget *AppearanceConfig_Advanced)
    {
        AppearanceConfig_Advanced->setWindowTitle(tr2i18n("Contact List Advanced", 0));
        groupBox_3->setTitle(tr2i18n("Contact List Animations", 0));
        kcfg_contactListAnimateChange->setText(tr2i18n("A&nimate changes to contact list items", 0));
        kcfg_contactListFading->setText(tr2i18n("Fade in / out contacts as the&y appear / disappear", 0));
        kcfg_contactListFolding->setText(tr2i18n("Fo&ld in / out contacts as they appear / disappear", 0));
        groupBox_4->setTitle(tr2i18n("Contact List Auto-Hide", 0));
        kcfg_contactListAutoHide->setText(tr2i18n("A&uto-hide contact list", 0));
#ifndef UI_QT_NO_WHATSTHIS
        kcfg_contactListAutoHideVScroll->setWhatsThis(tr2i18n("Since vertical scrollbars occupy space, we introduced this auto-hide feature. The vertical scrollbar will not be available until you move your mouse over the contact list.<br>\n"
"(<b>Disabled</b> if \"<b>Hide vertical scrollbar</b>\" option is selected above.)", 0));
#endif // QT_NO_WHATSTHIS
        kcfg_contactListAutoHideVScroll->setText(tr2i18n("Auto-hide vertical &scrollbar", 0));
#ifndef UI_QT_NO_WHATSTHIS
        kcfg_contactListAutoHideTimeout->setWhatsThis(tr2i18n("The timeout value for both contact list and scrollbar auto-hiding.", 0));
#endif // QT_NO_WHATSTHIS
        kcfg_contactListAutoHideTimeout->setSuffix(tr2i18n(" Sec", 0));
        textLabel1->setText(tr2i18n("after the cursor leaves the window", 0));
        kcfg_contactListResizeAnchor->setTitle(tr2i18n("&Automatically resize contact list window to fit number of contacts onscreen", 0));
        top->setText(tr2i18n("Anchor resizing at &top", 0));
        bottom->setText(tr2i18n("Anchor resizing at &bottom", 0));
    } // retranslateUi

};

namespace Ui {
    class AppearanceConfig_Advanced: public Ui_AppearanceConfig_Advanced {};
} // namespace Ui

QT_END_NAMESPACE

#endif // APPEARANCECONFIG_ADVANCED_H

