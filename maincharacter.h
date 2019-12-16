#ifndef MAINCHARACTER_H
#define MAINCHARACTER_H

#include <block.h>

class MainCharacter: public Block
{
public:
    MainCharacter(QPoint topLeft, QPoint BottomRight, GameImpl *hostImpl);
    void moveHorizontally(QKeyEvent* event);
    void acceleration();
    void setDead(bool dead);
    bool getDead();
    void setPos() override;
   
private:
    bool dead = false;
    int g = 2;
    int dy = -34;
    int dx = 0;
};

#endif // MAINCHARACTER_H
