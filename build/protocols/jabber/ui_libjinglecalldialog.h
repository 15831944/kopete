#include <kdialog.h>
#include <klocale.h>

/********************************************************************************
** Form generated from reading UI file 'libjinglecalldialog.ui'
**
** Created by: Qt User Interface Compiler version 4.8.7
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_LIBJINGLECALLDIALOG_H
#define UI_LIBJINGLECALLDIALOG_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtGui/QApplication>
#include <QtGui/QButtonGroup>
#include <QtGui/QHBoxLayout>
#include <QtGui/QHeaderView>
#include <QtGui/QLabel>
#include <QtGui/QPushButton>
#include <QtGui/QVBoxLayout>
#include <QtGui/QWidget>

QT_BEGIN_NAMESPACE

class Ui_LibjingleCallDialog
{
public:
    QVBoxLayout *_2;
    QHBoxLayout *_3;
    QLabel *label;
    QLabel *userName;
    QHBoxLayout *_4;
    QLabel *label_2;
    QLabel *callStatus;
    QHBoxLayout *_5;
    QPushButton *acceptButton;
    QPushButton *rejectButton;
    QPushButton *hangupButton;
    QPushButton *muteButton;

    void setupUi(QWidget *LibjingleCallDialog)
    {
        if (LibjingleCallDialog->objectName().isEmpty())
            LibjingleCallDialog->setObjectName(QString::fromUtf8("LibjingleCallDialog"));
        _2 = new QVBoxLayout(LibjingleCallDialog);
        _2->setObjectName(QString::fromUtf8("_2"));
        _3 = new QHBoxLayout();
        _3->setObjectName(QString::fromUtf8("_3"));
        label = new QLabel(LibjingleCallDialog);
        label->setObjectName(QString::fromUtf8("label"));

        _3->addWidget(label);

        userName = new QLabel(LibjingleCallDialog);
        userName->setObjectName(QString::fromUtf8("userName"));

        _3->addWidget(userName);


        _2->addLayout(_3);

        _4 = new QHBoxLayout();
        _4->setObjectName(QString::fromUtf8("_4"));
        label_2 = new QLabel(LibjingleCallDialog);
        label_2->setObjectName(QString::fromUtf8("label_2"));

        _4->addWidget(label_2);

        callStatus = new QLabel(LibjingleCallDialog);
        callStatus->setObjectName(QString::fromUtf8("callStatus"));

        _4->addWidget(callStatus);


        _2->addLayout(_4);

        _5 = new QHBoxLayout();
        _5->setObjectName(QString::fromUtf8("_5"));
        acceptButton = new QPushButton(LibjingleCallDialog);
        acceptButton->setObjectName(QString::fromUtf8("acceptButton"));

        _5->addWidget(acceptButton);

        rejectButton = new QPushButton(LibjingleCallDialog);
        rejectButton->setObjectName(QString::fromUtf8("rejectButton"));

        _5->addWidget(rejectButton);

        hangupButton = new QPushButton(LibjingleCallDialog);
        hangupButton->setObjectName(QString::fromUtf8("hangupButton"));

        _5->addWidget(hangupButton);

        muteButton = new QPushButton(LibjingleCallDialog);
        muteButton->setObjectName(QString::fromUtf8("muteButton"));
        muteButton->setCheckable(true);

        _5->addWidget(muteButton);


        _2->addLayout(_5);


        retranslateUi(LibjingleCallDialog);

        QMetaObject::connectSlotsByName(LibjingleCallDialog);
    } // setupUi

    void retranslateUi(QWidget *LibjingleCallDialog)
    {
        LibjingleCallDialog->setWindowTitle(tr2i18n("Libjingle Voice Call", 0));
        label->setText(tr2i18n("Calling with:", 0));
        label_2->setText(tr2i18n("Call Status:", 0));
        acceptButton->setText(tr2i18n("Accept", 0));
        rejectButton->setText(tr2i18n("Reject", 0));
        hangupButton->setText(tr2i18n("Hang up", 0));
        muteButton->setText(tr2i18n("Mute", 0));
    } // retranslateUi

};

namespace Ui {
    class LibjingleCallDialog: public Ui_LibjingleCallDialog {};
} // namespace Ui

QT_END_NAMESPACE

#endif // LIBJINGLECALLDIALOG_H

