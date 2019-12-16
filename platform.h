#ifndef PLATFORM_H
#define PLATFORM_H

#include<string>
#include"block.h"

class Platform : public Block 
{
public: 
    Platform(QPoint topLeft, QPoint bottomRight, GameImpl* hostImpl);

private:
   std::string colour;
};

#endif // PLATFORM_H
