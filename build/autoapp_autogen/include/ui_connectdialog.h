/********************************************************************************
** Form generated from reading UI file 'connectdialog.ui'
**
** Created by: Qt User Interface Compiler version 5.12.8
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_CONNECTDIALOG_H
#define UI_CONNECTDIALOG_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QFormLayout>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QListWidget>
#include <QtWidgets/QProgressBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_ConnectDialog
{
public:
    QVBoxLayout *verticalLayout;
    QGroupBox *groupBoxIPAddress;
    QVBoxLayout *verticalLayout_2;
    QLineEdit *lineEditIPAddress;
    QGroupBox *groupBoxRecent;
    QHBoxLayout *horizontalLayout_2;
    QListWidget *listWidgetClients;
    QWidget *horizontalWidget;
    QVBoxLayout *verticalLayout_3;
    QPushButton *pushButtonUpdate;
    QSpacerItem *verticalSpacer_2;
    QProgressBar *progressBarConnect;
    QPushButton *pushButtonConnect;
    QSpacerItem *verticalSpacer;
    QPushButton *pushButtonCancel;
    QWidget *formWidget;
    QFormLayout *formLayout;
    QLabel *labelCopyrightsInfoIcon;
    QLabel *labelHeadUnitServerInfo;

    void setupUi(QDialog *ConnectDialog)
    {
        if (ConnectDialog->objectName().isEmpty())
            ConnectDialog->setObjectName(QString::fromUtf8("ConnectDialog"));
        ConnectDialog->resize(500, 300);
        QSizePolicy sizePolicy(QSizePolicy::Expanding, QSizePolicy::Expanding);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(ConnectDialog->sizePolicy().hasHeightForWidth());
        ConnectDialog->setSizePolicy(sizePolicy);
        ConnectDialog->setMinimumSize(QSize(500, 300));
        ConnectDialog->setMaximumSize(QSize(16777215, 300));
        ConnectDialog->setStyleSheet(QString::fromUtf8("background-color: rgb(46, 52, 54);\n"
"color: rgb(255, 255, 255);"));
        verticalLayout = new QVBoxLayout(ConnectDialog);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        verticalLayout->setContentsMargins(-1, 4, -1, 9);
        groupBoxIPAddress = new QGroupBox(ConnectDialog);
        groupBoxIPAddress->setObjectName(QString::fromUtf8("groupBoxIPAddress"));
        QSizePolicy sizePolicy1(QSizePolicy::Expanding, QSizePolicy::Fixed);
        sizePolicy1.setHorizontalStretch(0);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(groupBoxIPAddress->sizePolicy().hasHeightForWidth());
        groupBoxIPAddress->setSizePolicy(sizePolicy1);
        verticalLayout_2 = new QVBoxLayout(groupBoxIPAddress);
        verticalLayout_2->setObjectName(QString::fromUtf8("verticalLayout_2"));
        verticalLayout_2->setContentsMargins(-1, 2, -1, 2);
        lineEditIPAddress = new QLineEdit(groupBoxIPAddress);
        lineEditIPAddress->setObjectName(QString::fromUtf8("lineEditIPAddress"));
        lineEditIPAddress->setMinimumSize(QSize(0, 32));
        lineEditIPAddress->setMaximumSize(QSize(16777215, 32));
        QFont font;
        font.setPointSize(14);
        font.setBold(true);
        font.setWeight(75);
        lineEditIPAddress->setFont(font);
        lineEditIPAddress->setStyleSheet(QString::fromUtf8("background-color: rgb(85, 87, 83);\n"
"color: rgb(255, 255, 255);"));
        lineEditIPAddress->setAlignment(Qt::AlignCenter);
        lineEditIPAddress->setDragEnabled(false);

        verticalLayout_2->addWidget(lineEditIPAddress);


        verticalLayout->addWidget(groupBoxIPAddress);

        groupBoxRecent = new QGroupBox(ConnectDialog);
        groupBoxRecent->setObjectName(QString::fromUtf8("groupBoxRecent"));
        QSizePolicy sizePolicy2(QSizePolicy::Expanding, QSizePolicy::Minimum);
        sizePolicy2.setHorizontalStretch(0);
        sizePolicy2.setVerticalStretch(0);
        sizePolicy2.setHeightForWidth(groupBoxRecent->sizePolicy().hasHeightForWidth());
        groupBoxRecent->setSizePolicy(sizePolicy2);
        groupBoxRecent->setMinimumSize(QSize(0, 100));
        horizontalLayout_2 = new QHBoxLayout(groupBoxRecent);
        horizontalLayout_2->setObjectName(QString::fromUtf8("horizontalLayout_2"));
        horizontalLayout_2->setContentsMargins(-1, 2, -1, 2);
        listWidgetClients = new QListWidget(groupBoxRecent);
        listWidgetClients->setObjectName(QString::fromUtf8("listWidgetClients"));
        listWidgetClients->setFont(font);
        listWidgetClients->setStyleSheet(QString::fromUtf8("background-color: rgb(85, 87, 83);\n"
"color: rgb(255, 255, 255);"));
        listWidgetClients->setGridSize(QSize(0, 30));
        listWidgetClients->setUniformItemSizes(false);

        horizontalLayout_2->addWidget(listWidgetClients);

        horizontalWidget = new QWidget(groupBoxRecent);
        horizontalWidget->setObjectName(QString::fromUtf8("horizontalWidget"));
        QSizePolicy sizePolicy3(QSizePolicy::Fixed, QSizePolicy::Expanding);
        sizePolicy3.setHorizontalStretch(0);
        sizePolicy3.setVerticalStretch(0);
        sizePolicy3.setHeightForWidth(horizontalWidget->sizePolicy().hasHeightForWidth());
        horizontalWidget->setSizePolicy(sizePolicy3);
        horizontalWidget->setMinimumSize(QSize(130, 0));
        horizontalWidget->setMaximumSize(QSize(130, 16777215));
        verticalLayout_3 = new QVBoxLayout(horizontalWidget);
        verticalLayout_3->setObjectName(QString::fromUtf8("verticalLayout_3"));
        verticalLayout_3->setContentsMargins(-1, 0, -1, 0);
        pushButtonUpdate = new QPushButton(horizontalWidget);
        pushButtonUpdate->setObjectName(QString::fromUtf8("pushButtonUpdate"));
        sizePolicy1.setHeightForWidth(pushButtonUpdate->sizePolicy().hasHeightForWidth());
        pushButtonUpdate->setSizePolicy(sizePolicy1);
        pushButtonUpdate->setMinimumSize(QSize(120, 30));
        QFont font1;
        font1.setBold(true);
        font1.setWeight(75);
        pushButtonUpdate->setFont(font1);
        pushButtonUpdate->setStyleSheet(QString::fromUtf8("background-color: rgba(186, 189, 182, 0.5);\n"
"border-radius: 4px;\n"
"border: 2px solid rgba(255,255,255,0.5);\n"
"color: rgb(255, 255, 255);"));

        verticalLayout_3->addWidget(pushButtonUpdate);

        verticalSpacer_2 = new QSpacerItem(20, 10, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout_3->addItem(verticalSpacer_2);

        progressBarConnect = new QProgressBar(horizontalWidget);
        progressBarConnect->setObjectName(QString::fromUtf8("progressBarConnect"));
        sizePolicy1.setHeightForWidth(progressBarConnect->sizePolicy().hasHeightForWidth());
        progressBarConnect->setSizePolicy(sizePolicy1);
        progressBarConnect->setMinimumSize(QSize(120, 30));
        QFont font2;
        font2.setKerning(true);
        progressBarConnect->setFont(font2);
        progressBarConnect->setStyleSheet(QString::fromUtf8("background-color: rgba(186, 189, 182, 0.5);\n"
"border-radius: 4px;\n"
"border: 2px solid rgba(255,255,255,0.5);\n"
"color: rgb(255, 255, 255);"));
        progressBarConnect->setMaximum(0);
        progressBarConnect->setValue(0);
        progressBarConnect->setAlignment(Qt::AlignLeading|Qt::AlignLeft|Qt::AlignVCenter);
        progressBarConnect->setTextVisible(true);

        verticalLayout_3->addWidget(progressBarConnect);

        pushButtonConnect = new QPushButton(horizontalWidget);
        pushButtonConnect->setObjectName(QString::fromUtf8("pushButtonConnect"));
        sizePolicy1.setHeightForWidth(pushButtonConnect->sizePolicy().hasHeightForWidth());
        pushButtonConnect->setSizePolicy(sizePolicy1);
        pushButtonConnect->setMinimumSize(QSize(120, 30));
        QFont font3;
        font3.setBold(true);
        font3.setWeight(75);
        font3.setStyleStrategy(QFont::PreferDefault);
        pushButtonConnect->setFont(font3);
        pushButtonConnect->setStyleSheet(QString::fromUtf8("background-color: rgba(186, 189, 182, 0.5);\n"
"border-radius: 4px;\n"
"border: 2px solid rgba(255,255,255,0.5);\n"
"color: rgb(255, 255, 255);"));

        verticalLayout_3->addWidget(pushButtonConnect);

        verticalSpacer = new QSpacerItem(20, 10, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout_3->addItem(verticalSpacer);

        pushButtonCancel = new QPushButton(horizontalWidget);
        pushButtonCancel->setObjectName(QString::fromUtf8("pushButtonCancel"));
        sizePolicy1.setHeightForWidth(pushButtonCancel->sizePolicy().hasHeightForWidth());
        pushButtonCancel->setSizePolicy(sizePolicy1);
        pushButtonCancel->setMinimumSize(QSize(120, 30));
        pushButtonCancel->setFont(font1);
        pushButtonCancel->setStyleSheet(QString::fromUtf8("background-color: rgba(186, 189, 182, 0.5);\n"
"border-radius: 4px;\n"
"border: 2px solid rgba(255,255,255,0.5);\n"
"color: rgb(255, 255, 255);"));

        verticalLayout_3->addWidget(pushButtonCancel);


        horizontalLayout_2->addWidget(horizontalWidget);


        verticalLayout->addWidget(groupBoxRecent);

        formWidget = new QWidget(ConnectDialog);
        formWidget->setObjectName(QString::fromUtf8("formWidget"));
        QSizePolicy sizePolicy4(QSizePolicy::Expanding, QSizePolicy::Preferred);
        sizePolicy4.setHorizontalStretch(0);
        sizePolicy4.setVerticalStretch(0);
        sizePolicy4.setHeightForWidth(formWidget->sizePolicy().hasHeightForWidth());
        formWidget->setSizePolicy(sizePolicy4);
        formLayout = new QFormLayout(formWidget);
        formLayout->setObjectName(QString::fromUtf8("formLayout"));
        formLayout->setContentsMargins(-1, 2, -1, 6);
        labelCopyrightsInfoIcon = new QLabel(formWidget);
        labelCopyrightsInfoIcon->setObjectName(QString::fromUtf8("labelCopyrightsInfoIcon"));

        formLayout->setWidget(0, QFormLayout::LabelRole, labelCopyrightsInfoIcon);

        labelHeadUnitServerInfo = new QLabel(formWidget);
        labelHeadUnitServerInfo->setObjectName(QString::fromUtf8("labelHeadUnitServerInfo"));
        sizePolicy1.setHeightForWidth(labelHeadUnitServerInfo->sizePolicy().hasHeightForWidth());
        labelHeadUnitServerInfo->setSizePolicy(sizePolicy1);
        labelHeadUnitServerInfo->setWordWrap(true);

        formLayout->setWidget(0, QFormLayout::FieldRole, labelHeadUnitServerInfo);


        verticalLayout->addWidget(formWidget);


        retranslateUi(ConnectDialog);

        QMetaObject::connectSlotsByName(ConnectDialog);
    } // setupUi

    void retranslateUi(QDialog *ConnectDialog)
    {
        ConnectDialog->setWindowTitle(QApplication::translate("ConnectDialog", "Connect to device", nullptr));
        groupBoxIPAddress->setTitle(QApplication::translate("ConnectDialog", "IP Address", nullptr));
        lineEditIPAddress->setText(QString());
        groupBoxRecent->setTitle(QApplication::translate("ConnectDialog", "Clients", nullptr));
        pushButtonUpdate->setText(QApplication::translate("ConnectDialog", "Update", nullptr));
        pushButtonConnect->setText(QApplication::translate("ConnectDialog", "Connect", nullptr));
        pushButtonCancel->setText(QApplication::translate("ConnectDialog", "Close", nullptr));
        labelCopyrightsInfoIcon->setText(QApplication::translate("ConnectDialog", "<html><head/><body><p><img src=\":/ico_info.png\"/></p></body></html>", nullptr));
        labelHeadUnitServerInfo->setText(QApplication::translate("ConnectDialog", "<html><head/><body><p><span style=\" font-style:italic;\">In order to use wireless mode you must enable head unit server in developer settings.</span></p></body></html>", nullptr));
    } // retranslateUi

};

namespace Ui {
    class ConnectDialog: public Ui_ConnectDialog {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_CONNECTDIALOG_H
