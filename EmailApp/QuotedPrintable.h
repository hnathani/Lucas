#ifndef QUOTEDPRINTABLE_H
#define QUOTEDPRINTABLE_H

#include <QObject>
#include <QByteArray>

/**
 * @brief The QuotedPrintable class
 *  Encodes 8-bit ASCII data fit for a 7-bit path, so that
 *  it's suitable for MIME objects.
 *
 *  Adapted from: https://github.com/keelerm84/SupportMessage
 */

class QuotedPrintable : public QObject
{
    Q_OBJECT
public:

    static QString& encode(const QByteArray &input);
    static QByteArray& decode(const QString &input);

private:
    QuotedPrintable();
};

#endif // QUOTEDPRINTABLE_H
