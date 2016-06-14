#include <kdialog.h>
#include <klocale.h>

/********************************************************************************
** Form generated from reading UI file 'dlgchatroomslist.ui'
**
** Created by: Qt User Interface Compiler version 4.8.7
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_DLGCHATROOMSLIST_H
#define UI_DLGCHATROOMSLIST_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtGui/QApplication>
#include <QtGui/QButtonGroup>
#include <QtGui/QGridLayout>
#include <QtGui/QHBoxLayout>
#include <QtGui/QHeaderView>
#include <QtGui/QLabel>
#include <QtGui/QPushButton>
#include <QtGui/QTableWidget>
#include <QtGui/QWidget>
#include "klineedit.h"

QT_BEGIN_NAMESPACE

class Ui_dlgChatRoomsList
{
public:
    QGridLayout *gridLayout;
    QHBoxLayout *hboxLayout;
    QLabel *label;
    KLineEdit *leServer;
    QPushButton *pbQuery;
    QTableWidget *tblChatRoomsList;

    void setupUi(QWidget *dlgChatRoomsList)
    {
        if (dlgChatRoomsList->objectName().isEmpty())
            dlgChatRoomsList->setObjectName(QString::fromUtf8("dlgChatRoomsList"));
        dlgChatRoomsList->resize(384, 262);
        gridLayout = new QGridLayout(dlgChatRoomsList);
#ifndef UI_Q_OS_MAC
        gridLayout->setSpacing(6);
#endif
#ifndef UI_Q_OS_MAC
        gridLayout->setContentsMargins(9, 9, 9, 9);
#endif
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        hboxLayout = new QHBoxLayout();
#ifndef UI_Q_OS_MAC
        hboxLayout->setSpacing(6);
#endif
#ifndef UI_Q_OS_MAC
        hboxLayout->setContentsMargins(0, 0, 0, 0);
#endif
        hboxLayout->setObjectName(QString::fromUtf8("hboxLayout"));
        label = new QLabel(dlgChatRoomsList);
        label->setObjectName(QString::fromUtf8("label"));

        hboxLayout->addWidget(label);

        leServer = new KLineEdit(dlgChatRoomsList);
        leServer->setObjectName(QString::fromUtf8("leServer"));

        hboxLayout->addWidget(leServer);

        pbQuery = new QPushButton(dlgChatRoomsList);
        pbQuery->setObjectName(QString::fromUtf8("pbQuery"));

        hboxLayout->addWidget(pbQuery);


        gridLayout->addLayout(hboxLayout, 0, 0, 1, 1);

        tblChatRoomsList = new QTableWidget(dlgChatRoomsList);
        if (tblChatRoomsList->columnCount() < 2)
            tblChatRoomsList->setColumnCount(2);
        QTableWidgetItem *__qtablewidgetitem = new QTableWidgetItem();
        tblChatRoomsList->setHorizontalHeaderItem(0, __qtablewidgetitem);
        QTableWidgetItem *__qtablewidgetitem1 = new QTableWidgetItem();
        tblChatRoomsList->setHorizontalHeaderItem(1, __qtablewidgetitem1);
        tblChatRoomsList->setObjectName(QString::fromUtf8("tblChatRoomsList"));

        gridLayout->addWidget(tblChatRoomsList, 1, 0, 1, 1);


        retranslateUi(dlgChatRoomsList);

        QMetaObject::connectSlotsByName(dlgChatRoomsList);
    } // setupUi

    void retranslateUi(QWidget *dlgChatRoomsList)
    {
        label->setText(tr2i18n("Server:", 0));
        pbQuery->setText(tr2i18n("&Query", 0));
        QTableWidgetItem *___qtablewidgetitem = tblChatRoomsList->horizontalHeaderItem(0);
        ___qtablewidgetitem->setText(tr2i18n("Chatroom Name", 0));
        QTableWidgetItem *___qtablewidgetitem1 = tblChatRoomsList->horizontalHeaderItem(1);
        ___qtablewidgetitem1->setText(tr2i18n("Chatroom Description", 0));
        Q_UNUSED(dlgChatRoomsList);
    } // retranslateUi

};

namespace Ui {
    class dlgChatRoomsList: public Ui_dlgChatRoomsList {};
} // namespace Ui

QT_END_NAMESPACE

#endif // DLGCHATROOMSLIST_H

