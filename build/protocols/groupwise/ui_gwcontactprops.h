#include <kdialog.h>
#include <klocale.h>

/********************************************************************************
** Form generated from reading UI file 'gwcontactprops.ui'
**
** Created by: Qt User Interface Compiler version 4.8.7
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_GWCONTACTPROPS_H
#define UI_GWCONTACTPROPS_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtGui/QApplication>
#include <QtGui/QButtonGroup>
#include <QtGui/QFrame>
#include <QtGui/QGridLayout>
#include <QtGui/QHeaderView>
#include <QtGui/QLabel>
#include <QtGui/QLineEdit>
#include <QtGui/QTreeWidget>
#include <QtGui/QVBoxLayout>
#include <QtGui/QWidget>

QT_BEGIN_NAMESPACE

class Ui_GroupWiseContactProps
{
public:
    QVBoxLayout *vboxLayout;
    QLabel *userId;
    QFrame *line4;
    QGridLayout *gridLayout;
    QLineEdit *lastName;
    QLabel *textLabel14;
    QLineEdit *displayName;
    QLabel *status;
    QLabel *textLabel10;
    QLabel *lbldisplayName;
    QLineEdit *firstName;
    QLabel *textLabel11;
    QFrame *line1_2;
    QLabel *textLabel15;
    QTreeWidget *propsView;

    void setupUi(QWidget *GroupWiseContactProps)
    {
        if (GroupWiseContactProps->objectName().isEmpty())
            GroupWiseContactProps->setObjectName(QString::fromUtf8("GroupWiseContactProps"));
        GroupWiseContactProps->resize(309, 384);
        vboxLayout = new QVBoxLayout(GroupWiseContactProps);
        vboxLayout->setObjectName(QString::fromUtf8("vboxLayout"));
        userId = new QLabel(GroupWiseContactProps);
        userId->setObjectName(QString::fromUtf8("userId"));
        QSizePolicy sizePolicy(QSizePolicy::Preferred, QSizePolicy::Preferred);
        sizePolicy.setHorizontalStretch(3);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(userId->sizePolicy().hasHeightForWidth());
        userId->setSizePolicy(sizePolicy);
        userId->setWordWrap(false);

        vboxLayout->addWidget(userId);

        line4 = new QFrame(GroupWiseContactProps);
        line4->setObjectName(QString::fromUtf8("line4"));
        line4->setFrameShape(QFrame::HLine);
        line4->setFrameShadow(QFrame::Sunken);
        line4->setFrameShape(QFrame::HLine);

        vboxLayout->addWidget(line4);

        gridLayout = new QGridLayout();
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        gridLayout->setHorizontalSpacing(6);
        gridLayout->setVerticalSpacing(6);
        gridLayout->setContentsMargins(0, 0, 0, 0);
        lastName = new QLineEdit(GroupWiseContactProps);
        lastName->setObjectName(QString::fromUtf8("lastName"));
        lastName->setReadOnly(true);

        gridLayout->addWidget(lastName, 4, 1, 1, 1);

        textLabel14 = new QLabel(GroupWiseContactProps);
        textLabel14->setObjectName(QString::fromUtf8("textLabel14"));
        textLabel14->setWordWrap(false);

        gridLayout->addWidget(textLabel14, 0, 0, 1, 1);

        displayName = new QLineEdit(GroupWiseContactProps);
        displayName->setObjectName(QString::fromUtf8("displayName"));
        displayName->setReadOnly(false);

        gridLayout->addWidget(displayName, 2, 1, 1, 1);

        status = new QLabel(GroupWiseContactProps);
        status->setObjectName(QString::fromUtf8("status"));
        status->setWordWrap(false);

        gridLayout->addWidget(status, 0, 1, 2, 1);

        textLabel10 = new QLabel(GroupWiseContactProps);
        textLabel10->setObjectName(QString::fromUtf8("textLabel10"));
        textLabel10->setWordWrap(false);

        gridLayout->addWidget(textLabel10, 3, 0, 1, 1);

        lbldisplayName = new QLabel(GroupWiseContactProps);
        lbldisplayName->setObjectName(QString::fromUtf8("lbldisplayName"));
        lbldisplayName->setWordWrap(false);

        gridLayout->addWidget(lbldisplayName, 1, 0, 2, 1);

        firstName = new QLineEdit(GroupWiseContactProps);
        firstName->setObjectName(QString::fromUtf8("firstName"));
        firstName->setReadOnly(true);

        gridLayout->addWidget(firstName, 3, 1, 1, 1);

        textLabel11 = new QLabel(GroupWiseContactProps);
        textLabel11->setObjectName(QString::fromUtf8("textLabel11"));
        textLabel11->setWordWrap(false);

        gridLayout->addWidget(textLabel11, 4, 0, 1, 1);


        vboxLayout->addLayout(gridLayout);

        line1_2 = new QFrame(GroupWiseContactProps);
        line1_2->setObjectName(QString::fromUtf8("line1_2"));
        line1_2->setFrameShape(QFrame::HLine);
        line1_2->setFrameShadow(QFrame::Sunken);
        line1_2->setFrameShape(QFrame::HLine);

        vboxLayout->addWidget(line1_2);

        textLabel15 = new QLabel(GroupWiseContactProps);
        textLabel15->setObjectName(QString::fromUtf8("textLabel15"));
        textLabel15->setWordWrap(false);

        vboxLayout->addWidget(textLabel15);

        propsView = new QTreeWidget(GroupWiseContactProps);
        propsView->setObjectName(QString::fromUtf8("propsView"));
        propsView->setContextMenuPolicy(Qt::ActionsContextMenu);
        propsView->setIndentation(0);
        propsView->setRootIsDecorated(false);
        propsView->setAllColumnsShowFocus(true);

        vboxLayout->addWidget(propsView);

#ifndef UI_QT_NO_SHORTCUT
        lbldisplayName->setBuddy(displayName);
#endif // QT_NO_SHORTCUT
        QWidget::setTabOrder(displayName, firstName);
        QWidget::setTabOrder(firstName, lastName);

        retranslateUi(GroupWiseContactProps);

        QMetaObject::connectSlotsByName(GroupWiseContactProps);
    } // setupUi

    void retranslateUi(QWidget *GroupWiseContactProps)
    {
        userId->setText(tr2i18n("USER_ID", 0));
#ifndef UI_QT_NO_TOOLTIP
        lastName->setToolTip(tr2i18n("Change the display name used for this contact", 0));
#endif // QT_NO_TOOLTIP
        lastName->setText(QString());
        textLabel14->setText(tr2i18n("Status:", 0));
#ifndef UI_QT_NO_TOOLTIP
        displayName->setToolTip(tr2i18n("Change the display name used for this contact", 0));
#endif // QT_NO_TOOLTIP
        displayName->setText(QString());
        status->setText(tr2i18n("USER_STATUS", 0));
        textLabel10->setText(tr2i18n("First name:", 0));
        lbldisplayName->setText(tr2i18n("&Display name:", 0));
#ifndef UI_QT_NO_TOOLTIP
        firstName->setToolTip(tr2i18n("Change the display name used for this contact", 0));
#endif // QT_NO_TOOLTIP
        firstName->setText(QString());
        textLabel11->setText(tr2i18n("Last name:", 0));
        textLabel15->setText(tr2i18n("Additional properties:", 0));
        QTreeWidgetItem *___qtreewidgetitem = propsView->headerItem();
        ___qtreewidgetitem->setText(1, tr2i18n("New Column", 0));
        ___qtreewidgetitem->setText(0, tr2i18n("New Column", 0));
        Q_UNUSED(GroupWiseContactProps);
    } // retranslateUi

};

namespace Ui {
    class GroupWiseContactProps: public Ui_GroupWiseContactProps {};
} // namespace Ui

QT_END_NAMESPACE

#endif // GWCONTACTPROPS_H

