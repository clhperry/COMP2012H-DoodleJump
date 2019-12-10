#include "helper.h"

bool Helper::checkCollision(Block& b1, Block& b2) {
  return b1.getRect().intersects(b2.getRect()); // intersected = collided = true
}

std::string Helper::getImagePath(std::string name, int status){
  if (name == "Maincharacter"){
    if (status == 0){
      return ":/resources/image/Maincharacter/" + std::to_string(status) + ".png";
    }
  }
  if (name == "Platform"){
    if (status >= 0 && status <= 2){
      return ":/resources/image/Platform/" + std::to_string(status) + ".png";
    }
  }
}

