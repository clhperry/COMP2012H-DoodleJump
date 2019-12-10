#ifndef HELPER_H
#define HELPER_H

#include "block.h"

namespace helper {
  std::string getImagePath(std::string name, int status = 0);
  bool checkCollision(Block& b1, Block& b2);
}

#endif // HELPER_H
