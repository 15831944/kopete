#include <kdialog.h>
#include <klocale.h>

/********************************************************************************
** Form generated from reading UI file 'qqvcard.ui'
**
** Created by: Qt User Interface Compiler version 4.8.7
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_QQVCARD_H
#define UI_QQVCARD_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtGui/QApplication>
#include <QtGui/QButtonGroup>
#include <QtGui/QComboBox>
#include <QtGui/QGridLayout>
#include <QtGui/QGroupBox>
#include <QtGui/QHBoxLayout>
#include <QtGui/QHeaderView>
#include <QtGui/QLabel>
#include <QtGui/QLineEdit>
#include <QtGui/QSpacerItem>
#include <QtGui/QTabWidget>
#include <QtGui/QTextEdit>
#include <QtGui/QVBoxLayout>
#include <QtGui/QWidget>

QT_BEGIN_NAMESPACE

class Ui_QQVCard
{
public:
    QVBoxLayout *vboxLayout;
    QTabWidget *tabWidget;
    QWidget *tab;
    QVBoxLayout *vboxLayout1;
    QGridLayout *gridLayout;
    QLabel *label;
    QLineEdit *leQQId;
    QLabel *lblNick;
    QLineEdit *leNick;
    QLabel *lblQQId;
    QHBoxLayout *hboxLayout;
    QLabel *lblName;
    QLineEdit *leName;
    QLabel *lblAge;
    QLineEdit *leAge;
    QLabel *lblGender;
    QComboBox *cbGender;
    QSpacerItem *spacerItem;
    QGridLayout *gridLayout1;
    QTextEdit *teSignature;
    QLabel *lblSignature;
    QSpacerItem *spacerItem1;
    QWidget *tab_2;
    QVBoxLayout *vboxLayout2;
    QGroupBox *groupBox_2;
    QVBoxLayout *vboxLayout3;
    QGridLayout *gridLayout2;
    QLineEdit *leCity;
    QLabel *lblStreet;
    QLineEdit *leZipcode;
    QLabel *lblZip;
    QLabel *lblCountry;
    QLineEdit *leState;
    QLineEdit *leCountry;
    QLabel *lblState;
    QLabel *lblCity;
    QLineEdit *leStreet;
    QGroupBox *groupBox;
    QVBoxLayout *vboxLayout4;
    QGridLayout *gridLayout3;
    QLabel *lblPhoneHome;
    QLabel *lblPhoneCell;
    QLabel *lblPhoneQQ;
    QLineEdit *lePhoneCell;
    QLineEdit *lePhoneHome;
    QLineEdit *lePhoneQQ;
    QSpacerItem *spacerItem2;
    QWidget *tab_9;
    QVBoxLayout *vboxLayout5;
    QGridLayout *gridLayout4;
    QComboBox *cbZodiac;
    QLabel *lblHomepage;
    QLabel *lblOccupation;
    QLabel *label_2;
    QLabel *lblZodiac;
    QLineEdit *leGraduate;
    QLabel *lblEmail;
    QComboBox *cbHoroscope;
    QLabel *lblHoroscope;
    QLineEdit *leOccupation;
    QLineEdit *leHomepage;
    QLineEdit *leEmail;
    QSpacerItem *spacerItem3;
    QGridLayout *gridLayout5;
    QTextEdit *teIntroduction;
    QLabel *lblIntroduction;
    QSpacerItem *spacerItem4;
    QLabel *lblStatus;

    void setupUi(QWidget *QQVCard)
    {
        if (QQVCard->objectName().isEmpty())
            QQVCard->setObjectName(QString::fromUtf8("QQVCard"));
        QQVCard->resize(611, 461);
        QQVCard->setMinimumSize(QSize(50, 0));
        vboxLayout = new QVBoxLayout(QQVCard);
        vboxLayout->setSpacing(6);
        vboxLayout->setObjectName(QString::fromUtf8("vboxLayout"));
        vboxLayout->setContentsMargins(9, 9, 9, 9);
        tabWidget = new QTabWidget(QQVCard);
        tabWidget->setObjectName(QString::fromUtf8("tabWidget"));
        tab = new QWidget();
        tab->setObjectName(QString::fromUtf8("tab"));
        vboxLayout1 = new QVBoxLayout(tab);
        vboxLayout1->setSpacing(6);
        vboxLayout1->setObjectName(QString::fromUtf8("vboxLayout1"));
        vboxLayout1->setContentsMargins(9, 9, 9, 9);
        gridLayout = new QGridLayout();
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        gridLayout->setHorizontalSpacing(6);
        gridLayout->setVerticalSpacing(6);
        gridLayout->setContentsMargins(0, 0, 0, 0);
        label = new QLabel(tab);
        label->setObjectName(QString::fromUtf8("label"));
        QSizePolicy sizePolicy(QSizePolicy::Fixed, QSizePolicy::Fixed);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(label->sizePolicy().hasHeightForWidth());
        label->setSizePolicy(sizePolicy);
        label->setMinimumSize(QSize(96, 96));
        label->setMaximumSize(QSize(96, 96));
        label->setFrameShape(QFrame::Panel);

        gridLayout->addWidget(label, 0, 2, 2, 1);

        leQQId = new QLineEdit(tab);
        leQQId->setObjectName(QString::fromUtf8("leQQId"));
        QSizePolicy sizePolicy1(QSizePolicy::Expanding, QSizePolicy::Fixed);
        sizePolicy1.setHorizontalStretch(0);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(leQQId->sizePolicy().hasHeightForWidth());
        leQQId->setSizePolicy(sizePolicy1);

        gridLayout->addWidget(leQQId, 0, 1, 1, 1);

        lblNick = new QLabel(tab);
        lblNick->setObjectName(QString::fromUtf8("lblNick"));

        gridLayout->addWidget(lblNick, 1, 0, 1, 1);

        leNick = new QLineEdit(tab);
        leNick->setObjectName(QString::fromUtf8("leNick"));
        sizePolicy1.setHeightForWidth(leNick->sizePolicy().hasHeightForWidth());
        leNick->setSizePolicy(sizePolicy1);

        gridLayout->addWidget(leNick, 1, 1, 1, 1);

        lblQQId = new QLabel(tab);
        lblQQId->setObjectName(QString::fromUtf8("lblQQId"));

        gridLayout->addWidget(lblQQId, 0, 0, 1, 1);


        vboxLayout1->addLayout(gridLayout);

        hboxLayout = new QHBoxLayout();
        hboxLayout->setSpacing(10);
        hboxLayout->setObjectName(QString::fromUtf8("hboxLayout"));
        hboxLayout->setContentsMargins(0, 0, 0, 0);
        lblName = new QLabel(tab);
        lblName->setObjectName(QString::fromUtf8("lblName"));

        hboxLayout->addWidget(lblName);

        leName = new QLineEdit(tab);
        leName->setObjectName(QString::fromUtf8("leName"));
        sizePolicy1.setHeightForWidth(leName->sizePolicy().hasHeightForWidth());
        leName->setSizePolicy(sizePolicy1);

        hboxLayout->addWidget(leName);

        lblAge = new QLabel(tab);
        lblAge->setObjectName(QString::fromUtf8("lblAge"));

        hboxLayout->addWidget(lblAge);

        leAge = new QLineEdit(tab);
        leAge->setObjectName(QString::fromUtf8("leAge"));
        QSizePolicy sizePolicy2(QSizePolicy::Preferred, QSizePolicy::Fixed);
        sizePolicy2.setHorizontalStretch(0);
        sizePolicy2.setVerticalStretch(0);
        sizePolicy2.setHeightForWidth(leAge->sizePolicy().hasHeightForWidth());
        leAge->setSizePolicy(sizePolicy2);
        leAge->setMaximumSize(QSize(60, 16777215));

        hboxLayout->addWidget(leAge);

        lblGender = new QLabel(tab);
        lblGender->setObjectName(QString::fromUtf8("lblGender"));

        hboxLayout->addWidget(lblGender);

        cbGender = new QComboBox(tab);
        cbGender->setObjectName(QString::fromUtf8("cbGender"));

        hboxLayout->addWidget(cbGender);


        vboxLayout1->addLayout(hboxLayout);

        spacerItem = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        vboxLayout1->addItem(spacerItem);

        gridLayout1 = new QGridLayout();
        gridLayout1->setObjectName(QString::fromUtf8("gridLayout1"));
        gridLayout1->setHorizontalSpacing(6);
        gridLayout1->setVerticalSpacing(6);
        gridLayout1->setContentsMargins(0, 0, 0, 0);
        teSignature = new QTextEdit(tab);
        teSignature->setObjectName(QString::fromUtf8("teSignature"));
        teSignature->setMinimumSize(QSize(120, 0));

        gridLayout1->addWidget(teSignature, 1, 1, 1, 1);

        lblSignature = new QLabel(tab);
        lblSignature->setObjectName(QString::fromUtf8("lblSignature"));

        gridLayout1->addWidget(lblSignature, 0, 0, 1, 2);


        vboxLayout1->addLayout(gridLayout1);

        spacerItem1 = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        vboxLayout1->addItem(spacerItem1);

        tabWidget->addTab(tab, QString());
        tab_2 = new QWidget();
        tab_2->setObjectName(QString::fromUtf8("tab_2"));
        vboxLayout2 = new QVBoxLayout(tab_2);
        vboxLayout2->setSpacing(6);
        vboxLayout2->setObjectName(QString::fromUtf8("vboxLayout2"));
        vboxLayout2->setContentsMargins(9, 9, 9, 9);
        groupBox_2 = new QGroupBox(tab_2);
        groupBox_2->setObjectName(QString::fromUtf8("groupBox_2"));
        vboxLayout3 = new QVBoxLayout(groupBox_2);
        vboxLayout3->setSpacing(6);
        vboxLayout3->setObjectName(QString::fromUtf8("vboxLayout3"));
        vboxLayout3->setContentsMargins(9, 9, 9, 9);
        gridLayout2 = new QGridLayout();
        gridLayout2->setObjectName(QString::fromUtf8("gridLayout2"));
        gridLayout2->setHorizontalSpacing(6);
        gridLayout2->setVerticalSpacing(6);
        gridLayout2->setContentsMargins(0, 0, 0, 0);
        leCity = new QLineEdit(groupBox_2);
        leCity->setObjectName(QString::fromUtf8("leCity"));

        gridLayout2->addWidget(leCity, 1, 2, 1, 1);

        lblStreet = new QLabel(groupBox_2);
        lblStreet->setObjectName(QString::fromUtf8("lblStreet"));

        gridLayout2->addWidget(lblStreet, 0, 0, 1, 1);

        leZipcode = new QLineEdit(groupBox_2);
        leZipcode->setObjectName(QString::fromUtf8("leZipcode"));

        gridLayout2->addWidget(leZipcode, 3, 2, 1, 1);

        lblZip = new QLabel(groupBox_2);
        lblZip->setObjectName(QString::fromUtf8("lblZip"));

        gridLayout2->addWidget(lblZip, 3, 0, 1, 2);

        lblCountry = new QLabel(groupBox_2);
        lblCountry->setObjectName(QString::fromUtf8("lblCountry"));

        gridLayout2->addWidget(lblCountry, 4, 0, 1, 1);

        leState = new QLineEdit(groupBox_2);
        leState->setObjectName(QString::fromUtf8("leState"));

        gridLayout2->addWidget(leState, 2, 2, 1, 1);

        leCountry = new QLineEdit(groupBox_2);
        leCountry->setObjectName(QString::fromUtf8("leCountry"));

        gridLayout2->addWidget(leCountry, 4, 2, 1, 1);

        lblState = new QLabel(groupBox_2);
        lblState->setObjectName(QString::fromUtf8("lblState"));

        gridLayout2->addWidget(lblState, 2, 0, 1, 1);

        lblCity = new QLabel(groupBox_2);
        lblCity->setObjectName(QString::fromUtf8("lblCity"));

        gridLayout2->addWidget(lblCity, 1, 0, 1, 2);

        leStreet = new QLineEdit(groupBox_2);
        leStreet->setObjectName(QString::fromUtf8("leStreet"));

        gridLayout2->addWidget(leStreet, 0, 2, 1, 1);


        vboxLayout3->addLayout(gridLayout2);


        vboxLayout2->addWidget(groupBox_2);

        groupBox = new QGroupBox(tab_2);
        groupBox->setObjectName(QString::fromUtf8("groupBox"));
        vboxLayout4 = new QVBoxLayout(groupBox);
        vboxLayout4->setSpacing(6);
        vboxLayout4->setObjectName(QString::fromUtf8("vboxLayout4"));
        vboxLayout4->setContentsMargins(9, 9, 9, 9);
        gridLayout3 = new QGridLayout();
        gridLayout3->setObjectName(QString::fromUtf8("gridLayout3"));
        gridLayout3->setHorizontalSpacing(6);
        gridLayout3->setVerticalSpacing(6);
        gridLayout3->setContentsMargins(0, 0, 0, 0);
        lblPhoneHome = new QLabel(groupBox);
        lblPhoneHome->setObjectName(QString::fromUtf8("lblPhoneHome"));

        gridLayout3->addWidget(lblPhoneHome, 0, 0, 1, 1);

        lblPhoneCell = new QLabel(groupBox);
        lblPhoneCell->setObjectName(QString::fromUtf8("lblPhoneCell"));

        gridLayout3->addWidget(lblPhoneCell, 1, 0, 1, 1);

        lblPhoneQQ = new QLabel(groupBox);
        lblPhoneQQ->setObjectName(QString::fromUtf8("lblPhoneQQ"));

        gridLayout3->addWidget(lblPhoneQQ, 2, 0, 1, 1);

        lePhoneCell = new QLineEdit(groupBox);
        lePhoneCell->setObjectName(QString::fromUtf8("lePhoneCell"));

        gridLayout3->addWidget(lePhoneCell, 1, 1, 1, 1);

        lePhoneHome = new QLineEdit(groupBox);
        lePhoneHome->setObjectName(QString::fromUtf8("lePhoneHome"));

        gridLayout3->addWidget(lePhoneHome, 0, 1, 1, 1);

        lePhoneQQ = new QLineEdit(groupBox);
        lePhoneQQ->setObjectName(QString::fromUtf8("lePhoneQQ"));

        gridLayout3->addWidget(lePhoneQQ, 2, 1, 1, 1);


        vboxLayout4->addLayout(gridLayout3);


        vboxLayout2->addWidget(groupBox);

        spacerItem2 = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        vboxLayout2->addItem(spacerItem2);

        tabWidget->addTab(tab_2, QString());
        tab_9 = new QWidget();
        tab_9->setObjectName(QString::fromUtf8("tab_9"));
        vboxLayout5 = new QVBoxLayout(tab_9);
        vboxLayout5->setSpacing(6);
        vboxLayout5->setObjectName(QString::fromUtf8("vboxLayout5"));
        vboxLayout5->setContentsMargins(9, 9, 9, 9);
        gridLayout4 = new QGridLayout();
        gridLayout4->setObjectName(QString::fromUtf8("gridLayout4"));
        gridLayout4->setHorizontalSpacing(6);
        gridLayout4->setVerticalSpacing(6);
        gridLayout4->setContentsMargins(0, 0, 0, 0);
        cbZodiac = new QComboBox(tab_9);
        cbZodiac->setObjectName(QString::fromUtf8("cbZodiac"));

        gridLayout4->addWidget(cbZodiac, 0, 3, 1, 1);

        lblHomepage = new QLabel(tab_9);
        lblHomepage->setObjectName(QString::fromUtf8("lblHomepage"));

        gridLayout4->addWidget(lblHomepage, 3, 0, 1, 1);

        lblOccupation = new QLabel(tab_9);
        lblOccupation->setObjectName(QString::fromUtf8("lblOccupation"));

        gridLayout4->addWidget(lblOccupation, 0, 0, 1, 1);

        label_2 = new QLabel(tab_9);
        label_2->setObjectName(QString::fromUtf8("label_2"));

        gridLayout4->addWidget(label_2, 1, 0, 1, 1);

        lblZodiac = new QLabel(tab_9);
        lblZodiac->setObjectName(QString::fromUtf8("lblZodiac"));

        gridLayout4->addWidget(lblZodiac, 0, 2, 1, 1);

        leGraduate = new QLineEdit(tab_9);
        leGraduate->setObjectName(QString::fromUtf8("leGraduate"));
        sizePolicy1.setHeightForWidth(leGraduate->sizePolicy().hasHeightForWidth());
        leGraduate->setSizePolicy(sizePolicy1);

        gridLayout4->addWidget(leGraduate, 1, 1, 1, 1);

        lblEmail = new QLabel(tab_9);
        lblEmail->setObjectName(QString::fromUtf8("lblEmail"));

        gridLayout4->addWidget(lblEmail, 2, 0, 1, 1);

        cbHoroscope = new QComboBox(tab_9);
        cbHoroscope->setObjectName(QString::fromUtf8("cbHoroscope"));

        gridLayout4->addWidget(cbHoroscope, 1, 3, 1, 1);

        lblHoroscope = new QLabel(tab_9);
        lblHoroscope->setObjectName(QString::fromUtf8("lblHoroscope"));

        gridLayout4->addWidget(lblHoroscope, 1, 2, 1, 1);

        leOccupation = new QLineEdit(tab_9);
        leOccupation->setObjectName(QString::fromUtf8("leOccupation"));
        sizePolicy1.setHeightForWidth(leOccupation->sizePolicy().hasHeightForWidth());
        leOccupation->setSizePolicy(sizePolicy1);

        gridLayout4->addWidget(leOccupation, 0, 1, 1, 1);

        leHomepage = new QLineEdit(tab_9);
        leHomepage->setObjectName(QString::fromUtf8("leHomepage"));
        sizePolicy1.setHeightForWidth(leHomepage->sizePolicy().hasHeightForWidth());
        leHomepage->setSizePolicy(sizePolicy1);

        gridLayout4->addWidget(leHomepage, 3, 1, 1, 3);

        leEmail = new QLineEdit(tab_9);
        leEmail->setObjectName(QString::fromUtf8("leEmail"));
        sizePolicy1.setHeightForWidth(leEmail->sizePolicy().hasHeightForWidth());
        leEmail->setSizePolicy(sizePolicy1);

        gridLayout4->addWidget(leEmail, 2, 1, 1, 3);


        vboxLayout5->addLayout(gridLayout4);

        spacerItem3 = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        vboxLayout5->addItem(spacerItem3);

        gridLayout5 = new QGridLayout();
        gridLayout5->setObjectName(QString::fromUtf8("gridLayout5"));
        gridLayout5->setHorizontalSpacing(6);
        gridLayout5->setVerticalSpacing(6);
        gridLayout5->setContentsMargins(0, 0, 0, 0);
        teIntroduction = new QTextEdit(tab_9);
        teIntroduction->setObjectName(QString::fromUtf8("teIntroduction"));

        gridLayout5->addWidget(teIntroduction, 1, 1, 1, 1);

        lblIntroduction = new QLabel(tab_9);
        lblIntroduction->setObjectName(QString::fromUtf8("lblIntroduction"));

        gridLayout5->addWidget(lblIntroduction, 0, 0, 1, 2);


        vboxLayout5->addLayout(gridLayout5);

        spacerItem4 = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        vboxLayout5->addItem(spacerItem4);

        tabWidget->addTab(tab_9, QString());

        vboxLayout->addWidget(tabWidget);

        lblStatus = new QLabel(QQVCard);
        lblStatus->setObjectName(QString::fromUtf8("lblStatus"));

        vboxLayout->addWidget(lblStatus);

        QWidget::setTabOrder(tabWidget, leQQId);
        QWidget::setTabOrder(leQQId, leNick);
        QWidget::setTabOrder(leNick, leName);
        QWidget::setTabOrder(leName, leAge);
        QWidget::setTabOrder(leAge, cbGender);
        QWidget::setTabOrder(cbGender, teSignature);
        QWidget::setTabOrder(teSignature, leStreet);
        QWidget::setTabOrder(leStreet, leCity);
        QWidget::setTabOrder(leCity, leState);
        QWidget::setTabOrder(leState, leZipcode);
        QWidget::setTabOrder(leZipcode, leCountry);
        QWidget::setTabOrder(leCountry, lePhoneHome);
        QWidget::setTabOrder(lePhoneHome, lePhoneCell);
        QWidget::setTabOrder(lePhoneCell, lePhoneQQ);
        QWidget::setTabOrder(lePhoneQQ, leOccupation);
        QWidget::setTabOrder(leOccupation, cbZodiac);
        QWidget::setTabOrder(cbZodiac, leGraduate);
        QWidget::setTabOrder(leGraduate, cbHoroscope);
        QWidget::setTabOrder(cbHoroscope, leEmail);
        QWidget::setTabOrder(leEmail, leHomepage);
        QWidget::setTabOrder(leHomepage, teIntroduction);

        retranslateUi(QQVCard);

        tabWidget->setCurrentIndex(0);


        QMetaObject::connectSlotsByName(QQVCard);
    } // setupUi

    void retranslateUi(QWidget *QQVCard)
    {
        label->setText(tr2i18n("Picture", 0));
        lblNick->setText(tr2i18n("Nickname:", 0));
        lblQQId->setText(tr2i18n("QQ ID:", 0));
        lblName->setText(tr2i18n("Full name:", 0));
        leName->setText(QString());
        lblAge->setText(tr2i18n("Age:", 0));
        leAge->setText(QString());
        lblGender->setText(tr2i18n("Gender:", 0));
        cbGender->clear();
        cbGender->insertItems(0, QStringList()
         << tr2i18n("Male", 0)
         << tr2i18n("Female", 0)
         << tr2i18n("N/A", 0)
        );
        lblSignature->setText(tr2i18n("Signature:", 0));
        tabWidget->setTabText(tabWidget->indexOf(tab), tr2i18n("General", 0));
        groupBox_2->setTitle(tr2i18n("Home Address", 0));
        lblStreet->setText(tr2i18n("Street:", 0));
        lblZip->setText(tr2i18n("Zip code:", 0));
        lblCountry->setText(tr2i18n("Country:", 0));
        lblState->setText(tr2i18n("State:", 0));
        lblCity->setText(tr2i18n("City:", 0));
        groupBox->setTitle(tr2i18n("Phone Numbers", 0));
        lblPhoneHome->setText(tr2i18n("Home:", 0));
        lblPhoneCell->setText(tr2i18n("Cell:", 0));
        lblPhoneQQ->setText(tr2i18n("QQ:", 0));
        tabWidget->setTabText(tabWidget->indexOf(tab_2), tr2i18n("Contact", 0));
        cbZodiac->clear();
        cbZodiac->insertItems(0, QStringList()
         << tr2i18n("Rat", 0)
         << tr2i18n("Ox", 0)
         << tr2i18n("Tiger", 0)
         << tr2i18n("Rabbit", 0)
         << tr2i18n("Dragon", 0)
         << tr2i18n("Snake", 0)
         << tr2i18n("Horse", 0)
         << tr2i18n("Ram", 0)
         << tr2i18n("Monkey", 0)
         << tr2i18n("Rooster", 0)
         << tr2i18n("Dog", 0)
         << tr2i18n("Pig", 0)
         << QString()
        );
        lblHomepage->setText(tr2i18n("Homepage:", 0));
        lblOccupation->setText(tr2i18n("Occupation:", 0));
        label_2->setText(tr2i18n("Graduate:", 0));
        lblZodiac->setText(tr2i18n("Zodiac:", 0));
        leGraduate->setText(QString());
        lblEmail->setText(tr2i18n("Email:", 0));
        cbHoroscope->clear();
        cbHoroscope->insertItems(0, QStringList()
         << tr2i18n("Aries", 0)
         << tr2i18n("Taurus", 0)
         << tr2i18n("Gemini", 0)
         << tr2i18n("Cancer", 0)
         << tr2i18n("Leo", 0)
         << tr2i18n("Virgo", 0)
         << tr2i18n("Libra", 0)
         << tr2i18n("Scorpio", 0)
         << tr2i18n("Sagittarius", 0)
         << tr2i18n("Capricorn", 0)
         << tr2i18n("Aquarius", 0)
         << tr2i18n("Pisces", 0)
        );
        lblHoroscope->setText(tr2i18n("Horoscope:", 0));
        leOccupation->setText(QString());
        leHomepage->setText(QString());
        leEmail->setText(QString());
        lblIntroduction->setText(tr2i18n("Introduction:", 0));
        tabWidget->setTabText(tabWidget->indexOf(tab_9), tr2i18n("About", 0));
        lblStatus->setText(QString());
        Q_UNUSED(QQVCard);
    } // retranslateUi

};

namespace Ui {
    class QQVCard: public Ui_QQVCard {};
} // namespace Ui

QT_END_NAMESPACE

#endif // QQVCARD_H

