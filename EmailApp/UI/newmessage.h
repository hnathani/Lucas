#ifndef NEWMESSAGE_H
#define NEWMESSAGE_H

#include <QDialog>

namespace Ui {
class NewMessage;
}
/**
 * @brief The NewMessage class
 *
 *  Class that creates a new email message, that holds the body, subject, to, etc. details
 *  that are needed for a new email.
 */
class NewMessage : public QDialog
{
    Q_OBJECT

public:
    explicit NewMessage(QWidget *parent = 0);
    void setTo(const QString &to);
    void setBody(const QString &body);
    void setSubject(const QString &subject);
    ~NewMessage();

private:
    Ui::NewMessage *ui;

    QString body;
    QString subject;
    QString to;
    QString cc;
    QString bcc;
    QStringList fileNames;
protected:
    void sendEmail();

private slots:
    void on_sendButton_clicked();
    void on_cancelButton_clicked();
    void on_pushButton_clicked();
};

#endif // NEWMESSAGE_H
