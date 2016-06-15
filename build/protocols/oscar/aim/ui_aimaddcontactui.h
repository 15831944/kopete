#include <kdialog.h>
#include <klocale.h>

/********************************************************************************
** Form generated from reading UI file 'aimaddcontactui.ui'
**
** Created by: Qt User Interface Compiler version 4.8.7
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_AIMADDCONTACTUI_H
#define UI_AIMADDCONTACTUI_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtGui/QApplication>
#include <QtGui/QButtonGroup>
#include <QtGui/QFrame>
#include <QtGui/QGridLayout>
#include <QtGui/QHeaderView>
#include <QtGui/QLineEdit>
#include <QtGui/QRadioButton>
#include <QtGui/QSpacerItem>
#include <QtGui/QWidget>

QT_BEGIN_NAMESPACE

class Ui_aimAddContactUI
{
public:
    QGridLayout *gridLayout;
    QRadioButton *aimRadioButton;
    QLineEdit *aimEdit;
    QFrame *line;
    QRadioButton *icqRadioButton;
    QLineEdit *icqEdit;
    QSpacerItem *spacerItem;

    void setupUi(QWidget *aimAddContactUI)
    {
        if (aimAddContactUI->objectName().isEmpty())
            aimAddContactUI->setObjectName(QString::fromUtf8("aimAddContactUI"));
        aimAddContactUI->resize(396, 77);
        gridLayout = new QGridLayout(aimAddContactUI);
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        gridLayout->setContentsMargins(0, 0, 0, 0);
        aimRadioButton = new QRadioButton(aimAddContactUI);
        aimRadioButton->setObjectName(QString::fromUtf8("aimRadioButton"));
        aimRadioButton->setChecked(true);

        gridLayout->addWidget(aimRadioButton, 0, 0, 1, 1);

        aimEdit = new QLineEdit(aimAddContactUI);
        aimEdit->setObjectName(QString::fromUtf8("aimEdit"));

        gridLayout->addWidget(aimEdit, 0, 1, 1, 1);

        line = new QFrame(aimAddContactUI);
        line->setObjectName(QString::fromUtf8("line"));
        line->setFrameShape(QFrame::HLine);
        line->setFrameShadow(QFrame::Sunken);

        gridLayout->addWidget(line, 1, 0, 1, 2);

        icqRadioButton = new QRadioButton(aimAddContactUI);
        icqRadioButton->setObjectName(QString::fromUtf8("icqRadioButton"));

        gridLayout->addWidget(icqRadioButton, 2, 0, 1, 1);

        icqEdit = new QLineEdit(aimAddContactUI);
        icqEdit->setObjectName(QString::fromUtf8("icqEdit"));
        icqEdit->setEnabled(false);

        gridLayout->addWidget(icqEdit, 2, 1, 1, 1);

        spacerItem = new QSpacerItem(100, 10, QSizePolicy::Minimum, QSizePolicy::Expanding);

        gridLayout->addItem(spacerItem, 3, 0, 1, 2);


        retranslateUi(aimAddContactUI);

        QMetaObject::connectSlotsByName(aimAddContactUI);
    } // setupUi

    void retranslateUi(QWidget *aimAddContactUI)
    {
        aimRadioButton->setText(tr2i18n("AOL screen name:", 0));
        icqRadioButton->setText(tr2i18n("ICQ number:", 0));
        Q_UNUSED(aimAddContactUI);
    } // retranslateUi

};

namespace Ui {
    class aimAddContactUI: public Ui_aimAddContactUI {};
} // namespace Ui

QT_END_NAMESPACE

#endif // AIMADDCONTACTUI_H

