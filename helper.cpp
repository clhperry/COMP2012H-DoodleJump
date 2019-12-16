#include "helper.h"

namespace helper {

    bool checkCollision(Block& b1, Block& b2) {
      return b1.getRect().intersects(b2.getRect()); // intersected = collided = true
    }

    std::string generateName(std::vector<Block> pool, std::string type) {
        return type + std::to_string(pool.size());
    }

    std::string getImagePath(std::string type, int status){
      if (type == "Maincharacter"){
        if (status == 0){
          return ":/resources/image/Maincharacter/" + std::to_string(status) + ".png";
        }
      }
      if (type == "Platform"){
        if (status >= 0 && status <= 2){
          return ":/resources/image/Platform/" + std::to_string(status) + ".png";
        }
      }
    }

}
