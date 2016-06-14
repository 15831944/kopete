#include <kdialog.h>
#include <klocale.h>

/********************************************************************************
** Form generated from reading UI file 'icqotherinfowidget.ui'
**
** Created by: Qt User Interface Compiler version 4.8.7
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_ICQOTHERINFOWIDGET_H
#define UI_ICQOTHERINFOWIDGET_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtGui/QApplication>
#include <QtGui/QButtonGroup>
#include <QtGui/QCheckBox>
#include <QtGui/QGroupBox>
#include <QtGui/QHBoxLayout>
#include <QtGui/QHeaderView>
#include <QtGui/QLabel>
#include <QtGui/QPushButton>
#include <QtGui/QSpacerItem>
#include <QtGui/QTableView>
#include <QtGui/QTextEdit>
#include <QtGui/QVBoxLayout>
#include <QtGui/QWidget>

QT_BEGIN_NAMESPACE

class Ui_ICQOtherInfoWidget
{
public:
    QVBoxLayout *vboxLayout;
    QGroupBox *groupBox;
    QVBoxLayout *vboxLayout1;
    QTableView *emailTableView;
    QHBoxLayout *hboxLayout;
    QPushButton *addEmailButton;
    QPushButton *removeEmailButton;
    QSpacerItem *spacerItem;
    QPushButton *upEmailButton;
    QPushButton *downEmailButton;
    QCheckBox *sendInfoCheck;
    QLabel *label;
    QGroupBox *groupBox_2;
    QVBoxLayout *vboxLayout2;
    QTextEdit *notesEdit;
    QSpacerItem *spacerItem1;

    void setupUi(QWidget *ICQOtherInfoWidget)
    {
        if (ICQOtherInfoWidget->objectName().isEmpty())
            ICQOtherInfoWidget->setObjectName(QString::fromUtf8("ICQOtherInfoWidget"));
        ICQOtherInfoWidget->resize(458, 387);
        vboxLayout = new QVBoxLayout(ICQOtherInfoWidget);
        vboxLayout->setObjectName(QString::fromUtf8("vboxLayout"));
        vboxLayout->setContentsMargins(0, 0, 0, 0);
        groupBox = new QGroupBox(ICQOtherInfoWidget);
        groupBox->setObjectName(QString::fromUtf8("groupBox"));
        vboxLayout1 = new QVBoxLayout(groupBox);
        vboxLayout1->setSpacing(6);
        vboxLayout1->setObjectName(QString::fromUtf8("vboxLayout1"));
        vboxLayout1->setContentsMargins(9, 9, 9, 9);
        emailTableView = new QTableView(groupBox);
        emailTableView->setObjectName(QString::fromUtf8("emailTableView"));

        vboxLayout1->addWidget(emailTableView);

        hboxLayout = new QHBoxLayout();
        hboxLayout->setSpacing(6);
        hboxLayout->setObjectName(QString::fromUtf8("hboxLayout"));
        hboxLayout->setContentsMargins(0, 0, 0, 0);
        addEmailButton = new QPushButton(groupBox);
        addEmailButton->setObjectName(QString::fromUtf8("addEmailButton"));

        hboxLayout->addWidget(addEmailButton);

        removeEmailButton = new QPushButton(groupBox);
        removeEmailButton->setObjectName(QString::fromUtf8("removeEmailButton"));

        hboxLayout->addWidget(removeEmailButton);

        spacerItem = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        hboxLayout->addItem(spacerItem);

        upEmailButton = new QPushButton(groupBox);
        upEmailButton->setObjectName(QString::fromUtf8("upEmailButton"));

        hboxLayout->addWidget(upEmailButton);

        downEmailButton = new QPushButton(groupBox);
        downEmailButton->setObjectName(QString::fromUtf8("downEmailButton"));

        hboxLayout->addWidget(downEmailButton);


        vboxLayout1->addLayout(hboxLayout);

        sendInfoCheck = new QCheckBox(groupBox);
        sendInfoCheck->setObjectName(QString::fromUtf8("sendInfoCheck"));

        vboxLayout1->addWidget(sendInfoCheck);

        label = new QLabel(groupBox);
        label->setObjectName(QString::fromUtf8("label"));
        label->setWordWrap(true);

        vboxLayout1->addWidget(label);


        vboxLayout->addWidget(groupBox);

        groupBox_2 = new QGroupBox(ICQOtherInfoWidget);
        groupBox_2->setObjectName(QString::fromUtf8("groupBox_2"));
        vboxLayout2 = new QVBoxLayout(groupBox_2);
        vboxLayout2->setSpacing(6);
        vboxLayout2->setObjectName(QString::fromUtf8("vboxLayout2"));
        vboxLayout2->setContentsMargins(9, 9, 9, 9);
        notesEdit = new QTextEdit(groupBox_2);
        notesEdit->setObjectName(QString::fromUtf8("notesEdit"));

        vboxLayout2->addWidget(notesEdit);


        vboxLayout->addWidget(groupBox_2);

        spacerItem1 = new QSpacerItem(440, 0, QSizePolicy::Minimum, QSizePolicy::Expanding);

        vboxLayout->addItem(spacerItem1);


        retranslateUi(ICQOtherInfoWidget);

        QMetaObject::connectSlotsByName(ICQOtherInfoWidget);
    } // setupUi

    void retranslateUi(QWidget *ICQOtherInfoWidget)
    {
        groupBox->setTitle(tr2i18n("Email Addresses", 0));
        addEmailButton->setText(tr2i18n("Add", 0));
        removeEmailButton->setText(tr2i18n("Remove", 0));
        upEmailButton->setText(tr2i18n("Up", 0));
        downEmailButton->setText(tr2i18n("Down", 0));
        sendInfoCheck->setText(tr2i18n("Send updates and ICQ promotional info to my primary email", 0));
        label->setText(tr2i18n("Non-published email will be used for password retrieval purposes.", 0));
        groupBox_2->setTitle(tr2i18n("Contact Notes", 0));
        Q_UNUSED(ICQOtherInfoWidget);
    } // retranslateUi

};

namespace Ui {
    class ICQOtherInfoWidget: public Ui_ICQOtherInfoWidget {};
} // namespace Ui

QT_END_NAMESPACE

#endif // ICQOTHERINFOWIDGET_H

