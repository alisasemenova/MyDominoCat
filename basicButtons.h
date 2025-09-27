#ifndef BASICBUTTONS_H
#define BASICBUTTONS_H
#include <QGraphicsPixmapItem>
#include <QString>

class Button : public QGraphicsPixmapItem
{
public:
    Button(QPixmap q): QGraphicsPixmapItem(q){}
    int num;

    void mousePressEvent(QGraphicsSceneMouseEvent *event);
    void hoverEnterEvent(QGraphicsSceneHoverEvent *event);
    void hoverLeaveEvent(QGraphicsSceneHoverEvent *event);

signals:
    void clicked();
private:



};

#endif // BASICBUTTONS_H
