#include <kdialog.h>
#include <klocale.h>

/********************************************************************************
** Form generated from reading UI file 'icqeditaccountui.ui'
**
** Created by: Qt User Interface Compiler version 4.8.7
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_ICQEDITACCOUNTUI_H
#define UI_ICQEDITACCOUNTUI_H

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
#include <QtGui/QListView>
#include <QtGui/QPushButton>
#include <QtGui/QSpacerItem>
#include <QtGui/QSpinBox>
#include <QtGui/QTabWidget>
#include <QtGui/QVBoxLayout>
#include <QtGui/QWidget>
#include "kopetepasswordwidget.h"

QT_BEGIN_NAMESPACE

class Ui_ICQEditAccountUI
{
public:
    QVBoxLayout *vboxLayout;
    QTabWidget *tabWidget7;
    QWidget *tab;
    QVBoxLayout *vboxLayout1;
    QGroupBox *groupBox;
    QVBoxLayout *vboxLayout2;
    QHBoxLayout *hboxLayout;
    QLabel *lblAccountId;
    QLineEdit *edtAccountId;
    Kopete::UI::PasswordWidget *mPasswordWidget;
    QCheckBox *chkAutoLogin;
    QGroupBox *registrationGroupBox;
    QHBoxLayout *hboxLayout1;
    QLabel *textLabel6;
    QPushButton *buttonRegister;
    QGroupBox *changePasswordGroupBox;
    QHBoxLayout *hboxLayout2;
    QLabel *label;
    QPushButton *buttonChangePassword;
    QSpacerItem *spacerItem;
    QWidget *tab1;
    QVBoxLayout *vboxLayout3;
    QGroupBox *groupBox_4;
    QVBoxLayout *vboxLayout4;
    QCheckBox *chkRequireAuth;
    QCheckBox *chkHideIP;
    QCheckBox *chkWebAware;
    QGroupBox *groupBox_3;
    QVBoxLayout *vboxLayout5;
    QCheckBox *edtServerEncrypted;
    QCheckBox *optionOverrideServer;
    QHBoxLayout *hboxLayout3;
    QSpacerItem *spacerItem1;
    QLabel *lblServer;
    QLabel *lblServerPort;
    QLineEdit *edtServerAddress;
    QSpinBox *edtServerPort;
    QCheckBox *optionEnableProxy;
    QVBoxLayout *verticalLayout;
    QCheckBox *edtProxyServerSocks5;
    QHBoxLayout *horizontalLayout;
    QSpacerItem *spacerItem2;
    QLabel *lblProxyServer;
    QLabel *lblProxyServerPort;
    QLineEdit *edtProxyServerAddress;
    QSpinBox *edtProxyServerPort;
    QGroupBox *groupBox_41;
    QVBoxLayout *vboxLayout6;
    QHBoxLayout *hboxLayout4;
    QLabel *lblPort;
    QSpinBox *sbxFirstPort;
    QSpinBox *sbxLastPort;
    QCheckBox *chkFileProxy;
    QHBoxLayout *hboxLayout5;
    QLabel *lblTimeout;
    QSpinBox *sbxTimeout;
    QHBoxLayout *hboxLayout6;
    QLabel *textLabel1;
    QSpacerItem *spacerItem3;
    QComboBox *encodingCombo;
    QSpacerItem *spacerItem4;
    QWidget *tabVisible;
    QGridLayout *gridLayout;
    QListView *visibleContacts;
    QLabel *textLabel2;
    QLabel *textLabel1_2;
    QComboBox *visibleAllContacts;
    QPushButton *visibleRemove;
    QPushButton *visibleAdd;
    QWidget *tabInvisible;
    QGridLayout *gridLayout1;
    QComboBox *invisibleAllContacts;
    QPushButton *invisibleRemove;
    QPushButton *invisibleAdd;
    QListView *invisibleContacts;
    QLabel *textLabel2_2;
    QLabel *textLabel1_3;
    QWidget *tabIgnore;
    QGridLayout *gridLayout2;
    QPushButton *ignoreRemove;
    QPushButton *ignoreAdd;
    QListView *ignoreContacts;
    QComboBox *ignoreAllContacts;
    QLabel *textLabel2_3;
    QLabel *textLabel1_4;
    QLabel *labelStatusMessage;

    void setupUi(QWidget *ICQEditAccountUI)
    {
        if (ICQEditAccountUI->objectName().isEmpty())
            ICQEditAccountUI->setObjectName(QString::fromUtf8("ICQEditAccountUI"));
        ICQEditAccountUI->resize(578, 622);
        vboxLayout = new QVBoxLayout(ICQEditAccountUI);
#ifndef UI_Q_OS_MAC
        vboxLayout->setSpacing(6);
#endif
        vboxLayout->setContentsMargins(0, 0, 0, 0);
        vboxLayout->setObjectName(QString::fromUtf8("vboxLayout"));
        tabWidget7 = new QTabWidget(ICQEditAccountUI);
        tabWidget7->setObjectName(QString::fromUtf8("tabWidget7"));
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
        lblAccountId = new QLabel(groupBox);
        lblAccountId->setObjectName(QString::fromUtf8("lblAccountId"));

        hboxLayout->addWidget(lblAccountId);

        edtAccountId = new QLineEdit(groupBox);
        edtAccountId->setObjectName(QString::fromUtf8("edtAccountId"));

        hboxLayout->addWidget(edtAccountId);


        vboxLayout2->addLayout(hboxLayout);

        mPasswordWidget = new Kopete::UI::PasswordWidget(groupBox);
        mPasswordWidget->setObjectName(QString::fromUtf8("mPasswordWidget"));

        vboxLayout2->addWidget(mPasswordWidget);

        chkAutoLogin = new QCheckBox(groupBox);
        chkAutoLogin->setObjectName(QString::fromUtf8("chkAutoLogin"));
        chkAutoLogin->setEnabled(true);

        vboxLayout2->addWidget(chkAutoLogin);


        vboxLayout1->addWidget(groupBox);

        registrationGroupBox = new QGroupBox(tab);
        registrationGroupBox->setObjectName(QString::fromUtf8("registrationGroupBox"));
        hboxLayout1 = new QHBoxLayout(registrationGroupBox);
#ifndef UI_Q_OS_MAC
        hboxLayout1->setSpacing(6);
#endif
#ifndef UI_Q_OS_MAC
        hboxLayout1->setContentsMargins(9, 9, 9, 9);
#endif
        hboxLayout1->setObjectName(QString::fromUtf8("hboxLayout1"));
        textLabel6 = new QLabel(registrationGroupBox);
        textLabel6->setObjectName(QString::fromUtf8("textLabel6"));
        QSizePolicy sizePolicy(QSizePolicy::MinimumExpanding, QSizePolicy::Minimum);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(textLabel6->sizePolicy().hasHeightForWidth());
        textLabel6->setSizePolicy(sizePolicy);
        textLabel6->setMinimumSize(QSize(0, 0));
        textLabel6->setAlignment(Qt::AlignVCenter);
        textLabel6->setWordWrap(true);

        hboxLayout1->addWidget(textLabel6);

        buttonRegister = new QPushButton(registrationGroupBox);
        buttonRegister->setObjectName(QString::fromUtf8("buttonRegister"));

        hboxLayout1->addWidget(buttonRegister);


        vboxLayout1->addWidget(registrationGroupBox);

        changePasswordGroupBox = new QGroupBox(tab);
        changePasswordGroupBox->setObjectName(QString::fromUtf8("changePasswordGroupBox"));
        hboxLayout2 = new QHBoxLayout(changePasswordGroupBox);
#ifndef UI_Q_OS_MAC
        hboxLayout2->setSpacing(6);
#endif
#ifndef UI_Q_OS_MAC
        hboxLayout2->setContentsMargins(9, 9, 9, 9);
#endif
        hboxLayout2->setObjectName(QString::fromUtf8("hboxLayout2"));
        label = new QLabel(changePasswordGroupBox);
        label->setObjectName(QString::fromUtf8("label"));
        QSizePolicy sizePolicy1(QSizePolicy::Expanding, QSizePolicy::Preferred);
        sizePolicy1.setHorizontalStretch(0);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(label->sizePolicy().hasHeightForWidth());
        label->setSizePolicy(sizePolicy1);
        label->setWordWrap(true);

        hboxLayout2->addWidget(label);

        buttonChangePassword = new QPushButton(changePasswordGroupBox);
        buttonChangePassword->setObjectName(QString::fromUtf8("buttonChangePassword"));
        QSizePolicy sizePolicy2(QSizePolicy::Minimum, QSizePolicy::Fixed);
        sizePolicy2.setHorizontalStretch(0);
        sizePolicy2.setVerticalStretch(0);
        sizePolicy2.setHeightForWidth(buttonChangePassword->sizePolicy().hasHeightForWidth());
        buttonChangePassword->setSizePolicy(sizePolicy2);

        hboxLayout2->addWidget(buttonChangePassword);


        vboxLayout1->addWidget(changePasswordGroupBox);

        spacerItem = new QSpacerItem(20, 0, QSizePolicy::Minimum, QSizePolicy::Expanding);

        vboxLayout1->addItem(spacerItem);

        tabWidget7->addTab(tab, QString());
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
        groupBox_4 = new QGroupBox(tab1);
        groupBox_4->setObjectName(QString::fromUtf8("groupBox_4"));
        vboxLayout4 = new QVBoxLayout(groupBox_4);
#ifndef UI_Q_OS_MAC
        vboxLayout4->setSpacing(6);
#endif
#ifndef UI_Q_OS_MAC
        vboxLayout4->setContentsMargins(9, 9, 9, 9);
#endif
        vboxLayout4->setObjectName(QString::fromUtf8("vboxLayout4"));
        chkRequireAuth = new QCheckBox(groupBox_4);
        chkRequireAuth->setObjectName(QString::fromUtf8("chkRequireAuth"));

        vboxLayout4->addWidget(chkRequireAuth);

        chkHideIP = new QCheckBox(groupBox_4);
        chkHideIP->setObjectName(QString::fromUtf8("chkHideIP"));

        vboxLayout4->addWidget(chkHideIP);

        chkWebAware = new QCheckBox(groupBox_4);
        chkWebAware->setObjectName(QString::fromUtf8("chkWebAware"));
        chkWebAware->setChecked(false);

        vboxLayout4->addWidget(chkWebAware);


        vboxLayout3->addWidget(groupBox_4);

        groupBox_3 = new QGroupBox(tab1);
        groupBox_3->setObjectName(QString::fromUtf8("groupBox_3"));
        vboxLayout5 = new QVBoxLayout(groupBox_3);
#ifndef UI_Q_OS_MAC
        vboxLayout5->setSpacing(6);
#endif
#ifndef UI_Q_OS_MAC
        vboxLayout5->setContentsMargins(9, 9, 9, 9);
#endif
        vboxLayout5->setObjectName(QString::fromUtf8("vboxLayout5"));
        edtServerEncrypted = new QCheckBox(groupBox_3);
        edtServerEncrypted->setObjectName(QString::fromUtf8("edtServerEncrypted"));
        edtServerEncrypted->setChecked(true);

        vboxLayout5->addWidget(edtServerEncrypted);

        optionOverrideServer = new QCheckBox(groupBox_3);
        optionOverrideServer->setObjectName(QString::fromUtf8("optionOverrideServer"));

        vboxLayout5->addWidget(optionOverrideServer);

        hboxLayout3 = new QHBoxLayout();
#ifndef UI_Q_OS_MAC
        hboxLayout3->setSpacing(6);
#endif
        hboxLayout3->setContentsMargins(0, 0, 0, 0);
        hboxLayout3->setObjectName(QString::fromUtf8("hboxLayout3"));
        spacerItem1 = new QSpacerItem(16, 20, QSizePolicy::Fixed, QSizePolicy::Minimum);

        hboxLayout3->addItem(spacerItem1);

        lblServer = new QLabel(groupBox_3);
        lblServer->setObjectName(QString::fromUtf8("lblServer"));
        lblServer->setEnabled(false);

        hboxLayout3->addWidget(lblServer);

        lblServerPort = new QLabel(groupBox_3);
        lblServerPort->setObjectName(QString::fromUtf8("lblServerPort"));
        lblServerPort->setEnabled(false);

        hboxLayout3->addWidget(lblServerPort);

        edtServerAddress = new QLineEdit(groupBox_3);
        edtServerAddress->setObjectName(QString::fromUtf8("edtServerAddress"));
        edtServerAddress->setEnabled(false);

        hboxLayout3->addWidget(edtServerAddress);

        edtServerPort = new QSpinBox(groupBox_3);
        edtServerPort->setObjectName(QString::fromUtf8("edtServerPort"));
        edtServerPort->setEnabled(false);
        edtServerPort->setMinimum(1);
        edtServerPort->setMaximum(65534);
        edtServerPort->setValue(443);

        hboxLayout3->addWidget(edtServerPort);


        vboxLayout5->addLayout(hboxLayout3);

        optionEnableProxy = new QCheckBox(groupBox_3);
        optionEnableProxy->setObjectName(QString::fromUtf8("optionEnableProxy"));

        vboxLayout5->addWidget(optionEnableProxy);

        verticalLayout = new QVBoxLayout();
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        edtProxyServerSocks5 = new QCheckBox(groupBox_3);
        edtProxyServerSocks5->setObjectName(QString::fromUtf8("edtProxyServerSocks5"));
        edtProxyServerSocks5->setEnabled(false);

        verticalLayout->addWidget(edtProxyServerSocks5);

        horizontalLayout = new QHBoxLayout();
#ifndef UI_Q_OS_MAC
        horizontalLayout->setSpacing(6);
#endif
        horizontalLayout->setContentsMargins(0, 0, 0, 0);
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        spacerItem2 = new QSpacerItem(16, 20, QSizePolicy::Fixed, QSizePolicy::Minimum);

        horizontalLayout->addItem(spacerItem2);

        lblProxyServer = new QLabel(groupBox_3);
        lblProxyServer->setObjectName(QString::fromUtf8("lblProxyServer"));
        lblProxyServer->setEnabled(false);

        horizontalLayout->addWidget(lblProxyServer);

        lblProxyServerPort = new QLabel(groupBox_3);
        lblProxyServerPort->setObjectName(QString::fromUtf8("lblProxyServerPort"));
        lblProxyServerPort->setEnabled(false);

        horizontalLayout->addWidget(lblProxyServerPort);

        edtProxyServerAddress = new QLineEdit(groupBox_3);
        edtProxyServerAddress->setObjectName(QString::fromUtf8("edtProxyServerAddress"));
        edtProxyServerAddress->setEnabled(false);

        horizontalLayout->addWidget(edtProxyServerAddress);

        edtProxyServerPort = new QSpinBox(groupBox_3);
        edtProxyServerPort->setObjectName(QString::fromUtf8("edtProxyServerPort"));
        edtProxyServerPort->setEnabled(false);
        edtProxyServerPort->setMinimum(1);
        edtProxyServerPort->setMaximum(65534);
        edtProxyServerPort->setValue(443);

        horizontalLayout->addWidget(edtProxyServerPort);


        verticalLayout->addLayout(horizontalLayout);


        vboxLayout5->addLayout(verticalLayout);


        vboxLayout3->addWidget(groupBox_3);

        groupBox_41 = new QGroupBox(tab1);
        groupBox_41->setObjectName(QString::fromUtf8("groupBox_41"));
        vboxLayout6 = new QVBoxLayout(groupBox_41);
#ifndef UI_Q_OS_MAC
        vboxLayout6->setSpacing(6);
#endif
#ifndef UI_Q_OS_MAC
        vboxLayout6->setContentsMargins(9, 9, 9, 9);
#endif
        vboxLayout6->setObjectName(QString::fromUtf8("vboxLayout6"));
        hboxLayout4 = new QHBoxLayout();
#ifndef UI_Q_OS_MAC
        hboxLayout4->setSpacing(6);
#endif
#ifndef UI_Q_OS_MAC
        hboxLayout4->setContentsMargins(0, 0, 0, 0);
#endif
        hboxLayout4->setObjectName(QString::fromUtf8("hboxLayout4"));
        lblPort = new QLabel(groupBox_41);
        lblPort->setObjectName(QString::fromUtf8("lblPort"));

        hboxLayout4->addWidget(lblPort);

        sbxFirstPort = new QSpinBox(groupBox_41);
        sbxFirstPort->setObjectName(QString::fromUtf8("sbxFirstPort"));
        sbxFirstPort->setMinimum(1);
        sbxFirstPort->setMaximum(65534);
        sbxFirstPort->setValue(5190);

        hboxLayout4->addWidget(sbxFirstPort);

        sbxLastPort = new QSpinBox(groupBox_41);
        sbxLastPort->setObjectName(QString::fromUtf8("sbxLastPort"));
        sbxLastPort->setMinimum(1);
        sbxLastPort->setMaximum(65534);
        sbxLastPort->setValue(5199);

        hboxLayout4->addWidget(sbxLastPort);


        vboxLayout6->addLayout(hboxLayout4);

        chkFileProxy = new QCheckBox(groupBox_41);
        chkFileProxy->setObjectName(QString::fromUtf8("chkFileProxy"));

        vboxLayout6->addWidget(chkFileProxy);

        hboxLayout5 = new QHBoxLayout();
#ifndef UI_Q_OS_MAC
        hboxLayout5->setSpacing(6);
#endif
        hboxLayout5->setContentsMargins(0, 0, 0, 0);
        hboxLayout5->setObjectName(QString::fromUtf8("hboxLayout5"));
        lblTimeout = new QLabel(groupBox_41);
        lblTimeout->setObjectName(QString::fromUtf8("lblTimeout"));

        hboxLayout5->addWidget(lblTimeout);

        sbxTimeout = new QSpinBox(groupBox_41);
        sbxTimeout->setObjectName(QString::fromUtf8("sbxTimeout"));
        sbxTimeout->setMinimum(1);
        sbxTimeout->setMaximum(60);
        sbxTimeout->setValue(10);

        hboxLayout5->addWidget(sbxTimeout);


        vboxLayout6->addLayout(hboxLayout5);


        vboxLayout3->addWidget(groupBox_41);

        hboxLayout6 = new QHBoxLayout();
#ifndef UI_Q_OS_MAC
        hboxLayout6->setSpacing(6);
#endif
        hboxLayout6->setContentsMargins(0, 0, 0, 0);
        hboxLayout6->setObjectName(QString::fromUtf8("hboxLayout6"));
        textLabel1 = new QLabel(tab1);
        textLabel1->setObjectName(QString::fromUtf8("textLabel1"));
        textLabel1->setEnabled(true);

        hboxLayout6->addWidget(textLabel1);

        spacerItem3 = new QSpacerItem(10, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        hboxLayout6->addItem(spacerItem3);

        encodingCombo = new QComboBox(tab1);
        encodingCombo->setObjectName(QString::fromUtf8("encodingCombo"));
        encodingCombo->setEnabled(true);

        hboxLayout6->addWidget(encodingCombo);


        vboxLayout3->addLayout(hboxLayout6);

        spacerItem4 = new QSpacerItem(20, 0, QSizePolicy::Minimum, QSizePolicy::Expanding);

        vboxLayout3->addItem(spacerItem4);

        tabWidget7->addTab(tab1, QString());
        tabVisible = new QWidget();
        tabVisible->setObjectName(QString::fromUtf8("tabVisible"));
        gridLayout = new QGridLayout(tabVisible);
#ifndef UI_Q_OS_MAC
        gridLayout->setSpacing(6);
#endif
#ifndef UI_Q_OS_MAC
        gridLayout->setContentsMargins(9, 9, 9, 9);
#endif
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        visibleContacts = new QListView(tabVisible);
        visibleContacts->setObjectName(QString::fromUtf8("visibleContacts"));

        gridLayout->addWidget(visibleContacts, 1, 0, 1, 2);

        textLabel2 = new QLabel(tabVisible);
        textLabel2->setObjectName(QString::fromUtf8("textLabel2"));

        gridLayout->addWidget(textLabel2, 0, 0, 1, 2);

        textLabel1_2 = new QLabel(tabVisible);
        textLabel1_2->setObjectName(QString::fromUtf8("textLabel1_2"));

        gridLayout->addWidget(textLabel1_2, 3, 0, 1, 2);

        visibleAllContacts = new QComboBox(tabVisible);
        visibleAllContacts->setObjectName(QString::fromUtf8("visibleAllContacts"));
        visibleAllContacts->setEditable(true);
        visibleAllContacts->setInsertPolicy(QComboBox::NoInsert);

        gridLayout->addWidget(visibleAllContacts, 4, 0, 1, 2);

        visibleRemove = new QPushButton(tabVisible);
        visibleRemove->setObjectName(QString::fromUtf8("visibleRemove"));

        gridLayout->addWidget(visibleRemove, 2, 1, 1, 1);

        visibleAdd = new QPushButton(tabVisible);
        visibleAdd->setObjectName(QString::fromUtf8("visibleAdd"));

        gridLayout->addWidget(visibleAdd, 2, 0, 1, 1);

        tabWidget7->addTab(tabVisible, QString());
        tabInvisible = new QWidget();
        tabInvisible->setObjectName(QString::fromUtf8("tabInvisible"));
        gridLayout1 = new QGridLayout(tabInvisible);
#ifndef UI_Q_OS_MAC
        gridLayout1->setSpacing(6);
#endif
#ifndef UI_Q_OS_MAC
        gridLayout1->setContentsMargins(9, 9, 9, 9);
#endif
        gridLayout1->setObjectName(QString::fromUtf8("gridLayout1"));
        invisibleAllContacts = new QComboBox(tabInvisible);
        invisibleAllContacts->setObjectName(QString::fromUtf8("invisibleAllContacts"));
        invisibleAllContacts->setEditable(true);
        invisibleAllContacts->setInsertPolicy(QComboBox::NoInsert);

        gridLayout1->addWidget(invisibleAllContacts, 4, 0, 1, 2);

        invisibleRemove = new QPushButton(tabInvisible);
        invisibleRemove->setObjectName(QString::fromUtf8("invisibleRemove"));

        gridLayout1->addWidget(invisibleRemove, 2, 1, 1, 1);

        invisibleAdd = new QPushButton(tabInvisible);
        invisibleAdd->setObjectName(QString::fromUtf8("invisibleAdd"));

        gridLayout1->addWidget(invisibleAdd, 2, 0, 1, 1);

        invisibleContacts = new QListView(tabInvisible);
        invisibleContacts->setObjectName(QString::fromUtf8("invisibleContacts"));

        gridLayout1->addWidget(invisibleContacts, 1, 0, 1, 2);

        textLabel2_2 = new QLabel(tabInvisible);
        textLabel2_2->setObjectName(QString::fromUtf8("textLabel2_2"));

        gridLayout1->addWidget(textLabel2_2, 0, 0, 1, 2);

        textLabel1_3 = new QLabel(tabInvisible);
        textLabel1_3->setObjectName(QString::fromUtf8("textLabel1_3"));

        gridLayout1->addWidget(textLabel1_3, 3, 0, 1, 2);

        tabWidget7->addTab(tabInvisible, QString());
        tabIgnore = new QWidget();
        tabIgnore->setObjectName(QString::fromUtf8("tabIgnore"));
        gridLayout2 = new QGridLayout(tabIgnore);
#ifndef UI_Q_OS_MAC
        gridLayout2->setSpacing(6);
#endif
#ifndef UI_Q_OS_MAC
        gridLayout2->setContentsMargins(9, 9, 9, 9);
#endif
        gridLayout2->setObjectName(QString::fromUtf8("gridLayout2"));
        ignoreRemove = new QPushButton(tabIgnore);
        ignoreRemove->setObjectName(QString::fromUtf8("ignoreRemove"));

        gridLayout2->addWidget(ignoreRemove, 2, 1, 1, 1);

        ignoreAdd = new QPushButton(tabIgnore);
        ignoreAdd->setObjectName(QString::fromUtf8("ignoreAdd"));

        gridLayout2->addWidget(ignoreAdd, 2, 0, 1, 1);

        ignoreContacts = new QListView(tabIgnore);
        ignoreContacts->setObjectName(QString::fromUtf8("ignoreContacts"));

        gridLayout2->addWidget(ignoreContacts, 1, 0, 1, 2);

        ignoreAllContacts = new QComboBox(tabIgnore);
        ignoreAllContacts->setObjectName(QString::fromUtf8("ignoreAllContacts"));
        ignoreAllContacts->setEditable(true);
        ignoreAllContacts->setInsertPolicy(QComboBox::NoInsert);

        gridLayout2->addWidget(ignoreAllContacts, 4, 0, 1, 2);

        textLabel2_3 = new QLabel(tabIgnore);
        textLabel2_3->setObjectName(QString::fromUtf8("textLabel2_3"));

        gridLayout2->addWidget(textLabel2_3, 0, 0, 1, 2);

        textLabel1_4 = new QLabel(tabIgnore);
        textLabel1_4->setObjectName(QString::fromUtf8("textLabel1_4"));

        gridLayout2->addWidget(textLabel1_4, 3, 0, 1, 2);

        tabWidget7->addTab(tabIgnore, QString());

        vboxLayout->addWidget(tabWidget7);

        labelStatusMessage = new QLabel(ICQEditAccountUI);
        labelStatusMessage->setObjectName(QString::fromUtf8("labelStatusMessage"));
        labelStatusMessage->setAlignment(Qt::AlignCenter);

        vboxLayout->addWidget(labelStatusMessage);

#ifndef UI_QT_NO_SHORTCUT
        lblAccountId->setBuddy(edtAccountId);
        lblServer->setBuddy(edtServerAddress);
        lblServerPort->setBuddy(edtServerPort);
        lblProxyServer->setBuddy(edtProxyServerAddress);
        lblProxyServerPort->setBuddy(edtProxyServerPort);
        lblPort->setBuddy(sbxFirstPort);
        lblTimeout->setBuddy(sbxTimeout);
        textLabel1->setBuddy(encodingCombo);
#endif // QT_NO_SHORTCUT
        QWidget::setTabOrder(tabWidget7, edtAccountId);
        QWidget::setTabOrder(edtAccountId, chkAutoLogin);
        QWidget::setTabOrder(chkAutoLogin, buttonRegister);
        QWidget::setTabOrder(buttonRegister, buttonChangePassword);
        QWidget::setTabOrder(buttonChangePassword, chkRequireAuth);
        QWidget::setTabOrder(chkRequireAuth, chkHideIP);
        QWidget::setTabOrder(chkHideIP, chkWebAware);
        QWidget::setTabOrder(chkWebAware, optionOverrideServer);
        QWidget::setTabOrder(optionOverrideServer, edtServerAddress);
        QWidget::setTabOrder(edtServerAddress, edtServerPort);
        QWidget::setTabOrder(edtServerPort, optionEnableProxy);
        QWidget::setTabOrder(optionEnableProxy, edtProxyServerAddress);
        QWidget::setTabOrder(edtProxyServerAddress, edtProxyServerPort);
        QWidget::setTabOrder(edtProxyServerPort, sbxFirstPort);
        QWidget::setTabOrder(sbxFirstPort, sbxLastPort);
        QWidget::setTabOrder(sbxLastPort, chkFileProxy);
        QWidget::setTabOrder(chkFileProxy, sbxTimeout);
        QWidget::setTabOrder(sbxTimeout, encodingCombo);
        QWidget::setTabOrder(encodingCombo, visibleContacts);
        QWidget::setTabOrder(visibleContacts, visibleAdd);
        QWidget::setTabOrder(visibleAdd, visibleRemove);
        QWidget::setTabOrder(visibleRemove, visibleAllContacts);
        QWidget::setTabOrder(visibleAllContacts, invisibleContacts);
        QWidget::setTabOrder(invisibleContacts, invisibleAdd);
        QWidget::setTabOrder(invisibleAdd, invisibleRemove);
        QWidget::setTabOrder(invisibleRemove, invisibleAllContacts);
        QWidget::setTabOrder(invisibleAllContacts, ignoreContacts);
        QWidget::setTabOrder(ignoreContacts, ignoreAdd);
        QWidget::setTabOrder(ignoreAdd, ignoreRemove);
        QWidget::setTabOrder(ignoreRemove, ignoreAllContacts);

        retranslateUi(ICQEditAccountUI);
        QObject::connect(optionOverrideServer, SIGNAL(toggled(bool)), lblServer, SLOT(setEnabled(bool)));
        QObject::connect(optionOverrideServer, SIGNAL(toggled(bool)), lblServerPort, SLOT(setEnabled(bool)));
        QObject::connect(optionOverrideServer, SIGNAL(toggled(bool)), edtServerAddress, SLOT(setEnabled(bool)));
        QObject::connect(optionOverrideServer, SIGNAL(toggled(bool)), edtServerPort, SLOT(setEnabled(bool)));
        QObject::connect(optionEnableProxy, SIGNAL(toggled(bool)), lblProxyServer, SLOT(setEnabled(bool)));
        QObject::connect(optionEnableProxy, SIGNAL(toggled(bool)), lblProxyServerPort, SLOT(setEnabled(bool)));
        QObject::connect(optionEnableProxy, SIGNAL(toggled(bool)), edtProxyServerAddress, SLOT(setEnabled(bool)));
        QObject::connect(optionEnableProxy, SIGNAL(toggled(bool)), edtProxyServerPort, SLOT(setEnabled(bool)));
        QObject::connect(optionEnableProxy, SIGNAL(toggled(bool)), edtProxyServerSocks5, SLOT(setEnabled(bool)));

        tabWidget7->setCurrentIndex(0);


        QMetaObject::connectSlotsByName(ICQEditAccountUI);
    } // setupUi

    void retranslateUi(QWidget *ICQEditAccountUI)
    {
        ICQEditAccountUI->setWindowTitle(tr2i18n("Account Preferences - ICQ", 0));
        groupBox->setTitle(tr2i18n("Account Preferences", 0));
#ifndef UI_QT_NO_TOOLTIP
        lblAccountId->setToolTip(tr2i18n("The user ID of your ICQ account.", 0));
#endif // QT_NO_TOOLTIP
#ifndef UI_QT_NO_WHATSTHIS
        lblAccountId->setWhatsThis(tr2i18n("The user ID of your ICQ account.  This should be in the form of a number (no decimals, no spaces).", 0));
#endif // QT_NO_WHATSTHIS
        lblAccountId->setText(tr2i18n("IC&Q UIN:", 0));
#ifndef UI_QT_NO_TOOLTIP
        edtAccountId->setToolTip(tr2i18n("The user ID of your ICQ account.", 0));
#endif // QT_NO_TOOLTIP
#ifndef UI_QT_NO_WHATSTHIS
        edtAccountId->setWhatsThis(tr2i18n("The user ID of your ICQ account.  This should be in the form of a number (no decimals, no spaces).", 0));
#endif // QT_NO_WHATSTHIS
#ifndef UI_QT_NO_WHATSTHIS
        chkAutoLogin->setWhatsThis(tr2i18n("If you enable this option, this account will not be connected when you press the \"Connect All\" button, nor at startup even if you have enabled automatic connection at startup.", 0));
#endif // QT_NO_WHATSTHIS
        chkAutoLogin->setText(tr2i18n("E&xclude from connect all", 0));
        registrationGroupBox->setTitle(tr2i18n("Registration", 0));
        textLabel6->setText(tr2i18n("To connect to the ICQ network, you will need an ICQ account.<br><br>\n"
"If you do not currently have an ICQ account, please click the button to create one.", 0));
        buttonRegister->setText(tr2i18n("Re&gister New Account", 0));
        changePasswordGroupBox->setTitle(tr2i18n("Change password", 0));
        label->setText(tr2i18n("If you have an existing ICQ account and would like to change its password, you can use this button to enter a new password.", 0));
        buttonChangePassword->setText(tr2i18n("Change Your Password...", 0));
        tabWidget7->setTabText(tabWidget7->indexOf(tab), tr2i18n("&Basic Setup", "@title:tab"));
        groupBox_4->setTitle(tr2i18n("Privacy Options", 0));
#ifndef UI_QT_NO_TOOLTIP
        chkRequireAuth->setToolTip(tr2i18n("Enable the authorization requirement, which will not allow users to add you to their contact list without authorization from you.", 0));
#endif // QT_NO_TOOLTIP
#ifndef UI_QT_NO_WHATSTHIS
        chkRequireAuth->setWhatsThis(tr2i18n("Enable the authorization requirement, which will not allow users to add you to their contact list without authorization from you.  Check this box, and you will have to confirm any users who add you to their list before they may see your online status.", 0));
#endif // QT_NO_WHATSTHIS
        chkRequireAuth->setText(tr2i18n("&Require authorization before someone can add you to their contact list", 0));
#ifndef UI_QT_NO_TOOLTIP
        chkHideIP->setToolTip(tr2i18n("Check this to hide your IP address from people when they view your user info", 0));
#endif // QT_NO_TOOLTIP
#ifndef UI_QT_NO_WHATSTHIS
        chkHideIP->setWhatsThis(tr2i18n("Checking this box prevent people from seeing your IP address if they view your ICQ user details such as name, address, or age.", 0));
#endif // QT_NO_WHATSTHIS
        chkHideIP->setText(tr2i18n("Hide &IP address", 0));
#ifndef UI_QT_NO_TOOLTIP
        chkWebAware->setToolTip(tr2i18n("Check this box to enable Web Aware functionality.", 0));
#endif // QT_NO_TOOLTIP
#ifndef UI_QT_NO_WHATSTHIS
        chkWebAware->setWhatsThis(tr2i18n("Check this box to enable ICQ's Web Aware functionality, which allows people to see your online status from ICQ's web page, and send you a message without necessarily having ICQ themselves.", 0));
#endif // QT_NO_WHATSTHIS
        chkWebAware->setText(tr2i18n("Make my status available via &ICQ's unified messaging center", 0));
        groupBox_3->setTitle(tr2i18n("Connection Preferences", 0));
        edtServerEncrypted->setText(tr2i18n("Use SSL encryption", 0));
        optionOverrideServer->setText(tr2i18n("&Override default server information", 0));
#ifndef UI_QT_NO_TOOLTIP
        lblServer->setToolTip(tr2i18n("The IP address or hostmask of the ICQ server you wish to connect to.", 0));
#endif // QT_NO_TOOLTIP
#ifndef UI_QT_NO_WHATSTHIS
        lblServer->setWhatsThis(tr2i18n("The IP address or hostmask of the ICQ server you wish to connect to.  Normally you will want the default (slogin.icq.com or login.icq.com).", 0));
#endif // QT_NO_WHATSTHIS
        lblServer->setText(tr2i18n("Ser&ver /", 0));
#ifndef UI_QT_NO_TOOLTIP
        lblServerPort->setToolTip(tr2i18n("The port on the ICQ server that you would like to connect to.", 0));
#endif // QT_NO_TOOLTIP
#ifndef UI_QT_NO_WHATSTHIS
        lblServerPort->setWhatsThis(tr2i18n("The port on the ICQ server that you would like to connect to.  Normally this is 443 or 5190.", 0));
#endif // QT_NO_WHATSTHIS
        lblServerPort->setText(tr2i18n("Po&rt:", 0));
#ifndef UI_QT_NO_TOOLTIP
        edtServerAddress->setToolTip(tr2i18n("The IP address or hostmask of the ICQ server you wish to connect to.", 0));
#endif // QT_NO_TOOLTIP
#ifndef UI_QT_NO_WHATSTHIS
        edtServerAddress->setWhatsThis(tr2i18n("The IP address or hostmask of the ICQ server you wish to connect to.  Normally you will want the default (slogin.icq.com or login.icq.com).", 0));
#endif // QT_NO_WHATSTHIS
        edtServerAddress->setText(tr2i18n("slogin.icq.com", 0));
#ifndef UI_QT_NO_TOOLTIP
        edtServerPort->setToolTip(tr2i18n("The port on the ICQ server that you would like to connect to.", 0));
#endif // QT_NO_TOOLTIP
#ifndef UI_QT_NO_WHATSTHIS
        edtServerPort->setWhatsThis(tr2i18n("The port on the ICQ server that you would like to connect to.  Normally this is 443 or 5190.", 0));
#endif // QT_NO_WHATSTHIS
        optionEnableProxy->setText(tr2i18n("Override system proxy settings", 0));
        edtProxyServerSocks5->setText(tr2i18n("Proxy server is SOCKS5", 0));
#ifndef UI_QT_NO_TOOLTIP
        lblProxyServer->setToolTip(tr2i18n("The IP address or hostmask of the proxy server you wish to use for connecting to an ICQ server.", 0));
#endif // QT_NO_TOOLTIP
#ifndef UI_QT_NO_WHATSTHIS
        lblProxyServer->setWhatsThis(tr2i18n("The IP address or hostmask of the proxy server you wish to use for connecting to an ICQ server. The proxy server must support a CONNECT command and allow connections to the ICQ server port (normally 443 or 5190).", 0));
#endif // QT_NO_WHATSTHIS
        lblProxyServer->setText(tr2i18n("Ser&ver /", 0));
#ifndef UI_QT_NO_TOOLTIP
        lblProxyServerPort->setToolTip(tr2i18n("The port that the proxy server listens to.", 0));
#endif // QT_NO_TOOLTIP
#ifndef UI_QT_NO_WHATSTHIS
        lblProxyServerPort->setWhatsThis(tr2i18n("The port that the proxy server listens to. Normally this will be 3128 or 8080.", 0));
#endif // QT_NO_WHATSTHIS
        lblProxyServerPort->setText(tr2i18n("Po&rt:", 0));
#ifndef UI_QT_NO_TOOLTIP
        edtProxyServerAddress->setToolTip(tr2i18n("The IP address or hostmask of the proxy server you wish to use for connecting to an ICQ server.", 0));
#endif // QT_NO_TOOLTIP
#ifndef UI_QT_NO_WHATSTHIS
        edtProxyServerAddress->setWhatsThis(tr2i18n("The IP address or hostmask of the proxy server you wish to use for connecting to an ICQ server. The proxy server must support a CONNECT command and allow connections to the ICQ server port (normally 443 or 5190).", 0));
#endif // QT_NO_WHATSTHIS
        edtProxyServerAddress->setText(QString());
#ifndef UI_QT_NO_TOOLTIP
        edtProxyServerPort->setToolTip(tr2i18n("The port that the proxy server listens to.", 0));
#endif // QT_NO_TOOLTIP
#ifndef UI_QT_NO_WHATSTHIS
        edtProxyServerPort->setWhatsThis(tr2i18n("The port that the proxy server listens to. Normally this will be 3128, 8080, or 443 (https).", 0));
#endif // QT_NO_WHATSTHIS
        groupBox_41->setTitle(tr2i18n("Peer Connection Options", 0));
#ifndef UI_QT_NO_TOOLTIP
        lblPort->setToolTip(tr2i18n("The ports to use for direct connections.", 0));
#endif // QT_NO_TOOLTIP
#ifndef UI_QT_NO_WHATSTHIS
        lblPort->setWhatsThis(tr2i18n("The ports to use when listening for direct connections. These must not be blocked by a firewall or router.", 0));
#endif // QT_NO_WHATSTHIS
        lblPort->setText(tr2i18n("Po&rt range:", 0));
#ifndef UI_QT_NO_TOOLTIP
        sbxFirstPort->setToolTip(tr2i18n("The start of the port range.", 0));
#endif // QT_NO_TOOLTIP
#ifndef UI_QT_NO_WHATSTHIS
        sbxFirstPort->setWhatsThis(tr2i18n("The start of the port range. Normally this is 5190.", 0));
#endif // QT_NO_WHATSTHIS
#ifndef UI_QT_NO_TOOLTIP
        sbxLastPort->setToolTip(tr2i18n("The end of the port range.", 0));
#endif // QT_NO_TOOLTIP
#ifndef UI_QT_NO_WHATSTHIS
        sbxLastPort->setWhatsThis(tr2i18n("The end of the port range. Normally this is 5199.", 0));
#endif // QT_NO_WHATSTHIS
#ifndef UI_QT_NO_TOOLTIP
        chkFileProxy->setToolTip(tr2i18n("Use AOL proxy server instead of direct connections. If you are behind a router that you do not control, you will probably want this.", 0));
#endif // QT_NO_TOOLTIP
#ifndef UI_QT_NO_WHATSTHIS
        chkFileProxy->setWhatsThis(tr2i18n("Use the AOL proxy server for things that would normally need a direct connection, like file transfers. You will want this if there is a firewall or router that blocks connections to your computer and you cannot get unblocked. If a direct connection fails, a proxy connection will be tried regardless of this setting.", 0));
#endif // QT_NO_WHATSTHIS
        chkFileProxy->setText(tr2i18n("&Use proxy instead", 0));
#ifndef UI_QT_NO_TOOLTIP
        lblTimeout->setToolTip(tr2i18n("Timeout for direct connections.", 0));
#endif // QT_NO_TOOLTIP
#ifndef UI_QT_NO_WHATSTHIS
        lblTimeout->setWhatsThis(tr2i18n("The number of seconds to wait for a connection to succeed before trying a different method.", 0));
#endif // QT_NO_WHATSTHIS
        lblTimeout->setText(tr2i18n("T&imeout (secs):", 0));
#ifndef UI_QT_NO_TOOLTIP
        sbxTimeout->setToolTip(tr2i18n("Timeout for direct connections.", 0));
#endif // QT_NO_TOOLTIP
#ifndef UI_QT_NO_WHATSTHIS
        sbxTimeout->setWhatsThis(tr2i18n("The number of seconds to wait for a connection to succeed before trying a different method.", 0));
#endif // QT_NO_WHATSTHIS
        textLabel1->setText(tr2i18n("Default to the following &encoding for messages:", 0));
        tabWidget7->setTabText(tabWidget7->indexOf(tab1), tr2i18n("Accou&nt Preferences", "@title:tab"));
        textLabel2->setText(tr2i18n("Always visible:", 0));
        textLabel1_2->setText(tr2i18n("Contact to add:", 0));
        visibleRemove->setText(tr2i18n("Remove", 0));
        visibleAdd->setText(tr2i18n("Add", 0));
        tabWidget7->setTabText(tabWidget7->indexOf(tabVisible), tr2i18n("Visible", "@title:tab"));
        invisibleRemove->setText(tr2i18n("Remove", 0));
        invisibleAdd->setText(tr2i18n("Add", 0));
        textLabel2_2->setText(tr2i18n("Always invisible:", 0));
        textLabel1_3->setText(tr2i18n("Contact to add:", 0));
        tabWidget7->setTabText(tabWidget7->indexOf(tabInvisible), tr2i18n("Invisible", "@title:tab"));
        ignoreRemove->setText(tr2i18n("Remove", 0));
        ignoreAdd->setText(tr2i18n("Add", 0));
        textLabel2_3->setText(tr2i18n("Ignore:", 0));
        textLabel1_4->setText(tr2i18n("Contact to add:", 0));
        tabWidget7->setTabText(tabWidget7->indexOf(tabIgnore), tr2i18n("Ignore", "@title:tab"));
        labelStatusMessage->setText(QString());
    } // retranslateUi

};

namespace Ui {
    class ICQEditAccountUI: public Ui_ICQEditAccountUI {};
} // namespace Ui

QT_END_NAMESPACE

#endif // ICQEDITACCOUNTUI_H

