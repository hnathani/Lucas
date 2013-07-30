#ifndef CLICKABLELABEL_H
#define CLICKABLELABEL_H

#include <QLabel>
/**
 * @brief The ClickableLabel class
 *  Subclass of QLabel that allows it to be clicked using a mousePressEvent.
 */

class ClickableLabel : public QLabel
{
    Q_OBJECT
public:
    explicit ClickableLabel( const QString& text ="", QWidget * parent = 0 );

signals:
    void clicked();

protected:
    void mousePressEvent ( QMouseEvent * event ) ;
    
};

#endif // CLICKABLELABEL_H
