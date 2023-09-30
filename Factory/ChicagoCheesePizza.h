#ifndef CHICAGOCHEESEPIZZA_H
#define CHICAGOCHEESEPIZZA_H

#include "Pizza.h"

class ChicagoCheesePizza: public Pizza{
public:
    ChicagoCheesePizza(){
        name = "Chicago style deep dish pizza";
        dough = "Extra thick crust dough";
        sauce = "Plum tomato sauce";
        toppings.push_back("Shredded mozzarella");
    }
};

#endif
