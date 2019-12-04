#ifndef BLOCK_H
#define BLOCK_H

#include <string>
#include <QRect>

#include "gameimpl.h"

class Block
{

public:
    Block();
    void setName(std::string name);
    const std::string getName();
    const QRect& getRect();
    void setImage(std::string path);
    void moveHorizontally();
    void moveVertically();


private:
    std::string imagePath;
    std::string name;
    QRect rect;
    GameImpl *hostImpl;
};

#endif // BLOCK_H
