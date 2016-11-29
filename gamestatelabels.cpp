#include"gamestatelabels.h"
#include <QFont>
#include <QFontDatabase>

GameStateLabels::GameStateLabels(QGraphicsItem *parent): QGraphicsTextItem(parent){

    int id = QFontDatabase::addApplicationFont(":/fonts/Cookies.ttf");
    family = QFontDatabase::applicationFontFamilies(id).at(0);

    beforeGame();
}

void GameStateLabels::beforeGame()
{
    // draw the text
    QFont cookies(family, 14);
    setPos(20,60);
    setHtml(before);
    setDefaultTextColor(Qt::blue);
    setFont(cookies);
}


void GameStateLabels::afterGame()
{
    QFont cookies(family, 20);
    setPos(290,250);
    setHtml(after);
    setDefaultTextColor(Qt::red);
    setFont(cookies);
}

void GameStateLabels::blink()
{
    setDefaultTextColor(colors[count++%colors.size()]);
}
