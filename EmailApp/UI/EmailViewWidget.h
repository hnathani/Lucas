#ifndef EMAILVIEWWIDGET_H
#define EMAILVIEWWIDGET_H
#include <QWebView>
#include <QFrame>
#include <QTextEdit>
#include "IMAP/IMAPEmail.h"

/**
 * @brief The EmailViewWidget class
 *  Subclassed QFrame that holds the content of a received email
 *  when pressed.
 */

class EmailViewWidget : public QFrame {

Q_OBJECT

public:
    EmailViewWidget(QWidget* parent);
public slots:
    void displayEmail(IMAPEmail* email);
    void clearAndHide();
private:
    void createUI();
    void initializeSettings();
    void cleanDirectory();

    QWebView* m_webView;
    QTextEdit* m_textView;
};



#endif // EMAILVIEWWIDGET_H
