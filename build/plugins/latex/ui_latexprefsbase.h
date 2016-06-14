#include <kdialog.h>
#include <klocale.h>

/********************************************************************************
** Form generated from reading UI file 'latexprefsbase.ui'
**
** Created by: Qt User Interface Compiler version 4.8.7
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_LATEXPREFSBASE_H
#define UI_LATEXPREFSBASE_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtGui/QApplication>
#include <QtGui/QButtonGroup>
#include <QtGui/QGroupBox>
#include <QtGui/QHBoxLayout>
#include <QtGui/QHeaderView>
#include <QtGui/QLabel>
#include <QtGui/QSpacerItem>
#include <QtGui/QVBoxLayout>
#include <QtGui/QWidget>
#include "knuminput.h"
#include "kurlrequester.h"

QT_BEGIN_NAMESPACE

class Ui_LatexPrefsUI
{
public:
    QVBoxLayout *vboxLayout;
    QLabel *textLabel1;
    QGroupBox *groupBox;
    QHBoxLayout *hboxLayout;
    QVBoxLayout *vboxLayout1;
    QHBoxLayout *hboxLayout1;
    QLabel *textLabel4;
    KUrlRequester *includeUrlRequester;
    QHBoxLayout *hboxLayout2;
    QLabel *textLabel2;
    KIntNumInput *horizontalDPI;
    QLabel *textLabel3;
    KIntNumInput *verticalDPI;
    QSpacerItem *spacerItem;
    QSpacerItem *spacerItem1;

    void setupUi(QWidget *LatexPrefsUI)
    {
        if (LatexPrefsUI->objectName().isEmpty())
            LatexPrefsUI->setObjectName(QString::fromUtf8("LatexPrefsUI"));
        LatexPrefsUI->resize(606, 437);
        vboxLayout = new QVBoxLayout(LatexPrefsUI);
        vboxLayout->setObjectName(QString::fromUtf8("vboxLayout"));
        textLabel1 = new QLabel(LatexPrefsUI);
        textLabel1->setObjectName(QString::fromUtf8("textLabel1"));
        textLabel1->setFrameShape(QFrame::NoFrame);
        textLabel1->setWordWrap(true);

        vboxLayout->addWidget(textLabel1);

        groupBox = new QGroupBox(LatexPrefsUI);
        groupBox->setObjectName(QString::fromUtf8("groupBox"));
        hboxLayout = new QHBoxLayout(groupBox);
        hboxLayout->setObjectName(QString::fromUtf8("hboxLayout"));
        vboxLayout1 = new QVBoxLayout();
        vboxLayout1->setObjectName(QString::fromUtf8("vboxLayout1"));
        hboxLayout1 = new QHBoxLayout();
        hboxLayout1->setObjectName(QString::fromUtf8("hboxLayout1"));
        textLabel4 = new QLabel(groupBox);
        textLabel4->setObjectName(QString::fromUtf8("textLabel4"));

        hboxLayout1->addWidget(textLabel4);

        includeUrlRequester = new KUrlRequester(groupBox);
        includeUrlRequester->setObjectName(QString::fromUtf8("includeUrlRequester"));

        hboxLayout1->addWidget(includeUrlRequester);


        vboxLayout1->addLayout(hboxLayout1);

        hboxLayout2 = new QHBoxLayout();
        hboxLayout2->setObjectName(QString::fromUtf8("hboxLayout2"));
        textLabel2 = new QLabel(groupBox);
        textLabel2->setObjectName(QString::fromUtf8("textLabel2"));

        hboxLayout2->addWidget(textLabel2);

        horizontalDPI = new KIntNumInput(groupBox);
        horizontalDPI->setObjectName(QString::fromUtf8("horizontalDPI"));

        hboxLayout2->addWidget(horizontalDPI);

        textLabel3 = new QLabel(groupBox);
        textLabel3->setObjectName(QString::fromUtf8("textLabel3"));

        hboxLayout2->addWidget(textLabel3);

        verticalDPI = new KIntNumInput(groupBox);
        verticalDPI->setObjectName(QString::fromUtf8("verticalDPI"));

        hboxLayout2->addWidget(verticalDPI);


        vboxLayout1->addLayout(hboxLayout2);


        hboxLayout->addLayout(vboxLayout1);

        spacerItem = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        hboxLayout->addItem(spacerItem);


        vboxLayout->addWidget(groupBox);

        spacerItem1 = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        vboxLayout->addItem(spacerItem1);


        retranslateUi(LatexPrefsUI);

        QMetaObject::connectSlotsByName(LatexPrefsUI);
    } // setupUi

    void retranslateUi(QWidget *LatexPrefsUI)
    {
        textLabel1->setText(tr2i18n("The KopeteTeX plugin allows Kopete to render LaTeX formulas in the chat window. The sender must enclose the formula between two pairs of $ signs. ie: $$formula$$\n"
"This plugin requires that the ImageMagick convert program be installed in order to work.", 0));
        groupBox->setTitle(tr2i18n("Options", 0));
        textLabel4->setText(tr2i18n("LaTeX include file:", 0));
        textLabel2->setText(tr2i18n("Rendering resolution (DPI):", 0));
        textLabel3->setText(tr2i18n("x", 0));
        Q_UNUSED(LatexPrefsUI);
    } // retranslateUi

};

namespace Ui {
    class LatexPrefsUI: public Ui_LatexPrefsUI {};
} // namespace Ui

QT_END_NAMESPACE

#endif // LATEXPREFSBASE_H

