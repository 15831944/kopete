#include <kdialog.h>
#include <klocale.h>

/********************************************************************************
** Form generated from reading UI file 'icqauthreplyui.ui'
**
** Created by: Qt User Interface Compiler version 4.8.7
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_ICQAUTHREPLYUI_H
#define UI_ICQAUTHREPLYUI_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtGui/QApplication>
#include <QtGui/QButtonGroup>
#include <QtGui/QHBoxLayout>
#include <QtGui/QHeaderView>
#include <QtGui/QLabel>
#include <QtGui/QLineEdit>
#include <QtGui/QRadioButton>
#include <QtGui/QSpacerItem>
#include <QtGui/QVBoxLayout>
#include <QtGui/QWidget>

QT_BEGIN_NAMESPACE

class Ui_ICQAuthReplyUI
{
public:
    QVBoxLayout *vboxLayout;
    QLabel *lblUserReq;
    QHBoxLayout *hboxLayout;
    QLabel *lblReqReason;
    QLabel *lblRequestReason;
    QSpacerItem *spacerItem;
    QHBoxLayout *hboxLayout1;
    QSpacerItem *spacerItem1;
    QRadioButton *rbGrant;
    QRadioButton *rbDecline;
    QSpacerItem *spacerItem2;
    QHBoxLayout *hboxLayout2;
    QLabel *lblReason;
    QLineEdit *leReason;
    QSpacerItem *spacerItem3;

    void setupUi(QWidget *ICQAuthReplyUI)
    {
        if (ICQAuthReplyUI->objectName().isEmpty())
            ICQAuthReplyUI->setObjectName(QString::fromUtf8("ICQAuthReplyUI"));
        ICQAuthReplyUI->resize(522, 151);
        vboxLayout = new QVBoxLayout(ICQAuthReplyUI);
        vboxLayout->setSpacing(6);
        vboxLayout->setObjectName(QString::fromUtf8("vboxLayout"));
        vboxLayout->setContentsMargins(0, 0, 0, 0);
        lblUserReq = new QLabel(ICQAuthReplyUI);
        lblUserReq->setObjectName(QString::fromUtf8("lblUserReq"));

        vboxLayout->addWidget(lblUserReq);

        hboxLayout = new QHBoxLayout();
        hboxLayout->setSpacing(6);
        hboxLayout->setObjectName(QString::fromUtf8("hboxLayout"));
        hboxLayout->setContentsMargins(0, 0, 0, 0);
        lblReqReason = new QLabel(ICQAuthReplyUI);
        lblReqReason->setObjectName(QString::fromUtf8("lblReqReason"));
        QSizePolicy sizePolicy(QSizePolicy::Fixed, QSizePolicy::Preferred);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(lblReqReason->sizePolicy().hasHeightForWidth());
        lblReqReason->setSizePolicy(sizePolicy);

        hboxLayout->addWidget(lblReqReason);

        lblRequestReason = new QLabel(ICQAuthReplyUI);
        lblRequestReason->setObjectName(QString::fromUtf8("lblRequestReason"));
        QSizePolicy sizePolicy1(QSizePolicy::Expanding, QSizePolicy::Preferred);
        sizePolicy1.setHorizontalStretch(0);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(lblRequestReason->sizePolicy().hasHeightForWidth());
        lblRequestReason->setSizePolicy(sizePolicy1);

        hboxLayout->addWidget(lblRequestReason);


        vboxLayout->addLayout(hboxLayout);

        spacerItem = new QSpacerItem(20, 20, QSizePolicy::Minimum, QSizePolicy::Fixed);

        vboxLayout->addItem(spacerItem);

        hboxLayout1 = new QHBoxLayout();
        hboxLayout1->setSpacing(6);
        hboxLayout1->setObjectName(QString::fromUtf8("hboxLayout1"));
        hboxLayout1->setContentsMargins(0, 0, 0, 0);
        spacerItem1 = new QSpacerItem(16, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        hboxLayout1->addItem(spacerItem1);

        rbGrant = new QRadioButton(ICQAuthReplyUI);
        rbGrant->setObjectName(QString::fromUtf8("rbGrant"));
        rbGrant->setChecked(true);

        hboxLayout1->addWidget(rbGrant);

        rbDecline = new QRadioButton(ICQAuthReplyUI);
        rbDecline->setObjectName(QString::fromUtf8("rbDecline"));

        hboxLayout1->addWidget(rbDecline);

        spacerItem2 = new QSpacerItem(16, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        hboxLayout1->addItem(spacerItem2);


        vboxLayout->addLayout(hboxLayout1);

        hboxLayout2 = new QHBoxLayout();
        hboxLayout2->setSpacing(6);
        hboxLayout2->setObjectName(QString::fromUtf8("hboxLayout2"));
        hboxLayout2->setContentsMargins(0, 0, 0, 0);
        lblReason = new QLabel(ICQAuthReplyUI);
        lblReason->setObjectName(QString::fromUtf8("lblReason"));
        QSizePolicy sizePolicy2(QSizePolicy::Minimum, QSizePolicy::Preferred);
        sizePolicy2.setHorizontalStretch(0);
        sizePolicy2.setVerticalStretch(0);
        sizePolicy2.setHeightForWidth(lblReason->sizePolicy().hasHeightForWidth());
        lblReason->setSizePolicy(sizePolicy2);

        hboxLayout2->addWidget(lblReason);

        leReason = new QLineEdit(ICQAuthReplyUI);
        leReason->setObjectName(QString::fromUtf8("leReason"));

        hboxLayout2->addWidget(leReason);


        vboxLayout->addLayout(hboxLayout2);

        spacerItem3 = new QSpacerItem(20, 0, QSizePolicy::Minimum, QSizePolicy::Expanding);

        vboxLayout->addItem(spacerItem3);


        retranslateUi(ICQAuthReplyUI);

        QMetaObject::connectSlotsByName(ICQAuthReplyUI);
    } // setupUi

    void retranslateUi(QWidget *ICQAuthReplyUI)
    {
        ICQAuthReplyUI->setWindowTitle(tr2i18n("ICQ Authorization Reply", 0));
        lblUserReq->setText(tr2i18n("%1 requested authorization to add you to his/her contact list.", 0));
        lblReqReason->setText(tr2i18n("Request Reason:", 0));
        lblRequestReason->setText(tr2i18n("Some reason...", 0));
        rbGrant->setText(tr2i18n("&Grant authorization", 0));
        rbDecline->setText(tr2i18n("&Decline authorization", 0));
        lblReason->setText(tr2i18n("Reason:", 0));
    } // retranslateUi

};

namespace Ui {
    class ICQAuthReplyUI: public Ui_ICQAuthReplyUI {};
} // namespace Ui

QT_END_NAMESPACE

#endif // ICQAUTHREPLYUI_H

