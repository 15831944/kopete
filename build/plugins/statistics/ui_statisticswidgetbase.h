#include <kdialog.h>
#include <klocale.h>

/********************************************************************************
** Form generated from reading UI file 'statisticswidgetbase.ui'
**
** Created by: Qt User Interface Compiler version 4.8.7
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_STATISTICSWIDGETBASE_H
#define UI_STATISTICSWIDGETBASE_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtGui/QApplication>
#include <QtGui/QButtonGroup>
#include <QtGui/QHBoxLayout>
#include <QtGui/QHeaderView>
#include <QtGui/QLabel>
#include <QtGui/QSpacerItem>
#include <QtGui/QTabWidget>
#include <QtGui/QVBoxLayout>
#include <QtGui/QWidget>
#include "kdatepicker.h"
#include "khbox.h"

QT_BEGIN_NAMESPACE

class Ui_StatisticsWidgetUI
{
public:
    QVBoxLayout *vboxLayout;
    QTabWidget *tabWidget;
    QWidget *TabPage;
    QVBoxLayout *vboxLayout1;
    KDatePicker *datePicker;
    QHBoxLayout *hboxLayout;
    QLabel *calendarKey;
    QSpacerItem *spacerItem;
    KHBox *calendarHBox;

    void setupUi(QWidget *StatisticsWidgetUI)
    {
        if (StatisticsWidgetUI->objectName().isEmpty())
            StatisticsWidgetUI->setObjectName(QString::fromUtf8("StatisticsWidgetUI"));
        StatisticsWidgetUI->resize(588, 762);
        QSizePolicy sizePolicy(QSizePolicy::Preferred, QSizePolicy::Preferred);
        sizePolicy.setHorizontalStretch(255);
        sizePolicy.setVerticalStretch(255);
        sizePolicy.setHeightForWidth(StatisticsWidgetUI->sizePolicy().hasHeightForWidth());
        StatisticsWidgetUI->setSizePolicy(sizePolicy);
        vboxLayout = new QVBoxLayout(StatisticsWidgetUI);
        vboxLayout->setSpacing(6);
        vboxLayout->setObjectName(QString::fromUtf8("vboxLayout"));
        vboxLayout->setContentsMargins(0, 0, 0, 0);
        tabWidget = new QTabWidget(StatisticsWidgetUI);
        tabWidget->setObjectName(QString::fromUtf8("tabWidget"));
        TabPage = new QWidget();
        TabPage->setObjectName(QString::fromUtf8("TabPage"));
        vboxLayout1 = new QVBoxLayout(TabPage);
        vboxLayout1->setObjectName(QString::fromUtf8("vboxLayout1"));
        datePicker = new KDatePicker(TabPage);
        datePicker->setObjectName(QString::fromUtf8("datePicker"));
        QSizePolicy sizePolicy1(QSizePolicy::Preferred, QSizePolicy::Expanding);
        sizePolicy1.setHorizontalStretch(0);
        sizePolicy1.setVerticalStretch(1);
        sizePolicy1.setHeightForWidth(datePicker->sizePolicy().hasHeightForWidth());
        datePicker->setSizePolicy(sizePolicy1);
        datePicker->setFrameShape(QFrame::Box);

        vboxLayout1->addWidget(datePicker);

        hboxLayout = new QHBoxLayout();
        hboxLayout->setObjectName(QString::fromUtf8("hboxLayout"));
        calendarKey = new QLabel(TabPage);
        calendarKey->setObjectName(QString::fromUtf8("calendarKey"));
        QSizePolicy sizePolicy2(QSizePolicy::Preferred, QSizePolicy::Preferred);
        sizePolicy2.setHorizontalStretch(0);
        sizePolicy2.setVerticalStretch(0);
        sizePolicy2.setHeightForWidth(calendarKey->sizePolicy().hasHeightForWidth());
        calendarKey->setSizePolicy(sizePolicy2);
        calendarKey->setFrameShape(QFrame::Box);
        calendarKey->setAlignment(Qt::AlignLeading|Qt::AlignLeft|Qt::AlignTop);

        hboxLayout->addWidget(calendarKey);

        spacerItem = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        hboxLayout->addItem(spacerItem);


        vboxLayout1->addLayout(hboxLayout);

        calendarHBox = new KHBox(TabPage);
        calendarHBox->setObjectName(QString::fromUtf8("calendarHBox"));
        sizePolicy1.setHeightForWidth(calendarHBox->sizePolicy().hasHeightForWidth());
        calendarHBox->setSizePolicy(sizePolicy1);
        calendarHBox->setFrameShape(QFrame::StyledPanel);
        calendarHBox->setFrameShadow(QFrame::Raised);

        vboxLayout1->addWidget(calendarHBox);

        tabWidget->addTab(TabPage, QString());

        vboxLayout->addWidget(tabWidget);


        retranslateUi(StatisticsWidgetUI);

        QMetaObject::connectSlotsByName(StatisticsWidgetUI);
    } // setupUi

    void retranslateUi(QWidget *StatisticsWidgetUI)
    {
        calendarKey->setText(tr2i18n("TextLabel", "KDE::DoNotExtract"));
        tabWidget->setTabText(tabWidget->indexOf(TabPage), tr2i18n("&Calendar View", 0));
        Q_UNUSED(StatisticsWidgetUI);
    } // retranslateUi

};

namespace Ui {
    class StatisticsWidgetUI: public Ui_StatisticsWidgetUI {};
} // namespace Ui

QT_END_NAMESPACE

#endif // STATISTICSWIDGETBASE_H

