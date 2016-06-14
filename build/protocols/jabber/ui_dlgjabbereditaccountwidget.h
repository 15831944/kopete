#include <kdialog.h>
#include <klocale.h>

/********************************************************************************
** Form generated from reading UI file 'dlgjabbereditaccountwidget.ui'
**
** Created by: Qt User Interface Compiler version 4.8.7
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_DLGJABBEREDITACCOUNTWIDGET_H
#define UI_DLGJABBEREDITACCOUNTWIDGET_H

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
#include "kopetepasswordwidget.h"
#include "kpushbutton.h"

QT_BEGIN_NAMESPACE

class Ui_DlgJabberEditAccountWidget
{
public:
    QVBoxLayout *vboxLayout;
    QTabWidget *tabWidget10;
    QWidget *tab;
    QVBoxLayout *vboxLayout1;
    QGroupBox *groupBox;
    QVBoxLayout *vboxLayout2;
    QHBoxLayout *hboxLayout;
    QLabel *TextLabel1_3;
    QLineEdit *mID;
    Kopete::UI::PasswordWidget *mPass;
    QCheckBox *cbAutoConnect;
    QGroupBox *registrationGroupBox;
    QGridLayout *gridLayout;
    QSpacerItem *spacerItem;
    QSpacerItem *spacerItem1;
    QPushButton *btnRegister;
    QLabel *lblRegistration;
    QGroupBox *changePasswordGroupBox;
    QGridLayout *gridLayout1;
    QSpacerItem *spacerItem2;
    QSpacerItem *spacerItem3;
    QPushButton *btnChangePassword;
    QLabel *tlChangePwSuccess;
    QSpacerItem *spacerItem4;
    QWidget *TabPage;
    QVBoxLayout *vboxLayout3;
    QGroupBox *groupBox_4;
    QVBoxLayout *vboxLayout4;
    QCheckBox *cbUseSSL;
    QCheckBox *cbAllowPlainTextPassword;
    QCheckBox *cbCustomServer;
    QHBoxLayout *hboxLayout1;
    QSpacerItem *spacerItem5;
    QLabel *labelServer;
    QLineEdit *mServer;
    QLabel *labelPort;
    QSpinBox *mPort;
    QGroupBox *groupBox_5;
    QVBoxLayout *verticalLayout_5;
    QHBoxLayout *hboxLayout2;
    QLabel *TextLabel3_3;
    QLineEdit *mResource;
    QSpacerItem *spacerItem6;
    QLabel *TextLabel3_3_2;
    QSpinBox *mPriority;
    QHBoxLayout *horizontalLayout_4;
    QCheckBox *cbAdjustPriority;
    QSpacerItem *horizontalSpacer;
    QSpinBox *mAwayPriority;
    QCheckBox *mergeMessages;
    QSpacerItem *spacerItem7;
    QWidget *TabPage1;
    QVBoxLayout *vboxLayout5;
    QGroupBox *groupBox_6;
    QVBoxLayout *vboxLayout6;
    QGridLayout *gridLayout2;
    QLineEdit *leProxyJID;
    QLabel *textLabel5;
    QHBoxLayout *hboxLayout3;
    QLineEdit *leLocalIP;
    QLabel *textLabel4;
    QSpinBox *sbLocalPort;
    QLabel *textLabel2;
    QLabel *textLabel3;
    QSpacerItem *spacerItem8;
    QWidget *TabPage2;
    QVBoxLayout *verticalLayout_4;
    QVBoxLayout *verticalLayout_3;
    QGroupBox *groupBox_2;
    QVBoxLayout *verticalLayout;
    QCheckBox *autoDetectIPBox;
    QHBoxLayout *horizontalLayout;
    QLabel *label;
    QSpinBox *firstPortEdit;
    QGroupBox *groupBox_3;
    QVBoxLayout *verticalLayout_2;
    QHBoxLayout *horizontalLayout_2;
    QLabel *label_2;
    QComboBox *audioInputsCombo;
    QHBoxLayout *horizontalLayout_3;
    QLabel *label_3;
    QComboBox *audioOutputsCombo;
    QSpacerItem *verticalSpacer_2;
    QWidget *TabPage3;
    QVBoxLayout *_20;
    QGroupBox *groupBox_17;
    QVBoxLayout *verticalLayout_9;
    QCheckBox *Libjingle;
    QSpacerItem *verticalSpacer;
    QWidget *TabPage4;
    QVBoxLayout *vboxLayout7;
    QGroupBox *groupBox_7;
    QHBoxLayout *hboxLayout4;
    QCheckBox *cbHideSystemInfo;
    QSpacerItem *spacerItem9;
    QGroupBox *groupBox_8;
    QVBoxLayout *vboxLayout8;
    QCheckBox *cbSendEvents;
    QHBoxLayout *hboxLayout5;
    QSpacerItem *spacerItem10;
    QVBoxLayout *vboxLayout9;
    QCheckBox *cbSendDeliveredEvent;
    QCheckBox *cbSendDisplayedEvent;
    QCheckBox *cbSendComposingEvent;
    QCheckBox *cbSendGoneEvent;
    KPushButton *privacyListsButton;
    QCheckBox *oldEncrypted;
    QSpacerItem *spacerItem11;

    void setupUi(QWidget *DlgJabberEditAccountWidget)
    {
        if (DlgJabberEditAccountWidget->objectName().isEmpty())
            DlgJabberEditAccountWidget->setObjectName(QString::fromUtf8("DlgJabberEditAccountWidget"));
        DlgJabberEditAccountWidget->resize(553, 581);
        vboxLayout = new QVBoxLayout(DlgJabberEditAccountWidget);
#ifndef UI_Q_OS_MAC
        vboxLayout->setSpacing(6);
#endif
        vboxLayout->setContentsMargins(0, 0, 0, 0);
        vboxLayout->setObjectName(QString::fromUtf8("vboxLayout"));
        tabWidget10 = new QTabWidget(DlgJabberEditAccountWidget);
        tabWidget10->setObjectName(QString::fromUtf8("tabWidget10"));
        tabWidget10->setTabShape(QTabWidget::Rounded);
        tab = new QWidget();
        tab->setObjectName(QString::fromUtf8("tab"));
        vboxLayout1 = new QVBoxLayout(tab);
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
        TextLabel1_3 = new QLabel(groupBox);
        TextLabel1_3->setObjectName(QString::fromUtf8("TextLabel1_3"));

        hboxLayout->addWidget(TextLabel1_3);

        mID = new QLineEdit(groupBox);
        mID->setObjectName(QString::fromUtf8("mID"));

        hboxLayout->addWidget(mID);


        vboxLayout2->addLayout(hboxLayout);

        mPass = new Kopete::UI::PasswordWidget(groupBox);
        mPass->setObjectName(QString::fromUtf8("mPass"));
        QSizePolicy sizePolicy(QSizePolicy::Minimum, QSizePolicy::Minimum);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(mPass->sizePolicy().hasHeightForWidth());
        mPass->setSizePolicy(sizePolicy);

        vboxLayout2->addWidget(mPass);

        cbAutoConnect = new QCheckBox(groupBox);
        cbAutoConnect->setObjectName(QString::fromUtf8("cbAutoConnect"));

        vboxLayout2->addWidget(cbAutoConnect);


        vboxLayout1->addWidget(groupBox);

        registrationGroupBox = new QGroupBox(tab);
        registrationGroupBox->setObjectName(QString::fromUtf8("registrationGroupBox"));
        gridLayout = new QGridLayout(registrationGroupBox);
#ifndef UI_Q_OS_MAC
        gridLayout->setSpacing(6);
#endif
#ifndef UI_Q_OS_MAC
        gridLayout->setContentsMargins(9, 9, 9, 9);
#endif
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        spacerItem = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        gridLayout->addItem(spacerItem, 1, 0, 1, 1);

        spacerItem1 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        gridLayout->addItem(spacerItem1, 1, 2, 1, 1);

        btnRegister = new QPushButton(registrationGroupBox);
        btnRegister->setObjectName(QString::fromUtf8("btnRegister"));

        gridLayout->addWidget(btnRegister, 1, 1, 1, 1);

        lblRegistration = new QLabel(registrationGroupBox);
        lblRegistration->setObjectName(QString::fromUtf8("lblRegistration"));
        QSizePolicy sizePolicy1(QSizePolicy::MinimumExpanding, QSizePolicy::Minimum);
        sizePolicy1.setHorizontalStretch(0);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(lblRegistration->sizePolicy().hasHeightForWidth());
        lblRegistration->setSizePolicy(sizePolicy1);
        lblRegistration->setMinimumSize(QSize(0, 0));
        lblRegistration->setAlignment(Qt::AlignVCenter);
        lblRegistration->setWordWrap(true);

        gridLayout->addWidget(lblRegistration, 0, 0, 1, 2);


        vboxLayout1->addWidget(registrationGroupBox);

        changePasswordGroupBox = new QGroupBox(tab);
        changePasswordGroupBox->setObjectName(QString::fromUtf8("changePasswordGroupBox"));
        gridLayout1 = new QGridLayout(changePasswordGroupBox);
#ifndef UI_Q_OS_MAC
        gridLayout1->setSpacing(6);
#endif
#ifndef UI_Q_OS_MAC
        gridLayout1->setContentsMargins(9, 9, 9, 9);
#endif
        gridLayout1->setObjectName(QString::fromUtf8("gridLayout1"));
        spacerItem2 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        gridLayout1->addItem(spacerItem2, 1, 2, 1, 1);

        spacerItem3 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        gridLayout1->addItem(spacerItem3, 1, 0, 1, 1);

        btnChangePassword = new QPushButton(changePasswordGroupBox);
        btnChangePassword->setObjectName(QString::fromUtf8("btnChangePassword"));

        gridLayout1->addWidget(btnChangePassword, 1, 1, 1, 1);

        tlChangePwSuccess = new QLabel(changePasswordGroupBox);
        tlChangePwSuccess->setObjectName(QString::fromUtf8("tlChangePwSuccess"));
        tlChangePwSuccess->setEnabled(true);
        sizePolicy1.setHeightForWidth(tlChangePwSuccess->sizePolicy().hasHeightForWidth());
        tlChangePwSuccess->setSizePolicy(sizePolicy1);
        tlChangePwSuccess->setAlignment(Qt::AlignVCenter);
        tlChangePwSuccess->setWordWrap(true);

        gridLayout1->addWidget(tlChangePwSuccess, 0, 0, 1, 2);


        vboxLayout1->addWidget(changePasswordGroupBox);

        spacerItem4 = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::MinimumExpanding);

        vboxLayout1->addItem(spacerItem4);

        tabWidget10->addTab(tab, QString());
        TabPage = new QWidget();
        TabPage->setObjectName(QString::fromUtf8("TabPage"));
        vboxLayout3 = new QVBoxLayout(TabPage);
#ifndef UI_Q_OS_MAC
        vboxLayout3->setSpacing(6);
#endif
#ifndef UI_Q_OS_MAC
        vboxLayout3->setContentsMargins(9, 9, 9, 9);
#endif
        vboxLayout3->setObjectName(QString::fromUtf8("vboxLayout3"));
        groupBox_4 = new QGroupBox(TabPage);
        groupBox_4->setObjectName(QString::fromUtf8("groupBox_4"));
        vboxLayout4 = new QVBoxLayout(groupBox_4);
#ifndef UI_Q_OS_MAC
        vboxLayout4->setSpacing(6);
#endif
#ifndef UI_Q_OS_MAC
        vboxLayout4->setContentsMargins(9, 9, 9, 9);
#endif
        vboxLayout4->setObjectName(QString::fromUtf8("vboxLayout4"));
        cbUseSSL = new QCheckBox(groupBox_4);
        cbUseSSL->setObjectName(QString::fromUtf8("cbUseSSL"));

        vboxLayout4->addWidget(cbUseSSL);

        cbAllowPlainTextPassword = new QCheckBox(groupBox_4);
        cbAllowPlainTextPassword->setObjectName(QString::fromUtf8("cbAllowPlainTextPassword"));
        cbAllowPlainTextPassword->setChecked(true);

        vboxLayout4->addWidget(cbAllowPlainTextPassword);

        cbCustomServer = new QCheckBox(groupBox_4);
        cbCustomServer->setObjectName(QString::fromUtf8("cbCustomServer"));
        cbCustomServer->setChecked(false);

        vboxLayout4->addWidget(cbCustomServer);

        hboxLayout1 = new QHBoxLayout();
#ifndef UI_Q_OS_MAC
        hboxLayout1->setSpacing(6);
#endif
        hboxLayout1->setContentsMargins(0, 0, 0, 0);
        hboxLayout1->setObjectName(QString::fromUtf8("hboxLayout1"));
        spacerItem5 = new QSpacerItem(16, 20, QSizePolicy::Fixed, QSizePolicy::Minimum);

        hboxLayout1->addItem(spacerItem5);

        labelServer = new QLabel(groupBox_4);
        labelServer->setObjectName(QString::fromUtf8("labelServer"));
        labelServer->setEnabled(false);
        QSizePolicy sizePolicy2(QSizePolicy::Preferred, QSizePolicy::Fixed);
        sizePolicy2.setHorizontalStretch(0);
        sizePolicy2.setVerticalStretch(0);
        sizePolicy2.setHeightForWidth(labelServer->sizePolicy().hasHeightForWidth());
        labelServer->setSizePolicy(sizePolicy2);

        hboxLayout1->addWidget(labelServer);

        mServer = new QLineEdit(groupBox_4);
        mServer->setObjectName(QString::fromUtf8("mServer"));
        mServer->setEnabled(false);

        hboxLayout1->addWidget(mServer);

        labelPort = new QLabel(groupBox_4);
        labelPort->setObjectName(QString::fromUtf8("labelPort"));
        labelPort->setEnabled(false);
        sizePolicy2.setHeightForWidth(labelPort->sizePolicy().hasHeightForWidth());
        labelPort->setSizePolicy(sizePolicy2);

        hboxLayout1->addWidget(labelPort);

        mPort = new QSpinBox(groupBox_4);
        mPort->setObjectName(QString::fromUtf8("mPort"));
        mPort->setEnabled(false);
        QSizePolicy sizePolicy3(QSizePolicy::Fixed, QSizePolicy::Fixed);
        sizePolicy3.setHorizontalStretch(0);
        sizePolicy3.setVerticalStretch(0);
        sizePolicy3.setHeightForWidth(mPort->sizePolicy().hasHeightForWidth());
        mPort->setSizePolicy(sizePolicy3);
        mPort->setButtonSymbols(QAbstractSpinBox::UpDownArrows);
        mPort->setMinimum(1);
        mPort->setMaximum(65535);
        mPort->setValue(5222);

        hboxLayout1->addWidget(mPort);


        vboxLayout4->addLayout(hboxLayout1);


        vboxLayout3->addWidget(groupBox_4);

        groupBox_5 = new QGroupBox(TabPage);
        groupBox_5->setObjectName(QString::fromUtf8("groupBox_5"));
        verticalLayout_5 = new QVBoxLayout(groupBox_5);
        verticalLayout_5->setObjectName(QString::fromUtf8("verticalLayout_5"));
        hboxLayout2 = new QHBoxLayout();
#ifndef UI_Q_OS_MAC
        hboxLayout2->setSpacing(6);
#endif
        hboxLayout2->setContentsMargins(9, 9, 9, 9);
        hboxLayout2->setObjectName(QString::fromUtf8("hboxLayout2"));
        TextLabel3_3 = new QLabel(groupBox_5);
        TextLabel3_3->setObjectName(QString::fromUtf8("TextLabel3_3"));

        hboxLayout2->addWidget(TextLabel3_3);

        mResource = new QLineEdit(groupBox_5);
        mResource->setObjectName(QString::fromUtf8("mResource"));
        sizePolicy3.setHeightForWidth(mResource->sizePolicy().hasHeightForWidth());
        mResource->setSizePolicy(sizePolicy3);
        mResource->setMaximumSize(QSize(100, 32767));

        hboxLayout2->addWidget(mResource);

        spacerItem6 = new QSpacerItem(31, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        hboxLayout2->addItem(spacerItem6);

        TextLabel3_3_2 = new QLabel(groupBox_5);
        TextLabel3_3_2->setObjectName(QString::fromUtf8("TextLabel3_3_2"));
        QSizePolicy sizePolicy4(QSizePolicy::Preferred, QSizePolicy::Preferred);
        sizePolicy4.setHorizontalStretch(0);
        sizePolicy4.setVerticalStretch(0);
        sizePolicy4.setHeightForWidth(TextLabel3_3_2->sizePolicy().hasHeightForWidth());
        TextLabel3_3_2->setSizePolicy(sizePolicy4);
        TextLabel3_3_2->setAlignment(Qt::AlignVCenter);

        hboxLayout2->addWidget(TextLabel3_3_2);

        mPriority = new QSpinBox(groupBox_5);
        mPriority->setObjectName(QString::fromUtf8("mPriority"));
        sizePolicy3.setHeightForWidth(mPriority->sizePolicy().hasHeightForWidth());
        mPriority->setSizePolicy(sizePolicy3);
        mPriority->setMinimumSize(QSize(100, 0));
        mPriority->setMaximumSize(QSize(100, 32767));
        mPriority->setMinimum(-127);
        mPriority->setMaximum(127);
        mPriority->setValue(5);

        hboxLayout2->addWidget(mPriority);


        verticalLayout_5->addLayout(hboxLayout2);

        horizontalLayout_4 = new QHBoxLayout();
#ifndef UI_Q_OS_MAC
        horizontalLayout_4->setSpacing(6);
#endif
#ifndef UI_Q_OS_MAC
        horizontalLayout_4->setContentsMargins(9, 9, 9, 9);
#endif
        horizontalLayout_4->setObjectName(QString::fromUtf8("horizontalLayout_4"));
        cbAdjustPriority = new QCheckBox(groupBox_5);
        cbAdjustPriority->setObjectName(QString::fromUtf8("cbAdjustPriority"));

        horizontalLayout_4->addWidget(cbAdjustPriority);

        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_4->addItem(horizontalSpacer);

        mAwayPriority = new QSpinBox(groupBox_5);
        mAwayPriority->setObjectName(QString::fromUtf8("mAwayPriority"));
        sizePolicy3.setHeightForWidth(mAwayPriority->sizePolicy().hasHeightForWidth());
        mAwayPriority->setSizePolicy(sizePolicy3);
        mAwayPriority->setMinimumSize(QSize(100, 0));
        mAwayPriority->setMinimum(-127);
        mAwayPriority->setMaximum(127);

        horizontalLayout_4->addWidget(mAwayPriority);


        verticalLayout_5->addLayout(horizontalLayout_4);


        vboxLayout3->addWidget(groupBox_5);

        mergeMessages = new QCheckBox(TabPage);
        mergeMessages->setObjectName(QString::fromUtf8("mergeMessages"));
        mergeMessages->setChecked(true);

        vboxLayout3->addWidget(mergeMessages);

        spacerItem7 = new QSpacerItem(20, 200, QSizePolicy::Minimum, QSizePolicy::Expanding);

        vboxLayout3->addItem(spacerItem7);

        tabWidget10->addTab(TabPage, QString());
        TabPage1 = new QWidget();
        TabPage1->setObjectName(QString::fromUtf8("TabPage1"));
        vboxLayout5 = new QVBoxLayout(TabPage1);
#ifndef UI_Q_OS_MAC
        vboxLayout5->setSpacing(6);
#endif
#ifndef UI_Q_OS_MAC
        vboxLayout5->setContentsMargins(9, 9, 9, 9);
#endif
        vboxLayout5->setObjectName(QString::fromUtf8("vboxLayout5"));
        groupBox_6 = new QGroupBox(TabPage1);
        groupBox_6->setObjectName(QString::fromUtf8("groupBox_6"));
        vboxLayout6 = new QVBoxLayout(groupBox_6);
        vboxLayout6->setObjectName(QString::fromUtf8("vboxLayout6"));
        gridLayout2 = new QGridLayout();
#ifndef UI_Q_OS_MAC
        gridLayout2->setSpacing(6);
#endif
#ifndef UI_Q_OS_MAC
        gridLayout2->setContentsMargins(0, 0, 0, 0);
#endif
        gridLayout2->setObjectName(QString::fromUtf8("gridLayout2"));
        leProxyJID = new QLineEdit(groupBox_6);
        leProxyJID->setObjectName(QString::fromUtf8("leProxyJID"));

        gridLayout2->addWidget(leProxyJID, 1, 1, 1, 1);

        textLabel5 = new QLabel(groupBox_6);
        textLabel5->setObjectName(QString::fromUtf8("textLabel5"));

        gridLayout2->addWidget(textLabel5, 1, 0, 1, 1);

        hboxLayout3 = new QHBoxLayout();
#ifndef UI_Q_OS_MAC
        hboxLayout3->setSpacing(6);
#endif
        hboxLayout3->setContentsMargins(0, 0, 0, 0);
        hboxLayout3->setObjectName(QString::fromUtf8("hboxLayout3"));
        leLocalIP = new QLineEdit(groupBox_6);
        leLocalIP->setObjectName(QString::fromUtf8("leLocalIP"));

        hboxLayout3->addWidget(leLocalIP);

        textLabel4 = new QLabel(groupBox_6);
        textLabel4->setObjectName(QString::fromUtf8("textLabel4"));

        hboxLayout3->addWidget(textLabel4);

        sbLocalPort = new QSpinBox(groupBox_6);
        sbLocalPort->setObjectName(QString::fromUtf8("sbLocalPort"));
        sbLocalPort->setMaximum(65535);
        sbLocalPort->setValue(8010);

        hboxLayout3->addWidget(sbLocalPort);


        gridLayout2->addLayout(hboxLayout3, 0, 1, 1, 1);

        textLabel2 = new QLabel(groupBox_6);
        textLabel2->setObjectName(QString::fromUtf8("textLabel2"));

        gridLayout2->addWidget(textLabel2, 0, 0, 1, 1);


        vboxLayout6->addLayout(gridLayout2);

        textLabel3 = new QLabel(groupBox_6);
        textLabel3->setObjectName(QString::fromUtf8("textLabel3"));
        textLabel3->setAlignment(Qt::AlignVCenter);
        textLabel3->setWordWrap(true);

        vboxLayout6->addWidget(textLabel3);


        vboxLayout5->addWidget(groupBox_6);

        spacerItem8 = new QSpacerItem(20, 241, QSizePolicy::Minimum, QSizePolicy::Expanding);

        vboxLayout5->addItem(spacerItem8);

        tabWidget10->addTab(TabPage1, QString());
        TabPage2 = new QWidget();
        TabPage2->setObjectName(QString::fromUtf8("TabPage2"));
        verticalLayout_4 = new QVBoxLayout(TabPage2);
        verticalLayout_4->setObjectName(QString::fromUtf8("verticalLayout_4"));
        verticalLayout_3 = new QVBoxLayout();
        verticalLayout_3->setObjectName(QString::fromUtf8("verticalLayout_3"));
        groupBox_2 = new QGroupBox(TabPage2);
        groupBox_2->setObjectName(QString::fromUtf8("groupBox_2"));
        verticalLayout = new QVBoxLayout(groupBox_2);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        autoDetectIPBox = new QCheckBox(groupBox_2);
        autoDetectIPBox->setObjectName(QString::fromUtf8("autoDetectIPBox"));

        verticalLayout->addWidget(autoDetectIPBox);

        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        label = new QLabel(groupBox_2);
        label->setObjectName(QString::fromUtf8("label"));

        horizontalLayout->addWidget(label);

        firstPortEdit = new QSpinBox(groupBox_2);
        firstPortEdit->setObjectName(QString::fromUtf8("firstPortEdit"));
        QSizePolicy sizePolicy5(QSizePolicy::Expanding, QSizePolicy::Fixed);
        sizePolicy5.setHorizontalStretch(0);
        sizePolicy5.setVerticalStretch(0);
        sizePolicy5.setHeightForWidth(firstPortEdit->sizePolicy().hasHeightForWidth());
        firstPortEdit->setSizePolicy(sizePolicy5);
        firstPortEdit->setButtonSymbols(QAbstractSpinBox::PlusMinus);
        firstPortEdit->setMinimum(1);
        firstPortEdit->setMaximum(65535);
        firstPortEdit->setValue(9000);

        horizontalLayout->addWidget(firstPortEdit);


        verticalLayout->addLayout(horizontalLayout);


        verticalLayout_3->addWidget(groupBox_2);

        groupBox_3 = new QGroupBox(TabPage2);
        groupBox_3->setObjectName(QString::fromUtf8("groupBox_3"));
        verticalLayout_2 = new QVBoxLayout(groupBox_3);
        verticalLayout_2->setObjectName(QString::fromUtf8("verticalLayout_2"));
        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setObjectName(QString::fromUtf8("horizontalLayout_2"));
        label_2 = new QLabel(groupBox_3);
        label_2->setObjectName(QString::fromUtf8("label_2"));

        horizontalLayout_2->addWidget(label_2);

        audioInputsCombo = new QComboBox(groupBox_3);
        audioInputsCombo->setObjectName(QString::fromUtf8("audioInputsCombo"));

        horizontalLayout_2->addWidget(audioInputsCombo);


        verticalLayout_2->addLayout(horizontalLayout_2);

        horizontalLayout_3 = new QHBoxLayout();
        horizontalLayout_3->setObjectName(QString::fromUtf8("horizontalLayout_3"));
        label_3 = new QLabel(groupBox_3);
        label_3->setObjectName(QString::fromUtf8("label_3"));

        horizontalLayout_3->addWidget(label_3);

        audioOutputsCombo = new QComboBox(groupBox_3);
        audioOutputsCombo->setObjectName(QString::fromUtf8("audioOutputsCombo"));

        horizontalLayout_3->addWidget(audioOutputsCombo);


        verticalLayout_2->addLayout(horizontalLayout_3);

        verticalSpacer_2 = new QSpacerItem(20, 321, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout_2->addItem(verticalSpacer_2);


        verticalLayout_3->addWidget(groupBox_3);


        verticalLayout_4->addLayout(verticalLayout_3);

        tabWidget10->addTab(TabPage2, QString());
        TabPage3 = new QWidget();
        TabPage3->setObjectName(QString::fromUtf8("TabPage3"));
        _20 = new QVBoxLayout(TabPage3);
        _20->setObjectName(QString::fromUtf8("_20"));
        groupBox_17 = new QGroupBox(TabPage3);
        groupBox_17->setObjectName(QString::fromUtf8("groupBox_17"));
        verticalLayout_9 = new QVBoxLayout(groupBox_17);
        verticalLayout_9->setObjectName(QString::fromUtf8("verticalLayout_9"));
        Libjingle = new QCheckBox(groupBox_17);
        Libjingle->setObjectName(QString::fromUtf8("Libjingle"));
        Libjingle->setChecked(true);

        verticalLayout_9->addWidget(Libjingle);

        verticalSpacer = new QSpacerItem(QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout_9->addItem(verticalSpacer);


        _20->addWidget(groupBox_17);

        tabWidget10->addTab(TabPage3, QString());
        TabPage4 = new QWidget();
        TabPage4->setObjectName(QString::fromUtf8("TabPage4"));
        vboxLayout7 = new QVBoxLayout(TabPage4);
#ifndef UI_Q_OS_MAC
        vboxLayout7->setSpacing(6);
#endif
#ifndef UI_Q_OS_MAC
        vboxLayout7->setContentsMargins(9, 9, 9, 9);
#endif
        vboxLayout7->setObjectName(QString::fromUtf8("vboxLayout7"));
        groupBox_7 = new QGroupBox(TabPage4);
        groupBox_7->setObjectName(QString::fromUtf8("groupBox_7"));
        hboxLayout4 = new QHBoxLayout(groupBox_7);
#ifndef UI_Q_OS_MAC
        hboxLayout4->setSpacing(6);
#endif
#ifndef UI_Q_OS_MAC
        hboxLayout4->setContentsMargins(9, 9, 9, 9);
#endif
        hboxLayout4->setObjectName(QString::fromUtf8("hboxLayout4"));
        cbHideSystemInfo = new QCheckBox(groupBox_7);
        cbHideSystemInfo->setObjectName(QString::fromUtf8("cbHideSystemInfo"));

        hboxLayout4->addWidget(cbHideSystemInfo);

        spacerItem9 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        hboxLayout4->addItem(spacerItem9);


        vboxLayout7->addWidget(groupBox_7);

        groupBox_8 = new QGroupBox(TabPage4);
        groupBox_8->setObjectName(QString::fromUtf8("groupBox_8"));
        vboxLayout8 = new QVBoxLayout(groupBox_8);
#ifndef UI_Q_OS_MAC
        vboxLayout8->setSpacing(6);
#endif
#ifndef UI_Q_OS_MAC
        vboxLayout8->setContentsMargins(9, 9, 9, 9);
#endif
        vboxLayout8->setObjectName(QString::fromUtf8("vboxLayout8"));
        cbSendEvents = new QCheckBox(groupBox_8);
        cbSendEvents->setObjectName(QString::fromUtf8("cbSendEvents"));
        cbSendEvents->setEnabled(true);
        cbSendEvents->setChecked(true);

        vboxLayout8->addWidget(cbSendEvents);

        hboxLayout5 = new QHBoxLayout();
#ifndef UI_Q_OS_MAC
        hboxLayout5->setSpacing(6);
#endif
        hboxLayout5->setContentsMargins(0, 0, 0, 0);
        hboxLayout5->setObjectName(QString::fromUtf8("hboxLayout5"));
        spacerItem10 = new QSpacerItem(30, 20, QSizePolicy::Fixed, QSizePolicy::Minimum);

        hboxLayout5->addItem(spacerItem10);

        vboxLayout9 = new QVBoxLayout();
#ifndef UI_Q_OS_MAC
        vboxLayout9->setSpacing(6);
#endif
#ifndef UI_Q_OS_MAC
        vboxLayout9->setContentsMargins(0, 0, 0, 0);
#endif
        vboxLayout9->setObjectName(QString::fromUtf8("vboxLayout9"));
        cbSendDeliveredEvent = new QCheckBox(groupBox_8);
        cbSendDeliveredEvent->setObjectName(QString::fromUtf8("cbSendDeliveredEvent"));
        cbSendDeliveredEvent->setEnabled(true);
        cbSendDeliveredEvent->setChecked(true);

        vboxLayout9->addWidget(cbSendDeliveredEvent);

        cbSendDisplayedEvent = new QCheckBox(groupBox_8);
        cbSendDisplayedEvent->setObjectName(QString::fromUtf8("cbSendDisplayedEvent"));
        cbSendDisplayedEvent->setEnabled(true);
        cbSendDisplayedEvent->setChecked(true);

        vboxLayout9->addWidget(cbSendDisplayedEvent);

        cbSendComposingEvent = new QCheckBox(groupBox_8);
        cbSendComposingEvent->setObjectName(QString::fromUtf8("cbSendComposingEvent"));
        cbSendComposingEvent->setEnabled(true);
        cbSendComposingEvent->setChecked(true);

        vboxLayout9->addWidget(cbSendComposingEvent);

        cbSendGoneEvent = new QCheckBox(groupBox_8);
        cbSendGoneEvent->setObjectName(QString::fromUtf8("cbSendGoneEvent"));
        cbSendGoneEvent->setChecked(true);

        vboxLayout9->addWidget(cbSendGoneEvent);


        hboxLayout5->addLayout(vboxLayout9);


        vboxLayout8->addLayout(hboxLayout5);


        vboxLayout7->addWidget(groupBox_8);

        privacyListsButton = new KPushButton(TabPage4);
        privacyListsButton->setObjectName(QString::fromUtf8("privacyListsButton"));

        vboxLayout7->addWidget(privacyListsButton);

        oldEncrypted = new QCheckBox(TabPage4);
        oldEncrypted->setObjectName(QString::fromUtf8("oldEncrypted"));

        vboxLayout7->addWidget(oldEncrypted);

        spacerItem11 = new QSpacerItem(21, 110, QSizePolicy::Minimum, QSizePolicy::Expanding);

        vboxLayout7->addItem(spacerItem11);

        tabWidget10->addTab(TabPage4, QString());

        vboxLayout->addWidget(tabWidget10);

#ifndef UI_QT_NO_SHORTCUT
        TextLabel1_3->setBuddy(mID);
        labelServer->setBuddy(mServer);
        labelPort->setBuddy(mPort);
        TextLabel3_3->setBuddy(mResource);
        TextLabel3_3_2->setBuddy(mResource);
        textLabel5->setBuddy(leProxyJID);
        textLabel4->setBuddy(sbLocalPort);
        textLabel2->setBuddy(leLocalIP);
#endif // QT_NO_SHORTCUT
        QWidget::setTabOrder(tabWidget10, mID);
        QWidget::setTabOrder(mID, mPass);
        QWidget::setTabOrder(mPass, cbAutoConnect);
        QWidget::setTabOrder(cbAutoConnect, btnRegister);
        QWidget::setTabOrder(btnRegister, btnChangePassword);
        QWidget::setTabOrder(btnChangePassword, cbUseSSL);
        QWidget::setTabOrder(cbUseSSL, cbAllowPlainTextPassword);
        QWidget::setTabOrder(cbAllowPlainTextPassword, cbCustomServer);
        QWidget::setTabOrder(cbCustomServer, mServer);
        QWidget::setTabOrder(mServer, mPort);
        QWidget::setTabOrder(mPort, mResource);
        QWidget::setTabOrder(mResource, mPriority);
        QWidget::setTabOrder(mPriority, leLocalIP);
        QWidget::setTabOrder(leLocalIP, sbLocalPort);
        QWidget::setTabOrder(sbLocalPort, leProxyJID);
        QWidget::setTabOrder(leProxyJID, cbHideSystemInfo);
        QWidget::setTabOrder(cbHideSystemInfo, cbSendEvents);
        QWidget::setTabOrder(cbSendEvents, cbSendDeliveredEvent);
        QWidget::setTabOrder(cbSendDeliveredEvent, cbSendDisplayedEvent);
        QWidget::setTabOrder(cbSendDisplayedEvent, cbSendComposingEvent);

        retranslateUi(DlgJabberEditAccountWidget);
        QObject::connect(cbCustomServer, SIGNAL(toggled(bool)), labelServer, SLOT(setEnabled(bool)));
        QObject::connect(cbCustomServer, SIGNAL(toggled(bool)), labelPort, SLOT(setEnabled(bool)));
        QObject::connect(cbCustomServer, SIGNAL(toggled(bool)), mPort, SLOT(setEnabled(bool)));
        QObject::connect(cbCustomServer, SIGNAL(toggled(bool)), mServer, SLOT(setEnabled(bool)));
        QObject::connect(cbSendEvents, SIGNAL(toggled(bool)), cbSendDeliveredEvent, SLOT(setEnabled(bool)));
        QObject::connect(cbSendEvents, SIGNAL(toggled(bool)), cbSendDisplayedEvent, SLOT(setEnabled(bool)));
        QObject::connect(cbSendEvents, SIGNAL(toggled(bool)), cbSendComposingEvent, SLOT(setEnabled(bool)));
        QObject::connect(cbSendEvents, SIGNAL(toggled(bool)), cbSendGoneEvent, SLOT(setEnabled(bool)));

        tabWidget10->setCurrentIndex(0);


        QMetaObject::connectSlotsByName(DlgJabberEditAccountWidget);
    } // setupUi

    void retranslateUi(QWidget *DlgJabberEditAccountWidget)
    {
        DlgJabberEditAccountWidget->setWindowTitle(tr2i18n("Account Preferences - Jabber", 0));
#ifndef UI_QT_NO_TOOLTIP
        DlgJabberEditAccountWidget->setToolTip(QString());
#endif // QT_NO_TOOLTIP
#ifndef UI_QT_NO_WHATSTHIS
        DlgJabberEditAccountWidget->setWhatsThis(QString());
#endif // QT_NO_WHATSTHIS
        groupBox->setTitle(tr2i18n("Account Information", 0));
#ifndef UI_QT_NO_TOOLTIP
        TextLabel1_3->setToolTip(tr2i18n("The Jabber ID for the account you would like to use.", 0));
#endif // QT_NO_TOOLTIP
#ifndef UI_QT_NO_WHATSTHIS
        TextLabel1_3->setWhatsThis(tr2i18n("The Jabber ID for the account you would like to use.  Note that this must include the username and the domain (like an E-mail address), as there are many Jabber servers.", 0));
#endif // QT_NO_WHATSTHIS
        TextLabel1_3->setText(tr2i18n("&Jabber ID:", 0));
#ifndef UI_QT_NO_TOOLTIP
        mID->setToolTip(tr2i18n("The Jabber ID for the account you would like to use.", 0));
#endif // QT_NO_TOOLTIP
#ifndef UI_QT_NO_WHATSTHIS
        mID->setWhatsThis(tr2i18n("The Jabber ID for the account you would like to use.  Note that this must include the username and the domain (for example, joe@jabber.org), as there are many Jabber servers.", 0));
#endif // QT_NO_WHATSTHIS
        mID->setText(QString());
#ifndef UI_QT_NO_WHATSTHIS
        cbAutoConnect->setWhatsThis(tr2i18n("Check to disable automatic connection.  If checked, you can connect manually to this account, using the icon at the bottom of the main Kopete window", 0));
#endif // QT_NO_WHATSTHIS
        cbAutoConnect->setText(tr2i18n("E&xclude from connect all", 0));
        registrationGroupBox->setTitle(tr2i18n("Registration", 0));
#ifndef UI_QT_NO_TOOLTIP
        btnRegister->setToolTip(tr2i18n("Register a new account on this network.", 0));
#endif // QT_NO_TOOLTIP
#ifndef UI_QT_NO_WHATSTHIS
        btnRegister->setWhatsThis(tr2i18n("Register a new account on this network.", 0));
#endif // QT_NO_WHATSTHIS
        btnRegister->setText(tr2i18n("Re&gister New Account", 0));
        lblRegistration->setText(tr2i18n("To connect to the Jabber network, you will need an account on a Jabber server.  If you do not yet have an account, please click the button to create one.", 0));
        changePasswordGroupBox->setTitle(tr2i18n("Change Password", 0));
        btnChangePassword->setText(tr2i18n("Change &Your Password...", 0));
        tlChangePwSuccess->setText(tr2i18n("If you have an existing Jabber account and would like to change its password, you can use this button to enter a new password.", 0));
        tabWidget10->setTabText(tabWidget10->indexOf(tab), tr2i18n("&Basic Setup", 0));
        groupBox_4->setTitle(tr2i18n("Connection Preferences", 0));
#ifndef UI_QT_NO_TOOLTIP
        cbUseSSL->setToolTip(tr2i18n("Check this box to enable legacy SSL encrypted communication with the server. This is needed only for old servers.", 0));
#endif // QT_NO_TOOLTIP
#ifndef UI_QT_NO_WHATSTHIS
        cbUseSSL->setWhatsThis(tr2i18n("Check this box to enable legacy SSL encrypted communication with the server. This is needed only for old servers.", 0));
#endif // QT_NO_WHATSTHIS
        cbUseSSL->setText(tr2i18n("Use legacy SSL encr&yption", 0));
        cbAllowPlainTextPassword->setText(tr2i18n("Allow plain-te&xt password authentication", 0));
        cbCustomServer->setText(tr2i18n("&Override default server information", 0));
#ifndef UI_QT_NO_TOOLTIP
        labelServer->setToolTip(tr2i18n("The IP address or hostname of the server you would like to connect to.", 0));
#endif // QT_NO_TOOLTIP
#ifndef UI_QT_NO_WHATSTHIS
        labelServer->setWhatsThis(tr2i18n("The IP address or hostname of the server you would like to connect to (for example jabber.org).", 0));
#endif // QT_NO_WHATSTHIS
        labelServer->setText(tr2i18n("Ser&ver:", 0));
#ifndef UI_QT_NO_TOOLTIP
        mServer->setToolTip(tr2i18n("The IP address or hostname of the server you would like to connect to.", 0));
#endif // QT_NO_TOOLTIP
#ifndef UI_QT_NO_WHATSTHIS
        mServer->setWhatsThis(tr2i18n("The IP address or hostname of the server you would like to connect to (for example jabber.org).", 0));
#endif // QT_NO_WHATSTHIS
        mServer->setText(QString());
#ifndef UI_QT_NO_TOOLTIP
        labelPort->setToolTip(tr2i18n("The port on the server that you would like to connect to.", 0));
#endif // QT_NO_TOOLTIP
#ifndef UI_QT_NO_WHATSTHIS
        labelPort->setWhatsThis(tr2i18n("The port on the server that you would like to connect to (default is 5222).", 0));
#endif // QT_NO_WHATSTHIS
        labelPort->setText(tr2i18n("Po&rt:", 0));
#ifndef UI_QT_NO_TOOLTIP
        mPort->setToolTip(tr2i18n("The port on the server that you would like to connect to.", 0));
#endif // QT_NO_TOOLTIP
#ifndef UI_QT_NO_WHATSTHIS
        mPort->setWhatsThis(tr2i18n("The port on the server that you would like to connect to (default is 5222).", 0));
#endif // QT_NO_WHATSTHIS
        groupBox_5->setTitle(tr2i18n("Location Settings", 0));
#ifndef UI_QT_NO_TOOLTIP
        TextLabel3_3->setToolTip(tr2i18n("The resource name you would like to use on the Jabber network.", 0));
#endif // QT_NO_TOOLTIP
#ifndef UI_QT_NO_WHATSTHIS
        TextLabel3_3->setWhatsThis(tr2i18n("The resource name you would like to use on the Jabber network.  Jabber allows you to sign on with the same account from multiple locations with different resource names, so you may wish to enter 'Home' or 'Work' here, for example.", 0));
#endif // QT_NO_WHATSTHIS
        TextLabel3_3->setText(tr2i18n("R&esource:", 0));
#ifndef UI_QT_NO_TOOLTIP
        mResource->setToolTip(tr2i18n("The resource name you would like to use on the Jabber network.", 0));
#endif // QT_NO_TOOLTIP
#ifndef UI_QT_NO_WHATSTHIS
        mResource->setWhatsThis(tr2i18n("The resource name you would like to use on the Jabber network.  Jabber allows you to sign on with the same account from multiple locations with different resource names, so you may wish to enter 'Home' or 'Work' here, for example.", 0));
#endif // QT_NO_WHATSTHIS
        mResource->setText(tr2i18n("Kopete", 0));
#ifndef UI_QT_NO_TOOLTIP
        TextLabel3_3_2->setToolTip(tr2i18n("The resource name you would like to use on the Jabber network.", 0));
#endif // QT_NO_TOOLTIP
#ifndef UI_QT_NO_WHATSTHIS
        TextLabel3_3_2->setWhatsThis(tr2i18n("The resource name you would like to use on the Jabber network.  Jabber allows you to sign on with the same account from multiple locations with different resource names, so you may wish to enter 'Home' or 'Work' here, for example.", 0));
#endif // QT_NO_WHATSTHIS
        TextLabel3_3_2->setText(tr2i18n("P&riority:", 0));
#ifndef UI_QT_NO_TOOLTIP
        mPriority->setToolTip(tr2i18n("<qt>Each resource can have different <b>priority </b> levels. The messages will be sent to the resource which has the highest priority level.\n"
"\n"
"If two resources have the same priority, the messages will be sent to the one most recently connected.</qt>", 0));
#endif // QT_NO_TOOLTIP
#ifndef UI_QT_NO_WHATSTHIS
        mPriority->setWhatsThis(tr2i18n("<qt>Each resource can have different <b>priority </b> levels. The messages will be sent to the resource which has the highest priority level.\n"
"\n"
"If two resources have the same priority, the messages will be sent to the one most recently connected.</qt>", 0));
#endif // QT_NO_WHATSTHIS
        cbAdjustPriority->setText(tr2i18n("When absent, adjust priority to:", 0));
        mergeMessages->setText(tr2i18n("Merge all messages from all resources to one window/tab", 0));
        tabWidget10->setTabText(tabWidget10->indexOf(TabPage), tr2i18n("Co&nnection", 0));
        groupBox_6->setTitle(tr2i18n("File Transfer Settings", 0));
        textLabel5->setText(tr2i18n("Pro&xy JID:", 0));
        textLabel4->setText(tr2i18n("Por&t:", 0));
        textLabel2->setText(tr2i18n("Public &IP address:", 0));
        textLabel3->setText(tr2i18n("<i><ul><li>The information in the \"public IP address\" and \"port\" fields applies to all Jabber accounts.</li>\n"
"<li>You can leave the \"public IP address\" empty if your computer is directly connected to the internet.</li>\n"
"<li>A hostname is also valid.</li>\n"
"<li>Changes to these fields will only take effect the next time you start Kopete.</li>\n"
"<li>The \"Proxy JID\" can be configured per account.</li></ul></i>", 0));
        tabWidget10->setTabText(tabWidget10->indexOf(TabPage1), tr2i18n("Fi&le Transfer", 0));
        groupBox_2->setTitle(tr2i18n("Network", 0));
        autoDetectIPBox->setText(tr2i18n("Auto-detect external IP address", 0));
        label->setText(tr2i18n("First port to use:", 0));
#ifndef UI_QT_NO_TOOLTIP
        firstPortEdit->setToolTip(tr2i18n("Set the first incoming port to use for Jingle sessions.\n"
"One media type uses 2 ports and each new Jingle session will use the next 2 available ports.", 0));
#endif // QT_NO_TOOLTIP
        groupBox_3->setTitle(tr2i18n("Media", 0));
        label_2->setText(tr2i18n("Microphone to use:", 0));
        label_3->setText(tr2i18n("Audio output:", 0));
        tabWidget10->setTabText(tabWidget10->indexOf(TabPage2), tr2i18n("&Jingle", 0));
        groupBox_17->setTitle(tr2i18n("Libjingle settings", 0));
#ifndef UI_QT_NO_TOOLTIP
        Libjingle->setToolTip(tr2i18n("This enable libjingle voice call", 0));
#endif // QT_NO_TOOLTIP
        Libjingle->setText(tr2i18n("Enable libjingle support", 0));
        tabWidget10->setTabText(tabWidget10->indexOf(TabPage3), tr2i18n("&Libjingle", 0));
        groupBox_7->setTitle(tr2i18n("General Privacy", 0));
#ifndef UI_QT_NO_WHATSTHIS
        cbHideSystemInfo->setWhatsThis(tr2i18n("By default, Kopete gives the other users some info about your system and the client. Checking this box will hide that information.", 0));
#endif // QT_NO_WHATSTHIS
        cbHideSystemInfo->setText(tr2i18n("&Hide system and client info", 0));
        groupBox_8->setTitle(tr2i18n("Notifications", 0));
#ifndef UI_QT_NO_WHATSTHIS
        cbSendEvents->setWhatsThis(tr2i18n("Check this box if you always want to send notifications to your contacts.", 0));
#endif // QT_NO_WHATSTHIS
        cbSendEvents->setText(tr2i18n("Always send not&ifications", 0));
#ifndef UI_QT_NO_WHATSTHIS
        cbSendDeliveredEvent->setWhatsThis(tr2i18n("<qt>Check this box to send the <b>Delivered notification</b> to your contacts : when a message is delivered to Kopete, Kopete can notify your contact that it has received the message.</qt>", 0));
#endif // QT_NO_WHATSTHIS
        cbSendDeliveredEvent->setText(tr2i18n("Alwa&ys send delivered notifications", 0));
#ifndef UI_QT_NO_WHATSTHIS
        cbSendDisplayedEvent->setWhatsThis(tr2i18n("<qt>Check this box to send the <b>Displayed notification</b> to your contacts : when a message is displayed in Kopete, Kopete can notify your contact that it has displayed the message.</qt>", 0));
#endif // QT_NO_WHATSTHIS
        cbSendDisplayedEvent->setText(tr2i18n("Al&ways send displayed notifications", 0));
#ifndef UI_QT_NO_WHATSTHIS
        cbSendComposingEvent->setWhatsThis(tr2i18n("<qt>Check this box to send the <b>Typing notification</b> to your contacts : when you are composing a message, you might want your contact to know that you are typing so that he/she knows you are answering.</qt>", 0));
#endif // QT_NO_WHATSTHIS
        cbSendComposingEvent->setText(tr2i18n("Always send &typing notifications", 0));
        cbSendGoneEvent->setText(tr2i18n("Always send &gone notifications (closing the window)", 0));
        privacyListsButton->setText(tr2i18n("Privacy Lists", 0));
        oldEncrypted->setText(tr2i18n("When recipient does not support OpenPGP XEP-0027 wrap PGP block to message body", 0));
        tabWidget10->setTabText(tabWidget10->indexOf(TabPage4), tr2i18n("Pri&vacy", 0));
    } // retranslateUi

};

namespace Ui {
    class DlgJabberEditAccountWidget: public Ui_DlgJabberEditAccountWidget {};
} // namespace Ui

QT_END_NAMESPACE

#endif // DLGJABBEREDITACCOUNTWIDGET_H

