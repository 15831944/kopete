#include <kdialog.h>
#include <klocale.h>

/********************************************************************************
** Form generated from reading UI file 'skypecalldialogbase.ui'
**
** Created by: Qt User Interface Compiler version 4.8.7
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_SKYPECALLDIALOGBASE_H
#define UI_SKYPECALLDIALOGBASE_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtGui/QApplication>
#include <QtGui/QButtonGroup>
#include <QtGui/QGridLayout>
#include <QtGui/QHBoxLayout>
#include <QtGui/QHeaderView>
#include <QtGui/QLabel>
#include <QtGui/QPushButton>
#include <QtGui/QSpacerItem>
#include <QtGui/QVBoxLayout>
#include <QtGui/QWidget>

QT_BEGIN_NAMESPACE

class Ui_SkypeCallDialogBase
{
public:
    QVBoxLayout *vboxLayout;
    QGridLayout *gridLayout;
    QLabel *NameLabel;
    QLabel *textLabel1;
    QLabel *textLabel2;
    QLabel *CreditLabel;
    QLabel *TimeLabel;
    QLabel *StatusLabel;
    QLabel *textLabel1_2;
    QLabel *textLabel3;
    QHBoxLayout *hboxLayout;
    QSpacerItem *spacer3;
    QPushButton *AcceptButton;
    QPushButton *HangButton;
    QPushButton *HoldButton;
    QPushButton *ChatButton;
    QPushButton *VideoButton;
    QSpacerItem *spacer2;

    void setupUi(QWidget *SkypeCallDialogBase)
    {
        if (SkypeCallDialogBase->objectName().isEmpty())
            SkypeCallDialogBase->setObjectName(QString::fromUtf8("SkypeCallDialogBase"));
        vboxLayout = new QVBoxLayout(SkypeCallDialogBase);
        vboxLayout->setObjectName(QString::fromUtf8("vboxLayout"));
        gridLayout = new QGridLayout();
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        NameLabel = new QLabel(SkypeCallDialogBase);
        NameLabel->setObjectName(QString::fromUtf8("NameLabel"));
        NameLabel->setAlignment(Qt::AlignVCenter);
        NameLabel->setWordWrap(true);

        gridLayout->addWidget(NameLabel, 0, 1, 1, 1);

        textLabel1 = new QLabel(SkypeCallDialogBase);
        textLabel1->setObjectName(QString::fromUtf8("textLabel1"));
        textLabel1->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);
        textLabel1->setWordWrap(false);

        gridLayout->addWidget(textLabel1, 0, 0, 1, 1);

        textLabel2 = new QLabel(SkypeCallDialogBase);
        textLabel2->setObjectName(QString::fromUtf8("textLabel2"));
        textLabel2->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);
        textLabel2->setWordWrap(false);

        gridLayout->addWidget(textLabel2, 1, 0, 1, 1);

        CreditLabel = new QLabel(SkypeCallDialogBase);
        CreditLabel->setObjectName(QString::fromUtf8("CreditLabel"));
        CreditLabel->setAlignment(Qt::AlignVCenter);
        CreditLabel->setWordWrap(true);

        gridLayout->addWidget(CreditLabel, 2, 1, 1, 1);

        TimeLabel = new QLabel(SkypeCallDialogBase);
        TimeLabel->setObjectName(QString::fromUtf8("TimeLabel"));
        TimeLabel->setAlignment(Qt::AlignVCenter);
        TimeLabel->setWordWrap(true);

        gridLayout->addWidget(TimeLabel, 1, 1, 1, 1);

        StatusLabel = new QLabel(SkypeCallDialogBase);
        StatusLabel->setObjectName(QString::fromUtf8("StatusLabel"));
        StatusLabel->setAlignment(Qt::AlignVCenter);
        StatusLabel->setWordWrap(true);

        gridLayout->addWidget(StatusLabel, 3, 1, 1, 1);

        textLabel1_2 = new QLabel(SkypeCallDialogBase);
        textLabel1_2->setObjectName(QString::fromUtf8("textLabel1_2"));
        textLabel1_2->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);
        textLabel1_2->setWordWrap(false);

        gridLayout->addWidget(textLabel1_2, 3, 0, 1, 1);

        textLabel3 = new QLabel(SkypeCallDialogBase);
        textLabel3->setObjectName(QString::fromUtf8("textLabel3"));
        textLabel3->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);
        textLabel3->setWordWrap(false);

        gridLayout->addWidget(textLabel3, 2, 0, 1, 1);


        vboxLayout->addLayout(gridLayout);

        hboxLayout = new QHBoxLayout();
        hboxLayout->setObjectName(QString::fromUtf8("hboxLayout"));
        spacer3 = new QSpacerItem(0, 0, QSizePolicy::Expanding, QSizePolicy::Minimum);

        hboxLayout->addItem(spacer3);

        AcceptButton = new QPushButton(SkypeCallDialogBase);
        AcceptButton->setObjectName(QString::fromUtf8("AcceptButton"));

        hboxLayout->addWidget(AcceptButton);

        HangButton = new QPushButton(SkypeCallDialogBase);
        HangButton->setObjectName(QString::fromUtf8("HangButton"));

        hboxLayout->addWidget(HangButton);

        HoldButton = new QPushButton(SkypeCallDialogBase);
        HoldButton->setObjectName(QString::fromUtf8("HoldButton"));

        hboxLayout->addWidget(HoldButton);

        ChatButton = new QPushButton(SkypeCallDialogBase);
        ChatButton->setObjectName(QString::fromUtf8("ChatButton"));

        hboxLayout->addWidget(ChatButton);

        VideoButton = new QPushButton(SkypeCallDialogBase);
        VideoButton->setObjectName(QString::fromUtf8("VideoButton"));
        VideoButton->setCheckable(true);

        hboxLayout->addWidget(VideoButton);

        spacer2 = new QSpacerItem(0, 0, QSizePolicy::Expanding, QSizePolicy::Minimum);

        hboxLayout->addItem(spacer2);


        vboxLayout->addLayout(hboxLayout);


        retranslateUi(SkypeCallDialogBase);

        QMetaObject::connectSlotsByName(SkypeCallDialogBase);
    } // setupUi

    void retranslateUi(QWidget *SkypeCallDialogBase)
    {
        SkypeCallDialogBase->setWindowTitle(tr2i18n("Skype Call", 0));
#ifndef UI_QT_NO_TOOLTIP
        NameLabel->setToolTip(tr2i18n("Name(s) of Participant(s)", 0));
#endif // QT_NO_TOOLTIP
#ifndef UI_QT_NO_WHATSTHIS
        NameLabel->setWhatsThis(tr2i18n("Name of the other participant in the call (or a list of names if it is a conference call.)", 0));
#endif // QT_NO_WHATSTHIS
        NameLabel->setText(QString());
#ifndef UI_QT_NO_TOOLTIP
        textLabel1->setToolTip(tr2i18n("Participants", 0));
#endif // QT_NO_TOOLTIP
#ifndef UI_QT_NO_WHATSTHIS
        textLabel1->setWhatsThis(tr2i18n("Name", 0));
#endif // QT_NO_WHATSTHIS
        textLabel1->setText(tr2i18n("Name:", 0));
#ifndef UI_QT_NO_TOOLTIP
        textLabel2->setToolTip(tr2i18n("Total time elapsed.", 0));
#endif // QT_NO_TOOLTIP
#ifndef UI_QT_NO_WHATSTHIS
        textLabel2->setWhatsThis(tr2i18n("Total time elapsed.", 0));
#endif // QT_NO_WHATSTHIS
        textLabel2->setText(tr2i18n("Time:", 0));
#ifndef UI_QT_NO_TOOLTIP
        CreditLabel->setToolTip(tr2i18n("SkypeOut credits left", 0));
#endif // QT_NO_TOOLTIP
#ifndef UI_QT_NO_WHATSTHIS
        CreditLabel->setWhatsThis(tr2i18n("SkypeOut credits left", 0));
#endif // QT_NO_WHATSTHIS
        CreditLabel->setText(QString());
#ifndef UI_QT_NO_TOOLTIP
        TimeLabel->setToolTip(tr2i18n("Total time elapsed.", 0));
#endif // QT_NO_TOOLTIP
#ifndef UI_QT_NO_WHATSTHIS
        TimeLabel->setWhatsThis(tr2i18n("Total length of the call/<br />(i.e. both time speaking and time on hold.)", 0));
#endif // QT_NO_WHATSTHIS
        TimeLabel->setText(QString());
        StatusLabel->setText(QString());
        textLabel1_2->setText(tr2i18n("Status:", 0));
#ifndef UI_QT_NO_TOOLTIP
        textLabel3->setToolTip(tr2i18n("SkypeOut credits left", 0));
#endif // QT_NO_TOOLTIP
#ifndef UI_QT_NO_WHATSTHIS
        textLabel3->setWhatsThis(tr2i18n("SkypeOut credits left", 0));
#endif // QT_NO_WHATSTHIS
        textLabel3->setText(tr2i18n("SkypeOut credits:", 0));
#ifndef UI_QT_NO_TOOLTIP
        AcceptButton->setToolTip(tr2i18n("Accept call", 0));
#endif // QT_NO_TOOLTIP
#ifndef UI_QT_NO_WHATSTHIS
        AcceptButton->setWhatsThis(tr2i18n("Accept incoming call", 0));
#endif // QT_NO_WHATSTHIS
        AcceptButton->setText(tr2i18n("Accept", 0));
        AcceptButton->setShortcut(QString());
#ifndef UI_QT_NO_TOOLTIP
        HangButton->setToolTip(tr2i18n("Finish the call", 0));
#endif // QT_NO_TOOLTIP
#ifndef UI_QT_NO_WHATSTHIS
        HangButton->setWhatsThis(tr2i18n("Terminate the call", 0));
#endif // QT_NO_WHATSTHIS
        HangButton->setText(tr2i18n("H&ang up", 0));
#ifndef UI_QT_NO_TOOLTIP
        HoldButton->setToolTip(tr2i18n("Hold the call", 0));
#endif // QT_NO_TOOLTIP
#ifndef UI_QT_NO_WHATSTHIS
        HoldButton->setWhatsThis(tr2i18n("Interrupt the call for a moment and resume (or hang up) later.", 0));
#endif // QT_NO_WHATSTHIS
        HoldButton->setText(tr2i18n("H&old", 0));
#ifndef UI_QT_NO_TOOLTIP
        ChatButton->setToolTip(tr2i18n("Open chat to the person.", 0));
#endif // QT_NO_TOOLTIP
#ifndef UI_QT_NO_WHATSTHIS
        ChatButton->setWhatsThis(tr2i18n("Open chat to the person with whom you are talking.", 0));
#endif // QT_NO_WHATSTHIS
        ChatButton->setText(tr2i18n("Chat", 0));
        ChatButton->setShortcut(QString());
        VideoButton->setText(tr2i18n("Start/Stop Video", 0));
    } // retranslateUi

};

namespace Ui {
    class SkypeCallDialogBase: public Ui_SkypeCallDialogBase {};
} // namespace Ui

QT_END_NAMESPACE

#endif // SKYPECALLDIALOGBASE_H

