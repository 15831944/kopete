#include <kdialog.h>
#include <klocale.h>

/********************************************************************************
** Form generated from reading UI file 'behaviorconfig_away.ui'
**
** Created by: Qt User Interface Compiler version 4.8.7
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_BEHAVIORCONFIG_AWAY_H
#define UI_BEHAVIORCONFIG_AWAY_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtGui/QApplication>
#include <QtGui/QButtonGroup>
#include <QtGui/QCheckBox>
#include <QtGui/QFormLayout>
#include <QtGui/QGroupBox>
#include <QtGui/QHBoxLayout>
#include <QtGui/QHeaderView>
#include <QtGui/QLabel>
#include <QtGui/QPlainTextEdit>
#include <QtGui/QRadioButton>
#include <QtGui/QSpacerItem>
#include <QtGui/QSpinBox>
#include <QtGui/QVBoxLayout>
#include <QtGui/QWidget>
#include "klineedit.h"

QT_BEGIN_NAMESPACE

class Ui_BehaviorConfig_Away
{
public:
    QVBoxLayout *verticalLayout_2;
    QGroupBox *groupBox_2;
    QVBoxLayout *vboxLayout;
    QCheckBox *kcfg_useAutoAway;
    QHBoxLayout *hboxLayout;
    QLabel *label_2;
    QSpinBox *mAutoAwayTimeout;
    QLabel *label_3;
    QSpacerItem *spacerItem;
    QCheckBox *kcfg_autoAwayGoAvailable;
    QHBoxLayout *horizontalLayout;
    QSpacerItem *horizontalSpacer;
    QCheckBox *kcfg_autoAwayAskAvailable;
    QGroupBox *groupBox_3;
    QVBoxLayout *verticalLayout;
    QRadioButton *kcfg_useLastAwayMessage;
    QRadioButton *kcfg_useCustomAwayMessage;
    QFormLayout *formLayout;
    QLabel *label;
    KLineEdit *kcfg_autoAwayCustomTitle;
    QLabel *label_4;
    QPlainTextEdit *mAutoAwayCustomMessage;
    QSpacerItem *spacerItem1;

    void setupUi(QWidget *BehaviorConfig_Away)
    {
        if (BehaviorConfig_Away->objectName().isEmpty())
            BehaviorConfig_Away->setObjectName(QString::fromUtf8("BehaviorConfig_Away"));
        BehaviorConfig_Away->resize(455, 513);
        verticalLayout_2 = new QVBoxLayout(BehaviorConfig_Away);
        verticalLayout_2->setObjectName(QString::fromUtf8("verticalLayout_2"));
        groupBox_2 = new QGroupBox(BehaviorConfig_Away);
        groupBox_2->setObjectName(QString::fromUtf8("groupBox_2"));
        vboxLayout = new QVBoxLayout(groupBox_2);
        vboxLayout->setObjectName(QString::fromUtf8("vboxLayout"));
        kcfg_useAutoAway = new QCheckBox(groupBox_2);
        kcfg_useAutoAway->setObjectName(QString::fromUtf8("kcfg_useAutoAway"));

        vboxLayout->addWidget(kcfg_useAutoAway);

        hboxLayout = new QHBoxLayout();
#ifndef UI_Q_OS_MAC
        hboxLayout->setSpacing(6);
#endif
        hboxLayout->setContentsMargins(0, 0, 0, 0);
        hboxLayout->setObjectName(QString::fromUtf8("hboxLayout"));
        label_2 = new QLabel(groupBox_2);
        label_2->setObjectName(QString::fromUtf8("label_2"));
        label_2->setEnabled(false);

        hboxLayout->addWidget(label_2);

        mAutoAwayTimeout = new QSpinBox(groupBox_2);
        mAutoAwayTimeout->setObjectName(QString::fromUtf8("mAutoAwayTimeout"));
        mAutoAwayTimeout->setEnabled(false);

        hboxLayout->addWidget(mAutoAwayTimeout);

        label_3 = new QLabel(groupBox_2);
        label_3->setObjectName(QString::fromUtf8("label_3"));
        label_3->setEnabled(false);

        hboxLayout->addWidget(label_3);

        spacerItem = new QSpacerItem(0, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        hboxLayout->addItem(spacerItem);


        vboxLayout->addLayout(hboxLayout);

        kcfg_autoAwayGoAvailable = new QCheckBox(groupBox_2);
        kcfg_autoAwayGoAvailable->setObjectName(QString::fromUtf8("kcfg_autoAwayGoAvailable"));
        kcfg_autoAwayGoAvailable->setEnabled(false);

        vboxLayout->addWidget(kcfg_autoAwayGoAvailable);

        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        horizontalSpacer = new QSpacerItem(20, 20, QSizePolicy::Fixed, QSizePolicy::Minimum);

        horizontalLayout->addItem(horizontalSpacer);

        kcfg_autoAwayAskAvailable = new QCheckBox(groupBox_2);
        kcfg_autoAwayAskAvailable->setObjectName(QString::fromUtf8("kcfg_autoAwayAskAvailable"));
        kcfg_autoAwayAskAvailable->setEnabled(false);

        horizontalLayout->addWidget(kcfg_autoAwayAskAvailable);


        vboxLayout->addLayout(horizontalLayout);


        verticalLayout_2->addWidget(groupBox_2);

        groupBox_3 = new QGroupBox(BehaviorConfig_Away);
        groupBox_3->setObjectName(QString::fromUtf8("groupBox_3"));
        verticalLayout = new QVBoxLayout(groupBox_3);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        kcfg_useLastAwayMessage = new QRadioButton(groupBox_3);
        kcfg_useLastAwayMessage->setObjectName(QString::fromUtf8("kcfg_useLastAwayMessage"));

        verticalLayout->addWidget(kcfg_useLastAwayMessage);

        kcfg_useCustomAwayMessage = new QRadioButton(groupBox_3);
        kcfg_useCustomAwayMessage->setObjectName(QString::fromUtf8("kcfg_useCustomAwayMessage"));

        verticalLayout->addWidget(kcfg_useCustomAwayMessage);

        formLayout = new QFormLayout();
        formLayout->setObjectName(QString::fromUtf8("formLayout"));
        label = new QLabel(groupBox_3);
        label->setObjectName(QString::fromUtf8("label"));

        formLayout->setWidget(0, QFormLayout::LabelRole, label);

        kcfg_autoAwayCustomTitle = new KLineEdit(groupBox_3);
        kcfg_autoAwayCustomTitle->setObjectName(QString::fromUtf8("kcfg_autoAwayCustomTitle"));
        kcfg_autoAwayCustomTitle->setEnabled(false);

        formLayout->setWidget(0, QFormLayout::FieldRole, kcfg_autoAwayCustomTitle);

        label_4 = new QLabel(groupBox_3);
        label_4->setObjectName(QString::fromUtf8("label_4"));

        formLayout->setWidget(1, QFormLayout::LabelRole, label_4);

        mAutoAwayCustomMessage = new QPlainTextEdit(groupBox_3);
        mAutoAwayCustomMessage->setObjectName(QString::fromUtf8("mAutoAwayCustomMessage"));
        mAutoAwayCustomMessage->setEnabled(false);

        formLayout->setWidget(1, QFormLayout::FieldRole, mAutoAwayCustomMessage);


        verticalLayout->addLayout(formLayout);


        verticalLayout_2->addWidget(groupBox_3);

        spacerItem1 = new QSpacerItem(20, 0, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout_2->addItem(spacerItem1);

        QWidget::setTabOrder(kcfg_useAutoAway, mAutoAwayTimeout);
        QWidget::setTabOrder(mAutoAwayTimeout, kcfg_autoAwayGoAvailable);
        QWidget::setTabOrder(kcfg_autoAwayGoAvailable, kcfg_useLastAwayMessage);
        QWidget::setTabOrder(kcfg_useLastAwayMessage, kcfg_useCustomAwayMessage);
        QWidget::setTabOrder(kcfg_useCustomAwayMessage, kcfg_autoAwayCustomTitle);

        retranslateUi(BehaviorConfig_Away);
        QObject::connect(kcfg_useAutoAway, SIGNAL(toggled(bool)), label_2, SLOT(setEnabled(bool)));
        QObject::connect(kcfg_useAutoAway, SIGNAL(toggled(bool)), mAutoAwayTimeout, SLOT(setEnabled(bool)));
        QObject::connect(kcfg_useAutoAway, SIGNAL(toggled(bool)), label_3, SLOT(setEnabled(bool)));
        QObject::connect(kcfg_useAutoAway, SIGNAL(toggled(bool)), groupBox_3, SLOT(setEnabled(bool)));
        QObject::connect(kcfg_useCustomAwayMessage, SIGNAL(toggled(bool)), kcfg_autoAwayCustomTitle, SLOT(setEnabled(bool)));
        QObject::connect(kcfg_useCustomAwayMessage, SIGNAL(toggled(bool)), mAutoAwayCustomMessage, SLOT(setEnabled(bool)));
        QObject::connect(kcfg_useAutoAway, SIGNAL(toggled(bool)), kcfg_autoAwayGoAvailable, SLOT(setEnabled(bool)));
        QObject::connect(kcfg_autoAwayGoAvailable, SIGNAL(toggled(bool)), kcfg_autoAwayAskAvailable, SLOT(setEnabled(bool)));

        QMetaObject::connectSlotsByName(BehaviorConfig_Away);
    } // setupUi

    void retranslateUi(QWidget *BehaviorConfig_Away)
    {
        groupBox_2->setTitle(tr2i18n("Auto Away", 0));
        kcfg_useAutoAway->setText(tr2i18n("&Use auto away", 0));
        label_2->setText(tr2i18n("Become away after", 0));
        label_3->setText(tr2i18n("minutes of inactivity", 0));
        kcfg_autoAwayGoAvailable->setText(tr2i18n("Become available when detecting activity again", 0));
        kcfg_autoAwayAskAvailable->setText(tr2i18n("Confirm before becoming available", 0));
        groupBox_3->setTitle(tr2i18n("Auto Away Message", 0));
        kcfg_useLastAwayMessage->setText(tr2i18n("Display the &last away message used", 0));
        kcfg_useCustomAwayMessage->setText(tr2i18n("Display the &following away message:", 0));
        label->setText(tr2i18n("Title:", 0));
        label_4->setText(tr2i18n("Message:", 0));
        Q_UNUSED(BehaviorConfig_Away);
    } // retranslateUi

};

namespace Ui {
    class BehaviorConfig_Away: public Ui_BehaviorConfig_Away {};
} // namespace Ui

QT_END_NAMESPACE

#endif // BEHAVIORCONFIG_AWAY_H

