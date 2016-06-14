#include <kdialog.h>
#include <klocale.h>

/********************************************************************************
** Form generated from reading UI file 'dlgchatjoin.ui'
**
** Created by: Qt User Interface Compiler version 4.8.7
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_DLGCHATJOIN_H
#define UI_DLGCHATJOIN_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtGui/QApplication>
#include <QtGui/QButtonGroup>
#include <QtGui/QComboBox>
#include <QtGui/QGridLayout>
#include <QtGui/QHeaderView>
#include <QtGui/QLabel>
#include <QtGui/QPushButton>
#include <QtGui/QTreeWidget>
#include <QtGui/QWidget>
#include "klineedit.h"

QT_BEGIN_NAMESPACE

class Ui_dlgChatJoin
{
public:
    QGridLayout *gridLayout;
    QLabel *label_3;
    KLineEdit *leNick;
    QLabel *label_2;
    QComboBox *leServer;
    QPushButton *pbQuery;
    QTreeWidget *tblChatRoomsList;
    QLabel *label;
    KLineEdit *leRoom;

    void setupUi(QWidget *dlgChatJoin)
    {
        if (dlgChatJoin->objectName().isEmpty())
            dlgChatJoin->setObjectName(QString::fromUtf8("dlgChatJoin"));
        dlgChatJoin->resize(420, 315);
        gridLayout = new QGridLayout(dlgChatJoin);
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        label_3 = new QLabel(dlgChatJoin);
        label_3->setObjectName(QString::fromUtf8("label_3"));

        gridLayout->addWidget(label_3, 0, 0, 1, 1);

        leNick = new KLineEdit(dlgChatJoin);
        leNick->setObjectName(QString::fromUtf8("leNick"));

        gridLayout->addWidget(leNick, 0, 1, 1, 2);

        label_2 = new QLabel(dlgChatJoin);
        label_2->setObjectName(QString::fromUtf8("label_2"));

        gridLayout->addWidget(label_2, 1, 0, 1, 1);

        leServer = new QComboBox(dlgChatJoin);
        leServer->setObjectName(QString::fromUtf8("leServer"));
        QSizePolicy sizePolicy(QSizePolicy::MinimumExpanding, QSizePolicy::Fixed);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(leServer->sizePolicy().hasHeightForWidth());
        leServer->setSizePolicy(sizePolicy);
        leServer->setEditable(true);

        gridLayout->addWidget(leServer, 1, 1, 1, 1);

        pbQuery = new QPushButton(dlgChatJoin);
        pbQuery->setObjectName(QString::fromUtf8("pbQuery"));

        gridLayout->addWidget(pbQuery, 1, 2, 1, 1);

        tblChatRoomsList = new QTreeWidget(dlgChatJoin);
        tblChatRoomsList->setObjectName(QString::fromUtf8("tblChatRoomsList"));
        tblChatRoomsList->setRootIsDecorated(false);

        gridLayout->addWidget(tblChatRoomsList, 2, 1, 1, 2);

        label = new QLabel(dlgChatJoin);
        label->setObjectName(QString::fromUtf8("label"));

        gridLayout->addWidget(label, 3, 0, 1, 1);

        leRoom = new KLineEdit(dlgChatJoin);
        leRoom->setObjectName(QString::fromUtf8("leRoom"));

        gridLayout->addWidget(leRoom, 3, 1, 1, 2);


        retranslateUi(dlgChatJoin);

        QMetaObject::connectSlotsByName(dlgChatJoin);
    } // setupUi

    void retranslateUi(QWidget *dlgChatJoin)
    {
        label_3->setText(tr2i18n("Nick:", 0));
        label_2->setText(tr2i18n("Server:", 0));
        pbQuery->setText(tr2i18n("&Query", 0));
        QTreeWidgetItem *___qtreewidgetitem = tblChatRoomsList->headerItem();
        ___qtreewidgetitem->setText(1, tr2i18n("Chatroom Description", 0));
        ___qtreewidgetitem->setText(0, tr2i18n("Chatroom Name", 0));
        label->setText(tr2i18n("Room:", 0));
        Q_UNUSED(dlgChatJoin);
    } // retranslateUi

};

namespace Ui {
    class dlgChatJoin: public Ui_dlgChatJoin {};
} // namespace Ui

QT_END_NAMESPACE

#endif // DLGCHATJOIN_H

