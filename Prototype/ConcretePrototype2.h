#ifndef CONCRETEPROTOTYPE2_H
#define CONCRETEPROTOTYPE2_H

#include "Prototype.h"

class ConcretePrototype2: public Prototype{
private:
    float prototype_feild2_;

public:
    ConcretePrototype2(string prototype_name, float prototype_feild): Prototype(prototype_name), prototype_feild2_(prototype_feild){}

    Prototype* clone() const override{
        return new ConcretePrototype2(*this);
    }
};
#endif