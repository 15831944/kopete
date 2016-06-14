#include <kdialog.h>
#include <klocale.h>

/********************************************************************************
** Form generated from reading UI file 'kopetegvipropswidget.ui'
**
** Created by: Qt User Interface Compiler version 4.8.7
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_KOPETEGVIPROPSWIDGET_H
#define UI_KOPETEGVIPROPSWIDGET_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtGui/QApplication>
#include <QtGui/QButtonGroup>
#include <QtGui/QCheckBox>
#include <QtGui/QGridLayout>
#include <QtGui/QGroupBox>
#include <QtGui/QHBoxLayout>
#include <QtGui/QHeaderView>
#include <QtGui/QLabel>
#include <QtGui/QLineEdit>
#include <QtGui/QPushButton>
#include <QtGui/QSpacerItem>
#include <QtGui/QTabWidget>
#include <QtGui/QVBoxLayout>
#include <QtGui/QWidget>

QT_BEGIN_NAMESPACE

class Ui_KopeteGVIPropsWidget
{
public:
    QVBoxLayout *vboxLayout;
    QTabWidget *tabWidget;
    QWidget *tab;
    QVBoxLayout *vboxLayout1;
    QHBoxLayout *hboxLayout;
    QLabel *lblDisplayName;
    QLineEdit *edtDisplayName;
    QGroupBox *grpIcons;
    QGridLayout *gridLayout;
    QSpacerItem *spacerItem;
    QSpacerItem *spacerItem1;
    QCheckBox *chkUseCustomIcons;
    QLabel *lblOpen;
    QPushButton *icnbOpen;
    QLabel *lblClosed;
    QPushButton *icnbClosed;
    QSpacerItem *spacerItem2;

    void setupUi(QWidget *KopeteGVIPropsWidget)
    {
        if (KopeteGVIPropsWidget->objectName().isEmpty())
            KopeteGVIPropsWidget->setObjectName(QString::fromUtf8("KopeteGVIPropsWidget"));
        KopeteGVIPropsWidget->resize(393, 253);
        vboxLayout = new QVBoxLayout(KopeteGVIPropsWidget);
        vboxLayout->setObjectName(QString::fromUtf8("vboxLayout"));
        vboxLayout->setContentsMargins(0, 0, 0, 0);
        tabWidget = new QTabWidget(KopeteGVIPropsWidget);
        tabWidget->setObjectName(QString::fromUtf8("tabWidget"));
        tab = new QWidget();
        tab->setObjectName(QString::fromUtf8("tab"));
        vboxLayout1 = new QVBoxLayout(tab);
        vboxLayout1->setObjectName(QString::fromUtf8("vboxLayout1"));
        hboxLayout = new QHBoxLayout();
        hboxLayout->setSpacing(6);
        hboxLayout->setObjectName(QString::fromUtf8("hboxLayout"));
        hboxLayout->setContentsMargins(0, 0, 0, 0);
        lblDisplayName = new QLabel(tab);
        lblDisplayName->setObjectName(QString::fromUtf8("lblDisplayName"));

        hboxLayout->addWidget(lblDisplayName);

        edtDisplayName = new QLineEdit(tab);
        edtDisplayName->setObjectName(QString::fromUtf8("edtDisplayName"));

        hboxLayout->addWidget(edtDisplayName);


        vboxLayout1->addLayout(hboxLayout);

        grpIcons = new QGroupBox(tab);
        grpIcons->setObjectName(QString::fromUtf8("grpIcons"));
        gridLayout = new QGridLayout(grpIcons);
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        gridLayout->setHorizontalSpacing(6);
        gridLayout->setVerticalSpacing(6);
        gridLayout->setContentsMargins(9, 9, 9, 9);
        spacerItem = new QSpacerItem(20, 16, QSizePolicy::Minimum, QSizePolicy::Expanding);

        gridLayout->addItem(spacerItem, 3, 1, 1, 1);

        spacerItem1 = new QSpacerItem(16, 16, QSizePolicy::Expanding, QSizePolicy::Minimum);

        gridLayout->addItem(spacerItem1, 1, 2, 1, 1);

        chkUseCustomIcons = new QCheckBox(grpIcons);
        chkUseCustomIcons->setObjectName(QString::fromUtf8("chkUseCustomIcons"));

        gridLayout->addWidget(chkUseCustomIcons, 0, 0, 1, 2);

        lblOpen = new QLabel(grpIcons);
        lblOpen->setObjectName(QString::fromUtf8("lblOpen"));

        gridLayout->addWidget(lblOpen, 1, 0, 1, 1);

        icnbOpen = new QPushButton(grpIcons);
        icnbOpen->setObjectName(QString::fromUtf8("icnbOpen"));

        gridLayout->addWidget(icnbOpen, 1, 1, 1, 1);

        lblClosed = new QLabel(grpIcons);
        lblClosed->setObjectName(QString::fromUtf8("lblClosed"));

        gridLayout->addWidget(lblClosed, 2, 0, 1, 1);

        icnbClosed = new QPushButton(grpIcons);
        icnbClosed->setObjectName(QString::fromUtf8("icnbClosed"));

        gridLayout->addWidget(icnbClosed, 2, 1, 1, 1);


        vboxLayout1->addWidget(grpIcons);

        spacerItem2 = new QSpacerItem(20, 0, QSizePolicy::Minimum, QSizePolicy::Expanding);

        vboxLayout1->addItem(spacerItem2);

        tabWidget->addTab(tab, QString());

        vboxLayout->addWidget(tabWidget);

#ifndef UI_QT_NO_SHORTCUT
        lblDisplayName->setBuddy(edtDisplayName);
        lblOpen->setBuddy(icnbOpen);
        lblClosed->setBuddy(icnbClosed);
#endif // QT_NO_SHORTCUT
        QWidget::setTabOrder(tabWidget, edtDisplayName);
        QWidget::setTabOrder(edtDisplayName, chkUseCustomIcons);
        QWidget::setTabOrder(chkUseCustomIcons, icnbOpen);
        QWidget::setTabOrder(icnbOpen, icnbClosed);

        retranslateUi(KopeteGVIPropsWidget);

        QMetaObject::connectSlotsByName(KopeteGVIPropsWidget);
    } // setupUi

    void retranslateUi(QWidget *KopeteGVIPropsWidget)
    {
        lblDisplayName->setText(tr2i18n("&Name:", 0));
        grpIcons->setTitle(tr2i18n("Icons", 0));
        chkUseCustomIcons->setText(tr2i18n("Use custom &icons", 0));
        lblOpen->setText(tr2i18n("O&pen:", 0));
        icnbOpen->setText(QString());
        lblClosed->setText(tr2i18n("C&losed:", 0));
        icnbClosed->setText(QString());
        tabWidget->setTabText(tabWidget->indexOf(tab), tr2i18n("&General", 0));
        Q_UNUSED(KopeteGVIPropsWidget);
    } // retranslateUi

};

namespace Ui {
    class KopeteGVIPropsWidget: public Ui_KopeteGVIPropsWidget {};
} // namespace Ui

QT_END_NAMESPACE

#endif // KOPETEGVIPROPSWIDGET_H

