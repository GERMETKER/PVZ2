#ifndef _CONE_HPP_
#define _CONE_HPP_
#include "Harvest.hpp"
class Cone : public Harvest
{
public:
    Cone() = default;
    Cone(float weight, std::string name) :Harvest(weight, name) {}
    Cone(const Cone& other) = default;
    ~Cone() {}



protected:


private:
};

#endif
