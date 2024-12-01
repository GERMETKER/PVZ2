#ifndef _FRUIT_HPP_
#define _FRUIT_HPP_
#include "Harvest.hpp"
class Fruit : public Harvest
{
public:
    Fruit()
    {}
    Fruit(float weight, std::string name) :Harvest(weight, name) {}
    Fruit(const Fruit& other) = default;
    ~Fruit() {}
    


protected:


private:
};

#endif