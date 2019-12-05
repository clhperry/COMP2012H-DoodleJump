#ifndef MAINCHARACTER_H
#define MAINCHARACTER_H

#include <block.h>
#include <QLabel>

class MainCharacter: public Block
{
public:
    MainCharacter();
    void shoot();
    bool dropping();

private:
    int g;
    int dy;
    int dx;
};

#endif // MAINCHARACTER_H
