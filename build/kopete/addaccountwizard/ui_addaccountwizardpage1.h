#include <kdialog.h>
#include <klocale.h>

/********************************************************************************
** Form generated from reading UI file 'addaccountwizardpage1.ui'
**
** Created by: Qt User Interface Compiler version 4.8.7
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_ADDACCOUNTWIZARDPAGE1_H
#define UI_ADDACCOUNTWIZARDPAGE1_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtGui/QApplication>
#include <QtGui/QButtonGroup>
#include <QtGui/QHeaderView>
#include <QtGui/QLabel>
#include <QtGui/QTreeWidget>
#include <QtGui/QVBoxLayout>
#include <QtGui/QWidget>

QT_BEGIN_NAMESPACE

class Ui_AddAccountWizardPage1
{
public:
    QVBoxLayout *vboxLayout;
    QLabel *m_header;
    QTreeWidget *protocolListView;

    void setupUi(QWidget *AddAccountWizardPage1)
    {
        if (AddAccountWizardPage1->objectName().isEmpty())
            AddAccountWizardPage1->setObjectName(QString::fromUtf8("AddAccountWizardPage1"));
        AddAccountWizardPage1->resize(458, 353);
        AddAccountWizardPage1->setMinimumSize(QSize(0, 0));
        vboxLayout = new QVBoxLayout(AddAccountWizardPage1);
        vboxLayout->setObjectName(QString::fromUtf8("vboxLayout"));
        m_header = new QLabel(AddAccountWizardPage1);
        m_header->setObjectName(QString::fromUtf8("m_header"));
        QSizePolicy sizePolicy(QSizePolicy::Preferred, QSizePolicy::Preferred);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(m_header->sizePolicy().hasHeightForWidth());
        m_header->setSizePolicy(sizePolicy);
        m_header->setAlignment(Qt::AlignLeading|Qt::AlignLeft|Qt::AlignTop);
        m_header->setWordWrap(true);

        vboxLayout->addWidget(m_header);

        protocolListView = new QTreeWidget(AddAccountWizardPage1);
        protocolListView->setObjectName(QString::fromUtf8("protocolListView"));
        protocolListView->setAlternatingRowColors(true);
        protocolListView->setRootIsDecorated(false);

        vboxLayout->addWidget(protocolListView);


        retranslateUi(AddAccountWizardPage1);

        QMetaObject::connectSlotsByName(AddAccountWizardPage1);
    } // setupUi

    void retranslateUi(QWidget *AddAccountWizardPage1)
    {
        AddAccountWizardPage1->setWindowTitle(tr2i18n("Step One: Select Messaging Service", 0));
        m_header->setText(tr2i18n("<h2>Welcome to the Add Account Wizard</h2>\n"
"<p>Select the messaging service from the list below.</p>", 0));
        QTreeWidgetItem *___qtreewidgetitem = protocolListView->headerItem();
        ___qtreewidgetitem->setText(0, tr2i18n("1", 0));
    } // retranslateUi

};

namespace Ui {
    class AddAccountWizardPage1: public Ui_AddAccountWizardPage1 {};
} // namespace Ui

QT_END_NAMESPACE

#endif // ADDACCOUNTWIZARDPAGE1_H

