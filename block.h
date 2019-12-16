#ifndef BLOCK_H
#define BLOCK_H

#include <string>
#include <QKeyEvent> //for keyboard inputs

#include "gameimpl.h"

class Block : public QLabel
{

public:
    Block(std::string type, QPoint topLeft, QPoint bottomRight, GameImpl *hostImpl, QWidget *parent = nullptr);
    Block(const Block& cobj);
    const std::string getType();
    const QRect getRect();
    virtual void setPos();

protected:
    void setImage(std::string path); //referred PA3

private:
    std::string imagePath;
    std::string type;
    GameImpl *hostImpl;
};

#endif // BLOCK_H
