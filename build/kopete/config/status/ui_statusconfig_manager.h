#include <kdialog.h>
#include <klocale.h>

/********************************************************************************
** Form generated from reading UI file 'statusconfig_manager.ui'
**
** Created by: Qt User Interface Compiler version 4.8.7
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_STATUSCONFIG_MANAGER_H
#define UI_STATUSCONFIG_MANAGER_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtGui/QApplication>
#include <QtGui/QButtonGroup>
#include <QtGui/QComboBox>
#include <QtGui/QFormLayout>
#include <QtGui/QGroupBox>
#include <QtGui/QHBoxLayout>
#include <QtGui/QHeaderView>
#include <QtGui/QLabel>
#include <QtGui/QLineEdit>
#include <QtGui/QPushButton>
#include <QtGui/QSpacerItem>
#include <QtGui/QSplitter>
#include <QtGui/QTextEdit>
#include <QtGui/QVBoxLayout>
#include <QtGui/QWidget>
#include "statustreeview.h"

QT_BEGIN_NAMESPACE

class Ui_StatusConfig_Manager
{
public:
    QVBoxLayout *verticalLayout_2;
    QSplitter *splitter;
    QWidget *widget;
    QVBoxLayout *verticalLayout;
    StatusTreeView *statusView;
    QHBoxLayout *hboxLayout;
    QPushButton *pbAddStatus;
    QPushButton *pbRemove;
    QPushButton *pbAddGroup;
    QSpacerItem *spacerItem;
    QGroupBox *statusGroupBox;
    QFormLayout *formLayout;
    QLabel *label;
    QLineEdit *leStatusTitle;
    QLabel *label_2;
    QComboBox *cbStatusCategory;
    QLabel *lblStatusMessage;
    QTextEdit *teStatusMessage;

    void setupUi(QWidget *StatusConfig_Manager)
    {
        if (StatusConfig_Manager->objectName().isEmpty())
            StatusConfig_Manager->setObjectName(QString::fromUtf8("StatusConfig_Manager"));
        StatusConfig_Manager->resize(455, 335);
        verticalLayout_2 = new QVBoxLayout(StatusConfig_Manager);
        verticalLayout_2->setObjectName(QString::fromUtf8("verticalLayout_2"));
        splitter = new QSplitter(StatusConfig_Manager);
        splitter->setObjectName(QString::fromUtf8("splitter"));
        splitter->setOrientation(Qt::Vertical);
        widget = new QWidget(splitter);
        widget->setObjectName(QString::fromUtf8("widget"));
        QSizePolicy sizePolicy(QSizePolicy::Preferred, QSizePolicy::Preferred);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(2);
        sizePolicy.setHeightForWidth(widget->sizePolicy().hasHeightForWidth());
        widget->setSizePolicy(sizePolicy);
        verticalLayout = new QVBoxLayout(widget);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        statusView = new StatusTreeView(widget);
        statusView->setObjectName(QString::fromUtf8("statusView"));
        statusView->setDragDropMode(QAbstractItemView::InternalMove);
        statusView->setAlternatingRowColors(true);
        statusView->setHeaderHidden(true);

        verticalLayout->addWidget(statusView);

        hboxLayout = new QHBoxLayout();
        hboxLayout->setObjectName(QString::fromUtf8("hboxLayout"));
        pbAddStatus = new QPushButton(widget);
        pbAddStatus->setObjectName(QString::fromUtf8("pbAddStatus"));

        hboxLayout->addWidget(pbAddStatus);

        pbRemove = new QPushButton(widget);
        pbRemove->setObjectName(QString::fromUtf8("pbRemove"));

        hboxLayout->addWidget(pbRemove);

        pbAddGroup = new QPushButton(widget);
        pbAddGroup->setObjectName(QString::fromUtf8("pbAddGroup"));

        hboxLayout->addWidget(pbAddGroup);

        spacerItem = new QSpacerItem(0, 27, QSizePolicy::Expanding, QSizePolicy::Minimum);

        hboxLayout->addItem(spacerItem);


        verticalLayout->addLayout(hboxLayout);

        splitter->addWidget(widget);
        statusGroupBox = new QGroupBox(splitter);
        statusGroupBox->setObjectName(QString::fromUtf8("statusGroupBox"));
        QSizePolicy sizePolicy1(QSizePolicy::Preferred, QSizePolicy::Preferred);
        sizePolicy1.setHorizontalStretch(0);
        sizePolicy1.setVerticalStretch(1);
        sizePolicy1.setHeightForWidth(statusGroupBox->sizePolicy().hasHeightForWidth());
        statusGroupBox->setSizePolicy(sizePolicy1);
        statusGroupBox->setFlat(false);
        formLayout = new QFormLayout(statusGroupBox);
        formLayout->setObjectName(QString::fromUtf8("formLayout"));
        label = new QLabel(statusGroupBox);
        label->setObjectName(QString::fromUtf8("label"));

        formLayout->setWidget(0, QFormLayout::LabelRole, label);

        leStatusTitle = new QLineEdit(statusGroupBox);
        leStatusTitle->setObjectName(QString::fromUtf8("leStatusTitle"));

        formLayout->setWidget(0, QFormLayout::FieldRole, leStatusTitle);

        label_2 = new QLabel(statusGroupBox);
        label_2->setObjectName(QString::fromUtf8("label_2"));

        formLayout->setWidget(1, QFormLayout::LabelRole, label_2);

        cbStatusCategory = new QComboBox(statusGroupBox);
        cbStatusCategory->setObjectName(QString::fromUtf8("cbStatusCategory"));

        formLayout->setWidget(1, QFormLayout::FieldRole, cbStatusCategory);

        lblStatusMessage = new QLabel(statusGroupBox);
        lblStatusMessage->setObjectName(QString::fromUtf8("lblStatusMessage"));

        formLayout->setWidget(2, QFormLayout::LabelRole, lblStatusMessage);

        teStatusMessage = new QTextEdit(statusGroupBox);
        teStatusMessage->setObjectName(QString::fromUtf8("teStatusMessage"));

        formLayout->setWidget(2, QFormLayout::FieldRole, teStatusMessage);

        splitter->addWidget(statusGroupBox);

        verticalLayout_2->addWidget(splitter);

#ifndef UI_QT_NO_SHORTCUT
        label->setBuddy(leStatusTitle);
        label_2->setBuddy(cbStatusCategory);
        lblStatusMessage->setBuddy(teStatusMessage);
#endif // QT_NO_SHORTCUT
        QWidget::setTabOrder(statusView, pbAddStatus);
        QWidget::setTabOrder(pbAddStatus, pbRemove);
        QWidget::setTabOrder(pbRemove, pbAddGroup);
        QWidget::setTabOrder(pbAddGroup, leStatusTitle);
        QWidget::setTabOrder(leStatusTitle, cbStatusCategory);
        QWidget::setTabOrder(cbStatusCategory, teStatusMessage);

        retranslateUi(StatusConfig_Manager);

        QMetaObject::connectSlotsByName(StatusConfig_Manager);
    } // setupUi

    void retranslateUi(QWidget *StatusConfig_Manager)
    {
        pbAddStatus->setText(tr2i18n("Add", 0));
        pbRemove->setText(tr2i18n("Remove", 0));
        pbAddGroup->setText(tr2i18n("Add Group", 0));
        statusGroupBox->setTitle(QString());
        label->setText(tr2i18n("Title:", 0));
        label_2->setText(tr2i18n("Category:", 0));
        lblStatusMessage->setText(tr2i18n("Message:", 0));
        Q_UNUSED(StatusConfig_Manager);
    } // retranslateUi

};

namespace Ui {
    class StatusConfig_Manager: public Ui_StatusConfig_Manager {};
} // namespace Ui

QT_END_NAMESPACE

#endif // STATUSCONFIG_MANAGER_H

