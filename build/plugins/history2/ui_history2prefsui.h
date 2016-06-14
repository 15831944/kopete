#include <kdialog.h>
#include <klocale.h>

/********************************************************************************
** Form generated from reading UI file 'history2prefsui.ui'
**
** Created by: Qt User Interface Compiler version 4.8.7
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_HISTORY2PREFSUI_H
#define UI_HISTORY2PREFSUI_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtGui/QApplication>
#include <QtGui/QButtonGroup>
#include <QtGui/QCheckBox>
#include <QtGui/QGridLayout>
#include <QtGui/QGroupBox>
#include <QtGui/QHeaderView>
#include <QtGui/QLabel>
#include <QtGui/QPushButton>
#include <QtGui/QSpacerItem>
#include <QtGui/QVBoxLayout>
#include <QtGui/QWidget>
#include "kcolorbutton.h"
#include "knuminput.h"

QT_BEGIN_NAMESPACE

class Ui_History2PrefsUI
{
public:
    QVBoxLayout *vboxLayout;
    QGroupBox *groupBox;
    QGridLayout *gridLayout;
    KIntSpinBox *Number_Auto_chatwindow;
    QLabel *colorLabel;
    QCheckBox *chkShowPrevious;
    QSpacerItem *spacerItem;
    QLabel *lblNoLinesPerPage;
    QLabel *numberLabel;
    KColorButton *History_color;
    KIntSpinBox *Number_ChatWindow;
    QPushButton *import2;
    QSpacerItem *spacerItem1;

    void setupUi(QWidget *History2PrefsUI)
    {
        if (History2PrefsUI->objectName().isEmpty())
            History2PrefsUI->setObjectName(QString::fromUtf8("History2PrefsUI"));
        History2PrefsUI->resize(523, 482);
        vboxLayout = new QVBoxLayout(History2PrefsUI);
#ifndef UI_Q_OS_MAC
        vboxLayout->setSpacing(6);
#endif
        vboxLayout->setContentsMargins(0, 0, 0, 0);
        vboxLayout->setObjectName(QString::fromUtf8("vboxLayout"));
        groupBox = new QGroupBox(History2PrefsUI);
        groupBox->setObjectName(QString::fromUtf8("groupBox"));
        gridLayout = new QGridLayout(groupBox);
#ifndef UI_Q_OS_MAC
        gridLayout->setSpacing(6);
#endif
#ifndef UI_Q_OS_MAC
        gridLayout->setContentsMargins(9, 9, 9, 9);
#endif
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        Number_Auto_chatwindow = new KIntSpinBox(groupBox);
        Number_Auto_chatwindow->setObjectName(QString::fromUtf8("Number_Auto_chatwindow"));
        Number_Auto_chatwindow->setMinimum(1);
        Number_Auto_chatwindow->setMaximum(32768);
        Number_Auto_chatwindow->setValue(7);

        gridLayout->addWidget(Number_Auto_chatwindow, 1, 2, 1, 1);

        colorLabel = new QLabel(groupBox);
        colorLabel->setObjectName(QString::fromUtf8("colorLabel"));

        gridLayout->addWidget(colorLabel, 2, 1, 1, 1);

        chkShowPrevious = new QCheckBox(groupBox);
        chkShowPrevious->setObjectName(QString::fromUtf8("chkShowPrevious"));
        chkShowPrevious->setChecked(true);

        gridLayout->addWidget(chkShowPrevious, 0, 0, 1, 3);

        spacerItem = new QSpacerItem(16, 20, QSizePolicy::Fixed, QSizePolicy::Minimum);

        gridLayout->addItem(spacerItem, 2, 0, 1, 1);

        lblNoLinesPerPage = new QLabel(groupBox);
        lblNoLinesPerPage->setObjectName(QString::fromUtf8("lblNoLinesPerPage"));

        gridLayout->addWidget(lblNoLinesPerPage, 3, 1, 1, 1);

        numberLabel = new QLabel(groupBox);
        numberLabel->setObjectName(QString::fromUtf8("numberLabel"));

        gridLayout->addWidget(numberLabel, 1, 1, 1, 1);

        History_color = new KColorButton(groupBox);
        History_color->setObjectName(QString::fromUtf8("History_color"));
        History_color->setColor(QColor(170, 170, 127));

        gridLayout->addWidget(History_color, 2, 2, 1, 1);

        Number_ChatWindow = new KIntSpinBox(groupBox);
        Number_ChatWindow->setObjectName(QString::fromUtf8("Number_ChatWindow"));
        Number_ChatWindow->setMinimum(1);
        Number_ChatWindow->setMaximum(32768);
        Number_ChatWindow->setValue(10);

        gridLayout->addWidget(Number_ChatWindow, 3, 2, 1, 1);

        import2 = new QPushButton(groupBox);
        import2->setObjectName(QString::fromUtf8("import2"));

        gridLayout->addWidget(import2, 4, 2, 1, 1);


        vboxLayout->addWidget(groupBox);

        spacerItem1 = new QSpacerItem(341, 16, QSizePolicy::Minimum, QSizePolicy::Expanding);

        vboxLayout->addItem(spacerItem1);

#ifndef UI_QT_NO_SHORTCUT
        colorLabel->setBuddy(History_color);
        numberLabel->setBuddy(Number_Auto_chatwindow);
#endif // QT_NO_SHORTCUT
        QWidget::setTabOrder(chkShowPrevious, Number_Auto_chatwindow);
        QWidget::setTabOrder(Number_Auto_chatwindow, History_color);

        retranslateUi(History2PrefsUI);
        QObject::connect(chkShowPrevious, SIGNAL(toggled(bool)), numberLabel, SLOT(setEnabled(bool)));
        QObject::connect(chkShowPrevious, SIGNAL(toggled(bool)), Number_Auto_chatwindow, SLOT(setEnabled(bool)));
        QObject::connect(chkShowPrevious, SIGNAL(toggled(bool)), colorLabel, SLOT(setEnabled(bool)));
        QObject::connect(chkShowPrevious, SIGNAL(toggled(bool)), History_color, SLOT(setEnabled(bool)));
        QObject::connect(chkShowPrevious, SIGNAL(toggled(bool)), lblNoLinesPerPage, SLOT(setEnabled(bool)));
        QObject::connect(chkShowPrevious, SIGNAL(toggled(bool)), Number_ChatWindow, SLOT(setEnabled(bool)));

        QMetaObject::connectSlotsByName(History2PrefsUI);
    } // setupUi

    void retranslateUi(QWidget *History2PrefsUI)
    {
        groupBox->setTitle(tr2i18n("Chat History", 0));
#ifndef UI_QT_NO_WHATSTHIS
        Number_Auto_chatwindow->setWhatsThis(tr2i18n("This is the number of messages that will be added automatically in the chat window when opening a new chat.", 0));
#endif // QT_NO_WHATSTHIS
#ifndef UI_QT_NO_WHATSTHIS
        colorLabel->setWhatsThis(tr2i18n("Color of history messages in the chat window", 0));
#endif // QT_NO_WHATSTHIS
        colorLabel->setText(tr2i18n("Color of messages:", 0));
#ifndef UI_QT_NO_WHATSTHIS
        chkShowPrevious->setWhatsThis(tr2i18n("When a new chat is opened, automatically add the last few messages between you and that contact.", 0));
#endif // QT_NO_WHATSTHIS
        chkShowPrevious->setText(tr2i18n("Show chat history in new chats", 0));
#ifndef UI_QT_NO_WHATSTHIS
        lblNoLinesPerPage->setWhatsThis(tr2i18n("The number of messages that are shown when browsing history in the chat window", 0));
#endif // QT_NO_WHATSTHIS
        lblNoLinesPerPage->setText(tr2i18n("Number of messages per page:", 0));
#ifndef UI_QT_NO_WHATSTHIS
        numberLabel->setWhatsThis(tr2i18n("This is the number of messages that will be added automatically in the chat window when opening a new chat.", 0));
#endif // QT_NO_WHATSTHIS
        numberLabel->setText(tr2i18n("Number of messages to show:", 0));
#ifndef UI_QT_NO_WHATSTHIS
        History_color->setWhatsThis(tr2i18n("Color of history messages in the chat window", 0));
#endif // QT_NO_WHATSTHIS
        History_color->setText(QString());
#ifndef UI_QT_NO_WHATSTHIS
        Number_ChatWindow->setWhatsThis(tr2i18n("The number of message that are shown when borwsing history in the chat window", 0));
#endif // QT_NO_WHATSTHIS
#ifndef UI_QT_NO_WHATSTHIS
        import2->setWhatsThis(tr2i18n("Import history from other kopete history plugin, pidgin,..", 0));
#endif // QT_NO_WHATSTHIS
        import2->setText(tr2i18n("Import history", 0));
        Q_UNUSED(History2PrefsUI);
    } // retranslateUi

};

namespace Ui {
    class History2PrefsUI: public Ui_History2PrefsUI {};
} // namespace Ui

QT_END_NAMESPACE

#endif // HISTORY2PREFSUI_H

