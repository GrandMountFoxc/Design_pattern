#ifndef CHICAGOPIZZASTORE_H
#define CHICAGOPIZZASTORE_H

#include "PizzaStore.h"
#include "ChicagoCheesePizza.h"
#include "ChicagoPeperCheesePizza.h"

class ChicagoPizzaStore:public PizzaStore{
public:
    unique_ptr<Pizza> createPizza(string type){
        unique_ptr<Pizza> pizza = nullptr;
        if(type=="cheese"){
            pizza = make_unique<ChicagoCheesePizza>();
        }else if(type=="peper"){
            pizza = make_unique<ChicagoPeperCheesePizza>();
        }
        return pizza;
    }
};
#endif