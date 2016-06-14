#include <kdialog.h>
#include <klocale.h>

/********************************************************************************
** Form generated from reading UI file 'otrprefs.ui'
**
** Created by: Qt User Interface Compiler version 4.8.7
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_OTRPREFS_H
#define UI_OTRPREFS_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtGui/QApplication>
#include <QtGui/QButtonGroup>
#include <QtGui/QComboBox>
#include <QtGui/QGridLayout>
#include <QtGui/QGroupBox>
#include <QtGui/QHeaderView>
#include <QtGui/QLabel>
#include <QtGui/QPushButton>
#include <QtGui/QRadioButton>
#include <QtGui/QSpacerItem>
#include <QtGui/QTabWidget>
#include <QtGui/QTableWidget>
#include <QtGui/QWidget>

QT_BEGIN_NAMESPACE

class Ui_OTRPrefsUI
{
public:
    QGridLayout *gridLayout;
    QTabWidget *twSettings;
    QWidget *settings;
    QGridLayout *gridLayout1;
    QGroupBox *groupBox1;
    QGridLayout *gridLayout2;
    QLabel *textLabel2;
    QComboBox *cbKeys;
    QPushButton *btGenFingerprint;
    QLabel *label;
    QLabel *tlFingerprint;
    QSpacerItem *spacerItem;
    QGroupBox *gbPolicy;
    QGridLayout *gridLayout3;
    QRadioButton *kcfg_rbAlways;
    QRadioButton *kcfg_rbManual;
    QRadioButton *kcfg_rbOpportunistic;
    QRadioButton *kcfg_rbNever;
    QSpacerItem *spacerItem1;
    QWidget *fingerprints;
    QGridLayout *gridLayout4;
    QTableWidget *tbFingerprints;
    QPushButton *btVerify;
    QPushButton *btForget;

    void setupUi(QWidget *OTRPrefsUI)
    {
        if (OTRPrefsUI->objectName().isEmpty())
            OTRPrefsUI->setObjectName(QString::fromUtf8("OTRPrefsUI"));
        OTRPrefsUI->resize(548, 495);
        gridLayout = new QGridLayout(OTRPrefsUI);
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        twSettings = new QTabWidget(OTRPrefsUI);
        twSettings->setObjectName(QString::fromUtf8("twSettings"));
        settings = new QWidget();
        settings->setObjectName(QString::fromUtf8("settings"));
        gridLayout1 = new QGridLayout(settings);
        gridLayout1->setObjectName(QString::fromUtf8("gridLayout1"));
        groupBox1 = new QGroupBox(settings);
        groupBox1->setObjectName(QString::fromUtf8("groupBox1"));
        QSizePolicy sizePolicy(QSizePolicy::Expanding, QSizePolicy::Fixed);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(groupBox1->sizePolicy().hasHeightForWidth());
        groupBox1->setSizePolicy(sizePolicy);
        gridLayout2 = new QGridLayout(groupBox1);
        gridLayout2->setObjectName(QString::fromUtf8("gridLayout2"));
        textLabel2 = new QLabel(groupBox1);
        textLabel2->setObjectName(QString::fromUtf8("textLabel2"));
        textLabel2->setWordWrap(false);

        gridLayout2->addWidget(textLabel2, 0, 0, 1, 1);

        cbKeys = new QComboBox(groupBox1);
        cbKeys->setObjectName(QString::fromUtf8("cbKeys"));
        cbKeys->setMaximumSize(QSize(400, 32767));

        gridLayout2->addWidget(cbKeys, 0, 1, 1, 1);

        btGenFingerprint = new QPushButton(groupBox1);
        btGenFingerprint->setObjectName(QString::fromUtf8("btGenFingerprint"));

        gridLayout2->addWidget(btGenFingerprint, 0, 2, 1, 1);

        label = new QLabel(groupBox1);
        label->setObjectName(QString::fromUtf8("label"));

        gridLayout2->addWidget(label, 1, 0, 1, 1);

        tlFingerprint = new QLabel(groupBox1);
        tlFingerprint->setObjectName(QString::fromUtf8("tlFingerprint"));
        tlFingerprint->setFrameShape(QFrame::NoFrame);
        tlFingerprint->setAlignment(Qt::AlignVCenter);
        tlFingerprint->setWordWrap(false);
        tlFingerprint->setTextInteractionFlags(Qt::LinksAccessibleByMouse|Qt::NoTextInteraction|Qt::TextSelectableByMouse);

        gridLayout2->addWidget(tlFingerprint, 1, 1, 1, 1);

        spacerItem = new QSpacerItem(71, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        gridLayout2->addItem(spacerItem, 1, 2, 1, 1);


        gridLayout1->addWidget(groupBox1, 0, 0, 1, 1);

        gbPolicy = new QGroupBox(settings);
        gbPolicy->setObjectName(QString::fromUtf8("gbPolicy"));
        gridLayout3 = new QGridLayout(gbPolicy);
        gridLayout3->setObjectName(QString::fromUtf8("gridLayout3"));
        kcfg_rbAlways = new QRadioButton(gbPolicy);
        kcfg_rbAlways->setObjectName(QString::fromUtf8("kcfg_rbAlways"));
        kcfg_rbAlways->setChecked(false);

        gridLayout3->addWidget(kcfg_rbAlways, 0, 0, 1, 1);

        kcfg_rbManual = new QRadioButton(gbPolicy);
        kcfg_rbManual->setObjectName(QString::fromUtf8("kcfg_rbManual"));
        kcfg_rbManual->setChecked(false);

        gridLayout3->addWidget(kcfg_rbManual, 0, 1, 1, 1);

        kcfg_rbOpportunistic = new QRadioButton(gbPolicy);
        kcfg_rbOpportunistic->setObjectName(QString::fromUtf8("kcfg_rbOpportunistic"));

        gridLayout3->addWidget(kcfg_rbOpportunistic, 1, 0, 1, 1);

        kcfg_rbNever = new QRadioButton(gbPolicy);
        kcfg_rbNever->setObjectName(QString::fromUtf8("kcfg_rbNever"));

        gridLayout3->addWidget(kcfg_rbNever, 1, 1, 1, 1);


        gridLayout1->addWidget(gbPolicy, 1, 0, 1, 1);

        spacerItem1 = new QSpacerItem(20, 161, QSizePolicy::Minimum, QSizePolicy::Expanding);

        gridLayout1->addItem(spacerItem1, 2, 0, 1, 1);

        twSettings->addTab(settings, QString());
        fingerprints = new QWidget();
        fingerprints->setObjectName(QString::fromUtf8("fingerprints"));
        gridLayout4 = new QGridLayout(fingerprints);
        gridLayout4->setObjectName(QString::fromUtf8("gridLayout4"));
        tbFingerprints = new QTableWidget(fingerprints);
        if (tbFingerprints->columnCount() < 5)
            tbFingerprints->setColumnCount(5);
        QTableWidgetItem *__qtablewidgetitem = new QTableWidgetItem();
        tbFingerprints->setHorizontalHeaderItem(0, __qtablewidgetitem);
        QTableWidgetItem *__qtablewidgetitem1 = new QTableWidgetItem();
        tbFingerprints->setHorizontalHeaderItem(1, __qtablewidgetitem1);
        QTableWidgetItem *__qtablewidgetitem2 = new QTableWidgetItem();
        tbFingerprints->setHorizontalHeaderItem(2, __qtablewidgetitem2);
        QTableWidgetItem *__qtablewidgetitem3 = new QTableWidgetItem();
        tbFingerprints->setHorizontalHeaderItem(3, __qtablewidgetitem3);
        QTableWidgetItem *__qtablewidgetitem4 = new QTableWidgetItem();
        tbFingerprints->setHorizontalHeaderItem(4, __qtablewidgetitem4);
        tbFingerprints->setObjectName(QString::fromUtf8("tbFingerprints"));
        tbFingerprints->setFocusPolicy(Qt::WheelFocus);
        tbFingerprints->setEditTriggers(QAbstractItemView::NoEditTriggers);
        tbFingerprints->setSelectionMode(QAbstractItemView::SingleSelection);
        tbFingerprints->setSelectionBehavior(QAbstractItemView::SelectRows);
        tbFingerprints->setColumnCount(5);

        gridLayout4->addWidget(tbFingerprints, 0, 0, 1, 2);

        btVerify = new QPushButton(fingerprints);
        btVerify->setObjectName(QString::fromUtf8("btVerify"));
        btVerify->setEnabled(true);

        gridLayout4->addWidget(btVerify, 1, 0, 1, 1);

        btForget = new QPushButton(fingerprints);
        btForget->setObjectName(QString::fromUtf8("btForget"));
        btForget->setEnabled(false);

        gridLayout4->addWidget(btForget, 1, 1, 1, 1);

        twSettings->addTab(fingerprints, QString());

        gridLayout->addWidget(twSettings, 0, 0, 1, 1);


        retranslateUi(OTRPrefsUI);

        twSettings->setCurrentIndex(0);


        QMetaObject::connectSlotsByName(OTRPrefsUI);
    } // setupUi

    void retranslateUi(QWidget *OTRPrefsUI)
    {
        OTRPrefsUI->setWindowTitle(tr2i18n("OTR Plugin Preferences", 0));
        groupBox1->setTitle(tr2i18n("Private Keys", 0));
        textLabel2->setText(tr2i18n("Account:", 0));
        btGenFingerprint->setText(tr2i18n("&Generate", 0));
        label->setText(tr2i18n("Fingerprint:", 0));
        tlFingerprint->setText(tr2i18n("No Fingerprint", 0));
        gbPolicy->setTitle(tr2i18n("Default OTR Policy", 0));
#ifndef UI_QT_NO_TOOLTIP
        kcfg_rbAlways->setToolTip(tr2i18n("Always encrypt messages", 0));
#endif // QT_NO_TOOLTIP
        kcfg_rbAlways->setText(tr2i18n("Al&ways", 0));
#ifndef UI_QT_NO_TOOLTIP
        kcfg_rbManual->setToolTip(tr2i18n("Encrypt messages if the other side requests an OTR connection", 0));
#endif // QT_NO_TOOLTIP
        kcfg_rbManual->setText(tr2i18n("&Manual", 0));
#ifndef UI_QT_NO_TOOLTIP
        kcfg_rbOpportunistic->setToolTip(tr2i18n("Encrypt messages automatically if the other side supports OTR", 0));
#endif // QT_NO_TOOLTIP
        kcfg_rbOpportunistic->setText(tr2i18n("&Opportunistic", 0));
#ifndef UI_QT_NO_TOOLTIP
        kcfg_rbNever->setToolTip(tr2i18n("Never encrypt messages", 0));
#endif // QT_NO_TOOLTIP
        kcfg_rbNever->setText(tr2i18n("Ne&ver", 0));
        twSettings->setTabText(twSettings->indexOf(settings), tr2i18n("&Settings", 0));
        QTableWidgetItem *___qtablewidgetitem = tbFingerprints->horizontalHeaderItem(0);
        ___qtablewidgetitem->setText(tr2i18n("Contact ID", 0));
        QTableWidgetItem *___qtablewidgetitem1 = tbFingerprints->horizontalHeaderItem(1);
        ___qtablewidgetitem1->setText(tr2i18n("Status", 0));
        QTableWidgetItem *___qtablewidgetitem2 = tbFingerprints->horizontalHeaderItem(2);
        ___qtablewidgetitem2->setText(tr2i18n("Verified", 0));
        QTableWidgetItem *___qtablewidgetitem3 = tbFingerprints->horizontalHeaderItem(3);
        ___qtablewidgetitem3->setText(tr2i18n("Fingerprint", 0));
        QTableWidgetItem *___qtablewidgetitem4 = tbFingerprints->horizontalHeaderItem(4);
        ___qtablewidgetitem4->setText(tr2i18n("Protocol", 0));
        btVerify->setText(tr2i18n("&Verify Fingerprint", 0));
        btForget->setText(tr2i18n("F&orget Fingerprint", 0));
        twSettings->setTabText(twSettings->indexOf(fingerprints), tr2i18n("K&nown Fingerprints", 0));
    } // retranslateUi

};

namespace Ui {
    class OTRPrefsUI: public Ui_OTRPrefsUI {};
} // namespace Ui

QT_END_NAMESPACE

#endif // OTRPREFS_H

