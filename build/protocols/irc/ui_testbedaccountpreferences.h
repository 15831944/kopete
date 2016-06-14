#include <kdialog.h>
#include <klocale.h>

/********************************************************************************
** Form generated from reading UI file 'testbedaccountpreferences.ui'
**
** Created by: Qt User Interface Compiler version 4.8.7
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_TESTBEDACCOUNTPREFERENCES_H
#define UI_TESTBEDACCOUNTPREFERENCES_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtGui/QApplication>
#include <QtGui/QButtonGroup>
#include <QtGui/QGroupBox>
#include <QtGui/QHBoxLayout>
#include <QtGui/QHeaderView>
#include <QtGui/QLabel>
#include <QtGui/QLineEdit>
#include <QtGui/QSpacerItem>
#include <QtGui/QTabWidget>
#include <QtGui/QVBoxLayout>
#include <QtGui/QWidget>

QT_BEGIN_NAMESPACE

class Ui_TestbedAccountPreferences
{
public:
    QVBoxLayout *vboxLayout;
    QTabWidget *tabWidget11;
    QWidget *tab;
    QVBoxLayout *vboxLayout1;
    QGroupBox *groupBox;
    QVBoxLayout *vboxLayout2;
    QHBoxLayout *hboxLayout;
    QLabel *accountLabel;
    QLineEdit *m_acctName;
    QGroupBox *groupBox_2;
    QVBoxLayout *vboxLayout3;
    QLabel *textLabel12;
    QSpacerItem *spacerItem;
    QLabel *labelStatusMessage;

    void setupUi(QWidget *TestbedAccountPreferences)
    {
        if (TestbedAccountPreferences->objectName().isEmpty())
            TestbedAccountPreferences->setObjectName(QString::fromUtf8("TestbedAccountPreferences"));
        TestbedAccountPreferences->resize(362, 272);
        vboxLayout = new QVBoxLayout(TestbedAccountPreferences);
        vboxLayout->setSpacing(6);
        vboxLayout->setObjectName(QString::fromUtf8("vboxLayout"));
        vboxLayout->setContentsMargins(0, 0, 0, 0);
        tabWidget11 = new QTabWidget(TestbedAccountPreferences);
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
        hboxLayout = new QHBoxLayout();
        hboxLayout->setSpacing(6);
        hboxLayout->setObjectName(QString::fromUtf8("hboxLayout"));
        hboxLayout->setContentsMargins(0, 0, 0, 0);
        accountLabel = new QLabel(groupBox);
        accountLabel->setObjectName(QString::fromUtf8("accountLabel"));

        hboxLayout->addWidget(accountLabel);

        m_acctName = new QLineEdit(groupBox);
        m_acctName->setObjectName(QString::fromUtf8("m_acctName"));

        hboxLayout->addWidget(m_acctName);


        vboxLayout2->addLayout(hboxLayout);


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

        labelStatusMessage = new QLabel(TestbedAccountPreferences);
        labelStatusMessage->setObjectName(QString::fromUtf8("labelStatusMessage"));
        labelStatusMessage->setAlignment(Qt::AlignCenter);

        vboxLayout->addWidget(labelStatusMessage);

#ifndef UI_QT_NO_SHORTCUT
        accountLabel->setBuddy(m_acctName);
#endif // QT_NO_SHORTCUT

        retranslateUi(TestbedAccountPreferences);

        QMetaObject::connectSlotsByName(TestbedAccountPreferences);
    } // setupUi

    void retranslateUi(QWidget *TestbedAccountPreferences)
    {
        TestbedAccountPreferences->setWindowTitle(tr2i18n("Account Preferences - Testbed", 0));
        groupBox->setTitle(tr2i18n("Account Information", 0));
#ifndef UI_QT_NO_TOOLTIP
        accountLabel->setToolTip(tr2i18n("The account name of your account.", 0));
#endif // QT_NO_TOOLTIP
#ifndef UI_QT_NO_WHATSTHIS
        accountLabel->setWhatsThis(tr2i18n("The account name of your account.", 0));
#endif // QT_NO_WHATSTHIS
        accountLabel->setText(tr2i18n("&Account name:", 0));
#ifndef UI_QT_NO_TOOLTIP
        m_acctName->setToolTip(tr2i18n("The account name of your account.", 0));
#endif // QT_NO_TOOLTIP
#ifndef UI_QT_NO_WHATSTHIS
        m_acctName->setWhatsThis(tr2i18n("The account name of your account.", 0));
#endif // QT_NO_WHATSTHIS
        groupBox_2->setTitle(tr2i18n("Information", 0));
        textLabel12->setText(tr2i18n("To use the testbed protocol, just make up an account name.  This protocol has no real networking capability.", 0));
        tabWidget11->setTabText(tabWidget11->indexOf(tab), tr2i18n("B&asic Setup", 0));
        labelStatusMessage->setText(QString());
    } // retranslateUi

};

namespace Ui {
    class TestbedAccountPreferences: public Ui_TestbedAccountPreferences {};
} // namespace Ui

QT_END_NAMESPACE

#endif // TESTBEDACCOUNTPREFERENCES_H

