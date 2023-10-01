#ifndef FACTORY_H
#define FACTORY_H

#include "ProductA.h"
#include "ProductB.h"

class Factory{
public:
    virtual ProductA* createProductA() = 0;
    virtual ProductB* createProductB() = 0;
};

#endif