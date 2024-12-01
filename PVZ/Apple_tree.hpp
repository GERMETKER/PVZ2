#ifndef _APPLE_TREE_HPP_
#define _APPLE_TREE_HPP_
#include "Tree.hpp"
#include "Apple.hpp"
class Apple_tree : public Tree
{
public:

    Apple_tree() = default;
    Apple_tree(int size, std::string name) :Tree(size, name) {}
    //void ConiesGrow(Apple& con)override
    //{
    //    apples.emplace_back(&con);
    //    
    //}
    virtual void FruitsGrow(Apple& con)
    {
        apples.emplace_back(&con);
        //std::cout << berries.size() << "\n";
    }

    Apple* Get()override
    {
        if (apples.size() != 0)
        {
            Apple* ret_apple = apples[apples.size() - 1];
            //ret_apple = new Apple(apples[apples.size() - 1]->GetWeight(), apples[apples.size() - 1]->GetName());
            return ret_apple;
        }
    }

private:
    std::vector<Apple*> apples;
};


#endif
