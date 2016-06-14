#include <kdialog.h>
#include <klocale.h>

/********************************************************************************
** Form generated from reading UI file 'wlmchatsessioninkpopup.ui'
**
** Created by: Qt User Interface Compiler version 4.8.7
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_WLMCHATSESSIONINKPOPUP_H
#define UI_WLMCHATSESSIONINKPOPUP_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtGui/QApplication>
#include <QtGui/QButtonGroup>
#include <QtGui/QHBoxLayout>
#include <QtGui/QHeaderView>
#include <QtGui/QPushButton>
#include <QtGui/QSlider>
#include <QtGui/QVBoxLayout>
#include <QtGui/QWidget>
#include "wlmchatsessioninkarea.h"

QT_BEGIN_NAMESPACE

class Ui_InkWindow
{
public:
    QHBoxLayout *horizontalLayout_2;
    QHBoxLayout *horizontalLayout;
    WlmChatSessionInkArea *m_inkArea;
    QVBoxLayout *verticalLayout;
    QPushButton *send_btn;
    QPushButton *clear_btn;
    QPushButton *color_btn;
    QSlider *pen_size_slider;

    void setupUi(QWidget *InkWindow)
    {
        if (InkWindow->objectName().isEmpty())
            InkWindow->setObjectName(QString::fromUtf8("InkWindow"));
        InkWindow->resize(414, 116);
        horizontalLayout_2 = new QHBoxLayout(InkWindow);
        horizontalLayout_2->setSpacing(0);
        horizontalLayout_2->setContentsMargins(0, 0, 0, 0);
        horizontalLayout_2->setObjectName(QString::fromUtf8("horizontalLayout_2"));
        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setSpacing(0);
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        horizontalLayout->setSizeConstraint(QLayout::SetMaximumSize);
        m_inkArea = new WlmChatSessionInkArea(InkWindow);
        m_inkArea->setObjectName(QString::fromUtf8("m_inkArea"));
        QSizePolicy sizePolicy(QSizePolicy::Expanding, QSizePolicy::Expanding);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(m_inkArea->sizePolicy().hasHeightForWidth());
        m_inkArea->setSizePolicy(sizePolicy);

        horizontalLayout->addWidget(m_inkArea);

        verticalLayout = new QVBoxLayout();
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        send_btn = new QPushButton(InkWindow);
        send_btn->setObjectName(QString::fromUtf8("send_btn"));

        verticalLayout->addWidget(send_btn);

        clear_btn = new QPushButton(InkWindow);
        clear_btn->setObjectName(QString::fromUtf8("clear_btn"));

        verticalLayout->addWidget(clear_btn);

        color_btn = new QPushButton(InkWindow);
        color_btn->setObjectName(QString::fromUtf8("color_btn"));

        verticalLayout->addWidget(color_btn);

        pen_size_slider = new QSlider(InkWindow);
        pen_size_slider->setObjectName(QString::fromUtf8("pen_size_slider"));
        QSizePolicy sizePolicy1(QSizePolicy::Fixed, QSizePolicy::Expanding);
        sizePolicy1.setHorizontalStretch(80);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(pen_size_slider->sizePolicy().hasHeightForWidth());
        pen_size_slider->setSizePolicy(sizePolicy1);
        pen_size_slider->setAutoFillBackground(true);
        pen_size_slider->setMinimum(1);
        pen_size_slider->setMaximum(5);
        pen_size_slider->setPageStep(1);
        pen_size_slider->setSliderPosition(3);
        pen_size_slider->setTracking(true);
        pen_size_slider->setOrientation(Qt::Horizontal);
        pen_size_slider->setInvertedAppearance(false);

        verticalLayout->addWidget(pen_size_slider);


        horizontalLayout->addLayout(verticalLayout);


        horizontalLayout_2->addLayout(horizontalLayout);


        retranslateUi(InkWindow);
        QObject::connect(clear_btn, SIGNAL(clicked()), m_inkArea, SLOT(slotClear()));
        QObject::connect(color_btn, SIGNAL(clicked()), m_inkArea, SLOT(slotColor()));
        QObject::connect(send_btn, SIGNAL(clicked()), m_inkArea, SLOT(slotSend()));
        QObject::connect(pen_size_slider, SIGNAL(valueChanged(int)), m_inkArea, SLOT(slotChangePenSize(int)));

        QMetaObject::connectSlotsByName(InkWindow);
    } // setupUi

    void retranslateUi(QWidget *InkWindow)
    {
        send_btn->setText(tr2i18n("Send", 0));
        clear_btn->setText(tr2i18n("Clear", 0));
        color_btn->setText(tr2i18n("Color", 0));
        Q_UNUSED(InkWindow);
    } // retranslateUi

};

namespace Ui {
    class InkWindow: public Ui_InkWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // WLMCHATSESSIONINKPOPUP_H

