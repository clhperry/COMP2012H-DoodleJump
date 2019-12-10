#include "maincharacter.h"
//#include <QDebug>

Maincharacter::Maincharacter() {
  setImage(/*include image path later*/);
}

//move left & right
Maincharacter::moveHorizontally(QKeyEvent* event) {
  if (event->key() == Qt::Key_Left && QKeyEvent::count() < 1) {
    setPos(x()-10, y());
  }//move left
  if (event->key() == Qt::Key_Right && QKeyEvent::count() < 1) {
    setPos(x()+10, y()); //move right
}

//Jump
/*Maincharacter::moveVertically() {
}
