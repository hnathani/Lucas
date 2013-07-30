#ifndef COMPOSEWINDOW_H
#define COMPOSEWINDOW_H

#include <QDialog>
#include "EmailReplyWidget.h"
#include "User.h"

class ComposeWindow : public QDialog
{
    Q_OBJECT
public:
    explicit ComposeWindow(IMAPClient* client, QWidget *parent = 0, Qt::WindowFlags flags = 0);
    
signals:
    
public slots:
    void close();
    void display();

private:
    EmailReplyWidget* m_emailReplyWidget;
    IMAPClient* m_client;
    void createUI();
    void setConnections();

    
};

#endif // COMPOSEWINDOW_H
