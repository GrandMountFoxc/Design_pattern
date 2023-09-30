#include <iostream>
#ifndef _PRODUCT_H_
#define _PRODUCT_H_

#include "Product.h"

#endif

class ConcreteProductB: public Product{
public:
    void getProduction(){
        cout<<"get production B"<<endl;
    }
};