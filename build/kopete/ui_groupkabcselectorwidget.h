#include <kdialog.h>
#include <klocale.h>

/********************************************************************************
** Form generated from reading UI file 'groupkabcselectorwidget.ui'
**
** Created by: Qt User Interface Compiler version 4.8.7
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_GROUPKABCSELECTORWIDGET_H
#define UI_GROUPKABCSELECTORWIDGET_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtGui/QApplication>
#include <QtGui/QButtonGroup>
#include <QtGui/QComboBox>
#include <QtGui/QFormLayout>
#include <QtGui/QFrame>
#include <QtGui/QHeaderView>
#include <QtGui/QLabel>
#include <QtGui/QVBoxLayout>
#include <QtGui/QWidget>
#include "addressbooklinkwidget.h"

QT_BEGIN_NAMESPACE

class Ui_GroupKABCSelectorWidget
{
public:
    QVBoxLayout *verticalLayout;
    QFrame *line1;
    QFormLayout *formLayout;
    QLabel *groupLabel;
    QComboBox *groupCombo;
    QLabel *kabcLabel;
    Kopete::UI::AddressBookLinkWidget *widAddresseeLink;

    void setupUi(QWidget *GroupKABCSelectorWidget)
    {
        if (GroupKABCSelectorWidget->objectName().isEmpty())
            GroupKABCSelectorWidget->setObjectName(QString::fromUtf8("GroupKABCSelectorWidget"));
        GroupKABCSelectorWidget->resize(487, 80);
        verticalLayout = new QVBoxLayout(GroupKABCSelectorWidget);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        line1 = new QFrame(GroupKABCSelectorWidget);
        line1->setObjectName(QString::fromUtf8("line1"));
        line1->setFrameShape(QFrame::HLine);
        line1->setFrameShadow(QFrame::Sunken);
        line1->setFrameShape(QFrame::HLine);

        verticalLayout->addWidget(line1);

        formLayout = new QFormLayout();
        formLayout->setObjectName(QString::fromUtf8("formLayout"));
        groupLabel = new QLabel(GroupKABCSelectorWidget);
        groupLabel->setObjectName(QString::fromUtf8("groupLabel"));

        formLayout->setWidget(0, QFormLayout::LabelRole, groupLabel);

        groupCombo = new QComboBox(GroupKABCSelectorWidget);
        groupCombo->setObjectName(QString::fromUtf8("groupCombo"));

        formLayout->setWidget(0, QFormLayout::FieldRole, groupCombo);

        kabcLabel = new QLabel(GroupKABCSelectorWidget);
        kabcLabel->setObjectName(QString::fromUtf8("kabcLabel"));

        formLayout->setWidget(1, QFormLayout::LabelRole, kabcLabel);

        widAddresseeLink = new Kopete::UI::AddressBookLinkWidget(GroupKABCSelectorWidget);
        widAddresseeLink->setObjectName(QString::fromUtf8("widAddresseeLink"));

        formLayout->setWidget(1, QFormLayout::FieldRole, widAddresseeLink);


        verticalLayout->addLayout(formLayout);

#ifndef UI_QT_NO_SHORTCUT
        groupLabel->setBuddy(groupCombo);
#endif // QT_NO_SHORTCUT

        retranslateUi(GroupKABCSelectorWidget);

        QMetaObject::connectSlotsByName(GroupKABCSelectorWidget);
    } // setupUi

    void retranslateUi(QWidget *GroupKABCSelectorWidget)
    {
        groupLabel->setText(tr2i18n("&Group:", 0));
        kabcLabel->setText(tr2i18n("Address book entry:", 0));
        Q_UNUSED(GroupKABCSelectorWidget);
    } // retranslateUi

};

namespace Ui {
    class GroupKABCSelectorWidget: public Ui_GroupKABCSelectorWidget {};
} // namespace Ui

QT_END_NAMESPACE

#endif // GROUPKABCSELECTORWIDGET_H

