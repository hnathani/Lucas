#ifndef MIMETEXT_H
#define MIMETEXT_H

#include "MimePart.h"

/**
 * @brief The MimeText class
 *  Represents the text part of the message body
 *  Adapted from: https://github.com/keelerm84/SupportMessage
 */

class MimeText : public MimePart
{
public:

    MimeText(const QString &text = "");
    ~MimeText();

    void setText(const QString & text);

    const QString & getText() const;
protected:

    QString text;

    void prepare();

};

#endif // MIMETEXT_H
