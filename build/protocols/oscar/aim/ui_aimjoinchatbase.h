#include <kdialog.h>
#include <klocale.h>

/********************************************************************************
** Form generated from reading UI file 'aimjoinchatbase.ui'
**
** Created by: Qt User Interface Compiler version 4.8.7
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_AIMJOINCHATBASE_H
#define UI_AIMJOINCHATBASE_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtGui/QApplication>
#include <QtGui/QButtonGroup>
#include <QtGui/QComboBox>
#include <QtGui/QGridLayout>
#include <QtGui/QHeaderView>
#include <QtGui/QLabel>
#include <QtGui/QLineEdit>
#include <QtGui/QSpacerItem>
#include <QtGui/QWidget>

QT_BEGIN_NAMESPACE

class Ui_AIMJoinChatBase
{
public:
    QGridLayout *gridLayout;
    QLabel *textLabel3;
    QSpacerItem *spacerItem;
    QSpacerItem *spacerItem1;
    QLabel *textLabel1;
    QLabel *textLabel2;
    QLineEdit *roomName;
    QComboBox *exchange;
    QSpacerItem *spacerItem2;

    void setupUi(QWidget *AIMJoinChatBase)
    {
        if (AIMJoinChatBase->objectName().isEmpty())
            AIMJoinChatBase->setObjectName(QString::fromUtf8("AIMJoinChatBase"));
        AIMJoinChatBase->resize(343, 99);
        gridLayout = new QGridLayout(AIMJoinChatBase);
#ifndef UI_Q_OS_MAC
        gridLayout->setSpacing(6);
#endif
        gridLayout->setContentsMargins(0, 0, 0, 0);
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        textLabel3 = new QLabel(AIMJoinChatBase);
        textLabel3->setObjectName(QString::fromUtf8("textLabel3"));

        gridLayout->addWidget(textLabel3, 0, 0, 1, 3);

        spacerItem = new QSpacerItem(20, 16, QSizePolicy::Minimum, QSizePolicy::Fixed);

        gridLayout->addItem(spacerItem, 1, 0, 1, 1);

        spacerItem1 = new QSpacerItem(60, 20, QSizePolicy::Maximum, QSizePolicy::Minimum);

        gridLayout->addItem(spacerItem1, 2, 0, 1, 1);

        textLabel1 = new QLabel(AIMJoinChatBase);
        textLabel1->setObjectName(QString::fromUtf8("textLabel1"));

        gridLayout->addWidget(textLabel1, 2, 1, 1, 1);

        textLabel2 = new QLabel(AIMJoinChatBase);
        textLabel2->setObjectName(QString::fromUtf8("textLabel2"));

        gridLayout->addWidget(textLabel2, 3, 1, 1, 1);

        roomName = new QLineEdit(AIMJoinChatBase);
        roomName->setObjectName(QString::fromUtf8("roomName"));
        QSizePolicy sizePolicy(static_cast<QSizePolicy::Policy>(3), static_cast<QSizePolicy::Policy>(0));
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(roomName->sizePolicy().hasHeightForWidth());
        roomName->setSizePolicy(sizePolicy);

        gridLayout->addWidget(roomName, 2, 2, 1, 1);

        exchange = new QComboBox(AIMJoinChatBase);
        exchange->setObjectName(QString::fromUtf8("exchange"));

        gridLayout->addWidget(exchange, 3, 2, 1, 1);

        spacerItem2 = new QSpacerItem(20, 16, QSizePolicy::Minimum, QSizePolicy::Expanding);

        gridLayout->addItem(spacerItem2, 4, 2, 1, 1);

#ifndef UI_QT_NO_SHORTCUT
        textLabel1->setBuddy(roomName);
        textLabel2->setBuddy(exchange);
#endif // QT_NO_SHORTCUT

        retranslateUi(AIMJoinChatBase);

        QMetaObject::connectSlotsByName(AIMJoinChatBase);
    } // setupUi

    void retranslateUi(QWidget *AIMJoinChatBase)
    {
        textLabel3->setText(tr2i18n("Please enter the name of the chat room you wish to join.", 0));
        textLabel1->setText(tr2i18n("Room &name:", 0));
        textLabel2->setText(tr2i18n("E&xchange:", 0));
        Q_UNUSED(AIMJoinChatBase);
    } // retranslateUi

};

namespace Ui {
    class AIMJoinChatBase: public Ui_AIMJoinChatBase {};
} // namespace Ui

QT_END_NAMESPACE

#endif // AIMJOINCHATBASE_H

