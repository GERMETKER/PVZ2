#ifndef _APPLE_HPP_
#define _APPLE_HPP_

#include "Fruit.hpp"
class Apple : public Fruit
{
public:
    Apple()
    {}
    Apple(float weight, std::string name) :Fruit(weight, name) {}
    Apple(const Apple& other) = default;
    ~Apple() {}
    


};

#endif