#include <kdialog.h>
#include <klocale.h>

/********************************************************************************
** Form generated from reading UI file 'statusconfig_general.ui'
**
** Created by: Qt User Interface Compiler version 4.8.7
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_STATUSCONFIG_GENERAL_H
#define UI_STATUSCONFIG_GENERAL_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtGui/QApplication>
#include <QtGui/QButtonGroup>
#include <QtGui/QComboBox>
#include <QtGui/QFormLayout>
#include <QtGui/QGroupBox>
#include <QtGui/QHeaderView>
#include <QtGui/QLabel>
#include <QtGui/QSpacerItem>
#include <QtGui/QVBoxLayout>
#include <QtGui/QWidget>

QT_BEGIN_NAMESPACE

class Ui_StatusConfig_General
{
public:
    QVBoxLayout *verticalLayout;
    QGroupBox *groupBox;
    QFormLayout *formLayout;
    QLabel *label;
    QComboBox *kcfg_protocolStatusMenuType;
    QSpacerItem *spacerItem;

    void setupUi(QWidget *StatusConfig_General)
    {
        if (StatusConfig_General->objectName().isEmpty())
            StatusConfig_General->setObjectName(QString::fromUtf8("StatusConfig_General"));
        StatusConfig_General->resize(569, 129);
        verticalLayout = new QVBoxLayout(StatusConfig_General);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        groupBox = new QGroupBox(StatusConfig_General);
        groupBox->setObjectName(QString::fromUtf8("groupBox"));
        formLayout = new QFormLayout(groupBox);
        formLayout->setObjectName(QString::fromUtf8("formLayout"));
        label = new QLabel(groupBox);
        label->setObjectName(QString::fromUtf8("label"));

        formLayout->setWidget(0, QFormLayout::LabelRole, label);

        kcfg_protocolStatusMenuType = new QComboBox(groupBox);
        kcfg_protocolStatusMenuType->setObjectName(QString::fromUtf8("kcfg_protocolStatusMenuType"));

        formLayout->setWidget(0, QFormLayout::FieldRole, kcfg_protocolStatusMenuType);


        verticalLayout->addWidget(groupBox);

        spacerItem = new QSpacerItem(20, 0, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout->addItem(spacerItem);


        retranslateUi(StatusConfig_General);

        QMetaObject::connectSlotsByName(StatusConfig_General);
    } // setupUi

    void retranslateUi(QWidget *StatusConfig_General)
    {
        groupBox->setTitle(tr2i18n("Online Status Menu", 0));
        label->setText(tr2i18n("Protocol's online status menu:", 0));
        kcfg_protocolStatusMenuType->clear();
        kcfg_protocolStatusMenuType->insertItems(0, QStringList()
         << tr2i18n("As Global Status Menu", 0)
         << tr2i18n("Only Statuses With Matching Category", 0)
         << tr2i18n("All Statuses With Parent Category", 0)
        );
        Q_UNUSED(StatusConfig_General);
    } // retranslateUi

};

namespace Ui {
    class StatusConfig_General: public Ui_StatusConfig_General {};
} // namespace Ui

QT_END_NAMESPACE

#endif // STATUSCONFIG_GENERAL_H

