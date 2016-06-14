#include <kdialog.h>
#include <klocale.h>

/********************************************************************************
** Form generated from reading UI file 'gwcustomstatusedit.ui'
**
** Created by: Qt User Interface Compiler version 4.8.7
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_GWCUSTOMSTATUSEDIT_H
#define UI_GWCUSTOMSTATUSEDIT_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtGui/QApplication>
#include <QtGui/QButtonGroup>
#include <QtGui/QComboBox>
#include <QtGui/QGridLayout>
#include <QtGui/QHeaderView>
#include <QtGui/QLabel>
#include <QtGui/QLineEdit>
#include <QtGui/QVBoxLayout>
#include <QtGui/QWidget>

QT_BEGIN_NAMESPACE

class Ui_GroupWiseCustomStatusEdit
{
public:
    QVBoxLayout *vboxLayout;
    QGridLayout *gridLayout;
    QLineEdit *m_name;
    QComboBox *m_cmbStatus;
    QLabel *textLabel3;
    QLabel *textLabel2;
    QLabel *textLabel1;
    QLineEdit *m_awayMessage;

    void setupUi(QWidget *GroupWiseCustomStatusEdit)
    {
        if (GroupWiseCustomStatusEdit->objectName().isEmpty())
            GroupWiseCustomStatusEdit->setObjectName(QString::fromUtf8("GroupWiseCustomStatusEdit"));
        GroupWiseCustomStatusEdit->resize(260, 117);
        vboxLayout = new QVBoxLayout(GroupWiseCustomStatusEdit);
        vboxLayout->setSpacing(6);
        vboxLayout->setObjectName(QString::fromUtf8("vboxLayout"));
        vboxLayout->setContentsMargins(11, 11, 11, 11);
        gridLayout = new QGridLayout();
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        gridLayout->setHorizontalSpacing(6);
        gridLayout->setVerticalSpacing(6);
        gridLayout->setContentsMargins(0, 0, 0, 0);
        m_name = new QLineEdit(GroupWiseCustomStatusEdit);
        m_name->setObjectName(QString::fromUtf8("m_name"));

        gridLayout->addWidget(m_name, 1, 1, 1, 1);

        m_cmbStatus = new QComboBox(GroupWiseCustomStatusEdit);
        m_cmbStatus->setObjectName(QString::fromUtf8("m_cmbStatus"));

        gridLayout->addWidget(m_cmbStatus, 0, 1, 1, 1);

        textLabel3 = new QLabel(GroupWiseCustomStatusEdit);
        textLabel3->setObjectName(QString::fromUtf8("textLabel3"));
        textLabel3->setWordWrap(false);

        gridLayout->addWidget(textLabel3, 0, 0, 1, 1);

        textLabel2 = new QLabel(GroupWiseCustomStatusEdit);
        textLabel2->setObjectName(QString::fromUtf8("textLabel2"));
        textLabel2->setWordWrap(false);

        gridLayout->addWidget(textLabel2, 2, 0, 1, 1);

        textLabel1 = new QLabel(GroupWiseCustomStatusEdit);
        textLabel1->setObjectName(QString::fromUtf8("textLabel1"));
        textLabel1->setWordWrap(false);

        gridLayout->addWidget(textLabel1, 1, 0, 1, 1);

        m_awayMessage = new QLineEdit(GroupWiseCustomStatusEdit);
        m_awayMessage->setObjectName(QString::fromUtf8("m_awayMessage"));

        gridLayout->addWidget(m_awayMessage, 2, 1, 1, 1);


        vboxLayout->addLayout(gridLayout);

#ifndef UI_QT_NO_SHORTCUT
        textLabel3->setBuddy(m_cmbStatus);
        textLabel2->setBuddy(m_awayMessage);
        textLabel1->setBuddy(m_name);
#endif // QT_NO_SHORTCUT
        QWidget::setTabOrder(m_cmbStatus, m_name);
        QWidget::setTabOrder(m_name, m_awayMessage);

        retranslateUi(GroupWiseCustomStatusEdit);

        QMetaObject::connectSlotsByName(GroupWiseCustomStatusEdit);
    } // setupUi

    void retranslateUi(QWidget *GroupWiseCustomStatusEdit)
    {
        m_name->setText(QString());
        textLabel3->setText(tr2i18n("&Status:", 0));
        textLabel2->setText(tr2i18n("Awa&y message:", 0));
        textLabel1->setText(tr2i18n("&Name:", 0));
        Q_UNUSED(GroupWiseCustomStatusEdit);
    } // retranslateUi

};

namespace Ui {
    class GroupWiseCustomStatusEdit: public Ui_GroupWiseCustomStatusEdit {};
} // namespace Ui

QT_END_NAMESPACE

#endif // GWCUSTOMSTATUSEDIT_H

