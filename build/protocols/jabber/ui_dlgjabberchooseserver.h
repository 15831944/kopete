#include <kdialog.h>
#include <klocale.h>

/********************************************************************************
** Form generated from reading UI file 'dlgjabberchooseserver.ui'
**
** Created by: Qt User Interface Compiler version 4.8.7
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_DLGJABBERCHOOSESERVER_H
#define UI_DLGJABBERCHOOSESERVER_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtGui/QApplication>
#include <QtGui/QButtonGroup>
#include <QtGui/QGridLayout>
#include <QtGui/QHeaderView>
#include <QtGui/QLabel>
#include <QtGui/QTableWidget>
#include <QtGui/QWidget>

QT_BEGIN_NAMESPACE

class Ui_DlgJabberChooseServer
{
public:
    QGridLayout *gridLayout;
    QLabel *lblStatus;
    QTableWidget *listServers;

    void setupUi(QWidget *DlgJabberChooseServer)
    {
        if (DlgJabberChooseServer->objectName().isEmpty())
            DlgJabberChooseServer->setObjectName(QString::fromUtf8("DlgJabberChooseServer"));
        DlgJabberChooseServer->resize(334, 343);
        DlgJabberChooseServer->setMinimumSize(QSize(300, 300));
        gridLayout = new QGridLayout(DlgJabberChooseServer);
#ifndef UI_Q_OS_MAC
        gridLayout->setSpacing(6);
#endif
        gridLayout->setContentsMargins(11, 11, 11, 11);
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        lblStatus = new QLabel(DlgJabberChooseServer);
        lblStatus->setObjectName(QString::fromUtf8("lblStatus"));

        gridLayout->addWidget(lblStatus, 1, 0, 1, 1);

        listServers = new QTableWidget(DlgJabberChooseServer);
        if (listServers->columnCount() < 2)
            listServers->setColumnCount(2);
        QTableWidgetItem *__qtablewidgetitem = new QTableWidgetItem();
        listServers->setHorizontalHeaderItem(0, __qtablewidgetitem);
        QTableWidgetItem *__qtablewidgetitem1 = new QTableWidgetItem();
        listServers->setHorizontalHeaderItem(1, __qtablewidgetitem1);
        listServers->setObjectName(QString::fromUtf8("listServers"));
        listServers->setAlternatingRowColors(true);
        listServers->setSelectionMode(QAbstractItemView::SingleSelection);
        listServers->setSelectionBehavior(QAbstractItemView::SelectRows);
        listServers->setShowGrid(false);
        listServers->setGridStyle(Qt::NoPen);
        listServers->setColumnCount(2);

        gridLayout->addWidget(listServers, 0, 0, 1, 1);


        retranslateUi(DlgJabberChooseServer);

        QMetaObject::connectSlotsByName(DlgJabberChooseServer);
    } // setupUi

    void retranslateUi(QWidget *DlgJabberChooseServer)
    {
        DlgJabberChooseServer->setWindowTitle(tr2i18n("Choose Server - Jabber", 0));
        lblStatus->setText(QString());
        QTableWidgetItem *___qtablewidgetitem = listServers->horizontalHeaderItem(0);
        ___qtablewidgetitem->setText(tr2i18n("Name", 0));
        QTableWidgetItem *___qtablewidgetitem1 = listServers->horizontalHeaderItem(1);
        ___qtablewidgetitem1->setText(tr2i18n("Description", 0));
    } // retranslateUi

};

namespace Ui {
    class DlgJabberChooseServer: public Ui_DlgJabberChooseServer {};
} // namespace Ui

QT_END_NAMESPACE

#endif // DLGJABBERCHOOSESERVER_H

