#include <kdialog.h>
#include <klocale.h>

/********************************************************************************
** Form generated from reading UI file 'contactlistlayoutwidget.ui'
**
** Created by: Qt User Interface Compiler version 4.8.7
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_CONTACTLISTLAYOUTWIDGET_H
#define UI_CONTACTLISTLAYOUTWIDGET_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtGui/QApplication>
#include <QtGui/QButtonGroup>
#include <QtGui/QComboBox>
#include <QtGui/QHBoxLayout>
#include <QtGui/QHeaderView>
#include <QtGui/QLabel>
#include <QtGui/QPushButton>
#include <QtGui/QSpacerItem>
#include <QtGui/QVBoxLayout>
#include <QtGui/QWidget>
#include "contactlistlayouteditwidget.h"
#include "layout/TokenPool.h"

QT_BEGIN_NAMESPACE

class Ui_ContactListLayoutWidget
{
public:
    QVBoxLayout *verticalLayout;
    QHBoxLayout *horizontalLayout;
    QLabel *label;
    QComboBox *layoutComboBox;
    QSpacerItem *horizontalSpacer;
    QPushButton *removeButton;
    QPushButton *previewButton;
    TokenPool *tokenPool;
    ContactList::LayoutEditWidget *layoutEdit;

    void setupUi(QWidget *ContactListLayoutWidget)
    {
        if (ContactListLayoutWidget->objectName().isEmpty())
            ContactListLayoutWidget->setObjectName(QString::fromUtf8("ContactListLayoutWidget"));
        ContactListLayoutWidget->resize(478, 331);
        verticalLayout = new QVBoxLayout(ContactListLayoutWidget);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        label = new QLabel(ContactListLayoutWidget);
        label->setObjectName(QString::fromUtf8("label"));
        label->setAlignment(Qt::AlignCenter);

        horizontalLayout->addWidget(label);

        layoutComboBox = new QComboBox(ContactListLayoutWidget);
        layoutComboBox->setObjectName(QString::fromUtf8("layoutComboBox"));

        horizontalLayout->addWidget(layoutComboBox);

        horizontalSpacer = new QSpacerItem(0, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout->addItem(horizontalSpacer);

        removeButton = new QPushButton(ContactListLayoutWidget);
        removeButton->setObjectName(QString::fromUtf8("removeButton"));

        horizontalLayout->addWidget(removeButton);

        previewButton = new QPushButton(ContactListLayoutWidget);
        previewButton->setObjectName(QString::fromUtf8("previewButton"));

        horizontalLayout->addWidget(previewButton);


        verticalLayout->addLayout(horizontalLayout);

        tokenPool = new TokenPool(ContactListLayoutWidget);
        tokenPool->setObjectName(QString::fromUtf8("tokenPool"));
        QSizePolicy sizePolicy(QSizePolicy::MinimumExpanding, QSizePolicy::Preferred);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(tokenPool->sizePolicy().hasHeightForWidth());
        tokenPool->setSizePolicy(sizePolicy);
        tokenPool->setMinimumSize(QSize(0, 0));
        tokenPool->setMaximumSize(QSize(16777215, 100));
        tokenPool->setTabKeyNavigation(true);
        tokenPool->setSelectionMode(QAbstractItemView::SingleSelection);
        tokenPool->setIconSize(QSize(48, 48));
        tokenPool->setTextElideMode(Qt::ElideNone);
        tokenPool->setMovement(QListView::Static);
        tokenPool->setProperty("isWrapping", QVariant(false));
        tokenPool->setLayoutMode(QListView::Batched);
        tokenPool->setViewMode(QListView::IconMode);
        tokenPool->setModelColumn(0);
        tokenPool->setWordWrap(true);

        verticalLayout->addWidget(tokenPool);

        layoutEdit = new ContactList::LayoutEditWidget(ContactListLayoutWidget);
        layoutEdit->setObjectName(QString::fromUtf8("layoutEdit"));
        QSizePolicy sizePolicy1(QSizePolicy::Expanding, QSizePolicy::Expanding);
        sizePolicy1.setHorizontalStretch(0);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(layoutEdit->sizePolicy().hasHeightForWidth());
        layoutEdit->setSizePolicy(sizePolicy1);

        verticalLayout->addWidget(layoutEdit);


        retranslateUi(ContactListLayoutWidget);

        QMetaObject::connectSlotsByName(ContactListLayoutWidget);
    } // setupUi

    void retranslateUi(QWidget *ContactListLayoutWidget)
    {
        label->setText(tr2i18n("Layout name:", 0));
        removeButton->setText(tr2i18n("Remove", 0));
        previewButton->setText(tr2i18n("Preview", 0));
        tokenPool->setProperty("mimeType", QVariant(tr2i18n("application/x-kopete-contactlist-token", "KDE::DoNotExtract")));
        Q_UNUSED(ContactListLayoutWidget);
    } // retranslateUi

};

namespace Ui {
    class ContactListLayoutWidget: public Ui_ContactListLayoutWidget {};
} // namespace Ui

QT_END_NAMESPACE

#endif // CONTACTLISTLAYOUTWIDGET_H

