#ifndef MEALBUILDER_H
#define MEALBUILDER_H

#include "Meal.h"
class MealBuilder
{
public:
    Meal* meal = nullptr;
    MealBuilder(){
        meal = new Meal();
    }
    virtual void buildDrink() = 0;
    virtual void buildFood() = 0;

    Meal* getMeal(){
        return meal;
    }
    ~MealBuilder(){
        delete meal;
        meal = nullptr;
    }
};

#endif