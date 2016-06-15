#include <kdialog.h>
#include <klocale.h>

/********************************************************************************
** Form generated from reading UI file 'icqsearchbase.ui'
**
** Created by: Qt User Interface Compiler version 4.8.7
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_ICQSEARCHBASE_H
#define UI_ICQSEARCHBASE_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtGui/QApplication>
#include <QtGui/QButtonGroup>
#include <QtGui/QCheckBox>
#include <QtGui/QComboBox>
#include <QtGui/QGridLayout>
#include <QtGui/QHeaderView>
#include <QtGui/QLabel>
#include <QtGui/QLineEdit>
#include <QtGui/QSpacerItem>
#include <QtGui/QTabWidget>
#include <QtGui/QTreeView>
#include <QtGui/QVBoxLayout>
#include <QtGui/QWidget>
#include "kpushbutton.h"

QT_BEGIN_NAMESPACE

class Ui_ICQSearchBase
{
public:
    QGridLayout *gridLayout;
    QTabWidget *tabWidget3;
    QWidget *tabWhitepages;
    QGridLayout *gridLayout1;
    QLabel *textLabel2;
    QLineEdit *nickName;
    QLabel *textLabel3;
    QLineEdit *firstName;
    QLabel *textLabel6;
    QLineEdit *email;
    QLabel *textLabel4;
    QLineEdit *lastName;
    QLabel *textLabel8;
    QComboBox *gender;
    QLabel *textLabel10;
    QLineEdit *city;
    QLabel *textLabel9;
    QComboBox *language;
    QLabel *textLabel11;
    QComboBox *country;
    QCheckBox *onlyOnline;
    QSpacerItem *spacerItem;
    QWidget *tabUIN;
    QGridLayout *gridLayout2;
    QLabel *textLabel1;
    QLineEdit *uin;
    QSpacerItem *spacerItem1;
    QSpacerItem *spacerItem2;
    QTreeView *searchResults;
    QVBoxLayout *vboxLayout;
    KPushButton *searchButton;
    KPushButton *clearButton;
    KPushButton *stopButton;
    KPushButton *userInfoButton;
    QSpacerItem *spacerItem3;

    void setupUi(QWidget *ICQSearchBase)
    {
        if (ICQSearchBase->objectName().isEmpty())
            ICQSearchBase->setObjectName(QString::fromUtf8("ICQSearchBase"));
        ICQSearchBase->resize(640, 408);
        gridLayout = new QGridLayout(ICQSearchBase);
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        gridLayout->setContentsMargins(0, -1, 0, 0);
        tabWidget3 = new QTabWidget(ICQSearchBase);
        tabWidget3->setObjectName(QString::fromUtf8("tabWidget3"));
        QSizePolicy sizePolicy(QSizePolicy::MinimumExpanding, QSizePolicy::Preferred);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(tabWidget3->sizePolicy().hasHeightForWidth());
        tabWidget3->setSizePolicy(sizePolicy);
        tabWhitepages = new QWidget();
        tabWhitepages->setObjectName(QString::fromUtf8("tabWhitepages"));
        gridLayout1 = new QGridLayout(tabWhitepages);
        gridLayout1->setObjectName(QString::fromUtf8("gridLayout1"));
        textLabel2 = new QLabel(tabWhitepages);
        textLabel2->setObjectName(QString::fromUtf8("textLabel2"));

        gridLayout1->addWidget(textLabel2, 0, 0, 1, 1);

        nickName = new QLineEdit(tabWhitepages);
        nickName->setObjectName(QString::fromUtf8("nickName"));

        gridLayout1->addWidget(nickName, 0, 1, 1, 1);

        textLabel3 = new QLabel(tabWhitepages);
        textLabel3->setObjectName(QString::fromUtf8("textLabel3"));

        gridLayout1->addWidget(textLabel3, 0, 2, 1, 1);

        firstName = new QLineEdit(tabWhitepages);
        firstName->setObjectName(QString::fromUtf8("firstName"));

        gridLayout1->addWidget(firstName, 0, 3, 1, 1);

        textLabel6 = new QLabel(tabWhitepages);
        textLabel6->setObjectName(QString::fromUtf8("textLabel6"));

        gridLayout1->addWidget(textLabel6, 1, 0, 1, 1);

        email = new QLineEdit(tabWhitepages);
        email->setObjectName(QString::fromUtf8("email"));

        gridLayout1->addWidget(email, 1, 1, 1, 1);

        textLabel4 = new QLabel(tabWhitepages);
        textLabel4->setObjectName(QString::fromUtf8("textLabel4"));

        gridLayout1->addWidget(textLabel4, 1, 2, 1, 1);

        lastName = new QLineEdit(tabWhitepages);
        lastName->setObjectName(QString::fromUtf8("lastName"));

        gridLayout1->addWidget(lastName, 1, 3, 1, 1);

        textLabel8 = new QLabel(tabWhitepages);
        textLabel8->setObjectName(QString::fromUtf8("textLabel8"));

        gridLayout1->addWidget(textLabel8, 2, 0, 1, 1);

        gender = new QComboBox(tabWhitepages);
        gender->setObjectName(QString::fromUtf8("gender"));

        gridLayout1->addWidget(gender, 2, 1, 1, 1);

        textLabel10 = new QLabel(tabWhitepages);
        textLabel10->setObjectName(QString::fromUtf8("textLabel10"));

        gridLayout1->addWidget(textLabel10, 2, 2, 1, 1);

        city = new QLineEdit(tabWhitepages);
        city->setObjectName(QString::fromUtf8("city"));

        gridLayout1->addWidget(city, 2, 3, 1, 1);

        textLabel9 = new QLabel(tabWhitepages);
        textLabel9->setObjectName(QString::fromUtf8("textLabel9"));

        gridLayout1->addWidget(textLabel9, 3, 0, 1, 1);

        language = new QComboBox(tabWhitepages);
        language->setObjectName(QString::fromUtf8("language"));

        gridLayout1->addWidget(language, 3, 1, 1, 1);

        textLabel11 = new QLabel(tabWhitepages);
        textLabel11->setObjectName(QString::fromUtf8("textLabel11"));

        gridLayout1->addWidget(textLabel11, 3, 2, 1, 1);

        country = new QComboBox(tabWhitepages);
        country->setObjectName(QString::fromUtf8("country"));

        gridLayout1->addWidget(country, 3, 3, 1, 1);

        onlyOnline = new QCheckBox(tabWhitepages);
        onlyOnline->setObjectName(QString::fromUtf8("onlyOnline"));

        gridLayout1->addWidget(onlyOnline, 4, 0, 1, 2);

        spacerItem = new QSpacerItem(166, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        gridLayout1->addItem(spacerItem, 4, 2, 1, 2);

        tabWidget3->addTab(tabWhitepages, QString());
        tabUIN = new QWidget();
        tabUIN->setObjectName(QString::fromUtf8("tabUIN"));
        gridLayout2 = new QGridLayout(tabUIN);
        gridLayout2->setObjectName(QString::fromUtf8("gridLayout2"));
        textLabel1 = new QLabel(tabUIN);
        textLabel1->setObjectName(QString::fromUtf8("textLabel1"));

        gridLayout2->addWidget(textLabel1, 0, 0, 1, 1);

        uin = new QLineEdit(tabUIN);
        uin->setObjectName(QString::fromUtf8("uin"));

        gridLayout2->addWidget(uin, 0, 1, 1, 1);

        spacerItem1 = new QSpacerItem(41, 91, QSizePolicy::Minimum, QSizePolicy::Expanding);

        gridLayout2->addItem(spacerItem1, 1, 1, 1, 1);

        tabWidget3->addTab(tabUIN, QString());

        gridLayout->addWidget(tabWidget3, 0, 0, 1, 1);

        spacerItem2 = new QSpacerItem(82, 181, QSizePolicy::Minimum, QSizePolicy::Preferred);

        gridLayout->addItem(spacerItem2, 0, 1, 1, 1);

        searchResults = new QTreeView(ICQSearchBase);
        searchResults->setObjectName(QString::fromUtf8("searchResults"));
        searchResults->setAlternatingRowColors(true);
        searchResults->setRootIsDecorated(false);

        gridLayout->addWidget(searchResults, 1, 0, 1, 1);

        vboxLayout = new QVBoxLayout();
        vboxLayout->setSpacing(6);
        vboxLayout->setObjectName(QString::fromUtf8("vboxLayout"));
        searchButton = new KPushButton(ICQSearchBase);
        searchButton->setObjectName(QString::fromUtf8("searchButton"));

        vboxLayout->addWidget(searchButton);

        clearButton = new KPushButton(ICQSearchBase);
        clearButton->setObjectName(QString::fromUtf8("clearButton"));
        clearButton->setEnabled(false);

        vboxLayout->addWidget(clearButton);

        stopButton = new KPushButton(ICQSearchBase);
        stopButton->setObjectName(QString::fromUtf8("stopButton"));
        stopButton->setEnabled(false);
        stopButton->setProperty("stdItem", QVariant(26));

        vboxLayout->addWidget(stopButton);

        userInfoButton = new KPushButton(ICQSearchBase);
        userInfoButton->setObjectName(QString::fromUtf8("userInfoButton"));
        userInfoButton->setEnabled(false);

        vboxLayout->addWidget(userInfoButton);

        spacerItem3 = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        vboxLayout->addItem(spacerItem3);


        gridLayout->addLayout(vboxLayout, 1, 1, 1, 1);

#ifndef UI_QT_NO_SHORTCUT
        textLabel2->setBuddy(nickName);
        textLabel3->setBuddy(firstName);
        textLabel6->setBuddy(email);
        textLabel4->setBuddy(lastName);
        textLabel8->setBuddy(gender);
        textLabel10->setBuddy(city);
        textLabel9->setBuddy(language);
        textLabel11->setBuddy(country);
        textLabel1->setBuddy(uin);
#endif // QT_NO_SHORTCUT
        QWidget::setTabOrder(tabWidget3, nickName);
        QWidget::setTabOrder(nickName, firstName);
        QWidget::setTabOrder(firstName, email);
        QWidget::setTabOrder(email, lastName);
        QWidget::setTabOrder(lastName, gender);
        QWidget::setTabOrder(gender, city);
        QWidget::setTabOrder(city, language);
        QWidget::setTabOrder(language, country);
        QWidget::setTabOrder(country, onlyOnline);
        QWidget::setTabOrder(onlyOnline, uin);
        QWidget::setTabOrder(uin, searchButton);
        QWidget::setTabOrder(searchButton, clearButton);
        QWidget::setTabOrder(clearButton, stopButton);
        QWidget::setTabOrder(stopButton, userInfoButton);
        QWidget::setTabOrder(userInfoButton, searchResults);

        retranslateUi(ICQSearchBase);
        QObject::connect(uin, SIGNAL(returnPressed()), searchButton, SLOT(click()));
        QObject::connect(nickName, SIGNAL(returnPressed()), searchButton, SLOT(click()));
        QObject::connect(firstName, SIGNAL(returnPressed()), searchButton, SLOT(click()));

        tabWidget3->setCurrentIndex(0);


        QMetaObject::connectSlotsByName(ICQSearchBase);
    } // setupUi

    void retranslateUi(QWidget *ICQSearchBase)
    {
        textLabel2->setText(tr2i18n("&Nickname:", 0));
        textLabel3->setText(tr2i18n("&First name:", 0));
        textLabel6->setText(tr2i18n("&Email:", 0));
        textLabel4->setText(tr2i18n("&Last name:", 0));
        textLabel8->setText(tr2i18n("&Gender:", 0));
        textLabel10->setText(tr2i18n("&City:", 0));
        textLabel9->setText(tr2i18n("Lan&guage:", 0));
        textLabel11->setText(tr2i18n("C&ountry:", 0));
        onlyOnline->setText(tr2i18n("Only search for online contacts", 0));
        tabWidget3->setTabText(tabWidget3->indexOf(tabWhitepages), tr2i18n("ICQ Whitepages Search", 0));
        textLabel1->setText(tr2i18n("&UIN #:", 0));
        tabWidget3->setTabText(tabWidget3->indexOf(tabUIN), tr2i18n("UIN Search", 0));
#ifndef UI_QT_NO_WHATSTHIS
        searchResults->setWhatsThis(tr2i18n("This is where the results from your search are displayed. If you double-click a result, the search window will close and pass the UIN of the contact you wish to add back to the Add Contact Wizard. You can only add one contact at a time.", 0));
#endif // QT_NO_WHATSTHIS
#ifndef UI_QT_NO_WHATSTHIS
        searchButton->setWhatsThis(tr2i18n("Search the ICQ Whitepages with your search criteria", 0));
#endif // QT_NO_WHATSTHIS
        searchButton->setText(tr2i18n("&Search", 0));
#ifndef UI_QT_NO_WHATSTHIS
        clearButton->setWhatsThis(tr2i18n("Clears both search fields and results", 0));
#endif // QT_NO_WHATSTHIS
        clearButton->setText(tr2i18n("C&lear", 0));
#ifndef UI_QT_NO_WHATSTHIS
        stopButton->setWhatsThis(tr2i18n("Stops the search", 0));
#endif // QT_NO_WHATSTHIS
        stopButton->setText(tr2i18n("Stop", 0));
#ifndef UI_QT_NO_WHATSTHIS
        userInfoButton->setWhatsThis(tr2i18n("Show information about the selected contact", 0));
#endif // QT_NO_WHATSTHIS
        userInfoButton->setText(tr2i18n("User Info", 0));
        userInfoButton->setShortcut(QString());
        Q_UNUSED(ICQSearchBase);
    } // retranslateUi

};

namespace Ui {
    class ICQSearchBase: public Ui_ICQSearchBase {};
} // namespace Ui

QT_END_NAMESPACE

#endif // ICQSEARCHBASE_H

