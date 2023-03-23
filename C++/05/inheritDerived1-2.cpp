#include <iostream>
using namespace std;

/*
    类的继承与派生
    第一节  类的继承与类的派生
*/
/*
    如果基类有友元类或友元函数，则其派生类不会因继承关系而也有此友元类或友元函数。
    如果基类是某类的友元，则这种友元关系是被继承的。即被派生类继承过来的成员函数，如果原来是某类的友元函数，那么它作为派生类的成员函数仍然是某类的友元函数。
    总之，基类的友元不一定是派生类的友元；基类的成员函数是某类的友元函数，则其作为派生类继承的成员函数仍是某类的友元函数。
*/

class another;
class Base
{
private:
    float x;

public:
    void print(const another &K);
};

class Derived : public Base
{
private:
    float y;

// public:
//     void print(const another &K);
};

class another
{
private:
    int aaa;

public:
    another()
    {
        aaa = 100;
    }
    friend void Base::print(const another &K); // 基类的成员函数声明为本类的友元
    // friend void Derived::print(const another &K);
};
void Base::print(const another &K)
{
    cout << "Base:" << K.aaa << endl;
}
// void Derived::print(const another &K)
// {
//     cout << "Derived:" << K.aaa << endl;
// }

int main()
{
    Base a;
    Derived d;
    another ano;
    a.print(ano);
    d.print(ano);
    return 0;
}