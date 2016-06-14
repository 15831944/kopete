#include <kdialog.h>
#include <klocale.h>

/********************************************************************************
** Form generated from reading UI file 'gwaddui.ui'
**
** Created by: Qt User Interface Compiler version 4.8.7
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_GWADDUI_H
#define UI_GWADDUI_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtGui/QApplication>
#include <QtGui/QButtonGroup>
#include <QtGui/QGridLayout>
#include <QtGui/QGroupBox>
#include <QtGui/QHeaderView>
#include <QtGui/QLineEdit>
#include <QtGui/QRadioButton>
#include <QtGui/QTabWidget>
#include <QtGui/QVBoxLayout>
#include <QtGui/QWidget>

QT_BEGIN_NAMESPACE

class Ui_GroupWiseAddUI
{
public:
    QVBoxLayout *vboxLayout;
    QTabWidget *m_tabWidget;
    QWidget *tab;
    QVBoxLayout *vboxLayout1;
    QGroupBox *bg_addMethod;
    QGridLayout *gridLayout;
    QLineEdit *m_userName;
    QRadioButton *rb_userId;
    QRadioButton *rb_userName;
    QLineEdit *m_userId;
    QWidget *tab1;

    void setupUi(QWidget *GroupWiseAddUI)
    {
        if (GroupWiseAddUI->objectName().isEmpty())
            GroupWiseAddUI->setObjectName(QString::fromUtf8("GroupWiseAddUI"));
        GroupWiseAddUI->resize(392, 343);
        vboxLayout = new QVBoxLayout(GroupWiseAddUI);
        vboxLayout->setSpacing(0);
        vboxLayout->setObjectName(QString::fromUtf8("vboxLayout"));
        vboxLayout->setContentsMargins(0, 0, 0, 0);
        m_tabWidget = new QTabWidget(GroupWiseAddUI);
        m_tabWidget->setObjectName(QString::fromUtf8("m_tabWidget"));
        tab = new QWidget();
        tab->setObjectName(QString::fromUtf8("tab"));
        vboxLayout1 = new QVBoxLayout(tab);
        vboxLayout1->setSpacing(6);
        vboxLayout1->setObjectName(QString::fromUtf8("vboxLayout1"));
        vboxLayout1->setContentsMargins(0, 0, 0, 0);
        bg_addMethod = new QGroupBox(tab);
        bg_addMethod->setObjectName(QString::fromUtf8("bg_addMethod"));
        gridLayout = new QGridLayout(bg_addMethod);
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        gridLayout->setHorizontalSpacing(6);
        gridLayout->setVerticalSpacing(6);
        gridLayout->setContentsMargins(0, 0, 0, 0);
        m_userName = new QLineEdit(bg_addMethod);
        m_userName->setObjectName(QString::fromUtf8("m_userName"));
        m_userName->setEnabled(false);

        gridLayout->addWidget(m_userName, 0, 1, 1, 1);

        rb_userId = new QRadioButton(bg_addMethod);
        rb_userId->setObjectName(QString::fromUtf8("rb_userId"));
        rb_userId->setChecked(true);

        gridLayout->addWidget(rb_userId, 1, 0, 1, 1);

        rb_userName = new QRadioButton(bg_addMethod);
        rb_userName->setObjectName(QString::fromUtf8("rb_userName"));
        rb_userName->setEnabled(true);

        gridLayout->addWidget(rb_userName, 0, 0, 1, 1);

        m_userId = new QLineEdit(bg_addMethod);
        m_userId->setObjectName(QString::fromUtf8("m_userId"));
        m_userId->setFocusPolicy(Qt::StrongFocus);

        gridLayout->addWidget(m_userId, 1, 1, 1, 1);


        vboxLayout1->addWidget(bg_addMethod);

        m_tabWidget->addTab(tab, QString());
        tab1 = new QWidget();
        tab1->setObjectName(QString::fromUtf8("tab1"));
        m_tabWidget->addTab(tab1, QString());

        vboxLayout->addWidget(m_tabWidget);

        QWidget::setTabOrder(m_tabWidget, rb_userName);
        QWidget::setTabOrder(rb_userName, m_userName);
        QWidget::setTabOrder(m_userName, rb_userId);
        QWidget::setTabOrder(rb_userId, m_userId);

        retranslateUi(GroupWiseAddUI);
        QObject::connect(rb_userId, SIGNAL(toggled(bool)), m_userId, SLOT(setEnabled(bool)));
        QObject::connect(rb_userName, SIGNAL(toggled(bool)), m_userName, SLOT(setEnabled(bool)));

        m_tabWidget->setCurrentIndex(0);


        QMetaObject::connectSlotsByName(GroupWiseAddUI);
    } // setupUi

    void retranslateUi(QWidget *GroupWiseAddUI)
    {
#ifndef UI_QT_NO_TOOLTIP
        GroupWiseAddUI->setToolTip(QString());
#endif // QT_NO_TOOLTIP
        bg_addMethod->setTitle(tr2i18n("Add Using", 0));
#ifndef UI_QT_NO_TOOLTIP
        m_userName->setToolTip(tr2i18n("A full or partial name. Asterisks are ignored", 0));
#endif // QT_NO_TOOLTIP
#ifndef UI_QT_NO_WHATSTHIS
        m_userName->setWhatsThis(tr2i18n("Type some or all of the contact's name.  Matches will be shown below", 0));
#endif // QT_NO_WHATSTHIS
        rb_userId->setText(tr2i18n("User &ID:", 0));
        rb_userName->setText(tr2i18n("Userna&me:", 0));
#ifndef UI_QT_NO_TOOLTIP
        m_userId->setToolTip(tr2i18n("A correct User ID", 0));
#endif // QT_NO_TOOLTIP
#ifndef UI_QT_NO_WHATSTHIS
        m_userId->setWhatsThis(tr2i18n("Use this field to add a contact if you already know the user's exact User ID", 0));
#endif // QT_NO_WHATSTHIS
        m_tabWidget->setTabText(m_tabWidget->indexOf(tab), tr2i18n("&Basic", 0));
        m_tabWidget->setTabText(m_tabWidget->indexOf(tab1), tr2i18n("Ad&vanced", 0));
    } // retranslateUi

};

namespace Ui {
    class GroupWiseAddUI: public Ui_GroupWiseAddUI {};
} // namespace Ui

QT_END_NAMESPACE

#endif // GWADDUI_H

