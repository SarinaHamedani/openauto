/********************************************************************************
** Form generated from reading UI file 'warningdialog.ui'
**
** Created by: Qt User Interface Compiler version 5.12.8
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_WARNINGDIALOG_H
#define UI_WARNINGDIALOG_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QVBoxLayout>

QT_BEGIN_NAMESPACE

class Ui_WarningDialog
{
public:
    QVBoxLayout *verticalLayout;
    QGroupBox *groupBox;
    QVBoxLayout *verticalLayout_2;
    QLabel *label;
    QHBoxLayout *horizontalLayout;
    QPushButton *pushButtonClose;

    void setupUi(QDialog *WarningDialog)
    {
        if (WarningDialog->objectName().isEmpty())
            WarningDialog->setObjectName(QString::fromUtf8("WarningDialog"));
        WarningDialog->resize(500, 300);
        QSizePolicy sizePolicy(QSizePolicy::Expanding, QSizePolicy::Preferred);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(WarningDialog->sizePolicy().hasHeightForWidth());
        WarningDialog->setSizePolicy(sizePolicy);
        WarningDialog->setStyleSheet(QString::fromUtf8("background-color: rgb(186, 189, 182);\n"
"border-color: rgb(0, 0, 0);\n"
""));
        verticalLayout = new QVBoxLayout(WarningDialog);
        verticalLayout->setSpacing(4);
        verticalLayout->setContentsMargins(11, 11, 11, 11);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        verticalLayout->setContentsMargins(4, 4, 4, 4);
        groupBox = new QGroupBox(WarningDialog);
        groupBox->setObjectName(QString::fromUtf8("groupBox"));
        QFont font;
        font.setPointSize(14);
        font.setBold(true);
        font.setWeight(75);
        groupBox->setFont(font);
        groupBox->setStyleSheet(QString::fromUtf8("background-color: rgb(136, 138, 133);\n"
"color: rgb(255, 255, 255);\n"
"border-color: rgb(186, 189, 182);\n"
""));
        groupBox->setAlignment(Qt::AlignHCenter|Qt::AlignTop);
        verticalLayout_2 = new QVBoxLayout(groupBox);
        verticalLayout_2->setSpacing(2);
        verticalLayout_2->setContentsMargins(11, 11, 11, 11);
        verticalLayout_2->setObjectName(QString::fromUtf8("verticalLayout_2"));
        verticalLayout_2->setContentsMargins(2, 2, 2, 2);
        label = new QLabel(groupBox);
        label->setObjectName(QString::fromUtf8("label"));
        QSizePolicy sizePolicy1(QSizePolicy::Expanding, QSizePolicy::Expanding);
        sizePolicy1.setHorizontalStretch(0);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(label->sizePolicy().hasHeightForWidth());
        label->setSizePolicy(sizePolicy1);
        label->setStyleSheet(QString::fromUtf8("background-color: rgb(136, 138, 133);"));
        label->setLineWidth(1);
        label->setAlignment(Qt::AlignHCenter|Qt::AlignTop);
        label->setWordWrap(true);

        verticalLayout_2->addWidget(label);


        verticalLayout->addWidget(groupBox);

        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setSpacing(6);
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        pushButtonClose = new QPushButton(WarningDialog);
        pushButtonClose->setObjectName(QString::fromUtf8("pushButtonClose"));
        pushButtonClose->setMinimumSize(QSize(0, 40));
        pushButtonClose->setMaximumSize(QSize(16777215, 40));
        QFont font1;
        font1.setBold(true);
        font1.setWeight(75);
        pushButtonClose->setFont(font1);
        pushButtonClose->setStyleSheet(QString::fromUtf8("background-color: rgb(186, 189, 182);"));

        horizontalLayout->addWidget(pushButtonClose);


        verticalLayout->addLayout(horizontalLayout);


        retranslateUi(WarningDialog);

        QMetaObject::connectSlotsByName(WarningDialog);
    } // setupUi

    void retranslateUi(QDialog *WarningDialog)
    {
        WarningDialog->setWindowTitle(QApplication::translate("WarningDialog", "Warning", nullptr));
        groupBox->setTitle(QApplication::translate("WarningDialog", "Safety Information", nullptr));
        label->setText(QApplication::translate("WarningDialog", "<html><head/><body><p><span style=\" font-weight:600; color:#271191;\">WARNING!</span></p><p><span style=\" font-weight:600; color:#271191;\">Distraction may cause accidents. Do not attempt to operate while driving. Always concentrate on driving and obey Traffic Regulations. You assume total responsibility and risk for using this software.</span></p><p><span style=\" font-weight:600; color:#271191;\">This software is not certified by Google Inc. It is created for R&amp;D purposes and may not work as expected by the original authors. Do not use while driving.</span></p><p><span style=\" font-weight:600; color:#271191;\">You use this software at your own risk.</span></p></body></html>", nullptr));
        pushButtonClose->setText(QApplication::translate("WarningDialog", "OK", nullptr));
    } // retranslateUi

};

namespace Ui {
    class WarningDialog: public Ui_WarningDialog {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_WARNINGDIALOG_H
