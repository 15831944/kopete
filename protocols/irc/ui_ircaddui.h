#include <kdialog.h>
#include <klocale.h>

/********************************************************************************
** Form generated from reading UI file 'ircaddui.ui'
**
** Created by: Qt User Interface Compiler version 4.8.7
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_ircADDUI_H
#define UI_ircADDUI_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtGui/QApplication>
#include <QtGui/QButtonGroup>
#include <QtGui/QGroupBox>
#include <QtGui/QHBoxLayout>
#include <QtGui/QHeaderView>
#include <QtGui/QLabel>
#include <QtGui/QLineEdit>
#include <QtGui/QRadioButton>
#include <QtGui/QSpacerItem>
#include <QtGui/QVBoxLayout>
#include <QtGui/QWidget>

QT_BEGIN_NAMESPACE

class Ui_ircAddUI
{
public:
    QVBoxLayout *vboxLayout;
    QHBoxLayout *hboxLayout;
    QLabel *textLabel1;
    QLineEdit *m_uniqueName;
    QGroupBox *groupBox;
    QVBoxLayout *vboxLayout1;
    QRadioButton *m_rbEcho;
    QRadioButton *m_rbGroup;
    QSpacerItem *spacerItem;

    void setupUi(QWidget *ircAddUI)
    {
        if (ircAddUI->objectName().isEmpty())
            ircAddUI->setObjectName(QString::fromUtf8("ircAddUI"));
        ircAddUI->resize(466, 145);
        vboxLayout = new QVBoxLayout(ircAddUI);
        vboxLayout->setObjectName(QString::fromUtf8("vboxLayout"));
        hboxLayout = new QHBoxLayout();
        hboxLayout->setSpacing(6);
        hboxLayout->setObjectName(QString::fromUtf8("hboxLayout"));
        hboxLayout->setContentsMargins(0, 0, 0, 0);
        textLabel1 = new QLabel(ircAddUI);
        textLabel1->setObjectName(QString::fromUtf8("textLabel1"));

        hboxLayout->addWidget(textLabel1);

        m_uniqueName = new QLineEdit(ircAddUI);
        m_uniqueName->setObjectName(QString::fromUtf8("m_uniqueName"));

        hboxLayout->addWidget(m_uniqueName);


        vboxLayout->addLayout(hboxLayout);

        groupBox = new QGroupBox(ircAddUI);
        groupBox->setObjectName(QString::fromUtf8("groupBox"));
        vboxLayout1 = new QVBoxLayout(groupBox);
        vboxLayout1->setObjectName(QString::fromUtf8("vboxLayout1"));
        m_rbEcho = new QRadioButton(groupBox);
        m_rbEcho->setObjectName(QString::fromUtf8("m_rbEcho"));
        m_rbEcho->setChecked(true);

        vboxLayout1->addWidget(m_rbEcho);

        m_rbGroup = new QRadioButton(groupBox);
        m_rbGroup->setObjectName(QString::fromUtf8("m_rbGroup"));

        vboxLayout1->addWidget(m_rbGroup);


        vboxLayout->addWidget(groupBox);

        spacerItem = new QSpacerItem(448, 201, QSizePolicy::Minimum, QSizePolicy::Expanding);

        vboxLayout->addItem(spacerItem);

#ifndef UI_QT_NO_SHORTCUT
        textLabel1->setBuddy(m_uniqueName);
#endif // QT_NO_SHORTCUT

        retranslateUi(ircAddUI);

        QMetaObject::connectSlotsByName(ircAddUI);
    } // setupUi

    void retranslateUi(QWidget *ircAddUI)
    {
#ifndef UI_QT_NO_TOOLTIP
        textLabel1->setToolTip(tr2i18n("The account name of the account you would like to add.", 0));
#endif // QT_NO_TOOLTIP
#ifndef UI_QT_NO_WHATSTHIS
        textLabel1->setWhatsThis(tr2i18n("The account name of the account you would like to add.", 0));
#endif // QT_NO_WHATSTHIS
        textLabel1->setText(tr2i18n("&Contact name:", 0));
#ifndef UI_QT_NO_TOOLTIP
        m_uniqueName->setToolTip(tr2i18n("The account name of the account you would like to add.", 0));
#endif // QT_NO_TOOLTIP
#ifndef UI_QT_NO_WHATSTHIS
        m_uniqueName->setWhatsThis(tr2i18n("The account name of the account you would like to add.", 0));
#endif // QT_NO_WHATSTHIS
        groupBox->setTitle(tr2i18n("Contact Type", 0));
#ifndef UI_QT_NO_TOOLTIP
        m_rbEcho->setToolTip(tr2i18n("Hey look!  Only one option.  Could you please make this a dropdown and add Null?", 0));
#endif // QT_NO_TOOLTIP
#ifndef UI_QT_NO_WHATSTHIS
        m_rbEcho->setWhatsThis(tr2i18n("Hey look!  Only one option.  Could you please make this a dropdown and add Null?", 0));
#endif // QT_NO_WHATSTHIS
        m_rbEcho->setText(tr2i18n("&Echo", 0));
        m_rbGroup->setText(tr2i18n("&Group", 0));
        Q_UNUSED(ircAddUI);
    } // retranslateUi

};

namespace Ui {
    class ircAddUI: public Ui_ircAddUI {};
} // namespace Ui

QT_END_NAMESPACE

#endif // ircADDUI_H

