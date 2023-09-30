#ifndef PIZZASTORE_H
#define PIZZASTORE_H
#include "Pizza.h"
#include <memory>
class PizzaStore{
public:
    unique_ptr<Pizza> orderPizza(string type){
        auto pizza = createPizza(type);
        if(pizza!=nullptr){
            cout<<"\n---- Making a "+pizza->getName()<<"---- \n \n";
            pizza->prepare();
            pizza->bake();
            pizza->cut();
            pizza->box();
        }
        return pizza;
    }

    virtual unique_ptr<Pizza> createPizza(string type) = 0;
};

#endif