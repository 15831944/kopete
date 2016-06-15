#include <kdialog.h>
#include <klocale.h>

/********************************************************************************
** Form generated from reading UI file 'aiminfobase.ui'
**
** Created by: Qt User Interface Compiler version 4.8.7
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_AIMINFOBASE_H
#define UI_AIMINFOBASE_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtGui/QApplication>
#include <QtGui/QButtonGroup>
#include <QtGui/QFrame>
#include <QtGui/QGridLayout>
#include <QtGui/QHeaderView>
#include <QtGui/QLabel>
#include <QtGui/QLineEdit>
#include <QtGui/QSpacerItem>
#include <QtGui/QWidget>
#include "ktextbrowser.h"

QT_BEGIN_NAMESPACE

class Ui_AIMUserInfoWidget
{
public:
    QGridLayout *gridLayout;
    QLabel *lblNickName;
    QLineEdit *txtNickName;
    QLabel *lblScreenName;
    QLineEdit *txtScreenName;
    QLabel *lblWarnLevel;
    QLineEdit *txtWarnLevel;
    QLabel *lblIdleTime;
    QLineEdit *txtIdleTime;
    QSpacerItem *spacerItem;
    QLabel *lblOnlineSince;
    QLineEdit *txtOnlineSince;
    QLabel *lblAwayMessage;
    KTextBrowser *txtAwayMessage;
    QLabel *textLabel1;
    QFrame *userInfoFrame;

    void setupUi(QWidget *AIMUserInfoWidget)
    {
        if (AIMUserInfoWidget->objectName().isEmpty())
            AIMUserInfoWidget->setObjectName(QString::fromUtf8("AIMUserInfoWidget"));
        AIMUserInfoWidget->resize(475, 400);
        AIMUserInfoWidget->setMinimumSize(QSize(360, 400));
        gridLayout = new QGridLayout(AIMUserInfoWidget);
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        gridLayout->setContentsMargins(0, 0, 0, 0);
        lblNickName = new QLabel(AIMUserInfoWidget);
        lblNickName->setObjectName(QString::fromUtf8("lblNickName"));
        QSizePolicy sizePolicy(QSizePolicy::Maximum, QSizePolicy::Maximum);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(lblNickName->sizePolicy().hasHeightForWidth());
        lblNickName->setSizePolicy(sizePolicy);

        gridLayout->addWidget(lblNickName, 0, 0, 1, 1);

        txtNickName = new QLineEdit(AIMUserInfoWidget);
        txtNickName->setObjectName(QString::fromUtf8("txtNickName"));
        QSizePolicy sizePolicy1(QSizePolicy::Expanding, QSizePolicy::Fixed);
        sizePolicy1.setHorizontalStretch(0);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(txtNickName->sizePolicy().hasHeightForWidth());
        txtNickName->setSizePolicy(sizePolicy1);

        gridLayout->addWidget(txtNickName, 0, 1, 1, 1);

        lblScreenName = new QLabel(AIMUserInfoWidget);
        lblScreenName->setObjectName(QString::fromUtf8("lblScreenName"));
        sizePolicy.setHeightForWidth(lblScreenName->sizePolicy().hasHeightForWidth());
        lblScreenName->setSizePolicy(sizePolicy);

        gridLayout->addWidget(lblScreenName, 0, 2, 1, 1);

        txtScreenName = new QLineEdit(AIMUserInfoWidget);
        txtScreenName->setObjectName(QString::fromUtf8("txtScreenName"));
        txtScreenName->setReadOnly(true);

        gridLayout->addWidget(txtScreenName, 0, 3, 1, 1);

        lblWarnLevel = new QLabel(AIMUserInfoWidget);
        lblWarnLevel->setObjectName(QString::fromUtf8("lblWarnLevel"));

        gridLayout->addWidget(lblWarnLevel, 1, 0, 1, 1);

        txtWarnLevel = new QLineEdit(AIMUserInfoWidget);
        txtWarnLevel->setObjectName(QString::fromUtf8("txtWarnLevel"));
        txtWarnLevel->setReadOnly(true);

        gridLayout->addWidget(txtWarnLevel, 1, 1, 1, 1);

        lblIdleTime = new QLabel(AIMUserInfoWidget);
        lblIdleTime->setObjectName(QString::fromUtf8("lblIdleTime"));

        gridLayout->addWidget(lblIdleTime, 1, 2, 1, 1);

        txtIdleTime = new QLineEdit(AIMUserInfoWidget);
        txtIdleTime->setObjectName(QString::fromUtf8("txtIdleTime"));
        txtIdleTime->setReadOnly(true);

        gridLayout->addWidget(txtIdleTime, 1, 3, 1, 1);

        spacerItem = new QSpacerItem(50, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        gridLayout->addItem(spacerItem, 2, 0, 1, 2);

        lblOnlineSince = new QLabel(AIMUserInfoWidget);
        lblOnlineSince->setObjectName(QString::fromUtf8("lblOnlineSince"));

        gridLayout->addWidget(lblOnlineSince, 2, 2, 1, 1);

        txtOnlineSince = new QLineEdit(AIMUserInfoWidget);
        txtOnlineSince->setObjectName(QString::fromUtf8("txtOnlineSince"));
        txtOnlineSince->setReadOnly(true);

        gridLayout->addWidget(txtOnlineSince, 2, 3, 1, 1);

        lblAwayMessage = new QLabel(AIMUserInfoWidget);
        lblAwayMessage->setObjectName(QString::fromUtf8("lblAwayMessage"));
        QSizePolicy sizePolicy2(QSizePolicy::Preferred, QSizePolicy::Minimum);
        sizePolicy2.setHorizontalStretch(0);
        sizePolicy2.setVerticalStretch(0);
        sizePolicy2.setHeightForWidth(lblAwayMessage->sizePolicy().hasHeightForWidth());
        lblAwayMessage->setSizePolicy(sizePolicy2);
        lblAwayMessage->setAlignment(Qt::AlignTop);

        gridLayout->addWidget(lblAwayMessage, 3, 0, 1, 4);

        txtAwayMessage = new KTextBrowser(AIMUserInfoWidget);
        txtAwayMessage->setObjectName(QString::fromUtf8("txtAwayMessage"));
        QSizePolicy sizePolicy3(QSizePolicy::Expanding, QSizePolicy::Preferred);
        sizePolicy3.setHorizontalStretch(0);
        sizePolicy3.setVerticalStretch(0);
        sizePolicy3.setHeightForWidth(txtAwayMessage->sizePolicy().hasHeightForWidth());
        txtAwayMessage->setSizePolicy(sizePolicy3);

        gridLayout->addWidget(txtAwayMessage, 4, 0, 1, 4);

        textLabel1 = new QLabel(AIMUserInfoWidget);
        textLabel1->setObjectName(QString::fromUtf8("textLabel1"));

        gridLayout->addWidget(textLabel1, 5, 0, 1, 4);

        userInfoFrame = new QFrame(AIMUserInfoWidget);
        userInfoFrame->setObjectName(QString::fromUtf8("userInfoFrame"));
        QSizePolicy sizePolicy4(QSizePolicy::Expanding, QSizePolicy::Expanding);
        sizePolicy4.setHorizontalStretch(0);
        sizePolicy4.setVerticalStretch(0);
        sizePolicy4.setHeightForWidth(userInfoFrame->sizePolicy().hasHeightForWidth());
        userInfoFrame->setSizePolicy(sizePolicy4);
        userInfoFrame->setMinimumSize(QSize(64, 16));
        userInfoFrame->setProperty("lineWidth", QVariant(0));

        gridLayout->addWidget(userInfoFrame, 6, 0, 1, 4);

        QWidget::setTabOrder(txtNickName, txtScreenName);
        QWidget::setTabOrder(txtScreenName, txtWarnLevel);
        QWidget::setTabOrder(txtWarnLevel, txtIdleTime);
        QWidget::setTabOrder(txtIdleTime, txtOnlineSince);
        QWidget::setTabOrder(txtOnlineSince, txtAwayMessage);

        retranslateUi(AIMUserInfoWidget);

        QMetaObject::connectSlotsByName(AIMUserInfoWidget);
    } // setupUi

    void retranslateUi(QWidget *AIMUserInfoWidget)
    {
        lblNickName->setText(tr2i18n("Nickname:", 0));
        lblScreenName->setText(tr2i18n("Screen name:", 0));
        lblWarnLevel->setText(tr2i18n("Warning level:", 0));
        lblIdleTime->setText(tr2i18n("Idle minutes:", 0));
        lblOnlineSince->setText(tr2i18n("Online since:", 0));
        lblAwayMessage->setText(tr2i18n("Away message:", 0));
        textLabel1->setText(tr2i18n("Profile:", 0));
        Q_UNUSED(AIMUserInfoWidget);
    } // retranslateUi

};

namespace Ui {
    class AIMUserInfoWidget: public Ui_AIMUserInfoWidget {};
} // namespace Ui

QT_END_NAMESPACE

#endif // AIMINFOBASE_H

