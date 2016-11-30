#ifndef PLAYER_H
#define PLAYER_H

#include <QGraphicsPixmapItem>
#include <QGraphicsRectItem>
#include <QKeyEvent>
#include <QObject>
#include <QMediaPlayer>

class Player: public QObject, public QGraphicsPixmapItem
{
    Q_OBJECT //Macro
public:
     Player(QGraphicsItem * parent=0);
    void keyPressEvent(QKeyEvent *event);
    void focusOutEvent(QFocusEvent* event);
public slots:
    void spawn();
private:
    QMediaPlayer * eggsound;
};
#endif // PLAYER_H
