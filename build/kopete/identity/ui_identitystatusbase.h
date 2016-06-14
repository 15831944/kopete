#include <kdialog.h>
#include <klocale.h>

/********************************************************************************
** Form generated from reading UI file 'identitystatusbase.ui'
**
** Created by: Qt User Interface Compiler version 4.8.7
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_IDENTITYSTATUSBASE_H
#define UI_IDENTITYSTATUSBASE_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtGui/QApplication>
#include <QtGui/QButtonGroup>
#include <QtGui/QGridLayout>
#include <QtGui/QHBoxLayout>
#include <QtGui/QHeaderView>
#include <QtGui/QLabel>
#include <QtGui/QListWidget>
#include <QtGui/QToolButton>
#include <QtGui/QVBoxLayout>
#include <QtGui/QWidget>

QT_BEGIN_NAMESPACE

class Ui_IdentityStatusBase
{
public:
    QVBoxLayout *vboxLayout;
    QGridLayout *gridLayout;
    QToolButton *photo;
    QHBoxLayout *hboxLayout;
    QLabel *identityName;
    QListWidget *accounts;

    void setupUi(QWidget *IdentityStatusBase)
    {
        if (IdentityStatusBase->objectName().isEmpty())
            IdentityStatusBase->setObjectName(QString::fromUtf8("IdentityStatusBase"));
        IdentityStatusBase->resize(201, 238);
        vboxLayout = new QVBoxLayout(IdentityStatusBase);
        vboxLayout->setObjectName(QString::fromUtf8("vboxLayout"));
        vboxLayout->setContentsMargins(0, 0, 0, 0);
        gridLayout = new QGridLayout();
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        gridLayout->setHorizontalSpacing(3);
        photo = new QToolButton(IdentityStatusBase);
        photo->setObjectName(QString::fromUtf8("photo"));
        photo->setMinimumSize(QSize(48, 48));
        photo->setMaximumSize(QSize(48, 48));
        photo->setIconSize(QSize(40, 40));

        gridLayout->addWidget(photo, 0, 0, 1, 1);

        hboxLayout = new QHBoxLayout();
        hboxLayout->setObjectName(QString::fromUtf8("hboxLayout"));

        gridLayout->addLayout(hboxLayout, 0, 2, 1, 1);

        identityName = new QLabel(IdentityStatusBase);
        identityName->setObjectName(QString::fromUtf8("identityName"));
        identityName->setMinimumSize(QSize(0, 20));
        QFont font;
        font.setBold(true);
        font.setWeight(75);
        identityName->setFont(font);
        identityName->setAlignment(Qt::AlignCenter);

        gridLayout->addWidget(identityName, 0, 1, 1, 1);


        vboxLayout->addLayout(gridLayout);

        accounts = new QListWidget(IdentityStatusBase);
        accounts->setObjectName(QString::fromUtf8("accounts"));
        accounts->setSelectionMode(QAbstractItemView::SingleSelection);
        accounts->setResizeMode(QListView::Adjust);

        vboxLayout->addWidget(accounts);


        retranslateUi(IdentityStatusBase);

        QMetaObject::connectSlotsByName(IdentityStatusBase);
    } // setupUi

    void retranslateUi(QWidget *IdentityStatusBase)
    {
        photo->setText(QString());
        identityName->setText(tr2i18n("Identity Name", 0));
        Q_UNUSED(IdentityStatusBase);
    } // retranslateUi

};

namespace Ui {
    class IdentityStatusBase: public Ui_IdentityStatusBase {};
} // namespace Ui

QT_END_NAMESPACE

#endif // IDENTITYSTATUSBASE_H

