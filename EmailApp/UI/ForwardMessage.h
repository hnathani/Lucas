#ifndef FORWARDMESSAGE_H
#define FORWARDMESSAGE_H
#include "newmessage.h"

/**
 * @brief The ForwardMessage class
 *
 *  Subclass of NewMessage that allows us to append
 *  a forward string to the subject.
 */

class ForwardMessage : public NewMessage
{
    Q_OBJECT

public:
    explicit ForwardMessage();
    void setTo(const QString &to);
    void setBody(const QString &body);
    void setSubject(const QString &subject);
    ~ForwardMessage();

private:
    void sendEmail();


private slots:
};
#endif // FORWARDMESSAGE_H
