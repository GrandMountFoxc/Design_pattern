#ifndef TEACH_H
#define TEACH_H

#include "Soilder.h"
class Teach: public Soilder
{
public:
    using Soilder::Soilder;

    void fight(){
        cout << m_name << "依靠惊人的力量和高超的体术战斗..." << endl;
    }
};

#endif