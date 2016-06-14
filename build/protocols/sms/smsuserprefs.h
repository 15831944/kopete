#include <kdialog.h>
#include <klocale.h>

#ifndef UI_SMSUSERPREFSUI_H
#define UI_SMSUSERPREFSUI_H

#include <qvariant.h>


#include <Qt3Support/Q3MimeSourceFactory>
#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtGui/QApplication>
#include <QtGui/QButtonGroup>
#include <QtGui/QFrame>
#include <QtGui/QHBoxLayout>
#include <QtGui/QHeaderView>
#include <QtGui/QLabel>
#include <QtGui/QSpacerItem>
#include <QtGui/QVBoxLayout>
#include <QtGui/QWidget>
#include "klineedit.h"

QT_BEGIN_NAMESPACE

class Ui_SMSUserPrefsUI
{
public:
    QVBoxLayout *vboxLayout;
    QLabel *title;
    QFrame *line10;
    QHBoxLayout *hboxLayout;
    QLabel *textLabel3;
    KLineEdit *telNumber;
    QSpacerItem *spacer11;

    void setupUi(QWidget *SMSUserPrefsUI)
    {
        if (SMSUserPrefsUI->objectName().isEmpty())
            SMSUserPrefsUI->setObjectName(QString::fromUtf8("SMSUserPrefsUI"));
        SMSUserPrefsUI->resize(252, 144);
        QSizePolicy sizePolicy(static_cast<QSizePolicy::Policy>(5), static_cast<QSizePolicy::Policy>(5));
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(SMSUserPrefsUI->sizePolicy().hasHeightForWidth());
        SMSUserPrefsUI->setSizePolicy(sizePolicy);
        vboxLayout = new QVBoxLayout(SMSUserPrefsUI);
        vboxLayout->setContentsMargins(0, 0, 0, 0);
        vboxLayout->setObjectName(QString::fromUtf8("vboxLayout"));
        title = new QLabel(SMSUserPrefsUI);
        title->setObjectName(QString::fromUtf8("title"));
        QFont font;
        font.setBold(true);
        title->setFont(font);
        title->setWordWrap(false);

        vboxLayout->addWidget(title);

        line10 = new QFrame(SMSUserPrefsUI);
        line10->setObjectName(QString::fromUtf8("line10"));
        line10->setFrameShape(QFrame::HLine);
        line10->setFrameShadow(QFrame::Sunken);

        vboxLayout->addWidget(line10);

        hboxLayout = new QHBoxLayout();
        hboxLayout->setObjectName(QString::fromUtf8("hboxLayout"));
        textLabel3 = new QLabel(SMSUserPrefsUI);
        textLabel3->setObjectName(QString::fromUtf8("textLabel3"));
        textLabel3->setWordWrap(false);

        hboxLayout->addWidget(textLabel3);

        telNumber = new KLineEdit(SMSUserPrefsUI);
        telNumber->setObjectName(QString::fromUtf8("telNumber"));

        hboxLayout->addWidget(telNumber);


        vboxLayout->addLayout(hboxLayout);

        spacer11 = new QSpacerItem(20, 40, QSizePolicy::Expanding, QSizePolicy::Minimum);

        vboxLayout->addItem(spacer11);

#ifndef UI_QT_NO_SHORTCUT
        textLabel3->setBuddy(telNumber);
#endif // QT_NO_SHORTCUT

        retranslateUi(SMSUserPrefsUI);

        QMetaObject::connectSlotsByName(SMSUserPrefsUI);
    } // setupUi

    void retranslateUi(QWidget *SMSUserPrefsUI)
    {
        title->setText(tr2i18n("Some One", 0));
        textLabel3->setText(tr2i18n("&Telephone number:", 0));
#ifndef UI_QT_NO_TOOLTIP
        textLabel3->setProperty("toolTip", QVariant(tr2i18n("The telephone number of the contact.", 0)));
#endif // QT_NO_TOOLTIP
#ifndef UI_QT_NO_WHATSTHIS
        textLabel3->setProperty("whatsThis", QVariant(tr2i18n("The telephone number of the contact.  This should be a number with SMS service available.", 0)));
#endif // QT_NO_WHATSTHIS
#ifndef UI_QT_NO_TOOLTIP
        telNumber->setProperty("toolTip", QVariant(tr2i18n("The telephone number of the contact.", 0)));
#endif // QT_NO_TOOLTIP
#ifndef UI_QT_NO_WHATSTHIS
        telNumber->setProperty("whatsThis", QVariant(tr2i18n("The telephone number of the contact.  This should be a number with SMS service available.", 0)));
#endif // QT_NO_WHATSTHIS
        Q_UNUSED(SMSUserPrefsUI);
    } // retranslateUi

};

namespace Ui {
    class SMSUserPrefsUI: public Ui_SMSUserPrefsUI {};
} // namespace Ui

QT_END_NAMESPACE

class SMSUserPrefsUI : public QWidget, public Ui::SMSUserPrefsUI
{
    Q_OBJECT

public:
    SMSUserPrefsUI(QWidget* parent = 0, const char* name = 0, Qt::WindowFlags fl = 0);
    ~SMSUserPrefsUI();

protected slots:
    virtual void languageChange();

};

#endif // SMSUSERPREFSUI_H

