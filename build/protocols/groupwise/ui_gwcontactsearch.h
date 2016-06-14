#include <kdialog.h>
#include <klocale.h>

/********************************************************************************
** Form generated from reading UI file 'gwcontactsearch.ui'
**
** Created by: Qt User Interface Compiler version 4.8.7
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_GWCONTACTSEARCH_H
#define UI_GWCONTACTSEARCH_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtGui/QApplication>
#include <QtGui/QButtonGroup>
#include <QtGui/QComboBox>
#include <QtGui/QFrame>
#include <QtGui/QGridLayout>
#include <QtGui/QHBoxLayout>
#include <QtGui/QHeaderView>
#include <QtGui/QLabel>
#include <QtGui/QLineEdit>
#include <QtGui/QPushButton>
#include <QtGui/QSpacerItem>
#include <QtGui/QTreeView>
#include <QtGui/QVBoxLayout>
#include <QtGui/QWidget>

QT_BEGIN_NAMESPACE

class Ui_GroupWiseContactSearchWidget
{
public:
    QVBoxLayout *_2;
    QGridLayout *gridLayout;
    QLabel *textLabel1;
    QLabel *textLabel3;
    QLabel *textLabel4;
    QLineEdit *m_userId;
    QLineEdit *m_firstName;
    QLabel *textLabel5;
    QComboBox *m_userIdOperation;
    QComboBox *m_firstNameOperation;
    QLineEdit *m_dept;
    QComboBox *m_lastNameOperation;
    QLabel *textLabel2;
    QPushButton *m_clear;
    QComboBox *m_deptOperation;
    QLineEdit *m_title;
    QLineEdit *m_lastName;
    QPushButton *m_search;
    QComboBox *m_titleOperation;
    QFrame *line1;
    QLabel *textLabel9;
    QHBoxLayout *hboxLayout;
    QTreeView *m_results;
    QVBoxLayout *vboxLayout;
    QPushButton *m_details;
    QSpacerItem *spacerItem;
    QLabel *m_matchCount;

    void setupUi(QWidget *GroupWiseContactSearchWidget)
    {
        if (GroupWiseContactSearchWidget->objectName().isEmpty())
            GroupWiseContactSearchWidget->setObjectName(QString::fromUtf8("GroupWiseContactSearchWidget"));
        GroupWiseContactSearchWidget->resize(435, 410);
        _2 = new QVBoxLayout(GroupWiseContactSearchWidget);
        _2->setContentsMargins(0, 0, 0, 0);
        _2->setObjectName(QString::fromUtf8("_2"));
        gridLayout = new QGridLayout();
#ifndef UI_Q_OS_MAC
        gridLayout->setSpacing(6);
#endif
#ifndef UI_Q_OS_MAC
        gridLayout->setContentsMargins(0, 0, 0, 0);
#endif
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        textLabel1 = new QLabel(GroupWiseContactSearchWidget);
        textLabel1->setObjectName(QString::fromUtf8("textLabel1"));
        textLabel1->setWordWrap(false);

        gridLayout->addWidget(textLabel1, 0, 0, 1, 1);

        textLabel3 = new QLabel(GroupWiseContactSearchWidget);
        textLabel3->setObjectName(QString::fromUtf8("textLabel3"));
        textLabel3->setWordWrap(false);

        gridLayout->addWidget(textLabel3, 2, 0, 1, 1);

        textLabel4 = new QLabel(GroupWiseContactSearchWidget);
        textLabel4->setObjectName(QString::fromUtf8("textLabel4"));
        textLabel4->setWordWrap(false);

        gridLayout->addWidget(textLabel4, 3, 0, 1, 1);

        m_userId = new QLineEdit(GroupWiseContactSearchWidget);
        m_userId->setObjectName(QString::fromUtf8("m_userId"));

        gridLayout->addWidget(m_userId, 2, 2, 1, 1);

        m_firstName = new QLineEdit(GroupWiseContactSearchWidget);
        m_firstName->setObjectName(QString::fromUtf8("m_firstName"));

        gridLayout->addWidget(m_firstName, 0, 2, 1, 1);

        textLabel5 = new QLabel(GroupWiseContactSearchWidget);
        textLabel5->setObjectName(QString::fromUtf8("textLabel5"));
        textLabel5->setWordWrap(false);

        gridLayout->addWidget(textLabel5, 4, 0, 1, 1);

        m_userIdOperation = new QComboBox(GroupWiseContactSearchWidget);
        m_userIdOperation->setObjectName(QString::fromUtf8("m_userIdOperation"));

        gridLayout->addWidget(m_userIdOperation, 2, 1, 1, 1);

        m_firstNameOperation = new QComboBox(GroupWiseContactSearchWidget);
        m_firstNameOperation->setObjectName(QString::fromUtf8("m_firstNameOperation"));

        gridLayout->addWidget(m_firstNameOperation, 0, 1, 1, 1);

        m_dept = new QLineEdit(GroupWiseContactSearchWidget);
        m_dept->setObjectName(QString::fromUtf8("m_dept"));

        gridLayout->addWidget(m_dept, 4, 2, 1, 1);

        m_lastNameOperation = new QComboBox(GroupWiseContactSearchWidget);
        m_lastNameOperation->setObjectName(QString::fromUtf8("m_lastNameOperation"));

        gridLayout->addWidget(m_lastNameOperation, 1, 1, 1, 1);

        textLabel2 = new QLabel(GroupWiseContactSearchWidget);
        textLabel2->setObjectName(QString::fromUtf8("textLabel2"));
        textLabel2->setWordWrap(false);

        gridLayout->addWidget(textLabel2, 1, 0, 1, 1);

        m_clear = new QPushButton(GroupWiseContactSearchWidget);
        m_clear->setObjectName(QString::fromUtf8("m_clear"));

        gridLayout->addWidget(m_clear, 1, 3, 1, 1);

        m_deptOperation = new QComboBox(GroupWiseContactSearchWidget);
        m_deptOperation->setObjectName(QString::fromUtf8("m_deptOperation"));

        gridLayout->addWidget(m_deptOperation, 4, 1, 1, 1);

        m_title = new QLineEdit(GroupWiseContactSearchWidget);
        m_title->setObjectName(QString::fromUtf8("m_title"));

        gridLayout->addWidget(m_title, 3, 2, 1, 1);

        m_lastName = new QLineEdit(GroupWiseContactSearchWidget);
        m_lastName->setObjectName(QString::fromUtf8("m_lastName"));

        gridLayout->addWidget(m_lastName, 1, 2, 1, 1);

        m_search = new QPushButton(GroupWiseContactSearchWidget);
        m_search->setObjectName(QString::fromUtf8("m_search"));
        m_search->setDefault(true);

        gridLayout->addWidget(m_search, 0, 3, 1, 1);

        m_titleOperation = new QComboBox(GroupWiseContactSearchWidget);
        m_titleOperation->setObjectName(QString::fromUtf8("m_titleOperation"));

        gridLayout->addWidget(m_titleOperation, 3, 1, 1, 1);


        _2->addLayout(gridLayout);

        line1 = new QFrame(GroupWiseContactSearchWidget);
        line1->setObjectName(QString::fromUtf8("line1"));
        line1->setFrameShape(QFrame::HLine);
        line1->setFrameShadow(QFrame::Sunken);
        line1->setFrameShape(QFrame::HLine);

        _2->addWidget(line1);

        textLabel9 = new QLabel(GroupWiseContactSearchWidget);
        textLabel9->setObjectName(QString::fromUtf8("textLabel9"));
        textLabel9->setWordWrap(false);

        _2->addWidget(textLabel9);

        hboxLayout = new QHBoxLayout();
        hboxLayout->setObjectName(QString::fromUtf8("hboxLayout"));
        m_results = new QTreeView(GroupWiseContactSearchWidget);
        m_results->setObjectName(QString::fromUtf8("m_results"));
        m_results->setRootIsDecorated(false);
        m_results->setSortingEnabled(true);
        m_results->setAllColumnsShowFocus(true);

        hboxLayout->addWidget(m_results);

        vboxLayout = new QVBoxLayout();
#ifndef UI_Q_OS_MAC
        vboxLayout->setSpacing(6);
#endif
        vboxLayout->setContentsMargins(0, 0, 0, 0);
        vboxLayout->setObjectName(QString::fromUtf8("vboxLayout"));
        m_details = new QPushButton(GroupWiseContactSearchWidget);
        m_details->setObjectName(QString::fromUtf8("m_details"));
        m_details->setEnabled(true);

        vboxLayout->addWidget(m_details);

        spacerItem = new QSpacerItem(20, 141, QSizePolicy::Minimum, QSizePolicy::Expanding);

        vboxLayout->addItem(spacerItem);


        hboxLayout->addLayout(vboxLayout);


        _2->addLayout(hboxLayout);

        m_matchCount = new QLabel(GroupWiseContactSearchWidget);
        m_matchCount->setObjectName(QString::fromUtf8("m_matchCount"));
        m_matchCount->setWordWrap(false);

        _2->addWidget(m_matchCount);

#ifndef UI_QT_NO_SHORTCUT
        textLabel1->setBuddy(m_firstName);
        textLabel3->setBuddy(m_userId);
        textLabel4->setBuddy(m_title);
        textLabel5->setBuddy(m_dept);
        textLabel2->setBuddy(m_lastName);
        textLabel9->setBuddy(m_results);
#endif // QT_NO_SHORTCUT
        QWidget::setTabOrder(m_firstNameOperation, m_firstName);
        QWidget::setTabOrder(m_firstName, m_lastNameOperation);
        QWidget::setTabOrder(m_lastNameOperation, m_lastName);
        QWidget::setTabOrder(m_lastName, m_userIdOperation);
        QWidget::setTabOrder(m_userIdOperation, m_userId);
        QWidget::setTabOrder(m_userId, m_titleOperation);
        QWidget::setTabOrder(m_titleOperation, m_title);
        QWidget::setTabOrder(m_title, m_deptOperation);
        QWidget::setTabOrder(m_deptOperation, m_dept);
        QWidget::setTabOrder(m_dept, m_results);
        QWidget::setTabOrder(m_results, m_search);
        QWidget::setTabOrder(m_search, m_clear);
        QWidget::setTabOrder(m_clear, m_details);

        retranslateUi(GroupWiseContactSearchWidget);

        QMetaObject::connectSlotsByName(GroupWiseContactSearchWidget);
    } // setupUi

    void retranslateUi(QWidget *GroupWiseContactSearchWidget)
    {
        GroupWiseContactSearchWidget->setWindowTitle(tr2i18n("Search GroupWise Messenger", 0));
        textLabel1->setText(tr2i18n("&First name", 0));
        textLabel3->setText(tr2i18n("&User ID", 0));
        textLabel4->setText(tr2i18n("&Title", 0));
        textLabel5->setText(tr2i18n("&Department", 0));
        m_userIdOperation->clear();
        m_userIdOperation->insertItems(0, QStringList()
         << tr2i18n("contains", 0)
         << tr2i18n("begins with", 0)
         << tr2i18n("equals", 0)
        );
        m_firstNameOperation->clear();
        m_firstNameOperation->insertItems(0, QStringList()
         << tr2i18n("contains", 0)
         << tr2i18n("begins with", 0)
         << tr2i18n("equals", 0)
        );
        m_lastNameOperation->clear();
        m_lastNameOperation->insertItems(0, QStringList()
         << tr2i18n("contains", 0)
         << tr2i18n("begins with", 0)
         << tr2i18n("equals", 0)
        );
        textLabel2->setText(tr2i18n("Last &name", 0));
        m_clear->setText(tr2i18n("Cl&ear", 0));
        m_deptOperation->clear();
        m_deptOperation->insertItems(0, QStringList()
         << tr2i18n("contains", 0)
         << tr2i18n("begins with", 0)
         << tr2i18n("equals", 0)
        );
        m_search->setText(tr2i18n("&Search", 0));
        m_titleOperation->clear();
        m_titleOperation->insertItems(0, QStringList()
         << tr2i18n("contains", 0)
         << tr2i18n("begins with", 0)
         << tr2i18n("equals", 0)
        );
        textLabel9->setText(tr2i18n("&Results:", 0));
        m_details->setText(tr2i18n("Detai&ls", 0));
        m_matchCount->setText(tr2i18n("0 matching users found", 0));
    } // retranslateUi

};

namespace Ui {
    class GroupWiseContactSearchWidget: public Ui_GroupWiseContactSearchWidget {};
} // namespace Ui

QT_END_NAMESPACE

#endif // GWCONTACTSEARCH_H

