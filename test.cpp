#include <iostream>
using namespace std;

class GermaSoldier
{
public:
    virtual GermaSoldier* clone() = 0;
    virtual string whoAmI() = 0;
    virtual ~GermaSoldier() {}
};

class Soldier66 : public GermaSoldier
{
public:
    GermaSoldier* clone()
    {
        return new Soldier66(*this);
    }
    string whoAmI()
    {
        return string("我是杰尔马66的超级士兵!!!");
    }
};

class Soldier67 : public GermaSoldier
{
public:
    GermaSoldier* clone()
    {
        return new Soldier67(*this);
    }
    string whoAmI()
    {
        return string("我是杰尔马67的超级士兵!!!");
    }
};

int main()
{
    GermaSoldier* obj = new Soldier66;
    GermaSoldier* soldier = obj->clone();
    cout << soldier->whoAmI() << endl;
    delete soldier;
    delete obj;

    obj = new Soldier67;
    soldier = obj->clone();
    cout << soldier->whoAmI() << endl;
    delete soldier;
    delete obj;
}