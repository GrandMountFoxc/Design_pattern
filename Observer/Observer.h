#ifndef OBSERVER_H
#define OBSERVER_H

#include"NewsAgency.h"
#include <string>

class Observer
{
private:
    string m_name;
    NewsAgency* m_news;
public:
    Observer() {}
    Observer(string name, NewsAgency* news): m_name(name), m_news(news){
        m_news->attach(this);
    }
    void unsubscribe(){
        m_news->deattach(this);
    }
    virtual void update(string msg) = 0;
    virtual ~Observer() {}
};

#endif