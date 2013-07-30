#ifndef MIMEHTML_H
#define MIMEHTML_H

#include "MimeText.h"
/**
 * @brief The MimeHtml class
 *  Created when html email message are sent - adapted from: https://github.com/keelerm84/SupportMessage
 *
 */

class MimeHtml : public MimeText
{
    Q_OBJECT
public:

    MimeHtml(const QString &html = "");
    ~MimeHtml();

    void setHtml(const QString & html);

    const QString& getHtml() const;

protected:

    virtual void prepare();

};

#endif // MIMEHTML_H
