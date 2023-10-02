#include "Meal.h"
#include "KFCWaiter.h"
#include "SubMealBuilderA.h"
#include "SubMealBuilderB.h"
#include <iostream>

using namespace std;

int main(){
    KFCWaiter* waiter = new KFCWaiter();
    MealBuilder* ma = new SubMealBuilderA();
    MealBuilder* mb = new SubMealBuilderB();
    waiter->setMealBuilder(ma);
    Meal* meal = waiter->construct();
    cout<<"Drink is: "<<meal->getDrink()<<", food is: "<<meal->getFood()<<endl;
    
    waiter->setMealBuilder(mb);
    meal = waiter->construct();
    cout<<"Drink is: "<<meal->getDrink()<<", food is: "<<meal->getFood()<<endl;
    return 0;
}