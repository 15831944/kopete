#include <kdialog.h>
#include <klocale.h>

/********************************************************************************
** Form generated from reading UI file 'avdeviceconfig_videodevice.ui'
**
** Created by: Qt User Interface Compiler version 4.8.7
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_AVDEVICECONFIG_VIDEODEVICE_H
#define UI_AVDEVICECONFIG_VIDEODEVICE_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtGui/QApplication>
#include <QtGui/QButtonGroup>
#include <QtGui/QFrame>
#include <QtGui/QGridLayout>
#include <QtGui/QHBoxLayout>
#include <QtGui/QHeaderView>
#include <QtGui/QLabel>
#include <QtGui/QSpacerItem>
#include <QtGui/QTabWidget>
#include <QtGui/QVBoxLayout>
#include <QtGui/QWidget>
#include "kcombobox.h"

QT_BEGIN_NAMESPACE

class Ui_AVDeviceConfig_VideoDevice
{
public:
    QHBoxLayout *horizontalLayout;
    QFrame *frame;
    QVBoxLayout *verticalLayout_2;
    QLabel *mVideoImageLabel;
    QTabWidget *VideoTabWidget;
    QWidget *deviceTab;
    QVBoxLayout *vboxLayout;
    QHBoxLayout *hboxLayout;
    QVBoxLayout *vboxLayout1;
    QLabel *deviceLabel;
    QLabel *inputLabel;
    QLabel *standardLabel;
    QVBoxLayout *vboxLayout2;
    KComboBox *mDeviceKComboBox;
    KComboBox *mInputKComboBox;
    KComboBox *mStandardKComboBox;
    QSpacerItem *verticalSpacer_4;
    QWidget *controlsTab;
    QVBoxLayout *verticalLayout;
    QGridLayout *sliders_gridLayout;
    QSpacerItem *verticalSpacer;
    QWidget *optionsTab;
    QGridLayout *gridLayout;
    QVBoxLayout *checkboxOptions_verticalLayout;
    QGridLayout *menuOptions_gridLayout;
    QSpacerItem *verticalSpacer_2;
    QSpacerItem *horizontalSpacer;
    QWidget *actionsTab;
    QGridLayout *gridLayout_2;
    QGridLayout *actions_gridLayout;
    QSpacerItem *verticalSpacer_3;
    QSpacerItem *horizontalSpacer_2;

    void setupUi(QWidget *AVDeviceConfig_VideoDevice)
    {
        if (AVDeviceConfig_VideoDevice->objectName().isEmpty())
            AVDeviceConfig_VideoDevice->setObjectName(QString::fromUtf8("AVDeviceConfig_VideoDevice"));
        AVDeviceConfig_VideoDevice->resize(550, 391);
        QSizePolicy sizePolicy(QSizePolicy::Minimum, QSizePolicy::Minimum);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(AVDeviceConfig_VideoDevice->sizePolicy().hasHeightForWidth());
        AVDeviceConfig_VideoDevice->setSizePolicy(sizePolicy);
        horizontalLayout = new QHBoxLayout(AVDeviceConfig_VideoDevice);
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        frame = new QFrame(AVDeviceConfig_VideoDevice);
        frame->setObjectName(QString::fromUtf8("frame"));
        QPalette palette;
        QBrush brush(QColor(255, 255, 255, 255));
        brush.setStyle(Qt::SolidPattern);
        palette.setBrush(QPalette::Active, QPalette::Base, brush);
        QBrush brush1(QColor(0, 0, 0, 255));
        brush1.setStyle(Qt::SolidPattern);
        palette.setBrush(QPalette::Active, QPalette::Window, brush1);
        palette.setBrush(QPalette::Inactive, QPalette::Base, brush);
        palette.setBrush(QPalette::Inactive, QPalette::Window, brush1);
        palette.setBrush(QPalette::Disabled, QPalette::Base, brush1);
        palette.setBrush(QPalette::Disabled, QPalette::Window, brush1);
        frame->setPalette(palette);
        frame->setAutoFillBackground(true);
        frame->setFrameShape(QFrame::StyledPanel);
        frame->setFrameShadow(QFrame::Sunken);
        verticalLayout_2 = new QVBoxLayout(frame);
        verticalLayout_2->setObjectName(QString::fromUtf8("verticalLayout_2"));
        mVideoImageLabel = new QLabel(frame);
        mVideoImageLabel->setObjectName(QString::fromUtf8("mVideoImageLabel"));
        QSizePolicy sizePolicy1(QSizePolicy::Fixed, QSizePolicy::Fixed);
        sizePolicy1.setHorizontalStretch(0);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(mVideoImageLabel->sizePolicy().hasHeightForWidth());
        mVideoImageLabel->setSizePolicy(sizePolicy1);
        mVideoImageLabel->setMinimumSize(QSize(320, 240));
        mVideoImageLabel->setScaledContents(true);
        mVideoImageLabel->setAlignment(Qt::AlignCenter);

        verticalLayout_2->addWidget(mVideoImageLabel);


        horizontalLayout->addWidget(frame);

        VideoTabWidget = new QTabWidget(AVDeviceConfig_VideoDevice);
        VideoTabWidget->setObjectName(QString::fromUtf8("VideoTabWidget"));
        QSizePolicy sizePolicy2(QSizePolicy::MinimumExpanding, QSizePolicy::Minimum);
        sizePolicy2.setHorizontalStretch(0);
        sizePolicy2.setVerticalStretch(0);
        sizePolicy2.setHeightForWidth(VideoTabWidget->sizePolicy().hasHeightForWidth());
        VideoTabWidget->setSizePolicy(sizePolicy2);
        VideoTabWidget->setDocumentMode(true);
        deviceTab = new QWidget();
        deviceTab->setObjectName(QString::fromUtf8("deviceTab"));
        vboxLayout = new QVBoxLayout(deviceTab);
        vboxLayout->setObjectName(QString::fromUtf8("vboxLayout"));
        hboxLayout = new QHBoxLayout();
        hboxLayout->setObjectName(QString::fromUtf8("hboxLayout"));
        vboxLayout1 = new QVBoxLayout();
        vboxLayout1->setObjectName(QString::fromUtf8("vboxLayout1"));
        deviceLabel = new QLabel(deviceTab);
        deviceLabel->setObjectName(QString::fromUtf8("deviceLabel"));

        vboxLayout1->addWidget(deviceLabel);

        inputLabel = new QLabel(deviceTab);
        inputLabel->setObjectName(QString::fromUtf8("inputLabel"));

        vboxLayout1->addWidget(inputLabel);

        standardLabel = new QLabel(deviceTab);
        standardLabel->setObjectName(QString::fromUtf8("standardLabel"));

        vboxLayout1->addWidget(standardLabel);


        hboxLayout->addLayout(vboxLayout1);

        vboxLayout2 = new QVBoxLayout();
        vboxLayout2->setObjectName(QString::fromUtf8("vboxLayout2"));
        vboxLayout2->setContentsMargins(0, 0, -1, 0);
        mDeviceKComboBox = new KComboBox(deviceTab);
        mDeviceKComboBox->setObjectName(QString::fromUtf8("mDeviceKComboBox"));
        QSizePolicy sizePolicy3(QSizePolicy::MinimumExpanding, QSizePolicy::Fixed);
        sizePolicy3.setHorizontalStretch(0);
        sizePolicy3.setVerticalStretch(0);
        sizePolicy3.setHeightForWidth(mDeviceKComboBox->sizePolicy().hasHeightForWidth());
        mDeviceKComboBox->setSizePolicy(sizePolicy3);

        vboxLayout2->addWidget(mDeviceKComboBox);

        mInputKComboBox = new KComboBox(deviceTab);
        mInputKComboBox->setObjectName(QString::fromUtf8("mInputKComboBox"));
        sizePolicy3.setHeightForWidth(mInputKComboBox->sizePolicy().hasHeightForWidth());
        mInputKComboBox->setSizePolicy(sizePolicy3);

        vboxLayout2->addWidget(mInputKComboBox);

        mStandardKComboBox = new KComboBox(deviceTab);
        mStandardKComboBox->setObjectName(QString::fromUtf8("mStandardKComboBox"));
        sizePolicy3.setHeightForWidth(mStandardKComboBox->sizePolicy().hasHeightForWidth());
        mStandardKComboBox->setSizePolicy(sizePolicy3);

        vboxLayout2->addWidget(mStandardKComboBox);


        hboxLayout->addLayout(vboxLayout2);


        vboxLayout->addLayout(hboxLayout);

        verticalSpacer_4 = new QSpacerItem(20, 0, QSizePolicy::Minimum, QSizePolicy::Expanding);

        vboxLayout->addItem(verticalSpacer_4);

        VideoTabWidget->addTab(deviceTab, QString());
        controlsTab = new QWidget();
        controlsTab->setObjectName(QString::fromUtf8("controlsTab"));
        verticalLayout = new QVBoxLayout(controlsTab);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        sliders_gridLayout = new QGridLayout();
        sliders_gridLayout->setObjectName(QString::fromUtf8("sliders_gridLayout"));

        verticalLayout->addLayout(sliders_gridLayout);

        verticalSpacer = new QSpacerItem(20, 0, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout->addItem(verticalSpacer);

        VideoTabWidget->addTab(controlsTab, QString());
        optionsTab = new QWidget();
        optionsTab->setObjectName(QString::fromUtf8("optionsTab"));
        gridLayout = new QGridLayout(optionsTab);
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        checkboxOptions_verticalLayout = new QVBoxLayout();
        checkboxOptions_verticalLayout->setObjectName(QString::fromUtf8("checkboxOptions_verticalLayout"));

        gridLayout->addLayout(checkboxOptions_verticalLayout, 0, 0, 1, 2);

        menuOptions_gridLayout = new QGridLayout();
        menuOptions_gridLayout->setObjectName(QString::fromUtf8("menuOptions_gridLayout"));
        menuOptions_gridLayout->setContentsMargins(-1, 0, -1, 0);

        gridLayout->addLayout(menuOptions_gridLayout, 1, 0, 1, 1);

        verticalSpacer_2 = new QSpacerItem(20, 0, QSizePolicy::Minimum, QSizePolicy::Expanding);

        gridLayout->addItem(verticalSpacer_2, 2, 0, 1, 1);

        horizontalSpacer = new QSpacerItem(0, 0, QSizePolicy::Expanding, QSizePolicy::Minimum);

        gridLayout->addItem(horizontalSpacer, 1, 1, 1, 1);

        VideoTabWidget->addTab(optionsTab, QString());
        actionsTab = new QWidget();
        actionsTab->setObjectName(QString::fromUtf8("actionsTab"));
        gridLayout_2 = new QGridLayout(actionsTab);
        gridLayout_2->setObjectName(QString::fromUtf8("gridLayout_2"));
        actions_gridLayout = new QGridLayout();
        actions_gridLayout->setObjectName(QString::fromUtf8("actions_gridLayout"));

        gridLayout_2->addLayout(actions_gridLayout, 0, 0, 1, 1);

        verticalSpacer_3 = new QSpacerItem(20, 0, QSizePolicy::Minimum, QSizePolicy::Expanding);

        gridLayout_2->addItem(verticalSpacer_3, 1, 0, 1, 1);

        horizontalSpacer_2 = new QSpacerItem(0, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        gridLayout_2->addItem(horizontalSpacer_2, 0, 1, 1, 1);

        VideoTabWidget->addTab(actionsTab, QString());

        horizontalLayout->addWidget(VideoTabWidget);


        retranslateUi(AVDeviceConfig_VideoDevice);

        VideoTabWidget->setCurrentIndex(0);


        QMetaObject::connectSlotsByName(AVDeviceConfig_VideoDevice);
    } // setupUi

    void retranslateUi(QWidget *AVDeviceConfig_VideoDevice)
    {
        AVDeviceConfig_VideoDevice->setWindowTitle(tr2i18n("Video", 0));
        deviceLabel->setText(tr2i18n("Device:", 0));
        inputLabel->setText(tr2i18n("Input:", 0));
        standardLabel->setText(tr2i18n("Standard:", "Label of a combo box containing video standards like PAL-B, NTSC-M, etc"));
#ifndef UI_QT_NO_TOOLTIP
        mDeviceKComboBox->setToolTip(tr2i18n("Select the device to take video input from", 0));
#endif // QT_NO_TOOLTIP
#ifndef UI_QT_NO_TOOLTIP
        mInputKComboBox->setToolTip(tr2i18n("Select from multiple inputs provided by some devices", 0));
#endif // QT_NO_TOOLTIP
#ifndef UI_QT_NO_TOOLTIP
        mStandardKComboBox->setToolTip(tr2i18n("Select the video standard to use", 0));
#endif // QT_NO_TOOLTIP
        VideoTabWidget->setTabText(VideoTabWidget->indexOf(deviceTab), tr2i18n("Device", 0));
        VideoTabWidget->setTabText(VideoTabWidget->indexOf(controlsTab), tr2i18n("Sliders", 0));
        VideoTabWidget->setTabText(VideoTabWidget->indexOf(optionsTab), tr2i18n("Optio&ns", 0));
        VideoTabWidget->setTabText(VideoTabWidget->indexOf(actionsTab), tr2i18n("Actions", 0));
    } // retranslateUi

};

namespace Ui {
    class AVDeviceConfig_VideoDevice: public Ui_AVDeviceConfig_VideoDevice {};
} // namespace Ui

QT_END_NAMESPACE

#endif // AVDEVICECONFIG_VIDEODEVICE_H

