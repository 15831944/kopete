#include <kdialog.h>
#include <klocale.h>

/********************************************************************************
** Form generated from reading UI file 'xtrazicqstatusui.ui'
**
** Created by: Qt User Interface Compiler version 4.8.7
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_XTRAZICQSTATUSUI_H
#define UI_XTRAZICQSTATUSUI_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtGui/QApplication>
#include <QtGui/QButtonGroup>
#include <QtGui/QCheckBox>
#include <QtGui/QGridLayout>
#include <QtGui/QHeaderView>
#include <QtGui/QLabel>
#include <QtGui/QLineEdit>
#include <QtGui/QSpacerItem>
#include <QtGui/QWidget>
#include "iconcells.h"

QT_BEGIN_NAMESPACE

class Ui_XtrazICQStatusUI
{
public:
    QGridLayout *gridLayout;
    QLabel *label_3;
    IconCells *iconsWidget;
    QLabel *label;
    QLineEdit *descriptionEdit;
    QLabel *label_2;
    QLineEdit *messageEdit;
    QCheckBox *checkAppend;
    QSpacerItem *spacerItem;

    void setupUi(QWidget *XtrazICQStatusUI)
    {
        if (XtrazICQStatusUI->objectName().isEmpty())
            XtrazICQStatusUI->setObjectName(QString::fromUtf8("XtrazICQStatusUI"));
        XtrazICQStatusUI->resize(299, 125);
        gridLayout = new QGridLayout(XtrazICQStatusUI);
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        gridLayout->setContentsMargins(0, 0, 0, 0);
        label_3 = new QLabel(XtrazICQStatusUI);
        label_3->setObjectName(QString::fromUtf8("label_3"));

        gridLayout->addWidget(label_3, 0, 0, 1, 1);

        iconsWidget = new IconCells(XtrazICQStatusUI);
        iconsWidget->setObjectName(QString::fromUtf8("iconsWidget"));
        QSizePolicy sizePolicy(QSizePolicy::Minimum, QSizePolicy::Minimum);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(iconsWidget->sizePolicy().hasHeightForWidth());
        iconsWidget->setSizePolicy(sizePolicy);
        iconsWidget->setFocusPolicy(Qt::StrongFocus);

        gridLayout->addWidget(iconsWidget, 0, 1, 1, 1);

        label = new QLabel(XtrazICQStatusUI);
        label->setObjectName(QString::fromUtf8("label"));

        gridLayout->addWidget(label, 1, 0, 1, 1);

        descriptionEdit = new QLineEdit(XtrazICQStatusUI);
        descriptionEdit->setObjectName(QString::fromUtf8("descriptionEdit"));

        gridLayout->addWidget(descriptionEdit, 1, 1, 1, 1);

        label_2 = new QLabel(XtrazICQStatusUI);
        label_2->setObjectName(QString::fromUtf8("label_2"));

        gridLayout->addWidget(label_2, 2, 0, 1, 1);

        messageEdit = new QLineEdit(XtrazICQStatusUI);
        messageEdit->setObjectName(QString::fromUtf8("messageEdit"));

        gridLayout->addWidget(messageEdit, 2, 1, 1, 1);

        checkAppend = new QCheckBox(XtrazICQStatusUI);
        checkAppend->setObjectName(QString::fromUtf8("checkAppend"));
        checkAppend->setChecked(true);

        gridLayout->addWidget(checkAppend, 3, 1, 1, 1);

        spacerItem = new QSpacerItem(281, 0, QSizePolicy::Minimum, QSizePolicy::Expanding);

        gridLayout->addItem(spacerItem, 4, 0, 1, 2);

#ifndef UI_QT_NO_SHORTCUT
        label_3->setBuddy(iconsWidget);
        label->setBuddy(descriptionEdit);
        label_2->setBuddy(messageEdit);
#endif // QT_NO_SHORTCUT
        QWidget::setTabOrder(iconsWidget, descriptionEdit);
        QWidget::setTabOrder(descriptionEdit, messageEdit);
        QWidget::setTabOrder(messageEdit, checkAppend);

        retranslateUi(XtrazICQStatusUI);

        QMetaObject::connectSlotsByName(XtrazICQStatusUI);
    } // setupUi

    void retranslateUi(QWidget *XtrazICQStatusUI)
    {
        label_3->setText(tr2i18n("Icon:", 0));
        label->setText(tr2i18n("Description:", 0));
        label_2->setText(tr2i18n("Message:", 0));
        checkAppend->setText(tr2i18n("Append to menu", 0));
        Q_UNUSED(XtrazICQStatusUI);
    } // retranslateUi

};

namespace Ui {
    class XtrazICQStatusUI: public Ui_XtrazICQStatusUI {};
} // namespace Ui

QT_END_NAMESPACE

#endif // XTRAZICQSTATUSUI_H

