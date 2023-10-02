#ifndef SUBMEALBUILDERA_H
#define SUBMEALBUILDERA_H

#include "MealBuilder.h"
class SubMealBuilderA: public MealBuilder{
public:
    void buildDrink(){
        meal->setDrink("Cola");
    }

    void buildFood(){
        meal->setFood("Hamburger");
    }
};
#endif