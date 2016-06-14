#include <kdialog.h>
#include <klocale.h>

/********************************************************************************
** Form generated from reading UI file 'oscarencodingselectionbase.ui'
**
** Created by: Qt User Interface Compiler version 4.8.7
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_OSCARENCODINGSELECTIONBASE_H
#define UI_OSCARENCODINGSELECTIONBASE_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtGui/QApplication>
#include <QtGui/QButtonGroup>
#include <QtGui/QComboBox>
#include <QtGui/QGridLayout>
#include <QtGui/QHeaderView>
#include <QtGui/QLabel>
#include <QtGui/QSpacerItem>
#include <QtGui/QWidget>

QT_BEGIN_NAMESPACE

class Ui_OscarEncodingBaseUI
{
public:
    QGridLayout *gridLayout;
    QLabel *textLabel2;
    QComboBox *encodingCombo;
    QSpacerItem *spacerItem;

    void setupUi(QWidget *OscarEncodingBaseUI)
    {
        if (OscarEncodingBaseUI->objectName().isEmpty())
            OscarEncodingBaseUI->setObjectName(QString::fromUtf8("OscarEncodingBaseUI"));
        OscarEncodingBaseUI->resize(290, 55);
        gridLayout = new QGridLayout(OscarEncodingBaseUI);
#ifndef UI_Q_OS_MAC
        gridLayout->setSpacing(6);
#endif
        gridLayout->setContentsMargins(0, 0, 0, 0);
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        textLabel2 = new QLabel(OscarEncodingBaseUI);
        textLabel2->setObjectName(QString::fromUtf8("textLabel2"));

        gridLayout->addWidget(textLabel2, 0, 0, 1, 1);

        encodingCombo = new QComboBox(OscarEncodingBaseUI);
        encodingCombo->setObjectName(QString::fromUtf8("encodingCombo"));

        gridLayout->addWidget(encodingCombo, 1, 0, 1, 1);

        spacerItem = new QSpacerItem(20, 0, QSizePolicy::Minimum, QSizePolicy::Maximum);

        gridLayout->addItem(spacerItem, 2, 0, 1, 1);

#ifndef UI_QT_NO_SHORTCUT
        textLabel2->setBuddy(encodingCombo);
#endif // QT_NO_SHORTCUT

        retranslateUi(OscarEncodingBaseUI);

        QMetaObject::connectSlotsByName(OscarEncodingBaseUI);
    } // setupUi

    void retranslateUi(QWidget *OscarEncodingBaseUI)
    {
        textLabel2->setText(tr2i18n("Use this &encoding when chatting with this contact:", 0));
        Q_UNUSED(OscarEncodingBaseUI);
    } // retranslateUi

};

namespace Ui {
    class OscarEncodingBaseUI: public Ui_OscarEncodingBaseUI {};
} // namespace Ui

QT_END_NAMESPACE

#endif // OSCARENCODINGSELECTIONBASE_H

