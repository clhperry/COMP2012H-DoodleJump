#ifndef BLOCK_H
#define BLOCK_H

#include <string>
#include <QRect>

class Block
{

public:
    Block();
    std::string setName();
    const std::string getName();
    const QRect getRect();
    void setImage(std::string path);
    void moveHorizontally();
    void moveVertically();


private:
    std::string imagePath;
    std::string name;
    QRect Rect;
    GameImpl *hostImpl;
};

#endif // BLOCK_H
