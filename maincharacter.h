#ifndef MAINCHARACTER_H
#define MAINCHARACTER_H

#include <block.h>

class MainCharacter: public Block
{
public:
    MainCharacter();
    void shoot();
    bool dropping();
    void moveHorizontally();
    void moveVertically();
   
private:
    int g;
    int dy;
    int dx;
};

#endif // MAINCHARACTER_H
