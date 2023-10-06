#ifndef GOSSIP_H
#define GOSSIP_H

#include "NewsAgency.h"
#include "Observer.h"

class Gossip: public NewsAgency
{
public:
    void notify(string msg) override{
        cout<<"八卦新闻报社一共有<"<<m_list.size()<<">人"<<endl;

        for(const auto& item:m_list){
            item->update(msg);
        }
    }
};

#endif