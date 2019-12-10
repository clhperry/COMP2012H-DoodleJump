#ifndef HELPER_H
#define HELPER_H

#include "block.h"

namespace Helper {
  std::string getImagePath(std:L:string name, int status = 0);
  bool checkCollision(Block& b1, Block& b2);
}

#endif // HELPER_H
