#ifndef DRAGON_H
#define DRAGON_H

#include "Observer.h"

class Dragon: public Observer
{
public:
    using Observer::Observer;

    void update(string msg) override{
        cout<<"@@@路飞的爸爸革命军龙收到消息："<<msg<<endl;
    }
};

#endif