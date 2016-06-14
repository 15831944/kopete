#include <kdialog.h>
#include <klocale.h>

#ifndef UI_GSMLIBPREFSUI_H
#define UI_GSMLIBPREFSUI_H

#include <qvariant.h>


#include <Qt3Support/Q3MimeSourceFactory>
#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtGui/QApplication>
#include <QtGui/QButtonGroup>
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

class Ui_GSMLibPrefsUI
{
public:
    QVBoxLayout *vboxLayout;
    QSpacerItem *spacer16;
    QLabel *textLabel8;
    QFrame *line14;
    QGridLayout *gridLayout;
    QLabel *textLabel1;
    KUrlRequester *device;

    void setupUi(QWidget *GSMLibPrefsUI)
    {
        if (GSMLibPrefsUI->objectName().isEmpty())
            GSMLibPrefsUI->setObjectName(QString::fromUtf8("GSMLibPrefsUI"));
        GSMLibPrefsUI->resize(375, 168);
        vboxLayout = new QVBoxLayout(GSMLibPrefsUI);
        vboxLayout->setContentsMargins(0, 0, 0, 0);
        vboxLayout->setObjectName(QString::fromUtf8("vboxLayout"));
        spacer16 = new QSpacerItem(321, 16, QSizePolicy::Expanding, QSizePolicy::Minimum);

        vboxLayout->addItem(spacer16);

        textLabel8 = new QLabel(GSMLibPrefsUI);
        textLabel8->setObjectName(QString::fromUtf8("textLabel8"));
        QFont font;
        font.setBold(true);
        textLabel8->setFont(font);
        textLabel8->setWordWrap(false);

        vboxLayout->addWidget(textLabel8);

        line14 = new QFrame(GSMLibPrefsUI);
        line14->setObjectName(QString::fromUtf8("line14"));
        line14->setFrameShape(QFrame::HLine);
        line14->setFrameShadow(QFrame::Sunken);

        vboxLayout->addWidget(line14);

        gridLayout = new QGridLayout();
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        textLabel1 = new QLabel(GSMLibPrefsUI);
        textLabel1->setObjectName(QString::fromUtf8("textLabel1"));
        textLabel1->setWordWrap(false);

        gridLayout->addWidget(textLabel1, 0, 0, 1, 1);

        device = new KUrlRequester(GSMLibPrefsUI);
        device->setObjectName(QString::fromUtf8("device"));

        gridLayout->addWidget(device, 0, 1, 1, 1);


        vboxLayout->addLayout(gridLayout);

#ifndef UI_QT_NO_SHORTCUT
#endif // QT_NO_SHORTCUT

        retranslateUi(GSMLibPrefsUI);

        QMetaObject::connectSlotsByName(GSMLibPrefsUI);
    } // setupUi

    void retranslateUi(QWidget *GSMLibPrefsUI)
    {
        textLabel8->setText(tr2i18n("GSMLib Settings", 0));
        textLabel1->setText(tr2i18n("Device:", 0));
        Q_UNUSED(GSMLibPrefsUI);
    } // retranslateUi

};

namespace Ui {
    class GSMLibPrefsUI: public Ui_GSMLibPrefsUI {};
} // namespace Ui

QT_END_NAMESPACE

class GSMLibPrefsUI : public QWidget, public Ui::GSMLibPrefsUI
{
    Q_OBJECT

public:
    GSMLibPrefsUI(QWidget* parent = 0, const char* name = 0, Qt::WindowFlags fl = 0);
    ~GSMLibPrefsUI();

protected slots:
    virtual void languageChange();

};

#endif // GSMLIBPREFSUI_H

