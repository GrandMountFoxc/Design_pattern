#ifndef MEAL_H
#define MEAL_H

#include <string>

using namespace std;

class Meal{
private:
    string food;
    string drink;
public:
    string getDrink(){
        return drink;
    }

    string getFood(){
        return food;
    }

    void setDrink(string _drink){
        drink = _drink;
    }

    void setFood(string _food){
        food = _food;
    }
};
#endif