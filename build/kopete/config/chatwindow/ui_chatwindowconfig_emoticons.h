#include <kdialog.h>
#include <klocale.h>

/********************************************************************************
** Form generated from reading UI file 'chatwindowconfig_emoticons.ui'
**
** Created by: Qt User Interface Compiler version 4.8.7
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_CHATWINDOWCONFIG_EMOTICONS_H
#define UI_CHATWINDOWCONFIG_EMOTICONS_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtGui/QApplication>
#include <QtGui/QButtonGroup>
#include <QtGui/QCheckBox>
#include <QtGui/QGridLayout>
#include <QtGui/QHeaderView>
#include <QtGui/QListWidget>
#include <QtGui/QPushButton>
#include <QtGui/QWidget>

QT_BEGIN_NAMESPACE

class Ui_ChatWindowConfig_Emoticons
{
public:
    QGridLayout *gridLayout;
    QCheckBox *kcfg_useEmoticons;
    QListWidget *icon_theme_list;
    QPushButton *btnManageThemes;

    void setupUi(QWidget *ChatWindowConfig_Emoticons)
    {
        if (ChatWindowConfig_Emoticons->objectName().isEmpty())
            ChatWindowConfig_Emoticons->setObjectName(QString::fromUtf8("ChatWindowConfig_Emoticons"));
        ChatWindowConfig_Emoticons->resize(535, 333);
        gridLayout = new QGridLayout(ChatWindowConfig_Emoticons);
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        kcfg_useEmoticons = new QCheckBox(ChatWindowConfig_Emoticons);
        kcfg_useEmoticons->setObjectName(QString::fromUtf8("kcfg_useEmoticons"));
        QSizePolicy sizePolicy(QSizePolicy::Preferred, QSizePolicy::Fixed);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(kcfg_useEmoticons->sizePolicy().hasHeightForWidth());
        kcfg_useEmoticons->setSizePolicy(sizePolicy);
        kcfg_useEmoticons->setChecked(true);

        gridLayout->addWidget(kcfg_useEmoticons, 0, 0, 1, 2);

        icon_theme_list = new QListWidget(ChatWindowConfig_Emoticons);
        icon_theme_list->setObjectName(QString::fromUtf8("icon_theme_list"));
        icon_theme_list->setAlternatingRowColors(true);

        gridLayout->addWidget(icon_theme_list, 1, 0, 1, 2);

        btnManageThemes = new QPushButton(ChatWindowConfig_Emoticons);
        btnManageThemes->setObjectName(QString::fromUtf8("btnManageThemes"));
        QSizePolicy sizePolicy1(QSizePolicy::Maximum, QSizePolicy::Fixed);
        sizePolicy1.setHorizontalStretch(0);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(btnManageThemes->sizePolicy().hasHeightForWidth());
        btnManageThemes->setSizePolicy(sizePolicy1);

        gridLayout->addWidget(btnManageThemes, 2, 1, 1, 1);

        kcfg_useEmoticons->raise();
        icon_theme_list->raise();
        btnManageThemes->raise();

        retranslateUi(ChatWindowConfig_Emoticons);
        QObject::connect(kcfg_useEmoticons, SIGNAL(toggled(bool)), icon_theme_list, SLOT(setEnabled(bool)));

        QMetaObject::connectSlotsByName(ChatWindowConfig_Emoticons);
    } // setupUi

    void retranslateUi(QWidget *ChatWindowConfig_Emoticons)
    {
#ifndef UI_QT_NO_WHATSTHIS
        kcfg_useEmoticons->setWhatsThis(tr2i18n("If this is checked, the text representation of emoticons in messages will be replaced by an image", 0));
#endif // QT_NO_WHATSTHIS
        kcfg_useEmoticons->setText(tr2i18n("U&se the following emoticon theme:", 0));
        btnManageThemes->setText(tr2i18n("&Manage Emoticons...", 0));
        Q_UNUSED(ChatWindowConfig_Emoticons);
    } // retranslateUi

};

namespace Ui {
    class ChatWindowConfig_Emoticons: public Ui_ChatWindowConfig_Emoticons {};
} // namespace Ui

QT_END_NAMESPACE

#endif // CHATWINDOWCONFIG_EMOTICONS_H

