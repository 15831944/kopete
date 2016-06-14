#include <kdialog.h>
#include <klocale.h>

/********************************************************************************
** Form generated from reading UI file 'highlightprefsbase.ui'
**
** Created by: Qt User Interface Compiler version 4.8.7
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_HIGHLIGHTPREFSBASE_H
#define UI_HIGHLIGHTPREFSBASE_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtGui/QApplication>
#include <QtGui/QButtonGroup>
#include <QtGui/QCheckBox>
#include <QtGui/QComboBox>
#include <QtGui/QGridLayout>
#include <QtGui/QGroupBox>
#include <QtGui/QHBoxLayout>
#include <QtGui/QHeaderView>
#include <QtGui/QLabel>
#include <QtGui/QLineEdit>
#include <QtGui/QListWidget>
#include <QtGui/QPushButton>
#include <QtGui/QSpacerItem>
#include <QtGui/QVBoxLayout>
#include <QtGui/QWidget>
#include "kcolorbutton.h"

QT_BEGIN_NAMESPACE

class Ui_HighlightPrefsUI
{
public:
    QVBoxLayout *vboxLayout;
    QGroupBox *groupBox;
    QGridLayout *gridLayout;
    QPushButton *m_add;
    QPushButton *m_remove;
    QListWidget *m_list;
    QPushButton *m_rename;
    QGroupBox *groupBox_2;
    QVBoxLayout *vboxLayout1;
    QLabel *textLabel1;
    QLineEdit *m_search;
    QHBoxLayout *hboxLayout;
    QCheckBox *m_regexp;
    QPushButton *m_editregexp;
    QSpacerItem *spacerItem;
    QCheckBox *m_case;
    QGroupBox *groupBox_3;
    QVBoxLayout *vboxLayout2;
    QHBoxLayout *hboxLayout1;
    QCheckBox *m_setImportance;
    QComboBox *m_importance;
    QSpacerItem *spacerItem1;
    QHBoxLayout *hboxLayout2;
    QCheckBox *m_setBG;
    KColorButton *m_BG;
    QSpacerItem *spacerItem2;
    QHBoxLayout *hboxLayout3;
    QCheckBox *m_setFG;
    KColorButton *m_FG;
    QSpacerItem *spacerItem3;
    QHBoxLayout *hboxLayout4;
    QCheckBox *m_raise;
    QHBoxLayout *hboxLayout5;
    QPushButton *m_notifications;
    QSpacerItem *spacerItem4;

    void setupUi(QWidget *HighlightPrefsUI)
    {
        if (HighlightPrefsUI->objectName().isEmpty())
            HighlightPrefsUI->setObjectName(QString::fromUtf8("HighlightPrefsUI"));
        HighlightPrefsUI->resize(439, 566);
        vboxLayout = new QVBoxLayout(HighlightPrefsUI);
        vboxLayout->setSpacing(6);
        vboxLayout->setObjectName(QString::fromUtf8("vboxLayout"));
        vboxLayout->setContentsMargins(0, 0, 0, 0);
        groupBox = new QGroupBox(HighlightPrefsUI);
        groupBox->setObjectName(QString::fromUtf8("groupBox"));
        gridLayout = new QGridLayout(groupBox);
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        gridLayout->setHorizontalSpacing(6);
        gridLayout->setVerticalSpacing(6);
        gridLayout->setContentsMargins(9, 9, 9, 9);
        m_add = new QPushButton(groupBox);
        m_add->setObjectName(QString::fromUtf8("m_add"));

        gridLayout->addWidget(m_add, 1, 0, 1, 1);

        m_remove = new QPushButton(groupBox);
        m_remove->setObjectName(QString::fromUtf8("m_remove"));
        m_remove->setEnabled(false);

        gridLayout->addWidget(m_remove, 1, 1, 1, 1);

        m_list = new QListWidget(groupBox);
        m_list->setObjectName(QString::fromUtf8("m_list"));
        QSizePolicy sizePolicy(QSizePolicy::Expanding, QSizePolicy::Expanding);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(m_list->sizePolicy().hasHeightForWidth());
        m_list->setSizePolicy(sizePolicy);

        gridLayout->addWidget(m_list, 0, 0, 1, 3);

        m_rename = new QPushButton(groupBox);
        m_rename->setObjectName(QString::fromUtf8("m_rename"));
        m_rename->setEnabled(false);

        gridLayout->addWidget(m_rename, 1, 2, 1, 1);


        vboxLayout->addWidget(groupBox);

        groupBox_2 = new QGroupBox(HighlightPrefsUI);
        groupBox_2->setObjectName(QString::fromUtf8("groupBox_2"));
        vboxLayout1 = new QVBoxLayout(groupBox_2);
        vboxLayout1->setSpacing(6);
        vboxLayout1->setObjectName(QString::fromUtf8("vboxLayout1"));
        vboxLayout1->setContentsMargins(9, 9, 9, 9);
        textLabel1 = new QLabel(groupBox_2);
        textLabel1->setObjectName(QString::fromUtf8("textLabel1"));
        QSizePolicy sizePolicy1(QSizePolicy::Minimum, QSizePolicy::Fixed);
        sizePolicy1.setHorizontalStretch(0);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(textLabel1->sizePolicy().hasHeightForWidth());
        textLabel1->setSizePolicy(sizePolicy1);

        vboxLayout1->addWidget(textLabel1);

        m_search = new QLineEdit(groupBox_2);
        m_search->setObjectName(QString::fromUtf8("m_search"));

        vboxLayout1->addWidget(m_search);

        hboxLayout = new QHBoxLayout();
        hboxLayout->setSpacing(6);
        hboxLayout->setObjectName(QString::fromUtf8("hboxLayout"));
        hboxLayout->setContentsMargins(0, 0, 0, 0);
        m_regexp = new QCheckBox(groupBox_2);
        m_regexp->setObjectName(QString::fromUtf8("m_regexp"));

        hboxLayout->addWidget(m_regexp);

        m_editregexp = new QPushButton(groupBox_2);
        m_editregexp->setObjectName(QString::fromUtf8("m_editregexp"));
        m_editregexp->setEnabled(false);
        QSizePolicy sizePolicy2(QSizePolicy::Preferred, QSizePolicy::Fixed);
        sizePolicy2.setHorizontalStretch(0);
        sizePolicy2.setVerticalStretch(0);
        sizePolicy2.setHeightForWidth(m_editregexp->sizePolicy().hasHeightForWidth());
        m_editregexp->setSizePolicy(sizePolicy2);

        hboxLayout->addWidget(m_editregexp);

        spacerItem = new QSpacerItem(20, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        hboxLayout->addItem(spacerItem);


        vboxLayout1->addLayout(hboxLayout);

        m_case = new QCheckBox(groupBox_2);
        m_case->setObjectName(QString::fromUtf8("m_case"));

        vboxLayout1->addWidget(m_case);


        vboxLayout->addWidget(groupBox_2);

        groupBox_3 = new QGroupBox(HighlightPrefsUI);
        groupBox_3->setObjectName(QString::fromUtf8("groupBox_3"));
        vboxLayout2 = new QVBoxLayout(groupBox_3);
        vboxLayout2->setSpacing(6);
        vboxLayout2->setObjectName(QString::fromUtf8("vboxLayout2"));
        vboxLayout2->setContentsMargins(9, 9, 9, 9);
        hboxLayout1 = new QHBoxLayout();
        hboxLayout1->setSpacing(6);
        hboxLayout1->setObjectName(QString::fromUtf8("hboxLayout1"));
        hboxLayout1->setContentsMargins(0, 0, 0, 0);
        m_setImportance = new QCheckBox(groupBox_3);
        m_setImportance->setObjectName(QString::fromUtf8("m_setImportance"));
        sizePolicy1.setHeightForWidth(m_setImportance->sizePolicy().hasHeightForWidth());
        m_setImportance->setSizePolicy(sizePolicy1);

        hboxLayout1->addWidget(m_setImportance);

        m_importance = new QComboBox(groupBox_3);
        m_importance->setObjectName(QString::fromUtf8("m_importance"));
        m_importance->setEnabled(false);
        QSizePolicy sizePolicy3(QSizePolicy::MinimumExpanding, QSizePolicy::Fixed);
        sizePolicy3.setHorizontalStretch(0);
        sizePolicy3.setVerticalStretch(0);
        sizePolicy3.setHeightForWidth(m_importance->sizePolicy().hasHeightForWidth());
        m_importance->setSizePolicy(sizePolicy3);

        hboxLayout1->addWidget(m_importance);

        spacerItem1 = new QSpacerItem(31, 21, QSizePolicy::Expanding, QSizePolicy::Minimum);

        hboxLayout1->addItem(spacerItem1);


        vboxLayout2->addLayout(hboxLayout1);

        hboxLayout2 = new QHBoxLayout();
        hboxLayout2->setSpacing(6);
        hboxLayout2->setObjectName(QString::fromUtf8("hboxLayout2"));
        hboxLayout2->setContentsMargins(0, 0, 0, 0);
        m_setBG = new QCheckBox(groupBox_3);
        m_setBG->setObjectName(QString::fromUtf8("m_setBG"));

        hboxLayout2->addWidget(m_setBG);

        m_BG = new KColorButton(groupBox_3);
        m_BG->setObjectName(QString::fromUtf8("m_BG"));
        m_BG->setEnabled(false);
        sizePolicy2.setHeightForWidth(m_BG->sizePolicy().hasHeightForWidth());
        m_BG->setSizePolicy(sizePolicy2);

        hboxLayout2->addWidget(m_BG);

        spacerItem2 = new QSpacerItem(31, 21, QSizePolicy::Expanding, QSizePolicy::Minimum);

        hboxLayout2->addItem(spacerItem2);


        vboxLayout2->addLayout(hboxLayout2);

        hboxLayout3 = new QHBoxLayout();
        hboxLayout3->setSpacing(6);
        hboxLayout3->setObjectName(QString::fromUtf8("hboxLayout3"));
        hboxLayout3->setContentsMargins(0, 0, 0, 0);
        m_setFG = new QCheckBox(groupBox_3);
        m_setFG->setObjectName(QString::fromUtf8("m_setFG"));

        hboxLayout3->addWidget(m_setFG);

        m_FG = new KColorButton(groupBox_3);
        m_FG->setObjectName(QString::fromUtf8("m_FG"));
        m_FG->setEnabled(false);
        sizePolicy2.setHeightForWidth(m_FG->sizePolicy().hasHeightForWidth());
        m_FG->setSizePolicy(sizePolicy2);

        hboxLayout3->addWidget(m_FG);

        spacerItem3 = new QSpacerItem(41, 21, QSizePolicy::Expanding, QSizePolicy::Minimum);

        hboxLayout3->addItem(spacerItem3);


        vboxLayout2->addLayout(hboxLayout3);

        hboxLayout4 = new QHBoxLayout();
        hboxLayout4->setSpacing(6);
        hboxLayout4->setObjectName(QString::fromUtf8("hboxLayout4"));
        hboxLayout4->setContentsMargins(0, 0, 0, 0);
        m_raise = new QCheckBox(groupBox_3);
        m_raise->setObjectName(QString::fromUtf8("m_raise"));

        hboxLayout4->addWidget(m_raise);


        vboxLayout2->addLayout(hboxLayout4);

        hboxLayout5 = new QHBoxLayout();
        hboxLayout5->setSpacing(6);
        hboxLayout5->setObjectName(QString::fromUtf8("hboxLayout5"));
        hboxLayout5->setContentsMargins(0, 0, 0, 0);
        m_notifications = new QPushButton(groupBox_3);
        m_notifications->setObjectName(QString::fromUtf8("m_notifications"));

        hboxLayout5->addWidget(m_notifications);

        spacerItem4 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        hboxLayout5->addItem(spacerItem4);


        vboxLayout2->addLayout(hboxLayout5);


        vboxLayout->addWidget(groupBox_3);

        QWidget::setTabOrder(m_list, m_add);
        QWidget::setTabOrder(m_add, m_remove);
        QWidget::setTabOrder(m_remove, m_rename);
        QWidget::setTabOrder(m_rename, m_search);
        QWidget::setTabOrder(m_search, m_regexp);
        QWidget::setTabOrder(m_regexp, m_editregexp);
        QWidget::setTabOrder(m_editregexp, m_case);
        QWidget::setTabOrder(m_case, m_setImportance);
        QWidget::setTabOrder(m_setImportance, m_importance);
        QWidget::setTabOrder(m_importance, m_setBG);
        QWidget::setTabOrder(m_setBG, m_BG);
        QWidget::setTabOrder(m_BG, m_setFG);
        QWidget::setTabOrder(m_setFG, m_FG);
        QWidget::setTabOrder(m_FG, m_raise);

        retranslateUi(HighlightPrefsUI);
        QObject::connect(m_regexp, SIGNAL(toggled(bool)), m_editregexp, SLOT(setEnabled(bool)));
        QObject::connect(m_setImportance, SIGNAL(toggled(bool)), m_importance, SLOT(setEnabled(bool)));
        QObject::connect(m_setBG, SIGNAL(toggled(bool)), m_BG, SLOT(setEnabled(bool)));
        QObject::connect(m_setFG, SIGNAL(toggled(bool)), m_FG, SLOT(setEnabled(bool)));

        QMetaObject::connectSlotsByName(HighlightPrefsUI);
    } // setupUi

    void retranslateUi(QWidget *HighlightPrefsUI)
    {
        groupBox->setTitle(tr2i18n("Available Filters", 0));
        m_add->setText(tr2i18n("Add", 0));
        m_remove->setText(tr2i18n("Remove", 0));
        m_rename->setText(tr2i18n("Rename...", 0));
        groupBox_2->setTitle(tr2i18n("Criteria", 0));
        textLabel1->setText(tr2i18n("If the message contains:", 0));
        m_regexp->setText(tr2i18n("Regular expression", 0));
        m_editregexp->setText(tr2i18n("Edit...", 0));
        m_case->setText(tr2i18n("Case sensitive", 0));
        groupBox_3->setTitle(tr2i18n("Action", 0));
        m_setImportance->setText(tr2i18n("Set the message importance to:", 0));
        m_importance->clear();
        m_importance->insertItems(0, QStringList()
         << tr2i18n("Low", 0)
         << tr2i18n("Normal", 0)
         << tr2i18n("Highlight", 0)
        );
        m_setBG->setText(tr2i18n("Change the background color to:", 0));
        m_BG->setText(QString());
        m_setFG->setText(tr2i18n("Change the foreground color to:", 0));
        m_FG->setText(QString());
        m_raise->setText(tr2i18n("Raise window", 0));
        m_notifications->setText(tr2i18n("Configure Notifications...", 0));
        Q_UNUSED(HighlightPrefsUI);
    } // retranslateUi

};

namespace Ui {
    class HighlightPrefsUI: public Ui_HighlightPrefsUI {};
} // namespace Ui

QT_END_NAMESPACE

#endif // HIGHLIGHTPREFSBASE_H

