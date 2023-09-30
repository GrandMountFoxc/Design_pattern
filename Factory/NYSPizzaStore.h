#ifndef NYSPIZZASTORE_H
#define NYSPIZZASTORE_H

#include "PizzaStore.h"
#include "NYSCheesePizza.h"
#include "NYSCheesePeperPizza.h"

class NYSPizzaStore:public PizzaStore{
public:
    unique_ptr<Pizza> createPizza(string type){
        unique_ptr<Pizza> pizza = nullptr;
        if(type=="cheese"){
            pizza = make_unique<NYSCheesePizza>();
        }else if(type=="peper"){
            pizza = make_unique<NYSCheesePeperPizza>();
        }
        return pizza;
    }
};
#endif