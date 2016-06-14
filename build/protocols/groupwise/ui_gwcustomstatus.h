#include <kdialog.h>
#include <klocale.h>

/********************************************************************************
** Form generated from reading UI file 'gwcustomstatus.ui'
**
** Created by: Qt User Interface Compiler version 4.8.7
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_GWCUSTOMSTATUS_H
#define UI_GWCUSTOMSTATUS_H

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

QT_BEGIN_NAMESPACE

class Ui_GroupWiseCustomStatusWidget
{
public:
    QHBoxLayout *hboxLayout;
    QTreeWidget *m_list;
    QVBoxLayout *vboxLayout;
    QPushButton *m_btnAdd;
    QPushButton *m_btnEdit;
    QPushButton *m_btnRemove;
    QSpacerItem *spacerItem;

    void setupUi(QWidget *GroupWiseCustomStatusWidget)
    {
        if (GroupWiseCustomStatusWidget->objectName().isEmpty())
            GroupWiseCustomStatusWidget->setObjectName(QString::fromUtf8("GroupWiseCustomStatusWidget"));
        GroupWiseCustomStatusWidget->resize(343, 215);
        hboxLayout = new QHBoxLayout(GroupWiseCustomStatusWidget);
#ifndef UI_Q_OS_MAC
        hboxLayout->setSpacing(6);
#endif
        hboxLayout->setContentsMargins(11, 11, 11, 11);
        hboxLayout->setObjectName(QString::fromUtf8("hboxLayout"));
        m_list = new QTreeWidget(GroupWiseCustomStatusWidget);
        m_list->setObjectName(QString::fromUtf8("m_list"));
        m_list->setAllColumnsShowFocus(true);

        hboxLayout->addWidget(m_list);

        vboxLayout = new QVBoxLayout();
#ifndef UI_Q_OS_MAC
        vboxLayout->setSpacing(6);
#endif
        vboxLayout->setContentsMargins(0, 0, 0, 0);
        vboxLayout->setObjectName(QString::fromUtf8("vboxLayout"));
        m_btnAdd = new QPushButton(GroupWiseCustomStatusWidget);
        m_btnAdd->setObjectName(QString::fromUtf8("m_btnAdd"));

        vboxLayout->addWidget(m_btnAdd);

        m_btnEdit = new QPushButton(GroupWiseCustomStatusWidget);
        m_btnEdit->setObjectName(QString::fromUtf8("m_btnEdit"));

        vboxLayout->addWidget(m_btnEdit);

        m_btnRemove = new QPushButton(GroupWiseCustomStatusWidget);
        m_btnRemove->setObjectName(QString::fromUtf8("m_btnRemove"));

        vboxLayout->addWidget(m_btnRemove);

        spacerItem = new QSpacerItem(20, 41, QSizePolicy::Minimum, QSizePolicy::Expanding);

        vboxLayout->addItem(spacerItem);


        hboxLayout->addLayout(vboxLayout);


        retranslateUi(GroupWiseCustomStatusWidget);

        QMetaObject::connectSlotsByName(GroupWiseCustomStatusWidget);
    } // setupUi

    void retranslateUi(QWidget *GroupWiseCustomStatusWidget)
    {
        m_btnAdd->setText(tr2i18n("&Add", 0));
        m_btnEdit->setText(tr2i18n("&Edit", 0));
        m_btnRemove->setText(tr2i18n("&Remove", 0));
        Q_UNUSED(GroupWiseCustomStatusWidget);
    } // retranslateUi

};

namespace Ui {
    class GroupWiseCustomStatusWidget: public Ui_GroupWiseCustomStatusWidget {};
} // namespace Ui

QT_END_NAMESPACE

#endif // GWCUSTOMSTATUS_H

