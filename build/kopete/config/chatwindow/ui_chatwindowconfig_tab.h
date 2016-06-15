#include <kdialog.h>
#include <klocale.h>

/********************************************************************************
** Form generated from reading UI file 'chatwindowconfig_tab.ui'
**
** Created by: Qt User Interface Compiler version 4.8.7
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_CHATWINDOWCONFIG_TAB_H
#define UI_CHATWINDOWCONFIG_TAB_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtGui/QApplication>
#include <QtGui/QButtonGroup>
#include <QtGui/QCheckBox>
#include <QtGui/QGroupBox>
#include <QtGui/QHeaderView>
#include <QtGui/QSpacerItem>
#include <QtGui/QVBoxLayout>
#include <QtGui/QWidget>

QT_BEGIN_NAMESPACE

class Ui_ChatWindowConfig_Tab
{
public:
    QVBoxLayout *verticalLayout;
    QGroupBox *groupBox_2;
    QVBoxLayout *vboxLayout;
    QCheckBox *kcfg_ShowContactName;
    QCheckBox *kcfg_HoverClose;
    QSpacerItem *spacerItem;

    void setupUi(QWidget *ChatWindowConfig_Tab)
    {
        if (ChatWindowConfig_Tab->objectName().isEmpty())
            ChatWindowConfig_Tab->setObjectName(QString::fromUtf8("ChatWindowConfig_Tab"));
        ChatWindowConfig_Tab->resize(564, 406);
        verticalLayout = new QVBoxLayout(ChatWindowConfig_Tab);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        groupBox_2 = new QGroupBox(ChatWindowConfig_Tab);
        groupBox_2->setObjectName(QString::fromUtf8("groupBox_2"));
        vboxLayout = new QVBoxLayout(groupBox_2);
        vboxLayout->setObjectName(QString::fromUtf8("vboxLayout"));
        kcfg_ShowContactName = new QCheckBox(groupBox_2);
        kcfg_ShowContactName->setObjectName(QString::fromUtf8("kcfg_ShowContactName"));
        kcfg_ShowContactName->setChecked(true);

        vboxLayout->addWidget(kcfg_ShowContactName);

        kcfg_HoverClose = new QCheckBox(groupBox_2);
        kcfg_HoverClose->setObjectName(QString::fromUtf8("kcfg_HoverClose"));
        kcfg_HoverClose->setChecked(true);

        vboxLayout->addWidget(kcfg_HoverClose);


        verticalLayout->addWidget(groupBox_2);

        spacerItem = new QSpacerItem(20, 0, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout->addItem(spacerItem);

        QWidget::setTabOrder(kcfg_ShowContactName, kcfg_HoverClose);

        retranslateUi(ChatWindowConfig_Tab);

        QMetaObject::connectSlotsByName(ChatWindowConfig_Tab);
    } // setupUi

    void retranslateUi(QWidget *ChatWindowConfig_Tab)
    {
        groupBox_2->setTitle(tr2i18n("For each tab", 0));
        kcfg_ShowContactName->setText(tr2i18n("Show contact name", 0));
        kcfg_HoverClose->setText(tr2i18n("Show close button", 0));
        Q_UNUSED(ChatWindowConfig_Tab);
    } // retranslateUi

};

namespace Ui {
    class ChatWindowConfig_Tab: public Ui_ChatWindowConfig_Tab {};
} // namespace Ui

QT_END_NAMESPACE

#endif // CHATWINDOWCONFIG_TAB_H

