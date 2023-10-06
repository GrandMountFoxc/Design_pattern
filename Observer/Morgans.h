#ifndef MORGANS_H
#define MORGANS_H

#include "NewsAgency.h"
#include "Observer.h"

class Observer;

class Morgans: public NewsAgency{
public:
    void notify(string msg) override{
        cout<<"摩根斯新闻报社的订阅者一共有<"<<m_list.size()<<">人"<<endl;

        for(const auto &item:m_list){
            item->update(msg);
        }
    }
};

#endif