#include <kdialog.h>
#include <klocale.h>

/********************************************************************************
** Form generated from reading UI file 'skypeeditaccountbase.ui'
**
** Created by: Qt User Interface Compiler version 4.8.7
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_SKYPEEDITACCOUNTBASE_H
#define UI_SKYPEEDITACCOUNTBASE_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtGui/QApplication>
#include <QtGui/QButtonGroup>
#include <QtGui/QCheckBox>
#include <QtGui/QGroupBox>
#include <QtGui/QHBoxLayout>
#include <QtGui/QHeaderView>
#include <QtGui/QLabel>
#include <QtGui/QLineEdit>
#include <QtGui/QPushButton>
#include <QtGui/QRadioButton>
#include <QtGui/QSpacerItem>
#include <QtGui/QSpinBox>
#include <QtGui/QTabWidget>
#include <QtGui/QVBoxLayout>
#include <QtGui/QWidget>

QT_BEGIN_NAMESPACE

class Ui_SkypeEditAccountBase
{
public:
    QVBoxLayout *vboxLayout;
    QTabWidget *TabWidget;
    QWidget *basicSetupTab;
    QVBoxLayout *vboxLayout1;
    QGroupBox *groupBox1;
    QVBoxLayout *vboxLayout2;
    QHBoxLayout *hboxLayout;
    QCheckBox *excludeCheck;
    QSpacerItem *spacer7;
    QGroupBox *groupBox3;
    QVBoxLayout *vboxLayout3;
    QLabel *textLabel3;
    QPushButton *configureSkypeClient;
    QSpacerItem *spacer10_2;
    QWidget *launchTab;
    QVBoxLayout *vboxLayout4;
    QGroupBox *LaunchGroup;
    QVBoxLayout *vboxLayout5;
    QRadioButton *LaunchNeededRadio;
    QRadioButton *LaunchNeverRadio;
    QHBoxLayout *hboxLayout1;
    QLabel *textLabel1;
    QLineEdit *CommandEdit;
    QHBoxLayout *hboxLayout2;
    QLabel *textLabel1_4;
    QSpinBox *LaunchSpin;
    QLabel *textLabel2_3;
    QSpacerItem *spacer23;
    QHBoxLayout *hboxLayout3;
    QLabel *textLabel2_4;
    QSpinBox *WaitSpin;
    QLabel *textLabel1_5;
    QSpacerItem *spacer21;
    QLabel *textLabel2;
    QSpacerItem *spacer8;
    QWidget *connectionTab;
    QVBoxLayout *vboxLayout6;
    QGroupBox *groupBox3_2;
    QVBoxLayout *vboxLayout7;
    QCheckBox *AuthorCheck;
    QLineEdit *AuthorEdit;
    QGroupBox *BusGroup;
    QHBoxLayout *hboxLayout4;
    QRadioButton *radioButton4;
    QRadioButton *radioButton5;
    QLabel *textLabel1_2;
    QSpacerItem *spacer7_2;
    QWidget *activityTab;
    QVBoxLayout *vboxLayout8;
    QCheckBox *HitchCheck;
    QCheckBox *MarkCheck;
    QCheckBox *ScanCheck;
    QCheckBox *CallCheck;
    QHBoxLayout *hboxLayout5;
    QSpacerItem *spacer9;
    QCheckBox *AutoCloseCallCheck;
    QSpacerItem *spacer14;
    QHBoxLayout *hboxLayout6;
    QSpacerItem *spacer10;
    QLabel *textLabel1_3;
    QSpinBox *CloseTimeoutSpin;
    QLabel *textLabel2_2;
    QSpacerItem *spacer12;
    QCheckBox *PingsCheck;
    QCheckBox *LeaveCheck;
    QSpacerItem *spacer13;
    QWidget *callsTab;
    QVBoxLayout *vboxLayout9;
    QCheckBox *StartCallCommandCheck;
    QHBoxLayout *hboxLayout7;
    QSpacerItem *spacer12_2;
    QLineEdit *StartCallCommandEdit;
    QHBoxLayout *hboxLayout8;
    QSpacerItem *spacer13_2;
    QCheckBox *WaitForStartCallCommandCheck;
    QCheckBox *EndCallCommandCheck;
    QHBoxLayout *hboxLayout9;
    QSpacerItem *spacer14_2;
    QLineEdit *EndCallCommandEdit;
    QHBoxLayout *hboxLayout10;
    QSpacerItem *spacer15;
    QCheckBox *OnlyLastCallCommandCheck;
    QCheckBox *IncomingCommandCheck;
    QHBoxLayout *hboxLayout11;
    QSpacerItem *spacer15_2;
    QLineEdit *IncomingCommandEdit;
    QSpacerItem *spacer16;

    void setupUi(QWidget *SkypeEditAccountBase)
    {
        if (SkypeEditAccountBase->objectName().isEmpty())
            SkypeEditAccountBase->setObjectName(QString::fromUtf8("SkypeEditAccountBase"));
        SkypeEditAccountBase->resize(561, 414);
        vboxLayout = new QVBoxLayout(SkypeEditAccountBase);
        vboxLayout->setObjectName(QString::fromUtf8("vboxLayout"));
        TabWidget = new QTabWidget(SkypeEditAccountBase);
        TabWidget->setObjectName(QString::fromUtf8("TabWidget"));
        basicSetupTab = new QWidget();
        basicSetupTab->setObjectName(QString::fromUtf8("basicSetupTab"));
        vboxLayout1 = new QVBoxLayout(basicSetupTab);
        vboxLayout1->setObjectName(QString::fromUtf8("vboxLayout1"));
        groupBox1 = new QGroupBox(basicSetupTab);
        groupBox1->setObjectName(QString::fromUtf8("groupBox1"));
        vboxLayout2 = new QVBoxLayout(groupBox1);
        vboxLayout2->setObjectName(QString::fromUtf8("vboxLayout2"));
        hboxLayout = new QHBoxLayout();
        hboxLayout->setObjectName(QString::fromUtf8("hboxLayout"));
        excludeCheck = new QCheckBox(groupBox1);
        excludeCheck->setObjectName(QString::fromUtf8("excludeCheck"));

        hboxLayout->addWidget(excludeCheck);

        spacer7 = new QSpacerItem(71, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        hboxLayout->addItem(spacer7);


        vboxLayout2->addLayout(hboxLayout);


        vboxLayout1->addWidget(groupBox1);

        groupBox3 = new QGroupBox(basicSetupTab);
        groupBox3->setObjectName(QString::fromUtf8("groupBox3"));
        vboxLayout3 = new QVBoxLayout(groupBox3);
        vboxLayout3->setObjectName(QString::fromUtf8("vboxLayout3"));
        textLabel3 = new QLabel(groupBox3);
        textLabel3->setObjectName(QString::fromUtf8("textLabel3"));
        textLabel3->setTextFormat(Qt::RichText);
        textLabel3->setWordWrap(true);

        vboxLayout3->addWidget(textLabel3);


        vboxLayout1->addWidget(groupBox3);

        configureSkypeClient = new QPushButton(basicSetupTab);
        configureSkypeClient->setObjectName(QString::fromUtf8("configureSkypeClient"));

        vboxLayout1->addWidget(configureSkypeClient);

        spacer10_2 = new QSpacerItem(20, 0, QSizePolicy::Minimum, QSizePolicy::MinimumExpanding);

        vboxLayout1->addItem(spacer10_2);

        TabWidget->addTab(basicSetupTab, QString());
        launchTab = new QWidget();
        launchTab->setObjectName(QString::fromUtf8("launchTab"));
        vboxLayout4 = new QVBoxLayout(launchTab);
        vboxLayout4->setObjectName(QString::fromUtf8("vboxLayout4"));
        LaunchGroup = new QGroupBox(launchTab);
        LaunchGroup->setObjectName(QString::fromUtf8("LaunchGroup"));
        vboxLayout5 = new QVBoxLayout(LaunchGroup);
        vboxLayout5->setObjectName(QString::fromUtf8("vboxLayout5"));
        LaunchNeededRadio = new QRadioButton(LaunchGroup);
        LaunchNeededRadio->setObjectName(QString::fromUtf8("LaunchNeededRadio"));
        LaunchNeededRadio->setChecked(true);

        vboxLayout5->addWidget(LaunchNeededRadio);

        LaunchNeverRadio = new QRadioButton(LaunchGroup);
        LaunchNeverRadio->setObjectName(QString::fromUtf8("LaunchNeverRadio"));

        vboxLayout5->addWidget(LaunchNeverRadio);


        vboxLayout4->addWidget(LaunchGroup);

        hboxLayout1 = new QHBoxLayout();
        hboxLayout1->setObjectName(QString::fromUtf8("hboxLayout1"));
        textLabel1 = new QLabel(launchTab);
        textLabel1->setObjectName(QString::fromUtf8("textLabel1"));
        textLabel1->setWordWrap(false);

        hboxLayout1->addWidget(textLabel1);

        CommandEdit = new QLineEdit(launchTab);
        CommandEdit->setObjectName(QString::fromUtf8("CommandEdit"));

        hboxLayout1->addWidget(CommandEdit);


        vboxLayout4->addLayout(hboxLayout1);

        hboxLayout2 = new QHBoxLayout();
        hboxLayout2->setObjectName(QString::fromUtf8("hboxLayout2"));
        textLabel1_4 = new QLabel(launchTab);
        textLabel1_4->setObjectName(QString::fromUtf8("textLabel1_4"));
        textLabel1_4->setWordWrap(false);

        hboxLayout2->addWidget(textLabel1_4);

        LaunchSpin = new QSpinBox(launchTab);
        LaunchSpin->setObjectName(QString::fromUtf8("LaunchSpin"));
        LaunchSpin->setMinimum(3);
        LaunchSpin->setMaximum(180);
        LaunchSpin->setValue(70);

        hboxLayout2->addWidget(LaunchSpin);

        textLabel2_3 = new QLabel(launchTab);
        textLabel2_3->setObjectName(QString::fromUtf8("textLabel2_3"));
        textLabel2_3->setWordWrap(false);

        hboxLayout2->addWidget(textLabel2_3);

        spacer23 = new QSpacerItem(151, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        hboxLayout2->addItem(spacer23);


        vboxLayout4->addLayout(hboxLayout2);

        hboxLayout3 = new QHBoxLayout();
        hboxLayout3->setObjectName(QString::fromUtf8("hboxLayout3"));
        textLabel2_4 = new QLabel(launchTab);
        textLabel2_4->setObjectName(QString::fromUtf8("textLabel2_4"));
        textLabel2_4->setWordWrap(false);

        hboxLayout3->addWidget(textLabel2_4);

        WaitSpin = new QSpinBox(launchTab);
        WaitSpin->setObjectName(QString::fromUtf8("WaitSpin"));
        WaitSpin->setMinimum(0);
        WaitSpin->setMaximum(120);
        WaitSpin->setValue(0);

        hboxLayout3->addWidget(WaitSpin);

        textLabel1_5 = new QLabel(launchTab);
        textLabel1_5->setObjectName(QString::fromUtf8("textLabel1_5"));
        textLabel1_5->setWordWrap(false);

        hboxLayout3->addWidget(textLabel1_5);

        spacer21 = new QSpacerItem(218, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        hboxLayout3->addItem(spacer21);


        vboxLayout4->addLayout(hboxLayout3);

        textLabel2 = new QLabel(launchTab);
        textLabel2->setObjectName(QString::fromUtf8("textLabel2"));
        textLabel2->setTextFormat(Qt::RichText);
        textLabel2->setWordWrap(true);

        vboxLayout4->addWidget(textLabel2);

        spacer8 = new QSpacerItem(20, 30, QSizePolicy::Minimum, QSizePolicy::Expanding);

        vboxLayout4->addItem(spacer8);

        TabWidget->addTab(launchTab, QString());
        connectionTab = new QWidget();
        connectionTab->setObjectName(QString::fromUtf8("connectionTab"));
        vboxLayout6 = new QVBoxLayout(connectionTab);
        vboxLayout6->setObjectName(QString::fromUtf8("vboxLayout6"));
        groupBox3_2 = new QGroupBox(connectionTab);
        groupBox3_2->setObjectName(QString::fromUtf8("groupBox3_2"));
        vboxLayout7 = new QVBoxLayout(groupBox3_2);
        vboxLayout7->setObjectName(QString::fromUtf8("vboxLayout7"));
        AuthorCheck = new QCheckBox(groupBox3_2);
        AuthorCheck->setObjectName(QString::fromUtf8("AuthorCheck"));

        vboxLayout7->addWidget(AuthorCheck);

        AuthorEdit = new QLineEdit(groupBox3_2);
        AuthorEdit->setObjectName(QString::fromUtf8("AuthorEdit"));
        AuthorEdit->setEnabled(false);

        vboxLayout7->addWidget(AuthorEdit);


        vboxLayout6->addWidget(groupBox3_2);

        BusGroup = new QGroupBox(connectionTab);
        BusGroup->setObjectName(QString::fromUtf8("BusGroup"));
        hboxLayout4 = new QHBoxLayout(BusGroup);
        hboxLayout4->setObjectName(QString::fromUtf8("hboxLayout4"));
        radioButton4 = new QRadioButton(BusGroup);
        radioButton4->setObjectName(QString::fromUtf8("radioButton4"));
        radioButton4->setChecked(true);

        hboxLayout4->addWidget(radioButton4);

        radioButton5 = new QRadioButton(BusGroup);
        radioButton5->setObjectName(QString::fromUtf8("radioButton5"));

        hboxLayout4->addWidget(radioButton5);


        vboxLayout6->addWidget(BusGroup);

        textLabel1_2 = new QLabel(connectionTab);
        textLabel1_2->setObjectName(QString::fromUtf8("textLabel1_2"));
        textLabel1_2->setTextFormat(Qt::RichText);
        textLabel1_2->setWordWrap(true);

        vboxLayout6->addWidget(textLabel1_2);

        spacer7_2 = new QSpacerItem(20, 50, QSizePolicy::Minimum, QSizePolicy::Expanding);

        vboxLayout6->addItem(spacer7_2);

        TabWidget->addTab(connectionTab, QString());
        activityTab = new QWidget();
        activityTab->setObjectName(QString::fromUtf8("activityTab"));
        vboxLayout8 = new QVBoxLayout(activityTab);
        vboxLayout8->setObjectName(QString::fromUtf8("vboxLayout8"));
        HitchCheck = new QCheckBox(activityTab);
        HitchCheck->setObjectName(QString::fromUtf8("HitchCheck"));
        HitchCheck->setChecked(true);

        vboxLayout8->addWidget(HitchCheck);

        MarkCheck = new QCheckBox(activityTab);
        MarkCheck->setObjectName(QString::fromUtf8("MarkCheck"));
        MarkCheck->setChecked(true);

        vboxLayout8->addWidget(MarkCheck);

        ScanCheck = new QCheckBox(activityTab);
        ScanCheck->setObjectName(QString::fromUtf8("ScanCheck"));
        ScanCheck->setChecked(true);

        vboxLayout8->addWidget(ScanCheck);

        CallCheck = new QCheckBox(activityTab);
        CallCheck->setObjectName(QString::fromUtf8("CallCheck"));
        CallCheck->setChecked(true);

        vboxLayout8->addWidget(CallCheck);

        hboxLayout5 = new QHBoxLayout();
        hboxLayout5->setObjectName(QString::fromUtf8("hboxLayout5"));
        spacer9 = new QSpacerItem(20, 20, QSizePolicy::Fixed, QSizePolicy::Minimum);

        hboxLayout5->addItem(spacer9);

        AutoCloseCallCheck = new QCheckBox(activityTab);
        AutoCloseCallCheck->setObjectName(QString::fromUtf8("AutoCloseCallCheck"));
        AutoCloseCallCheck->setChecked(true);

        hboxLayout5->addWidget(AutoCloseCallCheck);

        spacer14 = new QSpacerItem(361, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        hboxLayout5->addItem(spacer14);


        vboxLayout8->addLayout(hboxLayout5);

        hboxLayout6 = new QHBoxLayout();
        hboxLayout6->setObjectName(QString::fromUtf8("hboxLayout6"));
        spacer10 = new QSpacerItem(31, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        hboxLayout6->addItem(spacer10);

        textLabel1_3 = new QLabel(activityTab);
        textLabel1_3->setObjectName(QString::fromUtf8("textLabel1_3"));
        QSizePolicy sizePolicy(QSizePolicy::Preferred, QSizePolicy::Fixed);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(textLabel1_3->sizePolicy().hasHeightForWidth());
        textLabel1_3->setSizePolicy(sizePolicy);
        textLabel1_3->setWordWrap(false);

        hboxLayout6->addWidget(textLabel1_3);

        CloseTimeoutSpin = new QSpinBox(activityTab);
        CloseTimeoutSpin->setObjectName(QString::fromUtf8("CloseTimeoutSpin"));
        QSizePolicy sizePolicy1(QSizePolicy::Expanding, QSizePolicy::Fixed);
        sizePolicy1.setHorizontalStretch(0);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(CloseTimeoutSpin->sizePolicy().hasHeightForWidth());
        CloseTimeoutSpin->setSizePolicy(sizePolicy1);
        CloseTimeoutSpin->setMinimum(1);
        CloseTimeoutSpin->setMaximum(120);
        CloseTimeoutSpin->setValue(4);

        hboxLayout6->addWidget(CloseTimeoutSpin);

        textLabel2_2 = new QLabel(activityTab);
        textLabel2_2->setObjectName(QString::fromUtf8("textLabel2_2"));
        sizePolicy.setHeightForWidth(textLabel2_2->sizePolicy().hasHeightForWidth());
        textLabel2_2->setSizePolicy(sizePolicy);
        textLabel2_2->setWordWrap(false);

        hboxLayout6->addWidget(textLabel2_2);

        spacer12 = new QSpacerItem(301, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        hboxLayout6->addItem(spacer12);


        vboxLayout8->addLayout(hboxLayout6);

        PingsCheck = new QCheckBox(activityTab);
        PingsCheck->setObjectName(QString::fromUtf8("PingsCheck"));
        PingsCheck->setChecked(true);

        vboxLayout8->addWidget(PingsCheck);

        LeaveCheck = new QCheckBox(activityTab);
        LeaveCheck->setObjectName(QString::fromUtf8("LeaveCheck"));
        LeaveCheck->setChecked(true);

        vboxLayout8->addWidget(LeaveCheck);

        spacer13 = new QSpacerItem(20, 70, QSizePolicy::Minimum, QSizePolicy::Expanding);

        vboxLayout8->addItem(spacer13);

        TabWidget->addTab(activityTab, QString());
        callsTab = new QWidget();
        callsTab->setObjectName(QString::fromUtf8("callsTab"));
        vboxLayout9 = new QVBoxLayout(callsTab);
        vboxLayout9->setObjectName(QString::fromUtf8("vboxLayout9"));
        StartCallCommandCheck = new QCheckBox(callsTab);
        StartCallCommandCheck->setObjectName(QString::fromUtf8("StartCallCommandCheck"));

        vboxLayout9->addWidget(StartCallCommandCheck);

        hboxLayout7 = new QHBoxLayout();
        hboxLayout7->setObjectName(QString::fromUtf8("hboxLayout7"));
        spacer12_2 = new QSpacerItem(20, 20, QSizePolicy::Fixed, QSizePolicy::Minimum);

        hboxLayout7->addItem(spacer12_2);

        StartCallCommandEdit = new QLineEdit(callsTab);
        StartCallCommandEdit->setObjectName(QString::fromUtf8("StartCallCommandEdit"));
        StartCallCommandEdit->setEnabled(false);

        hboxLayout7->addWidget(StartCallCommandEdit);


        vboxLayout9->addLayout(hboxLayout7);

        hboxLayout8 = new QHBoxLayout();
        hboxLayout8->setObjectName(QString::fromUtf8("hboxLayout8"));
        spacer13_2 = new QSpacerItem(20, 20, QSizePolicy::Fixed, QSizePolicy::Minimum);

        hboxLayout8->addItem(spacer13_2);

        WaitForStartCallCommandCheck = new QCheckBox(callsTab);
        WaitForStartCallCommandCheck->setObjectName(QString::fromUtf8("WaitForStartCallCommandCheck"));
        WaitForStartCallCommandCheck->setEnabled(false);

        hboxLayout8->addWidget(WaitForStartCallCommandCheck);


        vboxLayout9->addLayout(hboxLayout8);

        EndCallCommandCheck = new QCheckBox(callsTab);
        EndCallCommandCheck->setObjectName(QString::fromUtf8("EndCallCommandCheck"));

        vboxLayout9->addWidget(EndCallCommandCheck);

        hboxLayout9 = new QHBoxLayout();
        hboxLayout9->setObjectName(QString::fromUtf8("hboxLayout9"));
        spacer14_2 = new QSpacerItem(20, 20, QSizePolicy::Fixed, QSizePolicy::Minimum);

        hboxLayout9->addItem(spacer14_2);

        EndCallCommandEdit = new QLineEdit(callsTab);
        EndCallCommandEdit->setObjectName(QString::fromUtf8("EndCallCommandEdit"));
        EndCallCommandEdit->setEnabled(false);

        hboxLayout9->addWidget(EndCallCommandEdit);


        vboxLayout9->addLayout(hboxLayout9);

        hboxLayout10 = new QHBoxLayout();
        hboxLayout10->setObjectName(QString::fromUtf8("hboxLayout10"));
        spacer15 = new QSpacerItem(20, 20, QSizePolicy::Fixed, QSizePolicy::Minimum);

        hboxLayout10->addItem(spacer15);

        OnlyLastCallCommandCheck = new QCheckBox(callsTab);
        OnlyLastCallCommandCheck->setObjectName(QString::fromUtf8("OnlyLastCallCommandCheck"));
        OnlyLastCallCommandCheck->setEnabled(false);

        hboxLayout10->addWidget(OnlyLastCallCommandCheck);


        vboxLayout9->addLayout(hboxLayout10);

        IncomingCommandCheck = new QCheckBox(callsTab);
        IncomingCommandCheck->setObjectName(QString::fromUtf8("IncomingCommandCheck"));

        vboxLayout9->addWidget(IncomingCommandCheck);

        hboxLayout11 = new QHBoxLayout();
        hboxLayout11->setObjectName(QString::fromUtf8("hboxLayout11"));
        spacer15_2 = new QSpacerItem(20, 20, QSizePolicy::Fixed, QSizePolicy::Minimum);

        hboxLayout11->addItem(spacer15_2);

        IncomingCommandEdit = new QLineEdit(callsTab);
        IncomingCommandEdit->setObjectName(QString::fromUtf8("IncomingCommandEdit"));
        IncomingCommandEdit->setEnabled(false);

        hboxLayout11->addWidget(IncomingCommandEdit);


        vboxLayout9->addLayout(hboxLayout11);

        spacer16 = new QSpacerItem(21, 20, QSizePolicy::Minimum, QSizePolicy::Expanding);

        vboxLayout9->addItem(spacer16);

        TabWidget->addTab(callsTab, QString());

        vboxLayout->addWidget(TabWidget);


        retranslateUi(SkypeEditAccountBase);
        QObject::connect(AuthorCheck, SIGNAL(toggled(bool)), AuthorEdit, SLOT(setEnabled(bool)));
        QObject::connect(CallCheck, SIGNAL(toggled(bool)), AutoCloseCallCheck, SLOT(setEnabled(bool)));
        QObject::connect(AutoCloseCallCheck, SIGNAL(toggled(bool)), CloseTimeoutSpin, SLOT(setEnabled(bool)));
        QObject::connect(CallCheck, SIGNAL(toggled(bool)), AutoCloseCallCheck, SLOT(setChecked(bool)));
        QObject::connect(StartCallCommandCheck, SIGNAL(toggled(bool)), StartCallCommandEdit, SLOT(setEnabled(bool)));
        QObject::connect(StartCallCommandCheck, SIGNAL(toggled(bool)), WaitForStartCallCommandCheck, SLOT(setEnabled(bool)));
        QObject::connect(EndCallCommandCheck, SIGNAL(toggled(bool)), EndCallCommandEdit, SLOT(setEnabled(bool)));
        QObject::connect(EndCallCommandCheck, SIGNAL(toggled(bool)), OnlyLastCallCommandCheck, SLOT(setEnabled(bool)));
        QObject::connect(IncomingCommandCheck, SIGNAL(toggled(bool)), IncomingCommandEdit, SLOT(setEnabled(bool)));

        TabWidget->setCurrentIndex(0);


        QMetaObject::connectSlotsByName(SkypeEditAccountBase);
    } // setupUi

    void retranslateUi(QWidget *SkypeEditAccountBase)
    {
        groupBox1->setTitle(tr2i18n("Account Information", 0));
#ifndef UI_QT_NO_WHATSTHIS
        excludeCheck->setWhatsThis(tr2i18n("Check this if you do not want to connect with other protocols", 0));
#endif // QT_NO_WHATSTHIS
        excludeCheck->setText(tr2i18n("E&xclude from connection", 0));
        groupBox3->setTitle(tr2i18n("Important Note", 0));
        textLabel3->setText(tr2i18n("The Skype plugin serves as a bridge to an externally running copy of Skype. This has some consequences on how it functions: you need an instance of Skype to be running, and only one Skype account can be used.<br /><br />Note that you need to install the original dynamic linked Skype version 2.0 or 2.1 from <a href=\"http://www.skype.com\">http://www.skype.com</a><br /><br />This plugin will only work if the language in the Skype client set to English. Kopete shows notifications (incoming call, message, ...), so you can turn off the notifications in Skype.", 0));
        configureSkypeClient->setText(tr2i18n("Disable Skype notifications and set up English language in Skype client", 0));
        TabWidget->setTabText(TabWidget->indexOf(basicSetupTab), tr2i18n("&Basic Setup", 0));
#ifndef UI_QT_NO_WHATSTHIS
        LaunchGroup->setWhatsThis(tr2i18n("You can set whether and when should kopete launch Skype.", 0));
#endif // QT_NO_WHATSTHIS
        LaunchGroup->setTitle(tr2i18n("Launch Skype", 0));
        LaunchNeededRadio->setText(tr2i18n("When &not running", 0));
        LaunchNeverRadio->setText(tr2i18n("N&ever", 0));
        textLabel1->setText(tr2i18n("Command to launch Skype:", 0));
        CommandEdit->setText(tr2i18n("skype", 0));
        textLabel1_4->setText(tr2i18n("Launch timeout:", 0));
        textLabel2_3->setText(tr2i18n("s", 0));
        textLabel2_4->setText(tr2i18n("Wait before trying to connect to Skype:", 0));
#ifndef UI_QT_NO_TOOLTIP
        WaitSpin->setToolTip(tr2i18n("trying", 0));
#endif // QT_NO_TOOLTIP
#ifndef UI_QT_NO_WHATSTHIS
        WaitSpin->setWhatsThis(tr2i18n("trying", 0));
#endif // QT_NO_WHATSTHIS
        textLabel1_5->setText(tr2i18n("s", 0));
        textLabel2->setText(tr2i18n("If you get error that Skype was not found, but in fact it is running, check the instructions at <a href=\"https://developer.skype.com/Docs/ApiDoc/Skype_API_on_Linux\">https://developer.skype.com/Docs/ApiDoc/Skype_API_on_Linux</a>.<br /><br />Note that only the dynamic linked Skype binary is supported.", 0));
        TabWidget->setTabText(TabWidget->indexOf(launchTab), tr2i18n("Lau&nch", 0));
#ifndef UI_QT_NO_WHATSTHIS
        groupBox3_2->setWhatsThis(tr2i18n("Each application that wants to use Skype must provide its name to it, and the user is asked whether to allow said application to access Skype.<br>By default, kopete provides kopete as its name, but if you suspect another application is accessing Skype with this name, you can change the name Kopete uses here, and then within Skype disallow applications that refer to themselves as kopete.", 0));
#endif // QT_NO_WHATSTHIS
        groupBox3_2->setTitle(tr2i18n("Authorization", 0));
        AuthorCheck->setText(tr2i18n("&Non-standard authorization", 0));
#ifndef UI_QT_NO_TOOLTIP
        BusGroup->setToolTip(tr2i18n("What bus do you want to use", 0));
#endif // QT_NO_TOOLTIP
#ifndef UI_QT_NO_WHATSTHIS
        BusGroup->setWhatsThis(tr2i18n("Which D-Bus do you want to use to connect to Skype?<br>Session: Your own, other people cannot use it (use --use-session-dbus to start Skype on that bus.)<br>System: Shared by all people on the same computer. This one is used by default by Skype.<br>You have to specify the same D-Bus used by Skype.", 0));
#endif // QT_NO_WHATSTHIS
        BusGroup->setTitle(tr2i18n("Bus", 0));
        radioButton4->setText(tr2i18n("Sessi&on", 0));
        radioButton5->setText(tr2i18n("S&ystem", 0));
        textLabel1_2->setText(tr2i18n("Note that Kopete will freeze while Skype asks you if it can allow Kopete to access it. This is normal, and if you allow it forever (check that \"Remember\" checkbox in Skype's dialog), it will not happen again.<br /><br />The 'System Bus' option is not yet supported by Skype", 0));
        TabWidget->setTabText(TabWidget->indexOf(connectionTab), tr2i18n("C&onnection", 0));
#ifndef UI_QT_NO_TOOLTIP
        HitchCheck->setToolTip(tr2i18n("Show all incoming messages", 0));
#endif // QT_NO_TOOLTIP
#ifndef UI_QT_NO_WHATSTHIS
        HitchCheck->setWhatsThis(tr2i18n("This will show all incoming Skype messages. If this is off, they are showed only if the message belongs to chat that is started by kopete.", 0));
#endif // QT_NO_WHATSTHIS
        HitchCheck->setText(tr2i18n("Show all incoming &messages", 0));
#ifndef UI_QT_NO_TOOLTIP
        MarkCheck->setToolTip(tr2i18n("This will mark incoming messages as read, so if you have Skype set up not to automatically pop-up chats, it will not flash the exclamation icon.", 0));
#endif // QT_NO_TOOLTIP
        MarkCheck->setText(tr2i18n("Mar&k as read", 0));
#ifndef UI_QT_NO_WHATSTHIS
        ScanCheck->setWhatsThis(tr2i18n("If this is checked, Kopete will ask Skype on login if it has any messages that have not been shown, and if so, will show them. This is useful if you start Kopete later than Skype, and Skype is configured not to show incoming messages.", 0));
#endif // QT_NO_WHATSTHIS
        ScanCheck->setText(tr2i18n("Scan f&or unread", 0));
#ifndef UI_QT_NO_TOOLTIP
        CallCheck->setToolTip(tr2i18n("Show call control window for all calls", 0));
#endif // QT_NO_TOOLTIP
#ifndef UI_QT_NO_WHATSTHIS
        CallCheck->setWhatsThis(tr2i18n("This will show a call control window for every call (both incoming and outgoing). If it is off, you can call from Kopete, but you have to control that call from Skype.", 0));
#endif // QT_NO_WHATSTHIS
        CallCheck->setText(tr2i18n("S&how call control (this will also hide Skype client call dialog)", 0));
#ifndef UI_QT_NO_TOOLTIP
        AutoCloseCallCheck->setToolTip(tr2i18n("Auto close the call control window", 0));
#endif // QT_NO_TOOLTIP
#ifndef UI_QT_NO_WHATSTHIS
        AutoCloseCallCheck->setWhatsThis(tr2i18n("This will close the call control window automatically when the call finishes", 0));
#endif // QT_NO_WHATSTHIS
        AutoCloseCallCheck->setText(tr2i18n("Autoc&lose", 0));
        textLabel1_3->setText(tr2i18n("Timeout:", 0));
        textLabel2_2->setText(tr2i18n("s", 0));
#ifndef UI_QT_NO_TOOLTIP
        PingsCheck->setToolTip(tr2i18n("If this is enabled, Kopete keeps track of whether or not Skype is running.", 0));
#endif // QT_NO_TOOLTIP
#ifndef UI_QT_NO_WHATSTHIS
        PingsCheck->setWhatsThis(tr2i18n("This keeps track of whether Skype is running. Turning this off only makes sense it you are trying to get non-flooded debug output.", 0));
#endif // QT_NO_WHATSTHIS
        PingsCheck->setText(tr2i18n("Pi&ng Skype", 0));
#ifndef UI_QT_NO_TOOLTIP
        LeaveCheck->setToolTip(tr2i18n("Do not leave a chat on window exit", 0));
#endif // QT_NO_TOOLTIP
#ifndef UI_QT_NO_WHATSTHIS
        LeaveCheck->setWhatsThis(tr2i18n("Do not leave a chat when the chat window is closed. Makes a difference only with multi-user chats: if it is checked, you will continue receiving messages from that chat even after closing the window.", 0));
#endif // QT_NO_WHATSTHIS
        LeaveCheck->setText(tr2i18n("Do not leave a chat on window exit", 0));
        TabWidget->setTabText(TabWidget->indexOf(activityTab), tr2i18n("&Activity", 0));
        StartCallCommandCheck->setText(tr2i18n("E&xecute before call", 0));
#ifndef UI_QT_NO_TOOLTIP
        WaitForStartCallCommandCheck->setToolTip(tr2i18n("This will wait before making/accepting the call for the command to finish.", 0));
#endif // QT_NO_TOOLTIP
#ifndef UI_QT_NO_WHATSTHIS
        WaitForStartCallCommandCheck->setWhatsThis(tr2i18n("This will wait for the command to finish before accepting/making the call.<br>\n"
"Note that kopete will freeze whilst waiting.", 0));
#endif // QT_NO_WHATSTHIS
        WaitForStartCallCommandCheck->setText(tr2i18n("Wait for fi&nish", 0));
        EndCallCommandCheck->setText(tr2i18n("Execute after call", 0));
        EndCallCommandCheck->setShortcut(QString());
#ifndef UI_QT_NO_TOOLTIP
        OnlyLastCallCommandCheck->setToolTip(tr2i18n("Usually this makes no difference, but if there are some other calls on hold, it is executed only for the most recently ended one.", 0));
#endif // QT_NO_TOOLTIP
        OnlyLastCallCommandCheck->setText(tr2i18n("Onl&y for last call", 0));
        IncomingCommandCheck->setText(tr2i18n("Execute on inco&ming call", 0));
        TabWidget->setTabText(TabWidget->indexOf(callsTab), tr2i18n("&Calls", 0));
        Q_UNUSED(SkypeEditAccountBase);
    } // retranslateUi

};

namespace Ui {
    class SkypeEditAccountBase: public Ui_SkypeEditAccountBase {};
} // namespace Ui

QT_END_NAMESPACE

#endif // SKYPEEDITACCOUNTBASE_H

