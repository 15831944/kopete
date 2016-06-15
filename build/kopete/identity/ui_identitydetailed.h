#include <kdialog.h>
#include <klocale.h>

/********************************************************************************
** Form generated from reading UI file 'identitydetailed.ui'
**
** Created by: Qt User Interface Compiler version 4.8.7
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_IDENTITYDETAILED_H
#define UI_IDENTITYDETAILED_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtGui/QApplication>
#include <QtGui/QButtonGroup>
#include <QtGui/QFormLayout>
#include <QtGui/QHeaderView>
#include <QtGui/QLabel>
#include <QtGui/QLineEdit>
#include <QtGui/QWidget>

QT_BEGIN_NAMESPACE

class Ui_IdentityDetailed
{
public:
    QFormLayout *formLayout;
    QLabel *emailLabel;
    QLineEdit *email;
    QLabel *phoneLabel;
    QLineEdit *privatePhone;
    QLabel *mobileLabel;
    QLineEdit *mobilePhone;

    void setupUi(QWidget *IdentityDetailed)
    {
        if (IdentityDetailed->objectName().isEmpty())
            IdentityDetailed->setObjectName(QString::fromUtf8("IdentityDetailed"));
        IdentityDetailed->resize(457, 98);
        formLayout = new QFormLayout(IdentityDetailed);
        formLayout->setObjectName(QString::fromUtf8("formLayout"));
        emailLabel = new QLabel(IdentityDetailed);
        emailLabel->setObjectName(QString::fromUtf8("emailLabel"));

        formLayout->setWidget(0, QFormLayout::LabelRole, emailLabel);

        email = new QLineEdit(IdentityDetailed);
        email->setObjectName(QString::fromUtf8("email"));

        formLayout->setWidget(0, QFormLayout::FieldRole, email);

        phoneLabel = new QLabel(IdentityDetailed);
        phoneLabel->setObjectName(QString::fromUtf8("phoneLabel"));

        formLayout->setWidget(1, QFormLayout::LabelRole, phoneLabel);

        privatePhone = new QLineEdit(IdentityDetailed);
        privatePhone->setObjectName(QString::fromUtf8("privatePhone"));

        formLayout->setWidget(1, QFormLayout::FieldRole, privatePhone);

        mobileLabel = new QLabel(IdentityDetailed);
        mobileLabel->setObjectName(QString::fromUtf8("mobileLabel"));

        formLayout->setWidget(2, QFormLayout::LabelRole, mobileLabel);

        mobilePhone = new QLineEdit(IdentityDetailed);
        mobilePhone->setObjectName(QString::fromUtf8("mobilePhone"));

        formLayout->setWidget(2, QFormLayout::FieldRole, mobilePhone);

#ifndef UI_QT_NO_SHORTCUT
        emailLabel->setBuddy(email);
        phoneLabel->setBuddy(privatePhone);
        mobileLabel->setBuddy(mobilePhone);
#endif // QT_NO_SHORTCUT

        retranslateUi(IdentityDetailed);

        QMetaObject::connectSlotsByName(IdentityDetailed);
    } // setupUi

    void retranslateUi(QWidget *IdentityDetailed)
    {
        IdentityDetailed->setWindowTitle(tr2i18n("Detailed Info", 0));
        emailLabel->setText(tr2i18n("E-mail: ", 0));
        phoneLabel->setText(tr2i18n("Private phone:", 0));
        mobileLabel->setText(tr2i18n("Mobile phone:", 0));
    } // retranslateUi

};

namespace Ui {
    class IdentityDetailed: public Ui_IdentityDetailed {};
} // namespace Ui

QT_END_NAMESPACE

#endif // IDENTITYDETAILED_H

