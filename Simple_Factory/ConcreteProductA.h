#include <iostream>
#ifndef _PRODUCT_H_
#define _PRODUCT_H_

#include "Product.h"

#endif

class ConcreteProductA: public Product{
public:
    void getProduction(){
        cout<<"get production A"<<endl;
    }
};