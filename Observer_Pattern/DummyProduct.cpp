//
// Created by Jorge on 6/29/2019.
//

#include "DummyProduct.h"

void DummyProduct::ChangePrice(float price)
{
    Notify(price);
}