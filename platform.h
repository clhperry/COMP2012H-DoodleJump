#ifndef PLATFORM_H
#define PLATFORM_H

class Platform : public Block 
{
public: 
    Platform();
    void setColour();
private:
   std::string colour;
};

#endif
