#include <kdialog.h>
#include <klocale.h>

/********************************************************************************
** Form generated from reading UI file 'privkeypopup.ui'
**
** Created by: Qt User Interface Compiler version 4.8.7
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_PRIVKEYPOPUP_H
#define UI_PRIVKEYPOPUP_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtGui/QApplication>
#include <QtGui/QButtonGroup>
#include <QtGui/QGridLayout>
#include <QtGui/QHeaderView>
#include <QtGui/QLabel>
#include <QtGui/QWidget>

QT_BEGIN_NAMESPACE

class Ui_PrivKeyPopup
{
public:
    QGridLayout *gridLayout;
    QLabel *lIcon;
    QLabel *label;

    void setupUi(QWidget *PrivKeyPopup)
    {
        if (PrivKeyPopup->objectName().isEmpty())
            PrivKeyPopup->setObjectName(QString::fromUtf8("PrivKeyPopup"));
        PrivKeyPopup->resize(404, 98);
        gridLayout = new QGridLayout(PrivKeyPopup);
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        gridLayout->setContentsMargins(10, -1, 10, -1);
        lIcon = new QLabel(PrivKeyPopup);
        lIcon->setObjectName(QString::fromUtf8("lIcon"));

        gridLayout->addWidget(lIcon, 0, 0, 1, 1);

        label = new QLabel(PrivKeyPopup);
        label->setObjectName(QString::fromUtf8("label"));

        gridLayout->addWidget(label, 0, 1, 1, 1);


        retranslateUi(PrivKeyPopup);

        QMetaObject::connectSlotsByName(PrivKeyPopup);
    } // setupUi

    void retranslateUi(QWidget *PrivKeyPopup)
    {
        PrivKeyPopup->setWindowTitle(tr2i18n("Please Wait", 0));
        lIcon->setText(QString());
        label->setText(tr2i18n("Please wait while generating the private key", 0));
    } // retranslateUi

};

namespace Ui {
    class PrivKeyPopup: public Ui_PrivKeyPopup {};
} // namespace Ui

QT_END_NAMESPACE

#endif // PRIVKEYPOPUP_H

