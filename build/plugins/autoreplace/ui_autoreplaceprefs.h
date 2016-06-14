#include <kdialog.h>
#include <klocale.h>

/********************************************************************************
** Form generated from reading UI file 'autoreplaceprefs.ui'
**
** Created by: Qt User Interface Compiler version 4.8.7
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_AUTOREPLACEPREFS_H
#define UI_AUTOREPLACEPREFS_H

#include <Qt3Support/Q3Header>
#include <Qt3Support/Q3ListView>
#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtGui/QApplication>
#include <QtGui/QButtonGroup>
#include <QtGui/QCheckBox>
#include <QtGui/QGridLayout>
#include <QtGui/QGroupBox>
#include <QtGui/QHBoxLayout>
#include <QtGui/QHeaderView>
#include <QtGui/QLabel>
#include <QtGui/QLineEdit>
#include <QtGui/QPushButton>
#include <QtGui/QSpacerItem>
#include <QtGui/QVBoxLayout>
#include <QtGui/QWidget>

QT_BEGIN_NAMESPACE

class Ui_AutoReplacePrefsUI
{
public:
    QVBoxLayout *vboxLayout;
    QGroupBox *groupBox;
    QVBoxLayout *vboxLayout1;
    QCheckBox *DotEndSentence;
    QCheckBox *CapitalizeBeginningSentence;
    QGroupBox *groupBox_2;
    QGridLayout *gridLayout;
    Q3ListView *m_list;
    QVBoxLayout *vboxLayout2;
    QPushButton *m_add;
    QPushButton *m_edit;
    QSpacerItem *spacerItem;
    QPushButton *m_remove;
    QHBoxLayout *hboxLayout;
    QLabel *textLabel1;
    QLineEdit *m_key;
    QLabel *textLabel2;
    QLineEdit *m_value;
    QGroupBox *gb_options;
    QVBoxLayout *vboxLayout3;
    QCheckBox *AutoReplaceIncoming;
    QCheckBox *AutoReplaceOutgoing;

    void setupUi(QWidget *AutoReplacePrefsUI)
    {
        if (AutoReplacePrefsUI->objectName().isEmpty())
            AutoReplacePrefsUI->setObjectName(QString::fromUtf8("AutoReplacePrefsUI"));
        AutoReplacePrefsUI->resize(381, 431);
        vboxLayout = new QVBoxLayout(AutoReplacePrefsUI);
        vboxLayout->setSpacing(6);
        vboxLayout->setObjectName(QString::fromUtf8("vboxLayout"));
        vboxLayout->setContentsMargins(0, 0, 0, 0);
        groupBox = new QGroupBox(AutoReplacePrefsUI);
        groupBox->setObjectName(QString::fromUtf8("groupBox"));
        vboxLayout1 = new QVBoxLayout(groupBox);
        vboxLayout1->setSpacing(6);
        vboxLayout1->setObjectName(QString::fromUtf8("vboxLayout1"));
        vboxLayout1->setContentsMargins(9, 9, 9, 9);
        DotEndSentence = new QCheckBox(groupBox);
        DotEndSentence->setObjectName(QString::fromUtf8("DotEndSentence"));

        vboxLayout1->addWidget(DotEndSentence);

        CapitalizeBeginningSentence = new QCheckBox(groupBox);
        CapitalizeBeginningSentence->setObjectName(QString::fromUtf8("CapitalizeBeginningSentence"));

        vboxLayout1->addWidget(CapitalizeBeginningSentence);


        vboxLayout->addWidget(groupBox);

        groupBox_2 = new QGroupBox(AutoReplacePrefsUI);
        groupBox_2->setObjectName(QString::fromUtf8("groupBox_2"));
        gridLayout = new QGridLayout(groupBox_2);
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        gridLayout->setHorizontalSpacing(6);
        gridLayout->setVerticalSpacing(6);
        gridLayout->setContentsMargins(9, 9, 9, 9);
        m_list = new Q3ListView(groupBox_2);
        m_list->setObjectName(QString::fromUtf8("m_list"));
        m_list->setSelectionMode(Q3ListView::Single);
        m_list->setAllColumnsShowFocus(true);
        m_list->setShowSortIndicator(true);

        gridLayout->addWidget(m_list, 1, 0, 1, 1);

        vboxLayout2 = new QVBoxLayout();
        vboxLayout2->setSpacing(6);
        vboxLayout2->setObjectName(QString::fromUtf8("vboxLayout2"));
        vboxLayout2->setContentsMargins(0, 0, 0, 0);
        m_add = new QPushButton(groupBox_2);
        m_add->setObjectName(QString::fromUtf8("m_add"));
        m_add->setEnabled(true);

        vboxLayout2->addWidget(m_add);

        m_edit = new QPushButton(groupBox_2);
        m_edit->setObjectName(QString::fromUtf8("m_edit"));
        m_edit->setEnabled(false);

        vboxLayout2->addWidget(m_edit);

        spacerItem = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        vboxLayout2->addItem(spacerItem);

        m_remove = new QPushButton(groupBox_2);
        m_remove->setObjectName(QString::fromUtf8("m_remove"));
        m_remove->setEnabled(false);

        vboxLayout2->addWidget(m_remove);


        gridLayout->addLayout(vboxLayout2, 1, 1, 1, 1);

        hboxLayout = new QHBoxLayout();
        hboxLayout->setSpacing(6);
        hboxLayout->setObjectName(QString::fromUtf8("hboxLayout"));
        hboxLayout->setContentsMargins(0, 0, 0, 0);
        textLabel1 = new QLabel(groupBox_2);
        textLabel1->setObjectName(QString::fromUtf8("textLabel1"));

        hboxLayout->addWidget(textLabel1);

        m_key = new QLineEdit(groupBox_2);
        m_key->setObjectName(QString::fromUtf8("m_key"));

        hboxLayout->addWidget(m_key);

        textLabel2 = new QLabel(groupBox_2);
        textLabel2->setObjectName(QString::fromUtf8("textLabel2"));

        hboxLayout->addWidget(textLabel2);

        m_value = new QLineEdit(groupBox_2);
        m_value->setObjectName(QString::fromUtf8("m_value"));

        hboxLayout->addWidget(m_value);


        gridLayout->addLayout(hboxLayout, 0, 0, 1, 2);


        vboxLayout->addWidget(groupBox_2);

        gb_options = new QGroupBox(AutoReplacePrefsUI);
        gb_options->setObjectName(QString::fromUtf8("gb_options"));
        vboxLayout3 = new QVBoxLayout(gb_options);
        vboxLayout3->setSpacing(6);
        vboxLayout3->setObjectName(QString::fromUtf8("vboxLayout3"));
        vboxLayout3->setContentsMargins(9, 9, 9, 9);
        AutoReplaceIncoming = new QCheckBox(gb_options);
        AutoReplaceIncoming->setObjectName(QString::fromUtf8("AutoReplaceIncoming"));

        vboxLayout3->addWidget(AutoReplaceIncoming);

        AutoReplaceOutgoing = new QCheckBox(gb_options);
        AutoReplaceOutgoing->setObjectName(QString::fromUtf8("AutoReplaceOutgoing"));
        AutoReplaceOutgoing->setChecked(true);

        vboxLayout3->addWidget(AutoReplaceOutgoing);


        vboxLayout->addWidget(gb_options);

#ifndef UI_QT_NO_SHORTCUT
        textLabel1->setBuddy(m_key);
        textLabel2->setBuddy(m_value);
#endif // QT_NO_SHORTCUT
        QWidget::setTabOrder(DotEndSentence, CapitalizeBeginningSentence);
        QWidget::setTabOrder(CapitalizeBeginningSentence, m_key);
        QWidget::setTabOrder(m_key, m_value);
        QWidget::setTabOrder(m_value, m_list);
        QWidget::setTabOrder(m_list, m_add);
        QWidget::setTabOrder(m_add, m_edit);
        QWidget::setTabOrder(m_edit, m_remove);
        QWidget::setTabOrder(m_remove, AutoReplaceIncoming);
        QWidget::setTabOrder(AutoReplaceIncoming, AutoReplaceOutgoing);

        retranslateUi(AutoReplacePrefsUI);

        QMetaObject::connectSlotsByName(AutoReplacePrefsUI);
    } // setupUi

    void retranslateUi(QWidget *AutoReplacePrefsUI)
    {
        groupBox->setTitle(tr2i18n("Sentence Options", 0));
        DotEndSentence->setText(tr2i18n("Add a dot at the end of each sent line", 0));
        CapitalizeBeginningSentence->setText(tr2i18n("Start each sent line with a capital letter", 0));
        groupBox_2->setTitle(tr2i18n("Replacements List", 0));
        m_add->setText(tr2i18n("&Add", 0));
        m_edit->setText(tr2i18n("&Edit", 0));
        m_remove->setText(tr2i18n("&Remove", 0));
        textLabel1->setText(tr2i18n("&Text:", 0));
        textLabel2->setText(tr2i18n("Re&placement:", 0));
        gb_options->setTitle(tr2i18n("Replacement Options", 0));
        AutoReplaceIncoming->setText(tr2i18n("Auto replace on incoming messages", 0));
        AutoReplaceOutgoing->setText(tr2i18n("Auto replace on outgoing messages", 0));
        Q_UNUSED(AutoReplacePrefsUI);
    } // retranslateUi

};

namespace Ui {
    class AutoReplacePrefsUI: public Ui_AutoReplacePrefsUI {};
} // namespace Ui

QT_END_NAMESPACE

#endif // AUTOREPLACEPREFS_H

