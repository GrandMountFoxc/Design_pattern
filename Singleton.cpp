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


int main(){

    return 0;
}