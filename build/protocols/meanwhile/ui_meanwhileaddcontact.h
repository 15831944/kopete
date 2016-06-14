#include <kdialog.h>
#include <klocale.h>

/********************************************************************************
** Form generated from reading UI file 'meanwhileaddcontact.ui'
**
** Created by: Qt User Interface Compiler version 4.8.7
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MEANWHILEADDCONTACT_H
#define UI_MEANWHILEADDCONTACT_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtGui/QApplication>
#include <QtGui/QButtonGroup>
#include <QtGui/QHBoxLayout>
#include <QtGui/QHeaderView>
#include <QtGui/QLabel>
#include <QtGui/QLineEdit>
#include <QtGui/QPushButton>
#include <QtGui/QSpacerItem>
#include <QtGui/QVBoxLayout>
#include <QtGui/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MeanwhileAddUI
{
public:
    QVBoxLayout *vboxLayout;
    QHBoxLayout *hboxLayout;
    QLabel *textLabel1;
    QLineEdit *contactID;
    QPushButton *btnFindUser;
    QLabel *textLabel3_2;
    QSpacerItem *spacer1;

    void setupUi(QWidget *MeanwhileAddUI)
    {
        if (MeanwhileAddUI->objectName().isEmpty())
            MeanwhileAddUI->setObjectName(QString::fromUtf8("MeanwhileAddUI"));
        MeanwhileAddUI->resize(258, 144);
        vboxLayout = new QVBoxLayout(MeanwhileAddUI);
#ifndef UI_Q_OS_MAC
        vboxLayout->setSpacing(6);
#endif
        vboxLayout->setContentsMargins(0, 0, 0, 0);
        vboxLayout->setObjectName(QString::fromUtf8("vboxLayout"));
        hboxLayout = new QHBoxLayout();
        hboxLayout->setObjectName(QString::fromUtf8("hboxLayout"));
        textLabel1 = new QLabel(MeanwhileAddUI);
        textLabel1->setObjectName(QString::fromUtf8("textLabel1"));
        textLabel1->setWordWrap(false);

        hboxLayout->addWidget(textLabel1);

        contactID = new QLineEdit(MeanwhileAddUI);
        contactID->setObjectName(QString::fromUtf8("contactID"));

        hboxLayout->addWidget(contactID);

        btnFindUser = new QPushButton(MeanwhileAddUI);
        btnFindUser->setObjectName(QString::fromUtf8("btnFindUser"));

        hboxLayout->addWidget(btnFindUser);


        vboxLayout->addLayout(hboxLayout);

        textLabel3_2 = new QLabel(MeanwhileAddUI);
        textLabel3_2->setObjectName(QString::fromUtf8("textLabel3_2"));
        textLabel3_2->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);
        textLabel3_2->setWordWrap(false);

        vboxLayout->addWidget(textLabel3_2);

        spacer1 = new QSpacerItem(20, 80, QSizePolicy::Expanding, QSizePolicy::Minimum);

        vboxLayout->addItem(spacer1);

#ifndef UI_QT_NO_SHORTCUT
        textLabel1->setBuddy(contactID);
#endif // QT_NO_SHORTCUT

        retranslateUi(MeanwhileAddUI);

        QMetaObject::connectSlotsByName(MeanwhileAddUI);
    } // setupUi

    void retranslateUi(QWidget *MeanwhileAddUI)
    {
        MeanwhileAddUI->setWindowTitle(tr2i18n("Add Sametime Contact", 0));
#ifndef UI_QT_NO_TOOLTIP
        textLabel1->setToolTip(tr2i18n("The user ID of the contact you would like to add.", 0));
#endif // QT_NO_TOOLTIP
#ifndef UI_QT_NO_WHATSTHIS
        textLabel1->setWhatsThis(tr2i18n("The user ID of the contact you would like to add.", 0));
#endif // QT_NO_WHATSTHIS
        textLabel1->setText(tr2i18n("&User ID:", 0));
#ifndef UI_QT_NO_TOOLTIP
        contactID->setToolTip(tr2i18n("The user ID of the contact you would like to add.", 0));
#endif // QT_NO_TOOLTIP
#ifndef UI_QT_NO_WHATSTHIS
        contactID->setWhatsThis(tr2i18n("The user ID of the contact you would like to add.", 0));
#endif // QT_NO_WHATSTHIS
#ifndef UI_QT_NO_TOOLTIP
        btnFindUser->setToolTip(tr2i18n("Find User ID", 0));
#endif // QT_NO_TOOLTIP
#ifndef UI_QT_NO_WHATSTHIS
        btnFindUser->setWhatsThis(tr2i18n("Find User ID", 0));
#endif // QT_NO_WHATSTHIS
        btnFindUser->setText(tr2i18n("&Find", 0));
        textLabel3_2->setText(tr2i18n("<i>(for example: johndoe)</i>", 0));
    } // retranslateUi

};

namespace Ui {
    class MeanwhileAddUI: public Ui_MeanwhileAddUI {};
} // namespace Ui

QT_END_NAMESPACE

#endif // MEANWHILEADDCONTACT_H

