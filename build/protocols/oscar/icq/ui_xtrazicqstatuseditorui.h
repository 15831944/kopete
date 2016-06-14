#include <kdialog.h>
#include <klocale.h>

/********************************************************************************
** Form generated from reading UI file 'xtrazicqstatuseditorui.ui'
**
** Created by: Qt User Interface Compiler version 4.8.7
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_XTRAZICQSTATUSEDITORUI_H
#define UI_XTRAZICQSTATUSEDITORUI_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtGui/QApplication>
#include <QtGui/QButtonGroup>
#include <QtGui/QGridLayout>
#include <QtGui/QHeaderView>
#include <QtGui/QPushButton>
#include <QtGui/QSpacerItem>
#include <QtGui/QTableView>
#include <QtGui/QWidget>

QT_BEGIN_NAMESPACE

class Ui_XtrazICQStatusEditorUI
{
public:
    QGridLayout *gridLayout;
    QPushButton *buttonAdd;
    QPushButton *buttonDelete;
    QSpacerItem *spacerItem;
    QPushButton *buttonUp;
    QPushButton *buttonDown;
    QTableView *statusView;

    void setupUi(QWidget *XtrazICQStatusEditorUI)
    {
        if (XtrazICQStatusEditorUI->objectName().isEmpty())
            XtrazICQStatusEditorUI->setObjectName(QString::fromUtf8("XtrazICQStatusEditorUI"));
        XtrazICQStatusEditorUI->resize(431, 196);
        gridLayout = new QGridLayout(XtrazICQStatusEditorUI);
#ifndef UI_Q_OS_MAC
        gridLayout->setSpacing(6);
#endif
        gridLayout->setContentsMargins(0, 0, 0, 0);
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        buttonAdd = new QPushButton(XtrazICQStatusEditorUI);
        buttonAdd->setObjectName(QString::fromUtf8("buttonAdd"));

        gridLayout->addWidget(buttonAdd, 3, 1, 1, 1);

        buttonDelete = new QPushButton(XtrazICQStatusEditorUI);
        buttonDelete->setObjectName(QString::fromUtf8("buttonDelete"));

        gridLayout->addWidget(buttonDelete, 4, 1, 1, 1);

        spacerItem = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        gridLayout->addItem(spacerItem, 2, 1, 1, 1);

        buttonUp = new QPushButton(XtrazICQStatusEditorUI);
        buttonUp->setObjectName(QString::fromUtf8("buttonUp"));

        gridLayout->addWidget(buttonUp, 0, 1, 1, 1);

        buttonDown = new QPushButton(XtrazICQStatusEditorUI);
        buttonDown->setObjectName(QString::fromUtf8("buttonDown"));

        gridLayout->addWidget(buttonDown, 1, 1, 1, 1);

        statusView = new QTableView(XtrazICQStatusEditorUI);
        statusView->setObjectName(QString::fromUtf8("statusView"));

        gridLayout->addWidget(statusView, 0, 0, 5, 1);

        QWidget::setTabOrder(statusView, buttonUp);
        QWidget::setTabOrder(buttonUp, buttonDown);
        QWidget::setTabOrder(buttonDown, buttonAdd);
        QWidget::setTabOrder(buttonAdd, buttonDelete);

        retranslateUi(XtrazICQStatusEditorUI);

        QMetaObject::connectSlotsByName(XtrazICQStatusEditorUI);
    } // setupUi

    void retranslateUi(QWidget *XtrazICQStatusEditorUI)
    {
        buttonAdd->setText(tr2i18n("Add", 0));
        buttonDelete->setText(tr2i18n("Delete", 0));
        buttonUp->setText(tr2i18n("Up", 0));
        buttonDown->setText(tr2i18n("Down", 0));
        Q_UNUSED(XtrazICQStatusEditorUI);
    } // retranslateUi

};

namespace Ui {
    class XtrazICQStatusEditorUI: public Ui_XtrazICQStatusEditorUI {};
} // namespace Ui

QT_END_NAMESPACE

#endif // XTRAZICQSTATUSEDITORUI_H

