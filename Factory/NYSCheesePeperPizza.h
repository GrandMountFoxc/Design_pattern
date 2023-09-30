#ifndef NYSCHEESEPEPERPIZZA_H
#define NYSCHEESEPEPERPIZZA_H

#include "Pizza.h"
class NYSCheesePeperPizza: public Pizza{
public:
    NYSCheesePeperPizza(){
        name = "NY style pepperoni pizza";
        dough = "Thin crust dough";
        sauce = "Marinara sauce";
        toppings.push_back("Grated reggiano cheese");
        toppings.push_back("Sliced pepperoni");
        toppings.push_back("Garlic");
        toppings.push_back("Onion");
        toppings.push_back("Mushrooms");
        toppings.push_back("Red pepper");
    }
};
#endif