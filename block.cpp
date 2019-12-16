#include "block.h"
#include "helper.h"

Block::Block(std::string type, QPoint topLeft, QPoint bottomRight,
             GameImpl *hostImpl, QWidget *parent):
                                                QLabel(parent) {
    this->hostImpl = hostImpl;
    setFrameRect(QRect(topLeft, bottomRight));
    this->type = type;
    setImage(helper::getImagePath(type));
    
}

/*
Block::Block(const Block& cobj) : QLabel(cobj.nativeParentWidget()) {

    this->hostImpl = cobj.hostImpl;
    setRect(cobj.rect().topLeft(), cobj.rect().bottomRight());
    this->type = cobj.type;
    setImage(helper::getImagePath(type));

}
*/

const std::string
Block::getType() {
    return type;
}

const QRect
Block::getRect() {
    return this->frameRect();
}

void
Block::setImage(std::string path) {
    QPixmap pix(path.c_str());
    this->setPixmap(pix);
}

void moveHorizontally() {
    return;
}

void moveVertically() {
    return;
}
