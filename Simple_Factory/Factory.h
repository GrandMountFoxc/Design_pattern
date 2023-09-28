#include "ConcreteProductA.h"
#include "ConcreteProductB.h"

class Factory{
public:
    static Product* getProduct(string str){
        Product* product = nullptr;
        if(str=="A"){
            product = new ConcreteProductA();
        }else if(str=="B"){
            product = new ConcreteProductB();
        }
        return product;
    }
};