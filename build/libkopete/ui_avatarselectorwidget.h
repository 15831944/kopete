#include <kdialog.h>
#include <klocale.h>

/********************************************************************************
** Form generated from reading UI file 'avatarselectorwidget.ui'
**
** Created by: Qt User Interface Compiler version 4.8.7
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_AVATARSELECTORWIDGET_H
#define UI_AVATARSELECTORWIDGET_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtGui/QApplication>
#include <QtGui/QButtonGroup>
#include <QtGui/QGridLayout>
#include <QtGui/QHeaderView>
#include <QtGui/QListWidget>
#include <QtGui/QPushButton>
#include <QtGui/QSpacerItem>
#include <QtGui/QWidget>

QT_BEGIN_NAMESPACE

class Ui_AvatarSelectorWidget
{
public:
    QGridLayout *gridLayout;
    QListWidget *listUserAvatar;
    QSpacerItem *spacerItem;
    QPushButton *buttonAddAvatar;
    QPushButton *buttonRemoveAvatar;
    QPushButton *buttonFromWebcam;

    void setupUi(QWidget *AvatarSelectorWidget)
    {
        if (AvatarSelectorWidget->objectName().isEmpty())
            AvatarSelectorWidget->setObjectName(QString::fromUtf8("AvatarSelectorWidget"));
        AvatarSelectorWidget->resize(478, 331);
        AvatarSelectorWidget->setMinimumSize(QSize(400, 300));
        gridLayout = new QGridLayout(AvatarSelectorWidget);
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        listUserAvatar = new QListWidget(AvatarSelectorWidget);
        listUserAvatar->setObjectName(QString::fromUtf8("listUserAvatar"));
        listUserAvatar->setProperty("showDropIndicator", QVariant(false));
        listUserAvatar->setDragDropMode(QAbstractItemView::NoDragDrop);
        listUserAvatar->setAlternatingRowColors(false);
        listUserAvatar->setSelectionBehavior(QAbstractItemView::SelectRows);
        listUserAvatar->setIconSize(QSize(96, 96));
        listUserAvatar->setTextElideMode(Qt::ElideNone);
        listUserAvatar->setMovement(QListView::Static);
        listUserAvatar->setResizeMode(QListView::Adjust);
        listUserAvatar->setLayoutMode(QListView::Batched);
        listUserAvatar->setViewMode(QListView::IconMode);
        listUserAvatar->setUniformItemSizes(true);

        gridLayout->addWidget(listUserAvatar, 0, 0, 1, 4);

        spacerItem = new QSpacerItem(131, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        gridLayout->addItem(spacerItem, 1, 3, 1, 1);

        buttonAddAvatar = new QPushButton(AvatarSelectorWidget);
        buttonAddAvatar->setObjectName(QString::fromUtf8("buttonAddAvatar"));

        gridLayout->addWidget(buttonAddAvatar, 1, 0, 1, 1);

        buttonRemoveAvatar = new QPushButton(AvatarSelectorWidget);
        buttonRemoveAvatar->setObjectName(QString::fromUtf8("buttonRemoveAvatar"));

        gridLayout->addWidget(buttonRemoveAvatar, 1, 1, 1, 1);

        buttonFromWebcam = new QPushButton(AvatarSelectorWidget);
        buttonFromWebcam->setObjectName(QString::fromUtf8("buttonFromWebcam"));

        gridLayout->addWidget(buttonFromWebcam, 1, 2, 1, 1);


        retranslateUi(AvatarSelectorWidget);

        QMetaObject::connectSlotsByName(AvatarSelectorWidget);
    } // setupUi

    void retranslateUi(QWidget *AvatarSelectorWidget)
    {
        buttonAddAvatar->setText(tr2i18n("Add Avatar...", 0));
        buttonRemoveAvatar->setText(tr2i18n("Remove Avatar", 0));
        buttonFromWebcam->setText(tr2i18n("From Webcam", 0));
        Q_UNUSED(AvatarSelectorWidget);
    } // retranslateUi

};

namespace Ui {
    class AvatarSelectorWidget: public Ui_AvatarSelectorWidget {};
} // namespace Ui

QT_END_NAMESPACE

#endif // AVATARSELECTORWIDGET_H

