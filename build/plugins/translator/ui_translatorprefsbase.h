#include <kdialog.h>
#include <klocale.h>

/********************************************************************************
** Form generated from reading UI file 'translatorprefsbase.ui'
**
** Created by: Qt User Interface Compiler version 4.8.7
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_TRANSLATORPREFSBASE_H
#define UI_TRANSLATORPREFSBASE_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtGui/QApplication>
#include <QtGui/QButtonGroup>
#include <QtGui/QComboBox>
#include <QtGui/QGridLayout>
#include <QtGui/QGroupBox>
#include <QtGui/QHeaderView>
#include <QtGui/QLabel>
#include <QtGui/QRadioButton>
#include <QtGui/QSpacerItem>
#include <QtGui/QVBoxLayout>
#include <QtGui/QWidget>

QT_BEGIN_NAMESPACE

class Ui_TranslatorPrefsUI
{
public:
    QVBoxLayout *vboxLayout;
    QGridLayout *gridLayout;
    QSpacerItem *spacerItem;
    QLabel *TextLabel2_2;
    QLabel *TextLabel2;
    QComboBox *defaultLanguage;
    QComboBox *service;
    QGroupBox *IncomingMessages;
    QVBoxLayout *vboxLayout1;
    QRadioButton *kcfg_IncomingDontTranslate;
    QRadioButton *kcfg_IncomingShowOriginal;
    QRadioButton *kcfg_IncomingTranslate;
    QGroupBox *OutgoingTranslate;
    QVBoxLayout *vboxLayout2;
    QRadioButton *kcfg_OutgoingDontTranslate;
    QRadioButton *kcfg_OutgoingShowOriginal;
    QRadioButton *kcfg_OutgoingTranslate;
    QRadioButton *kcfg_OutgoingAsk;
    QSpacerItem *spacerItem1;

    void setupUi(QWidget *TranslatorPrefsUI)
    {
        if (TranslatorPrefsUI->objectName().isEmpty())
            TranslatorPrefsUI->setObjectName(QString::fromUtf8("TranslatorPrefsUI"));
        TranslatorPrefsUI->resize(274, 407);
        QSizePolicy sizePolicy(QSizePolicy::Preferred, QSizePolicy::Preferred);
        sizePolicy.setHorizontalStretch(1);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(TranslatorPrefsUI->sizePolicy().hasHeightForWidth());
        TranslatorPrefsUI->setSizePolicy(sizePolicy);
        vboxLayout = new QVBoxLayout(TranslatorPrefsUI);
        vboxLayout->setSpacing(6);
        vboxLayout->setObjectName(QString::fromUtf8("vboxLayout"));
        vboxLayout->setContentsMargins(0, 0, 0, 0);
        gridLayout = new QGridLayout();
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        gridLayout->setHorizontalSpacing(6);
        gridLayout->setVerticalSpacing(6);
        gridLayout->setContentsMargins(0, 0, 0, 0);
        spacerItem = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        gridLayout->addItem(spacerItem, 0, 2, 2, 1);

        TextLabel2_2 = new QLabel(TranslatorPrefsUI);
        TextLabel2_2->setObjectName(QString::fromUtf8("TextLabel2_2"));

        gridLayout->addWidget(TextLabel2_2, 1, 0, 1, 1);

        TextLabel2 = new QLabel(TranslatorPrefsUI);
        TextLabel2->setObjectName(QString::fromUtf8("TextLabel2"));

        gridLayout->addWidget(TextLabel2, 0, 0, 1, 1);

        defaultLanguage = new QComboBox(TranslatorPrefsUI);
        defaultLanguage->setObjectName(QString::fromUtf8("defaultLanguage"));
        QSizePolicy sizePolicy1(QSizePolicy::Minimum, QSizePolicy::Fixed);
        sizePolicy1.setHorizontalStretch(1);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(defaultLanguage->sizePolicy().hasHeightForWidth());
        defaultLanguage->setSizePolicy(sizePolicy1);

        gridLayout->addWidget(defaultLanguage, 0, 1, 1, 1);

        service = new QComboBox(TranslatorPrefsUI);
        service->setObjectName(QString::fromUtf8("service"));

        gridLayout->addWidget(service, 1, 1, 1, 1);


        vboxLayout->addLayout(gridLayout);

        IncomingMessages = new QGroupBox(TranslatorPrefsUI);
        IncomingMessages->setObjectName(QString::fromUtf8("IncomingMessages"));
        vboxLayout1 = new QVBoxLayout(IncomingMessages);
        vboxLayout1->setSpacing(6);
        vboxLayout1->setObjectName(QString::fromUtf8("vboxLayout1"));
        vboxLayout1->setContentsMargins(9, 9, 9, 9);
        kcfg_IncomingDontTranslate = new QRadioButton(IncomingMessages);
        kcfg_IncomingDontTranslate->setObjectName(QString::fromUtf8("kcfg_IncomingDontTranslate"));
        kcfg_IncomingDontTranslate->setChecked(true);

        vboxLayout1->addWidget(kcfg_IncomingDontTranslate);

        kcfg_IncomingShowOriginal = new QRadioButton(IncomingMessages);
        kcfg_IncomingShowOriginal->setObjectName(QString::fromUtf8("kcfg_IncomingShowOriginal"));
        kcfg_IncomingShowOriginal->setChecked(false);

        vboxLayout1->addWidget(kcfg_IncomingShowOriginal);

        kcfg_IncomingTranslate = new QRadioButton(IncomingMessages);
        kcfg_IncomingTranslate->setObjectName(QString::fromUtf8("kcfg_IncomingTranslate"));

        vboxLayout1->addWidget(kcfg_IncomingTranslate);


        vboxLayout->addWidget(IncomingMessages);

        OutgoingTranslate = new QGroupBox(TranslatorPrefsUI);
        OutgoingTranslate->setObjectName(QString::fromUtf8("OutgoingTranslate"));
        vboxLayout2 = new QVBoxLayout(OutgoingTranslate);
        vboxLayout2->setSpacing(6);
        vboxLayout2->setObjectName(QString::fromUtf8("vboxLayout2"));
        vboxLayout2->setContentsMargins(9, 9, 9, 9);
        kcfg_OutgoingDontTranslate = new QRadioButton(OutgoingTranslate);
        kcfg_OutgoingDontTranslate->setObjectName(QString::fromUtf8("kcfg_OutgoingDontTranslate"));
        kcfg_OutgoingDontTranslate->setChecked(true);

        vboxLayout2->addWidget(kcfg_OutgoingDontTranslate);

        kcfg_OutgoingShowOriginal = new QRadioButton(OutgoingTranslate);
        kcfg_OutgoingShowOriginal->setObjectName(QString::fromUtf8("kcfg_OutgoingShowOriginal"));
        kcfg_OutgoingShowOriginal->setChecked(false);

        vboxLayout2->addWidget(kcfg_OutgoingShowOriginal);

        kcfg_OutgoingTranslate = new QRadioButton(OutgoingTranslate);
        kcfg_OutgoingTranslate->setObjectName(QString::fromUtf8("kcfg_OutgoingTranslate"));

        vboxLayout2->addWidget(kcfg_OutgoingTranslate);

        kcfg_OutgoingAsk = new QRadioButton(OutgoingTranslate);
        kcfg_OutgoingAsk->setObjectName(QString::fromUtf8("kcfg_OutgoingAsk"));

        vboxLayout2->addWidget(kcfg_OutgoingAsk);


        vboxLayout->addWidget(OutgoingTranslate);

        spacerItem1 = new QSpacerItem(20, 20, QSizePolicy::Minimum, QSizePolicy::Expanding);

        vboxLayout->addItem(spacerItem1);


        retranslateUi(TranslatorPrefsUI);

        QMetaObject::connectSlotsByName(TranslatorPrefsUI);
    } // setupUi

    void retranslateUi(QWidget *TranslatorPrefsUI)
    {
        TextLabel2_2->setText(tr2i18n("Translation service:", 0));
        TextLabel2->setText(tr2i18n("Default native language:", 0));
        IncomingMessages->setTitle(tr2i18n("Incoming Messages", 0));
        kcfg_IncomingDontTranslate->setText(tr2i18n("Do not translate", 0));
        kcfg_IncomingShowOriginal->setText(tr2i18n("Show the original message", 0));
        kcfg_IncomingTranslate->setText(tr2i18n("Translate directly", 0));
        OutgoingTranslate->setTitle(tr2i18n("Outgoing Messages", 0));
        kcfg_OutgoingDontTranslate->setText(tr2i18n("Do not translate", 0));
        kcfg_OutgoingShowOriginal->setText(tr2i18n("Show the original message", 0));
        kcfg_OutgoingTranslate->setText(tr2i18n("Translate directly", 0));
        kcfg_OutgoingAsk->setText(tr2i18n("Show dialog before sending", 0));
        Q_UNUSED(TranslatorPrefsUI);
    } // retranslateUi

};

namespace Ui {
    class TranslatorPrefsUI: public Ui_TranslatorPrefsUI {};
} // namespace Ui

QT_END_NAMESPACE

#endif // TRANSLATORPREFSBASE_H

