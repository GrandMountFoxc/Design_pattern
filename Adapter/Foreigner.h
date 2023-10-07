#ifndef FOREIGNER_H
#define FOREIGNER_H

#include <iostream>

using namespace std;

class Foreigner{
public:
    virtual string confession() = 0;
    void setResult(string msg){
        cout<<"熊猫说："<<msg<<endl;
    }
    virtual ~Foreigner(){

    }
};

class American: public Foreigner{
public:
    string confession() override {
        return string("我是畜生，是强盗！");
    }
};

class French: public Foreigner{
public:
    string confession() override {
        return string("我是垃圾，是凶手！");
    }
};

#endif