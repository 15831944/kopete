#include <kdialog.h>
#include <klocale.h>

/********************************************************************************
** Form generated from reading UI file 'aimeditaccountui.ui'
**
** Created by: Qt User Interface Compiler version 4.8.7
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_AIMEDITACCOUNTUI_H
#define UI_AIMEDITACCOUNTUI_H

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
#include <QtGui/QRadioButton>
#include <QtGui/QSpacerItem>
#include <QtGui/QSpinBox>
#include <QtGui/QTabWidget>
#include <QtGui/QVBoxLayout>
#include <QtGui/QWidget>
#include "kopetepasswordwidget.h"

QT_BEGIN_NAMESPACE

class Ui_aimEditAccountUI
{
public:
    QVBoxLayout *vboxLayout;
    QTabWidget *tabWidget6;
    QWidget *basicSetupTab;
    QGridLayout *gridLayout;
    QSpacerItem *spacerItem;
    QGroupBox *registrationGroupBox;
    QGridLayout *gridLayout1;
    QSpacerItem *spacerItem1;
    QSpacerItem *spacerItem2;
    QPushButton *buttonRegister;
    QLabel *textLabel6;
    QGroupBox *groupBox;
    QVBoxLayout *vboxLayout1;
    QHBoxLayout *hboxLayout;
    QLabel *lblAccountId;
    QLineEdit *edtAccountId;
    Kopete::UI::PasswordWidget *mPasswordWidget;
    QCheckBox *mAutoLogon;
    QWidget *accountPreferencesTab;
    QVBoxLayout *vboxLayout2;
    QGroupBox *groupBox_3;
    QVBoxLayout *vboxLayout3;
    QCheckBox *optionOverrideServer;
    QHBoxLayout *hboxLayout1;
    QSpacerItem *spacerItem3;
    QLabel *lblServer;
    QLineEdit *edtServerAddress;
    QLabel *lblPort;
    QSpinBox *sbxServerPort;
    QGroupBox *groupBox_4;
    QVBoxLayout *vboxLayout4;
    QHBoxLayout *hboxLayout2;
    QLabel *lblPort1;
    QSpinBox *sbxFirstPort;
    QSpinBox *sbxLastPort;
    QCheckBox *chkFileProxy;
    QHBoxLayout *hboxLayout3;
    QLabel *lblTimeout;
    QSpinBox *sbxTimeout;
    QHBoxLayout *hboxLayout4;
    QLabel *textLabel1;
    QSpacerItem *spacerItem4;
    QComboBox *encodingCombo;
    QSpacerItem *spacerItem5;
    QWidget *privacyTab;
    QVBoxLayout *vboxLayout5;
    QGroupBox *groupBox_41;
    QGridLayout *gridLayout2;
    QRadioButton *rbAllowPerimtList;
    QRadioButton *rbAllowMyContacts;
    QRadioButton *rbAllowAll;
    QRadioButton *rbBlockAll;
    QRadioButton *rbBlockAIM;
    QRadioButton *rbBlockDenyList;
    QSpacerItem *spacerItem6;
    QWidget *visibleTab;
    QGridLayout *gridLayout3;
    QLabel *textLabel2;
    QPushButton *visibleAdd;
    QPushButton *visibleRemove;
    QLabel *textLabel1_2;
    QComboBox *visibleAllContacts;
    QListView *visibleContacts;
    QWidget *invisibleTab;
    QGridLayout *gridLayout4;
    QLabel *textLabel2_2;
    QListView *invisibleContacts;
    QComboBox *invisibleAllContacts;
    QPushButton *invisibleRemove;
    QPushButton *invisibleAdd;
    QLabel *textLabel1_3;
    QLabel *labelStatusMessage;

    void setupUi(QWidget *aimEditAccountUI)
    {
        if (aimEditAccountUI->objectName().isEmpty())
            aimEditAccountUI->setObjectName(QString::fromUtf8("aimEditAccountUI"));
        aimEditAccountUI->resize(507, 420);
        QSizePolicy sizePolicy(QSizePolicy::Preferred, QSizePolicy::Preferred);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(aimEditAccountUI->sizePolicy().hasHeightForWidth());
        aimEditAccountUI->setSizePolicy(sizePolicy);
        vboxLayout = new QVBoxLayout(aimEditAccountUI);
        vboxLayout->setObjectName(QString::fromUtf8("vboxLayout"));
        vboxLayout->setContentsMargins(0, 0, 0, 0);
        tabWidget6 = new QTabWidget(aimEditAccountUI);
        tabWidget6->setObjectName(QString::fromUtf8("tabWidget6"));
        basicSetupTab = new QWidget();
        basicSetupTab->setObjectName(QString::fromUtf8("basicSetupTab"));
        gridLayout = new QGridLayout(basicSetupTab);
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        gridLayout->setHorizontalSpacing(6);
        gridLayout->setVerticalSpacing(6);
        gridLayout->setContentsMargins(9, 9, 9, 9);
        spacerItem = new QSpacerItem(20, 0, QSizePolicy::Minimum, QSizePolicy::Expanding);

        gridLayout->addItem(spacerItem, 2, 0, 1, 1);

        registrationGroupBox = new QGroupBox(basicSetupTab);
        registrationGroupBox->setObjectName(QString::fromUtf8("registrationGroupBox"));
        gridLayout1 = new QGridLayout(registrationGroupBox);
        gridLayout1->setObjectName(QString::fromUtf8("gridLayout1"));
        gridLayout1->setHorizontalSpacing(6);
        gridLayout1->setVerticalSpacing(6);
        gridLayout1->setContentsMargins(9, 9, 9, 9);
        spacerItem1 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        gridLayout1->addItem(spacerItem1, 1, 0, 1, 1);

        spacerItem2 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        gridLayout1->addItem(spacerItem2, 1, 2, 1, 1);

        buttonRegister = new QPushButton(registrationGroupBox);
        buttonRegister->setObjectName(QString::fromUtf8("buttonRegister"));

        gridLayout1->addWidget(buttonRegister, 1, 1, 1, 1);

        textLabel6 = new QLabel(registrationGroupBox);
        textLabel6->setObjectName(QString::fromUtf8("textLabel6"));
        QSizePolicy sizePolicy1(QSizePolicy::MinimumExpanding, QSizePolicy::Minimum);
        sizePolicy1.setHorizontalStretch(0);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(textLabel6->sizePolicy().hasHeightForWidth());
        textLabel6->setSizePolicy(sizePolicy1);
        textLabel6->setMinimumSize(QSize(0, 0));
        textLabel6->setAlignment(Qt::AlignVCenter);
        textLabel6->setWordWrap(true);

        gridLayout1->addWidget(textLabel6, 0, 0, 1, 3);


        gridLayout->addWidget(registrationGroupBox, 1, 0, 1, 1);

        groupBox = new QGroupBox(basicSetupTab);
        groupBox->setObjectName(QString::fromUtf8("groupBox"));
        vboxLayout1 = new QVBoxLayout(groupBox);
        vboxLayout1->setSpacing(6);
        vboxLayout1->setObjectName(QString::fromUtf8("vboxLayout1"));
        vboxLayout1->setContentsMargins(9, 9, 9, 9);
        hboxLayout = new QHBoxLayout();
        hboxLayout->setSpacing(6);
        hboxLayout->setObjectName(QString::fromUtf8("hboxLayout"));
        hboxLayout->setContentsMargins(0, 0, 0, 0);
        lblAccountId = new QLabel(groupBox);
        lblAccountId->setObjectName(QString::fromUtf8("lblAccountId"));

        hboxLayout->addWidget(lblAccountId);

        edtAccountId = new QLineEdit(groupBox);
        edtAccountId->setObjectName(QString::fromUtf8("edtAccountId"));

        hboxLayout->addWidget(edtAccountId);


        vboxLayout1->addLayout(hboxLayout);

        mPasswordWidget = new Kopete::UI::PasswordWidget(groupBox);
        mPasswordWidget->setObjectName(QString::fromUtf8("mPasswordWidget"));

        vboxLayout1->addWidget(mPasswordWidget);

        mAutoLogon = new QCheckBox(groupBox);
        mAutoLogon->setObjectName(QString::fromUtf8("mAutoLogon"));

        vboxLayout1->addWidget(mAutoLogon);


        gridLayout->addWidget(groupBox, 0, 0, 1, 1);

        tabWidget6->addTab(basicSetupTab, QString());
        accountPreferencesTab = new QWidget();
        accountPreferencesTab->setObjectName(QString::fromUtf8("accountPreferencesTab"));
        vboxLayout2 = new QVBoxLayout(accountPreferencesTab);
        vboxLayout2->setSpacing(6);
        vboxLayout2->setObjectName(QString::fromUtf8("vboxLayout2"));
        vboxLayout2->setContentsMargins(9, 9, 9, 9);
        groupBox_3 = new QGroupBox(accountPreferencesTab);
        groupBox_3->setObjectName(QString::fromUtf8("groupBox_3"));
        vboxLayout3 = new QVBoxLayout(groupBox_3);
        vboxLayout3->setSpacing(6);
        vboxLayout3->setObjectName(QString::fromUtf8("vboxLayout3"));
        vboxLayout3->setContentsMargins(9, 9, 9, 9);
        optionOverrideServer = new QCheckBox(groupBox_3);
        optionOverrideServer->setObjectName(QString::fromUtf8("optionOverrideServer"));
        optionOverrideServer->setChecked(false);

        vboxLayout3->addWidget(optionOverrideServer);

        hboxLayout1 = new QHBoxLayout();
        hboxLayout1->setSpacing(6);
        hboxLayout1->setObjectName(QString::fromUtf8("hboxLayout1"));
        hboxLayout1->setContentsMargins(0, 0, 0, 0);
        spacerItem3 = new QSpacerItem(16, 20, QSizePolicy::Fixed, QSizePolicy::Minimum);

        hboxLayout1->addItem(spacerItem3);

        lblServer = new QLabel(groupBox_3);
        lblServer->setObjectName(QString::fromUtf8("lblServer"));
        lblServer->setEnabled(false);

        hboxLayout1->addWidget(lblServer);

        edtServerAddress = new QLineEdit(groupBox_3);
        edtServerAddress->setObjectName(QString::fromUtf8("edtServerAddress"));
        edtServerAddress->setEnabled(false);

        hboxLayout1->addWidget(edtServerAddress);

        lblPort = new QLabel(groupBox_3);
        lblPort->setObjectName(QString::fromUtf8("lblPort"));
        lblPort->setEnabled(false);

        hboxLayout1->addWidget(lblPort);

        sbxServerPort = new QSpinBox(groupBox_3);
        sbxServerPort->setObjectName(QString::fromUtf8("sbxServerPort"));
        sbxServerPort->setEnabled(false);
        sbxServerPort->setMinimum(1);
        sbxServerPort->setMaximum(65534);
        sbxServerPort->setValue(5190);

        hboxLayout1->addWidget(sbxServerPort);


        vboxLayout3->addLayout(hboxLayout1);


        vboxLayout2->addWidget(groupBox_3);

        groupBox_4 = new QGroupBox(accountPreferencesTab);
        groupBox_4->setObjectName(QString::fromUtf8("groupBox_4"));
        vboxLayout4 = new QVBoxLayout(groupBox_4);
        vboxLayout4->setSpacing(6);
        vboxLayout4->setObjectName(QString::fromUtf8("vboxLayout4"));
        vboxLayout4->setContentsMargins(9, 9, 9, 9);
        hboxLayout2 = new QHBoxLayout();
        hboxLayout2->setSpacing(6);
        hboxLayout2->setObjectName(QString::fromUtf8("hboxLayout2"));
        hboxLayout2->setContentsMargins(0, 0, 0, 0);
        lblPort1 = new QLabel(groupBox_4);
        lblPort1->setObjectName(QString::fromUtf8("lblPort1"));

        hboxLayout2->addWidget(lblPort1);

        sbxFirstPort = new QSpinBox(groupBox_4);
        sbxFirstPort->setObjectName(QString::fromUtf8("sbxFirstPort"));
        sbxFirstPort->setMinimum(1);
        sbxFirstPort->setMaximum(65534);
        sbxFirstPort->setValue(5190);

        hboxLayout2->addWidget(sbxFirstPort);

        sbxLastPort = new QSpinBox(groupBox_4);
        sbxLastPort->setObjectName(QString::fromUtf8("sbxLastPort"));
        sbxLastPort->setMinimum(1);
        sbxLastPort->setMaximum(65534);
        sbxLastPort->setValue(5199);

        hboxLayout2->addWidget(sbxLastPort);


        vboxLayout4->addLayout(hboxLayout2);

        chkFileProxy = new QCheckBox(groupBox_4);
        chkFileProxy->setObjectName(QString::fromUtf8("chkFileProxy"));

        vboxLayout4->addWidget(chkFileProxy);

        hboxLayout3 = new QHBoxLayout();
        hboxLayout3->setSpacing(6);
        hboxLayout3->setObjectName(QString::fromUtf8("hboxLayout3"));
        hboxLayout3->setContentsMargins(0, 0, 0, 0);
        lblTimeout = new QLabel(groupBox_4);
        lblTimeout->setObjectName(QString::fromUtf8("lblTimeout"));

        hboxLayout3->addWidget(lblTimeout);

        sbxTimeout = new QSpinBox(groupBox_4);
        sbxTimeout->setObjectName(QString::fromUtf8("sbxTimeout"));
        sbxTimeout->setMinimum(1);
        sbxTimeout->setMaximum(60);
        sbxTimeout->setValue(10);

        hboxLayout3->addWidget(sbxTimeout);


        vboxLayout4->addLayout(hboxLayout3);


        vboxLayout2->addWidget(groupBox_4);

        hboxLayout4 = new QHBoxLayout();
        hboxLayout4->setSpacing(6);
        hboxLayout4->setObjectName(QString::fromUtf8("hboxLayout4"));
        hboxLayout4->setContentsMargins(0, 0, 0, 0);
        textLabel1 = new QLabel(accountPreferencesTab);
        textLabel1->setObjectName(QString::fromUtf8("textLabel1"));
        textLabel1->setEnabled(false);

        hboxLayout4->addWidget(textLabel1);

        spacerItem4 = new QSpacerItem(10, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        hboxLayout4->addItem(spacerItem4);

        encodingCombo = new QComboBox(accountPreferencesTab);
        encodingCombo->setObjectName(QString::fromUtf8("encodingCombo"));
        encodingCombo->setEnabled(false);

        hboxLayout4->addWidget(encodingCombo);


        vboxLayout2->addLayout(hboxLayout4);

        spacerItem5 = new QSpacerItem(20, 0, QSizePolicy::Minimum, QSizePolicy::Expanding);

        vboxLayout2->addItem(spacerItem5);

        tabWidget6->addTab(accountPreferencesTab, QString());
        privacyTab = new QWidget();
        privacyTab->setObjectName(QString::fromUtf8("privacyTab"));
        vboxLayout5 = new QVBoxLayout(privacyTab);
        vboxLayout5->setSpacing(6);
        vboxLayout5->setObjectName(QString::fromUtf8("vboxLayout5"));
        vboxLayout5->setContentsMargins(9, 9, 9, 9);
        groupBox_41 = new QGroupBox(privacyTab);
        groupBox_41->setObjectName(QString::fromUtf8("groupBox_41"));
        gridLayout2 = new QGridLayout(groupBox_41);
        gridLayout2->setObjectName(QString::fromUtf8("gridLayout2"));
        gridLayout2->setHorizontalSpacing(6);
        gridLayout2->setVerticalSpacing(6);
        gridLayout2->setContentsMargins(9, 9, 9, 9);
        rbAllowPerimtList = new QRadioButton(groupBox_41);
        rbAllowPerimtList->setObjectName(QString::fromUtf8("rbAllowPerimtList"));

        gridLayout2->addWidget(rbAllowPerimtList, 2, 0, 1, 1);

        rbAllowMyContacts = new QRadioButton(groupBox_41);
        rbAllowMyContacts->setObjectName(QString::fromUtf8("rbAllowMyContacts"));

        gridLayout2->addWidget(rbAllowMyContacts, 1, 0, 1, 1);

        rbAllowAll = new QRadioButton(groupBox_41);
        rbAllowAll->setObjectName(QString::fromUtf8("rbAllowAll"));

        gridLayout2->addWidget(rbAllowAll, 0, 0, 1, 1);

        rbBlockAll = new QRadioButton(groupBox_41);
        rbBlockAll->setObjectName(QString::fromUtf8("rbBlockAll"));

        gridLayout2->addWidget(rbBlockAll, 0, 1, 1, 1);

        rbBlockAIM = new QRadioButton(groupBox_41);
        rbBlockAIM->setObjectName(QString::fromUtf8("rbBlockAIM"));

        gridLayout2->addWidget(rbBlockAIM, 1, 1, 1, 1);

        rbBlockDenyList = new QRadioButton(groupBox_41);
        rbBlockDenyList->setObjectName(QString::fromUtf8("rbBlockDenyList"));

        gridLayout2->addWidget(rbBlockDenyList, 2, 1, 1, 1);


        vboxLayout5->addWidget(groupBox_41);

        spacerItem6 = new QSpacerItem(20, 0, QSizePolicy::Minimum, QSizePolicy::Expanding);

        vboxLayout5->addItem(spacerItem6);

        tabWidget6->addTab(privacyTab, QString());
        visibleTab = new QWidget();
        visibleTab->setObjectName(QString::fromUtf8("visibleTab"));
        gridLayout3 = new QGridLayout(visibleTab);
        gridLayout3->setObjectName(QString::fromUtf8("gridLayout3"));
        gridLayout3->setHorizontalSpacing(6);
        gridLayout3->setVerticalSpacing(6);
        gridLayout3->setContentsMargins(9, 9, 9, 9);
        textLabel2 = new QLabel(visibleTab);
        textLabel2->setObjectName(QString::fromUtf8("textLabel2"));

        gridLayout3->addWidget(textLabel2, 0, 0, 1, 2);

        visibleAdd = new QPushButton(visibleTab);
        visibleAdd->setObjectName(QString::fromUtf8("visibleAdd"));

        gridLayout3->addWidget(visibleAdd, 2, 0, 1, 1);

        visibleRemove = new QPushButton(visibleTab);
        visibleRemove->setObjectName(QString::fromUtf8("visibleRemove"));

        gridLayout3->addWidget(visibleRemove, 2, 1, 1, 1);

        textLabel1_2 = new QLabel(visibleTab);
        textLabel1_2->setObjectName(QString::fromUtf8("textLabel1_2"));

        gridLayout3->addWidget(textLabel1_2, 3, 0, 1, 2);

        visibleAllContacts = new QComboBox(visibleTab);
        visibleAllContacts->setObjectName(QString::fromUtf8("visibleAllContacts"));
        visibleAllContacts->setEditable(true);
        visibleAllContacts->setInsertPolicy(QComboBox::NoInsert);

        gridLayout3->addWidget(visibleAllContacts, 4, 0, 1, 2);

        visibleContacts = new QListView(visibleTab);
        visibleContacts->setObjectName(QString::fromUtf8("visibleContacts"));

        gridLayout3->addWidget(visibleContacts, 1, 0, 1, 2);

        tabWidget6->addTab(visibleTab, QString());
        invisibleTab = new QWidget();
        invisibleTab->setObjectName(QString::fromUtf8("invisibleTab"));
        gridLayout4 = new QGridLayout(invisibleTab);
        gridLayout4->setObjectName(QString::fromUtf8("gridLayout4"));
        gridLayout4->setHorizontalSpacing(6);
        gridLayout4->setVerticalSpacing(6);
        gridLayout4->setContentsMargins(9, 9, 9, 9);
        textLabel2_2 = new QLabel(invisibleTab);
        textLabel2_2->setObjectName(QString::fromUtf8("textLabel2_2"));

        gridLayout4->addWidget(textLabel2_2, 0, 0, 1, 2);

        invisibleContacts = new QListView(invisibleTab);
        invisibleContacts->setObjectName(QString::fromUtf8("invisibleContacts"));

        gridLayout4->addWidget(invisibleContacts, 1, 0, 1, 2);

        invisibleAllContacts = new QComboBox(invisibleTab);
        invisibleAllContacts->setObjectName(QString::fromUtf8("invisibleAllContacts"));
        invisibleAllContacts->setEditable(true);
        invisibleAllContacts->setInsertPolicy(QComboBox::NoInsert);

        gridLayout4->addWidget(invisibleAllContacts, 4, 0, 1, 2);

        invisibleRemove = new QPushButton(invisibleTab);
        invisibleRemove->setObjectName(QString::fromUtf8("invisibleRemove"));

        gridLayout4->addWidget(invisibleRemove, 2, 1, 1, 1);

        invisibleAdd = new QPushButton(invisibleTab);
        invisibleAdd->setObjectName(QString::fromUtf8("invisibleAdd"));

        gridLayout4->addWidget(invisibleAdd, 2, 0, 1, 1);

        textLabel1_3 = new QLabel(invisibleTab);
        textLabel1_3->setObjectName(QString::fromUtf8("textLabel1_3"));

        gridLayout4->addWidget(textLabel1_3, 3, 0, 1, 2);

        tabWidget6->addTab(invisibleTab, QString());

        vboxLayout->addWidget(tabWidget6);

        labelStatusMessage = new QLabel(aimEditAccountUI);
        labelStatusMessage->setObjectName(QString::fromUtf8("labelStatusMessage"));
        labelStatusMessage->setAlignment(Qt::AlignCenter);

        vboxLayout->addWidget(labelStatusMessage);

#ifndef UI_QT_NO_SHORTCUT
        lblAccountId->setBuddy(edtAccountId);
        lblServer->setBuddy(edtServerAddress);
        lblPort->setBuddy(sbxServerPort);
        lblPort1->setBuddy(sbxFirstPort);
        lblTimeout->setBuddy(sbxTimeout);
        textLabel1->setBuddy(encodingCombo);
#endif // QT_NO_SHORTCUT
        QWidget::setTabOrder(tabWidget6, edtAccountId);
        QWidget::setTabOrder(edtAccountId, mAutoLogon);
        QWidget::setTabOrder(mAutoLogon, buttonRegister);
        QWidget::setTabOrder(buttonRegister, optionOverrideServer);
        QWidget::setTabOrder(optionOverrideServer, edtServerAddress);
        QWidget::setTabOrder(edtServerAddress, sbxServerPort);
        QWidget::setTabOrder(sbxServerPort, sbxFirstPort);
        QWidget::setTabOrder(sbxFirstPort, sbxLastPort);
        QWidget::setTabOrder(sbxLastPort, chkFileProxy);
        QWidget::setTabOrder(chkFileProxy, sbxTimeout);
        QWidget::setTabOrder(sbxTimeout, encodingCombo);
        QWidget::setTabOrder(encodingCombo, rbAllowAll);
        QWidget::setTabOrder(rbAllowAll, rbAllowMyContacts);
        QWidget::setTabOrder(rbAllowMyContacts, rbAllowPerimtList);
        QWidget::setTabOrder(rbAllowPerimtList, rbBlockAll);
        QWidget::setTabOrder(rbBlockAll, rbBlockAIM);
        QWidget::setTabOrder(rbBlockAIM, rbBlockDenyList);
        QWidget::setTabOrder(rbBlockDenyList, visibleContacts);
        QWidget::setTabOrder(visibleContacts, visibleAdd);
        QWidget::setTabOrder(visibleAdd, visibleRemove);
        QWidget::setTabOrder(visibleRemove, visibleAllContacts);
        QWidget::setTabOrder(visibleAllContacts, invisibleContacts);
        QWidget::setTabOrder(invisibleContacts, invisibleAdd);
        QWidget::setTabOrder(invisibleAdd, invisibleRemove);
        QWidget::setTabOrder(invisibleRemove, invisibleAllContacts);

        retranslateUi(aimEditAccountUI);
        QObject::connect(optionOverrideServer, SIGNAL(toggled(bool)), lblServer, SLOT(setEnabled(bool)));
        QObject::connect(optionOverrideServer, SIGNAL(toggled(bool)), edtServerAddress, SLOT(setEnabled(bool)));
        QObject::connect(optionOverrideServer, SIGNAL(toggled(bool)), lblPort, SLOT(setEnabled(bool)));
        QObject::connect(optionOverrideServer, SIGNAL(toggled(bool)), sbxServerPort, SLOT(setEnabled(bool)));

        tabWidget6->setCurrentIndex(0);


        QMetaObject::connectSlotsByName(aimEditAccountUI);
    } // setupUi

    void retranslateUi(QWidget *aimEditAccountUI)
    {
        aimEditAccountUI->setWindowTitle(tr2i18n("Account Preferences - AIM", 0));
        registrationGroupBox->setTitle(tr2i18n("Registration", 0));
        buttonRegister->setText(tr2i18n("Re&gister New Account", 0));
        textLabel6->setText(tr2i18n("To connect to the AOL Instant Messaging network, you will need to use a screen name from AIM, AOL, or .Mac.<br><br>If you do not currently have an AIM screen name, please click the button to create one.", 0));
        groupBox->setTitle(tr2i18n("Account Information", 0));
#ifndef UI_QT_NO_TOOLTIP
        lblAccountId->setToolTip(tr2i18n("The screen name of your AIM account.", 0));
#endif // QT_NO_TOOLTIP
#ifndef UI_QT_NO_WHATSTHIS
        lblAccountId->setWhatsThis(tr2i18n("The screen name of your AIM account.  This should be in the form of an alphanumeric string (spaces allowed, not case sensitive).", 0));
#endif // QT_NO_WHATSTHIS
        lblAccountId->setText(tr2i18n("AIM &screen name:", 0));
#ifndef UI_QT_NO_TOOLTIP
        edtAccountId->setToolTip(tr2i18n("The screen name of your AIM account.", 0));
#endif // QT_NO_TOOLTIP
#ifndef UI_QT_NO_WHATSTHIS
        edtAccountId->setWhatsThis(tr2i18n("The screen name of your AIM account.  This should be in the form of an alphanumeric string (spaces allowed, not case sensitive).", 0));
#endif // QT_NO_WHATSTHIS
#ifndef UI_QT_NO_WHATSTHIS
        mAutoLogon->setWhatsThis(tr2i18n("If you enable this option, this account will not be connected when you press the \"Connect All\" button, nor at startup even if you have enabled automatic connection at startup.", 0));
#endif // QT_NO_WHATSTHIS
        mAutoLogon->setText(tr2i18n("E&xclude from connect all", 0));
        tabWidget6->setTabText(tabWidget6->indexOf(basicSetupTab), tr2i18n("&Basic Setup", 0));
        groupBox_3->setTitle(tr2i18n("Connection Preferences", 0));
        optionOverrideServer->setText(tr2i18n("&Override default server information", 0));
#ifndef UI_QT_NO_TOOLTIP
        lblServer->setToolTip(tr2i18n("The IP address or hostmask of the AIM server you wish to connect to.", 0));
#endif // QT_NO_TOOLTIP
#ifndef UI_QT_NO_WHATSTHIS
        lblServer->setWhatsThis(tr2i18n("The IP address or hostmask of the AIM server you wish to connect to.  Normally you will want the default (login.oscar.aol.com).", 0));
#endif // QT_NO_WHATSTHIS
        lblServer->setText(tr2i18n("Ser&ver:", 0));
#ifndef UI_QT_NO_TOOLTIP
        edtServerAddress->setToolTip(tr2i18n("The IP address or hostmask of the AIM server you wish to connect to.", 0));
#endif // QT_NO_TOOLTIP
#ifndef UI_QT_NO_WHATSTHIS
        edtServerAddress->setWhatsThis(tr2i18n("The IP address or hostmask of the AIM server you wish to connect to.  Normally you will want the default (login.oscar.aol.com).", 0));
#endif // QT_NO_WHATSTHIS
        edtServerAddress->setText(tr2i18n("login.oscar.aol.com", 0));
#ifndef UI_QT_NO_TOOLTIP
        lblPort->setToolTip(tr2i18n("The port on the AIM server that you would like to connect to.", 0));
#endif // QT_NO_TOOLTIP
#ifndef UI_QT_NO_WHATSTHIS
        lblPort->setWhatsThis(tr2i18n("The port on the AIM server that you would like to connect to.  Normally this is 5190.", 0));
#endif // QT_NO_WHATSTHIS
        lblPort->setText(tr2i18n("Po&rt:", 0));
#ifndef UI_QT_NO_TOOLTIP
        sbxServerPort->setToolTip(tr2i18n("The port on the AIM server that you would like to connect to.", 0));
#endif // QT_NO_TOOLTIP
#ifndef UI_QT_NO_WHATSTHIS
        sbxServerPort->setWhatsThis(tr2i18n("The port on the AIM server that you would like to connect to.  Normally this is 5190.", 0));
#endif // QT_NO_WHATSTHIS
        groupBox_4->setTitle(tr2i18n("Direct Connect Options", 0));
#ifndef UI_QT_NO_TOOLTIP
        lblPort1->setToolTip(tr2i18n("The ports to use for direct connections.", 0));
#endif // QT_NO_TOOLTIP
#ifndef UI_QT_NO_WHATSTHIS
        lblPort1->setWhatsThis(tr2i18n("The ports to use when listening for direct connections. These must not be blocked by a firewall or router.", 0));
#endif // QT_NO_WHATSTHIS
        lblPort1->setText(tr2i18n("Po&rt range:", 0));
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
        tabWidget6->setTabText(tabWidget6->indexOf(accountPreferencesTab), tr2i18n("Accou&nt Preferences", 0));
        groupBox_41->setTitle(tr2i18n("Visibility Settings", 0));
        rbAllowPerimtList->setText(tr2i18n("Allow only from visible list", 0));
        rbAllowMyContacts->setText(tr2i18n("Allow only contact list's users", 0));
        rbAllowAll->setText(tr2i18n("Allow all users", 0));
        rbBlockAll->setText(tr2i18n("Block all users", 0));
        rbBlockAIM->setText(tr2i18n("Block AIM users", 0));
        rbBlockDenyList->setText(tr2i18n("Block only from invisible list", 0));
        tabWidget6->setTabText(tabWidget6->indexOf(privacyTab), tr2i18n("Pri&vacy", 0));
        textLabel2->setText(tr2i18n("Always visible:", 0));
        visibleAdd->setText(tr2i18n("Add", 0));
        visibleRemove->setText(tr2i18n("Remove", 0));
        textLabel1_2->setText(tr2i18n("Contact to add:", 0));
        tabWidget6->setTabText(tabWidget6->indexOf(visibleTab), tr2i18n("Visible", 0));
        textLabel2_2->setText(tr2i18n("Always invisible:", 0));
        invisibleRemove->setText(tr2i18n("Remove", 0));
        invisibleAdd->setText(tr2i18n("Add", 0));
        textLabel1_3->setText(tr2i18n("Contact to add:", 0));
        tabWidget6->setTabText(tabWidget6->indexOf(invisibleTab), tr2i18n("Invisible", 0));
        labelStatusMessage->setText(QString());
    } // retranslateUi

};

namespace Ui {
    class aimEditAccountUI: public Ui_aimEditAccountUI {};
} // namespace Ui

QT_END_NAMESPACE

#endif // AIMEDITACCOUNTUI_H

