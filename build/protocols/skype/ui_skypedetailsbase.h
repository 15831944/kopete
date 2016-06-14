#include <kdialog.h>
#include <klocale.h>

/********************************************************************************
** Form generated from reading UI file 'skypedetailsbase.ui'
**
** Created by: Qt User Interface Compiler version 4.8.7
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_SKYPEDETAILSBASE_H
#define UI_SKYPEDETAILSBASE_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtGui/QApplication>
#include <QtGui/QButtonGroup>
#include <QtGui/QComboBox>
#include <QtGui/QGridLayout>
#include <QtGui/QHeaderView>
#include <QtGui/QLabel>
#include <QtGui/QLineEdit>
#include <QtGui/QWidget>

QT_BEGIN_NAMESPACE

class Ui_SkypeDetailsBase
{
public:
    QGridLayout *gridLayout;
    QLabel *textLabel1;
    QLineEdit *idEdit;
    QLineEdit *privatePhoneEdit;
    QComboBox *authorCombo;
    QLabel *textLabel5;
    QLabel *textLabel6;
    QLineEdit *homepageEdit;
    QLabel *textLabel4;
    QLabel *textLabel7;
    QLineEdit *mobilePhoneEdit;
    QLineEdit *workPhoneEdit;
    QLabel *textLabel2;
    QLineEdit *nameEdit;
    QLineEdit *nickEdit;
    QLabel *textLabel3;
    QLabel *textLabel1_2;
    QLabel *textLabel1_3;
    QLineEdit *sexEdit;

    void setupUi(QWidget *SkypeDetailsBase)
    {
        if (SkypeDetailsBase->objectName().isEmpty())
            SkypeDetailsBase->setObjectName(QString::fromUtf8("SkypeDetailsBase"));
        gridLayout = new QGridLayout(SkypeDetailsBase);
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        textLabel1 = new QLabel(SkypeDetailsBase);
        textLabel1->setObjectName(QString::fromUtf8("textLabel1"));
        textLabel1->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);
        textLabel1->setWordWrap(false);

        gridLayout->addWidget(textLabel1, 0, 0, 1, 1);

        idEdit = new QLineEdit(SkypeDetailsBase);
        idEdit->setObjectName(QString::fromUtf8("idEdit"));
        idEdit->setReadOnly(true);

        gridLayout->addWidget(idEdit, 0, 1, 2, 1);

        privatePhoneEdit = new QLineEdit(SkypeDetailsBase);
        privatePhoneEdit->setObjectName(QString::fromUtf8("privatePhoneEdit"));
        privatePhoneEdit->setReadOnly(true);

        gridLayout->addWidget(privatePhoneEdit, 5, 1, 1, 1);

        authorCombo = new QComboBox(SkypeDetailsBase);
        authorCombo->setObjectName(QString::fromUtf8("authorCombo"));

        gridLayout->addWidget(authorCombo, 9, 1, 1, 1);

        textLabel5 = new QLabel(SkypeDetailsBase);
        textLabel5->setObjectName(QString::fromUtf8("textLabel5"));
        textLabel5->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);
        textLabel5->setWordWrap(false);

        gridLayout->addWidget(textLabel5, 6, 0, 1, 1);

        textLabel6 = new QLabel(SkypeDetailsBase);
        textLabel6->setObjectName(QString::fromUtf8("textLabel6"));
        textLabel6->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);
        textLabel6->setWordWrap(false);

        gridLayout->addWidget(textLabel6, 7, 0, 1, 1);

        homepageEdit = new QLineEdit(SkypeDetailsBase);
        homepageEdit->setObjectName(QString::fromUtf8("homepageEdit"));
        homepageEdit->setReadOnly(true);

        gridLayout->addWidget(homepageEdit, 8, 1, 1, 1);

        textLabel4 = new QLabel(SkypeDetailsBase);
        textLabel4->setObjectName(QString::fromUtf8("textLabel4"));
        textLabel4->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);
        textLabel4->setWordWrap(false);

        gridLayout->addWidget(textLabel4, 5, 0, 1, 1);

        textLabel7 = new QLabel(SkypeDetailsBase);
        textLabel7->setObjectName(QString::fromUtf8("textLabel7"));
        textLabel7->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);
        textLabel7->setWordWrap(false);

        gridLayout->addWidget(textLabel7, 9, 0, 1, 1);

        mobilePhoneEdit = new QLineEdit(SkypeDetailsBase);
        mobilePhoneEdit->setObjectName(QString::fromUtf8("mobilePhoneEdit"));
        mobilePhoneEdit->setReadOnly(true);

        gridLayout->addWidget(mobilePhoneEdit, 6, 1, 1, 1);

        workPhoneEdit = new QLineEdit(SkypeDetailsBase);
        workPhoneEdit->setObjectName(QString::fromUtf8("workPhoneEdit"));
        workPhoneEdit->setReadOnly(true);

        gridLayout->addWidget(workPhoneEdit, 7, 1, 1, 1);

        textLabel2 = new QLabel(SkypeDetailsBase);
        textLabel2->setObjectName(QString::fromUtf8("textLabel2"));
        textLabel2->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);
        textLabel2->setWordWrap(false);

        gridLayout->addWidget(textLabel2, 1, 0, 2, 1);

        nameEdit = new QLineEdit(SkypeDetailsBase);
        nameEdit->setObjectName(QString::fromUtf8("nameEdit"));
        nameEdit->setReadOnly(true);

        gridLayout->addWidget(nameEdit, 3, 1, 1, 1);

        nickEdit = new QLineEdit(SkypeDetailsBase);
        nickEdit->setObjectName(QString::fromUtf8("nickEdit"));
        nickEdit->setReadOnly(true);

        gridLayout->addWidget(nickEdit, 2, 1, 1, 1);

        textLabel3 = new QLabel(SkypeDetailsBase);
        textLabel3->setObjectName(QString::fromUtf8("textLabel3"));
        textLabel3->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);
        textLabel3->setWordWrap(false);

        gridLayout->addWidget(textLabel3, 3, 0, 1, 1);

        textLabel1_2 = new QLabel(SkypeDetailsBase);
        textLabel1_2->setObjectName(QString::fromUtf8("textLabel1_2"));
        textLabel1_2->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);
        textLabel1_2->setWordWrap(false);

        gridLayout->addWidget(textLabel1_2, 8, 0, 1, 1);

        textLabel1_3 = new QLabel(SkypeDetailsBase);
        textLabel1_3->setObjectName(QString::fromUtf8("textLabel1_3"));
        textLabel1_3->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);
        textLabel1_3->setWordWrap(false);

        gridLayout->addWidget(textLabel1_3, 4, 0, 1, 1);

        sexEdit = new QLineEdit(SkypeDetailsBase);
        sexEdit->setObjectName(QString::fromUtf8("sexEdit"));
        sexEdit->setReadOnly(true);

        gridLayout->addWidget(sexEdit, 4, 1, 1, 1);


        retranslateUi(SkypeDetailsBase);

        QMetaObject::connectSlotsByName(SkypeDetailsBase);
    } // setupUi

    void retranslateUi(QWidget *SkypeDetailsBase)
    {
        SkypeDetailsBase->setWindowTitle(tr2i18n("User's Details", 0));
        textLabel1->setText(tr2i18n("Skype ID:", 0));
        authorCombo->clear();
        authorCombo->insertItems(0, QStringList()
         << tr2i18n("Authorized", 0)
         << tr2i18n("Not Authorized", 0)
         << tr2i18n("Blocked", 0)
        );
        textLabel5->setText(tr2i18n("Mobile phone:", 0));
        textLabel6->setText(tr2i18n("Work phone:", 0));
        textLabel4->setText(tr2i18n("Private phone:", 0));
        textLabel7->setText(tr2i18n("Is authorized:", 0));
        textLabel2->setText(tr2i18n("Display Name:", 0));
        textLabel3->setText(tr2i18n("Full name:", 0));
        textLabel1_2->setText(tr2i18n("Homepage:", 0));
        textLabel1_3->setText(tr2i18n("Sex:", 0));
    } // retranslateUi

};

namespace Ui {
    class SkypeDetailsBase: public Ui_SkypeDetailsBase {};
} // namespace Ui

QT_END_NAMESPACE

#endif // SKYPEDETAILSBASE_H

