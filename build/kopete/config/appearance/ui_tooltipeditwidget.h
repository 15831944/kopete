#include <kdialog.h>
#include <klocale.h>

/********************************************************************************
** Form generated from reading UI file 'tooltipeditwidget.ui'
**
** Created by: Qt User Interface Compiler version 4.8.7
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_TOOLTIPEDITWIDGET_H
#define UI_TOOLTIPEDITWIDGET_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtGui/QApplication>
#include <QtGui/QButtonGroup>
#include <QtGui/QFrame>
#include <QtGui/QGridLayout>
#include <QtGui/QHBoxLayout>
#include <QtGui/QHeaderView>
#include <QtGui/QLabel>
#include <QtGui/QListView>
#include <QtGui/QSpacerItem>
#include <QtGui/QToolButton>
#include <QtGui/QVBoxLayout>
#include <QtGui/QWidget>

QT_BEGIN_NAMESPACE

class Ui_TooltipEditWidget
{
public:
    QGridLayout *gridLayout;
    QHBoxLayout *hboxLayout;
    QListView *unusedItemsListView;
    QVBoxLayout *vboxLayout;
    QSpacerItem *spacerItem;
    QGridLayout *gridLayout1;
    QToolButton *tbDown;
    QToolButton *tbUp;
    QToolButton *tbRemove;
    QToolButton *tbAdd;
    QSpacerItem *spacerItem1;
    QListView *usedItemsListView;
    QFrame *line1;
    QLabel *textLabel1;
    QLabel *textLabel2;

    void setupUi(QWidget *TooltipEditWidget)
    {
        if (TooltipEditWidget->objectName().isEmpty())
            TooltipEditWidget->setObjectName(QString::fromUtf8("TooltipEditWidget"));
        TooltipEditWidget->resize(629, 264);
        QSizePolicy sizePolicy(QSizePolicy::Expanding, QSizePolicy::Expanding);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(TooltipEditWidget->sizePolicy().hasHeightForWidth());
        TooltipEditWidget->setSizePolicy(sizePolicy);
        gridLayout = new QGridLayout(TooltipEditWidget);
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        hboxLayout = new QHBoxLayout();
#ifndef UI_Q_OS_MAC
        hboxLayout->setSpacing(6);
#endif
#ifndef UI_Q_OS_MAC
        hboxLayout->setContentsMargins(0, 0, 0, 0);
#endif
        hboxLayout->setObjectName(QString::fromUtf8("hboxLayout"));
        unusedItemsListView = new QListView(TooltipEditWidget);
        unusedItemsListView->setObjectName(QString::fromUtf8("unusedItemsListView"));

        hboxLayout->addWidget(unusedItemsListView);

        vboxLayout = new QVBoxLayout();
#ifndef UI_Q_OS_MAC
        vboxLayout->setSpacing(6);
#endif
        vboxLayout->setContentsMargins(0, 0, 0, 0);
        vboxLayout->setObjectName(QString::fromUtf8("vboxLayout"));
        spacerItem = new QSpacerItem(20, 60, QSizePolicy::Minimum, QSizePolicy::Expanding);

        vboxLayout->addItem(spacerItem);

        gridLayout1 = new QGridLayout();
#ifndef UI_Q_OS_MAC
        gridLayout1->setSpacing(6);
#endif
#ifndef UI_Q_OS_MAC
        gridLayout1->setContentsMargins(0, 0, 0, 0);
#endif
        gridLayout1->setObjectName(QString::fromUtf8("gridLayout1"));
        tbDown = new QToolButton(TooltipEditWidget);
        tbDown->setObjectName(QString::fromUtf8("tbDown"));

        gridLayout1->addWidget(tbDown, 2, 1, 1, 1);

        tbUp = new QToolButton(TooltipEditWidget);
        tbUp->setObjectName(QString::fromUtf8("tbUp"));

        gridLayout1->addWidget(tbUp, 0, 1, 1, 1);

        tbRemove = new QToolButton(TooltipEditWidget);
        tbRemove->setObjectName(QString::fromUtf8("tbRemove"));

        gridLayout1->addWidget(tbRemove, 1, 0, 1, 1);

        tbAdd = new QToolButton(TooltipEditWidget);
        tbAdd->setObjectName(QString::fromUtf8("tbAdd"));

        gridLayout1->addWidget(tbAdd, 1, 2, 1, 1);


        vboxLayout->addLayout(gridLayout1);

        spacerItem1 = new QSpacerItem(20, 30, QSizePolicy::Minimum, QSizePolicy::Expanding);

        vboxLayout->addItem(spacerItem1);


        hboxLayout->addLayout(vboxLayout);

        usedItemsListView = new QListView(TooltipEditWidget);
        usedItemsListView->setObjectName(QString::fromUtf8("usedItemsListView"));

        hboxLayout->addWidget(usedItemsListView);


        gridLayout->addLayout(hboxLayout, 3, 0, 1, 1);

        line1 = new QFrame(TooltipEditWidget);
        line1->setObjectName(QString::fromUtf8("line1"));
        line1->setFrameShape(QFrame::HLine);
        line1->setFrameShadow(QFrame::Sunken);
        line1->setFrameShape(QFrame::HLine);

        gridLayout->addWidget(line1, 1, 0, 1, 1);

        textLabel1 = new QLabel(TooltipEditWidget);
        textLabel1->setObjectName(QString::fromUtf8("textLabel1"));
        textLabel1->setAlignment(Qt::AlignVCenter);
        textLabel1->setWordWrap(true);

        gridLayout->addWidget(textLabel1, 2, 0, 1, 1);

        textLabel2 = new QLabel(TooltipEditWidget);
        textLabel2->setObjectName(QString::fromUtf8("textLabel2"));

        gridLayout->addWidget(textLabel2, 0, 0, 1, 1);

        QWidget::setTabOrder(unusedItemsListView, tbUp);
        QWidget::setTabOrder(tbUp, tbRemove);
        QWidget::setTabOrder(tbRemove, tbAdd);
        QWidget::setTabOrder(tbAdd, tbDown);
        QWidget::setTabOrder(tbDown, usedItemsListView);

        retranslateUi(TooltipEditWidget);

        QMetaObject::connectSlotsByName(TooltipEditWidget);
    } // setupUi

    void retranslateUi(QWidget *TooltipEditWidget)
    {
#ifndef UI_QT_NO_WHATSTHIS
        tbDown->setWhatsThis(tr2i18n("Use this arrow to reorder the items in the list.", 0));
#endif // QT_NO_WHATSTHIS
        tbDown->setText(tr2i18n("v", 0));
        tbUp->setText(tr2i18n("^", 0));
        tbRemove->setText(tr2i18n("<", 0));
#ifndef UI_QT_NO_WHATSTHIS
        tbAdd->setWhatsThis(tr2i18n("Use this arrows to add or remove items to your contact tooltips.", 0));
#endif // QT_NO_WHATSTHIS
        tbAdd->setText(tr2i18n(">", 0));
        textLabel1->setText(tr2i18n("Using the arrow buttons, put on the right the items you want to see in the contact tooltips. You can then sort them.", 0));
        textLabel2->setText(tr2i18n("<b>Here you can customize the contact tooltips</b>", 0));
        Q_UNUSED(TooltipEditWidget);
    } // retranslateUi

};

namespace Ui {
    class TooltipEditWidget: public Ui_TooltipEditWidget {};
} // namespace Ui

QT_END_NAMESPACE

#endif // TOOLTIPEDITWIDGET_H

