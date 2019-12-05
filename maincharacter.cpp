#include "maincharacter.h"

Maincharacter::Maincharacter() {
  setImage(/*include image path later*/);
}

//move left & right
Maincharacter::moveHorizontally() {
  if (Keyboard::isKeyPressed(Keyboard::Right) && QKeyEvent::count() < 1) x+=3; //pseudocode - use QKeyEvent to implement
  if (Keyboard::isKeyPressed(Keyboard::Left) && QKeyEvent::count() < 1) x-=3;
}

//Jump
Maincharacter::moveVertically() {
  if (Keyboard::isKeyPressed(Keyboard::Up) && QKeyEvent::count() < 1) y+=3; //pseudocode - use QKeyEvent to implement
}
