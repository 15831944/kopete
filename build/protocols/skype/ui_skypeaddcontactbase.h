#include <kdialog.h>
#include <klocale.h>

/********************************************************************************
** Form generated from reading UI file 'skypeaddcontactbase.ui'
**
** Created by: Qt User Interface Compiler version 4.8.7
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_SKYPEADDCONTACTBASE_H
#define UI_SKYPEADDCONTACTBASE_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtGui/QApplication>
#include <QtGui/QButtonGroup>
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

class Ui_SkypeAddContactBase
{
public:
    QVBoxLayout *vboxLayout;
    QHBoxLayout *hboxLayout;
    QLabel *textLabel1;
    QLineEdit *NameEdit;
    QGroupBox *groupBox1;
    QHBoxLayout *hboxLayout1;
    QLabel *textLabel2;
    QVBoxLayout *vboxLayout1;
    QSpacerItem *spacer3;
    QPushButton *SearchButton;
    QSpacerItem *spacer5;

    void setupUi(QWidget *SkypeAddContactBase)
    {
        if (SkypeAddContactBase->objectName().isEmpty())
            SkypeAddContactBase->setObjectName(QString::fromUtf8("SkypeAddContactBase"));
        vboxLayout = new QVBoxLayout(SkypeAddContactBase);
        vboxLayout->setObjectName(QString::fromUtf8("vboxLayout"));
        hboxLayout = new QHBoxLayout();
        hboxLayout->setObjectName(QString::fromUtf8("hboxLayout"));
        textLabel1 = new QLabel(SkypeAddContactBase);
        textLabel1->setObjectName(QString::fromUtf8("textLabel1"));
        textLabel1->setWordWrap(false);

        hboxLayout->addWidget(textLabel1);

        NameEdit = new QLineEdit(SkypeAddContactBase);
        NameEdit->setObjectName(QString::fromUtf8("NameEdit"));

        hboxLayout->addWidget(NameEdit);


        vboxLayout->addLayout(hboxLayout);

        groupBox1 = new QGroupBox(SkypeAddContactBase);
        groupBox1->setObjectName(QString::fromUtf8("groupBox1"));
        hboxLayout1 = new QHBoxLayout(groupBox1);
        hboxLayout1->setObjectName(QString::fromUtf8("hboxLayout1"));
        textLabel2 = new QLabel(groupBox1);
        textLabel2->setObjectName(QString::fromUtf8("textLabel2"));
        textLabel2->setAlignment(Qt::AlignVCenter);
        textLabel2->setWordWrap(true);

        hboxLayout1->addWidget(textLabel2);

        vboxLayout1 = new QVBoxLayout();
        vboxLayout1->setObjectName(QString::fromUtf8("vboxLayout1"));
        spacer3 = new QSpacerItem(20, 0, QSizePolicy::Minimum, QSizePolicy::Expanding);

        vboxLayout1->addItem(spacer3);

        SearchButton = new QPushButton(groupBox1);
        SearchButton->setObjectName(QString::fromUtf8("SearchButton"));
        SearchButton->setEnabled(false);

        vboxLayout1->addWidget(SearchButton);

        spacer5 = new QSpacerItem(20, 0, QSizePolicy::Minimum, QSizePolicy::Expanding);

        vboxLayout1->addItem(spacer5);


        hboxLayout1->addLayout(vboxLayout1);


        vboxLayout->addWidget(groupBox1);


        retranslateUi(SkypeAddContactBase);

        QMetaObject::connectSlotsByName(SkypeAddContactBase);
    } // setupUi

    void retranslateUi(QWidget *SkypeAddContactBase)
    {
        SkypeAddContactBase->setWindowTitle(tr2i18n("Add Skype Contact", 0));
        textLabel1->setText(tr2i18n("Skype name:", 0));
        groupBox1->setTitle(tr2i18n("Search", 0));
        textLabel2->setText(tr2i18n("Sorry, but the search function is not yet implemented.", 0));
        SearchButton->setText(tr2i18n("Se&arch", 0));
    } // retranslateUi

};

namespace Ui {
    class SkypeAddContactBase: public Ui_SkypeAddContactBase {};
} // namespace Ui

QT_END_NAMESPACE

#endif // SKYPEADDCONTACTBASE_H

