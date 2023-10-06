#ifndef BARTOLOMEO_H
#define BARTOLOMEO_H

#include "Observer.h"

class Bartolomeo: public Observer{
public:
    using Observer::Observer;
    void update(string msg) override{
        cout<<"@@@路飞的头号粉丝巴托洛米奥收到消息："<<msg<<endl;
    }
};

#endif