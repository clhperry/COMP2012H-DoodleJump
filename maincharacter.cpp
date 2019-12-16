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

/*
//move left & right
MainCharacter::moveHorizontally(QKeyEvent* event) {
  if (event->key() == Qt::Key_Left && QKeyEvent::count() < 1) {
    setPos(x()-10, y()); //move left
  }
  if (event->key() == Qt::Key_Right && QKeyEvent::count() < 1) {
    setPos(x()+10, y()); //move right
}

//Jump
void
MainCharacter::moveVertically() {

}
}

*/
