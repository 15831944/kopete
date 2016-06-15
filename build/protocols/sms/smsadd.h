#include <kdialog.h>
#include <klocale.h>

#ifndef UI_SMSADDUI_H
#define UI_SMSADDUI_H

#include <qvariant.h>


#include <Qt3Support/Q3MimeSourceFactory>
#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtGui/QApplication>
#include <QtGui/QButtonGroup>
#include <QtGui/QHBoxLayout>
#include <QtGui/QHeaderView>
#include <QtGui/QLabel>
#include <QtGui/QLineEdit>
#include <QtGui/QSpacerItem>
#include <QtGui/QVBoxLayout>
#include <QtGui/QWidget>

QT_BEGIN_NAMESPACE

class Ui_smsAddUI
{
public:
    QVBoxLayout *vboxLayout;
    QHBoxLayout *hboxLayout;
    QVBoxLayout *vboxLayout1;
    QLabel *textLabel1;
    QLabel *textLabel1_2;
    QVBoxLayout *vboxLayout2;
    QLineEdit *addNr;
    QLineEdit *addName;
    QSpacerItem *spacer9;

    void setupUi(QWidget *smsAddUI)
    {
        if (smsAddUI->objectName().isEmpty())
            smsAddUI->setObjectName(QString::fromUtf8("smsAddUI"));
        smsAddUI->resize(397, 347);
        QSizePolicy sizePolicy(static_cast<QSizePolicy::Policy>(5), static_cast<QSizePolicy::Policy>(5));
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(smsAddUI->sizePolicy().hasHeightForWidth());
        smsAddUI->setSizePolicy(sizePolicy);
        vboxLayout = new QVBoxLayout(smsAddUI);
#ifndef UI_Q_OS_MAC
        vboxLayout->setSpacing(6);
#endif
        vboxLayout->setContentsMargins(0, 0, 0, 0);
        vboxLayout->setObjectName(QString::fromUtf8("vboxLayout"));
        hboxLayout = new QHBoxLayout();
        hboxLayout->setObjectName(QString::fromUtf8("hboxLayout"));
        vboxLayout1 = new QVBoxLayout();
        vboxLayout1->setObjectName(QString::fromUtf8("vboxLayout1"));
        textLabel1 = new QLabel(smsAddUI);
        textLabel1->setObjectName(QString::fromUtf8("textLabel1"));
        textLabel1->setWordWrap(false);

        vboxLayout1->addWidget(textLabel1);

        textLabel1_2 = new QLabel(smsAddUI);
        textLabel1_2->setObjectName(QString::fromUtf8("textLabel1_2"));
        textLabel1_2->setWordWrap(false);

        vboxLayout1->addWidget(textLabel1_2);


        hboxLayout->addLayout(vboxLayout1);

        vboxLayout2 = new QVBoxLayout();
        vboxLayout2->setObjectName(QString::fromUtf8("vboxLayout2"));
        addNr = new QLineEdit(smsAddUI);
        addNr->setObjectName(QString::fromUtf8("addNr"));

        vboxLayout2->addWidget(addNr);

        addName = new QLineEdit(smsAddUI);
        addName->setObjectName(QString::fromUtf8("addName"));

        vboxLayout2->addWidget(addName);


        hboxLayout->addLayout(vboxLayout2);


        vboxLayout->addLayout(hboxLayout);

        spacer9 = new QSpacerItem(31, 170, QSizePolicy::Expanding, QSizePolicy::Minimum);

        vboxLayout->addItem(spacer9);

#ifndef UI_QT_NO_SHORTCUT
        textLabel1->setBuddy(addNr);
        textLabel1_2->setBuddy(addName);
#endif // QT_NO_SHORTCUT
        QWidget::setTabOrder(addNr, addName);

        retranslateUi(smsAddUI);

        QMetaObject::connectSlotsByName(smsAddUI);
    } // setupUi

    void retranslateUi(QWidget *smsAddUI)
    {
        textLabel1->setText(tr2i18n("&Telephone number:", 0));
#ifndef UI_QT_NO_TOOLTIP
        textLabel1->setProperty("toolTip", QVariant(tr2i18n("The telephone number of the contact you would like to add.", 0)));
#endif // QT_NO_TOOLTIP
#ifndef UI_QT_NO_WHATSTHIS
        textLabel1->setProperty("whatsThis", QVariant(tr2i18n("The telephone number of the contact you would like to add.  This should be a number with SMS service available.", 0)));
#endif // QT_NO_WHATSTHIS
        textLabel1_2->setText(tr2i18n("Contact na&me:", 0));
#ifndef UI_QT_NO_TOOLTIP
        textLabel1_2->setProperty("toolTip", QVariant(tr2i18n("A unique name for this SMS account.", 0)));
#endif // QT_NO_TOOLTIP
#ifndef UI_QT_NO_WHATSTHIS
        textLabel1_2->setProperty("whatsThis", QVariant(tr2i18n("A unique name for this SMS account.", 0)));
#endif // QT_NO_WHATSTHIS
#ifndef UI_QT_NO_TOOLTIP
        addNr->setProperty("toolTip", QVariant(tr2i18n("The telephone number of the contact you would like to add.", 0)));
#endif // QT_NO_TOOLTIP
#ifndef UI_QT_NO_WHATSTHIS
        addNr->setProperty("whatsThis", QVariant(tr2i18n("The telephone number of the contact you would like to add.  This should be a number with SMS service available.", 0)));
#endif // QT_NO_WHATSTHIS
#ifndef UI_QT_NO_TOOLTIP
        addName->setProperty("toolTip", QVariant(tr2i18n("A unique name for this SMS account.", 0)));
#endif // QT_NO_TOOLTIP
#ifndef UI_QT_NO_WHATSTHIS
        addName->setProperty("whatsThis", QVariant(tr2i18n("A unique name for this SMS account.", 0)));
#endif // QT_NO_WHATSTHIS
        Q_UNUSED(smsAddUI);
    } // retranslateUi

};

namespace Ui {
    class smsAddUI: public Ui_smsAddUI {};
} // namespace Ui

QT_END_NAMESPACE

class smsAddUI : public QWidget, public Ui::smsAddUI
{
    Q_OBJECT

public:
    smsAddUI(QWidget* parent = 0, const char* name = 0, Qt::WindowFlags fl = 0);
    ~smsAddUI();

protected slots:
    virtual void languageChange();

};

#endif // SMSADDUI_H

