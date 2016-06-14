#include <kdialog.h>
#include <klocale.h>

/********************************************************************************
** Form generated from reading UI file 'wpeditaccountbase.ui'
**
** Created by: Qt User Interface Compiler version 4.8.7
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_WPEDITACCOUNTBASE_H
#define UI_WPEDITACCOUNTBASE_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtGui/QApplication>
#include <QtGui/QButtonGroup>
#include <QtGui/QGridLayout>
#include <QtGui/QGroupBox>
#include <QtGui/QHBoxLayout>
#include <QtGui/QHeaderView>
#include <QtGui/QLabel>
#include <QtGui/QLineEdit>
#include <QtGui/QSpacerItem>
#include <QtGui/QTabWidget>
#include <QtGui/QVBoxLayout>
#include <QtGui/QWidget>
#include "knuminput.h"
#include "kpushbutton.h"
#include "kurlrequester.h"

QT_BEGIN_NAMESPACE

class Ui_WPEditAccountBase
{
public:
    QVBoxLayout *vboxLayout;
    QTabWidget *tabWidget10;
    QWidget *tab;
    QVBoxLayout *vboxLayout1;
    QGroupBox *groupBox;
    QVBoxLayout *vboxLayout2;
    QHBoxLayout *hboxLayout;
    QLabel *label1;
    QLineEdit *mHostName;
    KPushButton *doInstallSamba;
    QGroupBox *groupBox_2;
    QVBoxLayout *vboxLayout3;
    QLabel *textLabel12;
    QLabel *textLabel1_3;
    QLabel *label;
    QSpacerItem *spacerItem;
    QWidget *TabPage;
    QVBoxLayout *vboxLayout4;
    QGroupBox *groupBox_3;
    QVBoxLayout *vboxLayout5;
    QGridLayout *gridLayout;
    QHBoxLayout *hboxLayout1;
    KIntSpinBox *mHostCheckFreq;
    QLabel *textLabel6;
    QSpacerItem *spacerItem1;
    QLabel *textLabel4;
    KUrlRequester *mSmbcPath;
    QLabel *textLabel1;
    QGroupBox *groupBox_4;
    QVBoxLayout *vboxLayout6;
    QLabel *textLabel2_2;
    QSpacerItem *spacerItem2;
    QLabel *labelStatusMessage;

    void setupUi(QWidget *WPEditAccountBase)
    {
        if (WPEditAccountBase->objectName().isEmpty())
            WPEditAccountBase->setObjectName(QString::fromUtf8("WPEditAccountBase"));
        WPEditAccountBase->resize(623, 484);
        vboxLayout = new QVBoxLayout(WPEditAccountBase);
#ifndef UI_Q_OS_MAC
        vboxLayout->setSpacing(6);
#endif
#ifndef UI_Q_OS_MAC
        vboxLayout->setContentsMargins(9, 9, 9, 9);
#endif
        vboxLayout->setObjectName(QString::fromUtf8("vboxLayout"));
        tabWidget10 = new QTabWidget(WPEditAccountBase);
        tabWidget10->setObjectName(QString::fromUtf8("tabWidget10"));
        QSizePolicy sizePolicy(static_cast<QSizePolicy::Policy>(1), static_cast<QSizePolicy::Policy>(1));
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(tabWidget10->sizePolicy().hasHeightForWidth());
        tabWidget10->setSizePolicy(sizePolicy);
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
        label1 = new QLabel(groupBox);
        label1->setObjectName(QString::fromUtf8("label1"));

        hboxLayout->addWidget(label1);

        mHostName = new QLineEdit(groupBox);
        mHostName->setObjectName(QString::fromUtf8("mHostName"));

        hboxLayout->addWidget(mHostName);

        doInstallSamba = new KPushButton(groupBox);
        doInstallSamba->setObjectName(QString::fromUtf8("doInstallSamba"));

        hboxLayout->addWidget(doInstallSamba);


        vboxLayout2->addLayout(hboxLayout);


        vboxLayout1->addWidget(groupBox);

        groupBox_2 = new QGroupBox(tab);
        groupBox_2->setObjectName(QString::fromUtf8("groupBox_2"));
        sizePolicy.setHeightForWidth(groupBox_2->sizePolicy().hasHeightForWidth());
        groupBox_2->setSizePolicy(sizePolicy);
        vboxLayout3 = new QVBoxLayout(groupBox_2);
#ifndef UI_Q_OS_MAC
        vboxLayout3->setSpacing(6);
#endif
#ifndef UI_Q_OS_MAC
        vboxLayout3->setContentsMargins(9, 9, 9, 9);
#endif
        vboxLayout3->setObjectName(QString::fromUtf8("vboxLayout3"));
        textLabel12 = new QLabel(groupBox_2);
        textLabel12->setObjectName(QString::fromUtf8("textLabel12"));
        QSizePolicy sizePolicy1(static_cast<QSizePolicy::Policy>(5), static_cast<QSizePolicy::Policy>(1));
        sizePolicy1.setHorizontalStretch(0);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(textLabel12->sizePolicy().hasHeightForWidth());
        textLabel12->setSizePolicy(sizePolicy1);
        textLabel12->setTextFormat(Qt::PlainText);
        textLabel12->setAlignment(Qt::AlignLeading|Qt::AlignLeft|Qt::AlignTop);
        textLabel12->setWordWrap(true);

        vboxLayout3->addWidget(textLabel12);

        textLabel1_3 = new QLabel(groupBox_2);
        textLabel1_3->setObjectName(QString::fromUtf8("textLabel1_3"));
        sizePolicy1.setHeightForWidth(textLabel1_3->sizePolicy().hasHeightForWidth());
        textLabel1_3->setSizePolicy(sizePolicy1);
        textLabel1_3->setTextFormat(Qt::PlainText);
        textLabel1_3->setAlignment(Qt::AlignLeading|Qt::AlignLeft|Qt::AlignTop);

        vboxLayout3->addWidget(textLabel1_3);

        label = new QLabel(groupBox_2);
        label->setObjectName(QString::fromUtf8("label"));
        sizePolicy1.setHeightForWidth(label->sizePolicy().hasHeightForWidth());
        label->setSizePolicy(sizePolicy1);
        label->setTextFormat(Qt::RichText);
        label->setAlignment(Qt::AlignLeading|Qt::AlignLeft|Qt::AlignTop);
        label->setWordWrap(true);

        vboxLayout3->addWidget(label);


        vboxLayout1->addWidget(groupBox_2);

        spacerItem = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        vboxLayout1->addItem(spacerItem);

        tabWidget10->addTab(tab, QString());
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
        groupBox_3 = new QGroupBox(TabPage);
        groupBox_3->setObjectName(QString::fromUtf8("groupBox_3"));
        vboxLayout5 = new QVBoxLayout(groupBox_3);
#ifndef UI_Q_OS_MAC
        vboxLayout5->setSpacing(6);
#endif
#ifndef UI_Q_OS_MAC
        vboxLayout5->setContentsMargins(9, 9, 9, 9);
#endif
        vboxLayout5->setObjectName(QString::fromUtf8("vboxLayout5"));
        gridLayout = new QGridLayout();
#ifndef UI_Q_OS_MAC
        gridLayout->setSpacing(6);
#endif
#ifndef UI_Q_OS_MAC
        gridLayout->setContentsMargins(0, 0, 0, 0);
#endif
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        hboxLayout1 = new QHBoxLayout();
#ifndef UI_Q_OS_MAC
        hboxLayout1->setSpacing(6);
#endif
#ifndef UI_Q_OS_MAC
        hboxLayout1->setContentsMargins(0, 0, 0, 0);
#endif
        hboxLayout1->setObjectName(QString::fromUtf8("hboxLayout1"));
        mHostCheckFreq = new KIntSpinBox(groupBox_3);
        mHostCheckFreq->setObjectName(QString::fromUtf8("mHostCheckFreq"));
        QSizePolicy sizePolicy2(static_cast<QSizePolicy::Policy>(5), static_cast<QSizePolicy::Policy>(0));
        sizePolicy2.setHorizontalStretch(0);
        sizePolicy2.setVerticalStretch(0);
        sizePolicy2.setHeightForWidth(mHostCheckFreq->sizePolicy().hasHeightForWidth());
        mHostCheckFreq->setSizePolicy(sizePolicy2);

        hboxLayout1->addWidget(mHostCheckFreq);

        textLabel6 = new QLabel(groupBox_3);
        textLabel6->setObjectName(QString::fromUtf8("textLabel6"));
        QSizePolicy sizePolicy3(static_cast<QSizePolicy::Policy>(3), static_cast<QSizePolicy::Policy>(5));
        sizePolicy3.setHorizontalStretch(0);
        sizePolicy3.setVerticalStretch(0);
        sizePolicy3.setHeightForWidth(textLabel6->sizePolicy().hasHeightForWidth());
        textLabel6->setSizePolicy(sizePolicy3);

        hboxLayout1->addWidget(textLabel6);

        spacerItem1 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        hboxLayout1->addItem(spacerItem1);


        gridLayout->addLayout(hboxLayout1, 0, 1, 1, 1);

        textLabel4 = new QLabel(groupBox_3);
        textLabel4->setObjectName(QString::fromUtf8("textLabel4"));

        gridLayout->addWidget(textLabel4, 0, 0, 1, 1);

        mSmbcPath = new KUrlRequester(groupBox_3);
        mSmbcPath->setObjectName(QString::fromUtf8("mSmbcPath"));

        gridLayout->addWidget(mSmbcPath, 1, 1, 1, 1);

        textLabel1 = new QLabel(groupBox_3);
        textLabel1->setObjectName(QString::fromUtf8("textLabel1"));

        gridLayout->addWidget(textLabel1, 1, 0, 1, 1);


        vboxLayout5->addLayout(gridLayout);


        vboxLayout4->addWidget(groupBox_3);

        groupBox_4 = new QGroupBox(TabPage);
        groupBox_4->setObjectName(QString::fromUtf8("groupBox_4"));
        vboxLayout6 = new QVBoxLayout(groupBox_4);
#ifndef UI_Q_OS_MAC
        vboxLayout6->setSpacing(6);
#endif
#ifndef UI_Q_OS_MAC
        vboxLayout6->setContentsMargins(9, 9, 9, 9);
#endif
        vboxLayout6->setObjectName(QString::fromUtf8("vboxLayout6"));
        textLabel2_2 = new QLabel(groupBox_4);
        textLabel2_2->setObjectName(QString::fromUtf8("textLabel2_2"));
        textLabel2_2->setTextFormat(Qt::RichText);

        vboxLayout6->addWidget(textLabel2_2);


        vboxLayout4->addWidget(groupBox_4);

        spacerItem2 = new QSpacerItem(20, 135, QSizePolicy::Minimum, QSizePolicy::MinimumExpanding);

        vboxLayout4->addItem(spacerItem2);

        tabWidget10->addTab(TabPage, QString());

        vboxLayout->addWidget(tabWidget10);

        labelStatusMessage = new QLabel(WPEditAccountBase);
        labelStatusMessage->setObjectName(QString::fromUtf8("labelStatusMessage"));
        labelStatusMessage->setAlignment(Qt::AlignCenter);

        vboxLayout->addWidget(labelStatusMessage);

#ifndef UI_QT_NO_SHORTCUT
        label1->setBuddy(mHostName);
#endif // QT_NO_SHORTCUT
        QWidget::setTabOrder(tabWidget10, mHostName);
        QWidget::setTabOrder(mHostName, doInstallSamba);

        retranslateUi(WPEditAccountBase);

        QMetaObject::connectSlotsByName(WPEditAccountBase);
    } // setupUi

    void retranslateUi(QWidget *WPEditAccountBase)
    {
        WPEditAccountBase->setWindowTitle(tr2i18n("Account Preferences - WinPopup", 0));
        groupBox->setTitle(tr2i18n("Account Information", 0));
#ifndef UI_QT_NO_TOOLTIP
        label1->setToolTip(tr2i18n("The hostname under which you want to send WinPopup messages.", 0));
#endif // QT_NO_TOOLTIP
#ifndef UI_QT_NO_WHATSTHIS
        label1->setWhatsThis(tr2i18n("The host name under which you want to send WinPopup messages. Note that you do not have to specify the true hostname in order to send messages, but you do if you want to receive them.", 0));
#endif // QT_NO_WHATSTHIS
        label1->setText(tr2i18n("Hos&tname:", 0));
#ifndef UI_QT_NO_TOOLTIP
        mHostName->setToolTip(tr2i18n("The hostname under which you want to send WinPopup messages.", 0));
#endif // QT_NO_TOOLTIP
#ifndef UI_QT_NO_WHATSTHIS
        mHostName->setWhatsThis(tr2i18n("The host name under which you want to send WinPopup messages. Note that you do not have to specify the true hostname in order to send messages, but you do if you want to receive them.", 0));
#endif // QT_NO_WHATSTHIS
#ifndef UI_QT_NO_TOOLTIP
        doInstallSamba->setToolTip(tr2i18n("Install support into Samba to enable this service.", 0));
#endif // QT_NO_TOOLTIP
#ifndef UI_QT_NO_WHATSTHIS
        doInstallSamba->setWhatsThis(tr2i18n("Install support into Samba to enable this service.", 0));
#endif // QT_NO_WHATSTHIS
        doInstallSamba->setText(tr2i18n("I&nstall Into Samba", 0));
        groupBox_2->setTitle(tr2i18n("Information", 0));
        textLabel12->setText(tr2i18n("To receive WinPopup messages sent from other machines, the hostname above must be set to this machine's hostname.", 0));
        textLabel1_3->setText(tr2i18n("The samba server must be configured and running.", 0));
        label->setText(tr2i18n("\"Install into Samba\" is a simple method to create the directory for the temporary message files and configure your samba server.<br>\n"
"However, the recommended way is to ask your administrator to create this directory ('mkdir -p -m 0777 /var/lib/winpopup') and for you to add\n"
"'message command = _PATH_TO_/winpopup-send %s %m %t &' (substitute _PATH_TO_ by the real path) to the [global] section in your smb.conf.", 0));
        tabWidget10->setTabText(tabWidget10->indexOf(tab), tr2i18n("Basi&c Setup", 0));
        groupBox_3->setTitle(tr2i18n("Protocol Preferences", 0));
        textLabel6->setText(tr2i18n("second(s)", 0));
        textLabel4->setText(tr2i18n("Host check frequency:", 0));
        textLabel1->setText(tr2i18n("Path to 'smbclient' executable:", 0));
        groupBox_4->setTitle(tr2i18n("Information", 0));
        textLabel2_2->setText(tr2i18n("<i>These options apply to all WinPopup accounts.</i>", 0));
        tabWidget10->setTabText(tabWidget10->indexOf(TabPage), tr2i18n("S&ystem", 0));
        labelStatusMessage->setText(QString());
    } // retranslateUi

};

namespace Ui {
    class WPEditAccountBase: public Ui_WPEditAccountBase {};
} // namespace Ui

QT_END_NAMESPACE

#endif // WPEDITACCOUNTBASE_H

