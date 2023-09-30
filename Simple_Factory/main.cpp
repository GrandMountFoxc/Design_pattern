#include <iostream>
#include "Factory.h"

using namespace std;


int main(){
    Product* product = nullptr;

    product = Factory::getProduct("A");
    product->methodProduct();
    product->getProduction();

    return 0;
}
