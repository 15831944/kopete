#include <kdialog.h>
#include <klocale.h>

/********************************************************************************
** Form generated from reading UI file 'kopetestatuseditwidget_base.ui'
**
** Created by: Qt User Interface Compiler version 4.8.7
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_KOPETESTATUSEDITWIDGET_BASE_H
#define UI_KOPETESTATUSEDITWIDGET_BASE_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtGui/QApplication>
#include <QtGui/QButtonGroup>
#include <QtGui/QFrame>
#include <QtGui/QHeaderView>
#include <QtGui/QLabel>
#include <QtGui/QTextEdit>
#include <QtGui/QVBoxLayout>
#include <QtGui/QWidget>
#include "kdialogbuttonbox.h"
#include "klineedit.h"

QT_BEGIN_NAMESPACE

class Ui_KopeteStatusEditWidget
{
public:
    QVBoxLayout *vboxLayout;
    QLabel *label;
    KLineEdit *statusTitle;
    QLabel *label_3;
    QTextEdit *statusMessage;
    QFrame *line;
    KDialogButtonBox *buttonBox;

    void setupUi(QWidget *KopeteStatusEditWidget)
    {
        if (KopeteStatusEditWidget->objectName().isEmpty())
            KopeteStatusEditWidget->setObjectName(QString::fromUtf8("KopeteStatusEditWidget"));
        KopeteStatusEditWidget->resize(328, 228);
        vboxLayout = new QVBoxLayout(KopeteStatusEditWidget);
        vboxLayout->setObjectName(QString::fromUtf8("vboxLayout"));
        label = new QLabel(KopeteStatusEditWidget);
        label->setObjectName(QString::fromUtf8("label"));

        vboxLayout->addWidget(label);

        statusTitle = new KLineEdit(KopeteStatusEditWidget);
        statusTitle->setObjectName(QString::fromUtf8("statusTitle"));

        vboxLayout->addWidget(statusTitle);

        label_3 = new QLabel(KopeteStatusEditWidget);
        label_3->setObjectName(QString::fromUtf8("label_3"));

        vboxLayout->addWidget(label_3);

        statusMessage = new QTextEdit(KopeteStatusEditWidget);
        statusMessage->setObjectName(QString::fromUtf8("statusMessage"));

        vboxLayout->addWidget(statusMessage);

        line = new QFrame(KopeteStatusEditWidget);
        line->setObjectName(QString::fromUtf8("line"));
        line->setFrameShape(QFrame::HLine);
        line->setFrameShadow(QFrame::Sunken);

        vboxLayout->addWidget(line);

        buttonBox = new KDialogButtonBox(KopeteStatusEditWidget);
        buttonBox->setObjectName(QString::fromUtf8("buttonBox"));
        buttonBox->setStandardButtons(QDialogButtonBox::Ok);

        vboxLayout->addWidget(buttonBox);

#ifndef UI_QT_NO_SHORTCUT
        label->setBuddy(statusTitle);
        label_3->setBuddy(statusMessage);
#endif // QT_NO_SHORTCUT

        retranslateUi(KopeteStatusEditWidget);

        QMetaObject::connectSlotsByName(KopeteStatusEditWidget);
    } // setupUi

    void retranslateUi(QWidget *KopeteStatusEditWidget)
    {
        label->setText(tr2i18n("Title:", 0));
        label_3->setText(tr2i18n("Message:", 0));
        Q_UNUSED(KopeteStatusEditWidget);
    } // retranslateUi

};

namespace Ui {
    class KopeteStatusEditWidget: public Ui_KopeteStatusEditWidget {};
} // namespace Ui

QT_END_NAMESPACE

#endif // KOPETESTATUSEDITWIDGET_BASE_H

