#include <kdialog.h>
#include <klocale.h>

/********************************************************************************
** Form generated from reading UI file 'icqchangepassword.ui'
**
** Created by: Qt User Interface Compiler version 4.8.7
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_ICQCHANGEPASSWORD_H
#define UI_ICQCHANGEPASSWORD_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtGui/QApplication>
#include <QtGui/QButtonGroup>
#include <QtGui/QGridLayout>
#include <QtGui/QHeaderView>
#include <QtGui/QLabel>
#include <QtGui/QLineEdit>
#include <QtGui/QSpacerItem>
#include <QtGui/QVBoxLayout>
#include <QtGui/QWidget>

QT_BEGIN_NAMESPACE

class Ui_ICQChangePassword
{
public:
    QVBoxLayout *vboxLayout;
    QGridLayout *gridLayout;
    QLabel *textLabel1;
    QLineEdit *currentPassword;
    QLabel *textLabel2;
    QLineEdit *newPassword1;
    QLabel *textLabel3;
    QLineEdit *newPassword2;
    QLabel *lblStatus;
    QSpacerItem *spacerItem;

    void setupUi(QWidget *ICQChangePassword)
    {
        if (ICQChangePassword->objectName().isEmpty())
            ICQChangePassword->setObjectName(QString::fromUtf8("ICQChangePassword"));
        ICQChangePassword->resize(358, 158);
        vboxLayout = new QVBoxLayout(ICQChangePassword);
        vboxLayout->setObjectName(QString::fromUtf8("vboxLayout"));
        vboxLayout->setContentsMargins(0, 0, 0, 0);
        gridLayout = new QGridLayout();
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        textLabel1 = new QLabel(ICQChangePassword);
        textLabel1->setObjectName(QString::fromUtf8("textLabel1"));

        gridLayout->addWidget(textLabel1, 0, 0, 1, 1);

        currentPassword = new QLineEdit(ICQChangePassword);
        currentPassword->setObjectName(QString::fromUtf8("currentPassword"));
        currentPassword->setMaxLength(8);
        currentPassword->setEchoMode(QLineEdit::Password);

        gridLayout->addWidget(currentPassword, 0, 1, 1, 1);

        textLabel2 = new QLabel(ICQChangePassword);
        textLabel2->setObjectName(QString::fromUtf8("textLabel2"));

        gridLayout->addWidget(textLabel2, 1, 0, 1, 1);

        newPassword1 = new QLineEdit(ICQChangePassword);
        newPassword1->setObjectName(QString::fromUtf8("newPassword1"));
        newPassword1->setMaxLength(8);
        newPassword1->setEchoMode(QLineEdit::Password);

        gridLayout->addWidget(newPassword1, 1, 1, 1, 1);

        textLabel3 = new QLabel(ICQChangePassword);
        textLabel3->setObjectName(QString::fromUtf8("textLabel3"));

        gridLayout->addWidget(textLabel3, 2, 0, 1, 1);

        newPassword2 = new QLineEdit(ICQChangePassword);
        newPassword2->setObjectName(QString::fromUtf8("newPassword2"));
        newPassword2->setMaxLength(8);
        newPassword2->setEchoMode(QLineEdit::Password);

        gridLayout->addWidget(newPassword2, 2, 1, 1, 1);


        vboxLayout->addLayout(gridLayout);

        lblStatus = new QLabel(ICQChangePassword);
        lblStatus->setObjectName(QString::fromUtf8("lblStatus"));
        QSizePolicy sizePolicy(QSizePolicy::Preferred, QSizePolicy::Maximum);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(lblStatus->sizePolicy().hasHeightForWidth());
        lblStatus->setSizePolicy(sizePolicy);
        lblStatus->setAlignment(Qt::AlignCenter);

        vboxLayout->addWidget(lblStatus);

        spacerItem = new QSpacerItem(20, 0, QSizePolicy::Minimum, QSizePolicy::Expanding);

        vboxLayout->addItem(spacerItem);

#ifndef UI_QT_NO_SHORTCUT
        textLabel1->setBuddy(currentPassword);
        textLabel2->setBuddy(newPassword1);
        textLabel3->setBuddy(newPassword2);
#endif // QT_NO_SHORTCUT

        retranslateUi(ICQChangePassword);

        QMetaObject::connectSlotsByName(ICQChangePassword);
    } // setupUi

    void retranslateUi(QWidget *ICQChangePassword)
    {
        textLabel1->setText(tr2i18n("Current password:", 0));
        textLabel2->setText(tr2i18n("New password:", 0));
        textLabel3->setText(tr2i18n("New password:", 0));
        lblStatus->setText(tr2i18n("Please enter your current password first\n"
"and then your new password twice.\n"
"Password have to be between 6-8 characters long.", 0));
        Q_UNUSED(ICQChangePassword);
    } // retranslateUi

};

namespace Ui {
    class ICQChangePassword: public Ui_ICQChangePassword {};
} // namespace Ui

QT_END_NAMESPACE

#endif // ICQCHANGEPASSWORD_H

