#include <kdialog.h>
#include <klocale.h>

/********************************************************************************
** Form generated from reading UI file 'wpaddcontactbase.ui'
**
** Created by: Qt User Interface Compiler version 4.8.7
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_WPADDCONTACTBASE_H
#define UI_WPADDCONTACTBASE_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtGui/QApplication>
#include <QtGui/QButtonGroup>
#include <QtGui/QGridLayout>
#include <QtGui/QHBoxLayout>
#include <QtGui/QHeaderView>
#include <QtGui/QLabel>
#include <QtGui/QPushButton>
#include <QtGui/QSpacerItem>
#include <QtGui/QVBoxLayout>
#include <QtGui/QWidget>
#include "kcombobox.h"

QT_BEGIN_NAMESPACE

class Ui_WPAddContactBase
{
public:
    QGridLayout *gridLayout;
    QVBoxLayout *vboxLayout;
    QLabel *TextLabel2_2;
    QLabel *TextLabel1_2;
    QVBoxLayout *vboxLayout1;
    KComboBox *mHostName;
    KComboBox *mHostGroup;
    QHBoxLayout *hboxLayout;
    QSpacerItem *spacerItem;
    QPushButton *mRefresh;
    QSpacerItem *spacerItem1;

    void setupUi(QWidget *WPAddContactBase)
    {
        if (WPAddContactBase->objectName().isEmpty())
            WPAddContactBase->setObjectName(QString::fromUtf8("WPAddContactBase"));
        WPAddContactBase->resize(385, 104);
        QSizePolicy sizePolicy(QSizePolicy::Preferred, QSizePolicy::Preferred);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(WPAddContactBase->sizePolicy().hasHeightForWidth());
        WPAddContactBase->setSizePolicy(sizePolicy);
        QFont font;
        font.setFamily(QString::fromUtf8("Sans Serif"));
        font.setPointSize(10);
        font.setBold(false);
        font.setItalic(false);
        font.setUnderline(false);
        font.setWeight(50);
        font.setStrikeOut(false);
        WPAddContactBase->setFont(font);
        gridLayout = new QGridLayout(WPAddContactBase);
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        gridLayout->setHorizontalSpacing(6);
        gridLayout->setVerticalSpacing(6);
        gridLayout->setContentsMargins(0, 0, 0, 0);
        vboxLayout = new QVBoxLayout();
        vboxLayout->setSpacing(6);
        vboxLayout->setObjectName(QString::fromUtf8("vboxLayout"));
        vboxLayout->setContentsMargins(0, 0, 0, 0);
        TextLabel2_2 = new QLabel(WPAddContactBase);
        TextLabel2_2->setObjectName(QString::fromUtf8("TextLabel2_2"));
        TextLabel2_2->setTextFormat(Qt::PlainText);

        vboxLayout->addWidget(TextLabel2_2);

        TextLabel1_2 = new QLabel(WPAddContactBase);
        TextLabel1_2->setObjectName(QString::fromUtf8("TextLabel1_2"));
        TextLabel1_2->setTextFormat(Qt::PlainText);

        vboxLayout->addWidget(TextLabel1_2);


        gridLayout->addLayout(vboxLayout, 0, 0, 1, 1);

        vboxLayout1 = new QVBoxLayout();
        vboxLayout1->setSpacing(6);
        vboxLayout1->setObjectName(QString::fromUtf8("vboxLayout1"));
        vboxLayout1->setContentsMargins(0, 0, 0, 0);
        mHostName = new KComboBox(WPAddContactBase);
        mHostName->setObjectName(QString::fromUtf8("mHostName"));
        QSizePolicy sizePolicy1(QSizePolicy::MinimumExpanding, QSizePolicy::Preferred);
        sizePolicy1.setHorizontalStretch(0);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(mHostName->sizePolicy().hasHeightForWidth());
        mHostName->setSizePolicy(sizePolicy1);

        vboxLayout1->addWidget(mHostName);

        mHostGroup = new KComboBox(WPAddContactBase);
        mHostGroup->setObjectName(QString::fromUtf8("mHostGroup"));
        sizePolicy1.setHeightForWidth(mHostGroup->sizePolicy().hasHeightForWidth());
        mHostGroup->setSizePolicy(sizePolicy1);

        vboxLayout1->addWidget(mHostGroup);


        gridLayout->addLayout(vboxLayout1, 0, 1, 1, 1);

        hboxLayout = new QHBoxLayout();
        hboxLayout->setObjectName(QString::fromUtf8("hboxLayout"));
        spacerItem = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        hboxLayout->addItem(spacerItem);

        mRefresh = new QPushButton(WPAddContactBase);
        mRefresh->setObjectName(QString::fromUtf8("mRefresh"));

        hboxLayout->addWidget(mRefresh);


        gridLayout->addLayout(hboxLayout, 1, 0, 1, 2);

        spacerItem1 = new QSpacerItem(20, 1, QSizePolicy::Minimum, QSizePolicy::MinimumExpanding);

        gridLayout->addItem(spacerItem1, 2, 0, 1, 2);

#ifndef UI_QT_NO_SHORTCUT
        TextLabel2_2->setBuddy(mHostName);
        TextLabel1_2->setBuddy(mHostGroup);
#endif // QT_NO_SHORTCUT
        QWidget::setTabOrder(mHostName, mHostGroup);

        retranslateUi(WPAddContactBase);

        QMetaObject::connectSlotsByName(WPAddContactBase);
    } // setupUi

    void retranslateUi(QWidget *WPAddContactBase)
    {
        WPAddContactBase->setWindowTitle(tr2i18n("Add WinPopup Contact", 0));
#ifndef UI_QT_NO_TOOLTIP
        TextLabel2_2->setToolTip(tr2i18n("The hostname to which you want to send WinPopup messages.", 0));
#endif // QT_NO_TOOLTIP
#ifndef UI_QT_NO_WHATSTHIS
        TextLabel2_2->setWhatsThis(tr2i18n("The hostname to which you want to send WinPopup messages.", 0));
#endif // QT_NO_WHATSTHIS
        TextLabel2_2->setText(tr2i18n("Com&puter hostname:", 0));
#ifndef UI_QT_NO_TOOLTIP
        TextLabel1_2->setToolTip(tr2i18n("The workgroup or domain containing the computer to which you want to send WinPopup messages.", 0));
#endif // QT_NO_TOOLTIP
#ifndef UI_QT_NO_WHATSTHIS
        TextLabel1_2->setWhatsThis(tr2i18n("The workgroup or domain containing the computer to which you want to send WinPopup messages.", 0));
#endif // QT_NO_WHATSTHIS
        TextLabel1_2->setText(tr2i18n("&Workgroup/domain:", 0));
#ifndef UI_QT_NO_TOOLTIP
        mHostName->setToolTip(tr2i18n("The hostname to which you want to send WinPopup messages.", 0));
#endif // QT_NO_TOOLTIP
#ifndef UI_QT_NO_WHATSTHIS
        mHostName->setWhatsThis(tr2i18n("The hostname to which you want to send WinPopup messages.", 0));
#endif // QT_NO_WHATSTHIS
#ifndef UI_QT_NO_TOOLTIP
        mHostGroup->setToolTip(tr2i18n("The workgroup or domain containing the computer to which you want to send WinPopup messages", 0));
#endif // QT_NO_TOOLTIP
#ifndef UI_QT_NO_WHATSTHIS
        mHostGroup->setWhatsThis(tr2i18n("The workgroup or domain containing the computer to which you want to send WinPopup messages", 0));
#endif // QT_NO_WHATSTHIS
        mRefresh->setText(tr2i18n("Refresh", 0));
    } // retranslateUi

};

namespace Ui {
    class WPAddContactBase: public Ui_WPAddContactBase {};
} // namespace Ui

QT_END_NAMESPACE

#endif // WPADDCONTACTBASE_H

