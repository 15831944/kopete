#include <kdialog.h>
#include <klocale.h>

#ifndef UI_SMSCLIENTPREFSUI_H
#define UI_SMSCLIENTPREFSUI_H

#include <qvariant.h>


#include <Qt3Support/Q3MimeSourceFactory>
#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtGui/QApplication>
#include <QtGui/QButtonGroup>
#include <QtGui/QComboBox>
#include <QtGui/QFrame>
#include <QtGui/QGridLayout>
#include <QtGui/QHeaderView>
#include <QtGui/QLabel>
#include <QtGui/QSpacerItem>
#include <QtGui/QVBoxLayout>
#include <QtGui/QWidget>
#include "klineedit.h"
#include "kpushbutton.h"
#include "kurlrequester.h"

QT_BEGIN_NAMESPACE

class Ui_SMSClientPrefsUI
{
public:
    QVBoxLayout *vboxLayout;
    QSpacerItem *spacer16;
    QLabel *textLabel8;
    QFrame *line14;
    QGridLayout *gridLayout;
    QLabel *textLabel1;
    QLabel *textLabel3;
    KUrlRequester *program;
    KUrlRequester *configDir;
    QComboBox *provider;
    QLabel *textLabel2;

    void setupUi(QWidget *SMSClientPrefsUI)
    {
        if (SMSClientPrefsUI->objectName().isEmpty())
            SMSClientPrefsUI->setObjectName(QString::fromUtf8("SMSClientPrefsUI"));
        SMSClientPrefsUI->resize(375, 168);
        vboxLayout = new QVBoxLayout(SMSClientPrefsUI);
        vboxLayout->setContentsMargins(0, 0, 0, 0);
        vboxLayout->setObjectName(QString::fromUtf8("vboxLayout"));
        spacer16 = new QSpacerItem(321, 16, QSizePolicy::Expanding, QSizePolicy::Minimum);

        vboxLayout->addItem(spacer16);

        textLabel8 = new QLabel(SMSClientPrefsUI);
        textLabel8->setObjectName(QString::fromUtf8("textLabel8"));
        QFont font;
        font.setBold(true);
        textLabel8->setFont(font);
        textLabel8->setWordWrap(false);

        vboxLayout->addWidget(textLabel8);

        line14 = new QFrame(SMSClientPrefsUI);
        line14->setObjectName(QString::fromUtf8("line14"));
        line14->setFrameShape(QFrame::HLine);
        line14->setFrameShadow(QFrame::Sunken);

        vboxLayout->addWidget(line14);

        gridLayout = new QGridLayout();
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        textLabel1 = new QLabel(SMSClientPrefsUI);
        textLabel1->setObjectName(QString::fromUtf8("textLabel1"));
        textLabel1->setWordWrap(false);

        gridLayout->addWidget(textLabel1, 0, 0, 1, 1);

        textLabel3 = new QLabel(SMSClientPrefsUI);
        textLabel3->setObjectName(QString::fromUtf8("textLabel3"));
        textLabel3->setWordWrap(false);

        gridLayout->addWidget(textLabel3, 2, 0, 1, 1);

        program = new KUrlRequester(SMSClientPrefsUI);
        program->setObjectName(QString::fromUtf8("program"));

        gridLayout->addWidget(program, 0, 1, 1, 1);

        configDir = new KUrlRequester(SMSClientPrefsUI);
        configDir->setObjectName(QString::fromUtf8("configDir"));

        gridLayout->addWidget(configDir, 1, 1, 1, 1);

        provider = new QComboBox(SMSClientPrefsUI);
        provider->setObjectName(QString::fromUtf8("provider"));

        gridLayout->addWidget(provider, 2, 1, 1, 1);

        textLabel2 = new QLabel(SMSClientPrefsUI);
        textLabel2->setObjectName(QString::fromUtf8("textLabel2"));
        textLabel2->setWordWrap(false);

        gridLayout->addWidget(textLabel2, 1, 0, 1, 1);


        vboxLayout->addLayout(gridLayout);

#ifndef UI_QT_NO_SHORTCUT
        textLabel1->setBuddy(program);
        textLabel3->setBuddy(provider);
        textLabel2->setBuddy(configDir);
#endif // QT_NO_SHORTCUT

        retranslateUi(SMSClientPrefsUI);

        QMetaObject::connectSlotsByName(SMSClientPrefsUI);
    } // setupUi

    void retranslateUi(QWidget *SMSClientPrefsUI)
    {
        textLabel8->setText(tr2i18n("SMSClient Settings", 0));
        textLabel1->setText(tr2i18n("SMSClient &program:", 0));
        textLabel3->setText(tr2i18n("Pro&vider:", 0));
        textLabel2->setText(tr2i18n("SMSClient &config path:", 0));
        Q_UNUSED(SMSClientPrefsUI);
    } // retranslateUi

};

namespace Ui {
    class SMSClientPrefsUI: public Ui_SMSClientPrefsUI {};
} // namespace Ui

QT_END_NAMESPACE

class SMSClientPrefsUI : public QWidget, public Ui::SMSClientPrefsUI
{
    Q_OBJECT

public:
    SMSClientPrefsUI(QWidget* parent = 0, const char* name = 0, Qt::WindowFlags fl = 0);
    ~SMSClientPrefsUI();

protected slots:
    virtual void languageChange();

};

#endif // SMSCLIENTPREFSUI_H

