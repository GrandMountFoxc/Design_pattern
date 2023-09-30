#include <iostream>
#include <vector>
#include <mutex>

using namespace std;

class Singleton{
public:
    static Singleton* getInstance(){
        if(m_instance_ptr==nullptr){
            unique_lock<mutex> lock(mtx);
            if(m_instance_ptr==nullptr){
                m_instance_ptr = new Singleton();
            }
        }
        return m_instance_ptr;
    }

    void getAddress(){
        cout<<this<<endl;
    }

private:
    static Singleton* m_instance_ptr;
    static mutex mtx;
    // mutex mtx;  // 不能用普通成员要用静态成员，因为在创建lock的时候没有创建对象没办法获取到成员变量
    Singleton(){
        cout<<"Construction"<<endl;
    }
    Singleton(Singleton&) = delete;
    Singleton& operator = (const Singleton&) = delete;
    ~Singleton(){
        cout<<"Deconstruction"<<endl;
    }

};

Singleton* Singleton::m_instance_ptr = nullptr;


int main(){
    Singleton* instance1 = Singleton::getInstance();
    instance1->getAddress();
    Singleton* instance2 = Singleton::getInstance();
    instance2->getAddress();

    return 0;
}