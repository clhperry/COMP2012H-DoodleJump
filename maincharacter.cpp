#include "maincharacter.h"
//#include <QDebug>

MainCharacter::MainCharacter(QPoint topLeft, QPoint bottomRight, GameImpl *hostImpl):Block("Maincharacter", topLeft, bottomRight, hostImpl) {

}

void
MainCharacter::setDead(bool dead) {
    this->dead = dead;
}

bool
MainCharacter::getDead() {
    return dead;
}

void
MainCharacter::moveHorizontally(QKeyEvent* event) {
  if (event->key() == Qt::Key_Left) {
    dx = dx-1;
  }
  if (event->key() == Qt::Key_Right) {
    dx = dx+1;
  }
}

void
MainCharacter::acceleration() {
    dy = dy-g;
}

void
MainCharacter::setPos(){
    this->getRect().topLeft().setX(this->getRect().topLeft().x()+dx);
    this->getRect().topLeft().setY(this->getRect().topLeft().y()+dy);
    this->getRect().bottomRight().setX(this->getRect().topLeft().x()+dx);
    this->getRect().bottomRight().setY(this->getRect().topLeft().y()+dy);
    this->setFrameRect(this->getRect());
}

