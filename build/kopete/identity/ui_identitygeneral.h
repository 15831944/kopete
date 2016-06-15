#include <kdialog.h>
#include <klocale.h>

/********************************************************************************
** Form generated from reading UI file 'identitygeneral.ui'
**
** Created by: Qt User Interface Compiler version 4.8.7
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_IDENTITYGENERAL_H
#define UI_IDENTITYGENERAL_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtGui/QApplication>
#include <QtGui/QButtonGroup>
#include <QtGui/QFormLayout>
#include <QtGui/QHBoxLayout>
#include <QtGui/QHeaderView>
#include <QtGui/QLabel>
#include <QtGui/QLineEdit>
#include <QtGui/QSpacerItem>
#include <QtGui/QToolButton>
#include <QtGui/QVBoxLayout>
#include <QtGui/QWidget>

QT_BEGIN_NAMESPACE

class Ui_IdentityGeneral
{
public:
    QHBoxLayout *horizontalLayout;
    QVBoxLayout *vboxLayout;
    QLabel *photo;
    QHBoxLayout *hboxLayout;
    QSpacerItem *spacerItem;
    QToolButton *selectPhoto;
    QToolButton *clearPhoto;
    QSpacerItem *spacerItem1;
    QFormLayout *formLayout;
    QLabel *labelLabel;
    QLineEdit *label;
    QLabel *nickNameLabel;
    QLineEdit *nickName;
    QLabel *firstNameLabel;
    QLineEdit *firstName;
    QLabel *lastNameLabel;
    QLineEdit *lastName;

    void setupUi(QWidget *IdentityGeneral)
    {
        if (IdentityGeneral->objectName().isEmpty())
            IdentityGeneral->setObjectName(QString::fromUtf8("IdentityGeneral"));
        IdentityGeneral->resize(485, 234);
        horizontalLayout = new QHBoxLayout(IdentityGeneral);
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        vboxLayout = new QVBoxLayout();
        vboxLayout->setObjectName(QString::fromUtf8("vboxLayout"));
        photo = new QLabel(IdentityGeneral);
        photo->setObjectName(QString::fromUtf8("photo"));
        photo->setMinimumSize(QSize(96, 96));
        photo->setMaximumSize(QSize(96, 96));
        photo->setFrameShape(QFrame::Box);
        photo->setFrameShadow(QFrame::Plain);
        photo->setTextFormat(Qt::RichText);
        photo->setAlignment(Qt::AlignCenter);

        vboxLayout->addWidget(photo);

        hboxLayout = new QHBoxLayout();
        hboxLayout->setSpacing(5);
        hboxLayout->setObjectName(QString::fromUtf8("hboxLayout"));
        spacerItem = new QSpacerItem(20, 20, QSizePolicy::Minimum, QSizePolicy::Minimum);

        hboxLayout->addItem(spacerItem);

        selectPhoto = new QToolButton(IdentityGeneral);
        selectPhoto->setObjectName(QString::fromUtf8("selectPhoto"));

        hboxLayout->addWidget(selectPhoto);

        clearPhoto = new QToolButton(IdentityGeneral);
        clearPhoto->setObjectName(QString::fromUtf8("clearPhoto"));

        hboxLayout->addWidget(clearPhoto);


        vboxLayout->addLayout(hboxLayout);


        horizontalLayout->addLayout(vboxLayout);

        spacerItem1 = new QSpacerItem(16, 130, QSizePolicy::Minimum, QSizePolicy::Minimum);

        horizontalLayout->addItem(spacerItem1);

        formLayout = new QFormLayout();
        formLayout->setObjectName(QString::fromUtf8("formLayout"));
        labelLabel = new QLabel(IdentityGeneral);
        labelLabel->setObjectName(QString::fromUtf8("labelLabel"));
        QSizePolicy sizePolicy(QSizePolicy::Fixed, QSizePolicy::Preferred);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(labelLabel->sizePolicy().hasHeightForWidth());
        labelLabel->setSizePolicy(sizePolicy);

        formLayout->setWidget(0, QFormLayout::LabelRole, labelLabel);

        label = new QLineEdit(IdentityGeneral);
        label->setObjectName(QString::fromUtf8("label"));

        formLayout->setWidget(0, QFormLayout::FieldRole, label);

        nickNameLabel = new QLabel(IdentityGeneral);
        nickNameLabel->setObjectName(QString::fromUtf8("nickNameLabel"));
        sizePolicy.setHeightForWidth(nickNameLabel->sizePolicy().hasHeightForWidth());
        nickNameLabel->setSizePolicy(sizePolicy);

        formLayout->setWidget(1, QFormLayout::LabelRole, nickNameLabel);

        nickName = new QLineEdit(IdentityGeneral);
        nickName->setObjectName(QString::fromUtf8("nickName"));

        formLayout->setWidget(1, QFormLayout::FieldRole, nickName);

        firstNameLabel = new QLabel(IdentityGeneral);
        firstNameLabel->setObjectName(QString::fromUtf8("firstNameLabel"));
        sizePolicy.setHeightForWidth(firstNameLabel->sizePolicy().hasHeightForWidth());
        firstNameLabel->setSizePolicy(sizePolicy);

        formLayout->setWidget(2, QFormLayout::LabelRole, firstNameLabel);

        firstName = new QLineEdit(IdentityGeneral);
        firstName->setObjectName(QString::fromUtf8("firstName"));

        formLayout->setWidget(2, QFormLayout::FieldRole, firstName);

        lastNameLabel = new QLabel(IdentityGeneral);
        lastNameLabel->setObjectName(QString::fromUtf8("lastNameLabel"));
        sizePolicy.setHeightForWidth(lastNameLabel->sizePolicy().hasHeightForWidth());
        lastNameLabel->setSizePolicy(sizePolicy);

        formLayout->setWidget(3, QFormLayout::LabelRole, lastNameLabel);

        lastName = new QLineEdit(IdentityGeneral);
        lastName->setObjectName(QString::fromUtf8("lastName"));

        formLayout->setWidget(3, QFormLayout::FieldRole, lastName);


        horizontalLayout->addLayout(formLayout);

#ifndef UI_QT_NO_SHORTCUT
        labelLabel->setBuddy(label);
        nickNameLabel->setBuddy(nickName);
        firstNameLabel->setBuddy(firstName);
        lastNameLabel->setBuddy(lastName);
#endif // QT_NO_SHORTCUT

        retranslateUi(IdentityGeneral);

        QMetaObject::connectSlotsByName(IdentityGeneral);
    } // setupUi

    void retranslateUi(QWidget *IdentityGeneral)
    {
        IdentityGeneral->setWindowTitle(tr2i18n("General Info", 0));
        photo->setText(tr2i18n("No Photo", 0));
#ifndef UI_QT_NO_TOOLTIP
        selectPhoto->setToolTip(tr2i18n("Select Photo", 0));
#endif // QT_NO_TOOLTIP
#ifndef UI_QT_NO_WHATSTHIS
        selectPhoto->setWhatsThis(QString());
#endif // QT_NO_WHATSTHIS
        selectPhoto->setText(QString());
#ifndef UI_QT_NO_TOOLTIP
        clearPhoto->setToolTip(tr2i18n("Clear Photo", 0));
#endif // QT_NO_TOOLTIP
#ifndef UI_QT_NO_STATUSTIP
        clearPhoto->setStatusTip(QString());
#endif // QT_NO_STATUSTIP
        clearPhoto->setText(QString());
        labelLabel->setText(tr2i18n("Show as:", 0));
        nickNameLabel->setText(tr2i18n("Nickname:", 0));
        firstNameLabel->setText(tr2i18n("First name:", 0));
        lastNameLabel->setText(tr2i18n("Last name:", 0));
    } // retranslateUi

};

namespace Ui {
    class IdentityGeneral: public Ui_IdentityGeneral {};
} // namespace Ui

QT_END_NAMESPACE

#endif // IDENTITYGENERAL_H

