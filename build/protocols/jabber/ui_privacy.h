#include <kdialog.h>
#include <klocale.h>

/********************************************************************************
** Form generated from reading UI file 'privacy.ui'
**
** Created by: Qt User Interface Compiler version 4.8.7
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_PRIVACY_H
#define UI_PRIVACY_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtGui/QApplication>
#include <QtGui/QButtonGroup>
#include <QtGui/QCheckBox>
#include <QtGui/QGridLayout>
#include <QtGui/QGroupBox>
#include <QtGui/QHBoxLayout>
#include <QtGui/QHeaderView>
#include <QtGui/QLabel>
#include <QtGui/QListView>
#include <QtGui/QSpacerItem>
#include <QtGui/QVBoxLayout>
#include <QtGui/QWidget>
#include "kcombobox.h"
#include "kpushbutton.h"

QT_BEGIN_NAMESPACE

class Ui_Privacy
{
public:
    QVBoxLayout *vboxLayout;
    QGroupBox *gb_settings;
    QGridLayout *gridLayout;
    QSpacerItem *spacerItem;
    QSpacerItem *spacerItem1;
    KComboBox *cb_default;
    QLabel *label_2;
    QLabel *label;
    KComboBox *cb_active;
    QGroupBox *gb_listSettings;
    QVBoxLayout *vboxLayout1;
    QHBoxLayout *hboxLayout;
    QLabel *label_3;
    KComboBox *cb_lists;
    QSpacerItem *spacerItem2;
    KPushButton *pb_newList;
    KPushButton *pb_deleteList;
    QCheckBox *ck_autoActivate;
    QGroupBox *gb_rules;
    QVBoxLayout *vboxLayout2;
    QListView *lv_rules;
    QHBoxLayout *hboxLayout1;
    KPushButton *pb_add;
    KPushButton *pb_remove;
    KPushButton *pb_up;
    KPushButton *pb_down;
    KPushButton *pb_edit;
    QSpacerItem *spacerItem3;
    KPushButton *pb_apply;

    void setupUi(QWidget *Privacy)
    {
        if (Privacy->objectName().isEmpty())
            Privacy->setObjectName(QString::fromUtf8("Privacy"));
        Privacy->resize(732, 572);
        vboxLayout = new QVBoxLayout(Privacy);
        vboxLayout->setSpacing(6);
        vboxLayout->setObjectName(QString::fromUtf8("vboxLayout"));
        vboxLayout->setContentsMargins(9, 9, 9, 9);
        gb_settings = new QGroupBox(Privacy);
        gb_settings->setObjectName(QString::fromUtf8("gb_settings"));
        gridLayout = new QGridLayout(gb_settings);
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        gridLayout->setHorizontalSpacing(6);
        gridLayout->setVerticalSpacing(6);
        gridLayout->setContentsMargins(9, 9, 9, 9);
        spacerItem = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        gridLayout->addItem(spacerItem, 1, 2, 1, 1);

        spacerItem1 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        gridLayout->addItem(spacerItem1, 0, 2, 1, 1);

        cb_default = new KComboBox(gb_settings);
        cb_default->setObjectName(QString::fromUtf8("cb_default"));
        cb_default->setSizeAdjustPolicy(QComboBox::AdjustToContentsOnFirstShow);

        gridLayout->addWidget(cb_default, 1, 1, 1, 1);

        label_2 = new QLabel(gb_settings);
        label_2->setObjectName(QString::fromUtf8("label_2"));

        gridLayout->addWidget(label_2, 1, 0, 1, 1);

        label = new QLabel(gb_settings);
        label->setObjectName(QString::fromUtf8("label"));

        gridLayout->addWidget(label, 0, 0, 1, 1);

        cb_active = new KComboBox(gb_settings);
        cb_active->setObjectName(QString::fromUtf8("cb_active"));
        cb_active->setSizeAdjustPolicy(QComboBox::AdjustToContentsOnFirstShow);

        gridLayout->addWidget(cb_active, 0, 1, 1, 1);


        vboxLayout->addWidget(gb_settings);

        gb_listSettings = new QGroupBox(Privacy);
        gb_listSettings->setObjectName(QString::fromUtf8("gb_listSettings"));
        vboxLayout1 = new QVBoxLayout(gb_listSettings);
        vboxLayout1->setSpacing(6);
        vboxLayout1->setObjectName(QString::fromUtf8("vboxLayout1"));
        vboxLayout1->setContentsMargins(9, 9, 9, 9);
        hboxLayout = new QHBoxLayout();
        hboxLayout->setSpacing(6);
        hboxLayout->setObjectName(QString::fromUtf8("hboxLayout"));
        hboxLayout->setContentsMargins(0, 0, 0, 0);
        label_3 = new QLabel(gb_listSettings);
        label_3->setObjectName(QString::fromUtf8("label_3"));

        hboxLayout->addWidget(label_3);

        cb_lists = new KComboBox(gb_listSettings);
        cb_lists->setObjectName(QString::fromUtf8("cb_lists"));
        cb_lists->setSizeAdjustPolicy(QComboBox::AdjustToContentsOnFirstShow);

        hboxLayout->addWidget(cb_lists);

        spacerItem2 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        hboxLayout->addItem(spacerItem2);

        pb_newList = new KPushButton(gb_listSettings);
        pb_newList->setObjectName(QString::fromUtf8("pb_newList"));

        hboxLayout->addWidget(pb_newList);

        pb_deleteList = new KPushButton(gb_listSettings);
        pb_deleteList->setObjectName(QString::fromUtf8("pb_deleteList"));

        hboxLayout->addWidget(pb_deleteList);


        vboxLayout1->addLayout(hboxLayout);

        ck_autoActivate = new QCheckBox(gb_listSettings);
        ck_autoActivate->setObjectName(QString::fromUtf8("ck_autoActivate"));

        vboxLayout1->addWidget(ck_autoActivate);

        gb_rules = new QGroupBox(gb_listSettings);
        gb_rules->setObjectName(QString::fromUtf8("gb_rules"));
        vboxLayout2 = new QVBoxLayout(gb_rules);
        vboxLayout2->setSpacing(6);
        vboxLayout2->setObjectName(QString::fromUtf8("vboxLayout2"));
        vboxLayout2->setContentsMargins(9, 9, 9, 9);
        lv_rules = new QListView(gb_rules);
        lv_rules->setObjectName(QString::fromUtf8("lv_rules"));

        vboxLayout2->addWidget(lv_rules);

        hboxLayout1 = new QHBoxLayout();
        hboxLayout1->setSpacing(6);
        hboxLayout1->setObjectName(QString::fromUtf8("hboxLayout1"));
        hboxLayout1->setContentsMargins(0, 0, 0, 0);
        pb_add = new KPushButton(gb_rules);
        pb_add->setObjectName(QString::fromUtf8("pb_add"));

        hboxLayout1->addWidget(pb_add);

        pb_remove = new KPushButton(gb_rules);
        pb_remove->setObjectName(QString::fromUtf8("pb_remove"));

        hboxLayout1->addWidget(pb_remove);

        pb_up = new KPushButton(gb_rules);
        pb_up->setObjectName(QString::fromUtf8("pb_up"));

        hboxLayout1->addWidget(pb_up);

        pb_down = new KPushButton(gb_rules);
        pb_down->setObjectName(QString::fromUtf8("pb_down"));

        hboxLayout1->addWidget(pb_down);

        pb_edit = new KPushButton(gb_rules);
        pb_edit->setObjectName(QString::fromUtf8("pb_edit"));

        hboxLayout1->addWidget(pb_edit);

        spacerItem3 = new QSpacerItem(111, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        hboxLayout1->addItem(spacerItem3);

        pb_apply = new KPushButton(gb_rules);
        pb_apply->setObjectName(QString::fromUtf8("pb_apply"));

        hboxLayout1->addWidget(pb_apply);


        vboxLayout2->addLayout(hboxLayout1);


        vboxLayout1->addWidget(gb_rules);


        vboxLayout->addWidget(gb_listSettings);

        QWidget::setTabOrder(cb_active, cb_default);
        QWidget::setTabOrder(cb_default, cb_lists);
        QWidget::setTabOrder(cb_lists, pb_newList);
        QWidget::setTabOrder(pb_newList, pb_deleteList);
        QWidget::setTabOrder(pb_deleteList, ck_autoActivate);
        QWidget::setTabOrder(ck_autoActivate, lv_rules);
        QWidget::setTabOrder(lv_rules, pb_add);
        QWidget::setTabOrder(pb_add, pb_remove);
        QWidget::setTabOrder(pb_remove, pb_up);
        QWidget::setTabOrder(pb_up, pb_down);
        QWidget::setTabOrder(pb_down, pb_edit);
        QWidget::setTabOrder(pb_edit, pb_apply);

        retranslateUi(Privacy);

        QMetaObject::connectSlotsByName(Privacy);
    } // setupUi

    void retranslateUi(QWidget *Privacy)
    {
        gb_settings->setTitle(tr2i18n("Settings", 0));
        label_2->setText(tr2i18n("Default list (all sessions):", 0));
        label->setText(tr2i18n("Active list (current session):", 0));
        gb_listSettings->setTitle(tr2i18n("List Editor", 0));
        label_3->setText(tr2i18n("List:", 0));
        pb_newList->setText(tr2i18n("New List...", 0));
        pb_deleteList->setText(tr2i18n("Delete List", 0));
        ck_autoActivate->setText(tr2i18n("Automatically activate this list on connect", 0));
        gb_rules->setTitle(tr2i18n("Rules", 0));
        pb_add->setText(tr2i18n("Add...", 0));
        pb_remove->setText(tr2i18n("Remove", 0));
        pb_up->setText(tr2i18n("Up", 0));
        pb_down->setText(tr2i18n("Down", 0));
        pb_edit->setText(tr2i18n("Edit...", 0));
        pb_apply->setText(tr2i18n("Apply", 0));
        Q_UNUSED(Privacy);
    } // retranslateUi

};

namespace Ui {
    class Privacy: public Ui_Privacy {};
} // namespace Ui

QT_END_NAMESPACE

#endif // PRIVACY_H

