#include <kdialog.h>
#include <klocale.h>

/********************************************************************************
** Form generated from reading UI file 'kabcexport_page1.ui'
**
** Created by: Qt User Interface Compiler version 4.8.7
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_KABCEXPORT_PAGE1_H
#define UI_KABCEXPORT_PAGE1_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtGui/QApplication>
#include <QtGui/QButtonGroup>
#include <QtGui/QGroupBox>
#include <QtGui/QHBoxLayout>
#include <QtGui/QHeaderView>
#include <QtGui/QLabel>
#include <QtGui/QListWidget>
#include <QtGui/QVBoxLayout>
#include <QtGui/QWidget>

QT_BEGIN_NAMESPACE

class Ui_KabcExportWizardPage1
{
public:
    QVBoxLayout *vboxLayout;
    QLabel *textLabel1;
    QGroupBox *groupBox;
    QHBoxLayout *hboxLayout;
    QListWidget *addrBooks;

    void setupUi(QWidget *KabcExportWizardPage1)
    {
        if (KabcExportWizardPage1->objectName().isEmpty())
            KabcExportWizardPage1->setObjectName(QString::fromUtf8("KabcExportWizardPage1"));
        KabcExportWizardPage1->resize(600, 300);
        vboxLayout = new QVBoxLayout(KabcExportWizardPage1);
        vboxLayout->setObjectName(QString::fromUtf8("vboxLayout"));
        textLabel1 = new QLabel(KabcExportWizardPage1);
        textLabel1->setObjectName(QString::fromUtf8("textLabel1"));
        QSizePolicy sizePolicy(QSizePolicy::Minimum, QSizePolicy::Minimum);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(textLabel1->sizePolicy().hasHeightForWidth());
        textLabel1->setSizePolicy(sizePolicy);
        textLabel1->setAlignment(Qt::AlignVCenter);

        vboxLayout->addWidget(textLabel1);

        groupBox = new QGroupBox(KabcExportWizardPage1);
        groupBox->setObjectName(QString::fromUtf8("groupBox"));
        hboxLayout = new QHBoxLayout(groupBox);
        hboxLayout->setSpacing(6);
        hboxLayout->setObjectName(QString::fromUtf8("hboxLayout"));
        hboxLayout->setContentsMargins(9, 9, 9, 9);
        addrBooks = new QListWidget(groupBox);
        addrBooks->setObjectName(QString::fromUtf8("addrBooks"));

        hboxLayout->addWidget(addrBooks);


        vboxLayout->addWidget(groupBox);


        retranslateUi(KabcExportWizardPage1);

        QMetaObject::connectSlotsByName(KabcExportWizardPage1);
    } // setupUi

    void retranslateUi(QWidget *KabcExportWizardPage1)
    {
        textLabel1->setText(tr2i18n("This wizard helps you export instant messaging contacts to the KDE address book.", 0));
        groupBox->setTitle(tr2i18n("&Select Address Book", 0));
        Q_UNUSED(KabcExportWizardPage1);
    } // retranslateUi

};

namespace Ui {
    class KabcExportWizardPage1: public Ui_KabcExportWizardPage1 {};
} // namespace Ui

QT_END_NAMESPACE

#endif // KABCEXPORT_PAGE1_H

