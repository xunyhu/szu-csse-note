#include <iostream>
#include <string>
using namespace std;

/*
    类的继承与派生
    第三节  派生类的构造函数和析构函数

    2. 复制构造函数
    对于一个类，如果程序中没有定义复制构造函数，则编译器会自动生成一个隐含的复制构造函数。这个隐含的复制构造函数会自动调用基类的复制构造函数，对派生类新增的成员对象一一执行复制。
*/

class A
{
public:
    A()
    {
        i = 100;
        cout << "类A的默认构造函数" << endl;
    }
    A(const A &s)
    {
        i = s.i;
        cout << "类A的复制构造函数" << endl;
    }
    int getValue();
    void setValue(int);

private:
    int i;
};
int A::getValue()
{
    return i;
}
void A::setValue(int k)
{
    i = k;
}

class B : public A
{

private:
    float f;

public:
    B()
    {
        f = 20.1;
        cout << "类B默认构造函数" << endl;
    }
    B(const B &v) : A::A(v), f(v.f)
    {
        cout << "类B复制构造函数" << endl;
    }
    float getValue();
    int getValue()
    {
        return A::getValue();
    }
};
float B::getValue()
{
    return f;
}

int main()
{
    A a;
    B b;
    B bb(b);
    return 0;
}