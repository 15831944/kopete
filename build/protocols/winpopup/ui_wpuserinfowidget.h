#include <kdialog.h>
#include <klocale.h>

/********************************************************************************
** Form generated from reading UI file 'wpuserinfowidget.ui'
**
** Created by: Qt User Interface Compiler version 4.8.7
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_WPUSERINFOWIDGET_H
#define UI_WPUSERINFOWIDGET_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtGui/QApplication>
#include <QtGui/QButtonGroup>
#include <QtGui/QGridLayout>
#include <QtGui/QHeaderView>
#include <QtGui/QLabel>
#include <QtGui/QSpacerItem>
#include <QtGui/QWidget>

QT_BEGIN_NAMESPACE

class Ui_WPUserInfoWidget
{
public:
    QGridLayout *gridLayout;
    QLabel *lblComputerName;
    QLabel *sComputerName;
    QLabel *textLabel2_2;
    QLabel *sComment;
    QLabel *textLabel2;
    QLabel *sWorkgroup;
    QLabel *textLabel3;
    QLabel *sOS;
    QLabel *textLabel1;
    QLabel *sServer;
    QSpacerItem *spacerItem;

    void setupUi(QWidget *WPUserInfoWidget)
    {
        if (WPUserInfoWidget->objectName().isEmpty())
            WPUserInfoWidget->setObjectName(QString::fromUtf8("WPUserInfoWidget"));
        WPUserInfoWidget->resize(278, 160);
        QSizePolicy sizePolicy(QSizePolicy::Expanding, QSizePolicy::Preferred);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(WPUserInfoWidget->sizePolicy().hasHeightForWidth());
        WPUserInfoWidget->setSizePolicy(sizePolicy);
        gridLayout = new QGridLayout(WPUserInfoWidget);
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        lblComputerName = new QLabel(WPUserInfoWidget);
        lblComputerName->setObjectName(QString::fromUtf8("lblComputerName"));

        gridLayout->addWidget(lblComputerName, 0, 0, 1, 1);

        sComputerName = new QLabel(WPUserInfoWidget);
        sComputerName->setObjectName(QString::fromUtf8("sComputerName"));
        sComputerName->setFrameShape(QFrame::StyledPanel);
        sComputerName->setFrameShadow(QFrame::Sunken);

        gridLayout->addWidget(sComputerName, 0, 1, 1, 1);

        textLabel2_2 = new QLabel(WPUserInfoWidget);
        textLabel2_2->setObjectName(QString::fromUtf8("textLabel2_2"));

        gridLayout->addWidget(textLabel2_2, 1, 0, 1, 1);

        sComment = new QLabel(WPUserInfoWidget);
        sComment->setObjectName(QString::fromUtf8("sComment"));
        sComment->setFrameShape(QFrame::StyledPanel);
        sComment->setFrameShadow(QFrame::Sunken);

        gridLayout->addWidget(sComment, 1, 1, 1, 1);

        textLabel2 = new QLabel(WPUserInfoWidget);
        textLabel2->setObjectName(QString::fromUtf8("textLabel2"));

        gridLayout->addWidget(textLabel2, 2, 0, 1, 1);

        sWorkgroup = new QLabel(WPUserInfoWidget);
        sWorkgroup->setObjectName(QString::fromUtf8("sWorkgroup"));
        sWorkgroup->setFrameShape(QFrame::StyledPanel);
        sWorkgroup->setFrameShadow(QFrame::Sunken);

        gridLayout->addWidget(sWorkgroup, 2, 1, 1, 1);

        textLabel3 = new QLabel(WPUserInfoWidget);
        textLabel3->setObjectName(QString::fromUtf8("textLabel3"));

        gridLayout->addWidget(textLabel3, 3, 0, 1, 1);

        sOS = new QLabel(WPUserInfoWidget);
        sOS->setObjectName(QString::fromUtf8("sOS"));
        sOS->setFrameShape(QFrame::StyledPanel);
        sOS->setFrameShadow(QFrame::Sunken);

        gridLayout->addWidget(sOS, 3, 1, 1, 1);

        textLabel1 = new QLabel(WPUserInfoWidget);
        textLabel1->setObjectName(QString::fromUtf8("textLabel1"));

        gridLayout->addWidget(textLabel1, 4, 0, 1, 1);

        sServer = new QLabel(WPUserInfoWidget);
        sServer->setObjectName(QString::fromUtf8("sServer"));
        sServer->setFrameShape(QFrame::StyledPanel);
        sServer->setFrameShadow(QFrame::Sunken);

        gridLayout->addWidget(sServer, 4, 1, 1, 1);

        spacerItem = new QSpacerItem(258, 16, QSizePolicy::Minimum, QSizePolicy::MinimumExpanding);

        gridLayout->addItem(spacerItem, 5, 0, 1, 2);

#ifndef UI_QT_NO_SHORTCUT
        lblComputerName->setBuddy(sComment);
        textLabel2->setBuddy(sComment);
        textLabel3->setBuddy(sComment);
        textLabel1->setBuddy(sComment);
#endif // QT_NO_SHORTCUT

        retranslateUi(WPUserInfoWidget);

        QMetaObject::connectSlotsByName(WPUserInfoWidget);
    } // setupUi

    void retranslateUi(QWidget *WPUserInfoWidget)
    {
#ifndef UI_QT_NO_TOOLTIP
        lblComputerName->setToolTip(tr2i18n("The host name of this contact's computer.", 0));
#endif // QT_NO_TOOLTIP
#ifndef UI_QT_NO_WHATSTHIS
        lblComputerName->setWhatsThis(tr2i18n("The host name of this contact's computer.", 0));
#endif // QT_NO_WHATSTHIS
        lblComputerName->setText(tr2i18n("&Computer name:", 0));
        sComputerName->setText(tr2i18n("Computer Name", 0));
        textLabel2_2->setText(tr2i18n("Comment:", 0));
        sComment->setText(tr2i18n("Looking", 0));
#ifndef UI_QT_NO_TOOLTIP
        textLabel2->setToolTip(tr2i18n("The workgroup or domain containing this contact's computer.", 0));
#endif // QT_NO_TOOLTIP
#ifndef UI_QT_NO_WHATSTHIS
        textLabel2->setWhatsThis(tr2i18n("The workgroup or domain containing this contact's computer.", 0));
#endif // QT_NO_WHATSTHIS
        textLabel2->setText(tr2i18n("&Workgroup/domain:", 0));
        sWorkgroup->setText(tr2i18n("Looking", 0));
#ifndef UI_QT_NO_TOOLTIP
        textLabel3->setToolTip(tr2i18n("The operating system running on this contact's computer.", 0));
#endif // QT_NO_TOOLTIP
#ifndef UI_QT_NO_WHATSTHIS
        textLabel3->setWhatsThis(tr2i18n("The operating system running on this contact's computer.", 0));
#endif // QT_NO_WHATSTHIS
        textLabel3->setText(tr2i18n("Operating s&ystem:", 0));
        sOS->setText(tr2i18n("Looking", 0));
#ifndef UI_QT_NO_TOOLTIP
        textLabel1->setToolTip(tr2i18n("The software running on this contact's computer.", 0));
#endif // QT_NO_TOOLTIP
#ifndef UI_QT_NO_WHATSTHIS
        textLabel1->setWhatsThis(tr2i18n("The software running on this contact's computer.", 0));
#endif // QT_NO_WHATSTHIS
        textLabel1->setText(tr2i18n("Ser&ver software:", 0));
        sServer->setText(tr2i18n("Looking", 0));
        Q_UNUSED(WPUserInfoWidget);
    } // retranslateUi

};

namespace Ui {
    class WPUserInfoWidget: public Ui_WPUserInfoWidget {};
} // namespace Ui

QT_END_NAMESPACE

#endif // WPUSERINFOWIDGET_H

