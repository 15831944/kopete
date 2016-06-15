#include <kdialog.h>
#include <klocale.h>

/********************************************************************************
** Form generated from reading UI file 'chatwindowconfig_style.ui'
**
** Created by: Qt User Interface Compiler version 4.8.7
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_CHATWINDOWCONFIG_STYLE_H
#define UI_CHATWINDOWCONFIG_STYLE_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtGui/QApplication>
#include <QtGui/QButtonGroup>
#include <QtGui/QCheckBox>
#include <QtGui/QComboBox>
#include <QtGui/QFrame>
#include <QtGui/QGridLayout>
#include <QtGui/QGroupBox>
#include <QtGui/QHBoxLayout>
#include <QtGui/QHeaderView>
#include <QtGui/QLabel>
#include <QtGui/QListWidget>
#include <QtGui/QVBoxLayout>
#include <QtGui/QWidget>
#include "kpushbutton.h"

QT_BEGIN_NAMESPACE

class Ui_ChatWindowConfig_Style
{
public:
    QGridLayout *gridLayout;
    QGridLayout *gridLayout1;
    QGroupBox *groupBox;
    QHBoxLayout *hboxLayout;
    QCheckBox *kcfg_groupConsecutiveMessages;
    QCheckBox *kcfg_useCompact;
    QGroupBox *stylesGroupBox;
    QVBoxLayout *verticalLayout;
    QHBoxLayout *horizontalLayout_3;
    QListWidget *styleList;
    QFrame *htmlFrame;
    QHBoxLayout *horizontalLayout_2;
    QLabel *textLabel1;
    QComboBox *variantList;
    QHBoxLayout *horizontalLayout;
    KPushButton *btnGetStyles;
    KPushButton *installButton;
    KPushButton *deleteButton;

    void setupUi(QWidget *ChatWindowConfig_Style)
    {
        if (ChatWindowConfig_Style->objectName().isEmpty())
            ChatWindowConfig_Style->setObjectName(QString::fromUtf8("ChatWindowConfig_Style"));
        ChatWindowConfig_Style->resize(502, 417);
        QSizePolicy sizePolicy(QSizePolicy::Expanding, QSizePolicy::Expanding);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(ChatWindowConfig_Style->sizePolicy().hasHeightForWidth());
        ChatWindowConfig_Style->setSizePolicy(sizePolicy);
        gridLayout = new QGridLayout(ChatWindowConfig_Style);
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        gridLayout1 = new QGridLayout();
#ifndef UI_Q_OS_MAC
        gridLayout1->setSpacing(6);
#endif
#ifndef UI_Q_OS_MAC
        gridLayout1->setContentsMargins(0, 0, 0, 0);
#endif
        gridLayout1->setObjectName(QString::fromUtf8("gridLayout1"));
        groupBox = new QGroupBox(ChatWindowConfig_Style);
        groupBox->setObjectName(QString::fromUtf8("groupBox"));
        hboxLayout = new QHBoxLayout(groupBox);
        hboxLayout->setObjectName(QString::fromUtf8("hboxLayout"));
        kcfg_groupConsecutiveMessages = new QCheckBox(groupBox);
        kcfg_groupConsecutiveMessages->setObjectName(QString::fromUtf8("kcfg_groupConsecutiveMessages"));

        hboxLayout->addWidget(kcfg_groupConsecutiveMessages);

        kcfg_useCompact = new QCheckBox(groupBox);
        kcfg_useCompact->setObjectName(QString::fromUtf8("kcfg_useCompact"));

        hboxLayout->addWidget(kcfg_useCompact);


        gridLayout1->addWidget(groupBox, 1, 0, 1, 1);

        stylesGroupBox = new QGroupBox(ChatWindowConfig_Style);
        stylesGroupBox->setObjectName(QString::fromUtf8("stylesGroupBox"));
        sizePolicy.setHeightForWidth(stylesGroupBox->sizePolicy().hasHeightForWidth());
        stylesGroupBox->setSizePolicy(sizePolicy);
        verticalLayout = new QVBoxLayout(stylesGroupBox);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        horizontalLayout_3 = new QHBoxLayout();
        horizontalLayout_3->setObjectName(QString::fromUtf8("horizontalLayout_3"));
        styleList = new QListWidget(stylesGroupBox);
        styleList->setObjectName(QString::fromUtf8("styleList"));

        horizontalLayout_3->addWidget(styleList);

        htmlFrame = new QFrame(stylesGroupBox);
        htmlFrame->setObjectName(QString::fromUtf8("htmlFrame"));
        QSizePolicy sizePolicy1(QSizePolicy::Preferred, QSizePolicy::Preferred);
        sizePolicy1.setHorizontalStretch(1);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(htmlFrame->sizePolicy().hasHeightForWidth());
        htmlFrame->setSizePolicy(sizePolicy1);
        htmlFrame->setFrameShape(QFrame::StyledPanel);
        htmlFrame->setFrameShadow(QFrame::Raised);

        horizontalLayout_3->addWidget(htmlFrame);


        verticalLayout->addLayout(horizontalLayout_3);

        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setObjectName(QString::fromUtf8("horizontalLayout_2"));
        textLabel1 = new QLabel(stylesGroupBox);
        textLabel1->setObjectName(QString::fromUtf8("textLabel1"));

        horizontalLayout_2->addWidget(textLabel1);

        variantList = new QComboBox(stylesGroupBox);
        variantList->setObjectName(QString::fromUtf8("variantList"));
        QSizePolicy sizePolicy2(QSizePolicy::Expanding, QSizePolicy::Maximum);
        sizePolicy2.setHorizontalStretch(0);
        sizePolicy2.setVerticalStretch(0);
        sizePolicy2.setHeightForWidth(variantList->sizePolicy().hasHeightForWidth());
        variantList->setSizePolicy(sizePolicy2);

        horizontalLayout_2->addWidget(variantList);


        verticalLayout->addLayout(horizontalLayout_2);

        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        btnGetStyles = new KPushButton(stylesGroupBox);
        btnGetStyles->setObjectName(QString::fromUtf8("btnGetStyles"));
        btnGetStyles->setEnabled(true);
        QSizePolicy sizePolicy3(QSizePolicy::Preferred, QSizePolicy::Fixed);
        sizePolicy3.setHorizontalStretch(0);
        sizePolicy3.setVerticalStretch(0);
        sizePolicy3.setHeightForWidth(btnGetStyles->sizePolicy().hasHeightForWidth());
        btnGetStyles->setSizePolicy(sizePolicy3);

        horizontalLayout->addWidget(btnGetStyles);

        installButton = new KPushButton(stylesGroupBox);
        installButton->setObjectName(QString::fromUtf8("installButton"));
        sizePolicy3.setHeightForWidth(installButton->sizePolicy().hasHeightForWidth());
        installButton->setSizePolicy(sizePolicy3);

        horizontalLayout->addWidget(installButton);

        deleteButton = new KPushButton(stylesGroupBox);
        deleteButton->setObjectName(QString::fromUtf8("deleteButton"));
        sizePolicy3.setHeightForWidth(deleteButton->sizePolicy().hasHeightForWidth());
        deleteButton->setSizePolicy(sizePolicy3);

        horizontalLayout->addWidget(deleteButton);


        verticalLayout->addLayout(horizontalLayout);


        gridLayout1->addWidget(stylesGroupBox, 0, 0, 1, 1);


        gridLayout->addLayout(gridLayout1, 0, 0, 1, 1);

        QWidget::setTabOrder(styleList, variantList);
        QWidget::setTabOrder(variantList, btnGetStyles);
        QWidget::setTabOrder(btnGetStyles, installButton);
        QWidget::setTabOrder(installButton, deleteButton);
        QWidget::setTabOrder(deleteButton, kcfg_groupConsecutiveMessages);
        QWidget::setTabOrder(kcfg_groupConsecutiveMessages, kcfg_useCompact);

        retranslateUi(ChatWindowConfig_Style);

        QMetaObject::connectSlotsByName(ChatWindowConfig_Style);
    } // setupUi

    void retranslateUi(QWidget *ChatWindowConfig_Style)
    {
        ChatWindowConfig_Style->setWindowTitle(tr2i18n("Chat Window Appearance", 0));
        groupBox->setTitle(tr2i18n("Display", 0));
        kcfg_groupConsecutiveMessages->setText(tr2i18n("Group consecuti&ve messages", 0));
        kcfg_useCompact->setText(tr2i18n("Co&mpact style in chatrooms", 0));
        stylesGroupBox->setTitle(tr2i18n("Styles", 0));
        textLabel1->setText(tr2i18n("Style variant:", 0));
#ifndef UI_QT_NO_TOOLTIP
        btnGetStyles->setToolTip(tr2i18n("Get new Chat Window styles over the Internet", 0));
#endif // QT_NO_TOOLTIP
        btnGetStyles->setText(tr2i18n("&Get New...", 0));
        installButton->setText(tr2i18n("&Install...", 0));
        deleteButton->setText(tr2i18n("&Delete", 0));
    } // retranslateUi

};

namespace Ui {
    class ChatWindowConfig_Style: public Ui_ChatWindowConfig_Style {};
} // namespace Ui

QT_END_NAMESPACE

#endif // CHATWINDOWCONFIG_STYLE_H

