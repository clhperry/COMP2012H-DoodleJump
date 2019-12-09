#ifndef PLATFORM_H
#define PLATFORM_H

#include<string>

#include<block.h>

class Platform : public Block 
{
public: 
    Platform(const std::string& name, const std::string& colour, GameImpl* hostImpl, QWidget* parent = nullptr);
    std::string getName() override;
    std::string getColour();
    void setColour(std::string& colour);
private:
   std::string colour;
};

#endif
