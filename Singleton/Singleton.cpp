#include <iostream>
#include <mutex>

using namespace std;

class Singleton{
public:
    static Singleton* getInstance(){
        if(m_singleton_ptr==nullptr){
            unique_lock<mutex> lock(mtx);
            if(m_singleton_ptr==nullptr){
                m_singleton_ptr = new Singleton();
            }
        }
        return m_singleton_ptr;
    }

    void getAddress(){
        cout<<this<<endl;
    }

private:
    static Singleton* m_singleton_ptr;
    static mutex mtx;
private:
    Singleton(){
        cout<<"Construction"<<endl;
    }

    Singleton(Singleton& singleton) = delete;
    Singleton& operator=(const Singleton& singleton) = delete;

    ~Singleton(){
        cout<<"Deconstruction"<<endl;
    }
};

Singleton* Singleton::m_singleton_ptr = nullptr;
mutex Singleton::mtx;

int main(){

    Singleton* single1 = Singleton::getInstance();
    single1->getAddress();
    Singleton* single2 = Singleton::getInstance();
    single2->getAddress();

    return 0;
}