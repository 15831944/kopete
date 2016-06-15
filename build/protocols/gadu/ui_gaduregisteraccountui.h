#include <kdialog.h>
#include <klocale.h>

/********************************************************************************
** Form generated from reading UI file 'gaduregisteraccountui.ui'
**
** Created by: Qt User Interface Compiler version 4.8.7
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_GADUREGISTERACCOUNTUI_H
#define UI_GADUREGISTERACCOUNTUI_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtGui/QApplication>
#include <QtGui/QButtonGroup>
#include <QtGui/QGridLayout>
#include <QtGui/QHBoxLayout>
#include <QtGui/QHeaderView>
#include <QtGui/QLabel>
#include <QtGui/QLineEdit>
#include <QtGui/QSpacerItem>
#include <QtGui/QVBoxLayout>
#include <QtGui/QWidget>
#include "klineedit.h"

QT_BEGIN_NAMESPACE

class Ui_GaduRegisterAccountUI
{
public:
    QVBoxLayout *vboxLayout;
    QGridLayout *gridLayout;
    QLabel *pixmapEmailAddress;
    QLabel *labelPasswordVerify;
    KLineEdit *valuePassword;
    KLineEdit *valueEmailAddress;
    QLabel *pixmapVerificationSequence;
    QLabel *labelEmailAddress;
    QLabel *pixmapPasswordVerify;
    QLabel *labelVerificationSequence;
    QLineEdit *valueVerificationSequence;
    QLabel *pixmapPassword;
    QLabel *labelPassword;
    KLineEdit *valuePasswordVerify;
    QHBoxLayout *hboxLayout;
    QSpacerItem *spacerItem;
    QLabel *pixmapToken;
    QSpacerItem *spacerItem1;
    QLabel *labelInstructions;
    QSpacerItem *spacerItem2;
    QLabel *labelStatusMessage;

    void setupUi(QWidget *GaduRegisterAccountUI)
    {
        if (GaduRegisterAccountUI->objectName().isEmpty())
            GaduRegisterAccountUI->setObjectName(QString::fromUtf8("GaduRegisterAccountUI"));
        GaduRegisterAccountUI->resize(745, 287);
        vboxLayout = new QVBoxLayout(GaduRegisterAccountUI);
#ifndef UI_Q_OS_MAC
        vboxLayout->setSpacing(6);
#endif
        vboxLayout->setContentsMargins(11, 11, 11, 11);
        vboxLayout->setObjectName(QString::fromUtf8("vboxLayout"));
        gridLayout = new QGridLayout();
#ifndef UI_Q_OS_MAC
        gridLayout->setSpacing(6);
#endif
#ifndef UI_Q_OS_MAC
        gridLayout->setContentsMargins(0, 0, 0, 0);
#endif
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        pixmapEmailAddress = new QLabel(GaduRegisterAccountUI);
        pixmapEmailAddress->setObjectName(QString::fromUtf8("pixmapEmailAddress"));
        QSizePolicy sizePolicy(static_cast<QSizePolicy::Policy>(0), static_cast<QSizePolicy::Policy>(0));
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(pixmapEmailAddress->sizePolicy().hasHeightForWidth());
        pixmapEmailAddress->setSizePolicy(sizePolicy);
        pixmapEmailAddress->setMinimumSize(QSize(16, 16));
        pixmapEmailAddress->setMaximumSize(QSize(32767, 32767));
        pixmapEmailAddress->setScaledContents(true);

        gridLayout->addWidget(pixmapEmailAddress, 0, 0, 1, 1);

        labelPasswordVerify = new QLabel(GaduRegisterAccountUI);
        labelPasswordVerify->setObjectName(QString::fromUtf8("labelPasswordVerify"));
        labelPasswordVerify->setEnabled(true);

        gridLayout->addWidget(labelPasswordVerify, 2, 1, 1, 1);

        valuePassword = new KLineEdit(GaduRegisterAccountUI);
        valuePassword->setObjectName(QString::fromUtf8("valuePassword"));
        valuePassword->setEchoMode(QLineEdit::Password);

        gridLayout->addWidget(valuePassword, 1, 2, 1, 1);

        valueEmailAddress = new KLineEdit(GaduRegisterAccountUI);
        valueEmailAddress->setObjectName(QString::fromUtf8("valueEmailAddress"));

        gridLayout->addWidget(valueEmailAddress, 0, 2, 1, 1);

        pixmapVerificationSequence = new QLabel(GaduRegisterAccountUI);
        pixmapVerificationSequence->setObjectName(QString::fromUtf8("pixmapVerificationSequence"));
        sizePolicy.setHeightForWidth(pixmapVerificationSequence->sizePolicy().hasHeightForWidth());
        pixmapVerificationSequence->setSizePolicy(sizePolicy);
        pixmapVerificationSequence->setMinimumSize(QSize(16, 16));
        pixmapVerificationSequence->setMaximumSize(QSize(32767, 32767));
        pixmapVerificationSequence->setScaledContents(true);

        gridLayout->addWidget(pixmapVerificationSequence, 3, 0, 1, 1);

        labelEmailAddress = new QLabel(GaduRegisterAccountUI);
        labelEmailAddress->setObjectName(QString::fromUtf8("labelEmailAddress"));

        gridLayout->addWidget(labelEmailAddress, 0, 1, 1, 1);

        pixmapPasswordVerify = new QLabel(GaduRegisterAccountUI);
        pixmapPasswordVerify->setObjectName(QString::fromUtf8("pixmapPasswordVerify"));
        sizePolicy.setHeightForWidth(pixmapPasswordVerify->sizePolicy().hasHeightForWidth());
        pixmapPasswordVerify->setSizePolicy(sizePolicy);
        pixmapPasswordVerify->setMinimumSize(QSize(16, 16));
        pixmapPasswordVerify->setMaximumSize(QSize(32767, 32767));
        pixmapPasswordVerify->setScaledContents(true);

        gridLayout->addWidget(pixmapPasswordVerify, 2, 0, 1, 1);

        labelVerificationSequence = new QLabel(GaduRegisterAccountUI);
        labelVerificationSequence->setObjectName(QString::fromUtf8("labelVerificationSequence"));
        labelVerificationSequence->setEnabled(true);

        gridLayout->addWidget(labelVerificationSequence, 3, 1, 1, 1);

        valueVerificationSequence = new QLineEdit(GaduRegisterAccountUI);
        valueVerificationSequence->setObjectName(QString::fromUtf8("valueVerificationSequence"));

        gridLayout->addWidget(valueVerificationSequence, 3, 2, 1, 1);

        pixmapPassword = new QLabel(GaduRegisterAccountUI);
        pixmapPassword->setObjectName(QString::fromUtf8("pixmapPassword"));
        sizePolicy.setHeightForWidth(pixmapPassword->sizePolicy().hasHeightForWidth());
        pixmapPassword->setSizePolicy(sizePolicy);
        pixmapPassword->setMinimumSize(QSize(16, 16));
        pixmapPassword->setMaximumSize(QSize(32767, 32767));
        pixmapPassword->setScaledContents(true);

        gridLayout->addWidget(pixmapPassword, 1, 0, 1, 1);

        labelPassword = new QLabel(GaduRegisterAccountUI);
        labelPassword->setObjectName(QString::fromUtf8("labelPassword"));

        gridLayout->addWidget(labelPassword, 1, 1, 1, 1);

        valuePasswordVerify = new KLineEdit(GaduRegisterAccountUI);
        valuePasswordVerify->setObjectName(QString::fromUtf8("valuePasswordVerify"));
        valuePasswordVerify->setEchoMode(QLineEdit::Password);

        gridLayout->addWidget(valuePasswordVerify, 2, 2, 1, 1);


        vboxLayout->addLayout(gridLayout);

        hboxLayout = new QHBoxLayout();
#ifndef UI_Q_OS_MAC
        hboxLayout->setSpacing(6);
#endif
        hboxLayout->setContentsMargins(0, 0, 0, 0);
        hboxLayout->setObjectName(QString::fromUtf8("hboxLayout"));
        spacerItem = new QSpacerItem(23, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        hboxLayout->addItem(spacerItem);

        pixmapToken = new QLabel(GaduRegisterAccountUI);
        pixmapToken->setObjectName(QString::fromUtf8("pixmapToken"));
        QSizePolicy sizePolicy1(static_cast<QSizePolicy::Policy>(0), static_cast<QSizePolicy::Policy>(0));
        sizePolicy1.setHorizontalStretch(20);
        sizePolicy1.setVerticalStretch(13);
        sizePolicy1.setHeightForWidth(pixmapToken->sizePolicy().hasHeightForWidth());
        pixmapToken->setSizePolicy(sizePolicy1);
        pixmapToken->setMinimumSize(QSize(256, 64));
        pixmapToken->setMaximumSize(QSize(256, 64));
        pixmapToken->setFrameShape(QFrame::Box);
        pixmapToken->setFrameShadow(QFrame::Sunken);
        pixmapToken->setScaledContents(true);

        hboxLayout->addWidget(pixmapToken);

        spacerItem1 = new QSpacerItem(22, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        hboxLayout->addItem(spacerItem1);


        vboxLayout->addLayout(hboxLayout);

        labelInstructions = new QLabel(GaduRegisterAccountUI);
        labelInstructions->setObjectName(QString::fromUtf8("labelInstructions"));
        QSizePolicy sizePolicy2(static_cast<QSizePolicy::Policy>(3), static_cast<QSizePolicy::Policy>(3));
        sizePolicy2.setHorizontalStretch(0);
        sizePolicy2.setVerticalStretch(0);
        sizePolicy2.setHeightForWidth(labelInstructions->sizePolicy().hasHeightForWidth());
        labelInstructions->setSizePolicy(sizePolicy2);
        labelInstructions->setAlignment(Qt::AlignTop);
        labelInstructions->setWordWrap(true);

        vboxLayout->addWidget(labelInstructions);

        spacerItem2 = new QSpacerItem(20, 16, QSizePolicy::Minimum, QSizePolicy::Expanding);

        vboxLayout->addItem(spacerItem2);

        labelStatusMessage = new QLabel(GaduRegisterAccountUI);
        labelStatusMessage->setObjectName(QString::fromUtf8("labelStatusMessage"));
        labelStatusMessage->setAlignment(Qt::AlignCenter);

        vboxLayout->addWidget(labelStatusMessage);

#ifndef UI_QT_NO_SHORTCUT
        labelPasswordVerify->setBuddy(valuePasswordVerify);
        labelEmailAddress->setBuddy(valueEmailAddress);
        labelVerificationSequence->setBuddy(valueVerificationSequence);
        labelPassword->setBuddy(valuePassword);
#endif // QT_NO_SHORTCUT
        QWidget::setTabOrder(valueEmailAddress, valuePassword);
        QWidget::setTabOrder(valuePassword, valuePasswordVerify);
        QWidget::setTabOrder(valuePasswordVerify, valueVerificationSequence);

        retranslateUi(GaduRegisterAccountUI);

        QMetaObject::connectSlotsByName(GaduRegisterAccountUI);
    } // setupUi

    void retranslateUi(QWidget *GaduRegisterAccountUI)
    {
        GaduRegisterAccountUI->setWindowTitle(tr2i18n("Register Account - Gadu-Gadu", 0));
#ifndef UI_QT_NO_TOOLTIP
        labelPasswordVerify->setToolTip(tr2i18n("A confirmation of the password you would like to use.", 0));
#endif // QT_NO_TOOLTIP
#ifndef UI_QT_NO_WHATSTHIS
        labelPasswordVerify->setWhatsThis(tr2i18n("A confirmation of the password you would like to use for this account.", 0));
#endif // QT_NO_WHATSTHIS
        labelPasswordVerify->setText(tr2i18n("Repeat pass&word:", 0));
#ifndef UI_QT_NO_TOOLTIP
        valuePassword->setToolTip(tr2i18n("The password you would like to use.", 0));
#endif // QT_NO_TOOLTIP
#ifndef UI_QT_NO_WHATSTHIS
        valuePassword->setWhatsThis(tr2i18n("The password you would like to use for this account.", 0));
#endif // QT_NO_WHATSTHIS
#ifndef UI_QT_NO_TOOLTIP
        valueEmailAddress->setToolTip(tr2i18n("Your E-mail address.", 0));
#endif // QT_NO_TOOLTIP
#ifndef UI_QT_NO_WHATSTHIS
        valueEmailAddress->setWhatsThis(tr2i18n("The E-mail address you would like to use to register this account.", 0));
#endif // QT_NO_WHATSTHIS
#ifndef UI_QT_NO_TOOLTIP
        labelEmailAddress->setToolTip(tr2i18n("Your E-mail address.", 0));
#endif // QT_NO_TOOLTIP
#ifndef UI_QT_NO_WHATSTHIS
        labelEmailAddress->setWhatsThis(tr2i18n("The E-mail address you would like to use to register this account.", 0));
#endif // QT_NO_WHATSTHIS
        labelEmailAddress->setText(tr2i18n("&E-Mail address:", 0));
#ifndef UI_QT_NO_TOOLTIP
        labelVerificationSequence->setToolTip(tr2i18n("The text from the image below.", 0));
#endif // QT_NO_TOOLTIP
#ifndef UI_QT_NO_WHATSTHIS
        labelVerificationSequence->setWhatsThis(tr2i18n("The text from the image below.  This is used to prevent abusive automated registration scripts.", 0));
#endif // QT_NO_WHATSTHIS
        labelVerificationSequence->setText(tr2i18n("&Verification sequence:", 0));
#ifndef UI_QT_NO_TOOLTIP
        valueVerificationSequence->setToolTip(tr2i18n("The text from the image below.", 0));
#endif // QT_NO_TOOLTIP
#ifndef UI_QT_NO_WHATSTHIS
        valueVerificationSequence->setWhatsThis(tr2i18n("The text from the image below.  This is used to prevent abusive automated registration scripts.", 0));
#endif // QT_NO_WHATSTHIS
#ifndef UI_QT_NO_TOOLTIP
        labelPassword->setToolTip(tr2i18n("The password you would like to use.", 0));
#endif // QT_NO_TOOLTIP
#ifndef UI_QT_NO_WHATSTHIS
        labelPassword->setWhatsThis(tr2i18n("The password you would like to use for this account.", 0));
#endif // QT_NO_WHATSTHIS
        labelPassword->setText(tr2i18n("&Password:", 0));
#ifndef UI_QT_NO_TOOLTIP
        valuePasswordVerify->setToolTip(tr2i18n("A confirmation of the password you would like to use.", 0));
#endif // QT_NO_TOOLTIP
#ifndef UI_QT_NO_WHATSTHIS
        valuePasswordVerify->setWhatsThis(tr2i18n("A confirmation of the password you would like to use for this account.", 0));
#endif // QT_NO_WHATSTHIS
#ifndef UI_QT_NO_TOOLTIP
        pixmapToken->setToolTip(tr2i18n("Gadu-Gadu registration token.", 0));
#endif // QT_NO_TOOLTIP
#ifndef UI_QT_NO_WHATSTHIS
        pixmapToken->setWhatsThis(tr2i18n("This field contains an image showing a number that you need to type into the <b>Verification Sequence</b> field above.", 0));
#endif // QT_NO_WHATSTHIS
        labelInstructions->setText(tr2i18n("<i>Type the letters and numbers shown in the image above into the <b>Verification Sequence</b> field.  This is used to prevent automated registration abuse.</i>", 0));
        labelStatusMessage->setText(QString());
    } // retranslateUi

};

namespace Ui {
    class GaduRegisterAccountUI: public Ui_GaduRegisterAccountUI {};
} // namespace Ui

QT_END_NAMESPACE

#endif // GADUREGISTERACCOUNTUI_H

