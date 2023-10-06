#ifndef DARKFRUIT_H
#define DARKFRUIT_H

#include "DevilFruit.h"

class DarkFruit: public DevilFruit
{
private:
    void warning(){
        cout<<m_human->getName()<<",你要注意: 吃了暗暗果实, 身体元素化之后不能躲避攻击，会吸收所有伤害!"<<endl;
    }
public:
    DarkFruit() {}
    void fight() override {
        m_human->fight();
        cout<<m_human->getName()<<"吃了暗暗果实, 可以拥有黑洞一样的无限吸引力..."<<endl;
        warning();
    }
};
#endif