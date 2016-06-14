#include <kdialog.h>
#include <klocale.h>

/********************************************************************************
** Form generated from reading UI file 'bonjouraccountpreferences.ui'
**
** Created by: Qt User Interface Compiler version 4.8.7
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_BONJOURACCOUNTPREFERENCES_H
#define UI_BONJOURACCOUNTPREFERENCES_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtGui/QApplication>
#include <QtGui/QButtonGroup>
#include <QtGui/QGroupBox>
#include <QtGui/QHeaderView>
#include <QtGui/QLabel>
#include <QtGui/QLineEdit>
#include <QtGui/QSpacerItem>
#include <QtGui/QTabWidget>
#include <QtGui/QVBoxLayout>
#include <QtGui/QWidget>

QT_BEGIN_NAMESPACE

class Ui_BonjourAccountPreferences
{
public:
    QVBoxLayout *vboxLayout;
    QTabWidget *tabWidget11;
    QWidget *tab;
    QVBoxLayout *vboxLayout1;
    QGroupBox *groupBox;
    QVBoxLayout *vboxLayout2;
    QLabel *label;
    QLineEdit *kcfg_username;
    QLabel *label_3;
    QLineEdit *kcfg_firstName;
    QLabel *label_4;
    QLineEdit *kcfg_emailAddress;
    QLabel *label_2;
    QLineEdit *kcfg_lastName;
    QGroupBox *groupBox_2;
    QVBoxLayout *vboxLayout3;
    QLabel *textLabel12;
    QSpacerItem *spacerItem;
    QLabel *labelStatusMessage;

    void setupUi(QWidget *BonjourAccountPreferences)
    {
        if (BonjourAccountPreferences->objectName().isEmpty())
            BonjourAccountPreferences->setObjectName(QString::fromUtf8("BonjourAccountPreferences"));
        BonjourAccountPreferences->resize(362, 410);
        vboxLayout = new QVBoxLayout(BonjourAccountPreferences);
        vboxLayout->setSpacing(6);
        vboxLayout->setObjectName(QString::fromUtf8("vboxLayout"));
        vboxLayout->setContentsMargins(0, 0, 0, 0);
        tabWidget11 = new QTabWidget(BonjourAccountPreferences);
        tabWidget11->setObjectName(QString::fromUtf8("tabWidget11"));
        tab = new QWidget();
        tab->setObjectName(QString::fromUtf8("tab"));
        vboxLayout1 = new QVBoxLayout(tab);
        vboxLayout1->setSpacing(6);
        vboxLayout1->setObjectName(QString::fromUtf8("vboxLayout1"));
        vboxLayout1->setContentsMargins(9, 9, 9, 9);
        groupBox = new QGroupBox(tab);
        groupBox->setObjectName(QString::fromUtf8("groupBox"));
        vboxLayout2 = new QVBoxLayout(groupBox);
        vboxLayout2->setSpacing(6);
        vboxLayout2->setObjectName(QString::fromUtf8("vboxLayout2"));
        vboxLayout2->setContentsMargins(9, 9, 9, 9);
        label = new QLabel(groupBox);
        label->setObjectName(QString::fromUtf8("label"));

        vboxLayout2->addWidget(label);

        kcfg_username = new QLineEdit(groupBox);
        kcfg_username->setObjectName(QString::fromUtf8("kcfg_username"));

        vboxLayout2->addWidget(kcfg_username);

        label_3 = new QLabel(groupBox);
        label_3->setObjectName(QString::fromUtf8("label_3"));

        vboxLayout2->addWidget(label_3);

        kcfg_firstName = new QLineEdit(groupBox);
        kcfg_firstName->setObjectName(QString::fromUtf8("kcfg_firstName"));

        vboxLayout2->addWidget(kcfg_firstName);

        label_4 = new QLabel(groupBox);
        label_4->setObjectName(QString::fromUtf8("label_4"));

        vboxLayout2->addWidget(label_4);

        kcfg_emailAddress = new QLineEdit(groupBox);
        kcfg_emailAddress->setObjectName(QString::fromUtf8("kcfg_emailAddress"));

        vboxLayout2->addWidget(kcfg_emailAddress);

        label_2 = new QLabel(groupBox);
        label_2->setObjectName(QString::fromUtf8("label_2"));

        vboxLayout2->addWidget(label_2);

        kcfg_lastName = new QLineEdit(groupBox);
        kcfg_lastName->setObjectName(QString::fromUtf8("kcfg_lastName"));

        vboxLayout2->addWidget(kcfg_lastName);


        vboxLayout1->addWidget(groupBox);

        groupBox_2 = new QGroupBox(tab);
        groupBox_2->setObjectName(QString::fromUtf8("groupBox_2"));
        vboxLayout3 = new QVBoxLayout(groupBox_2);
        vboxLayout3->setSpacing(6);
        vboxLayout3->setObjectName(QString::fromUtf8("vboxLayout3"));
        vboxLayout3->setContentsMargins(9, 9, 9, 9);
        textLabel12 = new QLabel(groupBox_2);
        textLabel12->setObjectName(QString::fromUtf8("textLabel12"));
        QSizePolicy sizePolicy(QSizePolicy::MinimumExpanding, QSizePolicy::Minimum);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(textLabel12->sizePolicy().hasHeightForWidth());
        textLabel12->setSizePolicy(sizePolicy);
        textLabel12->setAlignment(Qt::AlignTop);
        textLabel12->setWordWrap(true);

        vboxLayout3->addWidget(textLabel12);


        vboxLayout1->addWidget(groupBox_2);

        spacerItem = new QSpacerItem(20, 131, QSizePolicy::Minimum, QSizePolicy::Expanding);

        vboxLayout1->addItem(spacerItem);

        tabWidget11->addTab(tab, QString());

        vboxLayout->addWidget(tabWidget11);

        labelStatusMessage = new QLabel(BonjourAccountPreferences);
        labelStatusMessage->setObjectName(QString::fromUtf8("labelStatusMessage"));
        labelStatusMessage->setAlignment(Qt::AlignCenter);

        vboxLayout->addWidget(labelStatusMessage);


        retranslateUi(BonjourAccountPreferences);

        QMetaObject::connectSlotsByName(BonjourAccountPreferences);
    } // setupUi

    void retranslateUi(QWidget *BonjourAccountPreferences)
    {
        BonjourAccountPreferences->setWindowTitle(tr2i18n("Account Preferences - Bonjour", 0));
        groupBox->setTitle(tr2i18n("Account Information", 0));
        label->setText(tr2i18n("Name:", 0));
        kcfg_username->setText(tr2i18n("kde-devel", 0));
        label_3->setText(tr2i18n("First name:", 0));
        kcfg_firstName->setText(tr2i18n("KDE", 0));
        label_4->setText(tr2i18n("Email address:", 0));
        kcfg_emailAddress->setText(tr2i18n("kde@example.com", 0));
        label_2->setText(tr2i18n("Last name:", 0));
        kcfg_lastName->setText(tr2i18n("Developer", 0));
        groupBox_2->setTitle(tr2i18n("Information", 0));
        textLabel12->setText(tr2i18n("The Bonjour protocol needs you to at least specify a name. The name can be of form 'Full Name@Hostname'", 0));
        tabWidget11->setTabText(tabWidget11->indexOf(tab), tr2i18n("B&asic Setup", 0));
        labelStatusMessage->setText(QString());
    } // retranslateUi

};

namespace Ui {
    class BonjourAccountPreferences: public Ui_BonjourAccountPreferences {};
} // namespace Ui

QT_END_NAMESPACE

#endif // BONJOURACCOUNTPREFERENCES_H

