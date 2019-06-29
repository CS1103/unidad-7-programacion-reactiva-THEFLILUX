#include <iostream>
#include "DummyProduct.h"

int main(int argc, char* argv[])
{
    DummyProduct product;

    Shop shop1("Item 1");
    Shop shop2("Item 2");

    product.Attach(&shop1);
    product.Attach(&shop2);

    product.ChangePrice(23.0f);

    product.Detach(&shop2);

    product.ChangePrice(26.0f);

    getchar();
    return 0;
}