#include <kdialog.h>
#include <klocale.h>

#ifndef UI_SMSSENDPREFSUI_H
#define UI_SMSSENDPREFSUI_H

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

class Ui_SMSSendPrefsUI
{
public:
    QVBoxLayout *vboxLayout;
    QSpacerItem *spacer14;
    QLabel *textLabel7_2;
    QFrame *line6_2;
    QGridLayout *gridLayout;
    QComboBox *provider;
    KUrlRequester *program;
    QLabel *textLabel2;
    QLabel *textLabel1;
    QSpacerItem *spacer15;
    QLabel *providerLabel;
    QFrame *line6;

    void setupUi(QWidget *SMSSendPrefsUI)
    {
        if (SMSSendPrefsUI->objectName().isEmpty())
            SMSSendPrefsUI->setObjectName(QString::fromUtf8("SMSSendPrefsUI"));
        SMSSendPrefsUI->resize(338, 195);
        vboxLayout = new QVBoxLayout(SMSSendPrefsUI);
        vboxLayout->setContentsMargins(0, 0, 0, 0);
        vboxLayout->setObjectName(QString::fromUtf8("vboxLayout"));
        spacer14 = new QSpacerItem(311, 16, QSizePolicy::Expanding, QSizePolicy::Minimum);

        vboxLayout->addItem(spacer14);

        textLabel7_2 = new QLabel(SMSSendPrefsUI);
        textLabel7_2->setObjectName(QString::fromUtf8("textLabel7_2"));
        QFont font;
        font.setBold(true);
        textLabel7_2->setFont(font);
        textLabel7_2->setWordWrap(false);

        vboxLayout->addWidget(textLabel7_2);

        line6_2 = new QFrame(SMSSendPrefsUI);
        line6_2->setObjectName(QString::fromUtf8("line6_2"));
        line6_2->setFrameShape(QFrame::HLine);
        line6_2->setFrameShadow(QFrame::Sunken);

        vboxLayout->addWidget(line6_2);

        gridLayout = new QGridLayout();
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        provider = new QComboBox(SMSSendPrefsUI);
        provider->setObjectName(QString::fromUtf8("provider"));

        gridLayout->addWidget(provider, 1, 1, 1, 1);

        program = new KUrlRequester(SMSSendPrefsUI);
        program->setObjectName(QString::fromUtf8("program"));
        QSizePolicy sizePolicy(static_cast<QSizePolicy::Policy>(7), static_cast<QSizePolicy::Policy>(4));
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(program->sizePolicy().hasHeightForWidth());
        program->setSizePolicy(sizePolicy);

        gridLayout->addWidget(program, 0, 1, 1, 1);

        textLabel2 = new QLabel(SMSSendPrefsUI);
        textLabel2->setObjectName(QString::fromUtf8("textLabel2"));
        QSizePolicy sizePolicy1(static_cast<QSizePolicy::Policy>(5), static_cast<QSizePolicy::Policy>(4));
        sizePolicy1.setHorizontalStretch(0);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(textLabel2->sizePolicy().hasHeightForWidth());
        textLabel2->setSizePolicy(sizePolicy1);
        textLabel2->setWordWrap(false);

        gridLayout->addWidget(textLabel2, 1, 0, 1, 1);

        textLabel1 = new QLabel(SMSSendPrefsUI);
        textLabel1->setObjectName(QString::fromUtf8("textLabel1"));
        sizePolicy1.setHeightForWidth(textLabel1->sizePolicy().hasHeightForWidth());
        textLabel1->setSizePolicy(sizePolicy1);
        textLabel1->setWordWrap(false);

        gridLayout->addWidget(textLabel1, 0, 0, 1, 1);


        vboxLayout->addLayout(gridLayout);

        spacer15 = new QSpacerItem(351, 16, QSizePolicy::Expanding, QSizePolicy::Minimum);

        vboxLayout->addItem(spacer15);

        providerLabel = new QLabel(SMSSendPrefsUI);
        providerLabel->setObjectName(QString::fromUtf8("providerLabel"));
        providerLabel->setFont(font);
        providerLabel->setWordWrap(false);

        vboxLayout->addWidget(providerLabel);

        line6 = new QFrame(SMSSendPrefsUI);
        line6->setObjectName(QString::fromUtf8("line6"));
        line6->setFrameShape(QFrame::HLine);
        line6->setFrameShadow(QFrame::Sunken);

        vboxLayout->addWidget(line6);

#ifndef UI_QT_NO_SHORTCUT
        textLabel2->setBuddy(provider);
        textLabel1->setBuddy(program);
#endif // QT_NO_SHORTCUT
        QWidget::setTabOrder(program, provider);

        retranslateUi(SMSSendPrefsUI);

        QMetaObject::connectSlotsByName(SMSSendPrefsUI);
    } // setupUi

    void retranslateUi(QWidget *SMSSendPrefsUI)
    {
        textLabel7_2->setText(tr2i18n("SMSSend Options", 0));
        textLabel2->setText(tr2i18n("Pro&vider:", 0));
        textLabel1->setText(tr2i18n("SMSSend prefi&x:", 0));
        providerLabel->setText(tr2i18n("Provider Options", 0));
        Q_UNUSED(SMSSendPrefsUI);
    } // retranslateUi

};

namespace Ui {
    class SMSSendPrefsUI: public Ui_SMSSendPrefsUI {};
} // namespace Ui

QT_END_NAMESPACE

class SMSSendPrefsUI : public QWidget, public Ui::SMSSendPrefsUI
{
    Q_OBJECT

public:
    SMSSendPrefsUI(QWidget* parent = 0, const char* name = 0, Qt::WindowFlags fl = 0);
    ~SMSSendPrefsUI();

protected slots:
    virtual void languageChange();

};

#endif // SMSSENDPREFSUI_H

