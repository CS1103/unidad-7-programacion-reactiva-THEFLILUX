//
// Created by Jorge on 6/29/2019.
//

#ifndef OBSERVER_PATTERN_SUBJECT_H
#define OBSERVER_PATTERN_SUBJECT_H

#include <vector>
#include <list>
#include "shop.h"

class Subject
{
    std::vector<Shop*> list;

public:
    void Attach(Shop *product);
    void Detach(Shop *product);
    void Notify(float price);
};



#endif //OBSERVER_PATTERN_SUBJECT_H
