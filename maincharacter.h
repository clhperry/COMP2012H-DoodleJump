#ifndef MAINCHARACTER_H
#define MAINCHARACTER_H

#include <block.h>

class MainCharacter: public Block
{
public:
    MainCharacter();
    void shoot();
    bool dropping();

private:
    int g;
};

#endif // MAINCHARACTER_H
