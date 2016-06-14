#include <kdialog.h>
#include <klocale.h>

/********************************************************************************
** Form generated from reading UI file 'gwchatsearch.ui'
**
** Created by: Qt User Interface Compiler version 4.8.7
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_GWCHATSEARCH_H
#define UI_GWCHATSEARCH_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtGui/QApplication>
#include <QtGui/QButtonGroup>
#include <QtGui/QHBoxLayout>
#include <QtGui/QHeaderView>
#include <QtGui/QPushButton>
#include <QtGui/QSpacerItem>
#include <QtGui/QTreeWidget>
#include <QtGui/QVBoxLayout>
#include <QtGui/QWidget>
#include "kpushbutton.h"

QT_BEGIN_NAMESPACE

class Ui_GroupWiseChatSearch
{
public:
    QVBoxLayout *vboxLayout;
    QTreeWidget *chatrooms;
    QHBoxLayout *hboxLayout;
    KPushButton *btnProperties;
    QSpacerItem *spacerItem;
    QPushButton *btnRefresh;

    void setupUi(QWidget *GroupWiseChatSearch)
    {
        if (GroupWiseChatSearch->objectName().isEmpty())
            GroupWiseChatSearch->setObjectName(QString::fromUtf8("GroupWiseChatSearch"));
        GroupWiseChatSearch->resize(579, 480);
        vboxLayout = new QVBoxLayout(GroupWiseChatSearch);
        vboxLayout->setSpacing(6);
        vboxLayout->setObjectName(QString::fromUtf8("vboxLayout"));
        vboxLayout->setContentsMargins(11, 11, 11, 11);
        chatrooms = new QTreeWidget(GroupWiseChatSearch);
        chatrooms->setObjectName(QString::fromUtf8("chatrooms"));
        chatrooms->setAllColumnsShowFocus(true);

        vboxLayout->addWidget(chatrooms);

        hboxLayout = new QHBoxLayout();
        hboxLayout->setSpacing(6);
        hboxLayout->setObjectName(QString::fromUtf8("hboxLayout"));
        hboxLayout->setContentsMargins(0, 0, 0, 0);
        btnProperties = new KPushButton(GroupWiseChatSearch);
        btnProperties->setObjectName(QString::fromUtf8("btnProperties"));

        hboxLayout->addWidget(btnProperties);

        spacerItem = new QSpacerItem(340, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        hboxLayout->addItem(spacerItem);

        btnRefresh = new QPushButton(GroupWiseChatSearch);
        btnRefresh->setObjectName(QString::fromUtf8("btnRefresh"));

        hboxLayout->addWidget(btnRefresh);


        vboxLayout->addLayout(hboxLayout);


        retranslateUi(GroupWiseChatSearch);

        QMetaObject::connectSlotsByName(GroupWiseChatSearch);
    } // setupUi

    void retranslateUi(QWidget *GroupWiseChatSearch)
    {
        btnRefresh->setText(tr2i18n("&Refresh", 0));
        Q_UNUSED(GroupWiseChatSearch);
    } // retranslateUi

};

namespace Ui {
    class GroupWiseChatSearch: public Ui_GroupWiseChatSearch {};
} // namespace Ui

QT_END_NAMESPACE

#endif // GWCHATSEARCH_H

