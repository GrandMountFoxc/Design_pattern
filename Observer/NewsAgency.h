#ifndef NEWSAGENCY_H
#define NEWSAGENCY_H

#include <list>
#include <memory>
#include <iostream>

using namespace std;

class Observer;

class NewsAgency
{
protected:
    list<Observer*> m_list;
public:
    NewsAgency() {}
    void attach(Observer* ob){
        m_list.push_back(ob);
    }
    void deattach(Observer* ob){
        m_list.remove(ob);
    }
    virtual void notify(string msg) = 0;
    virtual ~NewsAgency() {}
};

#endif