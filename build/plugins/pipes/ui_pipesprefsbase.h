#include <kdialog.h>
#include <klocale.h>

/********************************************************************************
** Form generated from reading UI file 'pipesprefsbase.ui'
**
** Created by: Qt User Interface Compiler version 4.8.7
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_PIPESPREFSBASE_H
#define UI_PIPESPREFSBASE_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtGui/QApplication>
#include <QtGui/QButtonGroup>
#include <QtGui/QHBoxLayout>
#include <QtGui/QHeaderView>
#include <QtGui/QTableView>
#include <QtGui/QVBoxLayout>
#include <QtGui/QWidget>
#include "kpushbutton.h"

QT_BEGIN_NAMESPACE

class Ui_PipesPrefsUI
{
public:
    QVBoxLayout *vboxLayout;
    QTableView *pipesList;
    QHBoxLayout *hboxLayout;
    KPushButton *addButton;
    KPushButton *removeButton;

    void setupUi(QWidget *PipesPrefsUI)
    {
        if (PipesPrefsUI->objectName().isEmpty())
            PipesPrefsUI->setObjectName(QString::fromUtf8("PipesPrefsUI"));
        PipesPrefsUI->resize(443, 313);
        vboxLayout = new QVBoxLayout(PipesPrefsUI);
        vboxLayout->setObjectName(QString::fromUtf8("vboxLayout"));
        pipesList = new QTableView(PipesPrefsUI);
        pipesList->setObjectName(QString::fromUtf8("pipesList"));
        QSizePolicy sizePolicy(QSizePolicy::Expanding, QSizePolicy::Expanding);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(pipesList->sizePolicy().hasHeightForWidth());
        pipesList->setSizePolicy(sizePolicy);
        pipesList->setEditTriggers(QAbstractItemView::AllEditTriggers);
        pipesList->setTextElideMode(Qt::ElideLeft);
        pipesList->setGridStyle(Qt::DotLine);

        vboxLayout->addWidget(pipesList);

        hboxLayout = new QHBoxLayout();
        hboxLayout->setObjectName(QString::fromUtf8("hboxLayout"));
        addButton = new KPushButton(PipesPrefsUI);
        addButton->setObjectName(QString::fromUtf8("addButton"));

        hboxLayout->addWidget(addButton);

        removeButton = new KPushButton(PipesPrefsUI);
        removeButton->setObjectName(QString::fromUtf8("removeButton"));

        hboxLayout->addWidget(removeButton);


        vboxLayout->addLayout(hboxLayout);


        retranslateUi(PipesPrefsUI);

        QMetaObject::connectSlotsByName(PipesPrefsUI);
    } // setupUi

    void retranslateUi(QWidget *PipesPrefsUI)
    {
        addButton->setText(tr2i18n("&Add...", "verb"));
        removeButton->setText(tr2i18n("&Remove", "verb"));
        Q_UNUSED(PipesPrefsUI);
    } // retranslateUi

};

namespace Ui {
    class PipesPrefsUI: public Ui_PipesPrefsUI {};
} // namespace Ui

QT_END_NAMESPACE

#endif // PIPESPREFSBASE_H

