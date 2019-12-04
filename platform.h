#ifndef PLATFORM_H
#define PLATFORM_H
#include <string>
#include <QRect>

class Platform : public Block 
{
public: 
  Platform();
  int getHeight();
  int getWidth();
  void setColour(); 
  
private:
  QRect Rect
  int height;
  int width;
  std::string colour;
};

#endif
