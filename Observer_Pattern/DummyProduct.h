//
// Created by Jorge on 6/29/2019.
//

#ifndef OBSERVER_PATTERN_DUMMYPRODUCT_H
#define OBSERVER_PATTERN_DUMMYPRODUCT_H

#include "subject.h"

class DummyProduct : public Subject
{
public:
    void ChangePrice(float price);
};


#endif //OBSERVER_PATTERN_DUMMYPRODUCT_H
