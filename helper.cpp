#include "helper.h"

bool
helper::checkCollision(Block& b1, Block& b2) {

    return b1.getRect().intersects(b2.getRect()); // intersected = collided = true

}
