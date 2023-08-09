#include <iostream>
using namespace std;

/**
 * 多态与虚函数 P250
*/

// 通过基类指针实现多态
class A
{
public:
    virtual void Print()
    {
        cout << "A::Print" << endl;
    }
};

class B : public A
{
public:
    virtual void Print()
    {
        cout << "B::Print" << endl;
    }
};

class D : public A
{
public:
    virtual void Print()
    {
        cout << "D::Print" << endl;
    }
};

class E : public B
{
public:
    virtual void Print()
    {
        cout << "E::Print" << endl;
    }
};

int main()
{
    A a; B b; D d; E e;
    A *pa = &a; //pa指向基类对象a
    B *pb = &b;
    pa->Print();
    pa = pb; //pa指向派生类对象b
    pa->Print();
    pa = &d;
    pa->Print();
    pa = &e;
    pa->Print();
    return 0;
}