#include <iostream>

using namespace std;

class Product{
public:
    void methodProduct(){
        cout<<"The machine is running"<<endl;
    }

    virtual void getProduction() = 0;
};