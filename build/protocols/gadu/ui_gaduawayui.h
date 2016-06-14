#include <kdialog.h>
#include <klocale.h>

/********************************************************************************
** Form generated from reading UI file 'gaduawayui.ui'
**
** Created by: Qt User Interface Compiler version 4.8.7
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_GADUAWAYUI_H
#define UI_GADUAWAYUI_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtGui/QApplication>
#include <QtGui/QButtonGroup>
#include <QtGui/QGridLayout>
#include <QtGui/QGroupBox>
#include <QtGui/QHBoxLayout>
#include <QtGui/QHeaderView>
#include <QtGui/QLabel>
#include <QtGui/QLineEdit>
#include <QtGui/QRadioButton>
#include <QtGui/QVBoxLayout>
#include <QtGui/QWidget>

QT_BEGIN_NAMESPACE

class Ui_GaduAwayUI
{
public:
    QGridLayout *gridLayout;
    QVBoxLayout *vboxLayout;
    QGroupBox *statusGroup_;
    QGridLayout *gridLayout1;
    QVBoxLayout *vboxLayout1;
    QRadioButton *onlineButton_;
    QRadioButton *awayButton_;
    QRadioButton *invisibleButton_;
    QRadioButton *offlineButton_;
    QHBoxLayout *hboxLayout;
    QLabel *textLabel3;
    QLineEdit *textEdit_;
    QButtonGroup *buttonGroup_;

    void setupUi(QWidget *GaduAwayUI)
    {
        if (GaduAwayUI->objectName().isEmpty())
            GaduAwayUI->setObjectName(QString::fromUtf8("GaduAwayUI"));
        GaduAwayUI->resize(332, 200);
        GaduAwayUI->setFocusPolicy(Qt::TabFocus);
        gridLayout = new QGridLayout(GaduAwayUI);
#ifndef UI_Q_OS_MAC
        gridLayout->setSpacing(6);
#endif
        gridLayout->setContentsMargins(0, 0, 0, 0);
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        vboxLayout = new QVBoxLayout();
#ifndef UI_Q_OS_MAC
        vboxLayout->setSpacing(6);
#endif
#ifndef UI_Q_OS_MAC
        vboxLayout->setContentsMargins(0, 0, 0, 0);
#endif
        vboxLayout->setObjectName(QString::fromUtf8("vboxLayout"));
        statusGroup_ = new QGroupBox(GaduAwayUI);
        statusGroup_->setObjectName(QString::fromUtf8("statusGroup_"));
        gridLayout1 = new QGridLayout(statusGroup_);
#ifndef UI_Q_OS_MAC
        gridLayout1->setSpacing(6);
#endif
        gridLayout1->setContentsMargins(11, 11, 11, 11);
        gridLayout1->setObjectName(QString::fromUtf8("gridLayout1"));
        vboxLayout1 = new QVBoxLayout();
#ifndef UI_Q_OS_MAC
        vboxLayout1->setSpacing(6);
#endif
#ifndef UI_Q_OS_MAC
        vboxLayout1->setContentsMargins(0, 0, 0, 0);
#endif
        vboxLayout1->setObjectName(QString::fromUtf8("vboxLayout1"));
        onlineButton_ = new QRadioButton(statusGroup_);
        buttonGroup_ = new QButtonGroup(GaduAwayUI);
        buttonGroup_->setObjectName(QString::fromUtf8("buttonGroup_"));
        buttonGroup_->addButton(onlineButton_);
        onlineButton_->setObjectName(QString::fromUtf8("onlineButton_"));

        vboxLayout1->addWidget(onlineButton_);

        awayButton_ = new QRadioButton(statusGroup_);
        buttonGroup_->addButton(awayButton_);
        awayButton_->setObjectName(QString::fromUtf8("awayButton_"));

        vboxLayout1->addWidget(awayButton_);

        invisibleButton_ = new QRadioButton(statusGroup_);
        buttonGroup_->addButton(invisibleButton_);
        invisibleButton_->setObjectName(QString::fromUtf8("invisibleButton_"));

        vboxLayout1->addWidget(invisibleButton_);

        offlineButton_ = new QRadioButton(statusGroup_);
        buttonGroup_->addButton(offlineButton_);
        offlineButton_->setObjectName(QString::fromUtf8("offlineButton_"));

        vboxLayout1->addWidget(offlineButton_);


        gridLayout1->addLayout(vboxLayout1, 0, 0, 1, 1);


        vboxLayout->addWidget(statusGroup_);

        hboxLayout = new QHBoxLayout();
#ifndef UI_Q_OS_MAC
        hboxLayout->setSpacing(6);
#endif
        hboxLayout->setContentsMargins(0, 0, 0, 0);
        hboxLayout->setObjectName(QString::fromUtf8("hboxLayout"));
        textLabel3 = new QLabel(GaduAwayUI);
        textLabel3->setObjectName(QString::fromUtf8("textLabel3"));

        hboxLayout->addWidget(textLabel3);

        textEdit_ = new QLineEdit(GaduAwayUI);
        textEdit_->setObjectName(QString::fromUtf8("textEdit_"));
        textEdit_->setAcceptDrops(false);
        textEdit_->setMaxLength(70);

        hboxLayout->addWidget(textEdit_);


        vboxLayout->addLayout(hboxLayout);


        gridLayout->addLayout(vboxLayout, 0, 0, 1, 1);

#ifndef UI_QT_NO_SHORTCUT
        textLabel3->setBuddy(textEdit_);
#endif // QT_NO_SHORTCUT
        QWidget::setTabOrder(onlineButton_, awayButton_);
        QWidget::setTabOrder(awayButton_, invisibleButton_);
        QWidget::setTabOrder(invisibleButton_, offlineButton_);
        QWidget::setTabOrder(offlineButton_, textEdit_);

        retranslateUi(GaduAwayUI);

        QMetaObject::connectSlotsByName(GaduAwayUI);
    } // setupUi

    void retranslateUi(QWidget *GaduAwayUI)
    {
        GaduAwayUI->setWindowTitle(tr2i18n("Away Dialog", 0));
#ifndef UI_QT_NO_WHATSTHIS
        statusGroup_->setWhatsThis(tr2i18n("Choose a status; by default Online status is selected. \n"
"So all you need to do is just to type in your description. \n"
"Choosing Offline status will disconnect you, with given description.", 0));
#endif // QT_NO_WHATSTHIS
        statusGroup_->setTitle(tr2i18n("Status", 0));
#ifndef UI_QT_NO_TOOLTIP
        onlineButton_->setToolTip(tr2i18n("Set your status to Online.", 0));
#endif // QT_NO_TOOLTIP
#ifndef UI_QT_NO_WHATSTHIS
        onlineButton_->setWhatsThis(tr2i18n("Set your status to Online, indicating that you are available to chat with anyone who wishes.", 0));
#endif // QT_NO_WHATSTHIS
        onlineButton_->setText(tr2i18n("O&nline", 0));
#ifndef UI_QT_NO_TOOLTIP
        awayButton_->setToolTip(tr2i18n("Set your status to busy.", 0));
#endif // QT_NO_TOOLTIP
#ifndef UI_QT_NO_WHATSTHIS
        awayButton_->setWhatsThis(tr2i18n("Set your status to busy, indicating that you should not be bothered with trivial chat, and may not be able to reply immediately.", 0));
#endif // QT_NO_WHATSTHIS
        awayButton_->setText(tr2i18n("&Busy", 0));
#ifndef UI_QT_NO_TOOLTIP
        invisibleButton_->setToolTip(tr2i18n("Set status to invisible, which will hide your presence from other users.", 0));
#endif // QT_NO_TOOLTIP
#ifndef UI_QT_NO_WHATSTHIS
        invisibleButton_->setWhatsThis(tr2i18n("Set status to invisible, which will hide your presence from other users (who will see you as offline).  However you may still chat, and see the online presence of others.", 0));
#endif // QT_NO_WHATSTHIS
        invisibleButton_->setText(tr2i18n("&Invisible", 0));
#ifndef UI_QT_NO_TOOLTIP
        offlineButton_->setToolTip(tr2i18n("Choose this status to disconnect with the description entered below.", 0));
#endif // QT_NO_TOOLTIP
#ifndef UI_QT_NO_WHATSTHIS
        offlineButton_->setWhatsThis(tr2i18n("Choose this status to disconnect with the description entered below.", 0));
#endif // QT_NO_WHATSTHIS
        offlineButton_->setText(tr2i18n("O&ffline", 0));
#ifndef UI_QT_NO_TOOLTIP
        textLabel3->setToolTip(tr2i18n("Description of your status.", 0));
#endif // QT_NO_TOOLTIP
#ifndef UI_QT_NO_WHATSTHIS
        textLabel3->setWhatsThis(tr2i18n("Description of your status (up to 70 characters).", 0));
#endif // QT_NO_WHATSTHIS
        textLabel3->setText(tr2i18n("&Message:", 0));
#ifndef UI_QT_NO_TOOLTIP
        textEdit_->setToolTip(tr2i18n("Description of your status.", 0));
#endif // QT_NO_TOOLTIP
#ifndef UI_QT_NO_WHATSTHIS
        textEdit_->setWhatsThis(tr2i18n("Description of your status (up to 70 characters).", 0));
#endif // QT_NO_WHATSTHIS
    } // retranslateUi

};

namespace Ui {
    class GaduAwayUI: public Ui_GaduAwayUI {};
} // namespace Ui

QT_END_NAMESPACE

#endif // GADUAWAYUI_H

