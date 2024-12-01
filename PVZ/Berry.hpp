#ifndef _BERRY_HPP_
#define _BERRY_HPP_

#include "Harvest.hpp"
class Berry : public Harvest
{
public:
    Berry() = default;
    Berry(float weight, std::string name) :Harvest(weight, name) {}
    Berry(const Berry& other) = default;
    ~Berry() {}
    

protected:


private:
};


#endif