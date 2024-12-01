#ifndef _RASPBERRY_HPP_
#define _RASPBERRY_HPP_

#include "Berry.hpp"
class Raspberry : public Berry
{
public:
    Raspberry() {}
    Raspberry(float weight, std::string name) :Berry(weight, name) {}
    Raspberry(const Raspberry& other) = default;
    ~Raspberry() {}

};



#endif