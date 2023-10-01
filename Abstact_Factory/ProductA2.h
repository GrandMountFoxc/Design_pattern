#ifndef PRODUCTA2_H
#define PRODUCTA2_H

#include <iostream>
#include "ProductA.h"

using namespace std;

class ProductA2: public ProductA{
public:
    void show(){
        cout<<"Create Product A2"<<endl;
    }
};
#endif