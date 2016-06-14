#include <kdialog.h>
#include <klocale.h>

/********************************************************************************
** Form generated from reading UI file 'gadusearch.ui'
**
** Created by: Qt User Interface Compiler version 4.8.7
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_GADUSEARCH_H
#define UI_GADUSEARCH_H

#include <Qt3Support/Q3ButtonGroup>
#include <Qt3Support/Q3WidgetStack>
#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtGui/QApplication>
#include <QtGui/QButtonGroup>
#include <QtGui/QCheckBox>
#include <QtGui/QComboBox>
#include <QtGui/QFrame>
#include <QtGui/QGridLayout>
#include <QtGui/QHBoxLayout>
#include <QtGui/QHeaderView>
#include <QtGui/QLabel>
#include <QtGui/QLineEdit>
#include <QtGui/QRadioButton>
#include <QtGui/QSpacerItem>
#include <QtGui/QSpinBox>
#include <QtGui/QVBoxLayout>
#include <QtGui/QWidget>
#include <k3listview.h>
#include "krestrictedline.h"

QT_BEGIN_NAMESPACE

class Ui_GaduPublicDirectory
{
public:
    QVBoxLayout *verticalLayout_2;
    Q3WidgetStack *pubsearch;
    QWidget *page;
    QVBoxLayout *verticalLayout;
    Q3ButtonGroup *buttonGroup2;
    QVBoxLayout *vboxLayout;
    QRadioButton *radioByData;
    QFrame *frame;
    QGridLayout *gridLayout;
    QSpacerItem *spacerItem;
    QVBoxLayout *vboxLayout1;
    QLineEdit *nameS;
    QLineEdit *surname;
    QLineEdit *nick;
    QLineEdit *cityS;
    QVBoxLayout *vboxLayout2;
    QLabel *textLabel1a;
    QLabel *textLabel1_2;
    QLabel *textLabel1_3a;
    QLabel *textLabel1_3_2a;
    QHBoxLayout *hboxLayout;
    QLabel *textLabel1_2_2a;
    QSpinBox *ageFrom;
    QLabel *textLabel1_2_4;
    QSpinBox *ageTo;
    QSpacerItem *spacerItem1;
    QHBoxLayout *hboxLayout1;
    QLabel *textLabel1_4a;
    QComboBox *gender;
    QRadioButton *radioByUin;
    QHBoxLayout *hboxLayout2;
    QSpacerItem *spacerItem2;
    QLabel *uin_static;
    KRestrictedLine *UIN;
    QHBoxLayout *hboxLayout3;
    QCheckBox *onlyOnline;
    QSpacerItem *spacerItem3;
    QWidget *page_2;
    QGridLayout *gridLayout1;
    K3ListView *listFound;
    QSpacerItem *spacerItem4;

    void setupUi(QWidget *GaduPublicDirectory)
    {
        if (GaduPublicDirectory->objectName().isEmpty())
            GaduPublicDirectory->setObjectName(QString::fromUtf8("GaduPublicDirectory"));
        GaduPublicDirectory->resize(540, 355);
        verticalLayout_2 = new QVBoxLayout(GaduPublicDirectory);
        verticalLayout_2->setSpacing(0);
        verticalLayout_2->setContentsMargins(0, 0, 0, 0);
        verticalLayout_2->setObjectName(QString::fromUtf8("verticalLayout_2"));
        pubsearch = new Q3WidgetStack(GaduPublicDirectory);
        pubsearch->setObjectName(QString::fromUtf8("pubsearch"));
        page = new QWidget(pubsearch);
        page->setObjectName(QString::fromUtf8("page"));
        page->setGeometry(QRect(0, 0, 540, 305));
        verticalLayout = new QVBoxLayout(page);
        verticalLayout->setContentsMargins(0, 0, 0, 0);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        buttonGroup2 = new Q3ButtonGroup(page);
        buttonGroup2->setObjectName(QString::fromUtf8("buttonGroup2"));
        buttonGroup2->setFlat(true);
        buttonGroup2->setColumnLayout(0, Qt::Vertical);
        buttonGroup2->layout()->setSpacing(0);
        buttonGroup2->layout()->setContentsMargins(0, 0, 0, 0);
        vboxLayout = new QVBoxLayout();
        QBoxLayout *boxlayout = qobject_cast<QBoxLayout *>(buttonGroup2->layout());
        if (boxlayout)
            boxlayout->addLayout(vboxLayout);
        vboxLayout->setAlignment(Qt::AlignTop);
        vboxLayout->setObjectName(QString::fromUtf8("vboxLayout"));
        radioByData = new QRadioButton(buttonGroup2);
        radioByData->setObjectName(QString::fromUtf8("radioByData"));

        vboxLayout->addWidget(radioByData);

        frame = new QFrame(buttonGroup2);
        frame->setObjectName(QString::fromUtf8("frame"));
        frame->setEnabled(false);
        frame->setFrameShape(QFrame::NoFrame);
        frame->setFrameShadow(QFrame::Raised);
        frame->setLineWidth(0);
        gridLayout = new QGridLayout(frame);
        gridLayout->setSpacing(0);
        gridLayout->setContentsMargins(0, 0, 0, 0);
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        spacerItem = new QSpacerItem(16, 20, QSizePolicy::Fixed, QSizePolicy::Minimum);

        gridLayout->addItem(spacerItem, 0, 0, 1, 1);

        vboxLayout1 = new QVBoxLayout();
#ifndef UI_Q_OS_MAC
        vboxLayout1->setSpacing(6);
#endif
#ifndef UI_Q_OS_MAC
        vboxLayout1->setContentsMargins(0, 0, 0, 0);
#endif
        vboxLayout1->setObjectName(QString::fromUtf8("vboxLayout1"));
        nameS = new QLineEdit(frame);
        nameS->setObjectName(QString::fromUtf8("nameS"));

        vboxLayout1->addWidget(nameS);

        surname = new QLineEdit(frame);
        surname->setObjectName(QString::fromUtf8("surname"));

        vboxLayout1->addWidget(surname);

        nick = new QLineEdit(frame);
        nick->setObjectName(QString::fromUtf8("nick"));

        vboxLayout1->addWidget(nick);

        cityS = new QLineEdit(frame);
        cityS->setObjectName(QString::fromUtf8("cityS"));

        vboxLayout1->addWidget(cityS);


        gridLayout->addLayout(vboxLayout1, 0, 2, 1, 1);

        vboxLayout2 = new QVBoxLayout();
#ifndef UI_Q_OS_MAC
        vboxLayout2->setSpacing(6);
#endif
        vboxLayout2->setContentsMargins(0, 0, 0, 0);
        vboxLayout2->setObjectName(QString::fromUtf8("vboxLayout2"));
        textLabel1a = new QLabel(frame);
        textLabel1a->setObjectName(QString::fromUtf8("textLabel1a"));

        vboxLayout2->addWidget(textLabel1a);

        textLabel1_2 = new QLabel(frame);
        textLabel1_2->setObjectName(QString::fromUtf8("textLabel1_2"));

        vboxLayout2->addWidget(textLabel1_2);

        textLabel1_3a = new QLabel(frame);
        textLabel1_3a->setObjectName(QString::fromUtf8("textLabel1_3a"));

        vboxLayout2->addWidget(textLabel1_3a);

        textLabel1_3_2a = new QLabel(frame);
        textLabel1_3_2a->setObjectName(QString::fromUtf8("textLabel1_3_2a"));

        vboxLayout2->addWidget(textLabel1_3_2a);


        gridLayout->addLayout(vboxLayout2, 0, 1, 1, 1);

        hboxLayout = new QHBoxLayout();
#ifndef UI_Q_OS_MAC
        hboxLayout->setSpacing(6);
#endif
        hboxLayout->setContentsMargins(0, 0, 0, 0);
        hboxLayout->setObjectName(QString::fromUtf8("hboxLayout"));
        textLabel1_2_2a = new QLabel(frame);
        textLabel1_2_2a->setObjectName(QString::fromUtf8("textLabel1_2_2a"));

        hboxLayout->addWidget(textLabel1_2_2a);

        ageFrom = new QSpinBox(frame);
        ageFrom->setObjectName(QString::fromUtf8("ageFrom"));
        ageFrom->setCursor(QCursor(Qt::ArrowCursor));
        ageFrom->setButtonSymbols(QAbstractSpinBox::PlusMinus);
        ageFrom->setMinimum(0);
        ageFrom->setMaximum(120);
        ageFrom->setValue(0);

        hboxLayout->addWidget(ageFrom);

        textLabel1_2_4 = new QLabel(frame);
        textLabel1_2_4->setObjectName(QString::fromUtf8("textLabel1_2_4"));

        hboxLayout->addWidget(textLabel1_2_4);

        ageTo = new QSpinBox(frame);
        ageTo->setObjectName(QString::fromUtf8("ageTo"));
        ageTo->setCursor(QCursor(Qt::ArrowCursor));
        ageTo->setButtonSymbols(QAbstractSpinBox::PlusMinus);
        ageTo->setMinimum(0);
        ageTo->setMaximum(120);
        ageTo->setValue(0);

        hboxLayout->addWidget(ageTo);

        spacerItem1 = new QSpacerItem(297, 21, QSizePolicy::Expanding, QSizePolicy::Minimum);

        hboxLayout->addItem(spacerItem1);


        gridLayout->addLayout(hboxLayout, 1, 1, 1, 2);

        hboxLayout1 = new QHBoxLayout();
#ifndef UI_Q_OS_MAC
        hboxLayout1->setSpacing(6);
#endif
        hboxLayout1->setContentsMargins(0, 0, 0, 0);
        hboxLayout1->setObjectName(QString::fromUtf8("hboxLayout1"));
        textLabel1_4a = new QLabel(frame);
        textLabel1_4a->setObjectName(QString::fromUtf8("textLabel1_4a"));
        textLabel1_4a->setTextFormat(Qt::PlainText);
        textLabel1_4a->setScaledContents(false);

        hboxLayout1->addWidget(textLabel1_4a);

        gender = new QComboBox(frame);
        gender->setObjectName(QString::fromUtf8("gender"));
        gender->setFocusPolicy(Qt::TabFocus);

        hboxLayout1->addWidget(gender);


        gridLayout->addLayout(hboxLayout1, 2, 1, 1, 2);


        vboxLayout->addWidget(frame);

        radioByUin = new QRadioButton(buttonGroup2);
        radioByUin->setObjectName(QString::fromUtf8("radioByUin"));
        radioByUin->setAutoRepeat(true);

        vboxLayout->addWidget(radioByUin);

        hboxLayout2 = new QHBoxLayout();
#ifndef UI_Q_OS_MAC
        hboxLayout2->setSpacing(6);
#endif
        hboxLayout2->setContentsMargins(0, 0, 0, 0);
        hboxLayout2->setObjectName(QString::fromUtf8("hboxLayout2"));
        spacerItem2 = new QSpacerItem(16, 20, QSizePolicy::Fixed, QSizePolicy::Minimum);

        hboxLayout2->addItem(spacerItem2);

        uin_static = new QLabel(buttonGroup2);
        uin_static->setObjectName(QString::fromUtf8("uin_static"));
        uin_static->setEnabled(false);

        hboxLayout2->addWidget(uin_static);

        UIN = new KRestrictedLine(buttonGroup2);
        UIN->setObjectName(QString::fromUtf8("UIN"));
        UIN->setEnabled(false);

        hboxLayout2->addWidget(UIN);


        vboxLayout->addLayout(hboxLayout2);

        hboxLayout3 = new QHBoxLayout();
#ifndef UI_Q_OS_MAC
        hboxLayout3->setSpacing(6);
#endif
        hboxLayout3->setContentsMargins(0, 0, 0, 0);
        hboxLayout3->setObjectName(QString::fromUtf8("hboxLayout3"));
        onlyOnline = new QCheckBox(buttonGroup2);
        onlyOnline->setObjectName(QString::fromUtf8("onlyOnline"));

        hboxLayout3->addWidget(onlyOnline);

        spacerItem3 = new QSpacerItem(224, 21, QSizePolicy::Expanding, QSizePolicy::Minimum);

        hboxLayout3->addItem(spacerItem3);


        vboxLayout->addLayout(hboxLayout3);


        verticalLayout->addWidget(buttonGroup2);

        pubsearch->addWidget(page, -1);
        page_2 = new QWidget(pubsearch);
        page_2->setObjectName(QString::fromUtf8("page_2"));
        page_2->setGeometry(QRect(0, 0, 532, 305));
        gridLayout1 = new QGridLayout(page_2);
        gridLayout1->setObjectName(QString::fromUtf8("gridLayout1"));
        listFound = new K3ListView(page_2);
        listFound->setObjectName(QString::fromUtf8("listFound"));
        QSizePolicy sizePolicy(QSizePolicy::MinimumExpanding, QSizePolicy::MinimumExpanding);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(listFound->sizePolicy().hasHeightForWidth());
        listFound->setSizePolicy(sizePolicy);
        listFound->setMinimumSize(QSize(512, 256));
        listFound->setMaximumSize(QSize(640, 512));
        listFound->setLineWidth(2);
        listFound->setResizePolicy(Q3ScrollView::AutoOneFit);
        listFound->setSelectionMode(Q3ListView::Extended);
        listFound->setAllColumnsShowFocus(true);
        listFound->setShowSortIndicator(true);
        listFound->setResizeMode(Q3ListView::NoColumn);

        gridLayout1->addWidget(listFound, 0, 0, 1, 1);

        pubsearch->addWidget(page_2, -1);

        verticalLayout_2->addWidget(pubsearch);

        spacerItem4 = new QSpacerItem(20, 0, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout_2->addItem(spacerItem4);


        retranslateUi(GaduPublicDirectory);
        QObject::connect(radioByData, SIGNAL(toggled(bool)), frame, SLOT(setEnabled(bool)));
        QObject::connect(radioByUin, SIGNAL(toggled(bool)), uin_static, SLOT(setEnabled(bool)));
        QObject::connect(radioByUin, SIGNAL(toggled(bool)), UIN, SLOT(setEnabled(bool)));

        QMetaObject::connectSlotsByName(GaduPublicDirectory);
    } // setupUi

    void retranslateUi(QWidget *GaduPublicDirectory)
    {
        buttonGroup2->setTitle(QString());
        radioByData->setText(tr2i18n("Search by specified data:", 0));
        textLabel1a->setText(tr2i18n("Forename:", 0));
        textLabel1_2->setText(tr2i18n("Surname:", 0));
        textLabel1_3a->setText(tr2i18n("Nick:", 0));
        textLabel1_3_2a->setText(tr2i18n("City:", 0));
        textLabel1_2_2a->setText(tr2i18n("Age from:", 0));
        textLabel1_2_4->setText(tr2i18n("to:", 0));
        textLabel1_4a->setText(tr2i18n("Gender:", 0));
        gender->clear();
        gender->insertItems(0, QStringList()
         << QString()
         << tr2i18n("Male", 0)
         << tr2i18n("Female", 0)
        );
        radioByUin->setText(tr2i18n("Request information about user:", 0));
        uin_static->setText(tr2i18n("User number:", 0));
        onlyOnline->setText(tr2i18n("Lookup only those that are currently online", 0));
        Q_UNUSED(GaduPublicDirectory);
    } // retranslateUi

};

namespace Ui {
    class GaduPublicDirectory: public Ui_GaduPublicDirectory {};
} // namespace Ui

QT_END_NAMESPACE

#endif // GADUSEARCH_H

