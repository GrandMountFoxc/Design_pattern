#ifndef NYSCHEESEPIZZA_H
#define NYSCHEESEPIZZA_H

#include "Pizza.h"
class NYSCheesePizza:public Pizza{
public:
    NYSCheesePizza(){
        name = "NY Style sauce and cheese pizza";
        dough = "Thin crust dough";
        sauce = "Marinara sauce";
        toppings.push_back("Gratted reggiano cheese");
    }
};
#endif