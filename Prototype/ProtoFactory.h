#ifndef PROTOFACTORY_H
#define PROTOFACTORY_H

#include "ConcretePrototype1.h"
#include "ConcretePrototype2.h"
#include <unordered_map>

using namespace std;

class ProtoFactory{
private:
    unordered_map<Type, Prototype*> prototypes_;

public:
    ProtoFactory(){
        prototypes_[Type::PROTOTYPE_1] = new ConcretePrototype1("Prototype_1", 60.0f);
        prototypes_[Type::PROTOTYPE_2] = new ConcretePrototype2("Prototype_2", 60.0f);
    }

    ~ProtoFactory(){
        delete prototypes_[Type::PROTOTYPE_1];
        delete prototypes_[Type::PROTOTYPE_2];
    }

    Prototype* createPrototype(Type type){
        return prototypes_[type]->clone();
    }
};

#endif