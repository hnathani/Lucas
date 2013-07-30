#ifndef FOLDERTREEITEM_H
#define FOLDERTREEITEM_H

#include <QTreeWidgetItem>
#include "IMAP/IMAPFolder.h"

/**
 * @brief The FolderTreeItem class
 *
 *  Subclassed QWidgetItem created so that our FolderTreeItems
 *  can be IMAPFolders.
 */

class FolderTreeItem : public QTreeWidgetItem {

public:
    FolderTreeItem(IMAPFolder* folder);
    virtual ~FolderTreeItem();
    IMAPFolder* getFolder();
    QString getName();
private:
    IMAPFolder* m_folder;
};


#endif // FOLDERTREEITEM_H
