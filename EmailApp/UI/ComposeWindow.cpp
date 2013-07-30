#include "ComposeWindow.h"
#include "IMAP/IMAPClient.h"
ComposeWindow::ComposeWindow(IMAPClient* client, QWidget *parent, Qt::WindowFlags flags) :
    QDialog(parent, flags)
{
    m_client = client;
    createUI();
    setConnections();
}

void ComposeWindow::createUI() {
    m_emailReplyWidget = new EmailReplyWidget(m_client, this);
    m_emailReplyWidget->setMinimumSize(QSize(800, 600));
    setModal(true);
}

void ComposeWindow::setConnections() {
    connect(m_emailReplyWidget, SIGNAL(submitPressed()), SLOT(close()));
    connect(m_emailReplyWidget, SIGNAL(closePressed()), SLOT(close()));

}

void ComposeWindow::display() {
    m_emailReplyWidget->compose();
    show();
}

void ComposeWindow::close() {
    hide();
}
