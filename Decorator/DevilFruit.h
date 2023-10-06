#ifndef DEVILFRUIT_H
#define DEVILFRUIT_H

#include "Soilder.h"

class DevilFruit: public Soilder
{
protected:
    Soilder* m_human = nullptr;
public:
    DevilFruit() {}
    void enhancement(Soilder* soilder){
        m_human = soilder;
        m_name = m_human->getName();
    }

    virtual ~DevilFruit(){}
};
#endif