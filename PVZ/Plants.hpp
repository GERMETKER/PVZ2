#ifndef _PLANTS_HPP_
#define _PLANTS_HPP_
#include <iostream>
#include <Windows.h>
#include <vector>

class Plants
{
public:
    Plants()
    {
        size_ = 0;
    }
    Plants(int size, std::string name)
    {
        size_ = size;
        name_ = name;
        if (size_ > 0)
        {
            razmer = "Big";
        }
        else if (size < 0)
        {
            razmer = "Little";
        }
        else
        {
            razmer = "Medium";
        }
    }
    /*virtual void SetSize(int size) = 0;
    virtual void SetName(std::string name) = 0;
    virtual int GetSize() = 0;
    virtual std::string GetName() = 0;*/

    virtual void SetSize(int size)
    {
        size_ = size;
        if (size_ > 0)
        {
            razmer = "Big";
        }
        else if (size < 0)
        {
            razmer = "Little";
        }
        else
        {
            razmer = "Medium";
        }
    }
    virtual void SetName(std::string name)
    {
        name_ = name;
    }
    virtual int GetSize()
    {
        return size_;
    }
    virtual std::string GetName()
    {
        return name_;
    }


protected:
    std::string razmer;
    int size_;
    std::string name_;
private:
};

#endif