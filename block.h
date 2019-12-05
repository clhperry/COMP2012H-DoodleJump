#ifndef BLOCK_H
#define BLOCK_H

#include <string>
#include <QRect>
#include <QKeyEvent> //for keyboard inputs

#include "gameimpl.h"

class Block : public QLabel //need to inherit QLabel in order to use setImage() Ref: PA3 
{

public:
    Block();
    void setName(std::string name);
    const std::string getName();
    const QRect& getRect();
    void moveHorizontally();
    void moveVertically();

protected: 
    void setImage(std::string path); //referred PA3
    
private:
    std::string imagePath;
    std::string name;
    QRect rect;
    GameImpl *hostImpl;
};

#endif // BLOCK_H
