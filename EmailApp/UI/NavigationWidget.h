#ifndef NAVIGATIONWIDGET_H
#define NAVIGATIONWIDGET_H

#include <QWidget>
#include <QPushButton>
#include <QLineEdit>
#include <QLabel>

/**
 * @brief The NavigationWidget class
 *  Subclassed QFrame that holds the next and previous buttons
 *  to navigate through the paging of email items.
 */

class NavigationWidget : public QFrame
{
    Q_OBJECT
public:
     NavigationWidget(QWidget *parent = 0);
    
signals:
     void nextClicked();
     void prevClicked();
     void searchClicked(QString query);
     void composeClicked();
public slots:
     void emailsSelected(int start, int end, int total);
     void onSearchEnterPressed();
     void onComposeClick();

private:
    QPushButton* m_composeButton;
    QPushButton* m_prevEmailPage;
    QPushButton* m_nextEmailPage;
    QLabel* m_pageLabel;
    QLineEdit* m_searchBar;
    void createUI();

    
};

#endif // NAVIGATIONWIDGET_H
