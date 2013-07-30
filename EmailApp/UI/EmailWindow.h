#ifndef EMAILWINDOW_H
#define EMAILWINDOW_H

#include <QMainWindow>
#include "IMAP/IMAPClient.h"
#include "IMAP/IMAPFolder.h"
#include "EmailTableWidget.h"
#include "FolderTreeWidget.h"
#include "EmailViewWidget.h"
#include "NavigationWidget.h"
#include "EmailHeaderWidget.h"
#include "EmailReplyWidget.h"
#include "ComposeWindow.h"
#include "LoginWindow.h"

/**
 * @brief The EmailWindow class
 *  Subclass of QMainWindow that acts as the main window.
 *  Holds all the UI elements together, and sets up signals and slots for each UI element.
 */

class EmailWindow : public QMainWindow
{
    Q_OBJECT
public:
    explicit EmailWindow(QWidget *parent = 0);
    
private:
    IMAPClient m_client;
    QWidget* m_centralWidget;
    FolderTreeWidget* m_folderTreeWidget;
    EmailTableWidget* m_emailTableWidget;
    EmailViewWidget* m_emailViewWidget;
    NavigationWidget* m_navigationWidget;
    EmailHeaderWidget* m_emailHeaderWidget;
    EmailReplyWidget* m_emailReplyWidget;
    ComposeWindow* m_composeWindow;
    LoginWindow* m_loginWindow;

    void createUI();
    void addFolderChildren(FolderTreeItem* parent, QList<IMAPFolder*>& folders);
    void setupConnections();
signals:

public slots:
    void userLoggedIn();


};

#endif // EMAILWINDOW_H
