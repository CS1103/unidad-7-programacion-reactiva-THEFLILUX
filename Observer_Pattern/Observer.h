//
// Created by Jorge on 6/29/2019.
//

#ifndef OBSERVER_PATTERN_OBSERVER_H
#define OBSERVER_PATTERN_OBSERVER_H

class Observer
{
public:
    virtual void Update(float price) = 0;
};

#endif //OBSERVER_PATTERN_OBSERVER_H
