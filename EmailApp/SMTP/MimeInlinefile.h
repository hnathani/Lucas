#ifndef MIMEINLINEFILE_H
#define MIMEINLINEFILE_H

#include "MimeFile.h"

/**
 * @brief The MimeInlineFile class
 *  Created for inline attachments - adapted from: https://github.com/keelerm84/SupportMessage
 */

class MimeInlineFile : public MimeFile
{
public:

    MimeInlineFile(QFile *f);
    ~MimeInlineFile();

protected:

    virtual void prepare();

};

#endif // MIMEINLINEFILE_H
