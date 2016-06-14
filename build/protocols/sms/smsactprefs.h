#include <kdialog.h>
#include <klocale.h>

#ifndef UI_SMSACTPREFSUI_H
#define UI_SMSACTPREFSUI_H

#include <qvariant.h>


#include <Qt3Support/Q3Frame>
#include <Qt3Support/Q3GroupBox>
#include <Qt3Support/Q3MimeSourceFactory>
#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtGui/QApplication>
#include <QtGui/QButtonGroup>
#include <QtGui/QCheckBox>
#include <QtGui/QComboBox>
#include <QtGui/QGridLayout>
#include <QtGui/QHBoxLayout>
#include <QtGui/QHeaderView>
#include <QtGui/QLabel>
#include <QtGui/QLineEdit>
#include <QtGui/QPushButton>
#include <QtGui/QSpacerItem>
#include <QtGui/QTabWidget>
#include <QtGui/QVBoxLayout>
#include <QtGui/QWidget>
#include "krestrictedline.h"

QT_BEGIN_NAMESPACE

class Ui_smsActPrefsUI
{
public:
    QVBoxLayout *vboxLayout;
    Q3Frame *middleFrame;
    QTabWidget *tabWidget9;
    QWidget *tab;
    QVBoxLayout *vboxLayout1;
    Q3GroupBox *groupBox61;
    QGridLayout *gridLayout;
    QLabel *textLabel2;
    QLabel *textLabel1;
    QLineEdit *accountId;
    QHBoxLayout *hboxLayout;
    QComboBox *serviceName;
    QPushButton *descButton;
    Q3GroupBox *groupBox22;
    QVBoxLayout *vboxLayout2;
    QLabel *textLabel12;
    QSpacerItem *spacer25;
    QWidget *tab1;
    QVBoxLayout *vboxLayout3;
    Q3GroupBox *groupBox62;
    QVBoxLayout *vboxLayout4;
    QHBoxLayout *hboxLayout1;
    QLabel *textLabel2_2;
    QComboBox *ifMessageTooLong;
    QCheckBox *subEnable;
    QHBoxLayout *hboxLayout2;
    QLabel *textLabel2_3;
    KRestrictedLine *subCode;
    QSpacerItem *spacer27;
    QLabel *labelStatusMessage;

