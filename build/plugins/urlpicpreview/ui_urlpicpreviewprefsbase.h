#include <kdialog.h>
#include <klocale.h>

/********************************************************************************
** Form generated from reading UI file 'urlpicpreviewprefsbase.ui'
**
** Created by: Qt User Interface Compiler version 4.8.7
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_URLPICPREVIEWPREFSBASE_H
#define UI_URLPICPREVIEWPREFSBASE_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtGui/QApplication>
#include <QtGui/QButtonGroup>
#include <QtGui/QCheckBox>
#include <QtGui/QGroupBox>
#include <QtGui/QHBoxLayout>
#include <QtGui/QHeaderView>
#include <QtGui/QLabel>
#include <QtGui/QSpacerItem>
#include <QtGui/QVBoxLayout>
#include <QtGui/QWidget>
#include "knuminput.h"

QT_BEGIN_NAMESPACE

class Ui_URLPicPreviewPrefsUI
{
public:
    QVBoxLayout *vboxLayout;
    QGroupBox *groupBox1;
    QHBoxLayout *hboxLayout;
    QCheckBox *restrictPreviews;
    KIntSpinBox *previewAmount;
    QSpacerItem *spacerItem;
    QGroupBox *groupBox2;
    QHBoxLayout *hboxLayout1;
    QCheckBox *enableScaling;
    KIntSpinBox *previewScaleWidth;
    QSpacerItem *spacerItem1;
    QGroupBox *linkPreviewGroup;
    QVBoxLayout *vboxLayout1;
    QHBoxLayout *hboxLayout2;
    QCheckBox *enableLinkPreview;
    QSpacerItem *spacerItem2;
    QHBoxLayout *hboxLayout3;
    QLabel *textLabel1;
    KIntNumInput *timeoutLinkPreview;
    QSpacerItem *spacerItem3;
    QSpacerItem *spacerItem4;

    void setupUi(QWidget *URLPicPreviewPrefsUI)
    {
        if (URLPicPreviewPrefsUI->objectName().isEmpty())
            URLPicPreviewPrefsUI->setObjectName(QString::fromUtf8("URLPicPreviewPrefsUI"));
        URLPicPreviewPrefsUI->resize(373, 236);
        QSizePolicy sizePolicy(QSizePolicy::Minimum, QSizePolicy::Minimum);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(URLPicPreviewPrefsUI->sizePolicy().hasHeightForWidth());
        URLPicPreviewPrefsUI->setSizePolicy(sizePolicy);
        vboxLayout = new QVBoxLayout(URLPicPreviewPrefsUI);
        vboxLayout->setObjectName(QString::fromUtf8("vboxLayout"));
        vboxLayout->setContentsMargins(0, 0, 0, 0);
        groupBox1 = new QGroupBox(URLPicPreviewPrefsUI);
        groupBox1->setObjectName(QString::fromUtf8("groupBox1"));
        hboxLayout = new QHBoxLayout(groupBox1);
        hboxLayout->setObjectName(QString::fromUtf8("hboxLayout"));
        restrictPreviews = new QCheckBox(groupBox1);
        restrictPreviews->setObjectName(QString::fromUtf8("restrictPreviews"));
        restrictPreviews->setChecked(true);

        hboxLayout->addWidget(restrictPreviews);

        previewAmount = new KIntSpinBox(groupBox1);
        previewAmount->setObjectName(QString::fromUtf8("previewAmount"));
        previewAmount->setValue(2);
        previewAmount->setProperty("maxValue", QVariant(4096));
        previewAmount->setProperty("minValue", QVariant(1));

        hboxLayout->addWidget(previewAmount);

        spacerItem = new QSpacerItem(0, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        hboxLayout->addItem(spacerItem);


        vboxLayout->addWidget(groupBox1);

        groupBox2 = new QGroupBox(URLPicPreviewPrefsUI);
        groupBox2->setObjectName(QString::fromUtf8("groupBox2"));
        sizePolicy.setHeightForWidth(groupBox2->sizePolicy().hasHeightForWidth());
        groupBox2->setSizePolicy(sizePolicy);
        hboxLayout1 = new QHBoxLayout(groupBox2);
        hboxLayout1->setObjectName(QString::fromUtf8("hboxLayout1"));
        enableScaling = new QCheckBox(groupBox2);
        enableScaling->setObjectName(QString::fromUtf8("enableScaling"));
        sizePolicy.setHeightForWidth(enableScaling->sizePolicy().hasHeightForWidth());
        enableScaling->setSizePolicy(sizePolicy);
        enableScaling->setChecked(true);

        hboxLayout1->addWidget(enableScaling);

        previewScaleWidth = new KIntSpinBox(groupBox2);
        previewScaleWidth->setObjectName(QString::fromUtf8("previewScaleWidth"));
        previewScaleWidth->setValue(99);
        previewScaleWidth->setProperty("maxValue", QVariant(1024));
        previewScaleWidth->setProperty("minValue", QVariant(16));
        previewScaleWidth->setProperty("lineStep", QVariant(8));

        hboxLayout1->addWidget(previewScaleWidth);

        spacerItem1 = new QSpacerItem(0, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        hboxLayout1->addItem(spacerItem1);


        vboxLayout->addWidget(groupBox2);

        linkPreviewGroup = new QGroupBox(URLPicPreviewPrefsUI);
        linkPreviewGroup->setObjectName(QString::fromUtf8("linkPreviewGroup"));
        vboxLayout1 = new QVBoxLayout(linkPreviewGroup);
        vboxLayout1->setObjectName(QString::fromUtf8("vboxLayout1"));
        hboxLayout2 = new QHBoxLayout();
        hboxLayout2->setObjectName(QString::fromUtf8("hboxLayout2"));
        enableLinkPreview = new QCheckBox(linkPreviewGroup);
        enableLinkPreview->setObjectName(QString::fromUtf8("enableLinkPreview"));

        hboxLayout2->addWidget(enableLinkPreview);

        spacerItem2 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        hboxLayout2->addItem(spacerItem2);


        vboxLayout1->addLayout(hboxLayout2);

        hboxLayout3 = new QHBoxLayout();
        hboxLayout3->setObjectName(QString::fromUtf8("hboxLayout3"));
        textLabel1 = new QLabel(linkPreviewGroup);
        textLabel1->setObjectName(QString::fromUtf8("textLabel1"));
        textLabel1->setWordWrap(false);

        hboxLayout3->addWidget(textLabel1);

        timeoutLinkPreview = new KIntNumInput(linkPreviewGroup);
        timeoutLinkPreview->setObjectName(QString::fromUtf8("timeoutLinkPreview"));
        timeoutLinkPreview->setEnabled(false);
        timeoutLinkPreview->setValue(10);
        timeoutLinkPreview->setProperty("minValue", QVariant(0));
        timeoutLinkPreview->setProperty("maxValue", QVariant(3600));

        hboxLayout3->addWidget(timeoutLinkPreview);

        spacerItem3 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        hboxLayout3->addItem(spacerItem3);


        vboxLayout1->addLayout(hboxLayout3);


        vboxLayout->addWidget(linkPreviewGroup);

        spacerItem4 = new QSpacerItem(20, 1, QSizePolicy::Minimum, QSizePolicy::Expanding);

        vboxLayout->addItem(spacerItem4);

#ifndef UI_QT_NO_SHORTCUT
        textLabel1->setBuddy(timeoutLinkPreview);
#endif // QT_NO_SHORTCUT
        QWidget::setTabOrder(restrictPreviews, previewAmount);
        QWidget::setTabOrder(previewAmount, enableScaling);
        QWidget::setTabOrder(enableScaling, previewScaleWidth);
        QWidget::setTabOrder(previewScaleWidth, enableLinkPreview);
        QWidget::setTabOrder(enableLinkPreview, timeoutLinkPreview);

        retranslateUi(URLPicPreviewPrefsUI);
        QObject::connect(enableScaling, SIGNAL(toggled(bool)), previewScaleWidth, SLOT(setEnabled(bool)));
        QObject::connect(restrictPreviews, SIGNAL(toggled(bool)), previewAmount, SLOT(setEnabled(bool)));
        QObject::connect(enableLinkPreview, SIGNAL(toggled(bool)), timeoutLinkPreview, SLOT(setEnabled(bool)));

        QMetaObject::connectSlotsByName(URLPicPreviewPrefsUI);
    } // setupUi

    void retranslateUi(QWidget *URLPicPreviewPrefsUI)
    {
        URLPicPreviewPrefsUI->setWindowTitle(tr2i18n("Picture Preview Preferences", 0));
        groupBox1->setTitle(tr2i18n("Preview", 0));
#ifndef UI_QT_NO_WHATSTHIS
        restrictPreviews->setWhatsThis(tr2i18n("If checked, only the selected number of pictures are downloaded and displayed as previews.\n"
"Otherwise, an unlimited number of previews are generated.", 0));
#endif // QT_NO_WHATSTHIS
        restrictPreviews->setText(tr2i18n("&Restrict number of previews:", 0));
#ifndef UI_QT_NO_WHATSTHIS
        previewAmount->setWhatsThis(tr2i18n("The maximum number of pictures to download and preview.", 0));
#endif // QT_NO_WHATSTHIS
        groupBox2->setTitle(tr2i18n("Scaling", 0));
#ifndef UI_QT_NO_WHATSTHIS
        enableScaling->setWhatsThis(tr2i18n("If checked, preview images get scaled down to the width specified.\n"
"Otherwise, the images are not scaled at all and appear in their original size.", 0));
#endif // QT_NO_WHATSTHIS
        enableScaling->setText(tr2i18n("Scale &to:", 0));
#ifndef UI_QT_NO_WHATSTHIS
        previewScaleWidth->setWhatsThis(tr2i18n("The width to which images should be scaled down. Smaller images will appear in their original size.", 0));
#endif // QT_NO_WHATSTHIS
        previewScaleWidth->setSuffix(tr2i18n(" pixel", 0));
        linkPreviewGroup->setTitle(tr2i18n("Link Preview", 0));
#ifndef UI_QT_NO_WHATSTHIS
        enableLinkPreview->setWhatsThis(tr2i18n("Creates a preview picture of the link.", 0));
#endif // QT_NO_WHATSTHIS
        enableLinkPreview->setText(tr2i18n("Enable lin&k preview", 0));
        textLabel1->setText(tr2i18n("Abort creating previe&w after", 0));
#ifndef UI_QT_NO_WHATSTHIS
        timeoutLinkPreview->setWhatsThis(tr2i18n("After the specified number of seconds the creation of the preview is aborted automatically.\n"
"Use 0 seconds to never abort the creation.", 0));
#endif // QT_NO_WHATSTHIS
        timeoutLinkPreview->setSuffix(tr2i18n(" seconds", 0));
    } // retranslateUi

};

namespace Ui {
    class URLPicPreviewPrefsUI: public Ui_URLPicPreviewPrefsUI {};
} // namespace Ui

QT_END_NAMESPACE

#endif // URLPICPREVIEWPREFSBASE_H

