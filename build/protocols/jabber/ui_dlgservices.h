#include <kdialog.h>
#include <klocale.h>

/********************************************************************************
** Form generated from reading UI file 'dlgservices.ui'
**
** Created by: Qt User Interface Compiler version 4.8.7
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_DLGSERVICES_H
#define UI_DLGSERVICES_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtGui/QApplication>
#include <QtGui/QButtonGroup>
#include <QtGui/QHBoxLayout>
#include <QtGui/QHeaderView>
#include <QtGui/QLabel>
#include <QtGui/QLineEdit>
#include <QtGui/QPushButton>
#include <QtGui/QTreeWidget>
#include <QtGui/QVBoxLayout>
#include <QtGui/QWidget>

QT_BEGIN_NAMESPACE

class Ui_dlgServices
{
public:
    QVBoxLayout *vboxLayout;
    QHBoxLayout *hboxLayout;
    QLabel *lblServer;
    QLineEdit *leServer;
    QLabel *label;
    QLineEdit *leNode;
    QPushButton *btnQuery;
    QTreeWidget *trServices;

    void setupUi(QWidget *dlgServices)
    {
        if (dlgServices->objectName().isEmpty())
            dlgServices->setObjectName(QString::fromUtf8("dlgServices"));
        dlgServices->resize(669, 445);
        vboxLayout = new QVBoxLayout(dlgServices);
        vboxLayout->setObjectName(QString::fromUtf8("vboxLayout"));
        vboxLayout->setContentsMargins(0, 0, 0, 0);
        hboxLayout = new QHBoxLayout();
        hboxLayout->setObjectName(QString::fromUtf8("hboxLayout"));
        lblServer = new QLabel(dlgServices);
        lblServer->setObjectName(QString::fromUtf8("lblServer"));
        QSizePolicy sizePolicy(QSizePolicy::Minimum, QSizePolicy::Minimum);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(lblServer->sizePolicy().hasHeightForWidth());
        lblServer->setSizePolicy(sizePolicy);

        hboxLayout->addWidget(lblServer);

        leServer = new QLineEdit(dlgServices);
        leServer->setObjectName(QString::fromUtf8("leServer"));
        QSizePolicy sizePolicy1(QSizePolicy::Expanding, QSizePolicy::Minimum);
        sizePolicy1.setHorizontalStretch(0);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(leServer->sizePolicy().hasHeightForWidth());
        leServer->setSizePolicy(sizePolicy1);

        hboxLayout->addWidget(leServer);

        label = new QLabel(dlgServices);
        label->setObjectName(QString::fromUtf8("label"));

        hboxLayout->addWidget(label);

        leNode = new QLineEdit(dlgServices);
        leNode->setObjectName(QString::fromUtf8("leNode"));

        hboxLayout->addWidget(leNode);

        btnQuery = new QPushButton(dlgServices);
        btnQuery->setObjectName(QString::fromUtf8("btnQuery"));
        sizePolicy.setHeightForWidth(btnQuery->sizePolicy().hasHeightForWidth());
        btnQuery->setSizePolicy(sizePolicy);
        btnQuery->setAutoDefault(true);
        btnQuery->setDefault(true);

        hboxLayout->addWidget(btnQuery);


        vboxLayout->addLayout(hboxLayout);

        trServices = new QTreeWidget(dlgServices);
        trServices->setObjectName(QString::fromUtf8("trServices"));

        vboxLayout->addWidget(trServices);


        retranslateUi(dlgServices);

        QMetaObject::connectSlotsByName(dlgServices);
    } // setupUi

    void retranslateUi(QWidget *dlgServices)
    {
        lblServer->setText(tr2i18n("Server:", 0));
        label->setText(tr2i18n("Node:", 0));
        btnQuery->setText(tr2i18n("&Query Server", 0));
        QTreeWidgetItem *___qtreewidgetitem = trServices->headerItem();
        ___qtreewidgetitem->setText(2, tr2i18n("Node", 0));
        ___qtreewidgetitem->setText(1, tr2i18n("JID", 0));
        ___qtreewidgetitem->setText(0, tr2i18n("Name", 0));
        Q_UNUSED(dlgServices);
    } // retranslateUi

};

namespace Ui {
    class dlgServices: public Ui_dlgServices {};
} // namespace Ui

QT_END_NAMESPACE

#endif // DLGSERVICES_H

