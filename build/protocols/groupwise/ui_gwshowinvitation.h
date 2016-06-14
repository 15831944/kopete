#include <kdialog.h>
#include <klocale.h>

/********************************************************************************
** Form generated from reading UI file 'gwshowinvitation.ui'
**
** Created by: Qt User Interface Compiler version 4.8.7
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_GWSHOWINVITATION_H
#define UI_GWSHOWINVITATION_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtGui/QApplication>
#include <QtGui/QButtonGroup>
#include <QtGui/QCheckBox>
#include <QtGui/QGridLayout>
#include <QtGui/QHBoxLayout>
#include <QtGui/QHeaderView>
#include <QtGui/QLabel>
#include <QtGui/QSpacerItem>
#include <QtGui/QVBoxLayout>
#include <QtGui/QWidget>

QT_BEGIN_NAMESPACE

class Ui_ShowInvitation
{
public:
    QVBoxLayout *vboxLayout;
    QGridLayout *gridLayout;
    QLabel *textLabel1;
    QLabel *textLabel3;
    QLabel *dateTime;
    QLabel *contactName;
    QLabel *message;
    QHBoxLayout *hboxLayout;
    QLabel *textLabel6;
    QSpacerItem *spacerItem;
    QCheckBox *cbDontShowAgain;

    void setupUi(QWidget *ShowInvitation)
    {
        if (ShowInvitation->objectName().isEmpty())
            ShowInvitation->setObjectName(QString::fromUtf8("ShowInvitation"));
        ShowInvitation->resize(495, 204);
        vboxLayout = new QVBoxLayout(ShowInvitation);
        vboxLayout->setSpacing(6);
        vboxLayout->setObjectName(QString::fromUtf8("vboxLayout"));
        vboxLayout->setContentsMargins(11, 11, 11, 11);
        gridLayout = new QGridLayout();
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        gridLayout->setHorizontalSpacing(6);
        gridLayout->setVerticalSpacing(6);
        gridLayout->setContentsMargins(0, 0, 0, 0);
        textLabel1 = new QLabel(ShowInvitation);
        textLabel1->setObjectName(QString::fromUtf8("textLabel1"));
        textLabel1->setWordWrap(false);

        gridLayout->addWidget(textLabel1, 0, 0, 1, 1);

        textLabel3 = new QLabel(ShowInvitation);
        textLabel3->setObjectName(QString::fromUtf8("textLabel3"));
        textLabel3->setWordWrap(false);

        gridLayout->addWidget(textLabel3, 1, 0, 1, 1);

        dateTime = new QLabel(ShowInvitation);
        dateTime->setObjectName(QString::fromUtf8("dateTime"));
        QSizePolicy sizePolicy(QSizePolicy::Preferred, QSizePolicy::Preferred);
        sizePolicy.setHorizontalStretch(2);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(dateTime->sizePolicy().hasHeightForWidth());
        dateTime->setSizePolicy(sizePolicy);
        dateTime->setWordWrap(false);

        gridLayout->addWidget(dateTime, 1, 1, 1, 1);

        contactName = new QLabel(ShowInvitation);
        contactName->setObjectName(QString::fromUtf8("contactName"));
        contactName->setWordWrap(false);

        gridLayout->addWidget(contactName, 0, 1, 1, 1);


        vboxLayout->addLayout(gridLayout);

        message = new QLabel(ShowInvitation);
        message->setObjectName(QString::fromUtf8("message"));
        message->setFrameShape(QFrame::Panel);
        message->setFrameShadow(QFrame::Sunken);
        message->setAlignment(Qt::AlignVCenter);
        message->setWordWrap(false);

        vboxLayout->addWidget(message);

        hboxLayout = new QHBoxLayout();
        hboxLayout->setSpacing(6);
        hboxLayout->setObjectName(QString::fromUtf8("hboxLayout"));
        hboxLayout->setContentsMargins(0, 0, 0, 0);
        textLabel6 = new QLabel(ShowInvitation);
        textLabel6->setObjectName(QString::fromUtf8("textLabel6"));
        textLabel6->setWordWrap(false);

        hboxLayout->addWidget(textLabel6);

        spacerItem = new QSpacerItem(20, 31, QSizePolicy::Minimum, QSizePolicy::Expanding);

        hboxLayout->addItem(spacerItem);


        vboxLayout->addLayout(hboxLayout);

        cbDontShowAgain = new QCheckBox(ShowInvitation);
        cbDontShowAgain->setObjectName(QString::fromUtf8("cbDontShowAgain"));

        vboxLayout->addWidget(cbDontShowAgain);


        retranslateUi(ShowInvitation);

        QMetaObject::connectSlotsByName(ShowInvitation);
    } // setupUi

    void retranslateUi(QWidget *ShowInvitation)
    {
        textLabel1->setText(tr2i18n("<p align=\"right\">From:</p>", 0));
        textLabel3->setText(tr2i18n("<p align=\"right\">Sent:</p>", 0));
        dateTime->setText(tr2i18n("Invitation Date", 0));
        contactName->setText(tr2i18n("Contact Name", 0));
        message->setText(tr2i18n("Invitation Message", 0));
        textLabel6->setText(tr2i18n("Would you like to join the conversation?", 0));
        cbDontShowAgain->setText(tr2i18n("A&lways accept invitations", 0));
        Q_UNUSED(ShowInvitation);
    } // retranslateUi

};

namespace Ui {
    class ShowInvitation: public Ui_ShowInvitation {};
} // namespace Ui

QT_END_NAMESPACE

#endif // GWSHOWINVITATION_H

