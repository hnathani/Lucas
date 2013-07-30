#ifndef EMAILTABLEITEM_H
#define EMAILTABLEITEM_H

#include <QTableWidgetItem>
#include "IMAP/IMAPEmail.h"

/**
 * @brief The EmailTableItem class
 *  Subclass of QTableWidgetItem which allows IMAPEmails to be items for
 *  our custom table widget.
 */

class EmailTableItem : public QTableWidgetItem {

public:
    EmailTableItem(IMAPEmail* email);
    virtual ~EmailTableItem();
    IMAPEmail* getEmail();
private:
    IMAPEmail* m_email;
};


#endif // EMAILTABLEITEM_H
