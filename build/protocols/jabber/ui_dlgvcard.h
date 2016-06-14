#include <kdialog.h>
#include <klocale.h>

/********************************************************************************
** Form generated from reading UI file 'dlgvcard.ui'
**
** Created by: Qt User Interface Compiler version 4.8.7
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_DLGVCARD_H
#define UI_DLGVCARD_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtGui/QApplication>
#include <QtGui/QButtonGroup>
#include <QtGui/QFormLayout>
#include <QtGui/QGridLayout>
#include <QtGui/QGroupBox>
#include <QtGui/QHBoxLayout>
#include <QtGui/QHeaderView>
#include <QtGui/QLabel>
#include <QtGui/QLineEdit>
#include <QtGui/QPushButton>
#include <QtGui/QSpacerItem>
#include <QtGui/QStackedWidget>
#include <QtGui/QTabWidget>
#include <QtGui/QVBoxLayout>
#include <QtGui/QWidget>
#include "ktextedit.h"
#include "kurllabel.h"

QT_BEGIN_NAMESPACE

class Ui_dlgVCard
{
public:
    QGridLayout *gridLayout_3;
    QLabel *lblStatus;
    QTabWidget *tabWidget3;
    QWidget *tab;
    QVBoxLayout *verticalLayout;
    QFormLayout *formLayout_5;
    QLabel *lblNick;
    QLineEdit *leNick;
    QLabel *lblName;
    QLineEdit *leName;
    QLabel *lblJID;
    QLineEdit *leJID;
    QLabel *lblHomepage;
    QStackedWidget *wsHomepage;
    QWidget *page_2;
    QHBoxLayout *horizontalLayout;
    KUrlLabel *urlHomepage;
    QWidget *page_3;
    QVBoxLayout *verticalLayout_3;
    QLineEdit *leHomepage;
    QLabel *lblBirthday;
    QLineEdit *leBirthday;
    QLabel *lblTimezone;
    QLineEdit *leTimezone;
    QGroupBox *groupBox1;
    QGridLayout *gridLayout;
    QSpacerItem *spacerItem;
    QLabel *lblPhoto;
    QSpacerItem *spacerItem1;
    QPushButton *btnSelectPhoto;
    QPushButton *btnClearPhoto;
    QSpacerItem *spacerItem2;
    QWidget *tab1;
    QFormLayout *formLayout_4;
    QLabel *lblStreet;
    QLineEdit *leHomeStreet;
    QLineEdit *leHomeExtAddr;
    QLabel *lblPOBox;
    QLineEdit *leHomePOBox;
    QLabel *lblCity;
    QLineEdit *leHomeCity;
    QLabel *lblState;
    QLineEdit *leHomePostalCode;
    QLabel *lblCountry;
    QLineEdit *leHomeCountry;
    QLabel *lblEmail;
    QStackedWidget *wsHomeEmail;
    QWidget *page_4;
    QVBoxLayout *verticalLayout_4;
    KUrlLabel *urlHomeEmail;
    QWidget *page_5;
    QVBoxLayout *verticalLayout_5;
    QLineEdit *leHomeEmail;
    QWidget *tab2;
    QFormLayout *formLayout_3;
    QLabel *lblStreet_2;
    QLineEdit *leWorkStreet;
    QLineEdit *leWorkExtAddr;
    QLabel *lblPOBox_2;
    QLineEdit *leWorkPOBox;
    QLabel *lblCity_2;
    QLineEdit *leWorkCity;
    QLabel *lblState_2;
    QLineEdit *leWorkPostalCode;
    QLabel *lblCountry_2;
    QLineEdit *leWorkCountry;
    QLabel *lblEmail_2;
    QStackedWidget *wsWorkEmail;
    QWidget *page_6;
    QVBoxLayout *verticalLayout_6;
    KUrlLabel *urlWorkEmail;
    QWidget *page_7;
    QVBoxLayout *verticalLayout_7;
    QLineEdit *leWorkEmail;
    QWidget *tab3;
    QFormLayout *formLayout_2;
    QLabel *lblCompany;
    QLineEdit *leCompany;
    QLabel *lblDepartment;
    QLineEdit *leDepartment;
    QLabel *lblPosition;
    QLineEdit *lePosition;
    QLabel *lblRole;
    QLineEdit *leRole;
    QWidget *tab4;
    QFormLayout *formLayout;
    QLabel *lblPhoneHome;
    QLineEdit *lePhoneHome;
    QLabel *lblPhoneWork;
    QLineEdit *lePhoneWork;
    QLabel *lblPhoneFax;
    QLineEdit *lePhoneFax;
    QLabel *lblPhoneCell;
    QLineEdit *lePhoneCell;
    QWidget *tab5;
    QVBoxLayout *verticalLayout_2;
    KTextEdit *teAbout;

    void setupUi(QWidget *dlgVCard)
    {
        if (dlgVCard->objectName().isEmpty())
            dlgVCard->setObjectName(QString::fromUtf8("dlgVCard"));
        dlgVCard->resize(382, 499);
        gridLayout_3 = new QGridLayout(dlgVCard);
        gridLayout_3->setObjectName(QString::fromUtf8("gridLayout_3"));
        lblStatus = new QLabel(dlgVCard);
        lblStatus->setObjectName(QString::fromUtf8("lblStatus"));

        gridLayout_3->addWidget(lblStatus, 1, 0, 1, 1);

        tabWidget3 = new QTabWidget(dlgVCard);
        tabWidget3->setObjectName(QString::fromUtf8("tabWidget3"));
        tab = new QWidget();
        tab->setObjectName(QString::fromUtf8("tab"));
        verticalLayout = new QVBoxLayout(tab);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        formLayout_5 = new QFormLayout();
        formLayout_5->setObjectName(QString::fromUtf8("formLayout_5"));
        lblNick = new QLabel(tab);
        lblNick->setObjectName(QString::fromUtf8("lblNick"));

        formLayout_5->setWidget(0, QFormLayout::LabelRole, lblNick);

        leNick = new QLineEdit(tab);
        leNick->setObjectName(QString::fromUtf8("leNick"));

        formLayout_5->setWidget(0, QFormLayout::FieldRole, leNick);

        lblName = new QLabel(tab);
        lblName->setObjectName(QString::fromUtf8("lblName"));

        formLayout_5->setWidget(1, QFormLayout::LabelRole, lblName);

        leName = new QLineEdit(tab);
        leName->setObjectName(QString::fromUtf8("leName"));

        formLayout_5->setWidget(1, QFormLayout::FieldRole, leName);

        lblJID = new QLabel(tab);
        lblJID->setObjectName(QString::fromUtf8("lblJID"));

        formLayout_5->setWidget(2, QFormLayout::LabelRole, lblJID);

        leJID = new QLineEdit(tab);
        leJID->setObjectName(QString::fromUtf8("leJID"));
        QSizePolicy sizePolicy(QSizePolicy::Expanding, QSizePolicy::Fixed);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(leJID->sizePolicy().hasHeightForWidth());
        leJID->setSizePolicy(sizePolicy);

        formLayout_5->setWidget(2, QFormLayout::FieldRole, leJID);

        lblHomepage = new QLabel(tab);
        lblHomepage->setObjectName(QString::fromUtf8("lblHomepage"));

        formLayout_5->setWidget(3, QFormLayout::LabelRole, lblHomepage);

        wsHomepage = new QStackedWidget(tab);
        wsHomepage->setObjectName(QString::fromUtf8("wsHomepage"));
        page_2 = new QWidget();
        page_2->setObjectName(QString::fromUtf8("page_2"));
        horizontalLayout = new QHBoxLayout(page_2);
        horizontalLayout->setContentsMargins(0, 0, 0, 0);
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        urlHomepage = new KUrlLabel(page_2);
        urlHomepage->setObjectName(QString::fromUtf8("urlHomepage"));

        horizontalLayout->addWidget(urlHomepage);

        wsHomepage->addWidget(page_2);
        page_3 = new QWidget();
        page_3->setObjectName(QString::fromUtf8("page_3"));
        verticalLayout_3 = new QVBoxLayout(page_3);
        verticalLayout_3->setContentsMargins(0, 0, 0, 0);
        verticalLayout_3->setObjectName(QString::fromUtf8("verticalLayout_3"));
        leHomepage = new QLineEdit(page_3);
        leHomepage->setObjectName(QString::fromUtf8("leHomepage"));

        verticalLayout_3->addWidget(leHomepage);

        wsHomepage->addWidget(page_3);

        formLayout_5->setWidget(3, QFormLayout::FieldRole, wsHomepage);

        lblBirthday = new QLabel(tab);
        lblBirthday->setObjectName(QString::fromUtf8("lblBirthday"));

        formLayout_5->setWidget(4, QFormLayout::LabelRole, lblBirthday);

        leBirthday = new QLineEdit(tab);
        leBirthday->setObjectName(QString::fromUtf8("leBirthday"));
        sizePolicy.setHeightForWidth(leBirthday->sizePolicy().hasHeightForWidth());
        leBirthday->setSizePolicy(sizePolicy);

        formLayout_5->setWidget(4, QFormLayout::FieldRole, leBirthday);

        lblTimezone = new QLabel(tab);
        lblTimezone->setObjectName(QString::fromUtf8("lblTimezone"));

        formLayout_5->setWidget(5, QFormLayout::LabelRole, lblTimezone);

        leTimezone = new QLineEdit(tab);
        leTimezone->setObjectName(QString::fromUtf8("leTimezone"));
        sizePolicy.setHeightForWidth(leTimezone->sizePolicy().hasHeightForWidth());
        leTimezone->setSizePolicy(sizePolicy);

        formLayout_5->setWidget(5, QFormLayout::FieldRole, leTimezone);


        verticalLayout->addLayout(formLayout_5);

        groupBox1 = new QGroupBox(tab);
        groupBox1->setObjectName(QString::fromUtf8("groupBox1"));
        gridLayout = new QGridLayout(groupBox1);
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        spacerItem = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        gridLayout->addItem(spacerItem, 0, 0, 1, 1);

        lblPhoto = new QLabel(groupBox1);
        lblPhoto->setObjectName(QString::fromUtf8("lblPhoto"));
        QSizePolicy sizePolicy1(QSizePolicy::Fixed, QSizePolicy::Fixed);
        sizePolicy1.setHorizontalStretch(0);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(lblPhoto->sizePolicy().hasHeightForWidth());
        lblPhoto->setSizePolicy(sizePolicy1);
        lblPhoto->setMinimumSize(QSize(96, 96));
        lblPhoto->setMaximumSize(QSize(96, 96));
        lblPhoto->setFrameShape(QFrame::StyledPanel);
        lblPhoto->setScaledContents(true);

        gridLayout->addWidget(lblPhoto, 0, 1, 1, 2);

        spacerItem1 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        gridLayout->addItem(spacerItem1, 0, 3, 1, 1);

        btnSelectPhoto = new QPushButton(groupBox1);
        btnSelectPhoto->setObjectName(QString::fromUtf8("btnSelectPhoto"));

        gridLayout->addWidget(btnSelectPhoto, 1, 0, 1, 2);

        btnClearPhoto = new QPushButton(groupBox1);
        btnClearPhoto->setObjectName(QString::fromUtf8("btnClearPhoto"));

        gridLayout->addWidget(btnClearPhoto, 1, 2, 1, 2);


        verticalLayout->addWidget(groupBox1);

        spacerItem2 = new QSpacerItem(362, 16, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout->addItem(spacerItem2);

        tabWidget3->addTab(tab, QString());
        tab1 = new QWidget();
        tab1->setObjectName(QString::fromUtf8("tab1"));
        formLayout_4 = new QFormLayout(tab1);
        formLayout_4->setObjectName(QString::fromUtf8("formLayout_4"));
        lblStreet = new QLabel(tab1);
        lblStreet->setObjectName(QString::fromUtf8("lblStreet"));

        formLayout_4->setWidget(0, QFormLayout::LabelRole, lblStreet);

        leHomeStreet = new QLineEdit(tab1);
        leHomeStreet->setObjectName(QString::fromUtf8("leHomeStreet"));

        formLayout_4->setWidget(0, QFormLayout::FieldRole, leHomeStreet);

        leHomeExtAddr = new QLineEdit(tab1);
        leHomeExtAddr->setObjectName(QString::fromUtf8("leHomeExtAddr"));

        formLayout_4->setWidget(1, QFormLayout::FieldRole, leHomeExtAddr);

        lblPOBox = new QLabel(tab1);
        lblPOBox->setObjectName(QString::fromUtf8("lblPOBox"));

        formLayout_4->setWidget(2, QFormLayout::LabelRole, lblPOBox);

        leHomePOBox = new QLineEdit(tab1);
        leHomePOBox->setObjectName(QString::fromUtf8("leHomePOBox"));

        formLayout_4->setWidget(2, QFormLayout::FieldRole, leHomePOBox);

        lblCity = new QLabel(tab1);
        lblCity->setObjectName(QString::fromUtf8("lblCity"));

        formLayout_4->setWidget(3, QFormLayout::LabelRole, lblCity);

        leHomeCity = new QLineEdit(tab1);
        leHomeCity->setObjectName(QString::fromUtf8("leHomeCity"));

        formLayout_4->setWidget(3, QFormLayout::FieldRole, leHomeCity);

        lblState = new QLabel(tab1);
        lblState->setObjectName(QString::fromUtf8("lblState"));

        formLayout_4->setWidget(4, QFormLayout::LabelRole, lblState);

        leHomePostalCode = new QLineEdit(tab1);
        leHomePostalCode->setObjectName(QString::fromUtf8("leHomePostalCode"));

        formLayout_4->setWidget(4, QFormLayout::FieldRole, leHomePostalCode);

        lblCountry = new QLabel(tab1);
        lblCountry->setObjectName(QString::fromUtf8("lblCountry"));

        formLayout_4->setWidget(5, QFormLayout::LabelRole, lblCountry);

        leHomeCountry = new QLineEdit(tab1);
        leHomeCountry->setObjectName(QString::fromUtf8("leHomeCountry"));

        formLayout_4->setWidget(5, QFormLayout::FieldRole, leHomeCountry);

        lblEmail = new QLabel(tab1);
        lblEmail->setObjectName(QString::fromUtf8("lblEmail"));
        QSizePolicy sizePolicy2(QSizePolicy::Preferred, QSizePolicy::Preferred);
        sizePolicy2.setHorizontalStretch(0);
        sizePolicy2.setVerticalStretch(0);
        sizePolicy2.setHeightForWidth(lblEmail->sizePolicy().hasHeightForWidth());
        lblEmail->setSizePolicy(sizePolicy2);

        formLayout_4->setWidget(6, QFormLayout::LabelRole, lblEmail);

        wsHomeEmail = new QStackedWidget(tab1);
        wsHomeEmail->setObjectName(QString::fromUtf8("wsHomeEmail"));
        page_4 = new QWidget();
        page_4->setObjectName(QString::fromUtf8("page_4"));
        verticalLayout_4 = new QVBoxLayout(page_4);
        verticalLayout_4->setContentsMargins(0, 0, 0, 0);
        verticalLayout_4->setObjectName(QString::fromUtf8("verticalLayout_4"));
        urlHomeEmail = new KUrlLabel(page_4);
        urlHomeEmail->setObjectName(QString::fromUtf8("urlHomeEmail"));

        verticalLayout_4->addWidget(urlHomeEmail);

        wsHomeEmail->addWidget(page_4);
        page_5 = new QWidget();
        page_5->setObjectName(QString::fromUtf8("page_5"));
        verticalLayout_5 = new QVBoxLayout(page_5);
        verticalLayout_5->setContentsMargins(0, 0, 0, 0);
        verticalLayout_5->setObjectName(QString::fromUtf8("verticalLayout_5"));
        leHomeEmail = new QLineEdit(page_5);
        leHomeEmail->setObjectName(QString::fromUtf8("leHomeEmail"));

        verticalLayout_5->addWidget(leHomeEmail);

        wsHomeEmail->addWidget(page_5);

        formLayout_4->setWidget(6, QFormLayout::FieldRole, wsHomeEmail);

        tabWidget3->addTab(tab1, QString());
        tab2 = new QWidget();
        tab2->setObjectName(QString::fromUtf8("tab2"));
        formLayout_3 = new QFormLayout(tab2);
        formLayout_3->setObjectName(QString::fromUtf8("formLayout_3"));
        lblStreet_2 = new QLabel(tab2);
        lblStreet_2->setObjectName(QString::fromUtf8("lblStreet_2"));

        formLayout_3->setWidget(0, QFormLayout::LabelRole, lblStreet_2);

        leWorkStreet = new QLineEdit(tab2);
        leWorkStreet->setObjectName(QString::fromUtf8("leWorkStreet"));

        formLayout_3->setWidget(0, QFormLayout::FieldRole, leWorkStreet);

        leWorkExtAddr = new QLineEdit(tab2);
        leWorkExtAddr->setObjectName(QString::fromUtf8("leWorkExtAddr"));

        formLayout_3->setWidget(1, QFormLayout::FieldRole, leWorkExtAddr);

        lblPOBox_2 = new QLabel(tab2);
        lblPOBox_2->setObjectName(QString::fromUtf8("lblPOBox_2"));

        formLayout_3->setWidget(2, QFormLayout::LabelRole, lblPOBox_2);

        leWorkPOBox = new QLineEdit(tab2);
        leWorkPOBox->setObjectName(QString::fromUtf8("leWorkPOBox"));

        formLayout_3->setWidget(2, QFormLayout::FieldRole, leWorkPOBox);

        lblCity_2 = new QLabel(tab2);
        lblCity_2->setObjectName(QString::fromUtf8("lblCity_2"));

        formLayout_3->setWidget(3, QFormLayout::LabelRole, lblCity_2);

        leWorkCity = new QLineEdit(tab2);
        leWorkCity->setObjectName(QString::fromUtf8("leWorkCity"));

        formLayout_3->setWidget(3, QFormLayout::FieldRole, leWorkCity);

        lblState_2 = new QLabel(tab2);
        lblState_2->setObjectName(QString::fromUtf8("lblState_2"));

        formLayout_3->setWidget(4, QFormLayout::LabelRole, lblState_2);

        leWorkPostalCode = new QLineEdit(tab2);
        leWorkPostalCode->setObjectName(QString::fromUtf8("leWorkPostalCode"));

        formLayout_3->setWidget(4, QFormLayout::FieldRole, leWorkPostalCode);

        lblCountry_2 = new QLabel(tab2);
        lblCountry_2->setObjectName(QString::fromUtf8("lblCountry_2"));

        formLayout_3->setWidget(5, QFormLayout::LabelRole, lblCountry_2);

        leWorkCountry = new QLineEdit(tab2);
        leWorkCountry->setObjectName(QString::fromUtf8("leWorkCountry"));

        formLayout_3->setWidget(5, QFormLayout::FieldRole, leWorkCountry);

        lblEmail_2 = new QLabel(tab2);
        lblEmail_2->setObjectName(QString::fromUtf8("lblEmail_2"));

        formLayout_3->setWidget(6, QFormLayout::LabelRole, lblEmail_2);

        wsWorkEmail = new QStackedWidget(tab2);
        wsWorkEmail->setObjectName(QString::fromUtf8("wsWorkEmail"));
        page_6 = new QWidget();
        page_6->setObjectName(QString::fromUtf8("page_6"));
        verticalLayout_6 = new QVBoxLayout(page_6);
        verticalLayout_6->setContentsMargins(0, 0, 0, 0);
        verticalLayout_6->setObjectName(QString::fromUtf8("verticalLayout_6"));
        urlWorkEmail = new KUrlLabel(page_6);
        urlWorkEmail->setObjectName(QString::fromUtf8("urlWorkEmail"));

        verticalLayout_6->addWidget(urlWorkEmail);

        wsWorkEmail->addWidget(page_6);
        page_7 = new QWidget();
        page_7->setObjectName(QString::fromUtf8("page_7"));
        verticalLayout_7 = new QVBoxLayout(page_7);
        verticalLayout_7->setContentsMargins(0, 0, 0, 0);
        verticalLayout_7->setObjectName(QString::fromUtf8("verticalLayout_7"));
        leWorkEmail = new QLineEdit(page_7);
        leWorkEmail->setObjectName(QString::fromUtf8("leWorkEmail"));

        verticalLayout_7->addWidget(leWorkEmail);

        wsWorkEmail->addWidget(page_7);

        formLayout_3->setWidget(6, QFormLayout::FieldRole, wsWorkEmail);

        tabWidget3->addTab(tab2, QString());
        tab3 = new QWidget();
        tab3->setObjectName(QString::fromUtf8("tab3"));
        formLayout_2 = new QFormLayout(tab3);
        formLayout_2->setObjectName(QString::fromUtf8("formLayout_2"));
        lblCompany = new QLabel(tab3);
        lblCompany->setObjectName(QString::fromUtf8("lblCompany"));

        formLayout_2->setWidget(0, QFormLayout::LabelRole, lblCompany);

        leCompany = new QLineEdit(tab3);
        leCompany->setObjectName(QString::fromUtf8("leCompany"));

        formLayout_2->setWidget(0, QFormLayout::FieldRole, leCompany);

        lblDepartment = new QLabel(tab3);
        lblDepartment->setObjectName(QString::fromUtf8("lblDepartment"));

        formLayout_2->setWidget(1, QFormLayout::LabelRole, lblDepartment);

        leDepartment = new QLineEdit(tab3);
        leDepartment->setObjectName(QString::fromUtf8("leDepartment"));

        formLayout_2->setWidget(1, QFormLayout::FieldRole, leDepartment);

        lblPosition = new QLabel(tab3);
        lblPosition->setObjectName(QString::fromUtf8("lblPosition"));

        formLayout_2->setWidget(2, QFormLayout::LabelRole, lblPosition);

        lePosition = new QLineEdit(tab3);
        lePosition->setObjectName(QString::fromUtf8("lePosition"));

        formLayout_2->setWidget(2, QFormLayout::FieldRole, lePosition);

        lblRole = new QLabel(tab3);
        lblRole->setObjectName(QString::fromUtf8("lblRole"));

        formLayout_2->setWidget(3, QFormLayout::LabelRole, lblRole);

        leRole = new QLineEdit(tab3);
        leRole->setObjectName(QString::fromUtf8("leRole"));

        formLayout_2->setWidget(3, QFormLayout::FieldRole, leRole);

        tabWidget3->addTab(tab3, QString());
        tab4 = new QWidget();
        tab4->setObjectName(QString::fromUtf8("tab4"));
        formLayout = new QFormLayout(tab4);
        formLayout->setObjectName(QString::fromUtf8("formLayout"));
        lblPhoneHome = new QLabel(tab4);
        lblPhoneHome->setObjectName(QString::fromUtf8("lblPhoneHome"));

        formLayout->setWidget(0, QFormLayout::LabelRole, lblPhoneHome);

        lePhoneHome = new QLineEdit(tab4);
        lePhoneHome->setObjectName(QString::fromUtf8("lePhoneHome"));

        formLayout->setWidget(0, QFormLayout::FieldRole, lePhoneHome);

        lblPhoneWork = new QLabel(tab4);
        lblPhoneWork->setObjectName(QString::fromUtf8("lblPhoneWork"));

        formLayout->setWidget(1, QFormLayout::LabelRole, lblPhoneWork);

        lePhoneWork = new QLineEdit(tab4);
        lePhoneWork->setObjectName(QString::fromUtf8("lePhoneWork"));

        formLayout->setWidget(1, QFormLayout::FieldRole, lePhoneWork);

        lblPhoneFax = new QLabel(tab4);
        lblPhoneFax->setObjectName(QString::fromUtf8("lblPhoneFax"));

        formLayout->setWidget(2, QFormLayout::LabelRole, lblPhoneFax);

        lePhoneFax = new QLineEdit(tab4);
        lePhoneFax->setObjectName(QString::fromUtf8("lePhoneFax"));

        formLayout->setWidget(2, QFormLayout::FieldRole, lePhoneFax);

        lblPhoneCell = new QLabel(tab4);
        lblPhoneCell->setObjectName(QString::fromUtf8("lblPhoneCell"));

        formLayout->setWidget(3, QFormLayout::LabelRole, lblPhoneCell);

        lePhoneCell = new QLineEdit(tab4);
        lePhoneCell->setObjectName(QString::fromUtf8("lePhoneCell"));

        formLayout->setWidget(3, QFormLayout::FieldRole, lePhoneCell);

        tabWidget3->addTab(tab4, QString());
        tab5 = new QWidget();
        tab5->setObjectName(QString::fromUtf8("tab5"));
        verticalLayout_2 = new QVBoxLayout(tab5);
        verticalLayout_2->setObjectName(QString::fromUtf8("verticalLayout_2"));
        teAbout = new KTextEdit(tab5);
        teAbout->setObjectName(QString::fromUtf8("teAbout"));

        verticalLayout_2->addWidget(teAbout);

        tabWidget3->addTab(tab5, QString());

        gridLayout_3->addWidget(tabWidget3, 0, 0, 1, 1);

        QWidget::setTabOrder(tabWidget3, leNick);
        QWidget::setTabOrder(leNick, leName);
        QWidget::setTabOrder(leName, leJID);
        QWidget::setTabOrder(leJID, leBirthday);
        QWidget::setTabOrder(leBirthday, leTimezone);
        QWidget::setTabOrder(leTimezone, btnSelectPhoto);
        QWidget::setTabOrder(btnSelectPhoto, btnClearPhoto);
        QWidget::setTabOrder(btnClearPhoto, leHomeStreet);
        QWidget::setTabOrder(leHomeStreet, leHomeExtAddr);
        QWidget::setTabOrder(leHomeExtAddr, leHomePOBox);
        QWidget::setTabOrder(leHomePOBox, leHomeCity);
        QWidget::setTabOrder(leHomeCity, leHomePostalCode);
        QWidget::setTabOrder(leHomePostalCode, leHomeCountry);
        QWidget::setTabOrder(leHomeCountry, leWorkStreet);
        QWidget::setTabOrder(leWorkStreet, leWorkExtAddr);
        QWidget::setTabOrder(leWorkExtAddr, leWorkPOBox);
        QWidget::setTabOrder(leWorkPOBox, leWorkCity);
        QWidget::setTabOrder(leWorkCity, leWorkPostalCode);
        QWidget::setTabOrder(leWorkPostalCode, leWorkCountry);
        QWidget::setTabOrder(leWorkCountry, leCompany);
        QWidget::setTabOrder(leCompany, leDepartment);
        QWidget::setTabOrder(leDepartment, lePosition);
        QWidget::setTabOrder(lePosition, leRole);
        QWidget::setTabOrder(leRole, lePhoneHome);
        QWidget::setTabOrder(lePhoneHome, lePhoneWork);
        QWidget::setTabOrder(lePhoneWork, lePhoneFax);
        QWidget::setTabOrder(lePhoneFax, lePhoneCell);
        QWidget::setTabOrder(lePhoneCell, leWorkEmail);
        QWidget::setTabOrder(leWorkEmail, leHomepage);

        retranslateUi(dlgVCard);

        tabWidget3->setCurrentIndex(0);
        wsHomepage->setCurrentIndex(0);
        wsHomeEmail->setCurrentIndex(0);
        wsWorkEmail->setCurrentIndex(0);


        QMetaObject::connectSlotsByName(dlgVCard);
    } // setupUi

    void retranslateUi(QWidget *dlgVCard)
    {
        lblStatus->setText(QString());
        lblNick->setText(tr2i18n("Nickname:", 0));
        lblName->setText(tr2i18n("Full name:", 0));
        leName->setText(QString());
        lblJID->setText(tr2i18n("Jabber ID:", 0));
        lblHomepage->setText(tr2i18n("Homepage:", 0));
        lblBirthday->setText(tr2i18n("Birthday:", 0));
        lblTimezone->setText(tr2i18n("Timezone:", 0));
        groupBox1->setTitle(tr2i18n("Photo", 0));
        btnSelectPhoto->setText(tr2i18n("&Select Photo...", 0));
        btnClearPhoto->setText(tr2i18n("Clear Pho&to", 0));
        tabWidget3->setTabText(tabWidget3->indexOf(tab), tr2i18n("&General", 0));
        lblStreet->setText(tr2i18n("Street:", 0));
        lblPOBox->setText(tr2i18n("PO box:", 0));
        lblCity->setText(tr2i18n("City:", 0));
        lblState->setText(tr2i18n("Postal code:", 0));
        lblCountry->setText(tr2i18n("Country:", 0));
        lblEmail->setText(tr2i18n("Email:", 0));
        tabWidget3->setTabText(tabWidget3->indexOf(tab1), tr2i18n("&Home Address", 0));
        lblStreet_2->setText(tr2i18n("Street:", 0));
        lblPOBox_2->setText(tr2i18n("PO box:", 0));
        lblCity_2->setText(tr2i18n("City:", 0));
        lblState_2->setText(tr2i18n("Postal code:", 0));
        lblCountry_2->setText(tr2i18n("Country:", 0));
        lblEmail_2->setText(tr2i18n("Email:", 0));
        tabWidget3->setTabText(tabWidget3->indexOf(tab2), tr2i18n("&Work Address", 0));
        lblCompany->setText(tr2i18n("Company:", 0));
        lblDepartment->setText(tr2i18n("Department:", 0));
        lblPosition->setText(tr2i18n("Position:", 0));
        lblRole->setText(tr2i18n("Role:", 0));
        tabWidget3->setTabText(tabWidget3->indexOf(tab3), tr2i18n("Wor&k Information", 0));
        lblPhoneHome->setText(tr2i18n("Home:", 0));
        lblPhoneWork->setText(tr2i18n("Work:", 0));
        lblPhoneFax->setText(tr2i18n("Fax:", 0));
        lblPhoneCell->setText(tr2i18n("Cell:", 0));
        tabWidget3->setTabText(tabWidget3->indexOf(tab4), tr2i18n("Phone &Numbers", 0));
        tabWidget3->setTabText(tabWidget3->indexOf(tab5), tr2i18n("A&bout", 0));
        Q_UNUSED(dlgVCard);
    } // retranslateUi

};

namespace Ui {
    class dlgVCard: public Ui_dlgVCard {};
} // namespace Ui

QT_END_NAMESPACE

#endif // DLGVCARD_H

