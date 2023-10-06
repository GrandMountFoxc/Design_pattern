#ifndef QUAKEFRUIT_H
#define QUAKEFRUIT_H

#include "DevilFruit.h"

class QuakeFruit: public DevilFruit
{
public:
    QuakeFruit() {}
    void fight() override {
        m_human->fight();
        cout<<m_human->getName()<<"吃了震震果实, 可以在任意空间引发震动, 摧毁目标...!"<<endl;
    }
};
#endif