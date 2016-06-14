#include <kdialog.h>
#include <klocale.h>

/********************************************************************************
** Form generated from reading UI file 'bonjouraddui.ui'
**
** Created by: Qt User Interface Compiler version 4.8.7
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_BONJOURADDUI_H
#define UI_BONJOURADDUI_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtGui/QApplication>
#include <QtGui/QButtonGroup>
#include <QtGui/QHBoxLayout>
#include <QtGui/QHeaderView>
#include <QtGui/QLabel>
#include <QtGui/QVBoxLayout>
#include <QtGui/QWidget>

QT_BEGIN_NAMESPACE

class Ui_BonjourAddUI
{
public:
    QVBoxLayout *vboxLayout;
    QHBoxLayout *hboxLayout;
    QLabel *label;

    void setupUi(QWidget *BonjourAddUI)
    {
        if (BonjourAddUI->objectName().isEmpty())
            BonjourAddUI->setObjectName(QString::fromUtf8("BonjourAddUI"));
        BonjourAddUI->resize(591, 149);
        vboxLayout = new QVBoxLayout(BonjourAddUI);
        vboxLayout->setObjectName(QString::fromUtf8("vboxLayout"));
        hboxLayout = new QHBoxLayout();
#ifndef UI_Q_OS_MAC
        hboxLayout->setSpacing(6);
#endif
#ifndef UI_Q_OS_MAC
        hboxLayout->setContentsMargins(0, 0, 0, 0);
#endif
        hboxLayout->setObjectName(QString::fromUtf8("hboxLayout"));
        label = new QLabel(BonjourAddUI);
        label->setObjectName(QString::fromUtf8("label"));

        hboxLayout->addWidget(label);


        vboxLayout->addLayout(hboxLayout);


        retranslateUi(BonjourAddUI);

        QMetaObject::connectSlotsByName(BonjourAddUI);
    } // setupUi

    void retranslateUi(QWidget *BonjourAddUI)
    {
        label->setText(tr2i18n("<!DOCTYPE HTML PUBLIC \"-//W3C//DTD HTML 4.0//EN\" \"http://www.w3.org/TR/REC-html40/strict.dtd\">\n"
"<html><head><meta name=\"qrichtext\" content=\"1\" /><style type=\"text/css\">\n"
"p, li { white-space: pre-wrap; }\n"
"</style></head><body style=\" font-family:'Sans Serif'; font-size:10pt; font-weight:400; font-style:normal;\">\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px; font-size:9pt;\">The Bonjour protocol does not allow you to add contacts. </p>\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px; font-size:9pt;\">Contacts will appear as they come online.</p>\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px; font-size:9pt;\">If you expect to see a contact, but they are not appearing</p>\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-inde"
                        "nt:0; text-indent:0px; font-size:9pt;\">1) Please ensure that your local mDNS server (avahi-daemon) is running properly.</p>\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px; font-size:9pt;\">2) Run \"<span style=\" font-style:italic;\">avahi-browse _presence._tcp -t\"</span> in konsole and ensure you see the contact there.</p>\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px; font-size:9pt;\">3) Ensure that ports 5353/UDP and 5298/TCP are open in your firewall</p></body></html>", 0));
        Q_UNUSED(BonjourAddUI);
    } // retranslateUi

};

namespace Ui {
    class BonjourAddUI: public Ui_BonjourAddUI {};
} // namespace Ui

QT_END_NAMESPACE

#endif // BONJOURADDUI_H

