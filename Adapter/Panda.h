#ifndef PANDA_H
#define PANDA_H

#include <iostream>

using namespace std;

class Panda
{
public:
    void recvMsg(string msg){
        cout<<msg<<endl;
    }

    string sendMsg(){
        return string("你们这群强盗，凶手，我做鬼也不会放过你们的！");
    }
};

#endif