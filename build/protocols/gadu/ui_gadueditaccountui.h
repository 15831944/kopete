#include <kdialog.h>
#include <klocale.h>

/********************************************************************************
** Form generated from reading UI file 'gadueditaccountui.ui'
**
** Created by: Qt User Interface Compiler version 4.8.7
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_GADUEDITACCOUNTUI_H
#define UI_GADUEDITACCOUNTUI_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtGui/QApplication>
#include <QtGui/QButtonGroup>
#include <QtGui/QCheckBox>
#include <QtGui/QComboBox>
#include <QtGui/QGridLayout>
#include <QtGui/QGroupBox>
#include <QtGui/QHBoxLayout>
#include <QtGui/QHeaderView>
#include <QtGui/QLabel>
#include <QtGui/QLineEdit>
#include <QtGui/QPushButton>
#include <QtGui/QSpacerItem>
#include <QtGui/QSpinBox>
#include <QtGui/QTabWidget>
#include <QtGui/QVBoxLayout>
#include <QtGui/QWidget>
#include "klineedit.h"
#include "kopetepasswordwidget.h"
#include "krestrictedline.h"

QT_BEGIN_NAMESPACE

class Ui_GaduAccountEditUI
{
public:
    QVBoxLayout *vboxLayout;
    QLabel *labelStatusMessage;
    QTabWidget *tabWidget4;
    QWidget *tab;
    QVBoxLayout *vboxLayout1;
    QGroupBox *groupBox;
    QVBoxLayout *vboxLayout2;
    QHBoxLayout *hboxLayout;
    QLabel *textLabel1;
    KLineEdit *loginEdit_;
    Kopete::UI::PasswordWidget *passwordWidget_;
    QCheckBox *autoLoginCheck_;
    QGroupBox *groupBox_2;
    QGridLayout *gridLayout;
    QLabel *textLabel6;
    QPushButton *registerNew;
    QSpacerItem *spacerItem;
    QSpacerItem *spacerItem1;
    QSpacerItem *spacerItem2;
    QWidget *tab1;
    QVBoxLayout *vboxLayout3;
    QGroupBox *groupBox_3;
    QVBoxLayout *verticalLayout;
    QCheckBox *cacheServersCheck__;
    QCheckBox *dccCheck_;
    QCheckBox *exportCheck_;
    QCheckBox *importCheck_;
    QCheckBox *ignoreCheck_;
    QHBoxLayout *hboxLayout1;
    QLabel *textLabel1_2;
    QComboBox *useTls_;
    QSpacerItem *spacerItem3;
    QSpacerItem *spacerItem4;
    QWidget *TabPage;
    QVBoxLayout *vboxLayout4;
    QGroupBox *userInformation;
    QGridLayout *gridLayout1;
    QLabel *connectLabel;
    QHBoxLayout *hboxLayout2;
    QVBoxLayout *vboxLayout5;
    QLabel *textLabel1_5_3_2_4;
    QLabel *textLabel1_5_3_2_4_3;
    QVBoxLayout *vboxLayout6;
    QLineEdit *uiMeiden;
    QLineEdit *uiOrgin;
    QLabel *textLabel1_5_3_2_4_2;
    QSpacerItem *spacerItem5;
    QHBoxLayout *hboxLayout3;
    QVBoxLayout *vboxLayout7;
    QLabel *textLabel1_5;
    QLabel *uiSurnamea;
    QLabel *textLabel1_5_3;
    QLabel *textLabel1_5_3_2;
    QLabel *textLabel1_5_3_2_2;
    QLabel *textLabel1_5_3_2_3;
    QVBoxLayout *vboxLayout8;
    QLineEdit *uiName;
    QLineEdit *uiSurname;
    QLineEdit *nickName;
    QComboBox *uiGender;
    QLineEdit *uiYOB;
    QLineEdit *uiCity;
    QWidget *TabPage1;
    QVBoxLayout *vboxLayout9;
    QGroupBox *dcc;
    QVBoxLayout *vboxLayout10;
    QLabel *textLabel1_4;
    QCheckBox *optionOverrideDCC;
    QHBoxLayout *hboxLayout4;
    QSpacerItem *spacerItem6;
    QHBoxLayout *hboxLayout5;
    QLabel *textLabel2;
    QLabel *textLabel2_3;
    KRestrictedLine *ipAddress;
    QSpinBox *dccPort;
    QSpacerItem *spacerItem7;

    void setupUi(QWidget *GaduAccountEditUI)
    {
        if (GaduAccountEditUI->objectName().isEmpty())
            GaduAccountEditUI->setObjectName(QString::fromUtf8("GaduAccountEditUI"));
        GaduAccountEditUI->resize(563, 474);
        QSizePolicy sizePolicy(QSizePolicy::Preferred, QSizePolicy::Preferred);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(GaduAccountEditUI->sizePolicy().hasHeightForWidth());
        GaduAccountEditUI->setSizePolicy(sizePolicy);
        vboxLayout = new QVBoxLayout(GaduAccountEditUI);
#ifndef UI_Q_OS_MAC
        vboxLayout->setSpacing(6);
#endif
#ifndef UI_Q_OS_MAC
        vboxLayout->setContentsMargins(9, 9, 9, 9);
#endif
        vboxLayout->setObjectName(QString::fromUtf8("vboxLayout"));
        labelStatusMessage = new QLabel(GaduAccountEditUI);
        labelStatusMessage->setObjectName(QString::fromUtf8("labelStatusMessage"));
        labelStatusMessage->setAlignment(Qt::AlignCenter);

        vboxLayout->addWidget(labelStatusMessage);

        tabWidget4 = new QTabWidget(GaduAccountEditUI);
        tabWidget4->setObjectName(QString::fromUtf8("tabWidget4"));
        tabWidget4->setEnabled(true);
        tab = new QWidget();
        tab->setObjectName(QString::fromUtf8("tab"));
        vboxLayout1 = new QVBoxLayout(tab);
#ifndef UI_Q_OS_MAC
        vboxLayout1->setSpacing(6);
#endif
#ifndef UI_Q_OS_MAC
        vboxLayout1->setContentsMargins(9, 9, 9, 9);
#endif
        vboxLayout1->setObjectName(QString::fromUtf8("vboxLayout1"));
        groupBox = new QGroupBox(tab);
        groupBox->setObjectName(QString::fromUtf8("groupBox"));
        vboxLayout2 = new QVBoxLayout(groupBox);
#ifndef UI_Q_OS_MAC
        vboxLayout2->setSpacing(6);
#endif
#ifndef UI_Q_OS_MAC
        vboxLayout2->setContentsMargins(9, 9, 9, 9);
#endif
        vboxLayout2->setObjectName(QString::fromUtf8("vboxLayout2"));
        hboxLayout = new QHBoxLayout();
#ifndef UI_Q_OS_MAC
        hboxLayout->setSpacing(6);
#endif
#ifndef UI_Q_OS_MAC
        hboxLayout->setContentsMargins(0, 0, 0, 0);
#endif
        hboxLayout->setObjectName(QString::fromUtf8("hboxLayout"));
        textLabel1 = new QLabel(groupBox);
        textLabel1->setObjectName(QString::fromUtf8("textLabel1"));

        hboxLayout->addWidget(textLabel1);

        loginEdit_ = new KLineEdit(groupBox);
        loginEdit_->setObjectName(QString::fromUtf8("loginEdit_"));
        loginEdit_->setEnabled(true);
        loginEdit_->setMaxLength(16);
        loginEdit_->setModified(true);
        loginEdit_->setDragEnabled(false);

        hboxLayout->addWidget(loginEdit_);


        vboxLayout2->addLayout(hboxLayout);

        passwordWidget_ = new Kopete::UI::PasswordWidget(groupBox);
        passwordWidget_->setObjectName(QString::fromUtf8("passwordWidget_"));
        QSizePolicy sizePolicy1(QSizePolicy::Minimum, QSizePolicy::Minimum);
        sizePolicy1.setHorizontalStretch(0);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(passwordWidget_->sizePolicy().hasHeightForWidth());
        passwordWidget_->setSizePolicy(sizePolicy1);

        vboxLayout2->addWidget(passwordWidget_);

        autoLoginCheck_ = new QCheckBox(groupBox);
        autoLoginCheck_->setObjectName(QString::fromUtf8("autoLoginCheck_"));

        vboxLayout2->addWidget(autoLoginCheck_);


        vboxLayout1->addWidget(groupBox);

        groupBox_2 = new QGroupBox(tab);
        groupBox_2->setObjectName(QString::fromUtf8("groupBox_2"));
        gridLayout = new QGridLayout(groupBox_2);
#ifndef UI_Q_OS_MAC
        gridLayout->setSpacing(6);
#endif
#ifndef UI_Q_OS_MAC
        gridLayout->setContentsMargins(9, 9, 9, 9);
#endif
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        textLabel6 = new QLabel(groupBox_2);
        textLabel6->setObjectName(QString::fromUtf8("textLabel6"));
        QSizePolicy sizePolicy2(QSizePolicy::MinimumExpanding, QSizePolicy::Minimum);
        sizePolicy2.setHorizontalStretch(0);
        sizePolicy2.setVerticalStretch(0);
        sizePolicy2.setHeightForWidth(textLabel6->sizePolicy().hasHeightForWidth());
        textLabel6->setSizePolicy(sizePolicy2);
        textLabel6->setMinimumSize(QSize(0, 0));
        textLabel6->setAlignment(Qt::AlignVCenter);

        gridLayout->addWidget(textLabel6, 0, 0, 1, 3);

        registerNew = new QPushButton(groupBox_2);
        registerNew->setObjectName(QString::fromUtf8("registerNew"));
        registerNew->setEnabled(true);
        QSizePolicy sizePolicy3(QSizePolicy::Minimum, QSizePolicy::Fixed);
        sizePolicy3.setHorizontalStretch(0);
        sizePolicy3.setVerticalStretch(0);
        sizePolicy3.setHeightForWidth(registerNew->sizePolicy().hasHeightForWidth());
        registerNew->setSizePolicy(sizePolicy3);

        gridLayout->addWidget(registerNew, 1, 1, 1, 1);

        spacerItem = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        gridLayout->addItem(spacerItem, 1, 2, 1, 1);

        spacerItem1 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        gridLayout->addItem(spacerItem1, 1, 0, 1, 1);


        vboxLayout1->addWidget(groupBox_2);

        spacerItem2 = new QSpacerItem(20, 80, QSizePolicy::Minimum, QSizePolicy::Expanding);

        vboxLayout1->addItem(spacerItem2);

        tabWidget4->addTab(tab, QString());
        tab1 = new QWidget();
        tab1->setObjectName(QString::fromUtf8("tab1"));
        vboxLayout3 = new QVBoxLayout(tab1);
#ifndef UI_Q_OS_MAC
        vboxLayout3->setSpacing(6);
#endif
#ifndef UI_Q_OS_MAC
        vboxLayout3->setContentsMargins(9, 9, 9, 9);
#endif
        vboxLayout3->setObjectName(QString::fromUtf8("vboxLayout3"));
        groupBox_3 = new QGroupBox(tab1);
        groupBox_3->setObjectName(QString::fromUtf8("groupBox_3"));
        verticalLayout = new QVBoxLayout(groupBox_3);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        cacheServersCheck__ = new QCheckBox(groupBox_3);
        cacheServersCheck__->setObjectName(QString::fromUtf8("cacheServersCheck__"));
        cacheServersCheck__->setEnabled(false);
        cacheServersCheck__->setChecked(true);

        verticalLayout->addWidget(cacheServersCheck__);

        dccCheck_ = new QCheckBox(groupBox_3);
        dccCheck_->setObjectName(QString::fromUtf8("dccCheck_"));
        dccCheck_->setEnabled(true);
        dccCheck_->setChecked(true);

        verticalLayout->addWidget(dccCheck_);

        exportCheck_ = new QCheckBox(groupBox_3);
        exportCheck_->setObjectName(QString::fromUtf8("exportCheck_"));
        exportCheck_->setChecked(true);

        verticalLayout->addWidget(exportCheck_);

        importCheck_ = new QCheckBox(groupBox_3);
        importCheck_->setObjectName(QString::fromUtf8("importCheck_"));
        importCheck_->setChecked(true);

        verticalLayout->addWidget(importCheck_);

        ignoreCheck_ = new QCheckBox(groupBox_3);
        ignoreCheck_->setObjectName(QString::fromUtf8("ignoreCheck_"));
        ignoreCheck_->setEnabled(true);
        ignoreCheck_->setChecked(false);

        verticalLayout->addWidget(ignoreCheck_);

        hboxLayout1 = new QHBoxLayout();
#ifndef UI_Q_OS_MAC
        hboxLayout1->setSpacing(6);
#endif
        hboxLayout1->setContentsMargins(0, 0, 0, 0);
        hboxLayout1->setObjectName(QString::fromUtf8("hboxLayout1"));
        textLabel1_2 = new QLabel(groupBox_3);
        textLabel1_2->setObjectName(QString::fromUtf8("textLabel1_2"));

        hboxLayout1->addWidget(textLabel1_2);

        useTls_ = new QComboBox(groupBox_3);
        useTls_->setObjectName(QString::fromUtf8("useTls_"));
        useTls_->setAutoCompletion(false);
        useTls_->setDuplicatesEnabled(false);

        hboxLayout1->addWidget(useTls_);

        spacerItem3 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        hboxLayout1->addItem(spacerItem3);


        verticalLayout->addLayout(hboxLayout1);


        vboxLayout3->addWidget(groupBox_3);

        spacerItem4 = new QSpacerItem(20, 160, QSizePolicy::Minimum, QSizePolicy::Expanding);

        vboxLayout3->addItem(spacerItem4);

        tabWidget4->addTab(tab1, QString());
        TabPage = new QWidget();
        TabPage->setObjectName(QString::fromUtf8("TabPage"));
        vboxLayout4 = new QVBoxLayout(TabPage);
#ifndef UI_Q_OS_MAC
        vboxLayout4->setSpacing(6);
#endif
#ifndef UI_Q_OS_MAC
        vboxLayout4->setContentsMargins(9, 9, 9, 9);
#endif
        vboxLayout4->setObjectName(QString::fromUtf8("vboxLayout4"));
        userInformation = new QGroupBox(TabPage);
        userInformation->setObjectName(QString::fromUtf8("userInformation"));
        gridLayout1 = new QGridLayout(userInformation);
#ifndef UI_Q_OS_MAC
        gridLayout1->setSpacing(6);
#endif
#ifndef UI_Q_OS_MAC
        gridLayout1->setContentsMargins(9, 9, 9, 9);
#endif
        gridLayout1->setObjectName(QString::fromUtf8("gridLayout1"));
        connectLabel = new QLabel(userInformation);
        connectLabel->setObjectName(QString::fromUtf8("connectLabel"));
        connectLabel->setEnabled(true);

        gridLayout1->addWidget(connectLabel, 4, 0, 1, 1);

        hboxLayout2 = new QHBoxLayout();
#ifndef UI_Q_OS_MAC
        hboxLayout2->setSpacing(6);
#endif
        hboxLayout2->setContentsMargins(0, 0, 0, 0);
        hboxLayout2->setObjectName(QString::fromUtf8("hboxLayout2"));
        vboxLayout5 = new QVBoxLayout();
#ifndef UI_Q_OS_MAC
        vboxLayout5->setSpacing(6);
#endif
#ifndef UI_Q_OS_MAC
        vboxLayout5->setContentsMargins(0, 0, 0, 0);
#endif
        vboxLayout5->setObjectName(QString::fromUtf8("vboxLayout5"));
        textLabel1_5_3_2_4 = new QLabel(userInformation);
        textLabel1_5_3_2_4->setObjectName(QString::fromUtf8("textLabel1_5_3_2_4"));

        vboxLayout5->addWidget(textLabel1_5_3_2_4);

        textLabel1_5_3_2_4_3 = new QLabel(userInformation);
        textLabel1_5_3_2_4_3->setObjectName(QString::fromUtf8("textLabel1_5_3_2_4_3"));

        vboxLayout5->addWidget(textLabel1_5_3_2_4_3);


        hboxLayout2->addLayout(vboxLayout5);

        vboxLayout6 = new QVBoxLayout();
#ifndef UI_Q_OS_MAC
        vboxLayout6->setSpacing(6);
#endif
        vboxLayout6->setContentsMargins(0, 0, 0, 0);
        vboxLayout6->setObjectName(QString::fromUtf8("vboxLayout6"));
        uiMeiden = new QLineEdit(userInformation);
        uiMeiden->setObjectName(QString::fromUtf8("uiMeiden"));
        uiMeiden->setEnabled(false);

        vboxLayout6->addWidget(uiMeiden);

        uiOrgin = new QLineEdit(userInformation);
        uiOrgin->setObjectName(QString::fromUtf8("uiOrgin"));
        uiOrgin->setEnabled(false);

        vboxLayout6->addWidget(uiOrgin);


        hboxLayout2->addLayout(vboxLayout6);


        gridLayout1->addLayout(hboxLayout2, 3, 0, 1, 1);

        textLabel1_5_3_2_4_2 = new QLabel(userInformation);
        textLabel1_5_3_2_4_2->setObjectName(QString::fromUtf8("textLabel1_5_3_2_4_2"));

        gridLayout1->addWidget(textLabel1_5_3_2_4_2, 2, 0, 1, 1);

        spacerItem5 = new QSpacerItem(20, 30, QSizePolicy::Minimum, QSizePolicy::Expanding);

        gridLayout1->addItem(spacerItem5, 1, 0, 1, 1);

        hboxLayout3 = new QHBoxLayout();
#ifndef UI_Q_OS_MAC
        hboxLayout3->setSpacing(6);
#endif
        hboxLayout3->setContentsMargins(0, 0, 0, 0);
        hboxLayout3->setObjectName(QString::fromUtf8("hboxLayout3"));
        vboxLayout7 = new QVBoxLayout();
#ifndef UI_Q_OS_MAC
        vboxLayout7->setSpacing(6);
#endif
#ifndef UI_Q_OS_MAC
        vboxLayout7->setContentsMargins(0, 0, 0, 0);
#endif
        vboxLayout7->setObjectName(QString::fromUtf8("vboxLayout7"));
        textLabel1_5 = new QLabel(userInformation);
        textLabel1_5->setObjectName(QString::fromUtf8("textLabel1_5"));

        vboxLayout7->addWidget(textLabel1_5);

        uiSurnamea = new QLabel(userInformation);
        uiSurnamea->setObjectName(QString::fromUtf8("uiSurnamea"));

        vboxLayout7->addWidget(uiSurnamea);

        textLabel1_5_3 = new QLabel(userInformation);
        textLabel1_5_3->setObjectName(QString::fromUtf8("textLabel1_5_3"));

        vboxLayout7->addWidget(textLabel1_5_3);

        textLabel1_5_3_2 = new QLabel(userInformation);
        textLabel1_5_3_2->setObjectName(QString::fromUtf8("textLabel1_5_3_2"));

        vboxLayout7->addWidget(textLabel1_5_3_2);

        textLabel1_5_3_2_2 = new QLabel(userInformation);
        textLabel1_5_3_2_2->setObjectName(QString::fromUtf8("textLabel1_5_3_2_2"));

        vboxLayout7->addWidget(textLabel1_5_3_2_2);

        textLabel1_5_3_2_3 = new QLabel(userInformation);
        textLabel1_5_3_2_3->setObjectName(QString::fromUtf8("textLabel1_5_3_2_3"));

        vboxLayout7->addWidget(textLabel1_5_3_2_3);


        hboxLayout3->addLayout(vboxLayout7);

        vboxLayout8 = new QVBoxLayout();
#ifndef UI_Q_OS_MAC
        vboxLayout8->setSpacing(6);
#endif
        vboxLayout8->setContentsMargins(0, 0, 0, 0);
        vboxLayout8->setObjectName(QString::fromUtf8("vboxLayout8"));
        uiName = new QLineEdit(userInformation);
        uiName->setObjectName(QString::fromUtf8("uiName"));
        uiName->setEnabled(false);

        vboxLayout8->addWidget(uiName);

        uiSurname = new QLineEdit(userInformation);
        uiSurname->setObjectName(QString::fromUtf8("uiSurname"));
        uiSurname->setEnabled(false);

        vboxLayout8->addWidget(uiSurname);

        nickName = new QLineEdit(userInformation);
        nickName->setObjectName(QString::fromUtf8("nickName"));
        nickName->setEnabled(true);

        vboxLayout8->addWidget(nickName);

        uiGender = new QComboBox(userInformation);
        uiGender->setObjectName(QString::fromUtf8("uiGender"));
        uiGender->setEnabled(false);

        vboxLayout8->addWidget(uiGender);

        uiYOB = new QLineEdit(userInformation);
        uiYOB->setObjectName(QString::fromUtf8("uiYOB"));
        uiYOB->setEnabled(false);

        vboxLayout8->addWidget(uiYOB);

        uiCity = new QLineEdit(userInformation);
        uiCity->setObjectName(QString::fromUtf8("uiCity"));
        uiCity->setEnabled(false);

        vboxLayout8->addWidget(uiCity);


        hboxLayout3->addLayout(vboxLayout8);


        gridLayout1->addLayout(hboxLayout3, 0, 0, 1, 1);


        vboxLayout4->addWidget(userInformation);

        tabWidget4->addTab(TabPage, QString());
        TabPage1 = new QWidget();
        TabPage1->setObjectName(QString::fromUtf8("TabPage1"));
        vboxLayout9 = new QVBoxLayout(TabPage1);
#ifndef UI_Q_OS_MAC
        vboxLayout9->setSpacing(6);
#endif
#ifndef UI_Q_OS_MAC
        vboxLayout9->setContentsMargins(9, 9, 9, 9);
#endif
        vboxLayout9->setObjectName(QString::fromUtf8("vboxLayout9"));
        dcc = new QGroupBox(TabPage1);
        dcc->setObjectName(QString::fromUtf8("dcc"));
        vboxLayout10 = new QVBoxLayout(dcc);
#ifndef UI_Q_OS_MAC
        vboxLayout10->setSpacing(6);
#endif
#ifndef UI_Q_OS_MAC
        vboxLayout10->setContentsMargins(9, 9, 9, 9);
#endif
        vboxLayout10->setObjectName(QString::fromUtf8("vboxLayout10"));
        textLabel1_4 = new QLabel(dcc);
        textLabel1_4->setObjectName(QString::fromUtf8("textLabel1_4"));

        vboxLayout10->addWidget(textLabel1_4);

        optionOverrideDCC = new QCheckBox(dcc);
        optionOverrideDCC->setObjectName(QString::fromUtf8("optionOverrideDCC"));

        vboxLayout10->addWidget(optionOverrideDCC);

        hboxLayout4 = new QHBoxLayout();
#ifndef UI_Q_OS_MAC
        hboxLayout4->setSpacing(6);
#endif
        hboxLayout4->setContentsMargins(0, 0, 0, 0);
        hboxLayout4->setObjectName(QString::fromUtf8("hboxLayout4"));
        spacerItem6 = new QSpacerItem(16, 20, QSizePolicy::Fixed, QSizePolicy::Minimum);

        hboxLayout4->addItem(spacerItem6);

        hboxLayout5 = new QHBoxLayout();
        hboxLayout5->setSpacing(3);
#ifndef UI_Q_OS_MAC
        hboxLayout5->setContentsMargins(0, 0, 0, 0);
#endif
        hboxLayout5->setObjectName(QString::fromUtf8("hboxLayout5"));
        textLabel2 = new QLabel(dcc);
        textLabel2->setObjectName(QString::fromUtf8("textLabel2"));
        textLabel2->setEnabled(false);

        hboxLayout5->addWidget(textLabel2);

        textLabel2_3 = new QLabel(dcc);
        textLabel2_3->setObjectName(QString::fromUtf8("textLabel2_3"));
        textLabel2_3->setEnabled(false);

        hboxLayout5->addWidget(textLabel2_3);


        hboxLayout4->addLayout(hboxLayout5);

        ipAddress = new KRestrictedLine(dcc);
        ipAddress->setObjectName(QString::fromUtf8("ipAddress"));
        ipAddress->setEnabled(false);
        QSizePolicy sizePolicy4(QSizePolicy::Expanding, QSizePolicy::Fixed);
        sizePolicy4.setHorizontalStretch(0);
        sizePolicy4.setVerticalStretch(0);
        sizePolicy4.setHeightForWidth(ipAddress->sizePolicy().hasHeightForWidth());
        ipAddress->setSizePolicy(sizePolicy4);

        hboxLayout4->addWidget(ipAddress);

        dccPort = new QSpinBox(dcc);
        dccPort->setObjectName(QString::fromUtf8("dccPort"));
        dccPort->setEnabled(false);
        dccPort->setMaximum(65535);
        dccPort->setValue(8010);

        hboxLayout4->addWidget(dccPort);


        vboxLayout10->addLayout(hboxLayout4);


        vboxLayout9->addWidget(dcc);

        spacerItem7 = new QSpacerItem(20, 180, QSizePolicy::Minimum, QSizePolicy::Expanding);

        vboxLayout9->addItem(spacerItem7);

        tabWidget4->addTab(TabPage1, QString());

        vboxLayout->addWidget(tabWidget4);

#ifndef UI_QT_NO_SHORTCUT
        textLabel1->setBuddy(loginEdit_);
        textLabel1_2->setBuddy(useTls_);
        textLabel2->setBuddy(ipAddress);
        textLabel2_3->setBuddy(dccPort);
#endif // QT_NO_SHORTCUT
        QWidget::setTabOrder(tabWidget4, loginEdit_);
        QWidget::setTabOrder(loginEdit_, autoLoginCheck_);
        QWidget::setTabOrder(autoLoginCheck_, registerNew);
        QWidget::setTabOrder(registerNew, cacheServersCheck__);
        QWidget::setTabOrder(cacheServersCheck__, dccCheck_);
        QWidget::setTabOrder(dccCheck_, useTls_);
        QWidget::setTabOrder(useTls_, uiName);
        QWidget::setTabOrder(uiName, uiSurname);
        QWidget::setTabOrder(uiSurname, nickName);
        QWidget::setTabOrder(nickName, uiGender);
        QWidget::setTabOrder(uiGender, uiYOB);
        QWidget::setTabOrder(uiYOB, uiCity);
        QWidget::setTabOrder(uiCity, uiMeiden);
        QWidget::setTabOrder(uiMeiden, uiOrgin);
        QWidget::setTabOrder(uiOrgin, optionOverrideDCC);
        QWidget::setTabOrder(optionOverrideDCC, ipAddress);
        QWidget::setTabOrder(ipAddress, dccPort);

        retranslateUi(GaduAccountEditUI);
        QObject::connect(optionOverrideDCC, SIGNAL(toggled(bool)), textLabel2, SLOT(setEnabled(bool)));
        QObject::connect(optionOverrideDCC, SIGNAL(toggled(bool)), textLabel2_3, SLOT(setEnabled(bool)));
        QObject::connect(optionOverrideDCC, SIGNAL(toggled(bool)), ipAddress, SLOT(setEnabled(bool)));
        QObject::connect(optionOverrideDCC, SIGNAL(toggled(bool)), dccPort, SLOT(setEnabled(bool)));

        tabWidget4->setCurrentIndex(0);


        QMetaObject::connectSlotsByName(GaduAccountEditUI);
    } // setupUi

    void retranslateUi(QWidget *GaduAccountEditUI)
    {
        GaduAccountEditUI->setWindowTitle(tr2i18n("Account Preferences - Gadu-Gadu", 0));
        labelStatusMessage->setText(QString());
        groupBox->setTitle(tr2i18n("Account Information", 0));
#ifndef UI_QT_NO_TOOLTIP
        textLabel1->setToolTip(tr2i18n("The user ID of your Gadu-Gadu account.", 0));
#endif // QT_NO_TOOLTIP
#ifndef UI_QT_NO_WHATSTHIS
        textLabel1->setWhatsThis(tr2i18n("The user ID of your Gadu-Gadu account.  This should be in the form of a number (no decimals, no spaces).", 0));
#endif // QT_NO_WHATSTHIS
        textLabel1->setText(tr2i18n("Gadu-Gadu &UIN:", 0));
#ifndef UI_QT_NO_TOOLTIP
        loginEdit_->setToolTip(tr2i18n("The user ID of your Gadu-Gadu account.", 0));
#endif // QT_NO_TOOLTIP
#ifndef UI_QT_NO_WHATSTHIS
        loginEdit_->setWhatsThis(tr2i18n("The user ID of your Gadu-Gadu account.  This should be in the form of a number (no decimals, no spaces).", 0));
#endif // QT_NO_WHATSTHIS
#ifndef UI_QT_NO_TOOLTIP
        autoLoginCheck_->setToolTip(QString());
#endif // QT_NO_TOOLTIP
#ifndef UI_QT_NO_WHATSTHIS
        autoLoginCheck_->setWhatsThis(tr2i18n("Check to disable automatic connection. When checked, you may connect to this account manually via the icon in the bottom of the main Kopete window.", 0));
#endif // QT_NO_WHATSTHIS
        autoLoginCheck_->setText(tr2i18n("E&xclude from connect all", 0));
        groupBox_2->setTitle(tr2i18n("Registration", 0));
        textLabel6->setText(tr2i18n("To connect to the Gadu-Gadu network, you will need a Gadu-Gadu account.<br><br>\n"
"If you do not currently have an account, please click the button to create one.", 0));
#ifndef UI_QT_NO_TOOLTIP
        registerNew->setToolTip(tr2i18n("Register a new account on this network.", 0));
#endif // QT_NO_TOOLTIP
#ifndef UI_QT_NO_WHATSTHIS
        registerNew->setWhatsThis(tr2i18n("Register a new account on this network.", 0));
#endif // QT_NO_WHATSTHIS
        registerNew->setText(tr2i18n("Re&gister New Account", 0));
        tabWidget4->setTabText(tabWidget4->indexOf(tab), tr2i18n("B&asic Setup", 0));
        groupBox_3->setTitle(tr2i18n("Connection Preferences", 0));
#ifndef UI_QT_NO_TOOLTIP
        cacheServersCheck__->setToolTip(tr2i18n("Cache connection information for each server connected to in case the main load-balancing server fails.", 0));
#endif // QT_NO_TOOLTIP
#ifndef UI_QT_NO_WHATSTHIS
        cacheServersCheck__->setWhatsThis(tr2i18n("This option is used whenever the primary Gadu-Gadu load-balancing server fails.  If this is checked, Kopete will try to connect to the actual servers directly using cached information about them.  This prevents connection errors when the main load-balancing server does not answer. In practice it only helps very rarely.", 0));
#endif // QT_NO_WHATSTHIS
        cacheServersCheck__->setText(tr2i18n("C&ache server information", 0));
        dccCheck_->setText(tr2i18n("&Use direct connections (DCC)", 0));
#ifndef UI_QT_NO_TOOLTIP
        exportCheck_->setToolTip(tr2i18n("Keep your local and server side contact list in sync. Any change in local list will result in exporting your list to server.", 0));
#endif // QT_NO_TOOLTIP
        exportCheck_->setText(tr2i18n("&Export contact list on change", 0));
#ifndef UI_QT_NO_TOOLTIP
        importCheck_->setToolTip(tr2i18n("On each connection Kopete will import your list ", 0));
#endif // QT_NO_TOOLTIP
        importCheck_->setText(tr2i18n("I&mport contact list on startup", 0));
        ignoreCheck_->setText(tr2i18n("&Ignore people not on your contact list", 0));
        ignoreCheck_->setShortcut(QString());
#ifndef UI_QT_NO_TOOLTIP
        textLabel1_2->setToolTip(tr2i18n("Whether or not you want to enable SSL encrypted communication with the server.", 0));
#endif // QT_NO_TOOLTIP
#ifndef UI_QT_NO_WHATSTHIS
        textLabel1_2->setWhatsThis(tr2i18n("Whether or not you want to enable SSL encrypted communication with the server.  Note that this is not end-to-end encryption, but rather encrypted communication with the server.", 0));
#endif // QT_NO_WHATSTHIS
        textLabel1_2->setText(tr2i18n("Use protocol encr&yption (SSL):", 0));
        useTls_->clear();
        useTls_->insertItems(0, QStringList()
         << tr2i18n("If Available", 0)
         << tr2i18n("Required", 0)
         << tr2i18n("Do Not Use", 0)
        );
#ifndef UI_QT_NO_TOOLTIP
        useTls_->setToolTip(tr2i18n("Whether or not you want to enable SSL encrypted communication with the server.", 0));
#endif // QT_NO_TOOLTIP
#ifndef UI_QT_NO_WHATSTHIS
        useTls_->setWhatsThis(tr2i18n("Whether or not you want to enable SSL encrypted communication with the server.  Note that this is not end-to-end encryption, but rather encrypted communication with the server.", 0));
#endif // QT_NO_WHATSTHIS
        tabWidget4->setTabText(tabWidget4->indexOf(tab1), tr2i18n("A&ccount Preferences", 0));
        userInformation->setTitle(tr2i18n("User Information", 0));
        connectLabel->setText(tr2i18n("<p align=\"center\">You must be connected to change your Personal Information.</p>", 0));
        textLabel1_5_3_2_4->setText(tr2i18n("Maiden name:", 0));
        textLabel1_5_3_2_4_3->setText(tr2i18n("City of origin:", 0));
        textLabel1_5_3_2_4_2->setText(tr2i18n("The values below will be used in the search, but will not appear in the results.", 0));
        textLabel1_5->setText(tr2i18n("Forename:", 0));
        uiSurnamea->setText(tr2i18n("Surname:", 0));
        textLabel1_5_3->setText(tr2i18n("Your nickname:", 0));
        textLabel1_5_3_2->setText(tr2i18n("Gender:", 0));
        textLabel1_5_3_2_2->setText(tr2i18n("Year of birth:", 0));
        textLabel1_5_3_2_3->setText(tr2i18n("City:", 0));
        uiGender->clear();
        uiGender->insertItems(0, QStringList()
         << QString()
         << tr2i18n("Female", 0)
         << tr2i18n("Male", 0)
        );
        tabWidget4->setTabText(tabWidget4->indexOf(TabPage), tr2i18n("U&ser Information", 0));
        dcc->setTitle(tr2i18n("Global DCC Options", 0));
        textLabel1_4->setText(tr2i18n("<qt><p align=\"center\"><font color=\"#ff0000\">These options affect <b>all</b> Gadu-Gadu accounts.</font></p></qt>", 0));
        optionOverrideDCC->setText(tr2i18n("&Override default configuration", 0));
        textLabel2->setText(tr2i18n("Local &IP address /", 0));
        textLabel2_3->setText(tr2i18n("po&rt:", 0));
        ipAddress->setText(tr2i18n("0.0.0.0", 0));
        tabWidget4->setTabText(tabWidget4->indexOf(TabPage1), tr2i18n("&File Transfer", 0));
    } // retranslateUi

};

namespace Ui {
    class GaduAccountEditUI: public Ui_GaduAccountEditUI {};
} // namespace Ui

QT_END_NAMESPACE

#endif // GADUEDITACCOUNTUI_H

