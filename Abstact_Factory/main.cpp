#include "ProductA.h"
#include "ProductB.h"
#include "Factory1.h"
#include "Factory2.h"

int main(){
    Factory1* fc1 = new Factory1();
    Factory2* fc2 = new Factory2();
    ProductA* pa = fc1->createProductA();
    ProductB* pb = fc2->createProductB();
    pa->show();
    pb->show();

    return 0;
}