#ifndef MIMEATTACHMENT_H
#define MIMEATTACHMENT_H

#include <QFile>
#include "MimePart.h"
#include "MimeFile.h"
/**
 * @brief The MimeAttachment class
 *  Creates a mime attachments from file path passed to it
 *  Adapted from: https://github.com/keelerm84/SupportMessage
 */

class MimeAttachment : public MimeFile
{
    Q_OBJECT
public:

    MimeAttachment(QFile* file);
    ~MimeAttachment();
protected:

    virtual void prepare();


};

#endif // MIMEATTACHMENT_H
