#include "block.h"
#include "helper.h"

Block::Block(std::string name, QRect rect, GameImpl *hostImpl) {
    setName(name);
    this->hostImpl = hostImpl;
    this->rect = rect;
    setImage(helper::getImagePath(name));
    
}

void
Block::setName(std::string name) {
    this->name = name;
}

const std::string
Block::getName() {
    return name;
}

const QRect&
Block::getRect() {
    return rect;
}

void
Block::setImage(std::string path) {
    QPixmap pix(path.c_str());
    this->setPixmap(pix);
}

void moveHorizontally() {

}

void moveVertically() {

}
