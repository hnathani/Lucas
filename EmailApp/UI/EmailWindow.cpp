#include "EmailWindow.h"
#include <QHBoxLayout>
EmailWindow::EmailWindow(QWidget *parent) :
    QMainWindow(parent)
{
    createUI();
}

void EmailWindow::createUI() {

    m_centralWidget = new QWidget(this);
    m_centralWidget->setSizePolicy(QSizePolicy::Expanding, QSizePolicy::Expanding);
    setCentralWidget(m_centralWidget);

    QHBoxLayout* mainLayout = new QHBoxLayout(m_centralWidget);
    mainLayout->setSpacing(0);
    mainLayout->setMargin(0);

    m_centralWidget->setLayout(mainLayout);

    m_folderTreeWidget = new FolderTreeWidget(m_centralWidget);
    mainLayout->addWidget(m_folderTreeWidget, 1);

    QVBoxLayout* emailLayout = new QVBoxLayout();
    mainLayout->addLayout(emailLayout, 6);

    m_navigationWidget = new NavigationWidget(m_centralWidget);
    emailLayout->addWidget(m_navigationWidget, 1);

    m_emailTableWidget = new EmailTableWidget(m_centralWidget);
    emailLayout->addWidget(m_emailTableWidget, 4);

    m_emailHeaderWidget = new EmailHeaderWidget(m_centralWidget);
    emailLayout->addWidget(m_emailHeaderWidget, 1);

    m_emailViewWidget = new EmailViewWidget(m_centralWidget);
    emailLayout->addWidget(m_emailViewWidget, 5);

    m_emailReplyWidget = new EmailReplyWidget(&m_client, m_centralWidget);
    emailLayout->addWidget(m_emailReplyWidget, 5);

    m_composeWindow = new ComposeWindow(&m_client, this, Qt::Window );
    m_composeWindow->hide();

    m_loginWindow = new LoginWindow(&m_client, this);

    setupConnections();
    showMaximized();
    m_loginWindow->show();
}

void EmailWindow::setupConnections() {
    connect(m_folderTreeWidget, SIGNAL(onFolderClick(IMAPFolder*)) , m_emailTableWidget, SLOT(folderSelect(IMAPFolder*)) );
    connect(m_emailTableWidget, SIGNAL(onEmailClick(IMAPEmail*)) , m_emailViewWidget, SLOT(displayEmail(IMAPEmail*)) );
    connect(m_navigationWidget, SIGNAL(nextClicked()) , m_emailTableWidget, SLOT(nextPage()) ) ;
    connect(m_navigationWidget, SIGNAL(prevClicked()) , m_emailTableWidget, SLOT(prevPage()) ) ;
    connect(m_navigationWidget, SIGNAL(searchClicked(QString)) , m_emailTableWidget, SLOT(search(QString)) ) ;
    connect(m_emailTableWidget, SIGNAL(emailPageSelected(int,int,int)) , m_navigationWidget, SLOT(emailsSelected(int,int,int)) );
    connect(m_folderTreeWidget, SIGNAL(onFolderClick(IMAPFolder*)) , m_emailHeaderWidget, SLOT(clearAndHide()) );
    connect(m_emailTableWidget, SIGNAL(onEmailClick(IMAPEmail*)) , m_emailHeaderWidget, SLOT(setEmail(IMAPEmail*)) );
    connect(m_folderTreeWidget, SIGNAL(onFolderClick(IMAPFolder*)) , m_emailViewWidget, SLOT(clearAndHide()) );
    connect(m_folderTreeWidget, SIGNAL(onFolderClick(IMAPFolder*)), m_emailReplyWidget, SLOT(reset()));
    connect(m_emailTableWidget, SIGNAL(onEmailClick(IMAPEmail*)), m_emailReplyWidget, SLOT(reset()));

    connect(m_emailHeaderWidget, SIGNAL(replyClicked(IMAPEmail*)), m_emailReplyWidget, SLOT(reply(IMAPEmail*)));
    connect(m_emailHeaderWidget, SIGNAL(replyAllClicked(IMAPEmail*)), m_emailReplyWidget, SLOT(replyToAll(IMAPEmail*)));
    connect(m_emailHeaderWidget, SIGNAL(forwardClicked(IMAPEmail*)), m_emailReplyWidget, SLOT(forward(IMAPEmail*)));
    connect(m_emailHeaderWidget, SIGNAL(deleteClicked(IMAPEmail*)), m_emailReplyWidget, SLOT(reset()));
    connect(m_emailHeaderWidget, SIGNAL(deleteClicked(IMAPEmail*)), m_emailTableWidget, SLOT(reload()));
    connect(m_navigationWidget, SIGNAL(composeClicked()), m_composeWindow, SLOT(display()));

    connect(m_loginWindow, SIGNAL(loginSuccessful()), SLOT(userLoggedIn()));

    connect(m_navigationWidget, SIGNAL(searchClicked(QString)), m_emailViewWidget, SLOT(clearAndHide()));
    connect(m_navigationWidget, SIGNAL(searchClicked(QString)), m_emailReplyWidget, SLOT(reset()));
    connect(m_navigationWidget, SIGNAL(searchClicked(QString)), m_emailHeaderWidget, SLOT(clearAndHide()));
}

void EmailWindow::userLoggedIn() {
    m_folderTreeWidget->loadFolders(&m_client);
}
