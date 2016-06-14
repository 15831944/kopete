#include <kdialog.h>
#include <klocale.h>

/********************************************************************************
** Form generated from reading UI file 'nowlisteningprefs.ui'
**
** Created by: Qt User Interface Compiler version 4.8.7
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_NOWLISTENINGPREFS_H
#define UI_NOWLISTENINGPREFS_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtGui/QApplication>
#include <QtGui/QButtonGroup>
#include <QtGui/QCheckBox>
#include <QtGui/QFrame>
#include <QtGui/QHeaderView>
#include <QtGui/QLabel>
#include <QtGui/QLineEdit>
#include <QtGui/QRadioButton>
#include <QtGui/QSpacerItem>
#include <QtGui/QTabWidget>
#include <QtGui/QVBoxLayout>
#include <QtGui/QWidget>
#include "klistwidget.h"

QT_BEGIN_NAMESPACE

class Ui_NowListeningPrefsUI
{
public:
    QVBoxLayout *vboxLayout;
    QLabel *advertiseNewMediaToBuddiesLabel;
    QFrame *advertiseNewMediaToBuddiesHLine;
    QTabWidget *tabWidget2;
    QWidget *TabPage;
    QVBoxLayout *vboxLayout1;
    QVBoxLayout *vboxLayout2;
    QLabel *useThisMessageLabel;
    QLabel *helperLabel;
    QVBoxLayout *vboxLayout3;
    QLabel *m_headerLabel;
    QLineEdit *kcfg_Header;
    QLabel *m_perTrackLabel;
    QLineEdit *kcfg_PerTrack;
    QLabel *m_conjunctionLabel;
    QLineEdit *kcfg_Conjunction;
    QSpacerItem *spacerItem;
    QWidget *tab;
    QVBoxLayout *vboxLayout4;
    QRadioButton *kcfg_ExplicitAdvertising;
    QRadioButton *kcfg_ChatAdvertising;
    QRadioButton *kcfg_StatusAdvertising;
    QRadioButton *kcfg_AppendStatusAdvertising;
    QSpacerItem *spacerItem1;
    QWidget *tab1;
    QVBoxLayout *vboxLayout5;
    QVBoxLayout *vboxLayout6;
    QCheckBox *kcfg_UseSpecifiedMediaPlayer;
    KListWidget *kcfg_SelectedMediaPlayer;
    QSpacerItem *spacerItem2;
    QSpacerItem *spacerItem3;

    void setupUi(QWidget *NowListeningPrefsUI)
    {
        if (NowListeningPrefsUI->objectName().isEmpty())
            NowListeningPrefsUI->setObjectName(QString::fromUtf8("NowListeningPrefsUI"));
        NowListeningPrefsUI->resize(445, 386);
        vboxLayout = new QVBoxLayout(NowListeningPrefsUI);
#ifndef UI_Q_OS_MAC
        vboxLayout->setSpacing(6);
#endif
        vboxLayout->setContentsMargins(0, 0, 0, 0);
        vboxLayout->setObjectName(QString::fromUtf8("vboxLayout"));
        advertiseNewMediaToBuddiesLabel = new QLabel(NowListeningPrefsUI);
        advertiseNewMediaToBuddiesLabel->setObjectName(QString::fromUtf8("advertiseNewMediaToBuddiesLabel"));
        advertiseNewMediaToBuddiesLabel->setAlignment(Qt::AlignVCenter);

        vboxLayout->addWidget(advertiseNewMediaToBuddiesLabel);

        advertiseNewMediaToBuddiesHLine = new QFrame(NowListeningPrefsUI);
        advertiseNewMediaToBuddiesHLine->setObjectName(QString::fromUtf8("advertiseNewMediaToBuddiesHLine"));
        advertiseNewMediaToBuddiesHLine->setFrameShape(QFrame::HLine);
        advertiseNewMediaToBuddiesHLine->setFrameShadow(QFrame::Sunken);

        vboxLayout->addWidget(advertiseNewMediaToBuddiesHLine);

        tabWidget2 = new QTabWidget(NowListeningPrefsUI);
        tabWidget2->setObjectName(QString::fromUtf8("tabWidget2"));
        TabPage = new QWidget();
        TabPage->setObjectName(QString::fromUtf8("TabPage"));
        vboxLayout1 = new QVBoxLayout(TabPage);
#ifndef UI_Q_OS_MAC
        vboxLayout1->setSpacing(6);
#endif
        vboxLayout1->setContentsMargins(0, 0, 0, 0);
        vboxLayout1->setObjectName(QString::fromUtf8("vboxLayout1"));
        vboxLayout2 = new QVBoxLayout();
#ifndef UI_Q_OS_MAC
        vboxLayout2->setSpacing(6);
#endif
#ifndef UI_Q_OS_MAC
        vboxLayout2->setContentsMargins(0, 0, 0, 0);
#endif
        vboxLayout2->setObjectName(QString::fromUtf8("vboxLayout2"));
        useThisMessageLabel = new QLabel(TabPage);
        useThisMessageLabel->setObjectName(QString::fromUtf8("useThisMessageLabel"));

        vboxLayout2->addWidget(useThisMessageLabel);

        helperLabel = new QLabel(TabPage);
        helperLabel->setObjectName(QString::fromUtf8("helperLabel"));
        helperLabel->setAlignment(Qt::AlignVCenter);

        vboxLayout2->addWidget(helperLabel);

        vboxLayout3 = new QVBoxLayout();
#ifndef UI_Q_OS_MAC
        vboxLayout3->setSpacing(6);
#endif
        vboxLayout3->setContentsMargins(0, 0, 0, 0);
        vboxLayout3->setObjectName(QString::fromUtf8("vboxLayout3"));
        m_headerLabel = new QLabel(TabPage);
        m_headerLabel->setObjectName(QString::fromUtf8("m_headerLabel"));
        m_headerLabel->setAlignment(Qt::AlignLeading|Qt::AlignLeft|Qt::AlignVCenter);

        vboxLayout3->addWidget(m_headerLabel);

        kcfg_Header = new QLineEdit(TabPage);
        kcfg_Header->setObjectName(QString::fromUtf8("kcfg_Header"));

        vboxLayout3->addWidget(kcfg_Header);

        m_perTrackLabel = new QLabel(TabPage);
        m_perTrackLabel->setObjectName(QString::fromUtf8("m_perTrackLabel"));
        m_perTrackLabel->setAlignment(Qt::AlignLeading|Qt::AlignLeft|Qt::AlignVCenter);

        vboxLayout3->addWidget(m_perTrackLabel);

        kcfg_PerTrack = new QLineEdit(TabPage);
        kcfg_PerTrack->setObjectName(QString::fromUtf8("kcfg_PerTrack"));

        vboxLayout3->addWidget(kcfg_PerTrack);

        m_conjunctionLabel = new QLabel(TabPage);
        m_conjunctionLabel->setObjectName(QString::fromUtf8("m_conjunctionLabel"));
        m_conjunctionLabel->setAlignment(Qt::AlignLeading|Qt::AlignLeft|Qt::AlignVCenter);

        vboxLayout3->addWidget(m_conjunctionLabel);

        kcfg_Conjunction = new QLineEdit(TabPage);
        kcfg_Conjunction->setObjectName(QString::fromUtf8("kcfg_Conjunction"));

        vboxLayout3->addWidget(kcfg_Conjunction);


        vboxLayout2->addLayout(vboxLayout3);


        vboxLayout1->addLayout(vboxLayout2);

        spacerItem = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        vboxLayout1->addItem(spacerItem);

        tabWidget2->addTab(TabPage, QString());
        tab = new QWidget();
        tab->setObjectName(QString::fromUtf8("tab"));
        vboxLayout4 = new QVBoxLayout(tab);
#ifndef UI_Q_OS_MAC
        vboxLayout4->setSpacing(6);
#endif
#ifndef UI_Q_OS_MAC
        vboxLayout4->setContentsMargins(9, 9, 9, 9);
#endif
        vboxLayout4->setObjectName(QString::fromUtf8("vboxLayout4"));
        kcfg_ExplicitAdvertising = new QRadioButton(tab);
        kcfg_ExplicitAdvertising->setObjectName(QString::fromUtf8("kcfg_ExplicitAdvertising"));

        vboxLayout4->addWidget(kcfg_ExplicitAdvertising);

        kcfg_ChatAdvertising = new QRadioButton(tab);
        kcfg_ChatAdvertising->setObjectName(QString::fromUtf8("kcfg_ChatAdvertising"));

        vboxLayout4->addWidget(kcfg_ChatAdvertising);

        kcfg_StatusAdvertising = new QRadioButton(tab);
        kcfg_StatusAdvertising->setObjectName(QString::fromUtf8("kcfg_StatusAdvertising"));

        vboxLayout4->addWidget(kcfg_StatusAdvertising);

        kcfg_AppendStatusAdvertising = new QRadioButton(tab);
        kcfg_AppendStatusAdvertising->setObjectName(QString::fromUtf8("kcfg_AppendStatusAdvertising"));

        vboxLayout4->addWidget(kcfg_AppendStatusAdvertising);

        spacerItem1 = new QSpacerItem(20, 80, QSizePolicy::Minimum, QSizePolicy::Expanding);

        vboxLayout4->addItem(spacerItem1);

        tabWidget2->addTab(tab, QString());
        tab1 = new QWidget();
        tab1->setObjectName(QString::fromUtf8("tab1"));
        vboxLayout5 = new QVBoxLayout(tab1);
#ifndef UI_Q_OS_MAC
        vboxLayout5->setSpacing(6);
#endif
        vboxLayout5->setContentsMargins(0, 0, 0, 0);
        vboxLayout5->setObjectName(QString::fromUtf8("vboxLayout5"));
        vboxLayout6 = new QVBoxLayout();
#ifndef UI_Q_OS_MAC
        vboxLayout6->setSpacing(6);
#endif
#ifndef UI_Q_OS_MAC
        vboxLayout6->setContentsMargins(0, 0, 0, 0);
#endif
        vboxLayout6->setObjectName(QString::fromUtf8("vboxLayout6"));
        kcfg_UseSpecifiedMediaPlayer = new QCheckBox(tab1);
        kcfg_UseSpecifiedMediaPlayer->setObjectName(QString::fromUtf8("kcfg_UseSpecifiedMediaPlayer"));

        vboxLayout6->addWidget(kcfg_UseSpecifiedMediaPlayer);

        kcfg_SelectedMediaPlayer = new KListWidget(tab1);
        kcfg_SelectedMediaPlayer->setObjectName(QString::fromUtf8("kcfg_SelectedMediaPlayer"));

        vboxLayout6->addWidget(kcfg_SelectedMediaPlayer);


        vboxLayout5->addLayout(vboxLayout6);

        spacerItem2 = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        vboxLayout5->addItem(spacerItem2);

        tabWidget2->addTab(tab1, QString());

        vboxLayout->addWidget(tabWidget2);

        spacerItem3 = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        vboxLayout->addItem(spacerItem3);

#ifndef UI_QT_NO_SHORTCUT
#endif // QT_NO_SHORTCUT

        retranslateUi(NowListeningPrefsUI);
        QObject::connect(kcfg_UseSpecifiedMediaPlayer, SIGNAL(toggled(bool)), kcfg_SelectedMediaPlayer, SLOT(setEnabled(bool)));

        tabWidget2->setCurrentIndex(0);


        QMetaObject::connectSlotsByName(NowListeningPrefsUI);
    } // setupUi

    void retranslateUi(QWidget *NowListeningPrefsUI)
    {
        NowListeningPrefsUI->setWindowTitle(tr2i18n("Now Listening", 0));
        advertiseNewMediaToBuddiesLabel->setText(tr2i18n("<b>Share Your Musical Taste</b>", 0));
        useThisMessageLabel->setText(tr2i18n("Use this message when advertising:", 0));
        helperLabel->setText(tr2i18n("%track, %artist, %album, %player will be substituted if known.\n"
"Expressions in brackets depend on a substitution being made.", 0));
        m_headerLabel->setText(tr2i18n("Start with:", 0));
        kcfg_Header->setText(tr2i18n("Now Listening To: ", 0));
        m_perTrackLabel->setText(tr2i18n("For each track:", 0));
        kcfg_PerTrack->setText(tr2i18n("%track (by %artist)(on %album)", 0));
        m_conjunctionLabel->setText(tr2i18n("Conjunction (if >1 track):", 0));
        kcfg_Conjunction->setText(tr2i18n(", and ", 0));
        tabWidget2->setTabText(tabWidget2->indexOf(TabPage), tr2i18n("Messa&ge", 0));
        kcfg_ExplicitAdvertising->setText(tr2i18n("Explicit &via \"Tools->Send Media Info\",\n"
"or by typing \"/media\" in the chat\n"
"window edit area.", 0));
        kcfg_ChatAdvertising->setText(tr2i18n("&Show in chat window (automatic)", 0));
        kcfg_StatusAdvertising->setText(tr2i18n("Show &the music you are listening to \n"
"in place of your status message.", 0));
        kcfg_AppendStatusAdvertising->setText(tr2i18n("Appe&nd to your status message", 0));
        tabWidget2->setTabText(tabWidget2->indexOf(tab), tr2i18n("A&dvertising Mode", 0));
        kcfg_UseSpecifiedMediaPlayer->setText(tr2i18n("Use &specified media player", 0));
        tabWidget2->setTabText(tabWidget2->indexOf(tab1), tr2i18n("Media Pla&yer", 0));
    } // retranslateUi

};

namespace Ui {
    class NowListeningPrefsUI: public Ui_NowListeningPrefsUI {};
} // namespace Ui

QT_END_NAMESPACE

#endif // NOWLISTENINGPREFS_H

