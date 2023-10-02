#ifndef SUBMEALBUILDERB_H
#define SUBMEALBUILDERB_H

#include "MealBuilder.h"
class SubMealBuilderB: public MealBuilder{
public:
    void buildDrink(){
        meal->setDrink("Oringe");
    }

    void buildFood(){
        meal->setFood("Chicken roll");
    }
};
#endif