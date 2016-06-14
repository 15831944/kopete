#include <kdialog.h>
#include <klocale.h>

/********************************************************************************
** Form generated from reading UI file 'dlgjabberbookmarkeditor.ui'
**
** Created by: Qt User Interface Compiler version 4.8.7
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_DLGJABBERBOOKMARKEDITOR_H
#define UI_DLGJABBERBOOKMARKEDITOR_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtGui/QApplication>
#include <QtGui/QButtonGroup>
#include <QtGui/QHBoxLayout>
#include <QtGui/QHeaderView>
#include <QtGui/QListView>
#include <QtGui/QPushButton>
#include <QtGui/QSpacerItem>
#include <QtGui/QVBoxLayout>
#include <QtGui/QWidget>

QT_BEGIN_NAMESPACE

class Ui_DlgJabberBookmarkEditor
{
public:
    QHBoxLayout *horizontalLayout;
    QListView *listView;
    QVBoxLayout *verticalLayout;
    QPushButton *renameButton;
    QPushButton *autoJoinButton;
    QSpacerItem *verticalSpacer;
    QPushButton *removeButton;
    QSpacerItem *verticalSpacer_2;

    void setupUi(QWidget *DlgJabberBookmarkEditor)
    {
        if (DlgJabberBookmarkEditor->objectName().isEmpty())
            DlgJabberBookmarkEditor->setObjectName(QString::fromUtf8("DlgJabberBookmarkEditor"));
        DlgJabberBookmarkEditor->resize(401, 208);
        horizontalLayout = new QHBoxLayout(DlgJabberBookmarkEditor);
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        listView = new QListView(DlgJabberBookmarkEditor);
        listView->setObjectName(QString::fromUtf8("listView"));

        horizontalLayout->addWidget(listView);

        verticalLayout = new QVBoxLayout();
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        renameButton = new QPushButton(DlgJabberBookmarkEditor);
        renameButton->setObjectName(QString::fromUtf8("renameButton"));

        verticalLayout->addWidget(renameButton);

        autoJoinButton = new QPushButton(DlgJabberBookmarkEditor);
        autoJoinButton->setObjectName(QString::fromUtf8("autoJoinButton"));

        verticalLayout->addWidget(autoJoinButton);

        verticalSpacer = new QSpacerItem(20, 20, QSizePolicy::Minimum, QSizePolicy::Fixed);

        verticalLayout->addItem(verticalSpacer);

        removeButton = new QPushButton(DlgJabberBookmarkEditor);
        removeButton->setObjectName(QString::fromUtf8("removeButton"));

        verticalLayout->addWidget(removeButton);

        verticalSpacer_2 = new QSpacerItem(20, 58, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout->addItem(verticalSpacer_2);


        horizontalLayout->addLayout(verticalLayout);


        retranslateUi(DlgJabberBookmarkEditor);

        QMetaObject::connectSlotsByName(DlgJabberBookmarkEditor);
    } // setupUi

    void retranslateUi(QWidget *DlgJabberBookmarkEditor)
    {
        renameButton->setText(tr2i18n("Rename...", 0));
        autoJoinButton->setText(tr2i18n("Toggle Auto Join", 0));
        removeButton->setText(tr2i18n("Remove", 0));
        Q_UNUSED(DlgJabberBookmarkEditor);
    } // retranslateUi

};

namespace Ui {
    class DlgJabberBookmarkEditor: public Ui_DlgJabberBookmarkEditor {};
} // namespace Ui

QT_END_NAMESPACE

#endif // DLGJABBERBOOKMARKEDITOR_H

