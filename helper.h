#ifndef HELPER_H
#define HELPER_H

#include "block.h"

namespace helper {

    bool checkCollision(Block& b1, Block& b2) {

        return b1.getRect().intersects(b2.getRect()); // two rectangles intersected = two blocks collided
    }
}

#endif // HELPER_H
