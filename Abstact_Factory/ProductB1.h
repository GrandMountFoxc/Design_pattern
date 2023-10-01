#ifndef PRODUCTB1_H
#define PRODUCTB1_H

#include <iostream>
#include "ProductB.h"

using namespace std;

class ProductB1: public ProductB{
public:
    void show(){
        cout<<"Create product B1"<<endl;
    }
};
#endif