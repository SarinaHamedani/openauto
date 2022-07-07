/********************************************************************************
** Form generated from reading UI file 'updatedialog.ui'
**
** Created by: Qt User Interface Compiler version 5.12.8
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_UPDATEDIALOG_H
#define UI_UPDATEDIALOG_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QFormLayout>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QProgressBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_UpdateDialog
{
public:
    QVBoxLayout *verticalLayout;
    QGroupBox *groupBoxRecent;
    QFormLayout *formLayout_2;
    QSpacerItem *verticalSpacer_2;
    QLabel *labelCsmt;
    QWidget *csmt;
    QHBoxLayout *horizontalLayout_2;
    QLabel *labelCsmtOK;
    QPushButton *pushButtonUpdateCsmt;
    QProgressBar *progressBarCsmt;
    QLabel *labelUdev;
    QWidget *udev;
    QHBoxLayout *horizontalLayout_3;
    QLabel *labelUdevOK;
    QPushButton *pushButtonUpdateUdev;
    QProgressBar *progressBarUdev;
    QLabel *labelOpenauto;
    QWidget *openauto;
    QHBoxLayout *horizontalLayout_4;
    QLabel *labelOpenautoOK;
    QPushButton *pushButtonUpdateOpenauto;
    QProgressBar *progressBarOpenauto;
    QLabel *labelDownload;
    QWidget *systemupdate;
    QHBoxLayout *horizontalLayout_6;
    QLabel *labelNoStorage;
    QWidget *system;
    QHBoxLayout *horizontalLayout_5;
    QLabel *labelSystemOK;
    QLabel *labelSystemReadyInstall;
    QPushButton *pushButtonUpdateSystem;
    QProgressBar *progressBarSystem;
    QLabel *labelSystem;
    QWidget *verticalWidget;
    QHBoxLayout *horizontalLayout;
    QPushButton *pushButtonUpdateCheck;
    QLabel *labelUpdateChecking;
    QPushButton *pushButtonUpdateCancel;
    QPushButton *pushButtonClose;

    void setupUi(QDialog *UpdateDialog)
    {
        if (UpdateDialog->objectName().isEmpty())
            UpdateDialog->setObjectName(QString::fromUtf8("UpdateDialog"));
        UpdateDialog->resize(731, 260);
        QSizePolicy sizePolicy(QSizePolicy::Expanding, QSizePolicy::Expanding);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(UpdateDialog->sizePolicy().hasHeightForWidth());
        UpdateDialog->setSizePolicy(sizePolicy);
        UpdateDialog->setMinimumSize(QSize(500, 260));
        UpdateDialog->setMaximumSize(QSize(731, 260));
        UpdateDialog->setStyleSheet(QString::fromUtf8("background-color: rgb(46, 52, 54);\n"
"color: rgb(255, 255, 255);"));
        verticalLayout = new QVBoxLayout(UpdateDialog);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        groupBoxRecent = new QGroupBox(UpdateDialog);
        groupBoxRecent->setObjectName(QString::fromUtf8("groupBoxRecent"));
        QSizePolicy sizePolicy1(QSizePolicy::Expanding, QSizePolicy::Minimum);
        sizePolicy1.setHorizontalStretch(0);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(groupBoxRecent->sizePolicy().hasHeightForWidth());
        groupBoxRecent->setSizePolicy(sizePolicy1);
        groupBoxRecent->setMinimumSize(QSize(0, 100));
        groupBoxRecent->setAlignment(Qt::AlignCenter);
        formLayout_2 = new QFormLayout(groupBoxRecent);
        formLayout_2->setObjectName(QString::fromUtf8("formLayout_2"));
        formLayout_2->setHorizontalSpacing(30);
        formLayout_2->setContentsMargins(-1, 2, -1, 2);
        verticalSpacer_2 = new QSpacerItem(20, 4, QSizePolicy::Minimum, QSizePolicy::Expanding);

        formLayout_2->setItem(8, QFormLayout::SpanningRole, verticalSpacer_2);

        labelCsmt = new QLabel(groupBoxRecent);
        labelCsmt->setObjectName(QString::fromUtf8("labelCsmt"));

        formLayout_2->setWidget(0, QFormLayout::FieldRole, labelCsmt);

        csmt = new QWidget(groupBoxRecent);
        csmt->setObjectName(QString::fromUtf8("csmt"));
        QSizePolicy sizePolicy2(QSizePolicy::Minimum, QSizePolicy::Preferred);
        sizePolicy2.setHorizontalStretch(0);
        sizePolicy2.setVerticalStretch(0);
        sizePolicy2.setHeightForWidth(csmt->sizePolicy().hasHeightForWidth());
        csmt->setSizePolicy(sizePolicy2);
        horizontalLayout_2 = new QHBoxLayout(csmt);
        horizontalLayout_2->setSpacing(0);
        horizontalLayout_2->setObjectName(QString::fromUtf8("horizontalLayout_2"));
        horizontalLayout_2->setContentsMargins(0, 0, 0, 0);
        labelCsmtOK = new QLabel(csmt);
        labelCsmtOK->setObjectName(QString::fromUtf8("labelCsmtOK"));
        QSizePolicy sizePolicy3(QSizePolicy::Fixed, QSizePolicy::Fixed);
        sizePolicy3.setHorizontalStretch(0);
        sizePolicy3.setVerticalStretch(0);
        sizePolicy3.setHeightForWidth(labelCsmtOK->sizePolicy().hasHeightForWidth());
        labelCsmtOK->setSizePolicy(sizePolicy3);
        labelCsmtOK->setMinimumSize(QSize(140, 30));
        labelCsmtOK->setMaximumSize(QSize(140, 30));
        QFont font;
        font.setBold(true);
        font.setWeight(75);
        labelCsmtOK->setFont(font);
        labelCsmtOK->setStyleSheet(QString::fromUtf8("background-color: rgb(78, 154, 6);\n"
"border-radius: 4px;\n"
"border: 2px solid rgba(255,255,255,0.5);"));
        labelCsmtOK->setAlignment(Qt::AlignCenter);

        horizontalLayout_2->addWidget(labelCsmtOK);

        pushButtonUpdateCsmt = new QPushButton(csmt);
        pushButtonUpdateCsmt->setObjectName(QString::fromUtf8("pushButtonUpdateCsmt"));
        sizePolicy3.setHeightForWidth(pushButtonUpdateCsmt->sizePolicy().hasHeightForWidth());
        pushButtonUpdateCsmt->setSizePolicy(sizePolicy3);
        pushButtonUpdateCsmt->setMinimumSize(QSize(140, 30));
        pushButtonUpdateCsmt->setMaximumSize(QSize(140, 30));
        pushButtonUpdateCsmt->setFont(font);
        pushButtonUpdateCsmt->setStyleSheet(QString::fromUtf8("background-color: rgb(164, 0, 0);\n"
"border-radius: 4px;\n"
"border: 2px solid rgba(255,255,255,0.5);\n"
"color: rgb(255, 255, 255);"));

        horizontalLayout_2->addWidget(pushButtonUpdateCsmt);

        progressBarCsmt = new QProgressBar(csmt);
        progressBarCsmt->setObjectName(QString::fromUtf8("progressBarCsmt"));
        sizePolicy3.setHeightForWidth(progressBarCsmt->sizePolicy().hasHeightForWidth());
        progressBarCsmt->setSizePolicy(sizePolicy3);
        progressBarCsmt->setMinimumSize(QSize(140, 30));
        progressBarCsmt->setMaximumSize(QSize(140, 30));
        progressBarCsmt->setStyleSheet(QString::fromUtf8("background-color: rgba(186, 189, 182, 0.5);\n"
"border-radius: 4px;\n"
"border: 2px solid rgba(255,255,255,0.5);\n"
"color: rgb(255, 255, 255);"));
        progressBarCsmt->setMaximum(0);
        progressBarCsmt->setValue(0);

        horizontalLayout_2->addWidget(progressBarCsmt);


        formLayout_2->setWidget(0, QFormLayout::LabelRole, csmt);

        labelUdev = new QLabel(groupBoxRecent);
        labelUdev->setObjectName(QString::fromUtf8("labelUdev"));

        formLayout_2->setWidget(1, QFormLayout::FieldRole, labelUdev);

        udev = new QWidget(groupBoxRecent);
        udev->setObjectName(QString::fromUtf8("udev"));
        sizePolicy2.setHeightForWidth(udev->sizePolicy().hasHeightForWidth());
        udev->setSizePolicy(sizePolicy2);
        horizontalLayout_3 = new QHBoxLayout(udev);
        horizontalLayout_3->setSpacing(0);
        horizontalLayout_3->setObjectName(QString::fromUtf8("horizontalLayout_3"));
        horizontalLayout_3->setContentsMargins(0, 0, 0, 0);
        labelUdevOK = new QLabel(udev);
        labelUdevOK->setObjectName(QString::fromUtf8("labelUdevOK"));
        sizePolicy3.setHeightForWidth(labelUdevOK->sizePolicy().hasHeightForWidth());
        labelUdevOK->setSizePolicy(sizePolicy3);
        labelUdevOK->setMinimumSize(QSize(140, 30));
        labelUdevOK->setMaximumSize(QSize(140, 30));
        labelUdevOK->setFont(font);
        labelUdevOK->setStyleSheet(QString::fromUtf8("background-color: rgb(78, 154, 6);\n"
"border-radius: 4px;\n"
"border: 2px solid rgba(255,255,255,0.5);"));
        labelUdevOK->setAlignment(Qt::AlignCenter);

        horizontalLayout_3->addWidget(labelUdevOK);

        pushButtonUpdateUdev = new QPushButton(udev);
        pushButtonUpdateUdev->setObjectName(QString::fromUtf8("pushButtonUpdateUdev"));
        sizePolicy3.setHeightForWidth(pushButtonUpdateUdev->sizePolicy().hasHeightForWidth());
        pushButtonUpdateUdev->setSizePolicy(sizePolicy3);
        pushButtonUpdateUdev->setMinimumSize(QSize(140, 30));
        pushButtonUpdateUdev->setMaximumSize(QSize(140, 30));
        pushButtonUpdateUdev->setFont(font);
        pushButtonUpdateUdev->setStyleSheet(QString::fromUtf8("background-color: rgb(164, 0, 0);\n"
"border-radius: 4px;\n"
"border: 2px solid rgba(255,255,255,0.5);\n"
"color: rgb(255, 255, 255);"));

        horizontalLayout_3->addWidget(pushButtonUpdateUdev);

        progressBarUdev = new QProgressBar(udev);
        progressBarUdev->setObjectName(QString::fromUtf8("progressBarUdev"));
        sizePolicy3.setHeightForWidth(progressBarUdev->sizePolicy().hasHeightForWidth());
        progressBarUdev->setSizePolicy(sizePolicy3);
        progressBarUdev->setMinimumSize(QSize(140, 30));
        progressBarUdev->setMaximumSize(QSize(140, 30));
        progressBarUdev->setStyleSheet(QString::fromUtf8("background-color: rgba(186, 189, 182, 0.5);\n"
"border-radius: 4px;\n"
"border: 2px solid rgba(255,255,255,0.5);\n"
"color: rgb(255, 255, 255);"));
        progressBarUdev->setMaximum(0);
        progressBarUdev->setValue(0);

        horizontalLayout_3->addWidget(progressBarUdev);


        formLayout_2->setWidget(1, QFormLayout::LabelRole, udev);

        labelOpenauto = new QLabel(groupBoxRecent);
        labelOpenauto->setObjectName(QString::fromUtf8("labelOpenauto"));

        formLayout_2->setWidget(2, QFormLayout::FieldRole, labelOpenauto);

        openauto = new QWidget(groupBoxRecent);
        openauto->setObjectName(QString::fromUtf8("openauto"));
        sizePolicy2.setHeightForWidth(openauto->sizePolicy().hasHeightForWidth());
        openauto->setSizePolicy(sizePolicy2);
        horizontalLayout_4 = new QHBoxLayout(openauto);
        horizontalLayout_4->setSpacing(0);
        horizontalLayout_4->setObjectName(QString::fromUtf8("horizontalLayout_4"));
        horizontalLayout_4->setContentsMargins(0, 0, 0, 0);
        labelOpenautoOK = new QLabel(openauto);
        labelOpenautoOK->setObjectName(QString::fromUtf8("labelOpenautoOK"));
        sizePolicy3.setHeightForWidth(labelOpenautoOK->sizePolicy().hasHeightForWidth());
        labelOpenautoOK->setSizePolicy(sizePolicy3);
        labelOpenautoOK->setMinimumSize(QSize(140, 30));
        labelOpenautoOK->setMaximumSize(QSize(140, 30));
        labelOpenautoOK->setFont(font);
        labelOpenautoOK->setStyleSheet(QString::fromUtf8("background-color: rgb(78, 154, 6);\n"
"border-radius: 4px;\n"
"border: 2px solid rgba(255,255,255,0.5);"));
        labelOpenautoOK->setAlignment(Qt::AlignCenter);

        horizontalLayout_4->addWidget(labelOpenautoOK);

        pushButtonUpdateOpenauto = new QPushButton(openauto);
        pushButtonUpdateOpenauto->setObjectName(QString::fromUtf8("pushButtonUpdateOpenauto"));
        sizePolicy3.setHeightForWidth(pushButtonUpdateOpenauto->sizePolicy().hasHeightForWidth());
        pushButtonUpdateOpenauto->setSizePolicy(sizePolicy3);
        pushButtonUpdateOpenauto->setMinimumSize(QSize(140, 30));
        pushButtonUpdateOpenauto->setMaximumSize(QSize(140, 30));
        pushButtonUpdateOpenauto->setFont(font);
        pushButtonUpdateOpenauto->setStyleSheet(QString::fromUtf8("background-color: rgb(164, 0, 0);\n"
"border-radius: 4px;\n"
"border: 2px solid rgba(255,255,255,0.5);\n"
"color: rgb(255, 255, 255);"));

        horizontalLayout_4->addWidget(pushButtonUpdateOpenauto);

        progressBarOpenauto = new QProgressBar(openauto);
        progressBarOpenauto->setObjectName(QString::fromUtf8("progressBarOpenauto"));
        sizePolicy3.setHeightForWidth(progressBarOpenauto->sizePolicy().hasHeightForWidth());
        progressBarOpenauto->setSizePolicy(sizePolicy3);
        progressBarOpenauto->setMinimumSize(QSize(140, 30));
        progressBarOpenauto->setMaximumSize(QSize(140, 30));
        progressBarOpenauto->setStyleSheet(QString::fromUtf8("background-color: rgba(186, 189, 182, 0.5);\n"
"border-radius: 4px;\n"
"border: 2px solid rgba(255,255,255,0.5);\n"
"color: rgb(255, 255, 255);"));
        progressBarOpenauto->setMaximum(0);
        progressBarOpenauto->setValue(0);

        horizontalLayout_4->addWidget(progressBarOpenauto);


        formLayout_2->setWidget(2, QFormLayout::LabelRole, openauto);

        labelDownload = new QLabel(groupBoxRecent);
        labelDownload->setObjectName(QString::fromUtf8("labelDownload"));
        QSizePolicy sizePolicy4(QSizePolicy::Expanding, QSizePolicy::Preferred);
        sizePolicy4.setHorizontalStretch(0);
        sizePolicy4.setVerticalStretch(0);
        sizePolicy4.setHeightForWidth(labelDownload->sizePolicy().hasHeightForWidth());
        labelDownload->setSizePolicy(sizePolicy4);
        labelDownload->setFont(font);
        labelDownload->setAlignment(Qt::AlignCenter);

        formLayout_2->setWidget(5, QFormLayout::SpanningRole, labelDownload);

        systemupdate = new QWidget(groupBoxRecent);
        systemupdate->setObjectName(QString::fromUtf8("systemupdate"));
        QSizePolicy sizePolicy5(QSizePolicy::Expanding, QSizePolicy::Fixed);
        sizePolicy5.setHorizontalStretch(0);
        sizePolicy5.setVerticalStretch(0);
        sizePolicy5.setHeightForWidth(systemupdate->sizePolicy().hasHeightForWidth());
        systemupdate->setSizePolicy(sizePolicy5);
        horizontalLayout_6 = new QHBoxLayout(systemupdate);
        horizontalLayout_6->setObjectName(QString::fromUtf8("horizontalLayout_6"));
        horizontalLayout_6->setContentsMargins(0, 0, 0, 0);
        labelNoStorage = new QLabel(systemupdate);
        labelNoStorage->setObjectName(QString::fromUtf8("labelNoStorage"));
        sizePolicy3.setHeightForWidth(labelNoStorage->sizePolicy().hasHeightForWidth());
        labelNoStorage->setSizePolicy(sizePolicy3);
        labelNoStorage->setMinimumSize(QSize(140, 30));
        labelNoStorage->setMaximumSize(QSize(140, 30));
        QFont font1;
        font1.setPointSize(8);
        font1.setBold(false);
        font1.setWeight(50);
        labelNoStorage->setFont(font1);
        labelNoStorage->setStyleSheet(QString::fromUtf8("background-color: rgb(85, 87, 83);\n"
"border-radius: 4px;\n"
"border: 2px solid rgba(255,255,255,0.5);"));
        labelNoStorage->setAlignment(Qt::AlignCenter);

        horizontalLayout_6->addWidget(labelNoStorage);

        system = new QWidget(systemupdate);
        system->setObjectName(QString::fromUtf8("system"));
        sizePolicy2.setHeightForWidth(system->sizePolicy().hasHeightForWidth());
        system->setSizePolicy(sizePolicy2);
        horizontalLayout_5 = new QHBoxLayout(system);
        horizontalLayout_5->setSpacing(0);
        horizontalLayout_5->setObjectName(QString::fromUtf8("horizontalLayout_5"));
        horizontalLayout_5->setContentsMargins(0, 0, 0, 0);
        labelSystemOK = new QLabel(system);
        labelSystemOK->setObjectName(QString::fromUtf8("labelSystemOK"));
        sizePolicy3.setHeightForWidth(labelSystemOK->sizePolicy().hasHeightForWidth());
        labelSystemOK->setSizePolicy(sizePolicy3);
        labelSystemOK->setMinimumSize(QSize(140, 30));
        labelSystemOK->setMaximumSize(QSize(140, 30));
        labelSystemOK->setFont(font);
        labelSystemOK->setStyleSheet(QString::fromUtf8("background-color: rgb(78, 154, 6);\n"
"border-radius: 4px;\n"
"border: 2px solid rgba(255,255,255,0.5);"));
        labelSystemOK->setAlignment(Qt::AlignCenter);

        horizontalLayout_5->addWidget(labelSystemOK);

        labelSystemReadyInstall = new QLabel(system);
        labelSystemReadyInstall->setObjectName(QString::fromUtf8("labelSystemReadyInstall"));
        sizePolicy3.setHeightForWidth(labelSystemReadyInstall->sizePolicy().hasHeightForWidth());
        labelSystemReadyInstall->setSizePolicy(sizePolicy3);
        labelSystemReadyInstall->setMinimumSize(QSize(140, 30));
        labelSystemReadyInstall->setMaximumSize(QSize(140, 30));
        labelSystemReadyInstall->setFont(font);
        labelSystemReadyInstall->setStyleSheet(QString::fromUtf8("background-color: rgb(206, 92, 0);\n"
"border-radius: 4px;\n"
"border: 2px solid rgba(255,255,255,0.5);"));
        labelSystemReadyInstall->setAlignment(Qt::AlignCenter);

        horizontalLayout_5->addWidget(labelSystemReadyInstall);

        pushButtonUpdateSystem = new QPushButton(system);
        pushButtonUpdateSystem->setObjectName(QString::fromUtf8("pushButtonUpdateSystem"));
        sizePolicy3.setHeightForWidth(pushButtonUpdateSystem->sizePolicy().hasHeightForWidth());
        pushButtonUpdateSystem->setSizePolicy(sizePolicy3);
        pushButtonUpdateSystem->setMinimumSize(QSize(140, 30));
        pushButtonUpdateSystem->setMaximumSize(QSize(140, 30));
        pushButtonUpdateSystem->setFont(font);
        pushButtonUpdateSystem->setStyleSheet(QString::fromUtf8("background-color: rgb(164, 0, 0);\n"
"border-radius: 4px;\n"
"border: 2px solid rgba(255,255,255,0.5);\n"
"color: rgb(255, 255, 255);"));

        horizontalLayout_5->addWidget(pushButtonUpdateSystem);

        progressBarSystem = new QProgressBar(system);
        progressBarSystem->setObjectName(QString::fromUtf8("progressBarSystem"));
        progressBarSystem->setEnabled(true);
        sizePolicy3.setHeightForWidth(progressBarSystem->sizePolicy().hasHeightForWidth());
        progressBarSystem->setSizePolicy(sizePolicy3);
        progressBarSystem->setMinimumSize(QSize(140, 30));
        progressBarSystem->setMaximumSize(QSize(140, 30));
        progressBarSystem->setStyleSheet(QString::fromUtf8("background-color: rgba(186, 189, 182, 0.5);\n"
"border-radius: 4px;\n"
"border: 2px solid rgba(255,255,255,0.5);\n"
"color: rgb(255, 255, 255);"));
        progressBarSystem->setMaximum(420);
        progressBarSystem->setValue(0);
        progressBarSystem->setAlignment(Qt::AlignCenter);

        horizontalLayout_5->addWidget(progressBarSystem);


        horizontalLayout_6->addWidget(system);


        formLayout_2->setWidget(3, QFormLayout::LabelRole, systemupdate);

        labelSystem = new QLabel(groupBoxRecent);
        labelSystem->setObjectName(QString::fromUtf8("labelSystem"));
        labelSystem->setWordWrap(false);

        formLayout_2->setWidget(3, QFormLayout::FieldRole, labelSystem);


        verticalLayout->addWidget(groupBoxRecent);

        verticalWidget = new QWidget(UpdateDialog);
        verticalWidget->setObjectName(QString::fromUtf8("verticalWidget"));
        sizePolicy4.setHeightForWidth(verticalWidget->sizePolicy().hasHeightForWidth());
        verticalWidget->setSizePolicy(sizePolicy4);
        horizontalLayout = new QHBoxLayout(verticalWidget);
        horizontalLayout->setSpacing(0);
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        horizontalLayout->setContentsMargins(0, 0, 0, 0);
        pushButtonUpdateCheck = new QPushButton(verticalWidget);
        pushButtonUpdateCheck->setObjectName(QString::fromUtf8("pushButtonUpdateCheck"));
        sizePolicy3.setHeightForWidth(pushButtonUpdateCheck->sizePolicy().hasHeightForWidth());
        pushButtonUpdateCheck->setSizePolicy(sizePolicy3);
        pushButtonUpdateCheck->setMinimumSize(QSize(140, 30));
        pushButtonUpdateCheck->setMaximumSize(QSize(140, 30));
        pushButtonUpdateCheck->setFont(font);
        pushButtonUpdateCheck->setStyleSheet(QString::fromUtf8("background-color: rgba(186, 189, 182, 0.5);\n"
"border-radius: 4px;\n"
"border: 2px solid rgba(255,255,255,0.5);\n"
"color: rgb(255, 255, 255);"));

        horizontalLayout->addWidget(pushButtonUpdateCheck);

        labelUpdateChecking = new QLabel(verticalWidget);
        labelUpdateChecking->setObjectName(QString::fromUtf8("labelUpdateChecking"));
        sizePolicy3.setHeightForWidth(labelUpdateChecking->sizePolicy().hasHeightForWidth());
        labelUpdateChecking->setSizePolicy(sizePolicy3);
        labelUpdateChecking->setMinimumSize(QSize(140, 30));
        labelUpdateChecking->setMaximumSize(QSize(140, 30));
        labelUpdateChecking->setFont(font);
        labelUpdateChecking->setStyleSheet(QString::fromUtf8("background-color: rgba(186, 189, 182, 0.5);\n"
"border-radius: 4px;\n"
"border: 2px solid rgba(255,255,255,0.5);\n"
"color: rgb(255, 255, 255);"));
        labelUpdateChecking->setAlignment(Qt::AlignCenter);

        horizontalLayout->addWidget(labelUpdateChecking);

        pushButtonUpdateCancel = new QPushButton(verticalWidget);
        pushButtonUpdateCancel->setObjectName(QString::fromUtf8("pushButtonUpdateCancel"));
        sizePolicy3.setHeightForWidth(pushButtonUpdateCancel->sizePolicy().hasHeightForWidth());
        pushButtonUpdateCancel->setSizePolicy(sizePolicy3);
        pushButtonUpdateCancel->setMinimumSize(QSize(140, 30));
        pushButtonUpdateCancel->setMaximumSize(QSize(140, 30));
        pushButtonUpdateCancel->setFont(font);
        pushButtonUpdateCancel->setStyleSheet(QString::fromUtf8("background-color: rgba(186, 189, 182, 0.5);\n"
"border-radius: 4px;\n"
"border: 2px solid rgba(255,255,255,0.5);\n"
"color: rgb(255, 255, 255);"));

        horizontalLayout->addWidget(pushButtonUpdateCancel);

        pushButtonClose = new QPushButton(verticalWidget);
        pushButtonClose->setObjectName(QString::fromUtf8("pushButtonClose"));
        sizePolicy3.setHeightForWidth(pushButtonClose->sizePolicy().hasHeightForWidth());
        pushButtonClose->setSizePolicy(sizePolicy3);
        pushButtonClose->setMinimumSize(QSize(140, 30));
        pushButtonClose->setMaximumSize(QSize(140, 30));
        pushButtonClose->setFont(font);
        pushButtonClose->setStyleSheet(QString::fromUtf8("background-color: rgba(186, 189, 182, 0.5);\n"
"border-radius: 4px;\n"
"border: 2px solid rgba(255,255,255,0.5);\n"
"color: rgb(255, 255, 255);"));

        horizontalLayout->addWidget(pushButtonClose);


        verticalLayout->addWidget(verticalWidget);


        retranslateUi(UpdateDialog);

        QMetaObject::connectSlotsByName(UpdateDialog);
    } // setupUi

    void retranslateUi(QDialog *UpdateDialog)
    {
        UpdateDialog->setWindowTitle(QApplication::translate("UpdateDialog", "Connect to device", nullptr));
        groupBoxRecent->setTitle(QApplication::translate("UpdateDialog", "Crankshaft NG Update Menu", nullptr));
        labelCsmt->setText(QApplication::translate("UpdateDialog", "Update Crankshaft Management Tool", nullptr));
        labelCsmtOK->setText(QApplication::translate("UpdateDialog", "OK", nullptr));
        pushButtonUpdateCsmt->setText(QApplication::translate("UpdateDialog", "Update CSMT", nullptr));
        labelUdev->setText(QApplication::translate("UpdateDialog", "Update System UDEV Rules", nullptr));
        labelUdevOK->setText(QApplication::translate("UpdateDialog", "OK", nullptr));
        pushButtonUpdateUdev->setText(QApplication::translate("UpdateDialog", "Update UDEV", nullptr));
        labelOpenauto->setText(QApplication::translate("UpdateDialog", "Update OpenAuto Binaries", nullptr));
        labelOpenautoOK->setText(QApplication::translate("UpdateDialog", "OK", nullptr));
        pushButtonUpdateOpenauto->setText(QApplication::translate("UpdateDialog", "Update OpenAuto", nullptr));
        labelDownload->setText(QString());
        labelNoStorage->setText(QApplication::translate("UpdateDialog", "No CSSTORAGE to\n"
"cache System Updates!", nullptr));
        labelSystemOK->setText(QApplication::translate("UpdateDialog", "OK", nullptr));
        labelSystemReadyInstall->setText(QApplication::translate("UpdateDialog", "Reboot To Install", nullptr));
        pushButtonUpdateSystem->setText(QApplication::translate("UpdateDialog", "Update System", nullptr));
        labelSystem->setText(QApplication::translate("UpdateDialog", "Update System (Download Flash zip)\n"
"This can take some minutes!", nullptr));
        pushButtonUpdateCheck->setText(QApplication::translate("UpdateDialog", "Rescan Updates", nullptr));
        labelUpdateChecking->setText(QApplication::translate("UpdateDialog", "Scanning...", nullptr));
        pushButtonUpdateCancel->setText(QApplication::translate("UpdateDialog", "Cancel Download", nullptr));
        pushButtonClose->setText(QApplication::translate("UpdateDialog", "Close", nullptr));
    } // retranslateUi

};

namespace Ui {
    class UpdateDialog: public Ui_UpdateDialog {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_UPDATEDIALOG_H
