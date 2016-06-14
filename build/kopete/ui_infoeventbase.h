#include <kdialog.h>
#include <klocale.h>

/********************************************************************************
** Form generated from reading UI file 'infoeventbase.ui'
**
** Created by: Qt User Interface Compiler version 4.8.7
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_INFOEVENTBASE_H
#define UI_INFOEVENTBASE_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtGui/QApplication>
#include <QtGui/QButtonGroup>
#include <QtGui/QHBoxLayout>
#include <QtGui/QHeaderView>
#include <QtGui/QLabel>
#include <QtGui/QToolButton>
#include <QtGui/QVBoxLayout>
#include <QtGui/QWidget>
#include <ksqueezedtextlabel.h>

QT_BEGIN_NAMESPACE

class Ui_InfoEventBase
{
public:
    QVBoxLayout *vboxLayout;
    QHBoxLayout *hboxLayout;
    QHBoxLayout *hboxLayout1;
    QToolButton *buttonPrev;
    QLabel *lblEvent;
    QToolButton *buttonNext;
    KSqueezedTextLabel *lblTitle;
    QToolButton *buttonClose;
    QLabel *lblInfo;
    QLabel *lblActions;

    void setupUi(QWidget *InfoEventBase)
    {
        if (InfoEventBase->objectName().isEmpty())
            InfoEventBase->setObjectName(QString::fromUtf8("InfoEventBase"));
        InfoEventBase->resize(273, 122);
        vboxLayout = new QVBoxLayout(InfoEventBase);
        vboxLayout->setObjectName(QString::fromUtf8("vboxLayout"));
        hboxLayout = new QHBoxLayout();
        hboxLayout->setObjectName(QString::fromUtf8("hboxLayout"));
        hboxLayout1 = new QHBoxLayout();
        hboxLayout1->setSpacing(2);
        hboxLayout1->setObjectName(QString::fromUtf8("hboxLayout1"));
        buttonPrev = new QToolButton(InfoEventBase);
        buttonPrev->setObjectName(QString::fromUtf8("buttonPrev"));

        hboxLayout1->addWidget(buttonPrev);

        lblEvent = new QLabel(InfoEventBase);
        lblEvent->setObjectName(QString::fromUtf8("lblEvent"));

        hboxLayout1->addWidget(lblEvent);

        buttonNext = new QToolButton(InfoEventBase);
        buttonNext->setObjectName(QString::fromUtf8("buttonNext"));

        hboxLayout1->addWidget(buttonNext);


        hboxLayout->addLayout(hboxLayout1);

        lblTitle = new KSqueezedTextLabel(InfoEventBase);
        lblTitle->setObjectName(QString::fromUtf8("lblTitle"));
        QSizePolicy sizePolicy(QSizePolicy::Expanding, QSizePolicy::Preferred);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(lblTitle->sizePolicy().hasHeightForWidth());
        lblTitle->setSizePolicy(sizePolicy);
        lblTitle->setAlignment(Qt::AlignCenter);

        hboxLayout->addWidget(lblTitle);

        buttonClose = new QToolButton(InfoEventBase);
        buttonClose->setObjectName(QString::fromUtf8("buttonClose"));

        hboxLayout->addWidget(buttonClose);


        vboxLayout->addLayout(hboxLayout);

        lblInfo = new QLabel(InfoEventBase);
        lblInfo->setObjectName(QString::fromUtf8("lblInfo"));
        QSizePolicy sizePolicy1(QSizePolicy::Ignored, QSizePolicy::Preferred);
        sizePolicy1.setHorizontalStretch(0);
        sizePolicy1.setVerticalStretch(1);
        sizePolicy1.setHeightForWidth(lblInfo->sizePolicy().hasHeightForWidth());
        lblInfo->setSizePolicy(sizePolicy1);
        lblInfo->setAlignment(Qt::AlignLeading|Qt::AlignLeft|Qt::AlignTop);
        lblInfo->setWordWrap(true);

        vboxLayout->addWidget(lblInfo);

        lblActions = new QLabel(InfoEventBase);
        lblActions->setObjectName(QString::fromUtf8("lblActions"));
        lblActions->setWordWrap(true);
        lblActions->setTextInteractionFlags(Qt::LinksAccessibleByKeyboard|Qt::LinksAccessibleByMouse|Qt::NoTextInteraction);

        vboxLayout->addWidget(lblActions);


        retranslateUi(InfoEventBase);

        QMetaObject::connectSlotsByName(InfoEventBase);
    } // setupUi

    void retranslateUi(QWidget *InfoEventBase)
    {
        lblEvent->setText(QString());
        lblInfo->setText(QString());
        Q_UNUSED(InfoEventBase);
    } // retranslateUi

};

namespace Ui {
    class InfoEventBase: public Ui_InfoEventBase {};
} // namespace Ui

QT_END_NAMESPACE

#endif // INFOEVENTBASE_H

