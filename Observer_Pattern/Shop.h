//
// Created by Jorge on 6/29/2019.
//

#ifndef OBSERVER_PATTERN_SHOP_H
#define OBSERVER_PATTERN_SHOP_H

#include <iostream>
#include <string>
#include "Observer.h"

class Shop : Observer
{
    std::string name;
    float price;
public:
    Shop(std::string n);
    void Update(float price);
};


#endif //OBSERVER_PATTERN_SHOP_H
