#ifndef PRODUCTA1_H
#define PRODUCTA1_H

#include <iostream>
#include "ProductA.h"

using namespace std;

class ProductA1: public ProductA{
public:
    void show(){
        cout<<"Create Product A1"<<endl;
    }
};
#endif