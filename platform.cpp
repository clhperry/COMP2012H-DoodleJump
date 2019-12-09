#include "platform.h"

#include <string>

Platform::Platform(const std::string& name, GameImpl* hostImpl, QWidget* parent): Block(name, hostImpl, parent) {
  setImage(Helper::getImagePath("Platform"));
}

std::string Platform::getName(){
  return "Platform";
}

std::string Platform::getColour(){
  return const std::string& colour;
}

void Platform::setColour(std::string& colour){
  colour = "green";
  /*
  int random;
  if (score < 1000) (hostImpl getScore();)
    random = 0;
  if else (score < 2000)
    random = rand()%2;
  if else (score < 3000)
    random = rand()%3;
    
  if (random == 1)
    setImage(Helper::getImagePath("Platform", 1)); brown colour, crack when being stepped on
  if (random == 2)
    setImage(Helper::getImagePath("Platform". 2)); white colour ,dissappear after being stepped on
  */
}
