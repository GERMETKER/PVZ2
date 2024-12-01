#ifndef _PEAR_HPP_
#define _PEAR_HPP_
#include "Fruit.hpp"
class Pear : public Fruit
{
public:
    Pear()
    {}
    Pear(float weight, std::string name) :Fruit(weight, name) {}
    Pear(const Pear& other) = default;
    ~Pear() {}

};



#endif