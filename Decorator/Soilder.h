#ifndef SOILDER_H
#define SOILDER_H

#include <iostream>
#include <string>

using namespace std;


class Soilder
{
protected:
    string m_name;
public:
    Soilder() {}
    Soilder(string name): m_name(name){
    }

    string getName(){
        return m_name;
    }

    virtual void fight() = 0;

    virtual ~Soilder() {};
};

#endif