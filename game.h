#ifndef GAME_H
#define GAME_H

#include <QGraphicsView>
#include <QWidget>
#include <QGraphicsScene>
#include "player.h"
#include "score.h"
#include "lifes.h"

class Game: public QGraphicsView{
public:
    Game(QWidget * parent=0);
    void pause();

    //TODO set private
    bool running = false; //TODO starts false
    QGraphicsScene * scene;
    Player * player;
    Score * score;
    Lifes * lifes;
    QTimer * timer;

};


#endif // GAME_H
