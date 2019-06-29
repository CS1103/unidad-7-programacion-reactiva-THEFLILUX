//
// Created by Jorge on 6/29/2019.
//

#include "Shop.h"

Shop::Shop(std::string name)
{
    this->name = name;
}

void Shop::Update(float price)
{
    this->price = price;

    std::cout << "El precio de "<< name << " es ahora "<< price << "\n";
}