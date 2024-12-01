#ifndef _TREE_HPP_
#define _TREE_HPP_
#include "Plants.hpp"
#include "Harvest.hpp"
#include "Fruit.hpp"
class Tree : public Plants
{
public:
    Tree()
    {
        size_ = 50;
        razmer = "Big";
    }

    Tree(int size, std::string name)
    {
        name_ = name;
        size_ = size;
        if (size_ > 0)
        {
            razmer = "Big";
        }
        else
        {
            size_ = 50;
            razmer = "Big";
        }
    }
    void SetSize(int size)override
    {
        if (size > 0)
        {
            size_ = size;
            razmer = "Big";
        }
        else
        {
            size_ = 50;
            razmer = "Big";
        }
    }

    Harvest* Take()
    {
        sizeHarv -= 1;
        Harvest* SMango = new Harvest(500, "mango");
        return SMango;
    }

    virtual void FruitsGrow(Fruit& con)
    {
        fruits.emplace_back(&con);
        //std::cout << berries.size() << "\n";
    }

    virtual Fruit* Get()
    {
        if (fruits.size() != 0)
        {
            Fruit* ret_fruit = fruits[fruits.size() - 1];
            //ret_fruit = new Fruit(fruits[fruits.size() - 1]->GetWeight(), fruits[fruits.size() - 1]->GetName());
            return ret_fruit;
        }
    }



private:
    int sizeHarv = 15;
    std::vector <Fruit*> fruits;

};


#endif
