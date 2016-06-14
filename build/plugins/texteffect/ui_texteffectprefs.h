#include <kdialog.h>
#include <klocale.h>

/********************************************************************************
** Form generated from reading UI file 'texteffectprefs.ui'
**
** Created by: Qt User Interface Compiler version 4.8.7
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_TEXTEFFECTPREFS_H
#define UI_TEXTEFFECTPREFS_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtGui/QApplication>
#include <QtGui/QButtonGroup>
#include <QtGui/QCheckBox>
#include <QtGui/QFrame>
#include <QtGui/QGridLayout>
#include <QtGui/QGroupBox>
#include <QtGui/QHeaderView>
#include <QtGui/QListWidget>
#include <QtGui/QPushButton>
#include <QtGui/QSpacerItem>
#include <QtGui/QTabWidget>
#include <QtGui/QVBoxLayout>
#include <QtGui/QWidget>

QT_BEGIN_NAMESPACE

class Ui_TextEffectPrefs
{
public:
    QGridLayout *gridLayout;
    QTabWidget *TabWidget3;
    QWidget *tab;
    QGridLayout *gridLayout1;
    QGroupBox *groupBox1;
    QGridLayout *gridLayout2;
    QListWidget *mColorsListBox;
    QPushButton *mColorsAdd;
    QPushButton *mColorsRemove;
    QPushButton *mColorsUp;
    QPushButton *mColorsDown;
    QSpacerItem *spacerItem;
    QCheckBox *m_colorRandom;
    QFrame *Line1;
    QCheckBox *m_fg;
    QCheckBox *m_char;
    QCheckBox *m_words;
    QWidget *tab1;
    QVBoxLayout *vboxLayout;
    QCheckBox *m_lamer;
    QCheckBox *m_casewaves;
    QSpacerItem *spacerItem1;

    void setupUi(QWidget *TextEffectPrefs)
    {
        if (TextEffectPrefs->objectName().isEmpty())
            TextEffectPrefs->setObjectName(QString::fromUtf8("TextEffectPrefs"));
        TextEffectPrefs->resize(630, 529);
        gridLayout = new QGridLayout(TextEffectPrefs);
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        gridLayout->setHorizontalSpacing(0);
        gridLayout->setVerticalSpacing(0);
        gridLayout->setContentsMargins(0, 0, 0, 0);
        TabWidget3 = new QTabWidget(TextEffectPrefs);
        TabWidget3->setObjectName(QString::fromUtf8("TabWidget3"));
        tab = new QWidget();
        tab->setObjectName(QString::fromUtf8("tab"));
        gridLayout1 = new QGridLayout(tab);
        gridLayout1->setObjectName(QString::fromUtf8("gridLayout1"));
        gridLayout1->setHorizontalSpacing(6);
        gridLayout1->setVerticalSpacing(6);
        gridLayout1->setContentsMargins(0, 0, 0, 0);
        groupBox1 = new QGroupBox(tab);
        groupBox1->setObjectName(QString::fromUtf8("groupBox1"));
        gridLayout2 = new QGridLayout(groupBox1);
        gridLayout2->setObjectName(QString::fromUtf8("gridLayout2"));
        gridLayout2->setHorizontalSpacing(6);
        gridLayout2->setVerticalSpacing(6);
        gridLayout2->setContentsMargins(11, 11, 11, 11);
        mColorsListBox = new QListWidget(groupBox1);
        mColorsListBox->setObjectName(QString::fromUtf8("mColorsListBox"));

        gridLayout2->addWidget(mColorsListBox, 0, 0, 5, 1);

        mColorsAdd = new QPushButton(groupBox1);
        mColorsAdd->setObjectName(QString::fromUtf8("mColorsAdd"));

        gridLayout2->addWidget(mColorsAdd, 0, 1, 1, 1);

        mColorsRemove = new QPushButton(groupBox1);
        mColorsRemove->setObjectName(QString::fromUtf8("mColorsRemove"));

        gridLayout2->addWidget(mColorsRemove, 1, 1, 1, 1);

        mColorsUp = new QPushButton(groupBox1);
        mColorsUp->setObjectName(QString::fromUtf8("mColorsUp"));

        gridLayout2->addWidget(mColorsUp, 2, 1, 1, 1);

        mColorsDown = new QPushButton(groupBox1);
        mColorsDown->setObjectName(QString::fromUtf8("mColorsDown"));

        gridLayout2->addWidget(mColorsDown, 3, 1, 1, 1);

        spacerItem = new QSpacerItem(21, 81, QSizePolicy::Minimum, QSizePolicy::Expanding);

        gridLayout2->addItem(spacerItem, 4, 1, 1, 1);


        gridLayout1->addWidget(groupBox1, 0, 0, 1, 1);

        m_colorRandom = new QCheckBox(tab);
        m_colorRandom->setObjectName(QString::fromUtf8("m_colorRandom"));

        gridLayout1->addWidget(m_colorRandom, 1, 0, 1, 1);

        Line1 = new QFrame(tab);
        Line1->setObjectName(QString::fromUtf8("Line1"));
        Line1->setFrameShape(QFrame::HLine);
        Line1->setFrameShadow(QFrame::Sunken);

        gridLayout1->addWidget(Line1, 2, 0, 1, 1);

        m_fg = new QCheckBox(tab);
        m_fg->setObjectName(QString::fromUtf8("m_fg"));

        gridLayout1->addWidget(m_fg, 3, 0, 1, 1);

        m_char = new QCheckBox(tab);
        m_char->setObjectName(QString::fromUtf8("m_char"));

        gridLayout1->addWidget(m_char, 4, 0, 1, 1);

        m_words = new QCheckBox(tab);
        m_words->setObjectName(QString::fromUtf8("m_words"));

        gridLayout1->addWidget(m_words, 5, 0, 1, 1);

        TabWidget3->addTab(tab, QString());
        tab1 = new QWidget();
        tab1->setObjectName(QString::fromUtf8("tab1"));
        vboxLayout = new QVBoxLayout(tab1);
        vboxLayout->setSpacing(6);
        vboxLayout->setObjectName(QString::fromUtf8("vboxLayout"));
        vboxLayout->setContentsMargins(0, 0, 0, 0);
        m_lamer = new QCheckBox(tab1);
        m_lamer->setObjectName(QString::fromUtf8("m_lamer"));
        QSizePolicy sizePolicy(QSizePolicy::Expanding, QSizePolicy::Fixed);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(m_lamer->sizePolicy().hasHeightForWidth());
        m_lamer->setSizePolicy(sizePolicy);

        vboxLayout->addWidget(m_lamer);

        m_casewaves = new QCheckBox(tab1);
        m_casewaves->setObjectName(QString::fromUtf8("m_casewaves"));
        sizePolicy.setHeightForWidth(m_casewaves->sizePolicy().hasHeightForWidth());
        m_casewaves->setSizePolicy(sizePolicy);

        vboxLayout->addWidget(m_casewaves);

        spacerItem1 = new QSpacerItem(20, 279, QSizePolicy::Minimum, QSizePolicy::Expanding);

        vboxLayout->addItem(spacerItem1);

        TabWidget3->addTab(tab1, QString());

        gridLayout->addWidget(TabWidget3, 0, 0, 1, 1);


        retranslateUi(TextEffectPrefs);

        TabWidget3->setCurrentIndex(0);


        QMetaObject::connectSlotsByName(TextEffectPrefs);
    } // setupUi

    void retranslateUi(QWidget *TextEffectPrefs)
    {
        groupBox1->setTitle(tr2i18n("Colors", 0));
        mColorsAdd->setText(tr2i18n("&Add...", 0));
        mColorsRemove->setText(tr2i18n("&Remove", 0));
        mColorsUp->setText(tr2i18n("Move &Up", 0));
        mColorsDown->setText(tr2i18n("Move &Down", 0));
        m_colorRandom->setText(tr2i18n("Random order", 0));
        m_fg->setText(tr2i18n("Change global text foreground color", 0));
        m_char->setText(tr2i18n("Change color every letter", 0));
        m_words->setText(tr2i18n("Change color every word", 0));
        TabWidget3->setTabText(TabWidget3->indexOf(tab), tr2i18n("&Colors", 0));
        m_lamer->setText(tr2i18n("L4m3r t4lk", 0));
        m_casewaves->setText(tr2i18n("CasE wAVes", 0));
        TabWidget3->setTabText(TabWidget3->indexOf(tab1), tr2i18n("Effects", 0));
        Q_UNUSED(TextEffectPrefs);
    } // retranslateUi

};

namespace Ui {
    class TextEffectPrefs: public Ui_TextEffectPrefs {};
} // namespace Ui

QT_END_NAMESPACE

#endif // TEXTEFFECTPREFS_H

