#include <kdialog.h>
#include <klocale.h>

/********************************************************************************
** Form generated from reading UI file 'webpresenceprefs.ui'
**
** Created by: Qt User Interface Compiler version 4.8.7
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_WEBPRESENCEPREFS_H
#define UI_WEBPRESENCEPREFS_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtGui/QApplication>
#include <QtGui/QButtonGroup>
#include <QtGui/QCheckBox>
#include <QtGui/QGridLayout>
#include <QtGui/QGroupBox>
#include <QtGui/QHBoxLayout>
#include <QtGui/QHeaderView>
#include <QtGui/QLabel>
#include <QtGui/QLineEdit>
#include <QtGui/QRadioButton>
#include <QtGui/QSpacerItem>
#include <QtGui/QVBoxLayout>
#include <QtGui/QWidget>
#include "kurlrequester.h"

QT_BEGIN_NAMESPACE

class Ui_WebPresencePrefsUI
{
public:
    QVBoxLayout *vboxLayout;
    QGroupBox *groupBox;
    QHBoxLayout *hboxLayout;
    QLabel *textLabel1;
    KUrlRequester *kcfg_uploadURL;
    QGroupBox *formatHTML;
    QVBoxLayout *vboxLayout1;
    QRadioButton *kcfg_formatHTML;
    QRadioButton *kcfg_formatXHTML;
    QRadioButton *kcfg_formatXML;
    QRadioButton *kcfg_formatStylesheet;
    QHBoxLayout *hboxLayout1;
    QSpacerItem *spacerItem;
    KUrlRequester *kcfg_formatStylesheetURL;
    QCheckBox *kcfg_useImagesHTML;
    QGroupBox *groupBox_2;
    QGridLayout *gridLayout;
    QRadioButton *kcfg_showName;
    QCheckBox *kcfg_includeIMAddress;
    QRadioButton *kcfg_showAnotherName;
    QHBoxLayout *hboxLayout2;
    QSpacerItem *spacerItem1;
    QLineEdit *kcfg_showThisName;
    QSpacerItem *spacerItem2;

    void setupUi(QWidget *WebPresencePrefsUI)
    {
        if (WebPresencePrefsUI->objectName().isEmpty())
            WebPresencePrefsUI->setObjectName(QString::fromUtf8("WebPresencePrefsUI"));
        WebPresencePrefsUI->setEnabled(true);
        WebPresencePrefsUI->resize(404, 494);
        vboxLayout = new QVBoxLayout(WebPresencePrefsUI);
#ifndef UI_Q_OS_MAC
        vboxLayout->setSpacing(6);
#endif
        vboxLayout->setContentsMargins(0, 0, 0, 0);
        vboxLayout->setObjectName(QString::fromUtf8("vboxLayout"));
        groupBox = new QGroupBox(WebPresencePrefsUI);
        groupBox->setObjectName(QString::fromUtf8("groupBox"));
        hboxLayout = new QHBoxLayout(groupBox);
#ifndef UI_Q_OS_MAC
        hboxLayout->setSpacing(6);
#endif
#ifndef UI_Q_OS_MAC
        hboxLayout->setContentsMargins(9, 9, 9, 9);
#endif
        hboxLayout->setObjectName(QString::fromUtf8("hboxLayout"));
        textLabel1 = new QLabel(groupBox);
        textLabel1->setObjectName(QString::fromUtf8("textLabel1"));
        textLabel1->setFrameShape(QFrame::NoFrame);
        textLabel1->setFrameShadow(QFrame::Plain);

        hboxLayout->addWidget(textLabel1);

        kcfg_uploadURL = new KUrlRequester(groupBox);
        kcfg_uploadURL->setObjectName(QString::fromUtf8("kcfg_uploadURL"));

        hboxLayout->addWidget(kcfg_uploadURL);


        vboxLayout->addWidget(groupBox);

        formatHTML = new QGroupBox(WebPresencePrefsUI);
        formatHTML->setObjectName(QString::fromUtf8("formatHTML"));
        vboxLayout1 = new QVBoxLayout(formatHTML);
#ifndef UI_Q_OS_MAC
        vboxLayout1->setSpacing(6);
#endif
#ifndef UI_Q_OS_MAC
        vboxLayout1->setContentsMargins(9, 9, 9, 9);
#endif
        vboxLayout1->setObjectName(QString::fromUtf8("vboxLayout1"));
        kcfg_formatHTML = new QRadioButton(formatHTML);
        kcfg_formatHTML->setObjectName(QString::fromUtf8("kcfg_formatHTML"));
        kcfg_formatHTML->setChecked(true);

        vboxLayout1->addWidget(kcfg_formatHTML);

        kcfg_formatXHTML = new QRadioButton(formatHTML);
        kcfg_formatXHTML->setObjectName(QString::fromUtf8("kcfg_formatXHTML"));

        vboxLayout1->addWidget(kcfg_formatXHTML);

        kcfg_formatXML = new QRadioButton(formatHTML);
        kcfg_formatXML->setObjectName(QString::fromUtf8("kcfg_formatXML"));

        vboxLayout1->addWidget(kcfg_formatXML);

        kcfg_formatStylesheet = new QRadioButton(formatHTML);
        kcfg_formatStylesheet->setObjectName(QString::fromUtf8("kcfg_formatStylesheet"));

        vboxLayout1->addWidget(kcfg_formatStylesheet);

        hboxLayout1 = new QHBoxLayout();
#ifndef UI_Q_OS_MAC
        hboxLayout1->setSpacing(6);
#endif
        hboxLayout1->setContentsMargins(0, 0, 0, 0);
        hboxLayout1->setObjectName(QString::fromUtf8("hboxLayout1"));
        spacerItem = new QSpacerItem(30, 20, QSizePolicy::Fixed, QSizePolicy::Minimum);

        hboxLayout1->addItem(spacerItem);

        kcfg_formatStylesheetURL = new KUrlRequester(formatHTML);
        kcfg_formatStylesheetURL->setObjectName(QString::fromUtf8("kcfg_formatStylesheetURL"));
        kcfg_formatStylesheetURL->setEnabled(false);

        hboxLayout1->addWidget(kcfg_formatStylesheetURL);


        vboxLayout1->addLayout(hboxLayout1);

        kcfg_useImagesHTML = new QCheckBox(formatHTML);
        kcfg_useImagesHTML->setObjectName(QString::fromUtf8("kcfg_useImagesHTML"));

        vboxLayout1->addWidget(kcfg_useImagesHTML);


        vboxLayout->addWidget(formatHTML);

        groupBox_2 = new QGroupBox(WebPresencePrefsUI);
        groupBox_2->setObjectName(QString::fromUtf8("groupBox_2"));
        gridLayout = new QGridLayout(groupBox_2);
#ifndef UI_Q_OS_MAC
        gridLayout->setSpacing(6);
#endif
#ifndef UI_Q_OS_MAC
        gridLayout->setContentsMargins(9, 9, 9, 9);
#endif
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        kcfg_showName = new QRadioButton(groupBox_2);
        kcfg_showName->setObjectName(QString::fromUtf8("kcfg_showName"));
        kcfg_showName->setChecked(true);

        gridLayout->addWidget(kcfg_showName, 0, 0, 1, 1);

        kcfg_includeIMAddress = new QCheckBox(groupBox_2);
        kcfg_includeIMAddress->setObjectName(QString::fromUtf8("kcfg_includeIMAddress"));

        gridLayout->addWidget(kcfg_includeIMAddress, 3, 0, 1, 1);

        kcfg_showAnotherName = new QRadioButton(groupBox_2);
        kcfg_showAnotherName->setObjectName(QString::fromUtf8("kcfg_showAnotherName"));

        gridLayout->addWidget(kcfg_showAnotherName, 1, 0, 1, 1);

        hboxLayout2 = new QHBoxLayout();
#ifndef UI_Q_OS_MAC
        hboxLayout2->setSpacing(6);
#endif
        hboxLayout2->setContentsMargins(0, 0, 0, 0);
        hboxLayout2->setObjectName(QString::fromUtf8("hboxLayout2"));
        spacerItem1 = new QSpacerItem(30, 20, QSizePolicy::Fixed, QSizePolicy::Minimum);

        hboxLayout2->addItem(spacerItem1);

        kcfg_showThisName = new QLineEdit(groupBox_2);
        kcfg_showThisName->setObjectName(QString::fromUtf8("kcfg_showThisName"));
        kcfg_showThisName->setEnabled(false);

        hboxLayout2->addWidget(kcfg_showThisName);


        gridLayout->addLayout(hboxLayout2, 2, 0, 1, 1);


        vboxLayout->addWidget(groupBox_2);

        spacerItem2 = new QSpacerItem(404, 16, QSizePolicy::Minimum, QSizePolicy::Expanding);

        vboxLayout->addItem(spacerItem2);

#ifndef UI_QT_NO_SHORTCUT
        textLabel1->setBuddy(kcfg_uploadURL);
#endif // QT_NO_SHORTCUT
        QWidget::setTabOrder(kcfg_uploadURL, formatHTML);
        QWidget::setTabOrder(formatHTML, kcfg_formatStylesheetURL);
        QWidget::setTabOrder(kcfg_formatStylesheetURL, kcfg_useImagesHTML);
        QWidget::setTabOrder(kcfg_useImagesHTML, kcfg_showName);
        QWidget::setTabOrder(kcfg_showName, kcfg_showThisName);
        QWidget::setTabOrder(kcfg_showThisName, kcfg_includeIMAddress);

        retranslateUi(WebPresencePrefsUI);
        QObject::connect(kcfg_formatStylesheet, SIGNAL(toggled(bool)), kcfg_formatStylesheetURL, SLOT(setEnabled(bool)));
        QObject::connect(kcfg_showAnotherName, SIGNAL(toggled(bool)), kcfg_showThisName, SLOT(setEnabled(bool)));

        QMetaObject::connectSlotsByName(WebPresencePrefsUI);
    } // setupUi

    void retranslateUi(QWidget *WebPresencePrefsUI)
    {
        groupBox->setTitle(tr2i18n("Uploading", 0));
        textLabel1->setText(tr2i18n("Uplo&ad to:", 0));
        formatHTML->setTitle(tr2i18n("Formatting", 0));
#ifndef UI_QT_NO_TOOLTIP
        kcfg_formatHTML->setToolTip(tr2i18n("HTML 4.01 Transitional using the ISO-8859-1 (aka. Latin 1) character set encoding.", 0));
#endif // QT_NO_TOOLTIP
#ifndef UI_QT_NO_WHATSTHIS
        kcfg_formatHTML->setWhatsThis(tr2i18n("HTML 4.01 Transitional formatting using ISO-8859-1 (aka. Latin 1) character set encoding.\n"
"\n"
"This version should be easily opened by most web browsers.", 0));
#endif // QT_NO_WHATSTHIS
        kcfg_formatHTML->setText(tr2i18n("HTML (simple loo&k)", 0));
#ifndef UI_QT_NO_TOOLTIP
        kcfg_formatXHTML->setToolTip(tr2i18n("XHTML 1.0 Strict", 0));
#endif // QT_NO_TOOLTIP
#ifndef UI_QT_NO_WHATSTHIS
        kcfg_formatXHTML->setWhatsThis(tr2i18n("The resulting page will be formatted using the XHTML 1.0 Strict W3C Recommendation. The character set encoding is UTF-8.\n"
"\n"
"Note that some web browsers do not support XHTML. You should also make sure your web server serves it out with the correct mime type, such as application/xhtml+xml.", 0));
#endif // QT_NO_WHATSTHIS
        kcfg_formatXHTML->setText(tr2i18n("XHTML (simple look)", 0));
#ifndef UI_QT_NO_TOOLTIP
        kcfg_formatXML->setToolTip(tr2i18n("Save the output in XML format using UTF-8 character set.", 0));
#endif // QT_NO_TOOLTIP
#ifndef UI_QT_NO_WHATSTHIS
        kcfg_formatXML->setWhatsThis(tr2i18n("Save the output in XML format using the UTF-8 encoding.", 0));
#endif // QT_NO_WHATSTHIS
        kcfg_formatXML->setText(tr2i18n("&XML", 0));
        kcfg_formatStylesheet->setText(tr2i18n("XML transformation &using this XSLT sheet:", 0));
#ifndef UI_QT_NO_TOOLTIP
        kcfg_useImagesHTML->setToolTip(tr2i18n("Replaces the protocol names, such as MSN and IRC, with images.", 0));
#endif // QT_NO_TOOLTIP
#ifndef UI_QT_NO_WHATSTHIS
        kcfg_useImagesHTML->setWhatsThis(tr2i18n("Replaces the protocol names, such as MSN and IRC, with images.\n"
"\n"
"Note that you have to manually copy the PNG files into place.\n"
"\n"
"The following files are used by default:\n"
"\n"
"images/msn_protocol.png\n"
"images/icq_protocol.png\n"
"images/jabber_protocol.png\n"
"images/yahoo_protocol.png\n"
"images/aim_protocol.png\n"
"images/irc_protocol.png\n"
"images/sms_protocol.png\n"
"images/gadu_protocol.png\n"
"images/winpopup_protocol.png", 0));
#endif // QT_NO_WHATSTHIS
        kcfg_useImagesHTML->setText(tr2i18n("Repla&ce protocol text with images in (X)HTML", 0));
        groupBox_2->setTitle(tr2i18n("Display Name", 0));
        kcfg_showName->setText(tr2i18n("Use one of &your IM names", 0));
        kcfg_includeIMAddress->setText(tr2i18n("Include &IM addresses", 0));
        kcfg_showAnotherName->setText(tr2i18n("Use another &name:", 0));
        Q_UNUSED(WebPresencePrefsUI);
    } // retranslateUi

};

namespace Ui {
    class WebPresencePrefsUI: public Ui_WebPresencePrefsUI {};
} // namespace Ui

QT_END_NAMESPACE

#endif // WEBPRESENCEPREFS_H

