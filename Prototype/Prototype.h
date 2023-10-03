#ifndef PROTOTYPE_H
#define PROTOTYPE_H

#include <iostream>
#include <string>

using namespace std;

enum Type{
    PROTOTYPE_1 = 0,
    PROTOTYPE_2
};

class Prototype{
protected:
    string prototype_name_;
    float prototype_feild_;

public:
    Prototype(){}
    Prototype(string prototype_name): prototype_name_(prototype_name){}
    virtual ~Prototype(){}
    virtual Prototype* clone() const = 0;
    virtual void method(float prototype_feild){
        this->prototype_feild_ = prototype_feild;
        cout<<"Call method from "<< prototype_name_<<" with feild:"<<prototype_feild<<endl;
    }
};
#endif