#ifndef KFCWAITER_H
#define KFCWAITER_H

#include "MealBuilder.h"

class KFCWaiter
{
private:
    MealBuilder* mb;
public:
    Meal* construct(){
        mb->buildDrink();
        mb->buildFood();

        return mb->getMeal();
    }

    void setMealBuilder(MealBuilder* builder){
        mb = builder;
    }
};

#endif