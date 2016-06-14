#include <kdialog.h>
#include <klocale.h>

/********************************************************************************
** Form generated from reading UI file 'dlgxmppconsole.ui'
**
** Created by: Qt User Interface Compiler version 4.8.7
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_DLGXMPPCONSOLE_H
#define UI_DLGXMPPCONSOLE_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtGui/QApplication>
#include <QtGui/QButtonGroup>
#include <QtGui/QHeaderView>
#include <QtGui/QVBoxLayout>
#include <QtGui/QWidget>
#include "ktextbrowser.h"
#include "ktextedit.h"

QT_BEGIN_NAMESPACE

class Ui_dlgXMPPConsole
{
public:
    QVBoxLayout *vboxLayout;
    KTextBrowser *brLog;
    KTextEdit *mTextEdit;

    void setupUi(QWidget *dlgXMPPConsole)
    {
        if (dlgXMPPConsole->objectName().isEmpty())
            dlgXMPPConsole->setObjectName(QString::fromUtf8("dlgXMPPConsole"));
        dlgXMPPConsole->resize(522, 352);
        vboxLayout = new QVBoxLayout(dlgXMPPConsole);
        vboxLayout->setObjectName(QString::fromUtf8("vboxLayout"));
        brLog = new KTextBrowser(dlgXMPPConsole);
        brLog->setObjectName(QString::fromUtf8("brLog"));

        vboxLayout->addWidget(brLog);

        mTextEdit = new KTextEdit(dlgXMPPConsole);
        mTextEdit->setObjectName(QString::fromUtf8("mTextEdit"));
        mTextEdit->setMaximumSize(QSize(16777215, 100));
        mTextEdit->setAcceptRichText(false);

        vboxLayout->addWidget(mTextEdit);


        retranslateUi(dlgXMPPConsole);

        QMetaObject::connectSlotsByName(dlgXMPPConsole);
    } // setupUi

    void retranslateUi(QWidget *dlgXMPPConsole)
    {
        Q_UNUSED(dlgXMPPConsole);
    } // retranslateUi

};

namespace Ui {
    class dlgXMPPConsole: public Ui_dlgXMPPConsole {};
} // namespace Ui

QT_END_NAMESPACE

#endif // DLGXMPPCONSOLE_H

