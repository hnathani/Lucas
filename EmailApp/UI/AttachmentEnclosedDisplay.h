#ifndef ATTACHMENTENCLOSEDDISPLAY_H
#define ATTACHMENTENCLOSEDDISPLAY_H

#include <QWidget>
#include "IMAP/IMAPAttachment.h"
#include <QPushButton>
/**
 * @brief The AttachmentEnclosedDisplay class
 *  Button to click on received email to open attachment.
 *
 */
class AttachmentEnclosedDisplay : public QWidget
{
    Q_OBJECT
public:
    explicit AttachmentEnclosedDisplay(IMAPAttachment* attachment, QWidget *parent = 0);
    IMAPAttachment* getAttachment();
    
signals:
    
public slots:
    void attachmentClicked();
private:
    IMAPAttachment* m_attachment;
    QPushButton* m_label;

    void createUI();


};

#endif // ATTACHMENTENCLOSEDDISPLAY_H
