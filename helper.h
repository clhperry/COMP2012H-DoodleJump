#ifndef HELPER_H
#define HELPER_H

#include "block.h"
#include <vector>


namespace helper {
  std::string getImagePath(std::string type, int status = 0);
  std::string generateName(std::vector<Block> pool, std::string type);
  bool checkCollision(Block& b1, Block& b2);
}

#endif // HELPER_H
