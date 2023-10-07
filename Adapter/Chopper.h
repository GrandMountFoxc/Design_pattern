#ifndef CHOPPER_H
#define CHOPPER_H

#include "Panda.h"
#include "Foreigner.h"

class AbstractChopper{
protected:
    Panda m_panda;
    Foreigner* m_foreigner = nullptr;
public:
    AbstractChopper(Foreigner* foreigner): m_foreigner(foreigner){

    }

    virtual void translateToHuman() = 0;
    virtual void translateToPanda() = 0;
    virtual ~AbstractChopper(){

    }
};

class EnglishChopper: public AbstractChopper{
public:
    using AbstractChopper::AbstractChopper;

    void translateToPanda() override{
        string msg = m_foreigner->confession();
        m_panda.recvMsg("美国人说：" + msg);
    }

    void translateToHuman() override{
        string msg = m_panda.sendMsg();
        m_foreigner->setResult("美国佬，" + msg);
    }
};

class FranceChopper: public AbstractChopper{
public:
    using AbstractChopper::AbstractChopper;

    void translateToPanda() override{
        string msg = m_foreigner->confession();
        m_panda.recvMsg("法国人说：" + msg);
    }

    void translateToHuman() override{
        string msg = m_panda.sendMsg();
        m_foreigner->setResult("法国佬，" + msg);
    }
};

#endif