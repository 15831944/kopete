#include <kdialog.h>
#include <klocale.h>

/********************************************************************************
** Form generated from reading UI file 'dlgchangepassword.ui'
**
** Created by: Qt User Interface Compiler version 4.8.7
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_DLGCHANGEPASSWORD_H
#define UI_DLGCHANGEPASSWORD_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtGui/QApplication>
#include <QtGui/QButtonGroup>
#include <QtGui/QGridLayout>
#include <QtGui/QHeaderView>
#include <QtGui/QLabel>
#include <QtGui/QWidget>
#include "klineedit.h"

QT_BEGIN_NAMESPACE

class Ui_DlgChangePassword
{
public:
    QGridLayout *gridLayout;
    QLabel *textLabel1;
    QLabel *textLabel2;
    QLabel *textLabel3;
    KLineEdit *peCurrentPassword;
    KLineEdit *peNewPassword1;
    KLineEdit *peNewPassword2;
    QLabel *lblStatus;

    void setupUi(QWidget *DlgChangePassword)
    {
        if (DlgChangePassword->objectName().isEmpty())
            DlgChangePassword->setObjectName(QString::fromUtf8("DlgChangePassword"));
        DlgChangePassword->resize(265, 132);
        gridLayout = new QGridLayout(DlgChangePassword);
#ifndef UI_Q_OS_MAC
        gridLayout->setSpacing(6);
#endif
        gridLayout->setContentsMargins(11, 11, 11, 11);
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        textLabel1 = new QLabel(DlgChangePassword);
        textLabel1->setObjectName(QString::fromUtf8("textLabel1"));

        gridLayout->addWidget(textLabel1, 0, 0, 1, 1);

        textLabel2 = new QLabel(DlgChangePassword);
        textLabel2->setObjectName(QString::fromUtf8("textLabel2"));

        gridLayout->addWidget(textLabel2, 1, 0, 1, 1);

        textLabel3 = new QLabel(DlgChangePassword);
        textLabel3->setObjectName(QString::fromUtf8("textLabel3"));

        gridLayout->addWidget(textLabel3, 2, 0, 1, 1);

        peCurrentPassword = new KLineEdit(DlgChangePassword);
        peCurrentPassword->setObjectName(QString::fromUtf8("peCurrentPassword"));

        gridLayout->addWidget(peCurrentPassword, 0, 1, 1, 1);

        peNewPassword1 = new KLineEdit(DlgChangePassword);
        peNewPassword1->setObjectName(QString::fromUtf8("peNewPassword1"));

        gridLayout->addWidget(peNewPassword1, 1, 1, 1, 1);

        peNewPassword2 = new KLineEdit(DlgChangePassword);
        peNewPassword2->setObjectName(QString::fromUtf8("peNewPassword2"));

        gridLayout->addWidget(peNewPassword2, 2, 1, 1, 1);

        lblStatus = new QLabel(DlgChangePassword);
        lblStatus->setObjectName(QString::fromUtf8("lblStatus"));
        QSizePolicy sizePolicy(static_cast<QSizePolicy::Policy>(5), static_cast<QSizePolicy::Policy>(4));
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(lblStatus->sizePolicy().hasHeightForWidth());
        lblStatus->setSizePolicy(sizePolicy);
        lblStatus->setAlignment(Qt::AlignCenter);

        gridLayout->addWidget(lblStatus, 3, 0, 1, 2);


        retranslateUi(DlgChangePassword);

        QMetaObject::connectSlotsByName(DlgChangePassword);
    } // setupUi

    void retranslateUi(QWidget *DlgChangePassword)
    {
        textLabel1->setText(tr2i18n("Current password:", 0));
        textLabel2->setText(tr2i18n("New password:", 0));
        textLabel3->setText(tr2i18n("New password:", 0));
        lblStatus->setText(tr2i18n("Please enter your current password first\n"
"and then your new password twice.", 0));
        Q_UNUSED(DlgChangePassword);
    } // retranslateUi

};

namespace Ui {
    class DlgChangePassword: public Ui_DlgChangePassword {};
} // namespace Ui

QT_END_NAMESPACE

#endif // DLGCHANGEPASSWORD_H

