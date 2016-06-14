#include <kdialog.h>
#include <klocale.h>

/********************************************************************************
** Form generated from reading UI file 'wlmaddui.ui'
**
** Created by: Qt User Interface Compiler version 4.8.7
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_WLMADDUI_H
#define UI_WLMADDUI_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtGui/QApplication>
#include <QtGui/QButtonGroup>
#include <QtGui/QFormLayout>
#include <QtGui/QHeaderView>
#include <QtGui/QLabel>
#include <QtGui/QWidget>
#include "klineedit.h"

QT_BEGIN_NAMESPACE

class Ui_WlmAddUI
{
public:
    QFormLayout *formLayout;
    QLabel *textLabel1;
    KLineEdit *m_uniqueName;
    QLabel *textLabel2;

    void setupUi(QWidget *WlmAddUI)
    {
        if (WlmAddUI->objectName().isEmpty())
            WlmAddUI->setObjectName(QString::fromUtf8("WlmAddUI"));
        WlmAddUI->resize(420, 198);
        formLayout = new QFormLayout(WlmAddUI);
        formLayout->setObjectName(QString::fromUtf8("formLayout"));
        textLabel1 = new QLabel(WlmAddUI);
        textLabel1->setObjectName(QString::fromUtf8("textLabel1"));
        textLabel1->setWordWrap(false);

        formLayout->setWidget(0, QFormLayout::LabelRole, textLabel1);

        m_uniqueName = new KLineEdit(WlmAddUI);
        m_uniqueName->setObjectName(QString::fromUtf8("m_uniqueName"));

        formLayout->setWidget(0, QFormLayout::FieldRole, m_uniqueName);

        textLabel2 = new QLabel(WlmAddUI);
        textLabel2->setObjectName(QString::fromUtf8("textLabel2"));
        textLabel2->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);

        formLayout->setWidget(1, QFormLayout::FieldRole, textLabel2);

#ifndef UI_QT_NO_SHORTCUT
        textLabel1->setBuddy(m_uniqueName);
#endif // QT_NO_SHORTCUT

        retranslateUi(WlmAddUI);

        QMetaObject::connectSlotsByName(WlmAddUI);
    } // setupUi

    void retranslateUi(QWidget *WlmAddUI)
    {
#ifndef UI_QT_NO_TOOLTIP
        textLabel1->setToolTip(tr2i18n("The account name of the account you would like to add.", 0));
#endif // QT_NO_TOOLTIP
#ifndef UI_QT_NO_WHATSTHIS
        textLabel1->setWhatsThis(tr2i18n("The account name of the account you would like to add.", 0));
#endif // QT_NO_WHATSTHIS
        textLabel1->setText(tr2i18n("&WLM passport:", 0));
#ifndef UI_QT_NO_TOOLTIP
        m_uniqueName->setToolTip(tr2i18n("The account name of the account you would like to add.", 0));
#endif // QT_NO_TOOLTIP
#ifndef UI_QT_NO_WHATSTHIS
        m_uniqueName->setWhatsThis(tr2i18n("The account name of the account you would like to add.", 0));
#endif // QT_NO_WHATSTHIS
        textLabel2->setText(tr2i18n("<i>(for example: joe@hotmail.com)</i>", 0));
        Q_UNUSED(WlmAddUI);
    } // retranslateUi

};

namespace Ui {
    class WlmAddUI: public Ui_WlmAddUI {};
} // namespace Ui

QT_END_NAMESPACE

#endif // WLMADDUI_H

