#include <kdialog.h>
#include <klocale.h>

/********************************************************************************
** Form generated from reading UI file 'icqadd.ui'
**
** Created by: Qt User Interface Compiler version 4.8.7
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_ICQADD_H
#define UI_ICQADD_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtGui/QApplication>
#include <QtGui/QButtonGroup>
#include <QtGui/QFrame>
#include <QtGui/QGridLayout>
#include <QtGui/QHeaderView>
#include <QtGui/QLabel>
#include <QtGui/QLineEdit>
#include <QtGui/QRadioButton>
#include <QtGui/QSpacerItem>
#include <QtGui/QWidget>
#include "kpushbutton.h"

QT_BEGIN_NAMESPACE

class Ui_icqAddUI
{
public:
    QGridLayout *gridLayout;
    QRadioButton *icqRadioButton;
    QLineEdit *icqEdit;
    QLabel *textLabel1_2;
    QSpacerItem *spacerItem;
    KPushButton *searchButton;
    QFrame *line;
    QRadioButton *aimRadioButton;
    QLineEdit *aimEdit;
    QSpacerItem *spacerItem1;

    void setupUi(QWidget *icqAddUI)
    {
        if (icqAddUI->objectName().isEmpty())
            icqAddUI->setObjectName(QString::fromUtf8("icqAddUI"));
        icqAddUI->resize(511, 119);
        gridLayout = new QGridLayout(icqAddUI);
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        gridLayout->setHorizontalSpacing(6);
        gridLayout->setVerticalSpacing(6);
        gridLayout->setContentsMargins(0, 0, 0, 0);
        icqRadioButton = new QRadioButton(icqAddUI);
        icqRadioButton->setObjectName(QString::fromUtf8("icqRadioButton"));
        icqRadioButton->setChecked(true);

        gridLayout->addWidget(icqRadioButton, 0, 0, 1, 1);

        icqEdit = new QLineEdit(icqAddUI);
        icqEdit->setObjectName(QString::fromUtf8("icqEdit"));

        gridLayout->addWidget(icqEdit, 0, 1, 1, 3);

        textLabel1_2 = new QLabel(icqAddUI);
        textLabel1_2->setObjectName(QString::fromUtf8("textLabel1_2"));

        gridLayout->addWidget(textLabel1_2, 1, 0, 1, 2);

        spacerItem = new QSpacerItem(47, 26, QSizePolicy::Expanding, QSizePolicy::Minimum);

        gridLayout->addItem(spacerItem, 1, 2, 1, 1);

        searchButton = new KPushButton(icqAddUI);
        searchButton->setObjectName(QString::fromUtf8("searchButton"));

        gridLayout->addWidget(searchButton, 1, 3, 1, 1);

        line = new QFrame(icqAddUI);
        line->setObjectName(QString::fromUtf8("line"));
        line->setFrameShape(QFrame::HLine);
        line->setFrameShadow(QFrame::Sunken);

        gridLayout->addWidget(line, 2, 0, 1, 4);

        aimRadioButton = new QRadioButton(icqAddUI);
        aimRadioButton->setObjectName(QString::fromUtf8("aimRadioButton"));

        gridLayout->addWidget(aimRadioButton, 3, 0, 1, 1);

        aimEdit = new QLineEdit(icqAddUI);
        aimEdit->setObjectName(QString::fromUtf8("aimEdit"));
        aimEdit->setEnabled(false);

        gridLayout->addWidget(aimEdit, 3, 1, 1, 3);

        spacerItem1 = new QSpacerItem(20, 10, QSizePolicy::Minimum, QSizePolicy::Expanding);

        gridLayout->addItem(spacerItem1, 4, 1, 1, 1);

        QWidget::setTabOrder(icqRadioButton, icqEdit);
        QWidget::setTabOrder(icqEdit, searchButton);
        QWidget::setTabOrder(searchButton, aimRadioButton);
        QWidget::setTabOrder(aimRadioButton, aimEdit);

        retranslateUi(icqAddUI);

        QMetaObject::connectSlotsByName(icqAddUI);
    } // setupUi

    void retranslateUi(QWidget *icqAddUI)
    {
        icqRadioButton->setText(tr2i18n("ICQ number:", 0));
        textLabel1_2->setText(tr2i18n("Alternatively, you can search the ICQ Whitepages :", 0));
        searchButton->setText(tr2i18n("&Search", 0));
        aimRadioButton->setText(tr2i18n("AOL screen name:", 0));
        Q_UNUSED(icqAddUI);
    } // retranslateUi

};

namespace Ui {
    class icqAddUI: public Ui_icqAddUI {};
} // namespace Ui

QT_END_NAMESPACE

#endif // ICQADD_H

