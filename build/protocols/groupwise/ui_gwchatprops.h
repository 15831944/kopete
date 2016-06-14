#include <kdialog.h>
#include <klocale.h>

/********************************************************************************
** Form generated from reading UI file 'gwchatprops.ui'
**
** Created by: Qt User Interface Compiler version 4.8.7
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_GWCHATPROPS_H
#define UI_GWCHATPROPS_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtGui/QApplication>
#include <QtGui/QButtonGroup>
#include <QtGui/QCheckBox>
#include <QtGui/QFrame>
#include <QtGui/QGridLayout>
#include <QtGui/QGroupBox>
#include <QtGui/QHBoxLayout>
#include <QtGui/QHeaderView>
#include <QtGui/QLabel>
#include <QtGui/QLineEdit>
#include <QtGui/QVBoxLayout>
#include <QtGui/QWidget>
#include "k3listbox.h"
#include "kpushbutton.h"

QT_BEGIN_NAMESPACE

class Ui_GroupWiseChatProps
{
public:
    QVBoxLayout *vboxLayout;
    QLabel *displayName;
    QGridLayout *gridLayout;
    QLineEdit *creator;
    QLabel *textLabel10_2;
    QLabel *lblTopic;
    QLineEdit *disclaimer;
    QLabel *m__2_2;
    QLineEdit *topic;
    QLineEdit *query;
    QLabel *textLabel11_2_2;
    QLabel *m__2_2_2;
    QLabel *lbl_displayName_2;
    QLineEdit *description;
    QLineEdit *maxUsers;
    QLabel *textLabel10;
    QLabel *textLabel11;
    QLineEdit *createdOn;
    QCheckBox *archive;
    QLineEdit *owner;
    QFrame *line4;
    QGroupBox *buttonGroup2;
    QHBoxLayout *hboxLayout;
    QCheckBox *chkRead;
    QCheckBox *chkWrite;
    QCheckBox *chkModify;
    QLabel *textLabel1;
    K3ListBox *acl;
    QHBoxLayout *hboxLayout1;
    KPushButton *addAcl;
    KPushButton *editAcl;
    KPushButton *deleteAcl;

    void setupUi(QWidget *GroupWiseChatProps)
    {
        if (GroupWiseChatProps->objectName().isEmpty())
            GroupWiseChatProps->setObjectName(QString::fromUtf8("GroupWiseChatProps"));
        GroupWiseChatProps->resize(493, 465);
        vboxLayout = new QVBoxLayout(GroupWiseChatProps);
        vboxLayout->setSpacing(6);
        vboxLayout->setObjectName(QString::fromUtf8("vboxLayout"));
        vboxLayout->setContentsMargins(11, 11, 11, 11);
        displayName = new QLabel(GroupWiseChatProps);
        displayName->setObjectName(QString::fromUtf8("displayName"));
        displayName->setWordWrap(false);

        vboxLayout->addWidget(displayName);

        gridLayout = new QGridLayout();
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        gridLayout->setHorizontalSpacing(6);
        gridLayout->setVerticalSpacing(6);
        gridLayout->setContentsMargins(0, 0, 0, 0);
        creator = new QLineEdit(GroupWiseChatProps);
        creator->setObjectName(QString::fromUtf8("creator"));
        creator->setReadOnly(true);

        gridLayout->addWidget(creator, 4, 1, 1, 1);

        textLabel10_2 = new QLabel(GroupWiseChatProps);
        textLabel10_2->setObjectName(QString::fromUtf8("textLabel10_2"));
        textLabel10_2->setWordWrap(false);

        gridLayout->addWidget(textLabel10_2, 2, 2, 1, 1);

        lblTopic = new QLabel(GroupWiseChatProps);
        lblTopic->setObjectName(QString::fromUtf8("lblTopic"));
        lblTopic->setWordWrap(false);

        gridLayout->addWidget(lblTopic, 1, 0, 1, 1);

        disclaimer = new QLineEdit(GroupWiseChatProps);
        disclaimer->setObjectName(QString::fromUtf8("disclaimer"));
        disclaimer->setReadOnly(false);

        gridLayout->addWidget(disclaimer, 1, 3, 1, 1);

        m__2_2 = new QLabel(GroupWiseChatProps);
        m__2_2->setObjectName(QString::fromUtf8("m__2_2"));
        m__2_2->setWordWrap(false);

        gridLayout->addWidget(m__2_2, 2, 0, 1, 1);

        topic = new QLineEdit(GroupWiseChatProps);
        topic->setObjectName(QString::fromUtf8("topic"));
        topic->setReadOnly(false);

        gridLayout->addWidget(topic, 1, 1, 1, 1);

        query = new QLineEdit(GroupWiseChatProps);
        query->setObjectName(QString::fromUtf8("query"));
        query->setReadOnly(true);

        gridLayout->addWidget(query, 2, 3, 1, 1);

        textLabel11_2_2 = new QLabel(GroupWiseChatProps);
        textLabel11_2_2->setObjectName(QString::fromUtf8("textLabel11_2_2"));
        textLabel11_2_2->setWordWrap(false);

        gridLayout->addWidget(textLabel11_2_2, 3, 2, 1, 1);

        m__2_2_2 = new QLabel(GroupWiseChatProps);
        m__2_2_2->setObjectName(QString::fromUtf8("m__2_2_2"));
        m__2_2_2->setWordWrap(false);

        gridLayout->addWidget(m__2_2_2, 3, 0, 1, 1);

        lbl_displayName_2 = new QLabel(GroupWiseChatProps);
        lbl_displayName_2->setObjectName(QString::fromUtf8("lbl_displayName_2"));
        lbl_displayName_2->setWordWrap(false);

        gridLayout->addWidget(lbl_displayName_2, 1, 2, 1, 1);

        description = new QLineEdit(GroupWiseChatProps);
        description->setObjectName(QString::fromUtf8("description"));
        description->setReadOnly(true);

        gridLayout->addWidget(description, 5, 1, 1, 1);

        maxUsers = new QLineEdit(GroupWiseChatProps);
        maxUsers->setObjectName(QString::fromUtf8("maxUsers"));
        maxUsers->setReadOnly(true);

        gridLayout->addWidget(maxUsers, 3, 3, 1, 1);

        textLabel10 = new QLabel(GroupWiseChatProps);
        textLabel10->setObjectName(QString::fromUtf8("textLabel10"));
        textLabel10->setWordWrap(false);

        gridLayout->addWidget(textLabel10, 4, 0, 1, 1);

        textLabel11 = new QLabel(GroupWiseChatProps);
        textLabel11->setObjectName(QString::fromUtf8("textLabel11"));
        textLabel11->setWordWrap(false);

        gridLayout->addWidget(textLabel11, 5, 0, 1, 1);

        createdOn = new QLineEdit(GroupWiseChatProps);
        createdOn->setObjectName(QString::fromUtf8("createdOn"));
        createdOn->setReadOnly(false);

        gridLayout->addWidget(createdOn, 3, 1, 1, 1);

        archive = new QCheckBox(GroupWiseChatProps);
        archive->setObjectName(QString::fromUtf8("archive"));
        QSizePolicy sizePolicy(QSizePolicy::Minimum, QSizePolicy::Fixed);
        sizePolicy.setHorizontalStretch(2);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(archive->sizePolicy().hasHeightForWidth());
        archive->setSizePolicy(sizePolicy);

        gridLayout->addWidget(archive, 4, 2, 1, 2);

        owner = new QLineEdit(GroupWiseChatProps);
        owner->setObjectName(QString::fromUtf8("owner"));
        owner->setReadOnly(false);

        gridLayout->addWidget(owner, 2, 1, 1, 1);

        line4 = new QFrame(GroupWiseChatProps);
        line4->setObjectName(QString::fromUtf8("line4"));
        line4->setFrameShape(QFrame::HLine);
        line4->setFrameShadow(QFrame::Sunken);
        line4->setFrameShape(QFrame::HLine);

        gridLayout->addWidget(line4, 0, 0, 1, 4);


        vboxLayout->addLayout(gridLayout);

        buttonGroup2 = new QGroupBox(GroupWiseChatProps);
        buttonGroup2->setObjectName(QString::fromUtf8("buttonGroup2"));
        hboxLayout = new QHBoxLayout(buttonGroup2);
        hboxLayout->setSpacing(6);
        hboxLayout->setObjectName(QString::fromUtf8("hboxLayout"));
        hboxLayout->setContentsMargins(0, 0, 0, 0);
        chkRead = new QCheckBox(buttonGroup2);
        chkRead->setObjectName(QString::fromUtf8("chkRead"));

        hboxLayout->addWidget(chkRead);

        chkWrite = new QCheckBox(buttonGroup2);
        chkWrite->setObjectName(QString::fromUtf8("chkWrite"));

        hboxLayout->addWidget(chkWrite);

        chkModify = new QCheckBox(buttonGroup2);
        chkModify->setObjectName(QString::fromUtf8("chkModify"));

        hboxLayout->addWidget(chkModify);


        vboxLayout->addWidget(buttonGroup2);

        textLabel1 = new QLabel(GroupWiseChatProps);
        textLabel1->setObjectName(QString::fromUtf8("textLabel1"));
        textLabel1->setWordWrap(false);

        vboxLayout->addWidget(textLabel1);

        acl = new K3ListBox(GroupWiseChatProps);
        acl->setObjectName(QString::fromUtf8("acl"));

        vboxLayout->addWidget(acl);

        hboxLayout1 = new QHBoxLayout();
        hboxLayout1->setSpacing(6);
        hboxLayout1->setObjectName(QString::fromUtf8("hboxLayout1"));
        hboxLayout1->setContentsMargins(0, 0, 0, 0);
        addAcl = new KPushButton(GroupWiseChatProps);
        addAcl->setObjectName(QString::fromUtf8("addAcl"));

        hboxLayout1->addWidget(addAcl);

        editAcl = new KPushButton(GroupWiseChatProps);
        editAcl->setObjectName(QString::fromUtf8("editAcl"));

        hboxLayout1->addWidget(editAcl);

        deleteAcl = new KPushButton(GroupWiseChatProps);
        deleteAcl->setObjectName(QString::fromUtf8("deleteAcl"));

        hboxLayout1->addWidget(deleteAcl);


        vboxLayout->addLayout(hboxLayout1);

#ifndef UI_QT_NO_SHORTCUT
        lblTopic->setBuddy(displayName);
#endif // QT_NO_SHORTCUT
        QWidget::setTabOrder(topic, disclaimer);
        QWidget::setTabOrder(disclaimer, owner);
        QWidget::setTabOrder(owner, query);
        QWidget::setTabOrder(query, createdOn);
        QWidget::setTabOrder(createdOn, maxUsers);
        QWidget::setTabOrder(maxUsers, creator);
        QWidget::setTabOrder(creator, archive);
        QWidget::setTabOrder(archive, description);
        QWidget::setTabOrder(description, chkRead);
        QWidget::setTabOrder(chkRead, chkWrite);
        QWidget::setTabOrder(chkWrite, chkModify);
        QWidget::setTabOrder(chkModify, acl);
        QWidget::setTabOrder(acl, addAcl);
        QWidget::setTabOrder(addAcl, editAcl);
        QWidget::setTabOrder(editAcl, deleteAcl);

        retranslateUi(GroupWiseChatProps);

        QMetaObject::connectSlotsByName(GroupWiseChatProps);
    } // setupUi

    void retranslateUi(QWidget *GroupWiseChatProps)
    {
        GroupWiseChatProps->setWindowTitle(tr2i18n("GroupWise Chat Properties", 0));
        displayName->setText(tr2i18n("DISPLAY NAME", 0));
#ifndef UI_QT_NO_TOOLTIP
        creator->setToolTip(tr2i18n("The user who created the chatroom", 0));
#endif // QT_NO_TOOLTIP
        creator->setText(QString());
        textLabel10_2->setText(tr2i18n("Query:", 0));
        lblTopic->setText(tr2i18n("Topic:", 0));
#ifndef UI_QT_NO_TOOLTIP
        disclaimer->setToolTip(tr2i18n("A disclaimer for users entering the chatroom", 0));
#endif // QT_NO_TOOLTIP
        disclaimer->setText(QString());
        m__2_2->setText(tr2i18n("Owner:", 0));
#ifndef UI_QT_NO_TOOLTIP
        topic->setToolTip(tr2i18n("The current topic of the discussion", 0));
#endif // QT_NO_TOOLTIP
        topic->setText(QString());
#ifndef UI_QT_NO_TOOLTIP
        query->setToolTip(tr2i18n("UNKNOWN", 0));
#endif // QT_NO_TOOLTIP
        query->setText(QString());
        textLabel11_2_2->setText(tr2i18n("Maximum users:", 0));
        m__2_2_2->setText(tr2i18n("Created on:", 0));
        lbl_displayName_2->setText(tr2i18n("Disclaimer:", 0));
#ifndef UI_QT_NO_TOOLTIP
        description->setToolTip(tr2i18n("General description of the chatroom", 0));
#endif // QT_NO_TOOLTIP
        description->setText(QString());
#ifndef UI_QT_NO_TOOLTIP
        maxUsers->setToolTip(tr2i18n("Maximum number of simultaneous users allowed in the chatroom", 0));
#endif // QT_NO_TOOLTIP
        maxUsers->setText(QString());
        textLabel10->setText(tr2i18n("Creator:", 0));
        textLabel11->setText(tr2i18n("Description:", 0));
#ifndef UI_QT_NO_TOOLTIP
        createdOn->setToolTip(tr2i18n("Date and time the chatroom was created", 0));
#endif // QT_NO_TOOLTIP
        createdOn->setText(QString());
#ifndef UI_QT_NO_TOOLTIP
        archive->setToolTip(tr2i18n("Indicates if the chatroom is being archived on the server", 0));
#endif // QT_NO_TOOLTIP
        archive->setText(tr2i18n("Archived", 0));
        archive->setShortcut(QString());
#ifndef UI_QT_NO_TOOLTIP
        owner->setToolTip(tr2i18n("The user who owns this chatroom", 0));
#endif // QT_NO_TOOLTIP
        owner->setText(QString());
        buttonGroup2->setTitle(tr2i18n("Default Access", 0));
#ifndef UI_QT_NO_TOOLTIP
        chkRead->setToolTip(tr2i18n("General permission to read messages in the chatroom", 0));
#endif // QT_NO_TOOLTIP
        chkRead->setText(tr2i18n("Read message", 0));
        chkRead->setShortcut(QString());
#ifndef UI_QT_NO_TOOLTIP
        chkWrite->setToolTip(tr2i18n("General permission to write messages in the chatroom", 0));
#endif // QT_NO_TOOLTIP
        chkWrite->setText(tr2i18n("Write message", 0));
        chkWrite->setShortcut(QString());
#ifndef UI_QT_NO_TOOLTIP
        chkModify->setToolTip(tr2i18n("General permission to modify the chatroom's access control list", 0));
#endif // QT_NO_TOOLTIP
        chkModify->setText(tr2i18n("Modify access", 0));
        chkModify->setShortcut(QString());
        textLabel1->setText(tr2i18n("Access Control List", 0));
#ifndef UI_QT_NO_TOOLTIP
        acl->setToolTip(tr2i18n("Access permissions for specific users", 0));
#endif // QT_NO_TOOLTIP
#ifndef UI_QT_NO_TOOLTIP
        addAcl->setToolTip(tr2i18n("Add a new ACL entry", 0));
#endif // QT_NO_TOOLTIP
#ifndef UI_QT_NO_TOOLTIP
        editAcl->setToolTip(tr2i18n("Edit an existing ACL entry", 0));
#endif // QT_NO_TOOLTIP
#ifndef UI_QT_NO_TOOLTIP
        deleteAcl->setToolTip(tr2i18n("Delete an ACL entry", 0));
#endif // QT_NO_TOOLTIP
    } // retranslateUi

};

namespace Ui {
    class GroupWiseChatProps: public Ui_GroupWiseChatProps {};
} // namespace Ui

QT_END_NAMESPACE

#endif // GWCHATPROPS_H

