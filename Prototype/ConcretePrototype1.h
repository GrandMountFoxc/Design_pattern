#ifndef CONCRETEPROTOTYPE1_H
#define CONCRETEPROTOTYPE1_H

#include "Prototype.h"

class ConcretePrototype1: public Prototype{
private:
    float prototype_feild1_;

public:
    ConcretePrototype1(string prototype_name, float prototype_feild): Prototype(prototype_name), prototype_feild1_(prototype_feild){}

    Prototype* clone() const override{
        return new ConcretePrototype1(*this);
    }
};
#endif