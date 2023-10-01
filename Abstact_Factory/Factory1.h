#ifndef FACTORY1_H
#define FACTORY1_H

#include "Factory.h"
#include "ProductA1.h"
#include "ProductB1.h"

class Factory1: public Factory{
public:
    ProductA* createProductA(){
        return new ProductA1();
    }

    ProductB* createProductB(){
        return new ProductB1();
    }
};
#endif