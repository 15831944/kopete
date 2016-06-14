#include <kdialog.h>
#include <klocale.h>

/********************************************************************************
** Form generated from reading UI file 'dlgsearch.ui'
**
** Created by: Qt User Interface Compiler version 4.8.7
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_DLGSEARCH_H
#define UI_DLGSEARCH_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtGui/QApplication>
#include <QtGui/QButtonGroup>
#include <QtGui/QGroupBox>
#include <QtGui/QHBoxLayout>
#include <QtGui/QHeaderView>
#include <QtGui/QLabel>
#include <QtGui/QSpacerItem>
#include <QtGui/QSplitter>
#include <QtGui/QTreeWidget>
#include <QtGui/QVBoxLayout>
#include <QtGui/QWidget>

QT_BEGIN_NAMESPACE

class Ui_dlgSearch
{
public:
    QHBoxLayout *hboxLayout;
    QSplitter *splitter;
    QWidget *layoutWidget;
    QVBoxLayout *vboxLayout;
    QGroupBox *dynamicForm;
    QVBoxLayout *vboxLayout1;
    QLabel *lblWait;
    QSpacerItem *spacerItem;
    QTreeWidget *tblResults;

    void setupUi(QWidget *dlgSearch)
    {
        if (dlgSearch->objectName().isEmpty())
            dlgSearch->setObjectName(QString::fromUtf8("dlgSearch"));
        dlgSearch->resize(800, 300);
        hboxLayout = new QHBoxLayout(dlgSearch);
        hboxLayout->setObjectName(QString::fromUtf8("hboxLayout"));
        hboxLayout->setContentsMargins(0, 0, 0, 0);
        splitter = new QSplitter(dlgSearch);
        splitter->setObjectName(QString::fromUtf8("splitter"));
        splitter->setOrientation(Qt::Horizontal);
        splitter->setChildrenCollapsible(false);
        layoutWidget = new QWidget(splitter);
        layoutWidget->setObjectName(QString::fromUtf8("layoutWidget"));
        vboxLayout = new QVBoxLayout(layoutWidget);
        vboxLayout->setObjectName(QString::fromUtf8("vboxLayout"));
        vboxLayout->setContentsMargins(0, 0, 0, 0);
        dynamicForm = new QGroupBox(layoutWidget);
        dynamicForm->setObjectName(QString::fromUtf8("dynamicForm"));
        vboxLayout1 = new QVBoxLayout(dynamicForm);
        vboxLayout1->setSpacing(6);
        vboxLayout1->setObjectName(QString::fromUtf8("vboxLayout1"));
        vboxLayout1->setContentsMargins(8, 8, 8, 8);
        lblWait = new QLabel(dynamicForm);
        lblWait->setObjectName(QString::fromUtf8("lblWait"));
        lblWait->setLineWidth(1);
        lblWait->setAlignment(Qt::AlignVCenter);
        lblWait->setWordWrap(true);

        vboxLayout1->addWidget(lblWait);


        vboxLayout->addWidget(dynamicForm);

        spacerItem = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        vboxLayout->addItem(spacerItem);

        splitter->addWidget(layoutWidget);
        tblResults = new QTreeWidget(splitter);
        tblResults->setObjectName(QString::fromUtf8("tblResults"));
        QSizePolicy sizePolicy(QSizePolicy::Expanding, QSizePolicy::Expanding);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(tblResults->sizePolicy().hasHeightForWidth());
        tblResults->setSizePolicy(sizePolicy);
        tblResults->setRootIsDecorated(false);
        tblResults->setUniformRowHeights(false);
        tblResults->setItemsExpandable(true);
        tblResults->setColumnCount(0);
        splitter->addWidget(tblResults);

        hboxLayout->addWidget(splitter);


        retranslateUi(dlgSearch);

        QMetaObject::connectSlotsByName(dlgSearch);
    } // setupUi

    void retranslateUi(QWidget *dlgSearch)
    {
        dynamicForm->setTitle(tr2i18n("Search For", 0));
        lblWait->setText(QString());
        Q_UNUSED(dlgSearch);
    } // retranslateUi

};

namespace Ui {
    class dlgSearch: public Ui_dlgSearch {};
} // namespace Ui

QT_END_NAMESPACE

#endif // DLGSEARCH_H

