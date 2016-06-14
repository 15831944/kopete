#include <kdialog.h>
#include <klocale.h>

/********************************************************************************
** Form generated from reading UI file 'privacydialog.ui'
**
** Created by: Qt User Interface Compiler version 4.8.7
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_PRIVACYDIALOG_H
#define UI_PRIVACYDIALOG_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtGui/QApplication>
#include <QtGui/QButtonGroup>
#include <QtGui/QCheckBox>
#include <QtGui/QGridLayout>
#include <QtGui/QGroupBox>
#include <QtGui/QHeaderView>
#include <QtGui/QLabel>
#include <QtGui/QLineEdit>
#include <QtGui/QPushButton>
#include <QtGui/QRadioButton>
#include <QtGui/QTreeView>
#include <QtGui/QWidget>

QT_BEGIN_NAMESPACE

class Ui_PrivacyPrefsUI
{
public:
    QGridLayout *gridLayout;
    QGroupBox *groupBox;
    QGridLayout *gridLayout1;
    QRadioButton *radioOnlyWhiteList;
    QGridLayout *gridLayout2;
    QPushButton *btnClearBlackList;
    QPushButton *btnRemoveFromBlackList;
    QLabel *label_2;
    QTreeView *listBlackList;
    QPushButton *btnAddToBlackList;
    QRadioButton *radioAllowAll;
    QRadioButton *radioOnlyContactList;
    QRadioButton *radioAllButBlackList;
    QGridLayout *gridLayout3;
    QLabel *label;
    QPushButton *btnRemoveFromWhiteList;
    QPushButton *btnAddToWhiteList;
    QPushButton *btnClearWhiteList;
    QTreeView *listWhiteList;
    QGroupBox *groupBox_2;
    QGridLayout *gridLayout4;
    QLineEdit *editDropAll;
    QLineEdit *editDropAtLeastOne;
    QCheckBox *chkDropAll;
    QCheckBox *chkDropAtLeastOne;

    void setupUi(QWidget *PrivacyPrefsUI)
    {
        if (PrivacyPrefsUI->objectName().isEmpty())
            PrivacyPrefsUI->setObjectName(QString::fromUtf8("PrivacyPrefsUI"));
        PrivacyPrefsUI->resize(595, 594);
        gridLayout = new QGridLayout(PrivacyPrefsUI);
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        gridLayout->setHorizontalSpacing(6);
        gridLayout->setVerticalSpacing(6);
        gridLayout->setContentsMargins(0, 0, 0, 0);
        groupBox = new QGroupBox(PrivacyPrefsUI);
        groupBox->setObjectName(QString::fromUtf8("groupBox"));
        gridLayout1 = new QGridLayout(groupBox);
        gridLayout1->setObjectName(QString::fromUtf8("gridLayout1"));
        gridLayout1->setHorizontalSpacing(6);
        gridLayout1->setVerticalSpacing(6);
        gridLayout1->setContentsMargins(9, 9, 9, 9);
        radioOnlyWhiteList = new QRadioButton(groupBox);
        radioOnlyWhiteList->setObjectName(QString::fromUtf8("radioOnlyWhiteList"));

        gridLayout1->addWidget(radioOnlyWhiteList, 2, 0, 1, 2);

        gridLayout2 = new QGridLayout();
        gridLayout2->setObjectName(QString::fromUtf8("gridLayout2"));
        gridLayout2->setHorizontalSpacing(6);
        gridLayout2->setVerticalSpacing(6);
        gridLayout2->setContentsMargins(0, 0, 0, 0);
        btnClearBlackList = new QPushButton(groupBox);
        btnClearBlackList->setObjectName(QString::fromUtf8("btnClearBlackList"));

        gridLayout2->addWidget(btnClearBlackList, 2, 2, 1, 1);

        btnRemoveFromBlackList = new QPushButton(groupBox);
        btnRemoveFromBlackList->setObjectName(QString::fromUtf8("btnRemoveFromBlackList"));

        gridLayout2->addWidget(btnRemoveFromBlackList, 2, 1, 1, 1);

        label_2 = new QLabel(groupBox);
        label_2->setObjectName(QString::fromUtf8("label_2"));

        gridLayout2->addWidget(label_2, 0, 0, 1, 3);

        listBlackList = new QTreeView(groupBox);
        listBlackList->setObjectName(QString::fromUtf8("listBlackList"));
        listBlackList->setRootIsDecorated(false);
        listBlackList->setItemsExpandable(false);

        gridLayout2->addWidget(listBlackList, 1, 0, 1, 3);

        btnAddToBlackList = new QPushButton(groupBox);
        btnAddToBlackList->setObjectName(QString::fromUtf8("btnAddToBlackList"));

        gridLayout2->addWidget(btnAddToBlackList, 2, 0, 1, 1);


        gridLayout1->addLayout(gridLayout2, 4, 1, 1, 1);

        radioAllowAll = new QRadioButton(groupBox);
        radioAllowAll->setObjectName(QString::fromUtf8("radioAllowAll"));
        radioAllowAll->setChecked(true);

        gridLayout1->addWidget(radioAllowAll, 0, 0, 1, 2);

        radioOnlyContactList = new QRadioButton(groupBox);
        radioOnlyContactList->setObjectName(QString::fromUtf8("radioOnlyContactList"));

        gridLayout1->addWidget(radioOnlyContactList, 1, 0, 1, 2);

        radioAllButBlackList = new QRadioButton(groupBox);
        radioAllButBlackList->setObjectName(QString::fromUtf8("radioAllButBlackList"));

        gridLayout1->addWidget(radioAllButBlackList, 3, 0, 1, 2);

        gridLayout3 = new QGridLayout();
        gridLayout3->setObjectName(QString::fromUtf8("gridLayout3"));
        gridLayout3->setHorizontalSpacing(6);
        gridLayout3->setVerticalSpacing(6);
        gridLayout3->setContentsMargins(0, 0, 0, 0);
        label = new QLabel(groupBox);
        label->setObjectName(QString::fromUtf8("label"));

        gridLayout3->addWidget(label, 0, 0, 1, 2);

        btnRemoveFromWhiteList = new QPushButton(groupBox);
        btnRemoveFromWhiteList->setObjectName(QString::fromUtf8("btnRemoveFromWhiteList"));

        gridLayout3->addWidget(btnRemoveFromWhiteList, 2, 1, 1, 1);

        btnAddToWhiteList = new QPushButton(groupBox);
        btnAddToWhiteList->setObjectName(QString::fromUtf8("btnAddToWhiteList"));

        gridLayout3->addWidget(btnAddToWhiteList, 2, 0, 1, 1);

        btnClearWhiteList = new QPushButton(groupBox);
        btnClearWhiteList->setObjectName(QString::fromUtf8("btnClearWhiteList"));

        gridLayout3->addWidget(btnClearWhiteList, 2, 2, 1, 1);

        listWhiteList = new QTreeView(groupBox);
        listWhiteList->setObjectName(QString::fromUtf8("listWhiteList"));
        listWhiteList->setRootIsDecorated(false);
        listWhiteList->setItemsExpandable(false);

        gridLayout3->addWidget(listWhiteList, 1, 0, 1, 3);


        gridLayout1->addLayout(gridLayout3, 4, 0, 1, 1);


        gridLayout->addWidget(groupBox, 0, 0, 1, 1);

        groupBox_2 = new QGroupBox(PrivacyPrefsUI);
        groupBox_2->setObjectName(QString::fromUtf8("groupBox_2"));
        gridLayout4 = new QGridLayout(groupBox_2);
        gridLayout4->setObjectName(QString::fromUtf8("gridLayout4"));
        gridLayout4->setHorizontalSpacing(6);
        gridLayout4->setVerticalSpacing(6);
        gridLayout4->setContentsMargins(9, 9, 9, 9);
        editDropAll = new QLineEdit(groupBox_2);
        editDropAll->setObjectName(QString::fromUtf8("editDropAll"));

        gridLayout4->addWidget(editDropAll, 3, 0, 1, 1);

        editDropAtLeastOne = new QLineEdit(groupBox_2);
        editDropAtLeastOne->setObjectName(QString::fromUtf8("editDropAtLeastOne"));

        gridLayout4->addWidget(editDropAtLeastOne, 1, 0, 1, 1);

        chkDropAll = new QCheckBox(groupBox_2);
        chkDropAll->setObjectName(QString::fromUtf8("chkDropAll"));

        gridLayout4->addWidget(chkDropAll, 2, 0, 1, 1);

        chkDropAtLeastOne = new QCheckBox(groupBox_2);
        chkDropAtLeastOne->setObjectName(QString::fromUtf8("chkDropAtLeastOne"));

        gridLayout4->addWidget(chkDropAtLeastOne, 0, 0, 1, 1);


        gridLayout->addWidget(groupBox_2, 1, 0, 1, 1);


        retranslateUi(PrivacyPrefsUI);

        QMetaObject::connectSlotsByName(PrivacyPrefsUI);
    } // setupUi

    void retranslateUi(QWidget *PrivacyPrefsUI)
    {
        groupBox->setTitle(tr2i18n("Filter by Sender", 0));
        radioOnlyWhiteList->setText(tr2i18n("Allow messages only from contacts on the whitelist", 0));
        btnClearBlackList->setText(tr2i18n("Clear", 0));
        btnRemoveFromBlackList->setText(tr2i18n("Remove", 0));
        label_2->setText(tr2i18n("Blacklist:", 0));
        btnAddToBlackList->setText(tr2i18n("Add", 0));
        radioAllowAll->setText(tr2i18n("Allow all messages", 0));
        radioOnlyContactList->setText(tr2i18n("Allow messages only from contacts on my contact list", 0));
        radioAllButBlackList->setText(tr2i18n("Allow all messages but messages from contacts on the blacklist", 0));
        label->setText(tr2i18n("Whitelist:", 0));
        btnRemoveFromWhiteList->setText(tr2i18n("Remove", 0));
        btnAddToWhiteList->setText(tr2i18n("Add", 0));
        btnClearWhiteList->setText(tr2i18n("Clear", 0));
        groupBox_2->setTitle(tr2i18n("Filter by Content (separate multiple words by commas)", 0));
        chkDropAll->setText(tr2i18n("Drop messages that contain all of the following words:", 0));
        chkDropAtLeastOne->setText(tr2i18n("Drop messages that contain at least one of the following words:", 0));
        Q_UNUSED(PrivacyPrefsUI);
    } // retranslateUi

};

namespace Ui {
    class PrivacyPrefsUI: public Ui_PrivacyPrefsUI {};
} // namespace Ui

QT_END_NAMESPACE

#endif // PRIVACYDIALOG_H

