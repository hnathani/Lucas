/********************************************************************************
** Form generated from reading UI file 'newmessage.ui'
**
** Created by: Qt User Interface Compiler version 5.1.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_NEWMESSAGE_H
#define UI_NEWMESSAGE_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QDialog>
#include <QtWidgets/QFrame>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QListWidget>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QTextEdit>

QT_BEGIN_NAMESPACE

class Ui_NewMessage
{
public:
    QTextEdit *messageBody;
    QPushButton *sendButton;
    QPushButton *cancelButton;
    QLabel *bodyLabel;
    QFrame *headerFrame;
    QGridLayout *gridLayout;
    QLabel *toLabel;
    QLineEdit *toLine;
    QLabel *ccLabel;
    QLineEdit *ccLine;
    QLabel *bccLabel;
    QLineEdit *bccLine;
    QLabel *subjectLabel;
    QLineEdit *subjectLine;
    QPushButton *pushButton;
    QLabel *label;
    QListWidget *listWidget;

    void setupUi(QDialog *NewMessage)
    {
        if (NewMessage->objectName().isEmpty())
            NewMessage->setObjectName(QStringLiteral("NewMessage"));
        NewMessage->resize(926, 682);
        NewMessage->setMinimumSize(QSize(100, 75));
        messageBody = new QTextEdit(NewMessage);
        messageBody->setObjectName(QStringLiteral("messageBody"));
        messageBody->setGeometry(QRect(30, 250, 691, 341));
        sendButton = new QPushButton(NewMessage);
        sendButton->setObjectName(QStringLiteral("sendButton"));
        sendButton->setGeometry(QRect(700, 630, 75, 23));
        cancelButton = new QPushButton(NewMessage);
        cancelButton->setObjectName(QStringLiteral("cancelButton"));
        cancelButton->setGeometry(QRect(800, 630, 75, 23));
        bodyLabel = new QLabel(NewMessage);
        bodyLabel->setObjectName(QStringLiteral("bodyLabel"));
        bodyLabel->setGeometry(QRect(30, 230, 46, 13));
        headerFrame = new QFrame(NewMessage);
        headerFrame->setObjectName(QStringLiteral("headerFrame"));
        headerFrame->setGeometry(QRect(30, 20, 871, 201));
        headerFrame->setFrameShape(QFrame::StyledPanel);
        headerFrame->setFrameShadow(QFrame::Raised);
        gridLayout = new QGridLayout(headerFrame);
        gridLayout->setObjectName(QStringLiteral("gridLayout"));
        toLabel = new QLabel(headerFrame);
        toLabel->setObjectName(QStringLiteral("toLabel"));

        gridLayout->addWidget(toLabel, 0, 0, 1, 1);

        toLine = new QLineEdit(headerFrame);
        toLine->setObjectName(QStringLiteral("toLine"));

        gridLayout->addWidget(toLine, 0, 1, 1, 2);

        ccLabel = new QLabel(headerFrame);
        ccLabel->setObjectName(QStringLiteral("ccLabel"));

        gridLayout->addWidget(ccLabel, 0, 3, 1, 1);

        ccLine = new QLineEdit(headerFrame);
        ccLine->setObjectName(QStringLiteral("ccLine"));

        gridLayout->addWidget(ccLine, 0, 4, 1, 1);

        bccLabel = new QLabel(headerFrame);
        bccLabel->setObjectName(QStringLiteral("bccLabel"));

        gridLayout->addWidget(bccLabel, 0, 5, 1, 1);

        bccLine = new QLineEdit(headerFrame);
        bccLine->setObjectName(QStringLiteral("bccLine"));

        gridLayout->addWidget(bccLine, 0, 6, 1, 1);

        subjectLabel = new QLabel(headerFrame);
        subjectLabel->setObjectName(QStringLiteral("subjectLabel"));

        gridLayout->addWidget(subjectLabel, 1, 0, 1, 2);

        subjectLine = new QLineEdit(headerFrame);
        subjectLine->setObjectName(QStringLiteral("subjectLine"));

        gridLayout->addWidget(subjectLine, 1, 2, 1, 3);

        pushButton = new QPushButton(headerFrame);
        pushButton->setObjectName(QStringLiteral("pushButton"));

        gridLayout->addWidget(pushButton, 2, 0, 1, 3);

        label = new QLabel(NewMessage);
        label->setObjectName(QStringLiteral("label"));
        label->setGeometry(QRect(740, 230, 81, 16));
        listWidget = new QListWidget(NewMessage);
        listWidget->setObjectName(QStringLiteral("listWidget"));
        listWidget->setGeometry(QRect(740, 250, 161, 341));

        retranslateUi(NewMessage);

        QMetaObject::connectSlotsByName(NewMessage);
    } // setupUi

    void retranslateUi(QDialog *NewMessage)
    {
        NewMessage->setWindowTitle(QApplication::translate("NewMessage", "New Message", 0));
        sendButton->setText(QApplication::translate("NewMessage", "Send", 0));
        cancelButton->setText(QApplication::translate("NewMessage", "Cancel", 0));
        bodyLabel->setText(QApplication::translate("NewMessage", "Body", 0));
        toLabel->setText(QApplication::translate("NewMessage", "To:", 0));
        ccLabel->setText(QApplication::translate("NewMessage", "CC:", 0));
        bccLabel->setText(QApplication::translate("NewMessage", "BCC:", 0));
        subjectLabel->setText(QApplication::translate("NewMessage", "Subject:", 0));
        pushButton->setText(QApplication::translate("NewMessage", "Add Attachments", 0));
        label->setText(QApplication::translate("NewMessage", "Attachments:", 0));
    } // retranslateUi

};

namespace Ui {
    class NewMessage: public Ui_NewMessage {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_NEWMESSAGE_H
