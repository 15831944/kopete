#include <kdialog.h>
#include <klocale.h>

/********************************************************************************
** Form generated from reading UI file 'chatwindowconfig_colors.ui'
**
** Created by: Qt User Interface Compiler version 4.8.7
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_CHATWINDOWCONFIG_COLORS_H
#define UI_CHATWINDOWCONFIG_COLORS_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtGui/QApplication>
#include <QtGui/QButtonGroup>
#include <QtGui/QCheckBox>
#include <QtGui/QGridLayout>
#include <QtGui/QGroupBox>
#include <QtGui/QHeaderView>
#include <QtGui/QLabel>
#include <QtGui/QRadioButton>
#include <QtGui/QSpacerItem>
#include <QtGui/QVBoxLayout>
#include <QtGui/QWidget>
#include "kbuttongroup.h"
#include "kcolorbutton.h"
#include "kfontrequester.h"

QT_BEGIN_NAMESPACE

class Ui_ChatWindowConfig_Colors
{
public:
    QVBoxLayout *verticalLayout;
    KButtonGroup *kcfg_chatFontSelection;
    QGridLayout *gridLayout;
    QLabel *textLabel3_2;
    QRadioButton *radioButton;
    QRadioButton *radioButton_2;
    KFontRequester *kcfg_chatFont;
    QGroupBox *groupBox;
    QGridLayout *gridLayout_2;
    QLabel *textLabel3;
    KColorButton *kcfg_chatTextColor;
    QLabel *textLabel2;
    KColorButton *kcfg_highlightForegroundColor;
    QLabel *textLabel2_2;
    KColorButton *kcfg_chatBackgroundColor;
    QLabel *textLabel1;
    KColorButton *kcfg_highlightBackgroundColor;
    QLabel *textLabel1_3;
    KColorButton *kcfg_chatLinkColor;
    QGroupBox *groupBox_2;
    QVBoxLayout *vboxLayout;
    QCheckBox *kcfg_chatFmtOverride;
    QSpacerItem *spacerItem;

    void setupUi(QWidget *ChatWindowConfig_Colors)
    {
        if (ChatWindowConfig_Colors->objectName().isEmpty())
            ChatWindowConfig_Colors->setObjectName(QString::fromUtf8("ChatWindowConfig_Colors"));
        ChatWindowConfig_Colors->resize(564, 406);
        verticalLayout = new QVBoxLayout(ChatWindowConfig_Colors);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        kcfg_chatFontSelection = new KButtonGroup(ChatWindowConfig_Colors);
        kcfg_chatFontSelection->setObjectName(QString::fromUtf8("kcfg_chatFontSelection"));
        kcfg_chatFontSelection->setProperty("current", QVariant(0));
        gridLayout = new QGridLayout(kcfg_chatFontSelection);
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        textLabel3_2 = new QLabel(kcfg_chatFontSelection);
        textLabel3_2->setObjectName(QString::fromUtf8("textLabel3_2"));

        gridLayout->addWidget(textLabel3_2, 0, 0, 1, 1);

        radioButton = new QRadioButton(kcfg_chatFontSelection);
        radioButton->setObjectName(QString::fromUtf8("radioButton"));

        gridLayout->addWidget(radioButton, 0, 1, 1, 2);

        radioButton_2 = new QRadioButton(kcfg_chatFontSelection);
        radioButton_2->setObjectName(QString::fromUtf8("radioButton_2"));

        gridLayout->addWidget(radioButton_2, 1, 1, 1, 1);

        kcfg_chatFont = new KFontRequester(kcfg_chatFontSelection);
        kcfg_chatFont->setObjectName(QString::fromUtf8("kcfg_chatFont"));
        kcfg_chatFont->setEnabled(false);
        QSizePolicy sizePolicy(QSizePolicy::Preferred, QSizePolicy::Fixed);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(kcfg_chatFont->sizePolicy().hasHeightForWidth());
        kcfg_chatFont->setSizePolicy(sizePolicy);
        kcfg_chatFont->setFocusPolicy(Qt::StrongFocus);

        gridLayout->addWidget(kcfg_chatFont, 1, 2, 1, 1);


        verticalLayout->addWidget(kcfg_chatFontSelection);

        groupBox = new QGroupBox(ChatWindowConfig_Colors);
        groupBox->setObjectName(QString::fromUtf8("groupBox"));
        QSizePolicy sizePolicy1(QSizePolicy::Preferred, QSizePolicy::Preferred);
        sizePolicy1.setHorizontalStretch(0);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(groupBox->sizePolicy().hasHeightForWidth());
        groupBox->setSizePolicy(sizePolicy1);
        gridLayout_2 = new QGridLayout(groupBox);
        gridLayout_2->setObjectName(QString::fromUtf8("gridLayout_2"));
        textLabel3 = new QLabel(groupBox);
        textLabel3->setObjectName(QString::fromUtf8("textLabel3"));

        gridLayout_2->addWidget(textLabel3, 0, 0, 1, 1);

        kcfg_chatTextColor = new KColorButton(groupBox);
        kcfg_chatTextColor->setObjectName(QString::fromUtf8("kcfg_chatTextColor"));

        gridLayout_2->addWidget(kcfg_chatTextColor, 0, 1, 1, 1);

        textLabel2 = new QLabel(groupBox);
        textLabel2->setObjectName(QString::fromUtf8("textLabel2"));

        gridLayout_2->addWidget(textLabel2, 0, 2, 1, 1);

        kcfg_highlightForegroundColor = new KColorButton(groupBox);
        kcfg_highlightForegroundColor->setObjectName(QString::fromUtf8("kcfg_highlightForegroundColor"));

        gridLayout_2->addWidget(kcfg_highlightForegroundColor, 0, 3, 1, 1);

        textLabel2_2 = new QLabel(groupBox);
        textLabel2_2->setObjectName(QString::fromUtf8("textLabel2_2"));

        gridLayout_2->addWidget(textLabel2_2, 1, 0, 1, 1);

        kcfg_chatBackgroundColor = new KColorButton(groupBox);
        kcfg_chatBackgroundColor->setObjectName(QString::fromUtf8("kcfg_chatBackgroundColor"));
        kcfg_chatBackgroundColor->setColor(QColor(255, 255, 255));

        gridLayout_2->addWidget(kcfg_chatBackgroundColor, 1, 1, 1, 1);

        textLabel1 = new QLabel(groupBox);
        textLabel1->setObjectName(QString::fromUtf8("textLabel1"));

        gridLayout_2->addWidget(textLabel1, 1, 2, 1, 1);

        kcfg_highlightBackgroundColor = new KColorButton(groupBox);
        kcfg_highlightBackgroundColor->setObjectName(QString::fromUtf8("kcfg_highlightBackgroundColor"));

        gridLayout_2->addWidget(kcfg_highlightBackgroundColor, 1, 3, 1, 1);

        textLabel1_3 = new QLabel(groupBox);
        textLabel1_3->setObjectName(QString::fromUtf8("textLabel1_3"));

        gridLayout_2->addWidget(textLabel1_3, 2, 0, 1, 1);

        kcfg_chatLinkColor = new KColorButton(groupBox);
        kcfg_chatLinkColor->setObjectName(QString::fromUtf8("kcfg_chatLinkColor"));
        kcfg_chatLinkColor->setColor(QColor(0, 85, 255));

        gridLayout_2->addWidget(kcfg_chatLinkColor, 2, 1, 1, 1);


        verticalLayout->addWidget(groupBox);

        groupBox_2 = new QGroupBox(ChatWindowConfig_Colors);
        groupBox_2->setObjectName(QString::fromUtf8("groupBox_2"));
        vboxLayout = new QVBoxLayout(groupBox_2);
        vboxLayout->setObjectName(QString::fromUtf8("vboxLayout"));
        kcfg_chatFmtOverride = new QCheckBox(groupBox_2);
        kcfg_chatFmtOverride->setObjectName(QString::fromUtf8("kcfg_chatFmtOverride"));

        vboxLayout->addWidget(kcfg_chatFmtOverride);


        verticalLayout->addWidget(groupBox_2);

        spacerItem = new QSpacerItem(20, 0, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout->addItem(spacerItem);

#ifndef UI_QT_NO_SHORTCUT
        textLabel3_2->setBuddy(kcfg_chatTextColor);
        textLabel3->setBuddy(kcfg_chatTextColor);
        textLabel2->setBuddy(kcfg_highlightForegroundColor);
        textLabel2_2->setBuddy(kcfg_chatBackgroundColor);
        textLabel1->setBuddy(kcfg_highlightBackgroundColor);
        textLabel1_3->setBuddy(kcfg_chatLinkColor);
#endif // QT_NO_SHORTCUT
        QWidget::setTabOrder(kcfg_chatTextColor, kcfg_chatFont);
        QWidget::setTabOrder(kcfg_chatFont, kcfg_chatBackgroundColor);
        QWidget::setTabOrder(kcfg_chatBackgroundColor, kcfg_chatLinkColor);
        QWidget::setTabOrder(kcfg_chatLinkColor, kcfg_highlightForegroundColor);
        QWidget::setTabOrder(kcfg_highlightForegroundColor, kcfg_highlightBackgroundColor);
        QWidget::setTabOrder(kcfg_highlightBackgroundColor, kcfg_chatFmtOverride);

        retranslateUi(ChatWindowConfig_Colors);
        QObject::connect(radioButton_2, SIGNAL(toggled(bool)), kcfg_chatFont, SLOT(setEnabled(bool)));

        QMetaObject::connectSlotsByName(ChatWindowConfig_Colors);
    } // setupUi

    void retranslateUi(QWidget *ChatWindowConfig_Colors)
    {
        kcfg_chatFontSelection->setTitle(tr2i18n("Fonts", 0));
#ifndef UI_QT_NO_TOOLTIP
        textLabel3_2->setToolTip(tr2i18n("<html><head><meta name=\"qrichtext\" content=\"1\" /><style type=\"text/css\">\n"
"p, li { white-space: pre-wrap; }\n"
"</style></head><body style=\" font-family:'Sans Serif'; font-size:10pt; font-weight:400; font-style:normal;\">\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\">Base font in the chat window</p>\n"
"<p style=\"-qt-paragraph-type:empty; margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"></p></body></html>", 0));
#endif // QT_NO_TOOLTIP
        textLabel3_2->setText(tr2i18n("Base &font:", 0));
#ifndef UI_QT_NO_WHATSTHIS
        radioButton->setWhatsThis(tr2i18n("Use normal screen font", 0));
#endif // QT_NO_WHATSTHIS
        radioButton->setText(tr2i18n("Use system font", 0));
        radioButton_2->setText(tr2i18n("Use custom font:", 0));
#ifndef UI_QT_NO_TOOLTIP
        kcfg_chatFont->setToolTip(tr2i18n("<html><head><meta name=\"qrichtext\" content=\"1\" /><style type=\"text/css\">\n"
"p, li { white-space: pre-wrap; }\n"
"</style></head><body style=\" font-family:'Sans Serif'; font-size:10pt; font-weight:400; font-style:normal;\">\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\">Base font in the chat window</p>\n"
"<p style=\"-qt-paragraph-type:empty; margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"></p></body></html>", 0));
#endif // QT_NO_TOOLTIP
        groupBox->setTitle(tr2i18n("Colors", 0));
#ifndef UI_QT_NO_TOOLTIP
        textLabel3->setToolTip(tr2i18n("The color of normal text", 0));
#endif // QT_NO_TOOLTIP
#ifndef UI_QT_NO_WHATSTHIS
        textLabel3->setWhatsThis(tr2i18n("The color of normal text", 0));
#endif // QT_NO_WHATSTHIS
        textLabel3->setText(tr2i18n("Base &font:", 0));
#ifndef UI_QT_NO_TOOLTIP
        kcfg_chatTextColor->setToolTip(tr2i18n("The color of normal text", 0));
#endif // QT_NO_TOOLTIP
#ifndef UI_QT_NO_WHATSTHIS
        kcfg_chatTextColor->setWhatsThis(tr2i18n("The color of normal text", 0));
#endif // QT_NO_WHATSTHIS
        kcfg_chatTextColor->setText(QString());
        textLabel2->setText(tr2i18n("&Highlight foreground:", 0));
#ifndef UI_QT_NO_TOOLTIP
        kcfg_highlightForegroundColor->setToolTip(tr2i18n("Foreground color for highlighted messages", 0));
#endif // QT_NO_TOOLTIP
#ifndef UI_QT_NO_WHATSTHIS
        kcfg_highlightForegroundColor->setWhatsThis(tr2i18n("Foreground color for highlighted messages", 0));
#endif // QT_NO_WHATSTHIS
        kcfg_highlightForegroundColor->setText(QString());
#ifndef UI_QT_NO_TOOLTIP
        textLabel2_2->setToolTip(tr2i18n("Color for the background of the chat window", 0));
#endif // QT_NO_TOOLTIP
#ifndef UI_QT_NO_WHATSTHIS
        textLabel2_2->setWhatsThis(tr2i18n("Color for the background of the chat window", 0));
#endif // QT_NO_WHATSTHIS
        textLabel2_2->setText(tr2i18n("&Background color:", 0));
#ifndef UI_QT_NO_TOOLTIP
        kcfg_chatBackgroundColor->setToolTip(tr2i18n("Color for the background of the chat window", 0));
#endif // QT_NO_TOOLTIP
#ifndef UI_QT_NO_WHATSTHIS
        kcfg_chatBackgroundColor->setWhatsThis(tr2i18n("Color for the background of the chat window", 0));
#endif // QT_NO_WHATSTHIS
        kcfg_chatBackgroundColor->setText(QString());
#ifndef UI_QT_NO_TOOLTIP
        textLabel1->setToolTip(tr2i18n("Background color for highlighted messages", 0));
#endif // QT_NO_TOOLTIP
#ifndef UI_QT_NO_WHATSTHIS
        textLabel1->setWhatsThis(tr2i18n("Background color for highlighted messages", 0));
#endif // QT_NO_WHATSTHIS
        textLabel1->setText(tr2i18n("Highlight bac&kground:", 0));
#ifndef UI_QT_NO_TOOLTIP
        kcfg_highlightBackgroundColor->setToolTip(tr2i18n("Background color for highlighted messages", 0));
#endif // QT_NO_TOOLTIP
#ifndef UI_QT_NO_WHATSTHIS
        kcfg_highlightBackgroundColor->setWhatsThis(tr2i18n("Background color for highlighted messages", 0));
#endif // QT_NO_WHATSTHIS
        kcfg_highlightBackgroundColor->setText(QString());
#ifndef UI_QT_NO_TOOLTIP
        textLabel1_3->setToolTip(tr2i18n("Color used for links in chats", 0));
#endif // QT_NO_TOOLTIP
#ifndef UI_QT_NO_WHATSTHIS
        textLabel1_3->setWhatsThis(tr2i18n("Color used for links in chats", 0));
#endif // QT_NO_WHATSTHIS
        textLabel1_3->setText(tr2i18n("&Link color:", 0));
#ifndef UI_QT_NO_TOOLTIP
        kcfg_chatLinkColor->setToolTip(tr2i18n("Color used for links in chats", 0));
#endif // QT_NO_TOOLTIP
#ifndef UI_QT_NO_WHATSTHIS
        kcfg_chatLinkColor->setWhatsThis(tr2i18n("Color used for links in chats", 0));
#endif // QT_NO_WHATSTHIS
        kcfg_chatLinkColor->setText(QString());
        groupBox_2->setTitle(tr2i18n("Formatting Overrides", 0));
#ifndef UI_QT_NO_TOOLTIP
        kcfg_chatFmtOverride->setToolTip(tr2i18n("Disregard the colors (background and foreground), and font (size and typeface) of incoming messages", 0));
#endif // QT_NO_TOOLTIP
#ifndef UI_QT_NO_WHATSTHIS
        kcfg_chatFmtOverride->setWhatsThis(tr2i18n("Disregard the colors (background and foreground), and font (size and typeface) of incoming messages", 0));
#endif // QT_NO_WHATSTHIS
        kcfg_chatFmtOverride->setText(tr2i18n("Ignore peer's formatting", 0));
        Q_UNUSED(ChatWindowConfig_Colors);
    } // retranslateUi

};

namespace Ui {
    class ChatWindowConfig_Colors: public Ui_ChatWindowConfig_Colors {};
} // namespace Ui

QT_END_NAMESPACE

#endif // CHATWINDOWCONFIG_COLORS_H

