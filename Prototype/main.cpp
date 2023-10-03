#include "ProtoFactory.h"

void client(ProtoFactory& protofactory){
    cout<<"Let's create Type 1. \n";

    Prototype* prototype = protofactory.createPrototype(Type::PROTOTYPE_1);
    prototype->method(90.0f);

    delete prototype;

    cout<<"\n";

    cout<<"Let's create Type 2. \n";

    prototype = protofactory.createPrototype(Type::PROTOTYPE_2);
    prototype->method(10.0f);

    delete prototype;
}

int main(){
    ProtoFactory* protofactory = new ProtoFactory();
    client(*protofactory);
    
    delete protofactory;
    return 0;
}