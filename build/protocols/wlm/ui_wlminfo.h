#include <kdialog.h>
#include <klocale.h>

/********************************************************************************
** Form generated from reading UI file 'wlminfo.ui'
**
** Created by: Qt User Interface Compiler version 4.8.7
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_WLMINFO_H
#define UI_WLMINFO_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtGui/QApplication>
#include <QtGui/QButtonGroup>
#include <QtGui/QCheckBox>
#include <QtGui/QFormLayout>
#include <QtGui/QGroupBox>
#include <QtGui/QHeaderView>
#include <QtGui/QLabel>
#include <QtGui/QLineEdit>
#include <QtGui/QSpacerItem>
#include <QtGui/QVBoxLayout>
#include <QtGui/QWidget>

QT_BEGIN_NAMESPACE

class Ui_WLMInfo
{
public:
    QVBoxLayout *verticalLayout;
    QFormLayout *formLayout;
    QLabel *TextLabel2_2;
    QLineEdit *m_id;
    QLabel *TextLabel2_2_2;
    QLineEdit *m_displayName;
    QLabel *textLabel1;
    QLineEdit *m_personalMessage;
    QGroupBox *groupBox;
    QFormLayout *formLayout_2;
    QLabel *TextLabel6;
    QLineEdit *m_phw;
    QLabel *TextLabel5;
    QLineEdit *m_phh;
    QLabel *TextLabel7;
    QLineEdit *m_phm;
    QCheckBox *m_reversed;
    QSpacerItem *spacerItem;

    void setupUi(QWidget *WLMInfo)
    {
        if (WLMInfo->objectName().isEmpty())
            WLMInfo->setObjectName(QString::fromUtf8("WLMInfo"));
        WLMInfo->resize(641, 389);
        verticalLayout = new QVBoxLayout(WLMInfo);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        formLayout = new QFormLayout();
        formLayout->setObjectName(QString::fromUtf8("formLayout"));
        TextLabel2_2 = new QLabel(WLMInfo);
        TextLabel2_2->setObjectName(QString::fromUtf8("TextLabel2_2"));
        QSizePolicy sizePolicy(QSizePolicy::Maximum, QSizePolicy::Maximum);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(TextLabel2_2->sizePolicy().hasHeightForWidth());
        TextLabel2_2->setSizePolicy(sizePolicy);

        formLayout->setWidget(0, QFormLayout::LabelRole, TextLabel2_2);

        m_id = new QLineEdit(WLMInfo);
        m_id->setObjectName(QString::fromUtf8("m_id"));
        m_id->setReadOnly(true);

        formLayout->setWidget(0, QFormLayout::FieldRole, m_id);

        TextLabel2_2_2 = new QLabel(WLMInfo);
        TextLabel2_2_2->setObjectName(QString::fromUtf8("TextLabel2_2_2"));
        sizePolicy.setHeightForWidth(TextLabel2_2_2->sizePolicy().hasHeightForWidth());
        TextLabel2_2_2->setSizePolicy(sizePolicy);

        formLayout->setWidget(1, QFormLayout::LabelRole, TextLabel2_2_2);

        m_displayName = new QLineEdit(WLMInfo);
        m_displayName->setObjectName(QString::fromUtf8("m_displayName"));
        m_displayName->setReadOnly(true);

        formLayout->setWidget(1, QFormLayout::FieldRole, m_displayName);

        textLabel1 = new QLabel(WLMInfo);
        textLabel1->setObjectName(QString::fromUtf8("textLabel1"));

        formLayout->setWidget(2, QFormLayout::LabelRole, textLabel1);

        m_personalMessage = new QLineEdit(WLMInfo);
        m_personalMessage->setObjectName(QString::fromUtf8("m_personalMessage"));
        m_personalMessage->setReadOnly(true);

        formLayout->setWidget(2, QFormLayout::FieldRole, m_personalMessage);


        verticalLayout->addLayout(formLayout);

        groupBox = new QGroupBox(WLMInfo);
        groupBox->setObjectName(QString::fromUtf8("groupBox"));
        formLayout_2 = new QFormLayout(groupBox);
        formLayout_2->setObjectName(QString::fromUtf8("formLayout_2"));
        TextLabel6 = new QLabel(groupBox);
        TextLabel6->setObjectName(QString::fromUtf8("TextLabel6"));

        formLayout_2->setWidget(0, QFormLayout::LabelRole, TextLabel6);

        m_phw = new QLineEdit(groupBox);
        m_phw->setObjectName(QString::fromUtf8("m_phw"));
        m_phw->setReadOnly(true);

        formLayout_2->setWidget(0, QFormLayout::FieldRole, m_phw);

        TextLabel5 = new QLabel(groupBox);
        TextLabel5->setObjectName(QString::fromUtf8("TextLabel5"));

        formLayout_2->setWidget(1, QFormLayout::LabelRole, TextLabel5);

        m_phh = new QLineEdit(groupBox);
        m_phh->setObjectName(QString::fromUtf8("m_phh"));
        m_phh->setReadOnly(true);

        formLayout_2->setWidget(1, QFormLayout::FieldRole, m_phh);

        TextLabel7 = new QLabel(groupBox);
        TextLabel7->setObjectName(QString::fromUtf8("TextLabel7"));

        formLayout_2->setWidget(2, QFormLayout::LabelRole, TextLabel7);

        m_phm = new QLineEdit(groupBox);
        m_phm->setObjectName(QString::fromUtf8("m_phm"));
        m_phm->setReadOnly(true);

        formLayout_2->setWidget(2, QFormLayout::FieldRole, m_phm);


        verticalLayout->addWidget(groupBox);

        m_reversed = new QCheckBox(WLMInfo);
        m_reversed->setObjectName(QString::fromUtf8("m_reversed"));

        verticalLayout->addWidget(m_reversed);

        spacerItem = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout->addItem(spacerItem);

        QWidget::setTabOrder(m_id, m_displayName);
        QWidget::setTabOrder(m_displayName, m_personalMessage);
        QWidget::setTabOrder(m_personalMessage, m_phw);
        QWidget::setTabOrder(m_phw, m_phh);
        QWidget::setTabOrder(m_phh, m_phm);
        QWidget::setTabOrder(m_phm, m_reversed);

        retranslateUi(WLMInfo);

        QMetaObject::connectSlotsByName(WLMInfo);
    } // setupUi

    void retranslateUi(QWidget *WLMInfo)
    {
        TextLabel2_2->setText(tr2i18n("Email address:", 0));
        TextLabel2_2_2->setText(tr2i18n("Display name:", 0));
        textLabel1->setText(tr2i18n("Personal message:", 0));
        groupBox->setTitle(tr2i18n("Phones", 0));
        TextLabel6->setText(tr2i18n("Work:", 0));
        TextLabel5->setText(tr2i18n("Home:", 0));
        TextLabel7->setText(tr2i18n("Mobile:", 0));
#ifndef UI_QT_NO_TOOLTIP
        m_reversed->setToolTip(tr2i18n("Show whether you are on the contact list of this user", 0));
#endif // QT_NO_TOOLTIP
#ifndef UI_QT_NO_WHATSTHIS
        m_reversed->setWhatsThis(tr2i18n("If this box is checked, you are on this user's contact list.\n"
"If not, the user has not added you to their list, or has removed you.", 0));
#endif // QT_NO_WHATSTHIS
        m_reversed->setText(tr2i18n("I am on &the contact list of this contact", 0));
        Q_UNUSED(WLMInfo);
    } // retranslateUi

};

namespace Ui {
    class WLMInfo: public Ui_WLMInfo {};
} // namespace Ui

QT_END_NAMESPACE

#endif // WLMINFO_H

