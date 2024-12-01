#ifndef _RASPBERRY_BUSH_HPP_
#define _RASPBERRY_BUSH_HPP_
#include "Raspberry.hpp"
#include "Bush.hpp"

class Raspberry_bush : public Bush
{
public:
    Raspberry_bush() = default;
    Raspberry_bush(int size, std::string name) :Bush(size, name) {}
    //void ConiesGrow(Apple& con)override
    //{
    //    apples.emplace_back(&con);
    //    
    //}
    virtual void FruitsGrow(Raspberry& con)
    {
        raspberries.emplace_back(&con);
        //std::cout << berries.size() << "\n";
    }

    Raspberry* Take()override
    {
        if (raspberries.size() != 0)
        {
            Raspberry* ret_raspberry = raspberries[raspberries.size() - 1];
            //ret_pear = new Pear(pears[pears.size() - 1]->GetWeight(), pears[pears.size() - 1]->GetName());

            return ret_raspberry;
        }
    }


private:
	std::vector<Raspberry*> raspberries;
};


#endif