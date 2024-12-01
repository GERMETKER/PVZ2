#ifndef _BLUEBERRY_HPP_
#define _BLUEBERRY_HPP_

#include "Berry.hpp"
class Blueberry : public Berry
{
public:
    Blueberry() {}
    Blueberry(float weight, std::string name) :Berry(weight, name) {}
    Blueberry(const Blueberry& other) = default;
    ~Blueberry() {}

};



#endif

/*



*/
