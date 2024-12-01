#ifndef _PEAR_TREE_HPP_
#define _PEAR_TREE_HPP_
#include "Pear.hpp"
#include "Tree.hpp"
class Pear_tree : public Tree
{
public:
    Pear_tree() = default;
    Pear_tree(int size, std::string name) :Tree(size, name) {}
    //void ConiesGrow(Apple& con)override
    //{
    //    apples.emplace_back(&con);
    //    
    //}
    virtual void FruitsGrow(Pear& con)
    {
        pears.emplace_back(&con);
        //std::cout << berries.size() << "\n";
    }

    Pear* Get()override
    {
        if (pears.size() != 0)
        {
            Pear* ret_pear = pears[pears.size() - 1];
            //ret_pear = new Pear(pears[pears.size() - 1]->GetWeight(), pears[pears.size() - 1]->GetName());
            
            return ret_pear;
        }
    }
private:
    std::vector<Pear*> pears;
};



#endif