#ifndef CHICAGOPEPERCHEESEPIZZA_H
#define CHICAGOPEPERCHEESEPIZZA_H

#include "Pizza.h"

class ChicagoPeperCheesePizza: public Pizza{
public:
    ChicagoPeperCheesePizza(){
        name = "Chicago Style Pepperoni Pizza";
        dough = "Extra thick crust dough";
        sauce = "Plum tomato sauce";
        toppings.push_back("Shredded mozzarella");
        toppings.push_back("Sliced pepperoni");
        toppings.push_back("No olives or eggplant because that should not go on a pizza");
    }
};

#endif