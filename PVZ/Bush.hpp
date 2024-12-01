#ifndef _BUSH_HPP_
#define _BUSH_HPP_
#include "Plants.hpp"
#include "Berry.hpp"
class Bush : public Plants
{
public:
    Bush()
    {
        size_ = -50;
        razmer = "Little";
    }
    Bush(int size, std::string name)
    {
        name_ = name;
        size_ = size;
        if (size < 0)
        {
            razmer = "Little";
        }
        else
        {
            razmer = -50;
            razmer = "Little";
        }
    }
    void SetSize(int size)override
    {
        if (size < 0)
        {
            size_ = size;
            razmer = "Little";
        }
        else
        {
            size_ = -50;
            razmer = "Little";
        }
    }
    Bush(const Bush& other)
    {
        size_ = other.size_;
        name_ = other.name_;
    }
    ~Bush() {}
    virtual void BerrysGrow(Berry& ber)
    {
        berries.emplace_back(&ber);
        //std::cout << berries.size() << "\n";
    }
    virtual Berry* Take()
    {
        if (berries.size() != 0)
        {
            Berry* ret_berry = berries[berries.size() - 1];
            //ret_berry = new Berry(berries[berries.size() - 1]->GetWeight(), berries[berries.size() - 1]->GetName());
            return ret_berry;
        }
    }

private:
    std::vector <Berry*> berries;
    //int COfBerrys = 15;
};

#endif