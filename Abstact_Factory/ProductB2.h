#ifndef PRODUCTB2_H
#define PRODUCTB2_H

#include <iostream>
#include "ProductB.h"

using namespace std;

class ProductB2: public ProductB{
public:
    void show(){
        cout<<"Create product B2"<<endl;
    }
};
#endif