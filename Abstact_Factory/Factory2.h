#ifndef FACTORY2_H
#define FACTORY2_H

#include "Factory.h"
#include "ProductA2.h"
#include "ProductB2.h"

class Factory2: public Factory{
public:
    ProductA* createProductA(){
        return new ProductA2();
    }

    ProductB* createProductB(){
        return new ProductB2();
    }
};
#endif