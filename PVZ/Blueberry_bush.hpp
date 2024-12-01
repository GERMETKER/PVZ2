#ifndef _BLUEBERRY_BUSH_HPP_
#define _BLUEBERRY_BUSH_HPP_

#include "Bush.hpp"
#include "Blueberry.hpp"

class Blueberry_bush : public Bush
{
public:
    Blueberry_bush() = default;
    Blueberry_bush(int size, std::string name) :Bush(size, name) {}
    //void ConiesGrow(Apple& con)override
    //{
    //    apples.emplace_back(&con);
    //    
    //}
    virtual void FruitsGrow(Blueberry& con)
    {
        blueberries.emplace_back(&con);
        //std::cout << berries.size() << "\n";
    }

    Blueberry* Take()override
    {
        if (blueberries.size() != 0)
        {
            Blueberry* ret_blueberry = blueberries[blueberries.size() - 1];
            //ret_pear = new Pear(pears[pears.size() - 1]->GetWeight(), pears[pears.size() - 1]->GetName());

            return ret_blueberry;
        }
    }
private:
    std::vector<Blueberry*> blueberries;

};



#endif