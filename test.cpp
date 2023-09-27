#include <iostream>

using namespace std;

void func(int a){
    cout<<a<<endl;
}

class B{
public:
    B(int a){
        cout<<a<<endl;
    }
};

class Test{
public:
    Test(B _b): b(_b){}
    B b;
private:
    static int a;
};

int main(){
    

    return 0;
}
