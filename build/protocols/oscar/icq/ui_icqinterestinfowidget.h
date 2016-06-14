#include <kdialog.h>
#include <klocale.h>

/********************************************************************************
** Form generated from reading UI file 'icqinterestinfowidget.ui'
**
** Created by: Qt User Interface Compiler version 4.8.7
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_ICQINTERESTINFOWIDGET_H
#define UI_ICQINTERESTINFOWIDGET_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtGui/QApplication>
#include <QtGui/QButtonGroup>
#include <QtGui/QGridLayout>
#include <QtGui/QGroupBox>
#include <QtGui/QHeaderView>
#include <QtGui/QLineEdit>
#include <QtGui/QSpacerItem>
#include <QtGui/QVBoxLayout>
#include <QtGui/QWidget>
#include "infocombobox.h"

QT_BEGIN_NAMESPACE

class Ui_ICQInterestInfoWidget
{
public:
    QVBoxLayout *vboxLayout;
    QGroupBox *groupBox;
    QGridLayout *gridLayout;
    InfoComboBox *topic1Combo;
    QLineEdit *desc1;
    InfoComboBox *topic2Combo;
    QLineEdit *desc2;
    InfoComboBox *topic3Combo;
    QLineEdit *desc3;
    InfoComboBox *topic4Combo;
    QLineEdit *desc4;
    QSpacerItem *spacerItem;

    void setupUi(QWidget *ICQInterestInfoWidget)
    {
        if (ICQInterestInfoWidget->objectName().isEmpty())
            ICQInterestInfoWidget->setObjectName(QString::fromUtf8("ICQInterestInfoWidget"));
        ICQInterestInfoWidget->resize(376, 167);
        vboxLayout = new QVBoxLayout(ICQInterestInfoWidget);
        vboxLayout->setSpacing(6);
        vboxLayout->setObjectName(QString::fromUtf8("vboxLayout"));
        vboxLayout->setContentsMargins(0, 0, 0, 0);
        groupBox = new QGroupBox(ICQInterestInfoWidget);
        groupBox->setObjectName(QString::fromUtf8("groupBox"));
        gridLayout = new QGridLayout(groupBox);
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        gridLayout->setHorizontalSpacing(6);
        gridLayout->setVerticalSpacing(6);
        gridLayout->setContentsMargins(9, 9, 9, 9);
        topic1Combo = new InfoComboBox(groupBox);
        topic1Combo->setObjectName(QString::fromUtf8("topic1Combo"));

        gridLayout->addWidget(topic1Combo, 0, 0, 1, 1);

        desc1 = new QLineEdit(groupBox);
        desc1->setObjectName(QString::fromUtf8("desc1"));
        desc1->setReadOnly(true);

        gridLayout->addWidget(desc1, 0, 1, 1, 1);

        topic2Combo = new InfoComboBox(groupBox);
        topic2Combo->setObjectName(QString::fromUtf8("topic2Combo"));

        gridLayout->addWidget(topic2Combo, 1, 0, 1, 1);

        desc2 = new QLineEdit(groupBox);
        desc2->setObjectName(QString::fromUtf8("desc2"));
        desc2->setReadOnly(true);

        gridLayout->addWidget(desc2, 1, 1, 1, 1);

        topic3Combo = new InfoComboBox(groupBox);
        topic3Combo->setObjectName(QString::fromUtf8("topic3Combo"));

        gridLayout->addWidget(topic3Combo, 2, 0, 1, 1);

        desc3 = new QLineEdit(groupBox);
        desc3->setObjectName(QString::fromUtf8("desc3"));
        desc3->setReadOnly(true);

        gridLayout->addWidget(desc3, 2, 1, 1, 1);

        topic4Combo = new InfoComboBox(groupBox);
        topic4Combo->setObjectName(QString::fromUtf8("topic4Combo"));

        gridLayout->addWidget(topic4Combo, 3, 0, 1, 1);

        desc4 = new QLineEdit(groupBox);
        desc4->setObjectName(QString::fromUtf8("desc4"));
        desc4->setReadOnly(true);

        gridLayout->addWidget(desc4, 3, 1, 1, 1);


        vboxLayout->addWidget(groupBox);

        spacerItem = new QSpacerItem(281, 0, QSizePolicy::Minimum, QSizePolicy::Expanding);

        vboxLayout->addItem(spacerItem);

        QWidget::setTabOrder(topic1Combo, desc1);
        QWidget::setTabOrder(desc1, topic2Combo);
        QWidget::setTabOrder(topic2Combo, desc2);
        QWidget::setTabOrder(desc2, topic3Combo);
        QWidget::setTabOrder(topic3Combo, desc3);
        QWidget::setTabOrder(desc3, topic4Combo);
        QWidget::setTabOrder(topic4Combo, desc4);

        retranslateUi(ICQInterestInfoWidget);

        QMetaObject::connectSlotsByName(ICQInterestInfoWidget);
    } // setupUi

    void retranslateUi(QWidget *ICQInterestInfoWidget)
    {
        groupBox->setTitle(tr2i18n("Interests", 0));
        Q_UNUSED(ICQInterestInfoWidget);
    } // retranslateUi

};

namespace Ui {
    class ICQInterestInfoWidget: public Ui_ICQInterestInfoWidget {};
} // namespace Ui

QT_END_NAMESPACE

#endif // ICQINTERESTINFOWIDGET_H

