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
    int getHeight();
    int getWidth();
    void moveHorizontally();
    void moveVertically();


private:
    std::string imagePath;
    std::string name;
    QRect Rect;
    int dy;
    int dx;
    GameImpl *hostImpl;
};

#endif // BLOCK_H
