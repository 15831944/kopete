#include <kdialog.h>
#include <klocale.h>

/********************************************************************************
** Form generated from reading UI file 'history2viewer.ui'
**
** Created by: Qt User Interface Compiler version 4.8.7
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_HISTORY2VIEWER_H
#define UI_HISTORY2VIEWER_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtGui/QApplication>
#include <QtGui/QButtonGroup>
#include <QtGui/QComboBox>
#include <QtGui/QHBoxLayout>
#include <QtGui/QHeaderView>
#include <QtGui/QLabel>
#include <QtGui/QProgressBar>
#include <QtGui/QPushButton>
#include <QtGui/QSplitter>
#include <QtGui/QTreeWidget>
#include <QtGui/QVBoxLayout>
#include <QtGui/QWidget>
#include "kcombobox.h"
#include "klineedit.h"
#include "ktreewidgetsearchline.h"

QT_BEGIN_NAMESPACE

class Ui_History2Viewer
{
public:
    QVBoxLayout *verticalLayout;
    QHBoxLayout *horizontalLayout_3;
    QLabel *textLabel1;
    KComboBox *contactComboBox;
    QPushButton *importHistory2;
    QLabel *textLabel1_2;
    QComboBox *messageFilterBox;
    QSplitter *splitter;
    QWidget *layoutWidget;
    QVBoxLayout *vboxLayout;
    KTreeWidgetSearchLine *dateSearchLine;
    QTreeWidget *dateTreeWidget;
    QWidget *htmlFrame;
    QHBoxLayout *horizontalLayout_2;
    QLabel *textLabel2;
    KLineEdit *searchLine;
    QPushButton *searchButton;
    QHBoxLayout *horizontalLayout;
    QLabel *statusLabel;
    QProgressBar *searchProgress;

    void setupUi(QWidget *History2Viewer)
    {
        if (History2Viewer->objectName().isEmpty())
            History2Viewer->setObjectName(QString::fromUtf8("History2Viewer"));
        History2Viewer->resize(682, 384);
        QSizePolicy sizePolicy(QSizePolicy::Preferred, QSizePolicy::Preferred);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(History2Viewer->sizePolicy().hasHeightForWidth());
        History2Viewer->setSizePolicy(sizePolicy);
        History2Viewer->setMinimumSize(QSize(300, 200));
        verticalLayout = new QVBoxLayout(History2Viewer);
        verticalLayout->setContentsMargins(0, 0, 0, 0);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        horizontalLayout_3 = new QHBoxLayout();
        horizontalLayout_3->setObjectName(QString::fromUtf8("horizontalLayout_3"));
        textLabel1 = new QLabel(History2Viewer);
        textLabel1->setObjectName(QString::fromUtf8("textLabel1"));
        QSizePolicy sizePolicy1(QSizePolicy::Minimum, QSizePolicy::Preferred);
        sizePolicy1.setHorizontalStretch(0);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(textLabel1->sizePolicy().hasHeightForWidth());
        textLabel1->setSizePolicy(sizePolicy1);

        horizontalLayout_3->addWidget(textLabel1);

        contactComboBox = new KComboBox(History2Viewer);
        contactComboBox->setObjectName(QString::fromUtf8("contactComboBox"));
        QSizePolicy sizePolicy2(QSizePolicy::Expanding, QSizePolicy::Fixed);
        sizePolicy2.setHorizontalStretch(0);
        sizePolicy2.setVerticalStretch(0);
        sizePolicy2.setHeightForWidth(contactComboBox->sizePolicy().hasHeightForWidth());
        contactComboBox->setSizePolicy(sizePolicy2);

        horizontalLayout_3->addWidget(contactComboBox);

        importHistory2 = new QPushButton(History2Viewer);
        importHistory2->setObjectName(QString::fromUtf8("importHistory2"));

        horizontalLayout_3->addWidget(importHistory2);

        textLabel1_2 = new QLabel(History2Viewer);
        textLabel1_2->setObjectName(QString::fromUtf8("textLabel1_2"));

        horizontalLayout_3->addWidget(textLabel1_2);

        messageFilterBox = new QComboBox(History2Viewer);
        messageFilterBox->setObjectName(QString::fromUtf8("messageFilterBox"));
        QSizePolicy sizePolicy3(QSizePolicy::Fixed, QSizePolicy::Fixed);
        sizePolicy3.setHorizontalStretch(0);
        sizePolicy3.setVerticalStretch(0);
        sizePolicy3.setHeightForWidth(messageFilterBox->sizePolicy().hasHeightForWidth());
        messageFilterBox->setSizePolicy(sizePolicy3);
        messageFilterBox->setMinimumSize(QSize(140, 0));

        horizontalLayout_3->addWidget(messageFilterBox);


        verticalLayout->addLayout(horizontalLayout_3);

        splitter = new QSplitter(History2Viewer);
        splitter->setObjectName(QString::fromUtf8("splitter"));
        QSizePolicy sizePolicy4(QSizePolicy::Expanding, QSizePolicy::Expanding);
        sizePolicy4.setHorizontalStretch(0);
        sizePolicy4.setVerticalStretch(0);
        sizePolicy4.setHeightForWidth(splitter->sizePolicy().hasHeightForWidth());
        splitter->setSizePolicy(sizePolicy4);
        splitter->setOrientation(Qt::Horizontal);
        layoutWidget = new QWidget(splitter);
        layoutWidget->setObjectName(QString::fromUtf8("layoutWidget"));
        vboxLayout = new QVBoxLayout(layoutWidget);
        vboxLayout->setObjectName(QString::fromUtf8("vboxLayout"));
        vboxLayout->setContentsMargins(0, 0, 0, 0);
        dateSearchLine = new KTreeWidgetSearchLine(layoutWidget);
        dateSearchLine->setObjectName(QString::fromUtf8("dateSearchLine"));

        vboxLayout->addWidget(dateSearchLine);

        dateTreeWidget = new QTreeWidget(layoutWidget);
        dateTreeWidget->setObjectName(QString::fromUtf8("dateTreeWidget"));
        dateTreeWidget->setAlternatingRowColors(true);
        dateTreeWidget->setRootIsDecorated(false);
        dateTreeWidget->setSortingEnabled(true);

        vboxLayout->addWidget(dateTreeWidget);

        splitter->addWidget(layoutWidget);
        htmlFrame = new QWidget(splitter);
        htmlFrame->setObjectName(QString::fromUtf8("htmlFrame"));
        QSizePolicy sizePolicy5(QSizePolicy::Expanding, QSizePolicy::Expanding);
        sizePolicy5.setHorizontalStretch(1);
        sizePolicy5.setVerticalStretch(0);
        sizePolicy5.setHeightForWidth(htmlFrame->sizePolicy().hasHeightForWidth());
        htmlFrame->setSizePolicy(sizePolicy5);
        splitter->addWidget(htmlFrame);

        verticalLayout->addWidget(splitter);

        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setObjectName(QString::fromUtf8("horizontalLayout_2"));
        textLabel2 = new QLabel(History2Viewer);
        textLabel2->setObjectName(QString::fromUtf8("textLabel2"));

        horizontalLayout_2->addWidget(textLabel2);

        searchLine = new KLineEdit(History2Viewer);
        searchLine->setObjectName(QString::fromUtf8("searchLine"));

        horizontalLayout_2->addWidget(searchLine);

        searchButton = new QPushButton(History2Viewer);
        searchButton->setObjectName(QString::fromUtf8("searchButton"));
        searchButton->setEnabled(false);

        horizontalLayout_2->addWidget(searchButton);


        verticalLayout->addLayout(horizontalLayout_2);

        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        statusLabel = new QLabel(History2Viewer);
        statusLabel->setObjectName(QString::fromUtf8("statusLabel"));
        statusLabel->setMaximumSize(QSize(16777215, 20));

        horizontalLayout->addWidget(statusLabel);

        searchProgress = new QProgressBar(History2Viewer);
        searchProgress->setObjectName(QString::fromUtf8("searchProgress"));
        searchProgress->setOrientation(Qt::Horizontal);

        horizontalLayout->addWidget(searchProgress);


        verticalLayout->addLayout(horizontalLayout);

        QWidget::setTabOrder(searchButton, dateSearchLine);
        QWidget::setTabOrder(dateSearchLine, dateTreeWidget);
        QWidget::setTabOrder(dateTreeWidget, messageFilterBox);

        retranslateUi(History2Viewer);

        QMetaObject::connectSlotsByName(History2Viewer);
    } // setupUi

    void retranslateUi(QWidget *History2Viewer)
    {
        textLabel1->setText(tr2i18n("Contact:", 0));
        importHistory2->setText(tr2i18n("Import History...", 0));
        textLabel1_2->setText(tr2i18n("Message filter:", 0));
        messageFilterBox->clear();
        messageFilterBox->insertItems(0, QStringList()
         << tr2i18n("All Messages", 0)
         << tr2i18n("Only Incoming", 0)
         << tr2i18n("Only Outgoing", 0)
        );
        QTreeWidgetItem *___qtreewidgetitem = dateTreeWidget->headerItem();
        ___qtreewidgetitem->setText(1, tr2i18n("Contact", 0));
        ___qtreewidgetitem->setText(0, tr2i18n("Date", 0));
        textLabel2->setText(tr2i18n("Search:", 0));
        searchButton->setText(tr2i18n("&Search", 0));
        statusLabel->setText(tr2i18n("Ready", 0));
        Q_UNUSED(History2Viewer);
    } // retranslateUi

};

namespace Ui {
    class History2Viewer: public Ui_History2Viewer {};
} // namespace Ui

QT_END_NAMESPACE

#endif // HISTORY2VIEWER_H

