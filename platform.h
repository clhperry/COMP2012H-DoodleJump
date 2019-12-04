#ifndef PLATFORM_H
#define PLATFORM_H

#include<string>

#include<block.h>

class Platform : public Block 
{
public: 
    Platform();
    void setColour();
private:
   std::string colour;
};

#endif
