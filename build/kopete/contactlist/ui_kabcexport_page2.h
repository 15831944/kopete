#include <kdialog.h>
#include <klocale.h>

/********************************************************************************
** Form generated from reading UI file 'kabcexport_page2.ui'
**
** Created by: Qt User Interface Compiler version 4.8.7
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_KABCEXPORT_PAGE2_H
#define UI_KABCEXPORT_PAGE2_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtGui/QApplication>
#include <QtGui/QButtonGroup>
#include <QtGui/QHBoxLayout>
#include <QtGui/QHeaderView>
#include <QtGui/QLabel>
#include <QtGui/QListWidget>
#include <QtGui/QPushButton>
#include <QtGui/QSpacerItem>
#include <QtGui/QVBoxLayout>
#include <QtGui/QWidget>

QT_BEGIN_NAMESPACE

class Ui_KabcExportWizardPage2
{
public:
    QVBoxLayout *vboxLayout;
    QLabel *textLabel3;
    QListWidget *contactList;
    QHBoxLayout *hboxLayout;
    QPushButton *btnSelectAll;
    QPushButton *btnDeselectAll;
    QSpacerItem *spacerItem;

    void setupUi(QWidget *KabcExportWizardPage2)
    {
        if (KabcExportWizardPage2->objectName().isEmpty())
            KabcExportWizardPage2->setObjectName(QString::fromUtf8("KabcExportWizardPage2"));
        KabcExportWizardPage2->resize(543, 395);
        vboxLayout = new QVBoxLayout(KabcExportWizardPage2);
        vboxLayout->setObjectName(QString::fromUtf8("vboxLayout"));
        textLabel3 = new QLabel(KabcExportWizardPage2);
        textLabel3->setObjectName(QString::fromUtf8("textLabel3"));
        QSizePolicy sizePolicy(QSizePolicy::Minimum, QSizePolicy::Minimum);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(textLabel3->sizePolicy().hasHeightForWidth());
        textLabel3->setSizePolicy(sizePolicy);

        vboxLayout->addWidget(textLabel3);

        contactList = new QListWidget(KabcExportWizardPage2);
        contactList->setObjectName(QString::fromUtf8("contactList"));

        vboxLayout->addWidget(contactList);

        hboxLayout = new QHBoxLayout();
        hboxLayout->setSpacing(6);
        hboxLayout->setObjectName(QString::fromUtf8("hboxLayout"));
        hboxLayout->setContentsMargins(0, 0, 0, 0);
        btnSelectAll = new QPushButton(KabcExportWizardPage2);
        btnSelectAll->setObjectName(QString::fromUtf8("btnSelectAll"));

        hboxLayout->addWidget(btnSelectAll);

        btnDeselectAll = new QPushButton(KabcExportWizardPage2);
        btnDeselectAll->setObjectName(QString::fromUtf8("btnDeselectAll"));

        hboxLayout->addWidget(btnDeselectAll);

        spacerItem = new QSpacerItem(51, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        hboxLayout->addItem(spacerItem);


        vboxLayout->addLayout(hboxLayout);


        retranslateUi(KabcExportWizardPage2);

        QMetaObject::connectSlotsByName(KabcExportWizardPage2);
    } // setupUi

    void retranslateUi(QWidget *KabcExportWizardPage2)
    {
        textLabel3->setText(tr2i18n("Selected contacts will be added to the KDE address book.", 0));
        btnSelectAll->setText(tr2i18n("Select &All", 0));
        btnDeselectAll->setText(tr2i18n("&Deselect All", 0));
        Q_UNUSED(KabcExportWizardPage2);
    } // retranslateUi

};

namespace Ui {
    class KabcExportWizardPage2: public Ui_KabcExportWizardPage2 {};
} // namespace Ui

QT_END_NAMESPACE

#endif // KABCEXPORT_PAGE2_H

