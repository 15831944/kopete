#include <kdialog.h>
#include <klocale.h>

/********************************************************************************
** Form generated from reading UI file 'privacyrule.ui'
**
** Created by: Qt User Interface Compiler version 4.8.7
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_PRIVACYRULE_H
#define UI_PRIVACYRULE_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtGui/QApplication>
#include <QtGui/QButtonGroup>
#include <QtGui/QCheckBox>
#include <QtGui/QFrame>
#include <QtGui/QGridLayout>
#include <QtGui/QHeaderView>
#include <QtGui/QLabel>
#include <QtGui/QSpacerItem>
#include <QtGui/QVBoxLayout>
#include <QtGui/QWidget>
#include "kcombobox.h"

QT_BEGIN_NAMESPACE

class Ui_PrivacyRule
{
public:
    QVBoxLayout *vboxLayout;
    QGridLayout *gridLayout;
    QLabel *label_2;
    QVBoxLayout *vboxLayout1;
    QCheckBox *ck_messages;
    QCheckBox *ck_queries;
    QCheckBox *ck_presenceOut;
    QCheckBox *ck_presenceIn;
    KComboBox *cb_action;
    KComboBox *cb_type;
    QLabel *label;
    QSpacerItem *spacerItem;
    QSpacerItem *spacerItem1;
    KComboBox *cb_value;
    QFrame *line;

    void setupUi(QWidget *PrivacyRule)
    {
        if (PrivacyRule->objectName().isEmpty())
            PrivacyRule->setObjectName(QString::fromUtf8("PrivacyRule"));
        PrivacyRule->resize(365, 245);
        vboxLayout = new QVBoxLayout(PrivacyRule);
        vboxLayout->setSpacing(6);
        vboxLayout->setObjectName(QString::fromUtf8("vboxLayout"));
        vboxLayout->setContentsMargins(9, 9, 9, 9);
        gridLayout = new QGridLayout();
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        gridLayout->setHorizontalSpacing(6);
        gridLayout->setVerticalSpacing(6);
        gridLayout->setContentsMargins(0, 0, 0, 0);
        label_2 = new QLabel(PrivacyRule);
        label_2->setObjectName(QString::fromUtf8("label_2"));

        gridLayout->addWidget(label_2, 2, 0, 1, 1);

        vboxLayout1 = new QVBoxLayout();
        vboxLayout1->setSpacing(6);
        vboxLayout1->setObjectName(QString::fromUtf8("vboxLayout1"));
        vboxLayout1->setContentsMargins(0, 0, 0, 0);
        ck_messages = new QCheckBox(PrivacyRule);
        ck_messages->setObjectName(QString::fromUtf8("ck_messages"));

        vboxLayout1->addWidget(ck_messages);

        ck_queries = new QCheckBox(PrivacyRule);
        ck_queries->setObjectName(QString::fromUtf8("ck_queries"));

        vboxLayout1->addWidget(ck_queries);

        ck_presenceOut = new QCheckBox(PrivacyRule);
        ck_presenceOut->setObjectName(QString::fromUtf8("ck_presenceOut"));

        vboxLayout1->addWidget(ck_presenceOut);

        ck_presenceIn = new QCheckBox(PrivacyRule);
        ck_presenceIn->setObjectName(QString::fromUtf8("ck_presenceIn"));

        vboxLayout1->addWidget(ck_presenceIn);


        gridLayout->addLayout(vboxLayout1, 2, 2, 2, 1);

        cb_action = new KComboBox(PrivacyRule);
        cb_action->setObjectName(QString::fromUtf8("cb_action"));

        gridLayout->addWidget(cb_action, 2, 1, 1, 1);

        cb_type = new KComboBox(PrivacyRule);
        cb_type->setObjectName(QString::fromUtf8("cb_type"));

        gridLayout->addWidget(cb_type, 0, 1, 1, 1);

        label = new QLabel(PrivacyRule);
        label->setObjectName(QString::fromUtf8("label"));

        gridLayout->addWidget(label, 0, 0, 1, 1);

        spacerItem = new QSpacerItem(20, 61, QSizePolicy::Minimum, QSizePolicy::Expanding);

        gridLayout->addItem(spacerItem, 3, 0, 1, 1);

        spacerItem1 = new QSpacerItem(20, 51, QSizePolicy::Minimum, QSizePolicy::Expanding);

        gridLayout->addItem(spacerItem1, 3, 1, 1, 1);

        cb_value = new KComboBox(PrivacyRule);
        cb_value->setObjectName(QString::fromUtf8("cb_value"));
        cb_value->setEditable(true);

        gridLayout->addWidget(cb_value, 0, 2, 1, 1);

        line = new QFrame(PrivacyRule);
        line->setObjectName(QString::fromUtf8("line"));
        line->setFrameShape(QFrame::HLine);
        line->setFrameShadow(QFrame::Sunken);

        gridLayout->addWidget(line, 1, 0, 1, 3);


        vboxLayout->addLayout(gridLayout);


        retranslateUi(PrivacyRule);

        QMetaObject::connectSlotsByName(PrivacyRule);
    } // setupUi

    void retranslateUi(QWidget *PrivacyRule)
    {
        PrivacyRule->setWindowTitle(tr2i18n("Edit Privacy Rule", 0));
        label_2->setText(tr2i18n("Then:", 0));
        ck_messages->setText(tr2i18n("Messages", 0));
        ck_queries->setText(tr2i18n("Queries", 0));
        ck_presenceOut->setText(tr2i18n("Outgoing presence", 0));
        ck_presenceIn->setText(tr2i18n("Incoming presence", 0));
        cb_action->clear();
        cb_action->insertItems(0, QStringList()
         << tr2i18n("Deny", 0)
         << tr2i18n("Allow", 0)
        );
        cb_type->clear();
        cb_type->insertItems(0, QStringList()
         << tr2i18n("JID", 0)
         << tr2i18n("Group", 0)
         << tr2i18n("Subscription", 0)
         << tr2i18n("*", 0)
        );
        label->setText(tr2i18n("If:", 0));
    } // retranslateUi

};

namespace Ui {
    class PrivacyRule: public Ui_PrivacyRule {};
} // namespace Ui

QT_END_NAMESPACE

#endif // PRIVACYRULE_H

