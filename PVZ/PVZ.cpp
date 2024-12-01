#include <iostream>
#include <Windows.h>
#include <vector>
#include "Plants.hpp"
#include "Tree.hpp"
#include "Bush.hpp"
#include "Fruit.hpp"
#include "Harvest.hpp"
#include "Berry.hpp"
#include "Cone.hpp"
#include "Apple_tree.hpp"
#include "Pear_tree.hpp"
#include "Blueberry_bush.hpp"
#include "Raspberry_bush.hpp"

//size = 0 это золотая середина. Меньше - меньше, больше - больше.

int main()
{
    SetConsoleCP(1251);
    SetConsoleOutputCP(1251);
    Bush president;
    Tree dub( 75, "Dub");
    Harvest banan;
    Berry beb(20, "beb");
    Berry bob(21, "bob");
    president.BerrysGrow(beb);
    president.BerrysGrow(bob);
    Berry* bobr = president.Take();
    bobr->PrintAll();
    Fruit cocos(15, "banan");
    dub.FruitsGrow(cocos);
    Fruit* belka = dub.Get();
    belka->PrintAll();
    Apple_tree yablonya(50, "yablonya");
    Apple red(10, "red");
    yablonya.FruitsGrow(red);
    Apple* yellow = yablonya.Get();
    yellow->PrintAll();
}


