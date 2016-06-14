#include <kdialog.h>
#include <klocale.h>

/********************************************************************************
** Form generated from reading UI file 'gwprivacy.ui'
**
** Created by: Qt User Interface Compiler version 4.8.7
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_GWPRIVACY_H
#define UI_GWPRIVACY_H

#include <Qt3Support/Q3ListBox>
#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtGui/QApplication>
#include <QtGui/QButtonGroup>
#include <QtGui/QHBoxLayout>
#include <QtGui/QHeaderView>
#include <QtGui/QLabel>
#include <QtGui/QPushButton>
#include <QtGui/QSpacerItem>
#include <QtGui/QVBoxLayout>
#include <QtGui/QWidget>

QT_BEGIN_NAMESPACE

class Ui_GroupWisePrivacy
{
public:
    QVBoxLayout *vboxLayout;
    QLabel *textLabel1;
    QHBoxLayout *hboxLayout;
    QVBoxLayout *vboxLayout1;
    QLabel *textLabel2;
    Q3ListBox *allowList;
    QVBoxLayout *vboxLayout2;
    QSpacerItem *spacerItem;
    QPushButton *btnBlock;
    QPushButton *btnAllow;
    QSpacerItem *spacerItem1;
    QPushButton *btnAdd;
    QPushButton *btnRemove;
    QSpacerItem *spacerItem2;
    QVBoxLayout *vboxLayout3;
    QLabel *textLabel3;
    Q3ListBox *denyList;
    QLabel *status;

    void setupUi(QWidget *GroupWisePrivacy)
    {
        if (GroupWisePrivacy->objectName().isEmpty())
            GroupWisePrivacy->setObjectName(QString::fromUtf8("GroupWisePrivacy"));
        GroupWisePrivacy->resize(465, 314);
        vboxLayout = new QVBoxLayout(GroupWisePrivacy);
        vboxLayout->setSpacing(6);
        vboxLayout->setObjectName(QString::fromUtf8("vboxLayout"));
        vboxLayout->setContentsMargins(11, 11, 11, 11);
        textLabel1 = new QLabel(GroupWisePrivacy);
        textLabel1->setObjectName(QString::fromUtf8("textLabel1"));
        textLabel1->setWordWrap(false);

        vboxLayout->addWidget(textLabel1);

        hboxLayout = new QHBoxLayout();
        hboxLayout->setSpacing(6);
        hboxLayout->setObjectName(QString::fromUtf8("hboxLayout"));
        hboxLayout->setContentsMargins(0, 0, 0, 0);
        vboxLayout1 = new QVBoxLayout();
        vboxLayout1->setSpacing(6);
        vboxLayout1->setObjectName(QString::fromUtf8("vboxLayout1"));
        vboxLayout1->setContentsMargins(0, 0, 0, 0);
        textLabel2 = new QLabel(GroupWisePrivacy);
        textLabel2->setObjectName(QString::fromUtf8("textLabel2"));
        textLabel2->setWordWrap(false);

        vboxLayout1->addWidget(textLabel2);

        allowList = new Q3ListBox(GroupWisePrivacy);
        allowList->setObjectName(QString::fromUtf8("allowList"));

        vboxLayout1->addWidget(allowList);


        hboxLayout->addLayout(vboxLayout1);

        vboxLayout2 = new QVBoxLayout();
        vboxLayout2->setSpacing(6);
        vboxLayout2->setObjectName(QString::fromUtf8("vboxLayout2"));
        vboxLayout2->setContentsMargins(0, 0, 0, 0);
        spacerItem = new QSpacerItem(20, 21, QSizePolicy::Minimum, QSizePolicy::Expanding);

        vboxLayout2->addItem(spacerItem);

        btnBlock = new QPushButton(GroupWisePrivacy);
        btnBlock->setObjectName(QString::fromUtf8("btnBlock"));

        vboxLayout2->addWidget(btnBlock);

        btnAllow = new QPushButton(GroupWisePrivacy);
        btnAllow->setObjectName(QString::fromUtf8("btnAllow"));

        vboxLayout2->addWidget(btnAllow);

        spacerItem1 = new QSpacerItem(20, 53, QSizePolicy::Minimum, QSizePolicy::Expanding);

        vboxLayout2->addItem(spacerItem1);

        btnAdd = new QPushButton(GroupWisePrivacy);
        btnAdd->setObjectName(QString::fromUtf8("btnAdd"));

        vboxLayout2->addWidget(btnAdd);

        btnRemove = new QPushButton(GroupWisePrivacy);
        btnRemove->setObjectName(QString::fromUtf8("btnRemove"));

        vboxLayout2->addWidget(btnRemove);

        spacerItem2 = new QSpacerItem(20, 52, QSizePolicy::Minimum, QSizePolicy::Expanding);

        vboxLayout2->addItem(spacerItem2);


        hboxLayout->addLayout(vboxLayout2);

        vboxLayout3 = new QVBoxLayout();
        vboxLayout3->setSpacing(6);
        vboxLayout3->setObjectName(QString::fromUtf8("vboxLayout3"));
        vboxLayout3->setContentsMargins(0, 0, 0, 0);
        textLabel3 = new QLabel(GroupWisePrivacy);
        textLabel3->setObjectName(QString::fromUtf8("textLabel3"));
        textLabel3->setWordWrap(false);

        vboxLayout3->addWidget(textLabel3);

        denyList = new Q3ListBox(GroupWisePrivacy);
        denyList->setObjectName(QString::fromUtf8("denyList"));

        vboxLayout3->addWidget(denyList);


        hboxLayout->addLayout(vboxLayout3);


        vboxLayout->addLayout(hboxLayout);

        status = new QLabel(GroupWisePrivacy);
        status->setObjectName(QString::fromUtf8("status"));
        status->setWordWrap(false);

        vboxLayout->addWidget(status);

#ifndef UI_QT_NO_SHORTCUT
        textLabel2->setBuddy(allowList);
        textLabel3->setBuddy(denyList);
#endif // QT_NO_SHORTCUT

        retranslateUi(GroupWisePrivacy);

        QMetaObject::connectSlotsByName(GroupWisePrivacy);
    } // setupUi

    void retranslateUi(QWidget *GroupWisePrivacy)
    {
        textLabel1->setText(tr2i18n("Users who can see my online status and send me messages:", 0));
        textLabel2->setText(tr2i18n("A&llowed", 0));
        btnBlock->setText(tr2i18n("&Block >>", 0));
        btnAllow->setText(tr2i18n("<< Allo&w", 0));
        btnAdd->setText(tr2i18n("A&dd...", 0));
        btnRemove->setText(tr2i18n("&Remove", 0));
        textLabel3->setText(tr2i18n("Bloc&ked", 0));
        status->setText(QString());
        Q_UNUSED(GroupWisePrivacy);
    } // retranslateUi

};

namespace Ui {
    class GroupWisePrivacy: public Ui_GroupWisePrivacy {};
} // namespace Ui

QT_END_NAMESPACE

#endif // GWPRIVACY_H

