#include <kdialog.h>
#include <klocale.h>

/********************************************************************************
** Form generated from reading UI file 'gaduadd.ui'
**
** Created by: Qt User Interface Compiler version 4.8.7
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_GADUADD_H
#define UI_GADUADD_H

#include <Qt3Support/Q3Header>
#include <Qt3Support/Q3ListView>
#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtGui/QApplication>
#include <QtGui/QButtonGroup>
#include <QtGui/QCheckBox>
#include <QtGui/QGridLayout>
#include <QtGui/QHBoxLayout>
#include <QtGui/QHeaderView>
#include <QtGui/QLabel>
#include <QtGui/QLineEdit>
#include <QtGui/QVBoxLayout>
#include <QtGui/QWidget>
#include "krestrictedline.h"

QT_BEGIN_NAMESPACE

class Ui_GaduAddUI
{
public:
    QGridLayout *gridLayout;
    QHBoxLayout *hboxLayout;
    QLabel *TextLabel1;
    KRestrictedLine *addEdit_;
    QLabel *textLabel2;
    QHBoxLayout *hboxLayout1;
    QVBoxLayout *vboxLayout;
    QLabel *textLabel1;
    QLabel *TextLabel1_2;
    QLabel *TextLabel1_2_2;
    QLabel *TextLabel1_4;
    QLabel *TextLabel1_4_2;
    QVBoxLayout *vboxLayout1;
    QLineEdit *fornameEdit_;
    QLineEdit *snameEdit_;
    QLineEdit *nickEdit_;
    QLineEdit *emailEdit_;
    QLineEdit *telephoneEdit_;
    QCheckBox *notAFriend_;
    Q3ListView *groups;

    void setupUi(QWidget *GaduAddUI)
    {
        if (GaduAddUI->objectName().isEmpty())
            GaduAddUI->setObjectName(QString::fromUtf8("GaduAddUI"));
        GaduAddUI->resize(394, 340);
        gridLayout = new QGridLayout(GaduAddUI);
#ifndef UI_Q_OS_MAC
        gridLayout->setSpacing(6);
#endif
        gridLayout->setContentsMargins(11, 11, 11, 11);
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        hboxLayout = new QHBoxLayout();
#ifndef UI_Q_OS_MAC
        hboxLayout->setSpacing(6);
#endif
#ifndef UI_Q_OS_MAC
        hboxLayout->setContentsMargins(0, 0, 0, 0);
#endif
        hboxLayout->setObjectName(QString::fromUtf8("hboxLayout"));
        TextLabel1 = new QLabel(GaduAddUI);
        TextLabel1->setObjectName(QString::fromUtf8("TextLabel1"));
        QSizePolicy sizePolicy(static_cast<QSizePolicy::Policy>(0), static_cast<QSizePolicy::Policy>(0));
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(TextLabel1->sizePolicy().hasHeightForWidth());
        TextLabel1->setSizePolicy(sizePolicy);
        TextLabel1->setTextFormat(Qt::AutoText);
        TextLabel1->setScaledContents(false);
        TextLabel1->setAlignment(Qt::AlignVCenter);

        hboxLayout->addWidget(TextLabel1);

        addEdit_ = new KRestrictedLine(GaduAddUI);
        addEdit_->setObjectName(QString::fromUtf8("addEdit_"));

        hboxLayout->addWidget(addEdit_);


        gridLayout->addLayout(hboxLayout, 0, 0, 1, 1);

        textLabel2 = new QLabel(GaduAddUI);
        textLabel2->setObjectName(QString::fromUtf8("textLabel2"));
        textLabel2->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);

        gridLayout->addWidget(textLabel2, 1, 0, 1, 1);

        hboxLayout1 = new QHBoxLayout();
#ifndef UI_Q_OS_MAC
        hboxLayout1->setSpacing(6);
#endif
        hboxLayout1->setContentsMargins(0, 0, 0, 0);
        hboxLayout1->setObjectName(QString::fromUtf8("hboxLayout1"));
        vboxLayout = new QVBoxLayout();
#ifndef UI_Q_OS_MAC
        vboxLayout->setSpacing(6);
#endif
#ifndef UI_Q_OS_MAC
        vboxLayout->setContentsMargins(0, 0, 0, 0);
#endif
        vboxLayout->setObjectName(QString::fromUtf8("vboxLayout"));
        textLabel1 = new QLabel(GaduAddUI);
        textLabel1->setObjectName(QString::fromUtf8("textLabel1"));
        textLabel1->setEnabled(true);

        vboxLayout->addWidget(textLabel1);

        TextLabel1_2 = new QLabel(GaduAddUI);
        TextLabel1_2->setObjectName(QString::fromUtf8("TextLabel1_2"));
        TextLabel1_2->setEnabled(true);

        vboxLayout->addWidget(TextLabel1_2);

        TextLabel1_2_2 = new QLabel(GaduAddUI);
        TextLabel1_2_2->setObjectName(QString::fromUtf8("TextLabel1_2_2"));
        QSizePolicy sizePolicy1(static_cast<QSizePolicy::Policy>(0), static_cast<QSizePolicy::Policy>(1));
        sizePolicy1.setHorizontalStretch(0);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(TextLabel1_2_2->sizePolicy().hasHeightForWidth());
        TextLabel1_2_2->setSizePolicy(sizePolicy1);

        vboxLayout->addWidget(TextLabel1_2_2);

        TextLabel1_4 = new QLabel(GaduAddUI);
        TextLabel1_4->setObjectName(QString::fromUtf8("TextLabel1_4"));
        TextLabel1_4->setEnabled(true);
        QSizePolicy sizePolicy2(static_cast<QSizePolicy::Policy>(0), static_cast<QSizePolicy::Policy>(5));
        sizePolicy2.setHorizontalStretch(0);
        sizePolicy2.setVerticalStretch(0);
        sizePolicy2.setHeightForWidth(TextLabel1_4->sizePolicy().hasHeightForWidth());
        TextLabel1_4->setSizePolicy(sizePolicy2);

        vboxLayout->addWidget(TextLabel1_4);

        TextLabel1_4_2 = new QLabel(GaduAddUI);
        TextLabel1_4_2->setObjectName(QString::fromUtf8("TextLabel1_4_2"));
        TextLabel1_4_2->setEnabled(true);
        sizePolicy2.setHeightForWidth(TextLabel1_4_2->sizePolicy().hasHeightForWidth());
        TextLabel1_4_2->setSizePolicy(sizePolicy2);

        vboxLayout->addWidget(TextLabel1_4_2);


        hboxLayout1->addLayout(vboxLayout);

        vboxLayout1 = new QVBoxLayout();
#ifndef UI_Q_OS_MAC
        vboxLayout1->setSpacing(6);
#endif
        vboxLayout1->setContentsMargins(0, 0, 0, 0);
        vboxLayout1->setObjectName(QString::fromUtf8("vboxLayout1"));
        fornameEdit_ = new QLineEdit(GaduAddUI);
        fornameEdit_->setObjectName(QString::fromUtf8("fornameEdit_"));
        fornameEdit_->setEnabled(true);

        vboxLayout1->addWidget(fornameEdit_);

        snameEdit_ = new QLineEdit(GaduAddUI);
        snameEdit_->setObjectName(QString::fromUtf8("snameEdit_"));
        snameEdit_->setEnabled(true);

        vboxLayout1->addWidget(snameEdit_);

        nickEdit_ = new QLineEdit(GaduAddUI);
        nickEdit_->setObjectName(QString::fromUtf8("nickEdit_"));

        vboxLayout1->addWidget(nickEdit_);

        emailEdit_ = new QLineEdit(GaduAddUI);
        emailEdit_->setObjectName(QString::fromUtf8("emailEdit_"));
        emailEdit_->setEnabled(true);

        vboxLayout1->addWidget(emailEdit_);

        telephoneEdit_ = new QLineEdit(GaduAddUI);
        telephoneEdit_->setObjectName(QString::fromUtf8("telephoneEdit_"));
        telephoneEdit_->setEnabled(true);

        vboxLayout1->addWidget(telephoneEdit_);


        hboxLayout1->addLayout(vboxLayout1);


        gridLayout->addLayout(hboxLayout1, 2, 0, 1, 1);

        notAFriend_ = new QCheckBox(GaduAddUI);
        notAFriend_->setObjectName(QString::fromUtf8("notAFriend_"));
        notAFriend_->setEnabled(false);

        gridLayout->addWidget(notAFriend_, 4, 0, 1, 1);

        groups = new Q3ListView(GaduAddUI);
        groups->addColumn(tr2i18n("Group", 0));
        groups->setObjectName(QString::fromUtf8("groups"));

        gridLayout->addWidget(groups, 3, 0, 1, 1);

#ifndef UI_QT_NO_SHORTCUT
        TextLabel1->setBuddy(addEdit_);
        textLabel1->setBuddy(fornameEdit_);
        TextLabel1_2->setBuddy(snameEdit_);
        TextLabel1_2_2->setBuddy(nickEdit_);
        TextLabel1_4->setBuddy(emailEdit_);
        TextLabel1_4_2->setBuddy(emailEdit_);
#endif // QT_NO_SHORTCUT

        retranslateUi(GaduAddUI);

        QMetaObject::connectSlotsByName(GaduAddUI);
    } // setupUi

    void retranslateUi(QWidget *GaduAddUI)
    {
#ifndef UI_QT_NO_TOOLTIP
        TextLabel1->setToolTip(tr2i18n("The user ID of the Gadu-Gadu account you would like to add.", 0));
#endif // QT_NO_TOOLTIP
#ifndef UI_QT_NO_WHATSTHIS
        TextLabel1->setWhatsThis(tr2i18n("The user ID of the Gadu-Gadu account you would like to add.  This should be in the form of a number (no decimals, no spaces).  This field is mandatory.", 0));
#endif // QT_NO_WHATSTHIS
        TextLabel1->setText(tr2i18n("Gadu-Gadu &UIN:", 0));
#ifndef UI_QT_NO_TOOLTIP
        addEdit_->setToolTip(tr2i18n("The user ID of the Gadu-Gadu account you would like to add.", 0));
#endif // QT_NO_TOOLTIP
#ifndef UI_QT_NO_WHATSTHIS
        addEdit_->setWhatsThis(tr2i18n("The user ID of the Gadu-Gadu account you would like to add.  This should be in the form of a number (no decimals, no spaces).  This field is mandatory.", 0));
#endif // QT_NO_WHATSTHIS
        textLabel2->setText(tr2i18n("<i>(for example: 1234567)</i>", 0));
#ifndef UI_QT_NO_TOOLTIP
        textLabel1->setToolTip(tr2i18n("The forename of the contact you wish to add.", 0));
#endif // QT_NO_TOOLTIP
#ifndef UI_QT_NO_WHATSTHIS
        textLabel1->setWhatsThis(tr2i18n("The forename (first name) of the contact you wish to add.  Optionally this may include a middle name.", 0));
#endif // QT_NO_WHATSTHIS
        textLabel1->setText(tr2i18n("&Forename:", 0));
#ifndef UI_QT_NO_TOOLTIP
        TextLabel1_2->setToolTip(tr2i18n("The surname of the contact you wish to add.", 0));
#endif // QT_NO_TOOLTIP
#ifndef UI_QT_NO_WHATSTHIS
        TextLabel1_2->setWhatsThis(tr2i18n("The surname (last name) of the contact you wish to add.", 0));
#endif // QT_NO_WHATSTHIS
        TextLabel1_2->setText(tr2i18n("&Surname:", 0));
#ifndef UI_QT_NO_TOOLTIP
        TextLabel1_2_2->setToolTip(tr2i18n("A nickname for the contact you wish to add.", 0));
#endif // QT_NO_TOOLTIP
#ifndef UI_QT_NO_WHATSTHIS
        TextLabel1_2_2->setWhatsThis(tr2i18n("A nickname for the contact you wish to add.", 0));
#endif // QT_NO_WHATSTHIS
        TextLabel1_2_2->setText(tr2i18n("N&ickname:", 0));
#ifndef UI_QT_NO_TOOLTIP
        TextLabel1_4->setToolTip(tr2i18n("E-Mail address for this contact.", 0));
#endif // QT_NO_TOOLTIP
#ifndef UI_QT_NO_WHATSTHIS
        TextLabel1_4->setWhatsThis(tr2i18n("E-Mail address for this contact.", 0));
#endif // QT_NO_WHATSTHIS
        TextLabel1_4->setText(tr2i18n("&Email address:", 0));
#ifndef UI_QT_NO_TOOLTIP
        TextLabel1_4_2->setToolTip(tr2i18n("E-Mail address for this contact.", 0));
#endif // QT_NO_TOOLTIP
#ifndef UI_QT_NO_WHATSTHIS
        TextLabel1_4_2->setWhatsThis(tr2i18n("E-Mail address for this contact.", 0));
#endif // QT_NO_WHATSTHIS
        TextLabel1_4_2->setText(tr2i18n("&Telephone number:", 0));
#ifndef UI_QT_NO_TOOLTIP
        fornameEdit_->setToolTip(tr2i18n("The forename of the contact you wish to add.", 0));
#endif // QT_NO_TOOLTIP
#ifndef UI_QT_NO_WHATSTHIS
        fornameEdit_->setWhatsThis(tr2i18n("The forename (first name) of the contact you wish to add.  Optionally this may include a middle name.", 0));
#endif // QT_NO_WHATSTHIS
#ifndef UI_QT_NO_TOOLTIP
        snameEdit_->setToolTip(tr2i18n("The surname of the contact you wish to add.", 0));
#endif // QT_NO_TOOLTIP
#ifndef UI_QT_NO_WHATSTHIS
        snameEdit_->setWhatsThis(tr2i18n("The surname (last name) of the contact you wish to add.", 0));
#endif // QT_NO_WHATSTHIS
#ifndef UI_QT_NO_TOOLTIP
        nickEdit_->setToolTip(tr2i18n("A nickname for the contact you wish to add.", 0));
#endif // QT_NO_TOOLTIP
#ifndef UI_QT_NO_WHATSTHIS
        nickEdit_->setWhatsThis(tr2i18n("A nickname for the contact you wish to add.", 0));
#endif // QT_NO_WHATSTHIS
#ifndef UI_QT_NO_TOOLTIP
        emailEdit_->setToolTip(tr2i18n("E-Mail address for this contact.", 0));
#endif // QT_NO_TOOLTIP
#ifndef UI_QT_NO_WHATSTHIS
        emailEdit_->setWhatsThis(tr2i18n("E-Mail address for this contact.", 0));
#endif // QT_NO_WHATSTHIS
#ifndef UI_QT_NO_TOOLTIP
        telephoneEdit_->setToolTip(tr2i18n("E-Mail address for this contact.", 0));
#endif // QT_NO_TOOLTIP
#ifndef UI_QT_NO_WHATSTHIS
        telephoneEdit_->setWhatsThis(tr2i18n("E-Mail address for this contact.", 0));
#endif // QT_NO_WHATSTHIS
#ifndef UI_QT_NO_TOOLTIP
        notAFriend_->setToolTip(tr2i18n("Check if you want to exclude this contact from the \"Just for friends\" status mode.", 0));
#endif // QT_NO_TOOLTIP
#ifndef UI_QT_NO_WHATSTHIS
        notAFriend_->setWhatsThis(tr2i18n("Check if you want to exclude this contact from the \"Just for friends\" status mode.", 0));
#endif // QT_NO_WHATSTHIS
        notAFriend_->setText(tr2i18n("Offline to contact when you set \"&Just for friends\"", 0));
        groups->header()->setLabel(0, tr2i18n("Group", 0));
        Q_UNUSED(GaduAddUI);
    } // retranslateUi

};

namespace Ui {
    class GaduAddUI: public Ui_GaduAddUI {};
} // namespace Ui

QT_END_NAMESPACE

#endif // GADUADD_H

