#ifndef _HARVEST_HPP_
#define _HARVEST_HPP_
#include <iostream>
#include <Windows.h>
#include <vector>
class Harvest
{
public:
    Harvest()
    {}
    Harvest(float weight, std::string name)
    {
        weight_ = weight;
        name_ = name;
    }
    Harvest(const Harvest& other)
    {
        weight_ = other.weight_;
        name_ = other.name_;
    }
    ~Harvest() {}
    std::string GetName()
    {
        return name_;
    }
    virtual void SetWeight(float weight)
    {
        weight_ = weight;
    }
    virtual void SetName(std::string name)
    {
        name_ = name;
    }
    virtual float GetWeight()const
    {
        return weight_;
    }
    virtual std::string GetName()const
    {
        return name_;
    }
    virtual void PrintAll()
    {
        std::cout << name_ << " " << weight_ << "\n";
    }

protected:
    std::string name_;
    float weight_;
private:
};

#endif

