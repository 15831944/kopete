#include <kdialog.h>
#include <klocale.h>

/********************************************************************************
** Form generated from reading UI file 'metacontactselectorwidget_base.ui'
**
** Created by: Qt User Interface Compiler version 4.8.7
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_METACONTACTSELECTORWIDGET_BASE_H
#define UI_METACONTACTSELECTORWIDGET_BASE_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtGui/QApplication>
#include <QtGui/QButtonGroup>
#include <QtGui/QHBoxLayout>
#include <QtGui/QHeaderView>
#include <QtGui/QLabel>
#include <QtGui/QVBoxLayout>
#include <QtGui/QWidget>
#include <kopetelistview.h>
#include <kopetelistviewsearchline.h>
#include <Qt3Support/Q3Header>
#include "kopetelistview.h"
#include "kopetelistviewsearchline.h"

QT_BEGIN_NAMESPACE

class Ui_MetaContactSelectorWidget_Base
{
public:
    QVBoxLayout *vboxLayout;
    QLabel *lblHeader;
    QHBoxLayout *hboxLayout;
    QLabel *lblSearch;
    Kopete::UI::ListView::SearchLine *kListViewSearchLine;
    Kopete::UI::ListView::ListView *metaContactListView;

    void setupUi(QWidget *MetaContactSelectorWidget_Base)
    {
        if (MetaContactSelectorWidget_Base->objectName().isEmpty())
            MetaContactSelectorWidget_Base->setObjectName(QString::fromUtf8("MetaContactSelectorWidget_Base"));
        MetaContactSelectorWidget_Base->resize(427, 295);
        QSizePolicy sizePolicy(static_cast<QSizePolicy::Policy>(5), static_cast<QSizePolicy::Policy>(1));
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(MetaContactSelectorWidget_Base->sizePolicy().hasHeightForWidth());
        MetaContactSelectorWidget_Base->setSizePolicy(sizePolicy);
        vboxLayout = new QVBoxLayout(MetaContactSelectorWidget_Base);
#ifndef UI_Q_OS_MAC
        vboxLayout->setSpacing(6);
#endif
        vboxLayout->setContentsMargins(11, 11, 11, 11);
        vboxLayout->setObjectName(QString::fromUtf8("vboxLayout"));
        lblHeader = new QLabel(MetaContactSelectorWidget_Base);
        lblHeader->setObjectName(QString::fromUtf8("lblHeader"));
        QSizePolicy sizePolicy1(static_cast<QSizePolicy::Policy>(7), static_cast<QSizePolicy::Policy>(4));
        sizePolicy1.setHorizontalStretch(0);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(lblHeader->sizePolicy().hasHeightForWidth());
        lblHeader->setSizePolicy(sizePolicy1);

        vboxLayout->addWidget(lblHeader);

        hboxLayout = new QHBoxLayout();
#ifndef UI_Q_OS_MAC
        hboxLayout->setSpacing(6);
#endif
        hboxLayout->setContentsMargins(0, 0, 0, 0);
        hboxLayout->setObjectName(QString::fromUtf8("hboxLayout"));
        lblSearch = new QLabel(MetaContactSelectorWidget_Base);
        lblSearch->setObjectName(QString::fromUtf8("lblSearch"));
        QSizePolicy sizePolicy2(static_cast<QSizePolicy::Policy>(1), static_cast<QSizePolicy::Policy>(5));
        sizePolicy2.setHorizontalStretch(0);
        sizePolicy2.setVerticalStretch(0);
        sizePolicy2.setHeightForWidth(lblSearch->sizePolicy().hasHeightForWidth());
        lblSearch->setSizePolicy(sizePolicy2);

        hboxLayout->addWidget(lblSearch);

        kListViewSearchLine = new Kopete::UI::ListView::SearchLine(MetaContactSelectorWidget_Base);
        kListViewSearchLine->setObjectName(QString::fromUtf8("kListViewSearchLine"));

        hboxLayout->addWidget(kListViewSearchLine);


        vboxLayout->addLayout(hboxLayout);

        metaContactListView = new Kopete::UI::ListView::ListView(MetaContactSelectorWidget_Base);
        metaContactListView->setObjectName(QString::fromUtf8("metaContactListView"));

        vboxLayout->addWidget(metaContactListView);

#ifndef UI_QT_NO_SHORTCUT
        lblSearch->setBuddy(kListViewSearchLine);
#endif // QT_NO_SHORTCUT

        retranslateUi(MetaContactSelectorWidget_Base);

        QMetaObject::connectSlotsByName(MetaContactSelectorWidget_Base);
    } // setupUi

    void retranslateUi(QWidget *MetaContactSelectorWidget_Base)
    {
        MetaContactSelectorWidget_Base->setWindowTitle(tr2i18n("Select Contact", 0));
        lblSearch->setText(tr2i18n("S&earch:", 0));
    } // retranslateUi

};

namespace Ui {
    class MetaContactSelectorWidget_Base: public Ui_MetaContactSelectorWidget_Base {};
} // namespace Ui

QT_END_NAMESPACE

#endif // METACONTACTSELECTORWIDGET_BASE_H

