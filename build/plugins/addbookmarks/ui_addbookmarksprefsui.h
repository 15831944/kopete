#include <kdialog.h>
#include <klocale.h>

/********************************************************************************
** Form generated from reading UI file 'addbookmarksprefsui.ui'
**
** Created by: Qt User Interface Compiler version 4.8.7
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_ADDBOOKMARKSPREFSUI_H
#define UI_ADDBOOKMARKSPREFSUI_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtGui/QApplication>
#include <QtGui/QButtonGroup>
#include <QtGui/QGroupBox>
#include <QtGui/QHeaderView>
#include <QtGui/QListView>
#include <QtGui/QRadioButton>
#include <QtGui/QVBoxLayout>
#include <QtGui/QWidget>

QT_BEGIN_NAMESPACE

class Ui_BookmarksPrefsUI
{
public:
    QVBoxLayout *vboxLayout;
    QGroupBox *buttonGroup1;
    QVBoxLayout *vboxLayout1;
    QRadioButton *yesButton;
    QRadioButton *noButton;
    QRadioButton *onlySelectedButton;
    QRadioButton *onlyNotSelectedButton;
    QListView *contactList;

    void setupUi(QWidget *BookmarksPrefsUI)
    {
        if (BookmarksPrefsUI->objectName().isEmpty())
            BookmarksPrefsUI->setObjectName(QString::fromUtf8("BookmarksPrefsUI"));
        BookmarksPrefsUI->resize(620, 536);
        vboxLayout = new QVBoxLayout(BookmarksPrefsUI);
        vboxLayout->setSpacing(6);
        vboxLayout->setObjectName(QString::fromUtf8("vboxLayout"));
        vboxLayout->setContentsMargins(0, 0, 0, 0);
        buttonGroup1 = new QGroupBox(BookmarksPrefsUI);
        buttonGroup1->setObjectName(QString::fromUtf8("buttonGroup1"));
        vboxLayout1 = new QVBoxLayout(buttonGroup1);
        vboxLayout1->setSpacing(6);
        vboxLayout1->setObjectName(QString::fromUtf8("vboxLayout1"));
        vboxLayout1->setContentsMargins(9, 9, 9, 9);
        yesButton = new QRadioButton(buttonGroup1);
        yesButton->setObjectName(QString::fromUtf8("yesButton"));
        yesButton->setEnabled(true);
        yesButton->setChecked(true);

        vboxLayout1->addWidget(yesButton);

        noButton = new QRadioButton(buttonGroup1);
        noButton->setObjectName(QString::fromUtf8("noButton"));
        noButton->setEnabled(true);

        vboxLayout1->addWidget(noButton);

        onlySelectedButton = new QRadioButton(buttonGroup1);
        onlySelectedButton->setObjectName(QString::fromUtf8("onlySelectedButton"));
        onlySelectedButton->setEnabled(true);
        onlySelectedButton->setChecked(false);

        vboxLayout1->addWidget(onlySelectedButton);

        onlyNotSelectedButton = new QRadioButton(buttonGroup1);
        onlyNotSelectedButton->setObjectName(QString::fromUtf8("onlyNotSelectedButton"));
        onlyNotSelectedButton->setEnabled(true);

        vboxLayout1->addWidget(onlyNotSelectedButton);


        vboxLayout->addWidget(buttonGroup1);

        contactList = new QListView(BookmarksPrefsUI);
        contactList->setObjectName(QString::fromUtf8("contactList"));
        contactList->setEditTriggers(QAbstractItemView::NoEditTriggers);
        contactList->setSelectionMode(QAbstractItemView::ExtendedSelection);

        vboxLayout->addWidget(contactList);


        retranslateUi(BookmarksPrefsUI);

        QMetaObject::connectSlotsByName(BookmarksPrefsUI);
    } // setupUi

    void retranslateUi(QWidget *BookmarksPrefsUI)
    {
        buttonGroup1->setTitle(tr2i18n("Use Subfolder for Each Contact", 0));
        yesButton->setText(tr2i18n("Always", 0));
        noButton->setText(tr2i18n("Never", 0));
        onlySelectedButton->setText(tr2i18n("Only the selected contacts", 0));
        onlyNotSelectedButton->setText(tr2i18n("Not the selected contacts", 0));
        Q_UNUSED(BookmarksPrefsUI);
    } // retranslateUi

};

namespace Ui {
    class BookmarksPrefsUI: public Ui_BookmarksPrefsUI {};
} // namespace Ui

QT_END_NAMESPACE

#endif // ADDBOOKMARKSPREFSUI_H

