#ifndef SHANKS_H
#define SHANKS_H

#include "Observer.h"

class Shanks: public Observer{
public:
    using Observer::Observer;

    void update(string msg) override{
        cout<<"@@@路飞的引路人红发香克斯收到消息："<<msg<<endl;
    }
};

#endif