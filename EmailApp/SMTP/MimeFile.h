#ifndef MIMEFILE_H
#define MIMEFILE_H

#include "MimePart.h"
#include <QFile>

/**
 * @brief The MimeFile class
 *  Adapted from: https://github.com/keelerm84/SupportMessage
 */

class MimeFile : public MimePart
{
    Q_OBJECT
public:

    MimeFile(QFile *f);
    ~MimeFile();
protected:

    QFile* file;

    virtual void prepare();

};

#endif // MIMEFILE_H
