#include <kdialog.h>
#include <klocale.h>

/********************************************************************************
** Form generated from reading UI file 'addaccountwizardpage2.ui'
**
** Created by: Qt User Interface Compiler version 4.8.7
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_ADDACCOUNTWIZARDPAGE2_H
#define UI_ADDACCOUNTWIZARDPAGE2_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtGui/QApplication>
#include <QtGui/QButtonGroup>
#include <QtGui/QCheckBox>
#include <QtGui/QGridLayout>
#include <QtGui/QHBoxLayout>
#include <QtGui/QHeaderView>
#include <QtGui/QLabel>
#include <QtGui/QSpacerItem>
#include <QtGui/QWidget>
#include "kcolorbutton.h"

QT_BEGIN_NAMESPACE

class Ui_AddAccountWizardPage2
{
public:
    QGridLayout *gridLayout;
    QLabel *m_header;
    QHBoxLayout *hboxLayout;
    QCheckBox *mUseColor;
    KColorButton *mColorButton;
    QSpacerItem *spacerItem;
    QLabel *PixmapLabel1_2_2_2;
    QSpacerItem *spacerItem1;
    QCheckBox *mConnectNow;

    void setupUi(QWidget *AddAccountWizardPage2)
    {
        if (AddAccountWizardPage2->objectName().isEmpty())
            AddAccountWizardPage2->setObjectName(QString::fromUtf8("AddAccountWizardPage2"));
        AddAccountWizardPage2->resize(600, 356);
        gridLayout = new QGridLayout(AddAccountWizardPage2);
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        gridLayout->setHorizontalSpacing(6);
        gridLayout->setVerticalSpacing(6);
        gridLayout->setContentsMargins(0, 0, 0, 0);
        m_header = new QLabel(AddAccountWizardPage2);
        m_header->setObjectName(QString::fromUtf8("m_header"));
        QSizePolicy sizePolicy(QSizePolicy::MinimumExpanding, QSizePolicy::Preferred);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(m_header->sizePolicy().hasHeightForWidth());
        m_header->setSizePolicy(sizePolicy);
        m_header->setAlignment(Qt::AlignTop);
        m_header->setWordWrap(true);

        gridLayout->addWidget(m_header, 0, 1, 1, 1);

        hboxLayout = new QHBoxLayout();
        hboxLayout->setSpacing(6);
        hboxLayout->setObjectName(QString::fromUtf8("hboxLayout"));
        hboxLayout->setContentsMargins(0, 0, 0, 0);
        mUseColor = new QCheckBox(AddAccountWizardPage2);
        mUseColor->setObjectName(QString::fromUtf8("mUseColor"));

        hboxLayout->addWidget(mUseColor);

        mColorButton = new KColorButton(AddAccountWizardPage2);
        mColorButton->setObjectName(QString::fromUtf8("mColorButton"));

        hboxLayout->addWidget(mColorButton);

        spacerItem = new QSpacerItem(101, 21, QSizePolicy::Expanding, QSizePolicy::Minimum);

        hboxLayout->addItem(spacerItem);


        gridLayout->addLayout(hboxLayout, 1, 1, 1, 1);

        PixmapLabel1_2_2_2 = new QLabel(AddAccountWizardPage2);
        PixmapLabel1_2_2_2->setObjectName(QString::fromUtf8("PixmapLabel1_2_2_2"));
        PixmapLabel1_2_2_2->setScaledContents(false);

        gridLayout->addWidget(PixmapLabel1_2_2_2, 0, 0, 3, 1);

        spacerItem1 = new QSpacerItem(20, 58, QSizePolicy::Minimum, QSizePolicy::Expanding);

        gridLayout->addItem(spacerItem1, 3, 0, 1, 1);

        mConnectNow = new QCheckBox(AddAccountWizardPage2);
        mConnectNow->setObjectName(QString::fromUtf8("mConnectNow"));
        mConnectNow->setChecked(true);

        gridLayout->addWidget(mConnectNow, 2, 1, 1, 1);


        retranslateUi(AddAccountWizardPage2);

        QMetaObject::connectSlotsByName(AddAccountWizardPage2);
    } // setupUi

    void retranslateUi(QWidget *AddAccountWizardPage2)
    {
        AddAccountWizardPage2->setWindowTitle(tr2i18n("Finished", 0));
        m_header->setText(tr2i18n("<h2>Congratulations</h2>\n"
"<p>You have finished configuring the account. Please click the \"Finish\" button.</p>", 0));
#ifndef UI_QT_NO_TOOLTIP
        mUseColor->setToolTip(tr2i18n("Use a custom color for this account", 0));
#endif // QT_NO_TOOLTIP
#ifndef UI_QT_NO_WHATSTHIS
        mUseColor->setWhatsThis(tr2i18n("Account are often differentiated by the protocol icon. But if you have severals accounts of the same protocol, you may apply a color filter to that icon to differentiate accounts from the same protocols.", 0));
#endif // QT_NO_WHATSTHIS
        mUseColor->setText(tr2i18n("Use &custom color\n"
"for account:", 0));
#ifndef UI_QT_NO_TOOLTIP
        mColorButton->setToolTip(tr2i18n("Account custom color selector", 0));
#endif // QT_NO_TOOLTIP
        mColorButton->setText(QString());
#ifndef UI_QT_NO_TOOLTIP
        mConnectNow->setToolTip(tr2i18n("Connect right after Finish is pressed", 0));
#endif // QT_NO_TOOLTIP
#ifndef UI_QT_NO_WHATSTHIS
        mConnectNow->setWhatsThis(tr2i18n("If this is checked, the account will be connected right after you clicked on <i>Finished</i>.", 0));
#endif // QT_NO_WHATSTHIS
        mConnectNow->setText(tr2i18n("Co&nnect now", 0));
    } // retranslateUi

};

namespace Ui {
    class AddAccountWizardPage2: public Ui_AddAccountWizardPage2 {};
} // namespace Ui

QT_END_NAMESPACE

#endif // ADDACCOUNTWIZARDPAGE2_H