    void setupUi(QWidget *smsActPrefsUI)
    {
        if (smsActPrefsUI->objectName().isEmpty())
            smsActPrefsUI->setObjectName(QString::fromUtf8("smsActPrefsUI"));
        smsActPrefsUI->resize(465, 437);
        QSizePolicy sizePolicy(static_cast<QSizePolicy::Policy>(5), static_cast<QSizePolicy::Policy>(5));
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(smsActPrefsUI->sizePolicy().hasHeightForWidth());
        smsActPrefsUI->setSizePolicy(sizePolicy);
        vboxLayout = new QVBoxLayout(smsActPrefsUI);
        vboxLayout->setSpacing(0);
        vboxLayout->setContentsMargins(0, 0, 0, 0);
        vboxLayout->setObjectName(QString::fromUtf8("vboxLayout"));
        middleFrame = new Q3Frame(smsActPrefsUI);
        middleFrame->setObjectName(QString::fromUtf8("middleFrame"));
        middleFrame->setFrameShape(QFrame::StyledPanel);
        middleFrame->setFrameShadow(QFrame::Raised);
        middleFrame->setLineWidth(0);

        vboxLayout->addWidget(middleFrame);

        tabWidget9 = new QTabWidget(smsActPrefsUI);
        tabWidget9->setObjectName(QString::fromUtf8("tabWidget9"));
        tab = new QWidget();
        tab->setObjectName(QString::fromUtf8("tab"));
        vboxLayout1 = new QVBoxLayout(tab);
        vboxLayout1->setObjectName(QString::fromUtf8("vboxLayout1"));
        groupBox61 = new Q3GroupBox(tab);
        groupBox61->setObjectName(QString::fromUtf8("groupBox61"));
        groupBox61->setColumnLayout(0, Qt::Vertical);
        gridLayout = new QGridLayout();
        QBoxLayout *boxlayout = qobject_cast<QBoxLayout *>(groupBox61->layout());
        if (boxlayout)
            boxlayout->addLayout(gridLayout);
        gridLayout->setAlignment(Qt::AlignTop);
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        textLabel2 = new QLabel(groupBox61);
        textLabel2->setObjectName(QString::fromUtf8("textLabel2"));
        textLabel2->setWordWrap(false);

        gridLayout->addWidget(textLabel2, 0, 0, 1, 1);

        textLabel1 = new QLabel(groupBox61);
        textLabel1->setObjectName(QString::fromUtf8("textLabel1"));
        textLabel1->setWordWrap(false);

        gridLayout->addWidget(textLabel1, 1, 0, 1, 1);

        accountId = new QLineEdit(groupBox61);
        accountId->setObjectName(QString::fromUtf8("accountId"));

        gridLayout->addWidget(accountId, 0, 1, 1, 1);

        hboxLayout = new QHBoxLayout();
        hboxLayout->setObjectName(QString::fromUtf8("hboxLayout"));
        serviceName = new QComboBox(groupBox61);
        serviceName->setObjectName(QString::fromUtf8("serviceName"));
        QSizePolicy sizePolicy1(static_cast<QSizePolicy::Policy>(7), static_cast<QSizePolicy::Policy>(5));
        sizePolicy1.setHorizontalStretch(0);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(serviceName->sizePolicy().hasHeightForWidth());
        serviceName->setSizePolicy(sizePolicy1);

        hboxLayout->addWidget(serviceName);

        descButton = new QPushButton(groupBox61);
        descButton->setObjectName(QString::fromUtf8("descButton"));

        hboxLayout->addWidget(descButton);


        gridLayout->addLayout(hboxLayout, 1, 1, 1, 1);


        vboxLayout1->addWidget(groupBox61);

        groupBox22 = new Q3GroupBox(tab);
        groupBox22->setObjectName(QString::fromUtf8("groupBox22"));
        groupBox22->setColumnLayout(0, Qt::Vertical);
        vboxLayout2 = new QVBoxLayout();
        QBoxLayout *boxlayout1 = qobject_cast<QBoxLayout *>(groupBox22->layout());
        if (boxlayout1)
            boxlayout1->addLayout(vboxLayout2);
        vboxLayout2->setAlignment(Qt::AlignTop);
        vboxLayout2->setObjectName(QString::fromUtf8("vboxLayout2"));
        textLabel12 = new QLabel(groupBox22);
        textLabel12->setObjectName(QString::fromUtf8("textLabel12"));
        QSizePolicy sizePolicy2(static_cast<QSizePolicy::Policy>(3), static_cast<QSizePolicy::Policy>(1));
        sizePolicy2.setHorizontalStretch(0);
        sizePolicy2.setVerticalStretch(0);
        sizePolicy2.setHeightForWidth(textLabel12->sizePolicy().hasHeightForWidth());
        textLabel12->setSizePolicy(sizePolicy2);
        textLabel12->setAlignment(Qt::AlignTop);
        textLabel12->setWordWrap(true);

        vboxLayout2->addWidget(textLabel12);


        vboxLayout1->addWidget(groupBox22);

        spacer25 = new QSpacerItem(20, 181, QSizePolicy::Expanding, QSizePolicy::Minimum);

        vboxLayout1->addItem(spacer25);

        tabWidget9->addTab(tab, QString());
        tab1 = new QWidget();
        tab1->setObjectName(QString::fromUtf8("tab1"));
        vboxLayout3 = new QVBoxLayout(tab1);
        vboxLayout3->setObjectName(QString::fromUtf8("vboxLayout3"));
        groupBox62 = new Q3GroupBox(tab1);
        groupBox62->setObjectName(QString::fromUtf8("groupBox62"));
        groupBox62->setColumnLayout(0, Qt::Vertical);
        vboxLayout4 = new QVBoxLayout();
        QBoxLayout *boxlayout2 = qobject_cast<QBoxLayout *>(groupBox62->layout());
        if (boxlayout2)
            boxlayout2->addLayout(vboxLayout4);
        vboxLayout4->setAlignment(Qt::AlignTop);
        vboxLayout4->setObjectName(QString::fromUtf8("vboxLayout4"));
        hboxLayout1 = new QHBoxLayout();
        hboxLayout1->setObjectName(QString::fromUtf8("hboxLayout1"));
        textLabel2_2 = new QLabel(groupBox62);
        textLabel2_2->setObjectName(QString::fromUtf8("textLabel2_2"));
        textLabel2_2->setWordWrap(false);

        hboxLayout1->addWidget(textLabel2_2);

        ifMessageTooLong = new QComboBox(groupBox62);
        ifMessageTooLong->setObjectName(QString::fromUtf8("ifMessageTooLong"));

        hboxLayout1->addWidget(ifMessageTooLong);


        vboxLayout4->addLayout(hboxLayout1);

        subEnable = new QCheckBox(groupBox62);
        subEnable->setObjectName(QString::fromUtf8("subEnable"));

        vboxLayout4->addWidget(subEnable);

        hboxLayout2 = new QHBoxLayout();
        hboxLayout2->setObjectName(QString::fromUtf8("hboxLayout2"));
        textLabel2_3 = new QLabel(groupBox62);
        textLabel2_3->setObjectName(QString::fromUtf8("textLabel2_3"));
        textLabel2_3->setEnabled(false);
        QSizePolicy sizePolicy3(static_cast<QSizePolicy::Policy>(5), static_cast<QSizePolicy::Policy>(5));
        sizePolicy3.setHorizontalStretch(1);
        sizePolicy3.setVerticalStretch(0);
        sizePolicy3.setHeightForWidth(textLabel2_3->sizePolicy().hasHeightForWidth());
        textLabel2_3->setSizePolicy(sizePolicy3);
        textLabel2_3->setWordWrap(false);

        hboxLayout2->addWidget(textLabel2_3);

        subCode = new KRestrictedLine(groupBox62);
        subCode->setObjectName(QString::fromUtf8("subCode"));
        subCode->setEnabled(false);
        QSizePolicy sizePolicy4(static_cast<QSizePolicy::Policy>(5), static_cast<QSizePolicy::Policy>(0));
        sizePolicy4.setHorizontalStretch(0);
        sizePolicy4.setVerticalStretch(0);
        sizePolicy4.setHeightForWidth(subCode->sizePolicy().hasHeightForWidth());
        subCode->setSizePolicy(sizePolicy4);

        hboxLayout2->addWidget(subCode);


        vboxLayout4->addLayout(hboxLayout2);


        vboxLayout3->addWidget(groupBox62);

        spacer27 = new QSpacerItem(20, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        vboxLayout3->addItem(spacer27);

        tabWidget9->addTab(tab1, QString());

        vboxLayout->addWidget(tabWidget9);

        labelStatusMessage = new QLabel(smsActPrefsUI);
        labelStatusMessage->setObjectName(QString::fromUtf8("labelStatusMessage"));
        labelStatusMessage->setAlignment(Qt::AlignCenter);
        labelStatusMessage->setWordWrap(false);

        vboxLayout->addWidget(labelStatusMessage);

#ifndef UI_QT_NO_SHORTCUT
        textLabel2->setBuddy(accountId);
        textLabel1->setBuddy(serviceName);
        textLabel2_2->setBuddy(ifMessageTooLong);
        textLabel2_3->setBuddy(subCode);
#endif // QT_NO_SHORTCUT
        QWidget::setTabOrder(tabWidget9, accountId);
        QWidget::setTabOrder(accountId, serviceName);
        QWidget::setTabOrder(serviceName, descButton);
        QWidget::setTabOrder(descButton, ifMessageTooLong);
        QWidget::setTabOrder(ifMessageTooLong, subEnable);
        QWidget::setTabOrder(subEnable, subCode);

        retranslateUi(smsActPrefsUI);
        QObject::connect(subEnable, SIGNAL(toggled(bool)), textLabel2_3, SLOT(setEnabled(bool)));
        QObject::connect(subEnable, SIGNAL(toggled(bool)), subCode, SLOT(setEnabled(bool)));

        QMetaObject::connectSlotsByName(smsActPrefsUI);
    } // setupUi

    void retranslateUi(QWidget *smsActPrefsUI)
    {
        smsActPrefsUI->setWindowTitle(tr2i18n("Account Preferences - SMS", 0));
        groupBox61->setTitle(tr2i18n("Account Information", 0));
        textLabel2->setText(tr2i18n("&Account name:", 0));
#ifndef UI_QT_NO_TOOLTIP
        textLabel2->setProperty("toolTip", QVariant(tr2i18n("A unique name for this SMS account.", 0)));
#endif // QT_NO_TOOLTIP
#ifndef UI_QT_NO_WHATSTHIS
        textLabel2->setProperty("whatsThis", QVariant(tr2i18n("A unique name for this SMS account.", 0)));
#endif // QT_NO_WHATSTHIS
        textLabel1->setText(tr2i18n("&SMS delivery service:", 0));
#ifndef UI_QT_NO_TOOLTIP
        textLabel1->setProperty("toolTip", QVariant(tr2i18n("The delivery service that you would like to use.", 0)));
#endif // QT_NO_TOOLTIP
#ifndef UI_QT_NO_WHATSTHIS
        textLabel1->setProperty("whatsThis", QVariant(tr2i18n("The delivery service that you would like to use.  Note that you will need to have this software installed prior to using this account.", 0)));
#endif // QT_NO_WHATSTHIS
#ifndef UI_QT_NO_WHATSTHIS
        accountId->setProperty("whatsThis", QVariant(tr2i18n("A unique name for this SMS account.", 0)));
#endif // QT_NO_WHATSTHIS
#ifndef UI_QT_NO_TOOLTIP
        serviceName->setProperty("toolTip", QVariant(tr2i18n("The delivery service that you would like to use.", 0)));
#endif // QT_NO_TOOLTIP
#ifndef UI_QT_NO_WHATSTHIS
        serviceName->setProperty("whatsThis", QVariant(tr2i18n("The delivery service that you would like to use.  Note that you will need to have this software installed prior to using this account.", 0)));
#endif // QT_NO_WHATSTHIS
        descButton->setText(tr2i18n("&Description", 0));
#ifndef UI_QT_NO_TOOLTIP
        descButton->setProperty("toolTip", QVariant(tr2i18n("Description of the SMS delivery service.", 0)));
#endif // QT_NO_TOOLTIP
#ifndef UI_QT_NO_WHATSTHIS
        descButton->setProperty("whatsThis", QVariant(tr2i18n("Description of the SMS delivery service, including download locations.", 0)));
#endif // QT_NO_WHATSTHIS
        groupBox22->setTitle(tr2i18n("Information", 0));
        textLabel12->setText(tr2i18n("To use SMS, you will need an account with a delivery service.", 0));
        tabWidget9->setTabText(tabWidget9->indexOf(tab), tr2i18n("B&asic Setup", 0));
        groupBox62->setTitle(tr2i18n("Messaging Preferences", 0));
        textLabel2_2->setText(tr2i18n("If the message is too &long:", 0));
#ifndef UI_QT_NO_TOOLTIP
        textLabel2_2->setProperty("toolTip", QVariant(tr2i18n("What should happen if you type a message that is too long to fit in a single SMS message.", 0)));
#endif // QT_NO_TOOLTIP
#ifndef UI_QT_NO_WHATSTHIS
        textLabel2_2->setProperty("whatsThis", QVariant(tr2i18n("What should happen if you type a message that is too long to fit in a single SMS message.  You can either choose to break it up into smaller messages automatically, cancel the message from being sent entirely, or have Kopete prompt you each time you enter a message that is too long.", 0)));
#endif // QT_NO_WHATSTHIS
        ifMessageTooLong->clear();
        ifMessageTooLong->insertItems(0, QStringList()
         << tr2i18n("Prompt (recommended)", 0)
         << tr2i18n("Break Into Multiple", 0)
         << tr2i18n("Cancel Sending", 0)
        );
#ifndef UI_QT_NO_TOOLTIP
        ifMessageTooLong->setProperty("toolTip", QVariant(tr2i18n("What should happen if you type a message that is too long to fit in a single SMS message.", 0)));
#endif // QT_NO_TOOLTIP
#ifndef UI_QT_NO_WHATSTHIS
        ifMessageTooLong->setProperty("whatsThis", QVariant(tr2i18n("What should happen if you type a message that is too long to fit in a single SMS message.  You can either choose to break it up into smaller messages automatically, cancel the message from being sent entirely, or have Kopete prompt you each time you enter a message that is too long.", 0)));
#endif // QT_NO_WHATSTHIS
        subEnable->setText(tr2i18n("&Enable phone number internationalization", 0));
#ifndef UI_QT_NO_TOOLTIP
        subEnable->setProperty("toolTip", QVariant(tr2i18n("Check if you would like to enable phone number internationalization.", 0)));
#endif // QT_NO_TOOLTIP
#ifndef UI_QT_NO_WHATSTHIS
        subEnable->setProperty("whatsThis", QVariant(tr2i18n("Check if you would like to enable phone number internationalization.  Without this option, you will only be able to use SMS for accounts within your country.", 0)));
#endif // QT_NO_WHATSTHIS
        textLabel2_3->setText(tr2i18n("Substitute leading &zero with code:", 0));
#ifndef UI_QT_NO_TOOLTIP
        textLabel2_3->setProperty("toolTip", QVariant(tr2i18n("Whatever you want to substitute for a leading zero.", 0)));
#endif // QT_NO_TOOLTIP
#ifndef UI_QT_NO_WHATSTHIS
        textLabel2_3->setProperty("whatsThis", QVariant(tr2i18n("Whatever you want to substitute for a leading zero.", 0)));
#endif // QT_NO_WHATSTHIS
        subCode->setText(tr2i18n("+", 0));
        subCode->setValidChars(tr2i18n("1234567890+", 0));
#ifndef UI_QT_NO_TOOLTIP
        subCode->setProperty("toolTip", QVariant(tr2i18n("Whatever you want to substitute for a leading zero.", 0)));
#endif // QT_NO_TOOLTIP
#ifndef UI_QT_NO_WHATSTHIS
        subCode->setProperty("whatsThis", QVariant(tr2i18n("Whatever you want to substitute for a leading zero.", 0)));
#endif // QT_NO_WHATSTHIS
        tabWidget9->setTabText(tabWidget9->indexOf(tab1), tr2i18n("A&ccount Preferences", 0));
        labelStatusMessage->setText(QString());
    } // retranslateUi

};

namespace Ui {
    class smsActPrefsUI: public Ui_smsActPrefsUI {};
} // namespace Ui

QT_END_NAMESPACE

class smsActPrefsUI : public QWidget, public Ui::smsActPrefsUI
{
    Q_OBJECT

public:
    smsActPrefsUI(QWidget* parent = 0, const char* name = 0, Qt::WindowFlags fl = 0);
    ~smsActPrefsUI();

protected slots:
    virtual void languageChange();

};

#endif // SMSACTPREFSUI_H

