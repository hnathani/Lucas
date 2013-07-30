#ifndef MIMECONTENTFORMATTER_H
#define MIMECONTENTFORMATTER_H

#include <QObject>
#include <QByteArray>

/**
 * @brief The MimeContentFormatter class
 *  Formats the content for mime messages - adapted from: https://github.com/keelerm84/SupportMessage
 */

class MimeContentFormatter : public QObject
{
    Q_OBJECT
public:
    MimeContentFormatter (int max_length = 76);

    void setMaxLength(int l);
    int getMaxLength() const;

    QString format(const QString &content, bool quotedPrintable = false) const;

protected:
    int max_length;

};

#endif // MIMECONTENTFORMATTER_H
