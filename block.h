#ifndef BLOCK_H
#define BLOCK_H

#include <string>
#include <QRect>

class Block
{

public:
    Block();
    std::string getName();
    void setImage(std::string path);


private:
    std::string imagePath;
    std::string name;
    QRect Rect;
    GameImpl *hostImpl;
};

#endif // BLOCK_H
