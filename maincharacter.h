#ifndef MAINCHARACTER_H
#define MAINCHARACTER_H

#include <block.h>

class MainCharacter: public Block
{
public:
    MainCharacter(QPoint topLeft, QPoint topRight, GameImpl *hostImpl);
    void shoot();
    bool dropping();
    void moveHorizontally(QKeyEvent* event);
    void moveVertically();
    void setDead(bool dead);
    bool getDead();
   
private:
    bool dead = false;
    int g = 10;
    int dy = 10;
    int dx = 0;
};

#endif // MAINCHARACTER_H
